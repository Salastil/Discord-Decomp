// ===== 00290194  FUN_00290194 =====

void FUN_00290194(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x290198);
  (*pcVar1)();
}


// ===== 00290198  FUN_00290198 =====

void FUN_00290198(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x29019c);
  (*pcVar1)();
}


// ===== 0029019c  FUN_0029019c =====

void FUN_0029019c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2901a0);
  (*pcVar1)();
}


// ===== 002901a0  FUN_002901a0 =====

void FUN_002901a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2901a4);
  (*pcVar1)();
}


// ===== 002901a4  margelo::nitro::rive::HybridRiveImageSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridRiveImageSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveImageSpec::loadHybridMethods(HybridRiveImageSpec *this)

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
  basic_string local_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined6 uStack_10e;
  long *local_108;
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
    local_100 = PTR_typeinfo_00394b40;
                    /* try { // try from 00290200 to 0029020f has its CatchHandler @ 00290758 */
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
  while (puVar7 != PTR_typeinfo_name_00394d80) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_c8 = *(long **)(this + lVar5 + 0x10);
      local_d0 = plVar6;
      if (plStack_c8 != (long *)0x0) {
        FUN_00259a00(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_00394b40;
                    /* try { // try from 0029031c to 0029032b has its CatchHandler @ 0029074c */
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
      goto joined_r0x002903d0;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x002903d0:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_118 = (basic_string)0x10;
    uStack_10f = 0;
    uStack_117 = 0x7a695365747962;
    uStack_110 = 0x65;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_118);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002905f4 to 00290607 has its CatchHandler @ 00290800 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_118);
                    /* try { // try from 00290608 to 0029061b has its CatchHandler @ 002907e4 */
      FUN_00263450(&local_d0,&local_80,"\" - a getter with that name already exists!");
                    /* try { // try from 00290620 to 00290657 has its CatchHandler @ 002907c0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00290834;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_118);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00290668 to 0029067b has its CatchHandler @ 002907fc */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_118);
                    /* try { // try from 0029067c to 0029068f has its CatchHandler @ 002907bc */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00290694 to 002906cb has its CatchHandler @ 00290790 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00290834;
    }
    plStack_f8 = (long *)CONCAT62(uStack_10e,CONCAT11(uStack_10f,uStack_110));
    local_100 = (undefined *)CONCAT71(uStack_117,local_118);
    local_f0 = local_108;
    plStack_e0 = _UNK_001d81a8;
    local_e8 = _DAT_001d81a0;
    local_d8 = 1;
                    /* try { // try from 0029044c to 00290453 has its CatchHandler @ 00290778 */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_0037e058;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 00290484 to 00290487 has its CatchHandler @ 0029073c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_002904c4:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_002904d4:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_002904d4;
      }
      if (local_60 != &local_80) goto LAB_002904c4;
      local_b0 = &local_d0;
                    /* try { // try from 002905d8 to 002905e3 has its CatchHandler @ 002906cc */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 0;
    if (((byte)local_118 & 1) == 0) {
      uStack_90 = CONCAT62(uStack_10e,CONCAT11(uStack_10f,uStack_110));
      local_98 = CONCAT71(uStack_117,local_118);
      local_88 = local_108;
    }
    else {
                    /* try { // try from 00290504 to 0029050b has its CatchHandler @ 002906d0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_108,CONCAT62(uStack_10e,CONCAT11(uStack_10f,uStack_110)));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_00290530:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_00290530;
    }
                    /* try { // try from 0029053c to 0029054f has its CatchHandler @ 00290768 */
    FUN_002634d4(plVar9 + 8,&local_118,&local_118,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00290584:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00290584;
    }
    if (((byte)local_118 & 1) != 0) {
      operator_delete(local_108);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00290834:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00290838  FUN_00290838 =====

void FUN_00290838(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e058;
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


// ===== 002908a4  FUN_002908a4 =====

void FUN_002908a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e058;
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


// ===== 0029090c  FUN_0029090c =====

undefined8 * FUN_0029090c(long param_1)

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
  *puVar4 = &PTR_FUN_0037e058;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0029096c to 0029096f has its CatchHandler @ 002909a8 */
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


// ===== 002909d0  FUN_002909d0 =====

void FUN_002909d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037e058;
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


// ===== 00290a68  FUN_00290a68 =====

void FUN_00290a68(long param_1)

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


// ===== 00290ac8  FUN_00290ac8 =====

void FUN_00290ac8(void *param_1)

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


// ===== 00290b24  FUN_00290b24 =====

void FUN_00290b24(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 00290b80 to 00290b8f has its CatchHandler @ 002910d8 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394b40,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00290c08;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00290c08;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00290c08:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridRiveImageSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394d90
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridRiveImageSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394d90
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridRiveImageSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394d88
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridRiveImageSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394d88
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridRiveImageSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394d90
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 00290c40 to 00290c43 has its CatchHandler @ 00290de8 */
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
                    /* try { // try from 00290cc0 to 00290ccf has its CatchHandler @ 00291274 */
    FUN_0029132c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00290cdc to 00290cef has its CatchHandler @ 00291254 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00290cf0 to 00290d03 has its CatchHandler @ 0029123c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00290d04 to 00290d0f has its CatchHandler @ 0029120c */
    std::__ndk1::to_string(0);
                    /* try { // try from 00290d10 to 00290d1f has its CatchHandler @ 002911e8 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00290d20 to 00290d33 has its CatchHandler @ 002911c4 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00290d34 to 00290d3f has its CatchHandler @ 002911a0 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 00290d40 to 00290d4f has its CatchHandler @ 0029117c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00290d50 to 00290d63 has its CatchHandler @ 00291158 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00290d68 to 00290da3 has its CatchHandler @ 002910f8 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0029129c  FUN_0029129c =====

void FUN_0029129c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394d98) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002912ec  FUN_002912ec =====

undefined * FUN_002912ec(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394da0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0029132c  FUN_0029132c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0029132c(undefined8 *param_1,int param_2,byte *param_3,long param_4)

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
    puVar7 = PTR_typeinfo_name_00394d80;
    uStack_68 = _UNK_001d7ea8;
    local_70 = _DAT_001d7ea0;
    *(undefined1 *)((long)local_60 + 0x2a) = 0;
    uVar13 = *(undefined8 *)puVar7;
    uVar15 = *(undefined8 *)(puVar7 + 0x18);
    uVar14 = *(undefined8 *)(puVar7 + 0x10);
    uVar12 = *(undefined8 *)(puVar7 + 0x22);
    uVar10 = *(undefined8 *)(puVar7 + 0x1a);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar13;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    *(undefined8 *)((long)local_60 + 0x22) = uVar12;
    *(undefined8 *)((long)local_60 + 0x1a) = uVar10;
                    /* try { // try from 002913b0 to 002913bf has its CatchHandler @ 00291650 */
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
    if (0xffffffffffffffef < uVar1) goto LAB_00291610;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00291514;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002914fc to 00291503 has its CatchHandler @ 00291664 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_00291514:
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
                    /* try { // try from 00291554 to 0029155b has its CatchHandler @ 0029163c */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00291574 to 00291587 has its CatchHandler @ 00291624 */
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002916ac;
                    /* try { // try from 0029160c to 0029160f has its CatchHandler @ 00291680 */
      FUN_00260a84();
LAB_00291610:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 00291620 to 00291623 has its CatchHandler @ 00291664 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 00291574 with catch @ 00291624 */
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
      goto LAB_002916ac;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00291484;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0029146c to 00291473 has its CatchHandler @ 00291680 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_00291484:
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
                    /* try { // try from 002914c4 to 002914cb has its CatchHandler @ 00291668 */
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
LAB_002916ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002916b0  margelo::nitro::rive::HybridRiveImageSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridRiveImageSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveImageSpec::loadHybridMethods(HybridRiveImageSpec *this)

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


// ===== 002916f4  FUN_002916f4 =====

void FUN_002916f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2916f8);
  (*pcVar1)();
}


// ===== 002916f8  FUN_002916f8 =====

void FUN_002916f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2916fc);
  (*pcVar1)();
}


// ===== 002916fc  FUN_002916fc =====

void FUN_002916fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x291700);
  (*pcVar1)();
}


// ===== 00291700  FUN_00291700 =====

void FUN_00291700(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x291704);
  (*pcVar1)();
}


// ===== 00291704  margelo::nitro::rive::HybridRiveImageFactorySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridRiveImageFactorySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveImageFactorySpec::loadHybridMethods
          (HybridRiveImageFactorySpec *this)

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
  basic_string local_148;
  undefined7 uStack_147;
  char cStack_140;
  undefined7 uStack_13f;
  char cStack_138;
  undefined2 uStack_137;
  undefined1 uStack_135;
  undefined4 uStack_134;
  byte local_130;
  char local_12f [8];
  char acStack_127 [5];
  undefined2 uStack_122;
  char cStack_120;
  char acStack_11f [5];
  undefined1 uStack_11a;
  undefined1 uStack_119;
  byte local_118;
  char local_117 [8];
  undefined7 uStack_10f;
  char cStack_108;
  undefined1 uStack_107;
  undefined6 uStack_106;
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
  void *local_88;
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
    local_100 = PTR_typeinfo_00394db0;
                    /* try { // try from 00291760 to 0029176f has its CatchHandler @ 00291d60 */
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
  while (puVar7 != PTR_typeinfo_name_00394da8) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_c8 = *(long **)(this + lVar5 + 0x10);
      local_d0 = plVar6;
      if (plStack_c8 != (long *)0x0) {
        FUN_00259a00(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_00394db0;
                    /* try { // try from 0029187c to 0029188b has its CatchHandler @ 00291d54 */
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
      goto joined_r0x00291930;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x00291930:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_118 = 0x20;
    uStack_107 = 0;
    uStack_10f = (undefined7)s_loadFromURLAsync_001d74d2._8_8_;
    cStack_108 = SUB81(s_loadFromURLAsync_001d74d2._8_8_,7);
                    /* try { // try from 00291968 to 0029197b has its CatchHandler @ 00291da0 */
    local_117 = (char  [8])s_loadFromURLAsync_001d74d2._0_8_;
    FUN_00291e60(&local_118,plVar9,&local_118,0x10,1);
    if ((local_118 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_106,CONCAT11(uStack_107,cStack_108)));
    }
    local_130 = 0x2a;
    uStack_11a = 0;
    acStack_127[0] = s_loadFromResourceAsync_001d4ed6[8];
    acStack_127[1] = s_loadFromResourceAsync_001d4ed6[9];
    acStack_127[2] = s_loadFromResourceAsync_001d4ed6[10];
    acStack_127[3] = s_loadFromResourceAsync_001d4ed6[0xb];
    acStack_127[4] = s_loadFromResourceAsync_001d4ed6[0xc];
    local_12f[0] = s_loadFromResourceAsync_001d4ed6[0];
    local_12f[1] = s_loadFromResourceAsync_001d4ed6[1];
    local_12f[2] = s_loadFromResourceAsync_001d4ed6[2];
    local_12f[3] = s_loadFromResourceAsync_001d4ed6[3];
    local_12f[4] = s_loadFromResourceAsync_001d4ed6[4];
    local_12f[5] = s_loadFromResourceAsync_001d4ed6[5];
    local_12f[6] = s_loadFromResourceAsync_001d4ed6[6];
    local_12f[7] = s_loadFromResourceAsync_001d4ed6[7];
    uStack_122 = (undefined2)s_loadFromResourceAsync_001d4ed6._13_3_;
    cStack_120 = SUB31(s_loadFromResourceAsync_001d4ed6._13_3_,2);
    acStack_11f[0] = s_loadFromResourceAsync_001d4ed6[0x10];
    acStack_11f[1] = s_loadFromResourceAsync_001d4ed6[0x11];
    acStack_11f[2] = s_loadFromResourceAsync_001d4ed6[0x12];
    acStack_11f[3] = s_loadFromResourceAsync_001d4ed6[0x13];
    acStack_11f[4] = s_loadFromResourceAsync_001d4ed6[0x14];
                    /* try { // try from 002919b8 to 002919cb has its CatchHandler @ 00291d98 */
    FUN_00291e60(plVar9,&local_130,0x18,1);
    if ((local_130 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_119,
                                       CONCAT16(uStack_11a,CONCAT51(acStack_11f,cStack_120))));
    }
    local_148 = (basic_string)0x24;
    uStack_137 = 0x636e;
    uStack_13f = (undefined7)s_loadFromBytesAsync_001d6cb3._8_8_;
    cStack_138 = SUB81(s_loadFromBytesAsync_001d6cb3._8_8_,7);
    uStack_147 = (undefined7)s_loadFromBytesAsync_001d6cb3._0_8_;
    cStack_140 = SUB81(s_loadFromBytesAsync_001d6cb3._0_8_,7);
    uStack_135 = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_148);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_148), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00291bfc to 00291c0f has its CatchHandler @ 00291e20 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_148);
                    /* try { // try from 00291c10 to 00291c23 has its CatchHandler @ 00291e08 */
      FUN_00263450(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00291c28 to 00291c5f has its CatchHandler @ 00291de4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00291e5c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_148);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00291c70 to 00291c83 has its CatchHandler @ 00291de0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_148);
                    /* try { // try from 00291c84 to 00291c97 has its CatchHandler @ 00291ddc */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00291c9c to 00291cd3 has its CatchHandler @ 00291db0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00291e5c;
    }
    plStack_f8 = (long *)CONCAT71(uStack_13f,cStack_140);
    local_100 = (undefined *)CONCAT71(uStack_147,local_148);
    local_f0 = (long *)CONCAT44(uStack_134,CONCAT13(uStack_135,CONCAT21(uStack_137,cStack_138)));
    local_d8 = 0;
    plStack_e0 = _UNK_001d7f68;
    local_e8 = _DAT_001d7f60;
                    /* try { // try from 00291a50 to 00291a57 has its CatchHandler @ 00291d80 */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_0037e5b0;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 00291a88 to 00291a8b has its CatchHandler @ 00291d44 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00291ac8:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00291ad8:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00291ad8;
      }
      if (local_60 != &local_80) goto LAB_00291ac8;
      local_b0 = &local_d0;
                    /* try { // try from 00291be0 to 00291beb has its CatchHandler @ 00291cd4 */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 1;
    if (((byte)local_148 & 1) == 0) {
      uStack_90 = CONCAT71(uStack_13f,cStack_140);
      local_98 = CONCAT71(uStack_147,local_148);
      local_88 = (void *)CONCAT44(uStack_134,CONCAT13(uStack_135,CONCAT21(uStack_137,cStack_138)));
    }
    else {
                    /* try { // try from 00291b0c to 00291b13 has its CatchHandler @ 00291cd8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,
                 (char *)CONCAT44(uStack_134,CONCAT13(uStack_135,CONCAT21(uStack_137,cStack_138))),
                 CONCAT71(uStack_13f,cStack_140));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_00291b38:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_00291b38;
    }
                    /* try { // try from 00291b44 to 00291b57 has its CatchHandler @ 00291d70 */
    FUN_002634d4(plVar9 + 3,&local_148,&local_148,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00291b8c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00291b8c;
    }
    if (((byte)local_148 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_134,
                                       CONCAT13(uStack_135,CONCAT21(uStack_137,cStack_138))));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00291e5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00291e60  FUN_00291e60 =====

void FUN_00291e60(long param_1,basic_string *param_2,long param_3,long param_4)

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
                    /* try { // try from 00292098 to 002920ab has its CatchHandler @ 00292288 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002920ac to 002920bf has its CatchHandler @ 00292270 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 002920c4 to 002920fb has its CatchHandler @ 0029224c */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002922ac;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029210c to 0029211f has its CatchHandler @ 00292248 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 00292120 to 00292133 has its CatchHandler @ 00292244 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00292138 to 0029216f has its CatchHandler @ 00292218 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002922ac;
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
                    /* try { // try from 00291efc to 00291f03 has its CatchHandler @ 00292200 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037e2a0;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 00291f34 to 00291f37 has its CatchHandler @ 002921e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_00291f74:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_00291f84:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_00291f84;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_00291f74;
    local_b0 = local_d0;
                    /* try { // try from 0029207c to 00292087 has its CatchHandler @ 00292170 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 1;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 00291fb8 to 00291fbf has its CatchHandler @ 00292174 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_00291fe4:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_00291fe4;
  }
                    /* try { // try from 00291ff0 to 00292003 has its CatchHandler @ 002921f0 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_00292038:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_00292038;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002922ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002922b0  FUN_002922b0 =====

void FUN_002922b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e5b0;
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


// ===== 0029231c  FUN_0029231c =====

void FUN_0029231c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e5b0;
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


// ===== 00292384  FUN_00292384 =====

undefined8 * FUN_00292384(long param_1)

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
  *puVar4 = &PTR_FUN_0037e5b0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002923e4 to 002923e7 has its CatchHandler @ 00292420 */
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


// ===== 00292448  FUN_00292448 =====

void FUN_00292448(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037e5b0;
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


// ===== 002924e0  FUN_002924e0 =====

void FUN_002924e0(long param_1)

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


// ===== 00292540  FUN_00292540 =====

void FUN_00292540(void *param_1)

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


// ===== 0029259c  FUN_0029259c =====

void FUN_0029259c(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
                    /* try { // try from 002925fc to 0029260b has its CatchHandler @ 00292c18 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394db0,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00292684;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00292684;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00292684:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394e30 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394e30), puVar3 = PTR_defaultValue_00394e28,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00394e28 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394e30);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002926c0 to 002926cf has its CatchHandler @ 00292924 */
    FUN_00280814(auStack_128,param_3,uVar10);
                    /* try { // try from 002926d0 to 002926df has its CatchHandler @ 0029290c */
    (*pcVar11)(&local_110,plVar1,auStack_128);
    if ((local_120 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_120 + 1), lVar5 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
                    /* try { // try from 00292714 to 0029271f has its CatchHandler @ 002928f4 */
    FUN_00293284(param_1,param_3,local_110,local_108);
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
                    /* try { // try from 002927c0 to 002927cf has its CatchHandler @ 00292db8 */
    FUN_00292e70(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002927dc to 002927ef has its CatchHandler @ 00292d98 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002927f0 to 00292803 has its CatchHandler @ 00292d80 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 00292804 to 0029280f has its CatchHandler @ 00292d50 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00292810 to 0029281f has its CatchHandler @ 00292d2c */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00292820 to 00292833 has its CatchHandler @ 00292d08 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00292834 to 0029283f has its CatchHandler @ 00292ce4 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00292840 to 0029284f has its CatchHandler @ 00292cc0 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00292850 to 00292863 has its CatchHandler @ 00292c98 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00292868 to 002928a3 has its CatchHandler @ 00292c38 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00292de0  FUN_00292de0 =====

void FUN_00292de0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394e38) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00292e30  FUN_00292e30 =====

undefined * FUN_00292e30(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394e40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00292e70  FUN_00292e70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00292e70(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
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
    uVar13 = *(undefined8 *)(PTR_typeinfo_name_00394da8 + 8);
    uVar12 = *(undefined8 *)PTR_typeinfo_name_00394da8;
    uVar15 = *(undefined8 *)(PTR_typeinfo_name_00394da8 + 0x18);
    uVar14 = *(undefined8 *)(PTR_typeinfo_name_00394da8 + 0x10);
    uStack_68 = _UNK_001d7e98;
    local_70 = _DAT_001d7e90;
    uVar11 = *(undefined8 *)(PTR_typeinfo_name_00394da8 + 0x28);
    uVar9 = *(undefined8 *)(PTR_typeinfo_name_00394da8 + 0x20);
    *(undefined2 *)(local_60 + 6) = 0x45;
    local_60[1] = uVar13;
    *local_60 = uVar12;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    local_60[5] = uVar11;
    local_60[4] = uVar9;
                    /* try { // try from 00292ef8 to 00292f07 has its CatchHandler @ 00293198 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar7 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_00293158;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar10 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_0029305c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00293044 to 0029304b has its CatchHandler @ 002931ac */
      puVar10 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar10;
LAB_0029305c:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar7 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar10,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar10 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 0029309c to 002930a3 has its CatchHandler @ 00293184 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar8[2];
    uStack_68 = puVar8[1];
    local_70 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 002930bc to 002930cf has its CatchHandler @ 0029316c */
    puVar10 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar9 = puVar10[2];
    uVar12 = puVar10[1];
    uVar11 = *puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    param_1[1] = uVar12;
    *param_1 = uVar11;
    param_1[2] = uVar9;
    puVar10 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar10 = local_90;
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002931f4;
                    /* try { // try from 00293154 to 00293157 has its CatchHandler @ 002931c8 */
      FUN_00260a84();
LAB_00293158:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 00293168 to 0029316b has its CatchHandler @ 002931ac */
        uVar9 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002930bc with catch @ 0029316c */
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
          FUN_00255d34(uVar9);
        }
      }
      goto LAB_002931f4;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar10 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00292fcc;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00292fb4 to 00292fbb has its CatchHandler @ 002931c8 */
      puVar10 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar10;
LAB_00292fcc:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar7 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar10,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar10 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 0029300c to 00293013 has its CatchHandler @ 002931b0 */
    puVar10 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar9 = puVar10[2];
    uVar12 = puVar10[1];
    uVar11 = *puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    param_1[1] = uVar12;
    *param_1 = uVar11;
    param_1[2] = uVar9;
    puVar10 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar10);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_002931f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002931f8  FUN_002931f8 =====

void FUN_002931f8(long *param_1)

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


// ===== 00293284  FUN_00293284 =====

void FUN_00293284(undefined8 param_1,Runtime *param_2,undefined8 *param_3,long *param_4)

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
                    /* try { // try from 00293364 to 00293373 has its CatchHandler @ 00293528 */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_80);
LAB_00293374:
    facebook::jsi::Value::~Value((Value *)&local_80);
  }
  else {
    if (iVar1 == 1) {
      FUN_002935e0(&local_80,param_2,*param_3);
                    /* try { // try from 00293344 to 00293353 has its CatchHandler @ 0029352c */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_80);
      goto LAB_00293374;
    }
    if (iVar1 != 0) {
      FUN_00264e5c(&local_80,PTR_typeinfo_name_00394e10,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00293420 to 00293433 has its CatchHandler @ 002934d0 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_80);
                    /* try { // try from 00293434 to 00293447 has its CatchHandler @ 002934b8 */
      FUN_00263450(abStack_98,auStack_b0,"> has invalid state!");
                    /* try { // try from 0029344c to 00293483 has its CatchHandler @ 00293484 */
      std::runtime_error::runtime_error(this,abStack_98);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00293550;
    }
    puStack_78 = param_3;
    if (param_4 == (long *)0x0) {
      local_70 = (long *)0x0;
      local_80 = &PTR_FUN_0037e310;
      local_60 = &local_80;
    }
    else {
      FUN_00259a00(1,param_4 + 1);
      local_80 = &PTR_FUN_0037e310;
      local_70 = param_4;
      FUN_00259a00(1,param_4 + 1);
      local_60 = &local_80;
      lVar3 = FUN_00255510(0xffffffffffffffff,param_4 + 1);
      if (lVar3 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 00293398 to 002933ab has its CatchHandler @ 002934f0 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_80);
    if (local_60 == &local_80) {
      lVar3 = 4;
      pppuVar4 = &local_80;
LAB_002933cc:
      (*(code *)(*pppuVar4)[lVar3])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar3 = 5;
      pppuVar4 = local_60;
      goto LAB_002933cc;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00293550:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00293554  FUN_00293554 =====

void FUN_00293554(long *param_1)

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


// ===== 002935e0  FUN_002935e0 =====

void FUN_002935e0(undefined8 param_1,undefined8 param_2,long *param_3)

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
    FUN_00264e5c(abStack_50,PTR_typeinfo_name_00394d80);
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0029365c to 0029366f has its CatchHandler @ 00293710 */
    std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",abStack_50);
                    /* try { // try from 00293670 to 00293683 has its CatchHandler @ 002936f8 */
    FUN_00263450(auStack_68,auStack_80,&DAT_001d795b);
                    /* try { // try from 00293688 to 002936c3 has its CatchHandler @ 002936c4 */
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


// ===== 00293748  FUN_00293748 =====

void FUN_00293748(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037e310;
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


// ===== 002937e0  FUN_002937e0 =====

void FUN_002937e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037e310;
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


// ===== 0029386c  FUN_0029386c =====

void FUN_0029386c(long param_1)

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
  *puVar4 = &PTR_FUN_0037e310;
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


// ===== 002938e4  FUN_002938e4 =====

void FUN_002938e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037e310;
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


// ===== 00293948  FUN_00293948 =====

void FUN_00293948(long param_1)

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


// ===== 002939d4  FUN_002939d4 =====

void FUN_002939d4(void *param_1)

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


// ===== 00293a54  FUN_00293a54 =====

void FUN_00293a54(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
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
                    /* try { // try from 00293aa0 to 00293aaf has its CatchHandler @ 0029449c */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 00293ac8 to 00293ad3 has its CatchHandler @ 0029447c */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 00293ad8 to 00293ae3 has its CatchHandler @ 0029446c */
  FUN_0026ce4c(&local_100,local_d0,&local_138);
                    /* try { // try from 00293ae4 to 00293aef has its CatchHandler @ 0029445c */
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
        goto LAB_00293b50;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_00293b50:
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
                    /* try { // try from 00293bd0 to 00293bdb has its CatchHandler @ 0029444c */
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
                    /* try { // try from 00293c14 to 00293c1b has its CatchHandler @ 00294428 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_0037e380;
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
        goto LAB_00293cdc;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_00293cdc:
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
        goto LAB_00293d6c;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_00293d6c:
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
LAB_00293ddc:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_00293ddc;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 00293df4 to 00293dff has its CatchHandler @ 00294404 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 00293e0c to 00293e13 has its CatchHandler @ 00294410 */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_0037e4a0;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 00293e48 to 00293e57 has its CatchHandler @ 00294400 */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 00293e5c to 00293e63 has its CatchHandler @ 00294420 */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x10) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 00293e84 to 00293f27 has its CatchHandler @ 0029452c */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
LAB_00294060:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_002940c4:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_002940c4;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_002940f4:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_002940f4;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_00294124:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_00294124;
      }
      FUN_0026c2bc(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_0029416c:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_0029416c;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 00294184 to 0029418f has its CatchHandler @ 002943fc */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 0029419c to 002941a3 has its CatchHandler @ 00294408 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_00384d40;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 002941d8 to 002941e7 has its CatchHandler @ 002943f8 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 002941ec to 002941f3 has its CatchHandler @ 00294418 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x10) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_002943a4;
                    /* try { // try from 00294210 to 00294253 has its CatchHandler @ 002944c0 */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0x38);
        if (uVar5 < *(ulong *)(lVar11 + 0x40)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_0029425c:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_0029425c;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 00294274 to 0029427b has its CatchHandler @ 002943ec */
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
LAB_002942b8:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_002942b8;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_002942e8:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_002942e8;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_0029431c:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_0029431c;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_002945e8;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002945e8;
                    /* try { // try from 002943a0 to 002943a3 has its CatchHandler @ 0029452c */
    FUN_0025cd00();
LAB_002943a4:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002945e8;
                    /* try { // try from 002943b8 to 002943bb has its CatchHandler @ 002944c0 */
    FUN_0025cd00();
LAB_002943bc:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002945e8;
                    /* try { // try from 002943d0 to 002943eb has its CatchHandler @ 0029452c */
    FUN_0029467c();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x20);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0x28)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_00293f30:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_00293f30;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 00293f84 to 00293f8b has its CatchHandler @ 002943f4 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_0029405c:
      *(long *)(lVar11 + 0x20) = lVar9;
      goto LAB_00294060;
    }
    uVar17 = *(ulong *)(lVar11 + 0x18);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_002943bc;
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
LAB_00293f3c:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_00293f6c:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_00293f6c;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 00293fa0 to 00293fab has its CatchHandler @ 002943f0 */
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
LAB_00293fcc:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_00293fcc;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 00294020 to 00294023 has its CatchHandler @ 002944bc */
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
joined_r0x0029404c:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x002940b0;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_0029408c;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_0029405c;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_00293f3c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00294274 with catch @ 002943ec */
    FUN_0025ad9c();
  }
LAB_002945e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x002940b0:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_0029408c:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x0029404c;
}


// ===== 002945ec  FUN_002945ec =====

void FUN_002945ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394e00) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0029463c  FUN_0029463c =====

undefined * FUN_0029463c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394e08;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0029467c  FUN_0029467c =====

void FUN_0029467c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002946b4  FUN_002946b4 =====

void FUN_002946b4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_0037e4a0;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_00294740;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00294720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00294740:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00294744  FUN_00294744 =====

void FUN_00294744(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_0037e4a0;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002947a0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002947a0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002947c8  FUN_002947c8 =====

undefined8 * FUN_002947c8(long param_1)

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
  *puVar2 = &PTR_FUN_0037e4a0;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_00294840;
    }
                    /* try { // try from 00294824 to 0029483f has its CatchHandler @ 00294868 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_00294840:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00294890  FUN_00294890 =====

void FUN_00294890(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0037e4a0;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00294938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_0029493c;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_0029493c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00294940  FUN_00294940 =====

void FUN_00294940(long param_1)

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
      goto LAB_002949c0;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002949a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002949c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002949c4  FUN_002949c4 =====

void FUN_002949c4(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_00294a14;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00294a14:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00294a3c  FUN_00294a3c =====

void FUN_00294a3c(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00294aec to 00294aef has its CatchHandler @ 00294af0 */
      uVar4 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 00294a84 with catch @ 00294af0
                       catch() { ... } // from try @ 00294aec with catch @ 00294af0 */
      FUN_0027a354(local_30);
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_00255d34(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 00294a84 to 00294a8b has its CatchHandler @ 00294af0 */
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


// ===== 00294b1c  FUN_00294b1c =====

void FUN_00294b1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394df0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00294b6c  FUN_00294b6c =====

undefined * FUN_00294b6c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394df8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00294bac  FUN_00294bac =====

void FUN_00294bac(long param_1)

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


// ===== 00294c00  FUN_00294c00 =====

void FUN_00294c00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e380;
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


// ===== 00294c60  FUN_00294c60 =====

void FUN_00294c60(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e380;
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


// ===== 00294cc8  FUN_00294cc8 =====

undefined8 * FUN_00294cc8(long param_1)

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
  *puVar2 = &PTR_FUN_0037e380;
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


// ===== 00294d64  FUN_00294d64 =====

void FUN_00294d64(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037e380;
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


// ===== 00294df8  FUN_00294df8 =====

void FUN_00294df8(long param_1)

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


// ===== 00294e4c  FUN_00294e4c =====

void FUN_00294e4c(void *param_1)

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


// ===== 00294ea8  FUN_00294ea8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00294ea8(long param_1,ulong *param_2)

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
LAB_00294f98:
                    /* try { // try from 00294f98 to 00294f9f has its CatchHandler @ 00295150 */
    local_70 = (undefined8 *)operator_new(0x60);
    puVar4 = PTR_typeinfo_name_00394dc8;
    uStack_78 = _UNK_001d7e68;
    local_80 = _DAT_001d7e60;
    *(undefined1 *)((long)local_70 + 0x5e) = 0;
    uVar11 = *(undefined8 *)(puVar4 + 0x20);
    uVar13 = *(undefined8 *)(puVar4 + 0x38);
    uVar12 = *(undefined8 *)(puVar4 + 0x30);
    uVar10 = *(undefined8 *)(puVar4 + 0x48);
    uVar9 = *(undefined8 *)(puVar4 + 0x40);
    local_70[5] = *(undefined8 *)(puVar4 + 0x28);
    local_70[4] = uVar11;
    local_70[7] = uVar13;
    local_70[6] = uVar12;
    uVar12 = *(undefined8 *)(puVar4 + 0x56);
    uVar11 = *(undefined8 *)(puVar4 + 0x4e);
    local_70[9] = uVar10;
    local_70[8] = uVar9;
    *(undefined8 *)((long)local_70 + 0x56) = uVar12;
    *(undefined8 *)((long)local_70 + 0x4e) = uVar11;
    uVar9 = *(undefined8 *)puVar4;
    uVar11 = *(undefined8 *)(puVar4 + 0x18);
    uVar10 = *(undefined8 *)(puVar4 + 0x10);
    local_70[1] = *(undefined8 *)(puVar4 + 8);
    *local_70 = uVar9;
    local_70[3] = uVar11;
    local_70[2] = uVar10;
                    /* try { // try from 00294fdc to 00294feb has its CatchHandler @ 00295138 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    plVar8 = plVar2;
    if (plVar5 == (long *)0x0) goto LAB_0029506c;
  }
  else {
    plVar5 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar5 == (long *)0x0) || (plVar8 = *(long **)(param_1 + 0x20), plVar8 == (long *)0x0))
    goto LAB_00294f98;
    uStack_a8 = *(ulong *)(param_1 + 0x10);
    local_b0 = *(ulong *)(param_1 + 8);
    local_a0 = *(void **)(param_1 + 0x18);
    if (local_a0 != (void *)0x0) {
      FUN_00255510(1);
    }
    local_60 = (ulong *)0x0;
    local_98 = uVar1;
    plStack_90 = plVar2;
                    /* try { // try from 00294f28 to 00294f2f has its CatchHandler @ 00295124 */
    local_60 = (ulong *)operator_new(0x30);
    local_60[5] = (ulong)plVar2;
    *local_60 = (ulong)&PTR_FUN_0037e410;
    local_60[2] = uStack_a8;
    local_60[1] = local_b0;
    *(undefined8 *)((ulong)&local_b0 | 8) = 0;
    ((undefined8 *)((ulong)&local_b0 | 8))[1] = 0;
    local_60[3] = (ulong)local_a0;
    local_60[4] = uVar1;
    local_98 = 0;
    plStack_90 = (long *)0x0;
                    /* try { // try from 00294f6c to 00294f7b has its CatchHandler @ 002950ec */
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_80);
    if (local_60 == &local_80) {
      lVar7 = 4;
      puVar6 = &local_80;
LAB_00295034:
      (**(code **)(*puVar6 + lVar7 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar7 = 5;
      puVar6 = local_60;
      goto LAB_00295034;
    }
    plVar8 = (long *)0x0;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar5 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0029506c:
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


// ===== 0029518c  FUN_0029518c =====

void FUN_0029518c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394dc8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002951dc  FUN_002951dc =====

undefined * FUN_002951dc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394dd0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0029521c  FUN_0029521c =====

void FUN_0029521c(long param_1)

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


// ===== 0029529c  FUN_0029529c =====

void FUN_0029529c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_0037e410;
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


// ===== 00295328  FUN_00295328 =====

void FUN_00295328(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_0037e410;
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


// ===== 002953bc  FUN_002953bc =====

undefined8 * FUN_002953bc(long param_1)

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
  *puVar2 = &PTR_FUN_0037e410;
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


// ===== 00295458  FUN_00295458 =====

void FUN_00295458(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037e410;
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


// ===== 002954ec  FUN_002954ec =====

void FUN_002954ec(long param_1)

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


// ===== 0029556c  FUN_0029556c =====

void FUN_0029556c(void *param_1)

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


// ===== 002955f4  FUN_002955f4 =====

void FUN_002955f4(long param_1)

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
                    /* try { // try from 002956fc to 0029570f has its CatchHandler @ 0029580c */
    FUN_00264e5c(local_68,PTR_typeinfo_name_00394dd8,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029571c to 0029572f has its CatchHandler @ 002957ec */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 00295730 to 00295743 has its CatchHandler @ 002957d4 */
    FUN_00263450(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 00295748 to 0029577f has its CatchHandler @ 002957a0 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 00295644 to 0029564f has its CatchHandler @ 0029580c */
    FUN_002935e0(aVStack_90,plVar1,uVar5);
    facebook::jsi::Value::Value(aVStack_50,aVStack_90);
    local_68[0] = 0;
                    /* try { // try from 00295668 to 00295683 has its CatchHandler @ 00295780 */
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


// ===== 00295838  FUN_00295838 =====

void FUN_00295838(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394de0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00295888  FUN_00295888 =====

undefined * FUN_00295888(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394de8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002958c8  FUN_002958c8 =====

void FUN_002958c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e2a0;
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


// ===== 00295934  FUN_00295934 =====

void FUN_00295934(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e2a0;
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


// ===== 0029599c  FUN_0029599c =====

undefined8 * FUN_0029599c(long param_1)

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
  *puVar4 = &PTR_FUN_0037e2a0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002959fc to 002959ff has its CatchHandler @ 00295a38 */
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


// ===== 00295a60  FUN_00295a60 =====

void FUN_00295a60(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037e2a0;
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


// ===== 00295af8  FUN_00295af8 =====

void FUN_00295af8(long param_1)

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


// ===== 00295b58  FUN_00295b58 =====

void FUN_00295b58(void *param_1)

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


// ===== 00295bb4  FUN_00295bb4 =====

void FUN_00295bb4(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
                    /* try { // try from 00295c14 to 00295c23 has its CatchHandler @ 00296264 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394db0,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00295c9c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00295c9c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00295c9c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394dc0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394dc0), puVar3 = PTR_defaultValue_00394db8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00394db8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394dc0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 00295cd8 to 00295ce7 has its CatchHandler @ 00295f70 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 00295cf0 to 00295cff has its CatchHandler @ 00295f4c */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_140);
    if (local_140[0] != (undefined8 *)0x0) {
      (**(code **)*local_140[0])();
    }
                    /* try { // try from 00295d14 to 00295d23 has its CatchHandler @ 00295f30 */
    (*pcVar11)(&local_128,plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 00295d38 to 00295d43 has its CatchHandler @ 00295f18 */
    FUN_00293284(param_1,param_3,local_128,local_120);
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
                    /* try { // try from 00295de4 to 00295df3 has its CatchHandler @ 00296404 */
    FUN_00292e70(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00295e00 to 00295e13 has its CatchHandler @ 002963e4 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 00295e14 to 00295e27 has its CatchHandler @ 002963cc */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00295e28 to 00295e33 has its CatchHandler @ 0029639c */
    std::__ndk1::to_string(1);
                    /* try { // try from 00295e34 to 00295e43 has its CatchHandler @ 00296378 */
    FUN_00264adc(auStack_e0,auStack_f8,&local_128);
                    /* try { // try from 00295e44 to 00295e57 has its CatchHandler @ 00296354 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00295e58 to 00295e63 has its CatchHandler @ 00296330 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00295e64 to 00295e73 has its CatchHandler @ 0029630c */
    FUN_00264adc(auStack_b0,auStack_c8,local_140);
                    /* try { // try from 00295e74 to 00295e87 has its CatchHandler @ 002962e4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00295e8c to 00295ec7 has its CatchHandler @ 00296284 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0029642c  FUN_0029642c =====

void FUN_0029642c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394e18) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0029647c  FUN_0029647c =====

undefined * FUN_0029647c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394e20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002964bc  margelo::nitro::rive::HybridRiveImageFactorySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridRiveImageFactorySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveImageFactorySpec::loadHybridMethods
          (HybridRiveImageFactorySpec *this)

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


// ===== 00296500  FUN_00296500 =====

void FUN_00296500(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x296504);
  (*pcVar1)();
}


// ===== 00296504  FUN_00296504 =====

void FUN_00296504(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x296508);
  (*pcVar1)();
}


// ===== 00296508  FUN_00296508 =====

void FUN_00296508(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x29650c);
  (*pcVar1)();
}


// ===== 0029650c  FUN_0029650c =====

void FUN_0029650c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x296510);
  (*pcVar1)();
}


// ===== 00296510  margelo::nitro::rive::HybridRiveRuntimeSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridRiveRuntimeSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveRuntimeSpec::loadHybridMethods(HybridRiveRuntimeSpec *this)

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
  basic_string local_148;
  undefined7 uStack_147;
  char cStack_140;
  undefined2 uStack_13f;
  undefined1 uStack_13d;
  undefined4 uStack_13c;
  long *local_138;
  basic_string local_130;
  undefined7 uStack_12f;
  char cStack_128;
  undefined2 uStack_127;
  undefined5 uStack_125;
  long *local_120;
  basic_string local_118;
  char acStack_117 [5];
  undefined2 uStack_112;
  char cStack_110;
  char acStack_10f [5];
  undefined1 uStack_10a;
  undefined1 uStack_109;
  long *local_108;
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
    local_100 = PTR_typeinfo_00394e50;
                    /* try { // try from 0029656c to 0029657b has its CatchHandler @ 00297154 */
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
  while (puVar7 != PTR_typeinfo_name_00394e48) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_c8 = *(long **)(this + lVar5 + 0x10);
      local_d0 = plVar6;
      if (plStack_c8 != (long *)0x0) {
        FUN_00259a00(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_00394e50;
                    /* try { // try from 00296688 to 00296697 has its CatchHandler @ 00297148 */
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
      goto joined_r0x0029673c;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x0029673c:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_118 = (basic_string)0x1a;
    uStack_10a = 0;
    uStack_112 = (undefined2)s_isInitialized_001d618b._5_3_;
    cStack_110 = SUB31(s_isInitialized_001d618b._5_3_,2);
    plVar6 = plVar9 + 8;
    acStack_117 = (char  [5])s_isInitialized_001d618b._0_5_;
    acStack_10f = (char  [5])s_isInitialized_001d618b._8_5_;
    lVar5 = FUN_002632b8(*plVar6,plVar9[9],&local_118);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00296d9c to 00296daf has its CatchHandler @ 00297348 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_118);
                    /* try { // try from 00296db0 to 00296dc3 has its CatchHandler @ 002972cc */
      FUN_00263450(&local_d0,&local_80,"\" - a getter with that name already exists!");
                    /* try { // try from 00296dc8 to 00296dff has its CatchHandler @ 002972a8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0029739c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_118);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00296e10 to 00296e23 has its CatchHandler @ 00297344 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_118);
                    /* try { // try from 00296e24 to 00296e37 has its CatchHandler @ 002972a4 */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00296e3c to 00296e73 has its CatchHandler @ 00297278 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0029739c;
    }
    plStack_f8 = (long *)CONCAT17(uStack_109,CONCAT16(uStack_10a,CONCAT51(acStack_10f,cStack_110)));
    local_100 = (undefined *)CONCAT26(uStack_112,CONCAT51(acStack_117,local_118));
    local_f0 = local_108;
    plStack_e0 = _UNK_001d81a8;
    local_e8 = _DAT_001d81a0;
    local_d8 = 1;
                    /* try { // try from 002967c0 to 002967c7 has its CatchHandler @ 002971c4 */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_0037e8b0;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 002967f8 to 002967fb has its CatchHandler @ 00297138 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00296838:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00296848:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00296848;
      }
      if (local_60 != &local_80) goto LAB_00296838;
      local_b0 = &local_d0;
                    /* try { // try from 00296ccc to 00296cd7 has its CatchHandler @ 00296fd0 */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 0;
    if (((byte)local_118 & 1) == 0) {
      uStack_90 = CONCAT17(uStack_109,CONCAT16(uStack_10a,CONCAT51(acStack_10f,cStack_110)));
      local_98 = CONCAT26(uStack_112,CONCAT51(acStack_117,local_118));
      local_88 = local_108;
    }
    else {
                    /* try { // try from 00296878 to 0029687f has its CatchHandler @ 002970cc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_108,
                 CONCAT17(uStack_109,CONCAT16(uStack_10a,CONCAT51(acStack_10f,cStack_110))));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_002968a4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_002968a4;
    }
                    /* try { // try from 002968b0 to 002968c3 has its CatchHandler @ 002971b4 */
    FUN_002634d4(plVar6,&local_118,&local_118,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_002968f8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_002968f8;
    }
    if (((byte)local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    local_130 = (basic_string)0x12;
    uStack_127 = 0x72;
    uStack_12f = (undefined7)s_initError_001d7925._0_8_;
    cStack_128 = SUB81(s_initError_001d7925._0_8_,7);
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_130);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00296e80 to 00296e93 has its CatchHandler @ 00297328 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_130);
                    /* try { // try from 00296e94 to 00296ea7 has its CatchHandler @ 00297260 */
      FUN_00263450(&local_d0,&local_80,"\" - a getter with that name already exists!");
                    /* try { // try from 00296eac to 00296ee3 has its CatchHandler @ 0029723c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0029739c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_130);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00296ef4 to 00296f07 has its CatchHandler @ 00297324 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_130);
                    /* try { // try from 00296f08 to 00296f1b has its CatchHandler @ 00297238 */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00296f20 to 00296f57 has its CatchHandler @ 0029720c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0029739c;
    }
    plStack_f8 = (long *)CONCAT53(uStack_125,CONCAT21(uStack_127,cStack_128));
    local_100 = (undefined *)CONCAT71(uStack_12f,local_130);
    local_f0 = local_120;
    plStack_e0 = _UNK_001d8138;
    local_e8 = _DAT_001d8130;
    local_d8 = 1;
                    /* try { // try from 00296978 to 0029697f has its CatchHandler @ 0029719c */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_0037e930;
    if (((ulong)local_100 & 1) == 0) {
      pplVar3[2] = plStack_f8;
      *(undefined **)(pplVar3 + 1) = local_100;
      pplVar3[3] = local_f0;
    }
    else {
                    /* try { // try from 002969b0 to 002969b3 has its CatchHandler @ 002970bc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60 = pplVar3;
    pplVar3[5] = plStack_e0;
    pplVar3[4] = local_e8;
    *(undefined4 *)(pplVar3 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_002969f0:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00296a00:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00296a00;
      }
      if (local_60 != &local_80) goto LAB_002969f0;
      local_b0 = &local_d0;
                    /* try { // try from 00296cec to 00296cf7 has its CatchHandler @ 00296fcc */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 0;
    if (((byte)local_130 & 1) == 0) {
      uStack_90 = CONCAT53(uStack_125,CONCAT21(uStack_127,cStack_128));
      local_98 = CONCAT71(uStack_12f,local_130);
      local_88 = local_120;
    }
    else {
                    /* try { // try from 00296a30 to 00296a37 has its CatchHandler @ 00297050 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_120,CONCAT53(uStack_125,CONCAT21(uStack_127,cStack_128)));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_00296a5c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_00296a5c;
    }
                    /* try { // try from 00296a68 to 00296a7b has its CatchHandler @ 0029718c */
    FUN_002634d4(plVar6,&local_130,&local_130,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00296ab0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00296ab0;
    }
    if (((byte)local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    local_148 = (basic_string)0x14;
    uStack_13f = 0x657a;
    uStack_147 = (undefined7)s_initialize_001d5662._0_8_;
    cStack_140 = SUB81(s_initialize_001d5662._0_8_,7);
    uStack_13d = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_148);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_148), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00296d28 to 00296d3b has its CatchHandler @ 00297364 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_148);
                    /* try { // try from 00296d3c to 00296d4f has its CatchHandler @ 0029730c */
      FUN_00263450(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00296d54 to 00296d8b has its CatchHandler @ 002972e8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0029739c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_148);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00296f64 to 00296f77 has its CatchHandler @ 002972e4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_148);
                    /* try { // try from 00296f78 to 00296f8b has its CatchHandler @ 00297208 */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00296f90 to 00296fc7 has its CatchHandler @ 002971dc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0029739c;
    }
    plStack_f8 = (long *)CONCAT44(uStack_13c,CONCAT13(uStack_13d,CONCAT21(uStack_13f,cStack_140)));
    local_100 = (undefined *)CONCAT71(uStack_147,local_148);
    local_d8 = 0;
    local_f0 = local_138;
    plStack_e0 = _UNK_001d7f68;
    local_e8 = _DAT_001d7f60;
                    /* try { // try from 00296b40 to 00296b47 has its CatchHandler @ 00297174 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_0037e9b0;
    if (((ulong)local_100 & 1) == 0) {
      pplVar3[2] = plStack_f8;
      *(undefined **)(pplVar3 + 1) = local_100;
      pplVar3[3] = local_f0;
    }
    else {
                    /* try { // try from 00296b78 to 00296b7b has its CatchHandler @ 00297040 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60 = pplVar3;
    pplVar3[5] = plStack_e0;
    pplVar3[4] = local_e8;
    *(undefined4 *)(pplVar3 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00296bb8:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00296bc8:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00296bc8;
      }
      if (local_60 != &local_80) goto LAB_00296bb8;
      local_b0 = &local_d0;
                    /* try { // try from 00296d0c to 00296d17 has its CatchHandler @ 00296fc8 */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 0;
    if (((byte)local_148 & 1) == 0) {
      uStack_90 = CONCAT44(uStack_13c,CONCAT13(uStack_13d,CONCAT21(uStack_13f,cStack_140)));
      local_98 = CONCAT71(uStack_147,local_148);
      local_88 = local_138;
    }
    else {
                    /* try { // try from 00296bf8 to 00296bff has its CatchHandler @ 00296fd4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_138,
                 CONCAT44(uStack_13c,CONCAT13(uStack_13d,CONCAT21(uStack_13f,cStack_140))));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_00296c24:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_00296c24;
    }
                    /* try { // try from 00296c30 to 00296c43 has its CatchHandler @ 00297164 */
    FUN_002634d4(plVar9 + 3,&local_148,&local_148,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00296c78:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00296c78;
    }
    if (((byte)local_148 & 1) != 0) {
      operator_delete(local_138);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0029739c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002973a0  FUN_002973a0 =====

void FUN_002973a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e9b0;
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


// ===== 0029740c  FUN_0029740c =====

void FUN_0029740c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e9b0;
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


// ===== 00297474  FUN_00297474 =====

undefined8 * FUN_00297474(long param_1)

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
  *puVar4 = &PTR_FUN_0037e9b0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002974d4 to 002974d7 has its CatchHandler @ 00297510 */
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


// ===== 00297538  FUN_00297538 =====

void FUN_00297538(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037e9b0;
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


// ===== 002975d0  FUN_002975d0 =====

void FUN_002975d0(long param_1)

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


// ===== 00297630  FUN_00297630 =====

void FUN_00297630(void *param_1)

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


// ===== 0029768c  FUN_0029768c =====

void FUN_0029768c(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002976e8 to 002976f7 has its CatchHandler @ 00297c98 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394e50,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00297770;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00297770;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00297770:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ea0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ea0
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394e98
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394e98
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ea0
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002977a8 to 002977af has its CatchHandler @ 002979a0 */
    (*pcVar9)(auStack_110);
                    /* try { // try from 002977b0 to 002977bf has its CatchHandler @ 00297988 */
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
                    /* try { // try from 00297860 to 0029786f has its CatchHandler @ 00297e34 */
    FUN_00297eec(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0029787c to 0029788f has its CatchHandler @ 00297e14 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00297890 to 002978a3 has its CatchHandler @ 00297dfc */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002978a4 to 002978af has its CatchHandler @ 00297dcc */
    std::__ndk1::to_string(0);
                    /* try { // try from 002978b0 to 002978bf has its CatchHandler @ 00297da8 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002978c0 to 002978d3 has its CatchHandler @ 00297d84 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002978d4 to 002978df has its CatchHandler @ 00297d60 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002978e0 to 002978ef has its CatchHandler @ 00297d3c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002978f0 to 00297903 has its CatchHandler @ 00297d18 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00297908 to 00297943 has its CatchHandler @ 00297cb8 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00297e5c  FUN_00297e5c =====

void FUN_00297e5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394ea8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00297eac  FUN_00297eac =====

undefined * FUN_00297eac(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394eb0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00297eec  FUN_00297eec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00297eec(undefined8 *param_1,int param_2,byte *param_3,long param_4)

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
    puVar7 = PTR_typeinfo_name_00394e48;
    uStack_68 = _UNK_001d80f8;
    local_70 = _DAT_001d80f0;
    *(undefined1 *)((long)local_60 + 0x2c) = 0;
    uVar13 = *(undefined8 *)puVar7;
    uVar15 = *(undefined8 *)(puVar7 + 0x18);
    uVar14 = *(undefined8 *)(puVar7 + 0x10);
    uVar12 = *(undefined8 *)(puVar7 + 0x24);
    uVar10 = *(undefined8 *)(puVar7 + 0x1c);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar13;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    *(undefined8 *)((long)local_60 + 0x24) = uVar12;
    *(undefined8 *)((long)local_60 + 0x1c) = uVar10;
                    /* try { // try from 00297f70 to 00297f7f has its CatchHandler @ 00298210 */
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
    if (0xffffffffffffffef < uVar1) goto LAB_002981d0;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002980d4;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002980bc to 002980c3 has its CatchHandler @ 00298224 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002980d4:
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
                    /* try { // try from 00298114 to 0029811b has its CatchHandler @ 002981fc */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00298134 to 00298147 has its CatchHandler @ 002981e4 */
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_0029826c;
                    /* try { // try from 002981cc to 002981cf has its CatchHandler @ 00298240 */
      FUN_00260a84();
LAB_002981d0:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002981e0 to 002981e3 has its CatchHandler @ 00298224 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 00298134 with catch @ 002981e4 */
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
      goto LAB_0029826c;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00298044;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0029802c to 00298033 has its CatchHandler @ 00298240 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_00298044:
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
                    /* try { // try from 00298084 to 0029808b has its CatchHandler @ 00298228 */
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
LAB_0029826c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00298270  FUN_00298270 =====

void FUN_00298270(long *param_1)

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


// ===== 002982fc  FUN_002982fc =====

void FUN_002982fc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e930;
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


// ===== 00298368  FUN_00298368 =====

void FUN_00298368(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e930;
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


// ===== 002983d0  FUN_002983d0 =====

undefined8 * FUN_002983d0(long param_1)

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
  *puVar4 = &PTR_FUN_0037e930;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00298430 to 00298433 has its CatchHandler @ 0029846c */
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


// ===== 00298494  FUN_00298494 =====

void FUN_00298494(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037e930;
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


// ===== 0029852c  FUN_0029852c =====

void FUN_0029852c(long param_1)

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


// ===== 0029858c  FUN_0029858c =====

void FUN_0029858c(void *param_1)

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


// ===== 002985e8  FUN_002985e8 =====

void FUN_002985e8(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  long *plVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_148 [24];
  undefined8 local_130 [3];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 *local_a0 [3];
  basic_string local_88;
  undefined7 uStack_87;
  long *local_80;
  void *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_a0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00298644 to 00298653 has its CatchHandler @ 00298c2c */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,local_a0);
  plVar1 = local_80;
  if ((CONCAT71(uStack_87,local_88) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_87,local_88),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394e50,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002986cc;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x002986cc;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002986cc:
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394e80
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394e80
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394e78
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394e78
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar4,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394e80
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 00298704 to 0029870b has its CatchHandler @ 00298934 */
    (*pcVar11)(&local_88);
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      plVar1 = (long *)(ulong)((byte)local_88 >> 1);
      pvVar3 = (void *)((ulong)&local_88 | 1);
      if (((byte)local_88 & 1) != 0) {
        plVar1 = local_80;
        pvVar3 = local_78;
      }
                    /* try { // try from 0029873c to 00298747 has its CatchHandler @ 00298910 */
      (**(code **)(*param_3 + 0x110))(local_130,param_3,pvVar3,plVar1);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = local_130[0];
      if ((local_70 != '\0') && (((byte)local_88 & 1) != 0)) {
        operator_delete(local_78);
      }
    }
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002987e8 to 002987f7 has its CatchHandler @ 00298dc8 */
    FUN_00297eec(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00298804 to 00298817 has its CatchHandler @ 00298da8 */
    std::__ndk1::operator+("`",&local_88);
                    /* try { // try from 00298818 to 0029882b has its CatchHandler @ 00298d90 */
    FUN_00263450(auStack_100,auStack_118,"` expected ");
                    /* try { // try from 0029882c to 00298837 has its CatchHandler @ 00298d60 */
    std::__ndk1::to_string(0);
                    /* try { // try from 00298838 to 00298847 has its CatchHandler @ 00298d3c */
    FUN_00264adc(auStack_e8,auStack_100,local_130);
                    /* try { // try from 00298848 to 0029885b has its CatchHandler @ 00298d18 */
    FUN_00263450(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 0029885c to 00298867 has its CatchHandler @ 00298cf4 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00298868 to 00298877 has its CatchHandler @ 00298cd0 */
    FUN_00264adc(auStack_b8,auStack_d0,auStack_148);
                    /* try { // try from 00298878 to 0029888b has its CatchHandler @ 00298cac */
    FUN_00263450(local_a0,auStack_b8,&DAT_001d5be0);
                    /* try { // try from 00298890 to 002988cb has its CatchHandler @ 00298c4c */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00298df0  FUN_00298df0 =====

void FUN_00298df0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394e88) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00298e40  FUN_00298e40 =====

undefined * FUN_00298e40(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394e90;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00298e80  FUN_00298e80 =====

void FUN_00298e80(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e8b0;
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


// ===== 00298eec  FUN_00298eec =====

void FUN_00298eec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037e8b0;
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


// ===== 00298f54  FUN_00298f54 =====

undefined8 * FUN_00298f54(long param_1)

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
  *puVar4 = &PTR_FUN_0037e8b0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00298fb4 to 00298fb7 has its CatchHandler @ 00298ff0 */
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


// ===== 00299018  FUN_00299018 =====

void FUN_00299018(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037e8b0;
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


// ===== 002990b0  FUN_002990b0 =====

void FUN_002990b0(long param_1)

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


// ===== 00299110  FUN_00299110 =====

void FUN_00299110(void *param_1)

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


// ===== 0029916c  FUN_0029916c =====

void FUN_0029916c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
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
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002991c8 to 002991d7 has its CatchHandler @ 00299724 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394e50,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00299250;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00299250;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00299250:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 0) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394e60
         & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394e60
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394e58
       , iVar4 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394e58
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive21HybridRiveRuntimeSpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394e60
                         );
    }
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *(long *)(lVar5 + ((long)uVar9 >> 1)));
    }
                    /* try { // try from 00299288 to 0029928b has its CatchHandler @ 00299434 */
    bVar3 = (*pcVar10)();
    *param_1 = 2;
    *(byte *)(param_1 + 2) = bVar3 & 1;
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0029930c to 0029931b has its CatchHandler @ 002998c0 */
    FUN_00297eec(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00299328 to 0029933b has its CatchHandler @ 002998a0 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0029933c to 0029934f has its CatchHandler @ 00299888 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00299350 to 0029935b has its CatchHandler @ 00299858 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0029935c to 0029936b has its CatchHandler @ 00299834 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0029936c to 0029937f has its CatchHandler @ 00299810 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00299380 to 0029938b has its CatchHandler @ 002997ec */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0029938c to 0029939b has its CatchHandler @ 002997c8 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0029939c to 002993af has its CatchHandler @ 002997a4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002993b4 to 002993ef has its CatchHandler @ 00299744 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002998e8  FUN_002998e8 =====

void FUN_002998e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394e68) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00299938  FUN_00299938 =====

undefined * FUN_00299938(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394e70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00299978  margelo::nitro::rive::HybridRiveRuntimeSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridRiveRuntimeSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveRuntimeSpec::loadHybridMethods(HybridRiveRuntimeSpec *this)

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


// ===== 002999bc  FUN_002999bc =====

void FUN_002999bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2999c0);
  (*pcVar1)();
}


// ===== 002999c0  FUN_002999c0 =====

void FUN_002999c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2999c4);
  (*pcVar1)();
}


// ===== 002999c4  FUN_002999c4 =====

void FUN_002999c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2999c8);
  (*pcVar1)();
}


// ===== 002999c8  FUN_002999c8 =====

void FUN_002999c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2999cc);
  (*pcVar1)();
}


// ===== 002999cc  margelo::nitro::rive::HybridRiveViewSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridRiveViewSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveViewSpec::loadHybridMethods(HybridRiveViewSpec *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  char cVar5;
  undefined7 uVar6;
  char cVar7;
  long lVar8;
  long **pplVar9;
  runtime_error *prVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  basic_string local_450;
  char acStack_44f [7];
  char cStack_448;
  char acStack_447 [7];
  undefined1 local_440;
  undefined7 uStack_43f;
  basic_string local_438;
  char acStack_437 [7];
  char cStack_430;
  char acStack_42f [7];
  undefined1 local_428;
  undefined7 uStack_427;
  basic_string local_420;
  undefined7 uStack_41f;
  char cStack_418;
  undefined4 uStack_417;
  undefined1 uStack_413;
  undefined2 uStack_412;
  long *local_410;
  basic_string local_408;
  undefined7 uStack_407;
  char cStack_400;
  undefined7 uStack_3ff;
  char cStack_3f8;
  undefined4 uStack_3f7;
  undefined1 uStack_3f3;
  undefined2 uStack_3f2;
  basic_string local_3f0;
  undefined7 uStack_3ef;
  char cStack_3e8;
  undefined7 uStack_3e7;
  char cStack_3e0;
  undefined4 uStack_3df;
  undefined1 uStack_3db;
  undefined2 uStack_3da;
  basic_string local_3d8;
  undefined7 uStack_3d7;
  char cStack_3d0;
  undefined7 uStack_3cf;
  undefined4 uStack_3c8;
  uint uStack_3c4;
  basic_string local_3c0;
  undefined7 uStack_3bf;
  char cStack_3b8;
  undefined7 uStack_3b7;
  undefined4 uStack_3b0;
  uint uStack_3ac;
  byte local_3a8;
  char local_3a7 [8];
  undefined7 uStack_39f;
  char cStack_398;
  undefined4 uStack_397;
  undefined1 uStack_393;
  undefined2 uStack_392;
  basic_string local_390;
  char acStack_38f [7];
  char cStack_388;
  char acStack_387 [7];
  undefined1 local_380;
  undefined7 uStack_37f;
  byte local_378;
  char local_377 [8];
  undefined4 local_36f;
  undefined1 local_36b;
  void *local_368;
  byte local_360;
  undefined4 local_35f;
  undefined2 local_35b;
  void *local_350;
  byte local_348;
  undefined4 local_347;
  undefined2 local_343;
  void *local_338;
  byte local_330;
  undefined4 local_32f;
  undefined1 local_32b;
  void *local_320;
  basic_string local_318;
  undefined7 uStack_317;
  char cStack_310;
  undefined7 uStack_30f;
  char cStack_308;
  undefined4 uStack_307;
  undefined1 uStack_303;
  undefined2 uStack_302;
  basic_string local_300;
  undefined7 uStack_2ff;
  char cStack_2f8;
  char acStack_2f7 [5];
  undefined2 uStack_2f2;
  char cStack_2f0;
  char acStack_2ef [5];
  undefined1 uStack_2ea;
  undefined1 uStack_2e9;
  basic_string local_2e8;
  char acStack_2e7 [6];
  char cStack_2e1;
  char cStack_2e0;
  char acStack_2df [6];
  undefined1 uStack_2d9;
  long *local_2d8;
  uint local_2d0;
  undefined4 uStack_2cc;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  long *local_2c0;
  uint local_2b8;
  undefined4 uStack_2b4;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  long *local_2a8;
  basic_string local_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined1 uStack_297;
  undefined6 uStack_296;
  long *local_290;
  basic_string local_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined1 uStack_27f;
  undefined6 uStack_27e;
  long *local_278;
  basic_string local_270;
  undefined7 uStack_26f;
  char cStack_268;
  undefined7 uStack_267;
  char cStack_260;
  undefined2 uStack_25f;
  undefined5 uStack_25d;
  basic_string local_258;
  undefined7 uStack_257;
  char cStack_250;
  undefined7 uStack_24f;
  char cStack_248;
  undefined2 uStack_247;
  undefined5 uStack_245;
  basic_string local_240;
  undefined4 uStack_23f;
  undefined3 uStack_23b;
  long *plStack_238;
  long *local_230;
  basic_string local_228;
  undefined4 uStack_227;
  undefined3 uStack_223;
  long *plStack_220;
  long *local_218;
  basic_string local_210;
  undefined7 uStack_20f;
  char cStack_208;
  undefined2 uStack_207;
  undefined5 uStack_205;
  long *local_200;
  basic_string local_1f8;
  undefined7 uStack_1f7;
  char cStack_1f0;
  undefined2 uStack_1ef;
  undefined5 uStack_1ed;
  long *local_1e8;
  basic_string local_1e0;
  undefined4 uStack_1df;
  undefined1 uStack_1db;
  undefined2 uStack_1da;
  long *plStack_1d8;
  long *local_1d0;
  basic_string local_1c8;
  undefined4 uStack_1c7;
  undefined1 uStack_1c3;
  undefined2 uStack_1c2;
  long *plStack_1c0;
  long *local_1b8;
  basic_string local_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined1 uStack_1a7;
  undefined6 uStack_1a6;
  long *local_1a0;
  basic_string local_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined6 uStack_18e;
  long *local_188;
  byte local_180;
  char local_17f [8];
  undefined7 uStack_177;
  char cStack_170;
  undefined1 uStack_16f;
  undefined6 uStack_16e;
  byte local_168;
  char local_167 [8];
  undefined7 uStack_15f;
  char cStack_158;
  undefined1 uStack_157;
  undefined6 uStack_156;
  byte local_150;
  char local_14f [8];
  undefined4 local_147;
  undefined1 local_143;
  void *local_140;
  byte local_138;
  char local_137 [8];
  undefined4 local_12f;
  undefined1 local_12b;
  void *local_128;
  undefined *local_120;
  long *plStack_118;
  long *local_110;
  long *local_108;
  long *plStack_100;
  undefined4 local_f8;
  long *local_f0;
  long *plStack_e8;
  long **local_d0;
  undefined8 local_c0;
  ulong local_b8;
  long *plStack_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  long **local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar11 = *(long *)(*(long *)this + -0x20);
  plVar12 = *(long **)(this + lVar11 + 8);
  if (plVar12 == (long *)0x0) {
    local_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    local_120 = PTR_typeinfo_00394ec0;
                    /* try { // try from 00299a30 to 00299a3f has its CatchHandler @ 0029f080 */
    FUN_00264f84(&local_f0,&local_120,&local_a0);
    plVar15 = plStack_e8;
    plVar12 = local_f0;
    plVar14 = *(long **)(this + lVar11 + 0x10);
    local_f0 = (long *)0x0;
    plStack_e8 = (long *)0x0;
    *(long **)(this + lVar11 + 0x10) = plVar15;
    *(long **)(this + lVar11 + 8) = plVar12;
    if ((plVar14 != (long *)0x0) &&
       (lVar8 = FUN_00255510(0xffffffffffffffff,plVar14 + 1), lVar8 == 0)) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar12 = plStack_e8;
    if ((plStack_e8 != (long *)0x0) &&
       (lVar8 = FUN_00255510(0xffffffffffffffff,plStack_e8 + 1), lVar8 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar12 = plStack_98;
    if ((plStack_98 != (long *)0x0) &&
       (lVar8 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1), lVar8 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar12 = *(long **)(this + lVar11 + 8);
  }
  puVar13 = *(undefined **)(*plVar12 + 8);
  plVar15 = plVar12;
  while (puVar13 != PTR_typeinfo_name_00394eb8) {
    plVar15 = (long *)plVar15[1];
    if (plVar15 == (long *)0x0) {
      plStack_e8 = *(long **)(this + lVar11 + 0x10);
      local_f0 = plVar12;
      if (plStack_e8 != (long *)0x0) {
        FUN_00259a00(1,plStack_e8 + 1);
      }
      local_120 = PTR_typeinfo_00394ec0;
                    /* try { // try from 00299b4c to 00299b5b has its CatchHandler @ 0029f074 */
      FUN_00264f84(&local_a0,&local_120,&local_f0);
      plVar15 = plStack_98;
      plVar12 = local_a0;
      plVar14 = *(long **)(this + lVar11 + 0x10);
      local_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
      *(long **)(this + lVar11 + 0x10) = plVar15;
      *(long **)(this + lVar11 + 8) = plVar12;
      if ((plVar14 != (long *)0x0) &&
         (lVar8 = FUN_00255510(0xffffffffffffffff,plVar14 + 1), lVar8 == 0)) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar12 = plStack_98;
      if ((plStack_98 != (long *)0x0) &&
         (lVar8 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1), lVar8 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar12 = plStack_e8;
      if ((plStack_e8 != (long *)0x0) &&
         (lVar8 = FUN_00255510(0xffffffffffffffff,plStack_e8 + 1), lVar8 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar15 = *(long **)(this + lVar11 + 8);
      lVar11 = plVar15[6];
      uVar2 = s_artboardName_001d6750._0_8_;
      goto joined_r0x00299c00;
    }
    puVar13 = *(undefined **)(*plVar15 + 8);
  }
  lVar11 = plVar15[6];
  uVar2 = s_artboardName_001d6750._0_8_;
joined_r0x00299c00:
  s_artboardName_001d6750._0_8_ = uVar2;
  if (((lVar11 == 0) && (plVar15[0xb] == 0)) && (plVar15[0x10] == 0)) {
    local_138 = 0x18;
    local_12b = 0;
    local_12f = 0x656d614e;
                    /* try { // try from 00299c40 to 00299c53 has its CatchHandler @ 0029f518 */
    local_137 = (char  [8])uVar2;
    FUN_002a02f8(plVar15,&local_138,0x10,1);
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    local_150 = 0x18;
    local_147 = 0x656d614e;
    local_143 = 0;
                    /* try { // try from 00299c80 to 00299c93 has its CatchHandler @ 0029f504 */
    local_14f = (char  [8])uVar2;
    FUN_002a0738(plVar15,&local_150,0x18,1);
    if ((local_150 & 1) != 0) {
      operator_delete(local_140);
    }
    uVar2 = s_stateMachineName_001d6999._0_8_;
    local_168 = 0x20;
    uStack_157 = 0;
    uStack_15f = (undefined7)s_stateMachineName_001d6999._8_8_;
    uVar4 = uStack_15f;
    cStack_158 = SUB81(s_stateMachineName_001d6999._8_8_,7);
    cVar5 = cStack_158;
    local_167[0] = s_stateMachineName_001d6999[0];
    local_167[1] = s_stateMachineName_001d6999[1];
    local_167[2] = s_stateMachineName_001d6999[2];
    local_167[3] = s_stateMachineName_001d6999[3];
    local_167[4] = s_stateMachineName_001d6999[4];
    local_167[5] = s_stateMachineName_001d6999[5];
    local_167[6] = s_stateMachineName_001d6999[6];
    local_167[7] = s_stateMachineName_001d6999[7];
                    /* try { // try from 00299cc4 to 00299cd7 has its CatchHandler @ 0029f4f0 */
    FUN_002a02f8(plVar15,&local_168,0x20,1);
    if ((local_168 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_156,CONCAT11(uStack_157,cStack_158)));
    }
    uVar3 = s_stateMachineName_001d6999._0_8_;
    uStack_16f = 0;
    local_180 = 0x20;
    s_stateMachineName_001d6999[0] = (char)uVar2;
    s_stateMachineName_001d6999[1] = SUB81(uVar2,1);
    s_stateMachineName_001d6999[2] = SUB81(uVar2,2);
    s_stateMachineName_001d6999[3] = SUB81(uVar2,3);
    s_stateMachineName_001d6999[4] = SUB81(uVar2,4);
    s_stateMachineName_001d6999[5] = SUB81(uVar2,5);
    s_stateMachineName_001d6999[6] = SUB81(uVar2,6);
    s_stateMachineName_001d6999[7] = SUB81(uVar2,7);
    local_17f[0] = s_stateMachineName_001d6999[0];
    local_17f[1] = s_stateMachineName_001d6999[1];
    local_17f[2] = s_stateMachineName_001d6999[2];
    local_17f[3] = s_stateMachineName_001d6999[3];
    local_17f[4] = s_stateMachineName_001d6999[4];
    local_17f[5] = s_stateMachineName_001d6999[5];
    local_17f[6] = s_stateMachineName_001d6999[6];
    local_17f[7] = s_stateMachineName_001d6999[7];
                    /* try { // try from 00299cfc to 00299d0f has its CatchHandler @ 0029f4dc */
    s_stateMachineName_001d6999._0_8_ = uVar3;
    uStack_177 = uVar4;
    cStack_170 = cVar5;
    FUN_002a0738(plVar15,&local_180,0x28,1);
    if ((local_180 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_16e,CONCAT11(uStack_16f,cStack_170)));
    }
    local_198 = (basic_string)0x10;
    uStack_18f = 0;
    uStack_197 = 0x616c506f747561;
    uStack_190 = 0x79;
    plVar12 = plVar15 + 8;
    lVar11 = FUN_002632b8(*plVar12,plVar15[9],&local_198);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d2b8 to 0029d2cb has its CatchHandler @ 002a0188 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_198);
                    /* try { // try from 0029d2cc to 0029d2df has its CatchHandler @ 0029fd0c */
      FUN_00263450(&local_f0,&local_a0,"\" - a getter with that name already exists!");
                    /* try { // try from 0029d2e4 to 0029d31b has its CatchHandler @ 0029fce8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plVar14 = plVar15 + 3;
    lVar11 = FUN_002632b8(*plVar14,plVar15[4],&local_198);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d32c to 0029d33f has its CatchHandler @ 002a0184 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_198);
                    /* try { // try from 0029d340 to 0029d353 has its CatchHandler @ 0029fce4 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029d358 to 0029d38f has its CatchHandler @ 0029fcb8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT62(uStack_18e,CONCAT11(uStack_18f,uStack_190));
    local_120 = (undefined *)CONCAT71(uStack_197,local_198);
    local_110 = local_188;
    plStack_100 = _UNK_001d8188;
    local_108 = _DAT_001d8180;
    local_f8 = 1;
                    /* try { // try from 00299d8c to 00299d93 has its CatchHandler @ 0029f4c4 */
    local_80 = (long **)operator_new(0x38);
    *local_80 = (long *)&PTR_FUN_0037edf0;
    if (((ulong)local_120 & 1) == 0) {
      local_80[2] = plStack_118;
      *(undefined **)(local_80 + 1) = local_120;
      local_80[3] = local_110;
    }
    else {
                    /* try { // try from 00299dc4 to 00299dc7 has its CatchHandler @ 0029f064 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_80 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80[5] = plStack_100;
    local_80[4] = local_108;
    *(undefined4 *)(local_80 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_00299e04:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_00299e14:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_00299e14;
      }
      if (local_80 != &local_a0) goto LAB_00299e04;
      local_d0 = &local_f0;
                    /* try { // try from 0029caa0 to 0029caab has its CatchHandler @ 0029e454 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if (((byte)local_198 & 1) == 0) {
      plStack_b0 = (long *)CONCAT62(uStack_18e,CONCAT11(uStack_18f,uStack_190));
      local_b8 = CONCAT71(uStack_197,local_198);
      local_a8 = local_188;
    }
    else {
                    /* try { // try from 00299e48 to 00299e4f has its CatchHandler @ 0029eff8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_188,CONCAT62(uStack_18e,CONCAT11(uStack_18f,uStack_190)));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_00299e74:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_00299e74;
    }
                    /* try { // try from 00299e80 to 00299e93 has its CatchHandler @ 0029f4b4 */
    FUN_002634d4(plVar12,&local_198,&local_198,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_00299ec8:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_00299ec8;
    }
    if (((byte)local_198 & 1) != 0) {
      operator_delete(local_188);
    }
    uStack_1af = 0x616c506f747561;
    uStack_1a8 = 0x79;
    local_1b0 = (basic_string)0x10;
    uStack_1a7 = 0;
    plVar16 = plVar15 + 0xd;
    lVar11 = FUN_002632b8(*plVar16,plVar15[0xe],&local_1b0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d39c to 0029d3af has its CatchHandler @ 002a0168 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_1b0);
                    /* try { // try from 0029d3b0 to 0029d3c3 has its CatchHandler @ 0029fca0 */
      FUN_00263450(&local_f0,&local_a0,"\" - a setter with that name already exists!");
                    /* try { // try from 0029d3c8 to 0029d3ff has its CatchHandler @ 0029fc7c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_1b0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d410 to 0029d423 has its CatchHandler @ 002a0164 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_1b0);
                    /* try { // try from 0029d424 to 0029d437 has its CatchHandler @ 0029fc78 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029d43c to 0029d473 has its CatchHandler @ 0029fc4c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT62(uStack_1a6,CONCAT11(uStack_1a7,uStack_1a8));
    local_120 = (undefined *)CONCAT71(uStack_1af,local_1b0);
    local_110 = local_1a0;
    plStack_100 = _UNK_001d7f48;
    local_108 = _DAT_001d7f40;
    local_f8 = 2;
                    /* try { // try from 00299f3c to 00299f43 has its CatchHandler @ 0029f49c */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037ee70;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 00299f74 to 00299f77 has its CatchHandler @ 0029efe8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_00299fb4:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_00299fc4:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_00299fc4;
      }
      if (local_80 != &local_a0) goto LAB_00299fb4;
      local_d0 = &local_f0;
                    /* try { // try from 0029cac0 to 0029cacb has its CatchHandler @ 0029e450 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if (((byte)local_1b0 & 1) == 0) {
      plStack_b0 = (long *)CONCAT62(uStack_1a6,CONCAT11(uStack_1a7,uStack_1a8));
      local_b8 = CONCAT71(uStack_1af,local_1b0);
      local_a8 = local_1a0;
    }
    else {
                    /* try { // try from 00299ffc to 0029a003 has its CatchHandler @ 0029ef7c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_1a0,CONCAT62(uStack_1a6,CONCAT11(uStack_1a7,uStack_1a8)));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029a028:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029a028;
    }
                    /* try { // try from 0029a034 to 0029a047 has its CatchHandler @ 0029f48c */
    FUN_002634d4(plVar16,&local_1b0,&local_1b0,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029a07c:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029a07c;
    }
    if (((byte)local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
    uStack_1c3 = 0;
    local_1c8 = (basic_string)0x8;
    uStack_1c7 = 0x656c6966;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_1c8);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d480 to 0029d493 has its CatchHandler @ 002a0148 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_1c8);
                    /* try { // try from 0029d494 to 0029d4a7 has its CatchHandler @ 0029fc34 */
      FUN_00263450(&local_f0,&local_a0,"\" - a getter with that name already exists!");
                    /* try { // try from 0029d4ac to 0029d4e3 has its CatchHandler @ 0029fc10 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_1c8);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d4f4 to 0029d507 has its CatchHandler @ 002a0144 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_1c8);
                    /* try { // try from 0029d508 to 0029d51b has its CatchHandler @ 0029fc0c */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029d520 to 0029d557 has its CatchHandler @ 0029fbe0 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    local_120 = (undefined *)
                CONCAT26(uStack_1c2,CONCAT15(uStack_1c3,CONCAT41(uStack_1c7,local_1c8)));
    local_110 = local_1b8;
    plStack_118 = plStack_1c0;
    plStack_100 = _UNK_001d7f78;
    local_108 = _DAT_001d7f70;
    local_f8 = 1;
                    /* try { // try from 0029a0f8 to 0029a0ff has its CatchHandler @ 0029f474 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037eef0;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029a130 to 0029a133 has its CatchHandler @ 0029ef6c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029a170:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029a180:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029a180;
      }
      if (local_80 != &local_a0) goto LAB_0029a170;
      local_d0 = &local_f0;
                    /* try { // try from 0029cae0 to 0029caeb has its CatchHandler @ 0029e44c */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if (((byte)local_1c8 & 1) == 0) {
      plStack_b0 = plStack_1c0;
      local_b8 = CONCAT26(uStack_1c2,CONCAT15(uStack_1c3,CONCAT41(uStack_1c7,local_1c8)));
      local_a8 = local_1b8;
    }
    else {
                    /* try { // try from 0029a1b4 to 0029a1bb has its CatchHandler @ 0029ef00 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_1b8,(ulong)plStack_1c0);
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029a1e0:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029a1e0;
    }
                    /* try { // try from 0029a1ec to 0029a1ff has its CatchHandler @ 0029f464 */
    FUN_002634d4(plVar12,&local_1c8,&local_1c8,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029a234:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029a234;
    }
    if (((byte)local_1c8 & 1) != 0) {
      operator_delete(local_1b8);
    }
    uStack_1df = 0x656c6966;
    local_1e0 = (basic_string)0x8;
    uStack_1db = 0;
    lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_1e0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d564 to 0029d577 has its CatchHandler @ 002a0128 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_1e0);
                    /* try { // try from 0029d578 to 0029d58b has its CatchHandler @ 0029fbc8 */
      FUN_00263450(&local_f0,&local_a0,"\" - a setter with that name already exists!");
                    /* try { // try from 0029d590 to 0029d5c7 has its CatchHandler @ 0029fba4 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_1e0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d5d8 to 0029d5eb has its CatchHandler @ 002a0124 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_1e0);
                    /* try { // try from 0029d5ec to 0029d5ff has its CatchHandler @ 0029fba0 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029d604 to 0029d63b has its CatchHandler @ 0029fb74 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    local_120 = (undefined *)
                CONCAT26(uStack_1da,CONCAT15(uStack_1db,CONCAT41(uStack_1df,local_1e0)));
    local_110 = local_1d0;
    plStack_118 = plStack_1d8;
    plStack_100 = _UNK_001d8058;
    local_108 = _DAT_001d8050;
    local_f8 = 2;
                    /* try { // try from 0029a2a4 to 0029a2ab has its CatchHandler @ 0029f44c */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037ef70;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029a2dc to 0029a2df has its CatchHandler @ 0029eef0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029a31c:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029a32c:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029a32c;
      }
      if (local_80 != &local_a0) goto LAB_0029a31c;
      local_d0 = &local_f0;
                    /* try { // try from 0029cb00 to 0029cb0b has its CatchHandler @ 0029e448 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if (((byte)local_1e0 & 1) == 0) {
      plStack_b0 = plStack_1d8;
      local_b8 = CONCAT26(uStack_1da,CONCAT15(uStack_1db,CONCAT41(uStack_1df,local_1e0)));
      local_a8 = local_1d0;
    }
    else {
                    /* try { // try from 0029a364 to 0029a36b has its CatchHandler @ 0029ee84 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_1d0,(ulong)plStack_1d8);
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029a390:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029a390;
    }
                    /* try { // try from 0029a39c to 0029a3af has its CatchHandler @ 0029f43c */
    FUN_002634d4(plVar16,&local_1e0,&local_1e0,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029a3e4:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029a3e4;
    }
    if (((byte)local_1e0 & 1) != 0) {
      operator_delete(local_1d0);
    }
    local_1f8 = (basic_string)0x12;
    uStack_1ef = 0x74;
    uStack_1f7 = (undefined7)s_alignment_001d695e._0_8_;
    uVar4 = uStack_1f7;
    cStack_1f0 = SUB81(s_alignment_001d695e._0_8_,7);
    cVar5 = cStack_1f0;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_1f8);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d648 to 0029d65b has its CatchHandler @ 002a0108 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_1f8);
                    /* try { // try from 0029d65c to 0029d66f has its CatchHandler @ 0029fb5c */
      FUN_00263450(&local_f0,&local_a0,"\" - a getter with that name already exists!");
                    /* try { // try from 0029d674 to 0029d6ab has its CatchHandler @ 0029fb38 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_1f8);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d6bc to 0029d6cf has its CatchHandler @ 002a0104 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_1f8);
                    /* try { // try from 0029d6d0 to 0029d6e3 has its CatchHandler @ 0029fb34 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029d6e8 to 0029d71f has its CatchHandler @ 0029fb08 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT53(uStack_1ed,CONCAT21(uStack_1ef,cStack_1f0));
    local_120 = (undefined *)CONCAT71(uStack_1f7,local_1f8);
    local_110 = local_1e8;
    plStack_100 = _UNK_001d80c8;
    local_108 = _DAT_001d80c0;
    local_f8 = 1;
                    /* try { // try from 0029a464 to 0029a46b has its CatchHandler @ 0029f424 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037eff0;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029a49c to 0029a49f has its CatchHandler @ 0029ee74 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029a4dc:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029a4ec:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029a4ec;
      }
      if (local_80 != &local_a0) goto LAB_0029a4dc;
      local_d0 = &local_f0;
                    /* try { // try from 0029cb20 to 0029cb2b has its CatchHandler @ 0029e444 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if (((byte)local_1f8 & 1) == 0) {
      plStack_b0 = (long *)CONCAT53(uStack_1ed,CONCAT21(uStack_1ef,cStack_1f0));
      local_b8 = CONCAT71(uStack_1f7,local_1f8);
      local_a8 = local_1e8;
    }
    else {
                    /* try { // try from 0029a520 to 0029a527 has its CatchHandler @ 0029ee08 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_1e8,CONCAT53(uStack_1ed,CONCAT21(uStack_1ef,cStack_1f0)));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029a54c:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029a54c;
    }
                    /* try { // try from 0029a558 to 0029a56b has its CatchHandler @ 0029f414 */
    FUN_002634d4(plVar12,&local_1f8,&local_1f8,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029a5a0:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029a5a0;
    }
    if (((byte)local_1f8 & 1) != 0) {
      operator_delete(local_1e8);
    }
    local_210 = (basic_string)0x12;
    uStack_207 = 0x74;
    uStack_20f = uVar4;
    cStack_208 = cVar5;
    lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_210);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d72c to 0029d73f has its CatchHandler @ 002a00e8 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_210);
                    /* try { // try from 0029d740 to 0029d753 has its CatchHandler @ 0029faf0 */
      FUN_00263450(&local_f0,&local_a0,"\" - a setter with that name already exists!");
                    /* try { // try from 0029d758 to 0029d78f has its CatchHandler @ 0029facc */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_210);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d7a0 to 0029d7b3 has its CatchHandler @ 002a00e4 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_210);
                    /* try { // try from 0029d7b4 to 0029d7c7 has its CatchHandler @ 0029fac8 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029d7cc to 0029d803 has its CatchHandler @ 0029fa9c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT53(uStack_205,CONCAT21(uStack_207,cStack_208));
    local_120 = (undefined *)CONCAT71(uStack_20f,local_210);
    local_110 = local_200;
    plStack_100 = _UNK_001d80e8;
    local_108 = _DAT_001d80e0;
    local_f8 = 2;
                    /* try { // try from 0029a614 to 0029a61b has its CatchHandler @ 0029f3fc */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f070;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029a64c to 0029a64f has its CatchHandler @ 0029edf8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029a68c:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029a69c:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029a69c;
      }
      if (local_80 != &local_a0) goto LAB_0029a68c;
      local_d0 = &local_f0;
                    /* try { // try from 0029cb40 to 0029cb4b has its CatchHandler @ 0029e440 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if (((byte)local_210 & 1) == 0) {
      plStack_b0 = (long *)CONCAT53(uStack_205,CONCAT21(uStack_207,cStack_208));
      local_b8 = CONCAT71(uStack_20f,local_210);
      local_a8 = local_200;
    }
    else {
                    /* try { // try from 0029a6d4 to 0029a6db has its CatchHandler @ 0029ed8c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_200,CONCAT53(uStack_205,CONCAT21(uStack_207,cStack_208)));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029a700:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029a700;
    }
                    /* try { // try from 0029a70c to 0029a71f has its CatchHandler @ 0029f3ec */
    FUN_002634d4(plVar16,&local_210,&local_210,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029a754:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029a754;
    }
    if (((byte)local_210 & 1) != 0) {
      operator_delete(local_200);
    }
    local_228 = (basic_string)0x6;
    uStack_227 = 0x746966;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_228);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d810 to 0029d823 has its CatchHandler @ 002a00c8 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_228);
                    /* try { // try from 0029d824 to 0029d837 has its CatchHandler @ 0029fa84 */
      FUN_00263450(&local_f0,&local_a0,"\" - a getter with that name already exists!");
                    /* try { // try from 0029d83c to 0029d873 has its CatchHandler @ 0029fa60 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_228);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d884 to 0029d897 has its CatchHandler @ 002a00c4 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_228);
                    /* try { // try from 0029d898 to 0029d8ab has its CatchHandler @ 0029fa5c */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029d8b0 to 0029d8e7 has its CatchHandler @ 0029fa30 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    local_120 = (undefined *)CONCAT35(uStack_223,CONCAT41(uStack_227,local_228));
    local_110 = local_218;
    plStack_118 = plStack_220;
    plStack_100 = _UNK_001d7f88;
    local_108 = _DAT_001d7f80;
    local_f8 = 1;
                    /* try { // try from 0029a7c8 to 0029a7cf has its CatchHandler @ 0029f3d4 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f0f0;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029a800 to 0029a803 has its CatchHandler @ 0029ed7c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029a840:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029a850:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029a850;
      }
      if (local_80 != &local_a0) goto LAB_0029a840;
      local_d0 = &local_f0;
                    /* try { // try from 0029cb60 to 0029cb6b has its CatchHandler @ 0029e43c */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if (((byte)local_228 & 1) == 0) {
      plStack_b0 = plStack_220;
      local_b8 = CONCAT35(uStack_223,CONCAT41(uStack_227,local_228));
      local_a8 = local_218;
    }
    else {
                    /* try { // try from 0029a884 to 0029a88b has its CatchHandler @ 0029ed10 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_218,(ulong)plStack_220);
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029a8b0:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029a8b0;
    }
                    /* try { // try from 0029a8bc to 0029a8cf has its CatchHandler @ 0029f3c4 */
    FUN_002634d4(plVar12,&local_228,&local_228,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029a904:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029a904;
    }
    if (((byte)local_228 & 1) != 0) {
      operator_delete(local_218);
    }
    local_240 = (basic_string)0x6;
    uStack_23f = 0x746966;
    lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_240);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d8f4 to 0029d907 has its CatchHandler @ 002a00a8 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_240);
                    /* try { // try from 0029d908 to 0029d91b has its CatchHandler @ 0029fa18 */
      FUN_00263450(&local_f0,&local_a0,"\" - a setter with that name already exists!");
                    /* try { // try from 0029d920 to 0029d957 has its CatchHandler @ 0029f9f4 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_240);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d968 to 0029d97b has its CatchHandler @ 002a00a4 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_240);
                    /* try { // try from 0029d97c to 0029d98f has its CatchHandler @ 0029f9f0 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029d994 to 0029d9cb has its CatchHandler @ 0029f9c4 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    local_120 = (undefined *)CONCAT35(uStack_23b,CONCAT41(uStack_23f,local_240));
    local_110 = local_230;
    plStack_118 = plStack_238;
    plStack_100 = _UNK_001d8028;
    local_108 = _DAT_001d8020;
    local_f8 = 2;
                    /* try { // try from 0029a978 to 0029a97f has its CatchHandler @ 0029f3ac */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f170;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029a9b0 to 0029a9b3 has its CatchHandler @ 0029ed00 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029a9f0:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029aa00:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029aa00;
      }
      if (local_80 != &local_a0) goto LAB_0029a9f0;
      local_d0 = &local_f0;
                    /* try { // try from 0029cb80 to 0029cb8b has its CatchHandler @ 0029e438 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if (((byte)local_240 & 1) == 0) {
      plStack_b0 = plStack_238;
      local_b8 = CONCAT35(uStack_23b,CONCAT41(uStack_23f,local_240));
      local_a8 = local_230;
    }
    else {
                    /* try { // try from 0029aa38 to 0029aa3f has its CatchHandler @ 0029ec94 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_230,(ulong)plStack_238);
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029aa64:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029aa64;
    }
                    /* try { // try from 0029aa70 to 0029aa83 has its CatchHandler @ 0029f39c */
    FUN_002634d4(plVar16,&local_240,&local_240,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029aab8:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029aab8;
    }
    if (((byte)local_240 & 1) != 0) {
      operator_delete(local_230);
    }
    local_258 = (basic_string)0x22;
    uStack_247 = 0x72;
    uStack_24f = (undefined7)s_layoutScaleFactor_001d675d._8_8_;
    uVar6 = uStack_24f;
    cStack_248 = SUB81(s_layoutScaleFactor_001d675d._8_8_,7);
    cVar7 = cStack_248;
    uStack_257 = (undefined7)s_layoutScaleFactor_001d675d._0_8_;
    uVar4 = uStack_257;
    cStack_250 = SUB81(s_layoutScaleFactor_001d675d._0_8_,7);
    cVar5 = cStack_250;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_258);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d9d8 to 0029d9eb has its CatchHandler @ 002a0088 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_258);
                    /* try { // try from 0029d9ec to 0029d9ff has its CatchHandler @ 0029f9ac */
      FUN_00263450(&local_f0,&local_a0,"\" - a getter with that name already exists!");
                    /* try { // try from 0029da04 to 0029da3b has its CatchHandler @ 0029f988 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_258);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029da4c to 0029da5f has its CatchHandler @ 002a0084 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_258);
                    /* try { // try from 0029da60 to 0029da73 has its CatchHandler @ 0029f984 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029da78 to 0029daaf has its CatchHandler @ 0029f958 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    local_110 = (long *)CONCAT53(uStack_245,CONCAT21(uStack_247,cStack_248));
    plStack_118 = (long *)CONCAT71(uStack_24f,cStack_250);
    local_120 = (undefined *)CONCAT71(uStack_257,local_258);
    plStack_100 = _UNK_001d7fe8;
    local_108 = _DAT_001d7fe0;
    local_f8 = 1;
                    /* try { // try from 0029ab3c to 0029ab43 has its CatchHandler @ 0029f384 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f1f0;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029ab74 to 0029ab77 has its CatchHandler @ 0029ec84 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029abb4:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029abc4:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029abc4;
      }
      if (local_80 != &local_a0) goto LAB_0029abb4;
      local_d0 = &local_f0;
                    /* try { // try from 0029cba0 to 0029cbab has its CatchHandler @ 0029e434 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if (((byte)local_258 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_24f,cStack_250);
      local_b8 = CONCAT71(uStack_257,local_258);
      local_a8 = (long *)CONCAT53(uStack_245,CONCAT21(uStack_247,cStack_248));
    }
    else {
                    /* try { // try from 0029abf8 to 0029abff has its CatchHandler @ 0029ec18 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)CONCAT53(uStack_245,CONCAT21(uStack_247,cStack_248)),
                 CONCAT71(uStack_24f,cStack_250));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029ac24:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029ac24;
    }
                    /* try { // try from 0029ac30 to 0029ac43 has its CatchHandler @ 0029f374 */
    FUN_002634d4(plVar12,&local_258,&local_258,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029ac78:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029ac78;
    }
    if (((byte)local_258 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_245,CONCAT21(uStack_247,cStack_248)));
    }
    local_270 = (basic_string)0x22;
    uStack_25f = 0x72;
    uStack_26f = uVar4;
    cStack_268 = cVar5;
    uStack_267 = uVar6;
    cStack_260 = cVar7;
    lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_270);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dabc to 0029dacf has its CatchHandler @ 002a0068 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_270);
                    /* try { // try from 0029dad0 to 0029dae3 has its CatchHandler @ 0029f940 */
      FUN_00263450(&local_f0,&local_a0,"\" - a setter with that name already exists!");
                    /* try { // try from 0029dae8 to 0029db1f has its CatchHandler @ 0029f91c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_270);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029db30 to 0029db43 has its CatchHandler @ 002a0064 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_270);
                    /* try { // try from 0029db44 to 0029db57 has its CatchHandler @ 0029f918 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029db5c to 0029db93 has its CatchHandler @ 0029f8ec */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    local_110 = (long *)CONCAT53(uStack_25d,CONCAT21(uStack_25f,cStack_260));
    plStack_118 = (long *)CONCAT71(uStack_267,cStack_268);
    local_120 = (undefined *)CONCAT71(uStack_26f,local_270);
    plStack_100 = _UNK_001d7f58;
    local_108 = _DAT_001d7f50;
    local_f8 = 2;
                    /* try { // try from 0029acf0 to 0029acf7 has its CatchHandler @ 0029f35c */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f270;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029ad28 to 0029ad2b has its CatchHandler @ 0029ec08 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029ad68:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029ad78:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029ad78;
      }
      if (local_80 != &local_a0) goto LAB_0029ad68;
      local_d0 = &local_f0;
                    /* try { // try from 0029cbc0 to 0029cbcb has its CatchHandler @ 0029e430 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if (((byte)local_270 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_267,cStack_268);
      local_b8 = CONCAT71(uStack_26f,local_270);
      local_a8 = (long *)CONCAT53(uStack_25d,CONCAT21(uStack_25f,cStack_260));
    }
    else {
                    /* try { // try from 0029adac to 0029adb3 has its CatchHandler @ 0029eb9c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)CONCAT53(uStack_25d,CONCAT21(uStack_25f,cStack_260)),
                 CONCAT71(uStack_267,cStack_268));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029add8:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029add8;
    }
                    /* try { // try from 0029ade4 to 0029adf7 has its CatchHandler @ 0029f34c */
    FUN_002634d4(plVar16,&local_270,&local_270,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029ae2c:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029ae2c;
    }
    if (((byte)local_270 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_25d,CONCAT21(uStack_25f,cStack_260)));
    }
    uStack_27f = 0;
    local_288 = (basic_string)0x10;
    uStack_287 = 0x6e694261746164;
    uStack_280 = 100;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_288);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dba0 to 0029dbb3 has its CatchHandler @ 002a0048 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_288);
                    /* try { // try from 0029dbb4 to 0029dbc7 has its CatchHandler @ 0029f8d4 */
      FUN_00263450(&local_f0,&local_a0,"\" - a getter with that name already exists!");
                    /* try { // try from 0029dbcc to 0029dc03 has its CatchHandler @ 0029f8b0 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_288);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dc14 to 0029dc27 has its CatchHandler @ 002a0044 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_288);
                    /* try { // try from 0029dc28 to 0029dc3b has its CatchHandler @ 0029f8ac */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029dc40 to 0029dc77 has its CatchHandler @ 0029f880 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT62(uStack_27e,CONCAT11(uStack_27f,uStack_280));
    local_120 = (undefined *)CONCAT71(uStack_287,local_288);
    local_110 = local_278;
    plStack_100 = _UNK_001d7fb8;
    local_108 = _DAT_001d7fb0;
    local_f8 = 1;
                    /* try { // try from 0029aeac to 0029aeb3 has its CatchHandler @ 0029f334 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f2f0;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029aee4 to 0029aee7 has its CatchHandler @ 0029eb8c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029af24:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029af34:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029af34;
      }
      if (local_80 != &local_a0) goto LAB_0029af24;
      local_d0 = &local_f0;
                    /* try { // try from 0029cbe0 to 0029cbeb has its CatchHandler @ 0029e42c */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if (((byte)local_288 & 1) == 0) {
      plStack_b0 = (long *)CONCAT62(uStack_27e,CONCAT11(uStack_27f,uStack_280));
      local_b8 = CONCAT71(uStack_287,local_288);
      local_a8 = local_278;
    }
    else {
                    /* try { // try from 0029af64 to 0029af6b has its CatchHandler @ 0029eb20 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_278,CONCAT62(uStack_27e,CONCAT11(uStack_27f,uStack_280)));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029af90:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029af90;
    }
                    /* try { // try from 0029af9c to 0029afaf has its CatchHandler @ 0029f324 */
    FUN_002634d4(plVar12,&local_288,&local_288,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029afe4:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029afe4;
    }
    if (((byte)local_288 & 1) != 0) {
      operator_delete(local_278);
    }
    uStack_29f = 0x6e694261746164;
    uStack_298 = 100;
    local_2a0 = (basic_string)0x10;
    uStack_297 = 0;
    lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_2a0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dc84 to 0029dc97 has its CatchHandler @ 002a0028 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_2a0);
                    /* try { // try from 0029dc98 to 0029dcab has its CatchHandler @ 0029f868 */
      FUN_00263450(&local_f0,&local_a0,"\" - a setter with that name already exists!");
                    /* try { // try from 0029dcb0 to 0029dce7 has its CatchHandler @ 0029f844 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_2a0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dcf8 to 0029dd0b has its CatchHandler @ 002a0024 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_2a0);
                    /* try { // try from 0029dd0c to 0029dd1f has its CatchHandler @ 0029f840 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029dd24 to 0029dd5b has its CatchHandler @ 0029f814 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT62(uStack_296,CONCAT11(uStack_297,uStack_298));
    local_120 = (undefined *)CONCAT71(uStack_29f,local_2a0);
    local_110 = local_290;
    plStack_100 = _UNK_001d8098;
    local_108 = _DAT_001d8090;
    local_f8 = 2;
                    /* try { // try from 0029b054 to 0029b05b has its CatchHandler @ 0029f30c */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f388;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029b08c to 0029b08f has its CatchHandler @ 0029eb10 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029b0cc:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029b0dc:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029b0dc;
      }
      if (local_80 != &local_a0) goto LAB_0029b0cc;
      local_d0 = &local_f0;
                    /* try { // try from 0029cc00 to 0029cc0b has its CatchHandler @ 0029e428 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if (((byte)local_2a0 & 1) == 0) {
      plStack_b0 = (long *)CONCAT62(uStack_296,CONCAT11(uStack_297,uStack_298));
      local_b8 = CONCAT71(uStack_29f,local_2a0);
      local_a8 = local_290;
    }
    else {
                    /* try { // try from 0029b110 to 0029b117 has its CatchHandler @ 0029eaa4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_290,CONCAT62(uStack_296,CONCAT11(uStack_297,uStack_298)));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029b13c:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029b13c;
    }
                    /* try { // try from 0029b148 to 0029b15b has its CatchHandler @ 0029f2fc */
    FUN_002634d4(plVar16,&local_2a0,&local_2a0,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029b190:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029b190;
    }
    if (((byte)local_2a0 & 1) != 0) {
      operator_delete(local_290);
    }
    uStack_2b0 = 0;
    local_2b8 = 0x456e6f0e;
    uStack_2b4 = 0x726f7272;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_2b8);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dd68 to 0029dd7b has its CatchHandler @ 002a0008 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",(basic_string *)&local_2b8);
                    /* try { // try from 0029dd7c to 0029dd8f has its CatchHandler @ 0029f7fc */
      FUN_00263450(&local_f0,&local_a0,"\" - a getter with that name already exists!");
                    /* try { // try from 0029dd94 to 0029ddcb has its CatchHandler @ 0029f7d8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_2b8);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dddc to 0029ddef has its CatchHandler @ 002a0004 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",(basic_string *)&local_2b8);
                    /* try { // try from 0029ddf0 to 0029de03 has its CatchHandler @ 0029f7d4 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029de08 to 0029de3f has its CatchHandler @ 0029f7a8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(uStack_2af,uStack_2b0);
    local_120 = (undefined *)CONCAT44(uStack_2b4,local_2b8);
    local_110 = local_2a8;
    plStack_100 = _UNK_001d80a8;
    local_108 = _DAT_001d80a0;
    local_f8 = 1;
                    /* try { // try from 0029b214 to 0029b21b has its CatchHandler @ 0029f2e4 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f408;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029b24c to 0029b24f has its CatchHandler @ 0029ea94 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029b28c:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029b29c:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029b29c;
      }
      if (local_80 != &local_a0) goto LAB_0029b28c;
      local_d0 = &local_f0;
                    /* try { // try from 0029cc20 to 0029cc2b has its CatchHandler @ 0029e424 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if ((local_2b8 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_2af,uStack_2b0);
      local_b8 = CONCAT44(uStack_2b4,local_2b8);
      local_a8 = local_2a8;
    }
    else {
                    /* try { // try from 0029b2cc to 0029b2d3 has its CatchHandler @ 0029ea28 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_2a8,CONCAT71(uStack_2af,uStack_2b0));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029b2f8:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029b2f8;
    }
                    /* try { // try from 0029b304 to 0029b317 has its CatchHandler @ 0029f2d4 */
    FUN_002634d4(plVar12,&local_2b8,&local_2b8,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029b34c:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029b34c;
    }
    if ((local_2b8 & 1) != 0) {
      operator_delete(local_2a8);
    }
    uStack_2c8 = 0;
    local_2d0 = 0x456e6f0e;
    uStack_2cc = 0x726f7272;
    lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_2d0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029de4c to 0029de5f has its CatchHandler @ 0029ffe8 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",(basic_string *)&local_2d0);
                    /* try { // try from 0029de60 to 0029de73 has its CatchHandler @ 0029f790 */
      FUN_00263450(&local_f0,&local_a0,"\" - a setter with that name already exists!");
                    /* try { // try from 0029de78 to 0029deaf has its CatchHandler @ 0029f76c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_2d0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dec0 to 0029ded3 has its CatchHandler @ 0029ffe4 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",(basic_string *)&local_2d0);
                    /* try { // try from 0029ded4 to 0029dee7 has its CatchHandler @ 0029f768 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029deec to 0029df23 has its CatchHandler @ 0029f73c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(uStack_2c7,uStack_2c8);
    local_120 = (undefined *)CONCAT44(uStack_2cc,local_2d0);
    local_110 = local_2c0;
    plStack_100 = _UNK_001d8218;
    local_108 = _DAT_001d8210;
    local_f8 = 2;
                    /* try { // try from 0029b3d4 to 0029b3db has its CatchHandler @ 0029f2bc */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f508;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029b40c to 0029b40f has its CatchHandler @ 0029ea18 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029b44c:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029b45c:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029b45c;
      }
      if (local_80 != &local_a0) goto LAB_0029b44c;
      local_d0 = &local_f0;
                    /* try { // try from 0029cc40 to 0029cc4b has its CatchHandler @ 0029e420 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if ((local_2d0 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_2c7,uStack_2c8);
      local_b8 = CONCAT44(uStack_2cc,local_2d0);
      local_a8 = local_2c0;
    }
    else {
                    /* try { // try from 0029b490 to 0029b497 has its CatchHandler @ 0029e9ac */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_2c0,CONCAT71(uStack_2c7,uStack_2c8));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029b4bc:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029b4bc;
    }
                    /* try { // try from 0029b4c8 to 0029b4db has its CatchHandler @ 0029f2ac */
    FUN_002634d4(plVar16,&local_2d0,&local_2d0,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029b510:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029b510;
    }
    if ((local_2d0 & 1) != 0) {
      operator_delete(local_2c0);
    }
    local_2e8 = (basic_string)0x1c;
    uStack_2d9 = 0;
    acStack_2e7[0] = s_awaitViewReady_001d62cd[0];
    acStack_2e7[1] = s_awaitViewReady_001d62cd[1];
    acStack_2e7[2] = s_awaitViewReady_001d62cd[2];
    acStack_2e7[3] = s_awaitViewReady_001d62cd[3];
    acStack_2e7[4] = s_awaitViewReady_001d62cd[4];
    acStack_2e7[5] = s_awaitViewReady_001d62cd[5];
    cStack_2e1 = (char)s_awaitViewReady_001d62cd._6_2_;
    cStack_2e0 = SUB21(s_awaitViewReady_001d62cd._6_2_,1);
    acStack_2df[0] = s_awaitViewReady_001d62cd[8];
    acStack_2df[1] = s_awaitViewReady_001d62cd[9];
    acStack_2df[2] = s_awaitViewReady_001d62cd[10];
    acStack_2df[3] = s_awaitViewReady_001d62cd[0xb];
    acStack_2df[4] = s_awaitViewReady_001d62cd[0xc];
    acStack_2df[5] = s_awaitViewReady_001d62cd[0xd];
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_2e8);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_2e8), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029cdbc to 0029cdcf has its CatchHandler @ 002a02b8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_2e8);
                    /* try { // try from 0029cdd0 to 0029cde3 has its CatchHandler @ 0029ffcc */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029cde8 to 0029ce1f has its CatchHandler @ 0029ffa8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_2e8);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029df30 to 0029df43 has its CatchHandler @ 0029ffa4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_2e8);
                    /* try { // try from 0029df44 to 0029df57 has its CatchHandler @ 0029f738 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029df5c to 0029df93 has its CatchHandler @ 0029f70c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT17(uStack_2d9,CONCAT61(acStack_2df,cStack_2e0));
    local_120 = (undefined *)CONCAT17(cStack_2e1,CONCAT61(acStack_2e7,local_2e8));
    local_f8 = 0;
    local_110 = local_2d8;
    plStack_100 = _UNK_001d8018;
    local_108 = _DAT_001d8010;
                    /* try { // try from 0029b5a0 to 0029b5a7 has its CatchHandler @ 0029f294 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f588;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029b5d8 to 0029b5db has its CatchHandler @ 0029e99c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029b618:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029b628:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029b628;
      }
      if (local_80 != &local_a0) goto LAB_0029b618;
      local_d0 = &local_f0;
                    /* try { // try from 0029cc60 to 0029cc6b has its CatchHandler @ 0029e41c */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if (((byte)local_2e8 & 1) == 0) {
      plStack_b0 = (long *)CONCAT17(uStack_2d9,CONCAT61(acStack_2df,cStack_2e0));
      local_b8 = CONCAT17(cStack_2e1,CONCAT61(acStack_2e7,local_2e8));
      local_a8 = local_2d8;
    }
    else {
                    /* try { // try from 0029b658 to 0029b65f has its CatchHandler @ 0029e930 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_2d8,CONCAT17(uStack_2d9,CONCAT61(acStack_2df,cStack_2e0)));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029b684:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029b684;
    }
                    /* try { // try from 0029b690 to 0029b6a3 has its CatchHandler @ 0029f284 */
    FUN_002634d4(plVar14,&local_2e8,&local_2e8,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029b6d8:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029b6d8;
    }
    if (((byte)local_2e8 & 1) != 0) {
      operator_delete(local_2d8);
    }
    local_300 = (basic_string)0x2a;
    uStack_2ea = 0;
    acStack_2f7[0] = s_bindViewModelInstance_001d6032[8];
    acStack_2f7[1] = s_bindViewModelInstance_001d6032[9];
    acStack_2f7[2] = s_bindViewModelInstance_001d6032[10];
    acStack_2f7[3] = s_bindViewModelInstance_001d6032[0xb];
    acStack_2f7[4] = s_bindViewModelInstance_001d6032[0xc];
    uStack_2ff = (undefined7)s_bindViewModelInstance_001d6032._0_8_;
    cStack_2f8 = SUB81(s_bindViewModelInstance_001d6032._0_8_,7);
    uStack_2f2 = (undefined2)s_bindViewModelInstance_001d6032._13_3_;
    cStack_2f0 = SUB31(s_bindViewModelInstance_001d6032._13_3_,2);
    acStack_2ef[0] = s_bindViewModelInstance_001d6032[0x10];
    acStack_2ef[1] = s_bindViewModelInstance_001d6032[0x11];
    acStack_2ef[2] = s_bindViewModelInstance_001d6032[0x12];
    acStack_2ef[3] = s_bindViewModelInstance_001d6032[0x13];
    acStack_2ef[4] = s_bindViewModelInstance_001d6032[0x14];
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_300);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_300), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029ce30 to 0029ce43 has its CatchHandler @ 002a029c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_300);
                    /* try { // try from 0029ce44 to 0029ce57 has its CatchHandler @ 0029ff8c */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029ce5c to 0029ce93 has its CatchHandler @ 0029ff68 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_300);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029dfa0 to 0029dfb3 has its CatchHandler @ 0029ff64 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_300);
                    /* try { // try from 0029dfb4 to 0029dfc7 has its CatchHandler @ 0029f708 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029dfcc to 0029e003 has its CatchHandler @ 0029f6dc */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT26(uStack_2f2,CONCAT51(acStack_2f7,cStack_2f8));
    local_120 = (undefined *)CONCAT71(uStack_2ff,local_300);
    local_110 = (long *)CONCAT17(uStack_2e9,CONCAT16(uStack_2ea,CONCAT51(acStack_2ef,cStack_2f0)));
    local_f8 = 0;
    plStack_100 = _UNK_001d8148;
    local_108 = _DAT_001d8140;
                    /* try { // try from 0029b768 to 0029b76f has its CatchHandler @ 0029f26c */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f608;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029b7a0 to 0029b7a3 has its CatchHandler @ 0029e920 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029b7e0:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029b7f0:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029b7f0;
      }
      if (local_80 != &local_a0) goto LAB_0029b7e0;
      local_d0 = &local_f0;
                    /* try { // try from 0029cc80 to 0029cc8b has its CatchHandler @ 0029e418 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if (((byte)local_300 & 1) == 0) {
      plStack_b0 = (long *)CONCAT26(uStack_2f2,CONCAT51(acStack_2f7,cStack_2f8));
      local_b8 = CONCAT71(uStack_2ff,local_300);
      local_a8 = (long *)CONCAT17(uStack_2e9,CONCAT16(uStack_2ea,CONCAT51(acStack_2ef,cStack_2f0)));
    }
    else {
                    /* try { // try from 0029b824 to 0029b82b has its CatchHandler @ 0029e8b4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,
                 (char *)CONCAT17(uStack_2e9,CONCAT16(uStack_2ea,CONCAT51(acStack_2ef,cStack_2f0))),
                 CONCAT26(uStack_2f2,CONCAT51(acStack_2f7,cStack_2f8)));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029b850:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029b850;
    }
                    /* try { // try from 0029b85c to 0029b86f has its CatchHandler @ 0029f25c */
    FUN_002634d4(plVar14,&local_300,&local_300,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029b8a4:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029b8a4;
    }
    if (((byte)local_300 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_2e9,
                                       CONCAT16(uStack_2ea,CONCAT51(acStack_2ef,cStack_2f0))));
    }
    local_318 = (basic_string)0x28;
    uStack_307 = 0x65636e61;
    uStack_30f = (undefined7)s_getViewModelInstance_001d7a6a._8_8_;
    cStack_308 = SUB81(s_getViewModelInstance_001d7a6a._8_8_,7);
    uStack_317 = (undefined7)s_getViewModelInstance_001d7a6a._0_8_;
    cStack_310 = SUB81(s_getViewModelInstance_001d7a6a._0_8_,7);
    uStack_303 = 0;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_318);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_318), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029cea4 to 0029ceb7 has its CatchHandler @ 002a0280 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_318);
                    /* try { // try from 0029ceb8 to 0029cecb has its CatchHandler @ 0029ff4c */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029ced0 to 0029cf07 has its CatchHandler @ 0029ff28 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_318);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e010 to 0029e023 has its CatchHandler @ 0029ff24 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_318);
                    /* try { // try from 0029e024 to 0029e037 has its CatchHandler @ 0029f6d8 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e03c to 0029e073 has its CatchHandler @ 0029f6ac */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(uStack_30f,cStack_310);
    local_120 = (undefined *)CONCAT71(uStack_317,local_318);
    local_110 = (long *)CONCAT26(uStack_302,CONCAT15(uStack_303,CONCAT41(uStack_307,cStack_308)));
    local_f8 = 0;
    plStack_100 = _UNK_001d8118;
    local_108 = _DAT_001d8110;
                    /* try { // try from 0029b938 to 0029b93f has its CatchHandler @ 0029f244 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f688;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029b970 to 0029b973 has its CatchHandler @ 0029e8a4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029b9b0:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029b9c0:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029b9c0;
      }
      if (local_80 != &local_a0) goto LAB_0029b9b0;
      local_d0 = &local_f0;
                    /* try { // try from 0029cca0 to 0029ccab has its CatchHandler @ 0029e414 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 0;
    if (((byte)local_318 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_30f,cStack_310);
      local_b8 = CONCAT71(uStack_317,local_318);
      local_a8 = (long *)CONCAT26(uStack_302,CONCAT15(uStack_303,CONCAT41(uStack_307,cStack_308)));
    }
    else {
                    /* try { // try from 0029b9f0 to 0029b9f7 has its CatchHandler @ 0029e838 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,
                 (char *)CONCAT26(uStack_302,CONCAT15(uStack_303,CONCAT41(uStack_307,cStack_308))),
                 CONCAT71(uStack_30f,cStack_310));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029ba1c:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029ba1c;
    }
                    /* try { // try from 0029ba28 to 0029ba3b has its CatchHandler @ 0029f234 */
    FUN_002634d4(plVar14,&local_318,&local_318,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029ba70:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029ba70;
    }
    if (((byte)local_318 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_302,
                                       CONCAT15(uStack_303,CONCAT41(uStack_307,cStack_308))));
    }
    local_32b = 0;
    local_330 = 8;
    local_32f = 0x79616c70;
                    /* try { // try from 0029baa4 to 0029bab7 has its CatchHandler @ 0029f220 */
    FUN_002a0b7c(plVar15,&local_330,0xb8,1);
    if ((local_330 & 1) != 0) {
      operator_delete(local_320);
    }
    local_348 = 10;
    local_347 = 0x73756170;
    local_343 = 0x65;
                    /* try { // try from 0029bae4 to 0029baf7 has its CatchHandler @ 0029f20c */
    FUN_002a0b7c(plVar15,&local_348,0xc0,1);
    if ((local_348 & 1) != 0) {
      operator_delete(local_338);
    }
    local_360 = 10;
    local_35f = 0x65736572;
    local_35b = 0x74;
                    /* try { // try from 0029bb24 to 0029bb37 has its CatchHandler @ 0029f1f8 */
    FUN_002a0b7c(plVar15,&local_360,200,1);
    if ((local_360 & 1) != 0) {
      operator_delete(local_350);
    }
    local_378 = 0x18;
    local_36f = 0x64656465;
    local_377[0] = s_playIfNeeded_001d4f5c[0];
    local_377[1] = s_playIfNeeded_001d4f5c[1];
    local_377[2] = s_playIfNeeded_001d4f5c[2];
    local_377[3] = s_playIfNeeded_001d4f5c[3];
    local_377[4] = s_playIfNeeded_001d4f5c[4];
    local_377[5] = s_playIfNeeded_001d4f5c[5];
    local_377[6] = s_playIfNeeded_001d4f5c[6];
    local_377[7] = s_playIfNeeded_001d4f5c[7];
    local_36b = 0;
                    /* try { // try from 0029bb70 to 0029bb83 has its CatchHandler @ 0029f1e4 */
    FUN_002a0fc8(plVar15,&local_378,0xd0,1);
    if ((local_378 & 1) != 0) {
      operator_delete(local_368);
    }
    local_390 = (basic_string)0x1e;
    local_380 = 0;
    acStack_38f[0] = s_onEventListener_001d6565[0];
    acStack_38f[1] = s_onEventListener_001d6565[1];
    acStack_38f[2] = s_onEventListener_001d6565[2];
    acStack_38f[3] = s_onEventListener_001d6565[3];
    acStack_38f[4] = s_onEventListener_001d6565[4];
    acStack_38f[5] = s_onEventListener_001d6565[5];
    acStack_38f[6] = s_onEventListener_001d6565[6];
    cStack_388 = s_onEventListener_001d6565[7];
    acStack_387[0] = s_onEventListener_001d6565[8];
    acStack_387[1] = s_onEventListener_001d6565[9];
    acStack_387[2] = s_onEventListener_001d6565[10];
    acStack_387[3] = s_onEventListener_001d6565[0xb];
    acStack_387[4] = s_onEventListener_001d6565[0xc];
    acStack_387[5] = s_onEventListener_001d6565[0xd];
    acStack_387[6] = s_onEventListener_001d6565[0xe];
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_390);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_390), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029cf18 to 0029cf2b has its CatchHandler @ 002a0264 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_390);
                    /* try { // try from 0029cf2c to 0029cf3f has its CatchHandler @ 0029ff0c */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029cf44 to 0029cf7b has its CatchHandler @ 0029fee8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_390);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e080 to 0029e093 has its CatchHandler @ 0029fee4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_390);
                    /* try { // try from 0029e094 to 0029e0a7 has its CatchHandler @ 0029f6a8 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e0ac to 0029e0e3 has its CatchHandler @ 0029f67c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(acStack_387,cStack_388);
    local_120 = (undefined *)CONCAT71(acStack_38f,local_390);
    local_110 = (long *)CONCAT71(uStack_37f,local_380);
    local_f8 = 0;
    plStack_100 = _UNK_001d7ed8;
    local_108 = _DAT_001d7ed0;
                    /* try { // try from 0029bc0c to 0029bc13 has its CatchHandler @ 0029f1cc */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f808;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029bc44 to 0029bc47 has its CatchHandler @ 0029e828 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029bc84:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029bc94:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029bc94;
      }
      if (local_80 != &local_a0) goto LAB_0029bc84;
      local_d0 = &local_f0;
                    /* try { // try from 0029ccc0 to 0029cccb has its CatchHandler @ 0029e410 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 1;
    if (((byte)local_390 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(acStack_387,cStack_388);
      local_b8 = CONCAT71(acStack_38f,local_390);
      local_a8 = (long *)CONCAT71(uStack_37f,local_380);
    }
    else {
                    /* try { // try from 0029bcc8 to 0029bccf has its CatchHandler @ 0029e7bc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)CONCAT71(uStack_37f,local_380),CONCAT71(acStack_387,cStack_388));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029bcf4:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029bcf4;
    }
                    /* try { // try from 0029bd00 to 0029bd13 has its CatchHandler @ 0029f1bc */
    FUN_002634d4(plVar14,&local_390,&local_390,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029bd48:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029bd48;
    }
    if (((byte)local_390 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_37f,local_380));
    }
    local_3a8 = 0x28;
    uStack_397 = 0x7372656e;
    uStack_39f = (undefined7)s_removeEventListeners_001d781f._8_8_;
    cStack_398 = SUB81(s_removeEventListeners_001d781f._8_8_,7);
    local_3a7[0] = s_removeEventListeners_001d781f[0];
    local_3a7[1] = s_removeEventListeners_001d781f[1];
    local_3a7[2] = s_removeEventListeners_001d781f[2];
    local_3a7[3] = s_removeEventListeners_001d781f[3];
    local_3a7[4] = s_removeEventListeners_001d781f[4];
    local_3a7[5] = s_removeEventListeners_001d781f[5];
    local_3a7[6] = s_removeEventListeners_001d781f[6];
    local_3a7[7] = s_removeEventListeners_001d781f[7];
    uStack_393 = 0;
                    /* try { // try from 0029bd8c to 0029bd9f has its CatchHandler @ 0029f1a8 */
    FUN_002a0fc8(plVar15,&local_3a8,0xe0,1);
    if ((local_3a8 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_392,
                                       CONCAT15(uStack_393,CONCAT41(uStack_397,cStack_398))));
    }
    local_3c0 = (basic_string)0x26;
    uStack_3b7 = (undefined7)s_setNumberInputValue_001d67a8._8_8_;
    uStack_3b0 = CONCAT31(0x65756c,SUB81(s_setNumberInputValue_001d67a8._8_8_,7));
    uStack_3bf = (undefined7)s_setNumberInputValue_001d67a8._0_8_;
    cStack_3b8 = SUB81(s_setNumberInputValue_001d67a8._0_8_,7);
    uStack_3ac = uStack_3ac & 0xffffff00;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_3c0);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_3c0), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029cf8c to 0029cf9f has its CatchHandler @ 002a0248 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_3c0);
                    /* try { // try from 0029cfa0 to 0029cfb3 has its CatchHandler @ 0029fecc */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029cfb8 to 0029cfef has its CatchHandler @ 0029fea8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_3c0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e0f0 to 0029e103 has its CatchHandler @ 0029fea4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_3c0);
                    /* try { // try from 0029e104 to 0029e117 has its CatchHandler @ 0029f678 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e11c to 0029e153 has its CatchHandler @ 0029f64c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(uStack_3b7,cStack_3b8);
    local_120 = (undefined *)CONCAT71(uStack_3bf,local_3c0);
    local_110 = (long *)CONCAT44(uStack_3ac,uStack_3b0);
    local_f8 = 0;
    plStack_100 = _UNK_001d7f08;
    local_108 = _DAT_001d7f00;
                    /* try { // try from 0029be28 to 0029be2f has its CatchHandler @ 0029f190 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037f9d8;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029be60 to 0029be63 has its CatchHandler @ 0029e7ac */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029bea0:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029beb0:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029beb0;
      }
      if (local_80 != &local_a0) goto LAB_0029bea0;
      local_d0 = &local_f0;
                    /* try { // try from 0029cce0 to 0029cceb has its CatchHandler @ 0029e40c */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 3;
    if (((byte)local_3c0 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_3b7,cStack_3b8);
      local_b8 = CONCAT71(uStack_3bf,local_3c0);
      local_a8 = (long *)CONCAT44(uStack_3ac,uStack_3b0);
    }
    else {
                    /* try { // try from 0029bee4 to 0029beeb has its CatchHandler @ 0029e740 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)CONCAT44(uStack_3ac,uStack_3b0),CONCAT71(uStack_3b7,cStack_3b8));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029bf10:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029bf10;
    }
                    /* try { // try from 0029bf1c to 0029bf2f has its CatchHandler @ 0029f180 */
    FUN_002634d4(plVar14,&local_3c0,&local_3c0,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029bf64:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029bf64;
    }
    if (((byte)local_3c0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_3ac,uStack_3b0));
    }
    local_3d8 = (basic_string)0x26;
    uStack_3cf = (undefined7)s_getNumberInputValue_001d67bc._8_8_;
    uStack_3c8 = CONCAT31(0x65756c,SUB81(s_getNumberInputValue_001d67bc._8_8_,7));
    uStack_3d7 = (undefined7)s_getNumberInputValue_001d67bc._0_8_;
    cStack_3d0 = SUB81(s_getNumberInputValue_001d67bc._0_8_,7);
    uStack_3c4 = uStack_3c4 & 0xffffff00;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_3d8);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_3d8), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d000 to 0029d013 has its CatchHandler @ 002a022c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_3d8);
                    /* try { // try from 0029d014 to 0029d027 has its CatchHandler @ 0029fe8c */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029d02c to 0029d063 has its CatchHandler @ 0029fe68 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_3d8);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e160 to 0029e173 has its CatchHandler @ 0029fe64 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_3d8);
                    /* try { // try from 0029e174 to 0029e187 has its CatchHandler @ 0029f648 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e18c to 0029e1c3 has its CatchHandler @ 0029f61c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(uStack_3cf,cStack_3d0);
    local_120 = (undefined *)CONCAT71(uStack_3d7,local_3d8);
    local_110 = (long *)CONCAT44(uStack_3c4,uStack_3c8);
    local_f8 = 0;
    plStack_100 = _UNK_001d8168;
    local_108 = _DAT_001d8160;
                    /* try { // try from 0029bff8 to 0029bfff has its CatchHandler @ 0029f168 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037fa58;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029c030 to 0029c033 has its CatchHandler @ 0029e730 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029c070:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029c080:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029c080;
      }
      if (local_80 != &local_a0) goto LAB_0029c070;
      local_d0 = &local_f0;
                    /* try { // try from 0029cd00 to 0029cd0b has its CatchHandler @ 0029e408 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 2;
    if (((byte)local_3d8 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_3cf,cStack_3d0);
      local_b8 = CONCAT71(uStack_3d7,local_3d8);
      local_a8 = (long *)CONCAT44(uStack_3c4,uStack_3c8);
    }
    else {
                    /* try { // try from 0029c0b4 to 0029c0bb has its CatchHandler @ 0029e6c4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)CONCAT44(uStack_3c4,uStack_3c8),CONCAT71(uStack_3cf,cStack_3d0));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029c0e0:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029c0e0;
    }
                    /* try { // try from 0029c0ec to 0029c0ff has its CatchHandler @ 0029f158 */
    FUN_002634d4(plVar14,&local_3d8,&local_3d8,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029c134:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029c134;
    }
    if (((byte)local_3d8 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_3c4,uStack_3c8));
    }
    local_3f0 = (basic_string)0x28;
    uStack_3df = 0x65756c61;
    uStack_3e7 = (undefined7)s_setBooleanInputValue_001d62dc._8_8_;
    cStack_3e0 = SUB81(s_setBooleanInputValue_001d62dc._8_8_,7);
    uStack_3ef = (undefined7)s_setBooleanInputValue_001d62dc._0_8_;
    cStack_3e8 = SUB81(s_setBooleanInputValue_001d62dc._0_8_,7);
    uStack_3db = 0;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_3f0);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_3f0), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d074 to 0029d087 has its CatchHandler @ 002a0210 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_3f0);
                    /* try { // try from 0029d088 to 0029d09b has its CatchHandler @ 0029fe4c */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029d0a0 to 0029d0d7 has its CatchHandler @ 0029fe28 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_3f0);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e1d0 to 0029e1e3 has its CatchHandler @ 0029fe24 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_3f0);
                    /* try { // try from 0029e1e4 to 0029e1f7 has its CatchHandler @ 0029f618 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e1fc to 0029e233 has its CatchHandler @ 0029f5ec */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(uStack_3e7,cStack_3e8);
    local_120 = (undefined *)CONCAT71(uStack_3ef,local_3f0);
    local_110 = (long *)CONCAT26(uStack_3da,CONCAT15(uStack_3db,CONCAT41(uStack_3df,cStack_3e0)));
    local_f8 = 0;
    plStack_100 = _UNK_001d7e78;
    local_108 = _DAT_001d7e70;
                    /* try { // try from 0029c1c8 to 0029c1cf has its CatchHandler @ 0029f140 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037fad8;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029c200 to 0029c203 has its CatchHandler @ 0029e6b4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029c240:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029c250:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029c250;
      }
      if (local_80 != &local_a0) goto LAB_0029c240;
      local_d0 = &local_f0;
                    /* try { // try from 0029cd20 to 0029cd2b has its CatchHandler @ 0029e404 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 3;
    if (((byte)local_3f0 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_3e7,cStack_3e8);
      local_b8 = CONCAT71(uStack_3ef,local_3f0);
      local_a8 = (long *)CONCAT26(uStack_3da,CONCAT15(uStack_3db,CONCAT41(uStack_3df,cStack_3e0)));
    }
    else {
                    /* try { // try from 0029c284 to 0029c28b has its CatchHandler @ 0029e648 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,
                 (char *)CONCAT26(uStack_3da,CONCAT15(uStack_3db,CONCAT41(uStack_3df,cStack_3e0))),
                 CONCAT71(uStack_3e7,cStack_3e8));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029c2b0:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029c2b0;
    }
                    /* try { // try from 0029c2bc to 0029c2cf has its CatchHandler @ 0029f130 */
    FUN_002634d4(plVar14,&local_3f0,&local_3f0,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029c304:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029c304;
    }
    if (((byte)local_3f0 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_3da,
                                       CONCAT15(uStack_3db,CONCAT41(uStack_3df,cStack_3e0))));
    }
    local_408 = (basic_string)0x28;
    uStack_3f7 = 0x65756c61;
    uStack_3ff = (undefined7)s_getBooleanInputValue_001d7117._8_8_;
    cStack_3f8 = SUB81(s_getBooleanInputValue_001d7117._8_8_,7);
    uStack_407 = (undefined7)s_getBooleanInputValue_001d7117._0_8_;
    cStack_400 = SUB81(s_getBooleanInputValue_001d7117._0_8_,7);
    uStack_3f3 = 0;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_408);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_408), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d0e8 to 0029d0fb has its CatchHandler @ 002a01f4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_408);
                    /* try { // try from 0029d0fc to 0029d10f has its CatchHandler @ 0029fe0c */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029d114 to 0029d14b has its CatchHandler @ 0029fde8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_408);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e240 to 0029e253 has its CatchHandler @ 0029fde4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_408);
                    /* try { // try from 0029e254 to 0029e267 has its CatchHandler @ 0029f5e8 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e26c to 0029e2a3 has its CatchHandler @ 0029f5bc */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(uStack_3ff,cStack_400);
    local_120 = (undefined *)CONCAT71(uStack_407,local_408);
    local_110 = (long *)CONCAT26(uStack_3f2,CONCAT15(uStack_3f3,CONCAT41(uStack_3f7,cStack_3f8)));
    local_f8 = 0;
    plStack_100 = _UNK_001d81e8;
    local_108 = _DAT_001d81e0;
                    /* try { // try from 0029c398 to 0029c39f has its CatchHandler @ 0029f118 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037fb58;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029c3d0 to 0029c3d3 has its CatchHandler @ 0029e638 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029c410:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029c420:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029c420;
      }
      if (local_80 != &local_a0) goto LAB_0029c410;
      local_d0 = &local_f0;
                    /* try { // try from 0029cd40 to 0029cd4b has its CatchHandler @ 0029e400 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 2;
    if (((byte)local_408 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(uStack_3ff,cStack_400);
      local_b8 = CONCAT71(uStack_407,local_408);
      local_a8 = (long *)CONCAT26(uStack_3f2,CONCAT15(uStack_3f3,CONCAT41(uStack_3f7,cStack_3f8)));
    }
    else {
                    /* try { // try from 0029c454 to 0029c45b has its CatchHandler @ 0029e5cc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,
                 (char *)CONCAT26(uStack_3f2,CONCAT15(uStack_3f3,CONCAT41(uStack_3f7,cStack_3f8))),
                 CONCAT71(uStack_3ff,cStack_400));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029c480:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029c480;
    }
                    /* try { // try from 0029c48c to 0029c49f has its CatchHandler @ 0029f108 */
    FUN_002634d4(plVar14,&local_408,&local_408,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029c4d4:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029c4d4;
    }
    if (((byte)local_408 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_3f2,
                                       CONCAT15(uStack_3f3,CONCAT41(uStack_3f7,cStack_3f8))));
    }
    local_420 = (basic_string)0x18;
    uStack_417 = 0x7475706e;
    uStack_41f = (undefined7)s_triggerInput_001d6199._0_8_;
    cStack_418 = SUB81(s_triggerInput_001d6199._0_8_,7);
    uStack_413 = 0;
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_420);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_420), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d15c to 0029d16f has its CatchHandler @ 002a01d8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_420);
                    /* try { // try from 0029d170 to 0029d183 has its CatchHandler @ 0029fdcc */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029d188 to 0029d1bf has its CatchHandler @ 0029fda8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_420);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e2b0 to 0029e2c3 has its CatchHandler @ 0029fda4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_420);
                    /* try { // try from 0029e2c4 to 0029e2d7 has its CatchHandler @ 0029f5b8 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e2dc to 0029e313 has its CatchHandler @ 0029f58c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT26(uStack_412,CONCAT15(uStack_413,CONCAT41(uStack_417,cStack_418)));
    local_120 = (undefined *)CONCAT71(uStack_41f,local_420);
    local_f8 = 0;
    local_110 = local_410;
    plStack_100 = _UNK_001d81f8;
    local_108 = _DAT_001d81f0;
                    /* try { // try from 0029c568 to 0029c56f has its CatchHandler @ 0029f0f0 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037fbd8;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029c5a0 to 0029c5a3 has its CatchHandler @ 0029e5bc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029c5e0:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029c5f0:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029c5f0;
      }
      if (local_80 != &local_a0) goto LAB_0029c5e0;
      local_d0 = &local_f0;
                    /* try { // try from 0029cd60 to 0029cd6b has its CatchHandler @ 0029e3fc */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 2;
    if (((byte)local_420 & 1) == 0) {
      plStack_b0 = (long *)CONCAT26(uStack_412,CONCAT15(uStack_413,CONCAT41(uStack_417,cStack_418)))
      ;
      local_b8 = CONCAT71(uStack_41f,local_420);
      local_a8 = local_410;
    }
    else {
                    /* try { // try from 0029c624 to 0029c62b has its CatchHandler @ 0029e550 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)local_410,
                 CONCAT26(uStack_412,CONCAT15(uStack_413,CONCAT41(uStack_417,cStack_418))));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029c650:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029c650;
    }
                    /* try { // try from 0029c65c to 0029c66f has its CatchHandler @ 0029f0e0 */
    FUN_002634d4(plVar14,&local_420,&local_420,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029c6a4:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029c6a4;
    }
    if (((byte)local_420 & 1) != 0) {
      operator_delete(local_410);
    }
    local_438 = (basic_string)0x1e;
    local_428 = 0;
    acStack_437[0] = s_setTextRunValue_001d5674[0];
    acStack_437[1] = s_setTextRunValue_001d5674[1];
    acStack_437[2] = s_setTextRunValue_001d5674[2];
    acStack_437[3] = s_setTextRunValue_001d5674[3];
    acStack_437[4] = s_setTextRunValue_001d5674[4];
    acStack_437[5] = s_setTextRunValue_001d5674[5];
    acStack_437[6] = s_setTextRunValue_001d5674[6];
    cStack_430 = s_setTextRunValue_001d5674[7];
    acStack_42f[0] = s_setTextRunValue_001d5674[8];
    acStack_42f[1] = s_setTextRunValue_001d5674[9];
    acStack_42f[2] = s_setTextRunValue_001d5674[10];
    acStack_42f[3] = s_setTextRunValue_001d5674[0xb];
    acStack_42f[4] = s_setTextRunValue_001d5674[0xc];
    acStack_42f[5] = s_setTextRunValue_001d5674[0xd];
    acStack_42f[6] = s_setTextRunValue_001d5674[0xe];
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_438);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_438), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d1d0 to 0029d1e3 has its CatchHandler @ 002a01c0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_438);
                    /* try { // try from 0029d1e4 to 0029d1f7 has its CatchHandler @ 0029fd8c */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029d1fc to 0029d233 has its CatchHandler @ 0029fd68 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_438);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e320 to 0029e333 has its CatchHandler @ 0029fd64 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_438);
                    /* try { // try from 0029e334 to 0029e347 has its CatchHandler @ 0029f588 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e34c to 0029e383 has its CatchHandler @ 0029f55c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(acStack_42f,cStack_430);
    local_120 = (undefined *)CONCAT71(acStack_437,local_438);
    local_110 = (long *)CONCAT71(uStack_427,local_428);
    local_f8 = 0;
    plStack_100 = _UNK_001d8238;
    local_108 = _DAT_001d8230;
                    /* try { // try from 0029c738 to 0029c73f has its CatchHandler @ 0029f0c8 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037fc58;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029c770 to 0029c773 has its CatchHandler @ 0029e540 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029c7b0:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029c7c0:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029c7c0;
      }
      if (local_80 != &local_a0) goto LAB_0029c7b0;
      local_d0 = &local_f0;
                    /* try { // try from 0029cd80 to 0029cd8b has its CatchHandler @ 0029e3f8 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 3;
    if (((byte)local_438 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(acStack_42f,cStack_430);
      local_b8 = CONCAT71(acStack_437,local_438);
      local_a8 = (long *)CONCAT71(uStack_427,local_428);
    }
    else {
                    /* try { // try from 0029c7f4 to 0029c7fb has its CatchHandler @ 0029e4d4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)CONCAT71(uStack_427,local_428),CONCAT71(acStack_42f,cStack_430));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029c820:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029c820;
    }
                    /* try { // try from 0029c82c to 0029c83f has its CatchHandler @ 0029f0b8 */
    FUN_002634d4(plVar14,&local_438,&local_438,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029c874:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029c874;
    }
    if (((byte)local_438 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_427,local_428));
    }
    local_450 = (basic_string)0x1e;
    local_440 = 0;
    acStack_44f[0] = s_getTextRunValue_001d712c[0];
    acStack_44f[1] = s_getTextRunValue_001d712c[1];
    acStack_44f[2] = s_getTextRunValue_001d712c[2];
    acStack_44f[3] = s_getTextRunValue_001d712c[3];
    acStack_44f[4] = s_getTextRunValue_001d712c[4];
    acStack_44f[5] = s_getTextRunValue_001d712c[5];
    acStack_44f[6] = s_getTextRunValue_001d712c[6];
    cStack_448 = s_getTextRunValue_001d712c[7];
    acStack_447[0] = s_getTextRunValue_001d712c[8];
    acStack_447[1] = s_getTextRunValue_001d712c[9];
    acStack_447[2] = s_getTextRunValue_001d712c[10];
    acStack_447[3] = s_getTextRunValue_001d712c[0xb];
    acStack_447[4] = s_getTextRunValue_001d712c[0xc];
    acStack_447[5] = s_getTextRunValue_001d712c[0xd];
    acStack_447[6] = s_getTextRunValue_001d712c[0xe];
    lVar11 = FUN_002632b8(plVar15[8],plVar15[9],&local_450);
    if ((lVar11 != 0) || (lVar11 = FUN_002632b8(plVar15[0xd],plVar15[0xe],&local_450), lVar11 != 0))
    {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029d244 to 0029d257 has its CatchHandler @ 002a01a4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_450);
                    /* try { // try from 0029d258 to 0029d26b has its CatchHandler @ 0029fd4c */
      FUN_00263450(&local_f0,&local_a0,"\" - a property with that name already exists!");
                    /* try { // try from 0029d270 to 0029d2a7 has its CatchHandler @ 0029fd28 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    lVar11 = FUN_002632b8(plVar15[3],plVar15[4],&local_450);
    if (lVar11 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0029e390 to 0029e3a3 has its CatchHandler @ 0029fd24 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_450);
                    /* try { // try from 0029e3a4 to 0029e3b7 has its CatchHandler @ 0029f558 */
      FUN_00263450(&local_f0,&local_a0,"\" - a method with that name already exists!");
                    /* try { // try from 0029e3bc to 0029e3f3 has its CatchHandler @ 0029f52c */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_f0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002a02f4;
    }
    plStack_118 = (long *)CONCAT71(acStack_447,cStack_448);
    local_120 = (undefined *)CONCAT71(acStack_44f,local_450);
    local_110 = (long *)CONCAT71(uStack_43f,local_440);
    local_f8 = 0;
    plStack_100 = _UNK_001d8248;
    local_108 = _DAT_001d8240;
                    /* try { // try from 0029c908 to 0029c90f has its CatchHandler @ 0029f0a0 */
    pplVar9 = (long **)operator_new(0x38);
    *pplVar9 = (long *)&PTR_FUN_0037fcd8;
    if (((ulong)local_120 & 1) == 0) {
      pplVar9[2] = plStack_118;
      *(undefined **)(pplVar9 + 1) = local_120;
      pplVar9[3] = local_110;
    }
    else {
                    /* try { // try from 0029c940 to 0029c943 has its CatchHandler @ 0029e4c4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar9 + 1),(char *)local_110,(ulong)plStack_118);
    }
    local_80 = pplVar9;
    pplVar9[5] = plStack_100;
    pplVar9[4] = local_108;
    *(undefined4 *)(pplVar9 + 6) = local_f8;
    if (((byte)local_120 & 1) == 0) {
LAB_0029c980:
      lVar11 = -0x40;
      local_d0 = local_80;
LAB_0029c990:
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar11) = 0;
    }
    else {
      operator_delete(local_110);
      if (local_80 == (long **)0x0) {
        lVar11 = -0x90;
        goto LAB_0029c990;
      }
      if (local_80 != &local_a0) goto LAB_0029c980;
      local_d0 = &local_f0;
                    /* try { // try from 0029cda0 to 0029cdab has its CatchHandler @ 0029e3f4 */
      (*(code *)local_a0[3])(&local_a0,&local_f0);
    }
    local_c0 = 2;
    if (((byte)local_450 & 1) == 0) {
      plStack_b0 = (long *)CONCAT71(acStack_447,cStack_448);
      local_b8 = CONCAT71(acStack_44f,local_450);
      local_a8 = (long *)CONCAT71(uStack_43f,local_440);
    }
    else {
                    /* try { // try from 0029c9c4 to 0029c9cb has its CatchHandler @ 0029e458 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,(char *)CONCAT71(uStack_43f,local_440),CONCAT71(acStack_447,cStack_448));
    }
    if (local_80 == &local_a0) {
      lVar11 = 4;
      pplVar9 = &local_a0;
LAB_0029c9f0:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_80 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_80;
      goto LAB_0029c9f0;
    }
                    /* try { // try from 0029c9fc to 0029ca0f has its CatchHandler @ 0029f090 */
    FUN_002634d4(plVar14,&local_450,&local_450,&local_f0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_d0 == &local_f0) {
      lVar11 = 4;
      pplVar9 = &local_f0;
LAB_0029ca44:
      (*(code *)(*pplVar9)[lVar11])();
    }
    else if (local_d0 != (long **)0x0) {
      lVar11 = 5;
      pplVar9 = local_d0;
      goto LAB_0029ca44;
    }
    if (((byte)local_450 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_43f,local_440));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_002a02f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a02f8  FUN_002a02f8 =====

void FUN_002a02f8(long param_1,basic_string *param_2,long param_3,long param_4)

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
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002a0520 to 002a0533 has its CatchHandler @ 002a0710 */
    std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",param_2);
                    /* try { // try from 002a0534 to 002a0547 has its CatchHandler @ 002a06f4 */
    FUN_00263450(local_d0,local_80,"\" - a getter with that name already exists!");
                    /* try { // try from 002a054c to 002a0583 has its CatchHandler @ 002a06d0 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002a0734;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002a0594 to 002a05a7 has its CatchHandler @ 002a070c */
    std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",param_2);
                    /* try { // try from 002a05a8 to 002a05bb has its CatchHandler @ 002a06cc */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 002a05c0 to 002a05f7 has its CatchHandler @ 002a06a0 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002a0734;
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
  local_d8 = 1;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 002a0388 to 002a038f has its CatchHandler @ 002a0688 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037ecf0;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 002a03c0 to 002a03c3 has its CatchHandler @ 002a0668 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_002a0400:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002a0410:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002a0410;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_002a0400;
    local_b0 = local_d0;
                    /* try { // try from 002a0504 to 002a050f has its CatchHandler @ 002a05f8 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002a0440 to 002a0447 has its CatchHandler @ 002a05fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_002a046c:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_002a046c;
  }
                    /* try { // try from 002a0478 to 002a048b has its CatchHandler @ 002a0678 */
  FUN_002634d4((undefined8 *)(param_1 + 0x40),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_002a04c0:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_002a04c0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002a0734:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a0738  FUN_002a0738 =====

void FUN_002a0738(long param_1,basic_string *param_2,long param_3,long param_4)

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
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002a0964 to 002a0977 has its CatchHandler @ 002a0b54 */
    std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",param_2);
                    /* try { // try from 002a0978 to 002a098b has its CatchHandler @ 002a0b38 */
    FUN_00263450(local_d0,local_80,"\" - a setter with that name already exists!");
                    /* try { // try from 002a0990 to 002a09c7 has its CatchHandler @ 002a0b14 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002a0b78;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002a09d8 to 002a09eb has its CatchHandler @ 002a0b50 */
    std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",param_2);
                    /* try { // try from 002a09ec to 002a09ff has its CatchHandler @ 002a0b10 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 002a0a04 to 002a0a3b has its CatchHandler @ 002a0ae4 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002a0b78;
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
  local_d8 = 2;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 002a07c8 to 002a07cf has its CatchHandler @ 002a0acc */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037ed70;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 002a0800 to 002a0803 has its CatchHandler @ 002a0aac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_002a0840:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002a0850:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002a0850;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_002a0840;
    local_b0 = local_d0;
                    /* try { // try from 002a0948 to 002a0953 has its CatchHandler @ 002a0a3c */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 1;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002a0884 to 002a088b has its CatchHandler @ 002a0a40 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_002a08b0:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_002a08b0;
  }
                    /* try { // try from 002a08bc to 002a08cf has its CatchHandler @ 002a0abc */
  FUN_002634d4((undefined8 *)(param_1 + 0x68),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_002a0904:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_002a0904;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002a0b78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a0b7c  FUN_002a0b7c =====

void FUN_002a0b7c(long param_1,basic_string *param_2,long param_3,long param_4)

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
                    /* try { // try from 002a0db0 to 002a0dc3 has its CatchHandler @ 002a0fa0 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002a0dc4 to 002a0dd7 has its CatchHandler @ 002a0f88 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 002a0ddc to 002a0e13 has its CatchHandler @ 002a0f64 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002a0fc4;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002a0e24 to 002a0e37 has its CatchHandler @ 002a0f60 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002a0e38 to 002a0e4b has its CatchHandler @ 002a0f5c */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 002a0e50 to 002a0e87 has its CatchHandler @ 002a0f30 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002a0fc4;
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
                    /* try { // try from 002a0c18 to 002a0c1f has its CatchHandler @ 002a0f18 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037f708;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 002a0c50 to 002a0c53 has its CatchHandler @ 002a0ef8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_002a0c90:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002a0ca0:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002a0ca0;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_002a0c90;
    local_b0 = local_d0;
                    /* try { // try from 002a0d94 to 002a0d9f has its CatchHandler @ 002a0e88 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002a0cd0 to 002a0cd7 has its CatchHandler @ 002a0e8c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_002a0cfc:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_002a0cfc;
  }
                    /* try { // try from 002a0d08 to 002a0d1b has its CatchHandler @ 002a0f08 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_002a0d50:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_002a0d50;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002a0fc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a0fc8  FUN_002a0fc8 =====

void FUN_002a0fc8(long param_1,basic_string *param_2,long param_3,long param_4)

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
                    /* try { // try from 002a11fc to 002a120f has its CatchHandler @ 002a13ec */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002a1210 to 002a1223 has its CatchHandler @ 002a13d4 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 002a1228 to 002a125f has its CatchHandler @ 002a13b0 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002a1410;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002a1270 to 002a1283 has its CatchHandler @ 002a13ac */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002a1284 to 002a1297 has its CatchHandler @ 002a13a8 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 002a129c to 002a12d3 has its CatchHandler @ 002a137c */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002a1410;
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
                    /* try { // try from 002a1064 to 002a106b has its CatchHandler @ 002a1364 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037f788;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 002a109c to 002a109f has its CatchHandler @ 002a1344 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_002a10dc:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002a10ec:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002a10ec;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_002a10dc;
    local_b0 = local_d0;
                    /* try { // try from 002a11e0 to 002a11eb has its CatchHandler @ 002a12d4 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002a111c to 002a1123 has its CatchHandler @ 002a12d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_002a1148:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_002a1148;
  }
                    /* try { // try from 002a1154 to 002a1167 has its CatchHandler @ 002a1354 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_002a119c:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_002a119c;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002a1410:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a1414  FUN_002a1414 =====

void FUN_002a1414(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fcd8;
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


// ===== 002a1480  FUN_002a1480 =====

void FUN_002a1480(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fcd8;
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


// ===== 002a14e8  FUN_002a14e8 =====

undefined8 * FUN_002a14e8(long param_1)

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
  *puVar4 = &PTR_FUN_0037fcd8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a1548 to 002a154b has its CatchHandler @ 002a1584 */
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


// ===== 002a15ac  FUN_002a15ac =====

void FUN_002a15ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037fcd8;
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


// ===== 002a1644  FUN_002a1644 =====

void FUN_002a1644(long param_1)

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


// ===== 002a16a4  FUN_002a16a4 =====

void FUN_002a16a4(void *param_1)

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


// ===== 002a1700  FUN_002a1700 =====

void FUN_002a1700(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  JSError *pJVar10;
  ulong uVar11;
  long *plVar12;
  code *pcVar13;
  IRuntime *pIVar14;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 *local_168 [3];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [8];
  ulong local_b8;
  void *local_b0;
  undefined8 *local_a8;
  long *plStack_a0;
  void *local_98;
  undefined8 *local_90;
  long *plStack_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar14 = (IRuntime *)*param_5;
  uVar11 = *param_6;
  local_a8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002a1760 to 002a176f has its CatchHandler @ 002a1fac */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,&local_a8);
  plVar1 = plStack_88;
  if ((local_90 == (undefined8 *)0x0) ||
     (lVar8 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar8 == 0)) {
    lVar8 = 0;
    plVar12 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002a17e8;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar12 = (long *)0x0;
      goto joined_r0x002a17e8;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar12 = plVar1;
  }
  lVar9 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar9 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002a17e8:
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  puVar6 = PTR_defaultValue_00395308;
  if (uVar11 - 1 < 2) {
    pcVar13 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395310 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_defaultValue_00395310), iVar7 != 0)) {
      *(undefined4 *)puVar6 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar6,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395310);
    }
    plVar1 = (long *)(lVar8 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *plVar1);
    }
    pIVar2 = (IRuntime *)puVar6;
    if (uVar11 != 0) {
      pIVar2 = pIVar14;
    }
                    /* try { // try from 002a183c to 002a1847 has its CatchHandler @ 002a1cc8 */
    facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002a1850 to 002a185f has its CatchHandler @ 002a1ca4 */
    (**(code **)(*param_3 + 0x120))(local_d8,param_3,&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      (**(code **)*local_a8)();
    }
    pIVar14 = pIVar14 + 0x10;
    if (uVar11 < 2) {
      pIVar14 = (IRuntime *)puVar6;
    }
    if (*(int *)pIVar14 == 0) {
      local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
      local_78 = '\0';
    }
    else {
                    /* try { // try from 002a1888 to 002a1897 has its CatchHandler @ 002a1c48 */
      facebook::jsi::Value::asString(pIVar14);
                    /* try { // try from 002a18a0 to 002a18af has its CatchHandler @ 002a1c24 */
      (**(code **)(*param_3 + 0x120))(&local_a8,param_3,local_168);
      if (local_168[0] != (undefined8 *)0x0) {
        (**(code **)*local_168[0])();
      }
      local_78 = '\x01';
      plStack_88 = plStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
    }
                    /* try { // try from 002a18ec to 002a18ff has its CatchHandler @ 002a1c70 */
    (*pcVar13)(local_c0,plVar1,local_d8,&local_90);
    if ((local_78 != '\0') && (((ulong)local_90 & 1) != 0)) {
      operator_delete(local_80);
    }
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    uVar11 = (ulong)(local_c0[0] >> 1);
    pvVar5 = (void *)((ulong)local_c0 | 1);
    if ((local_c0[0] & 1) != 0) {
      uVar11 = local_b8;
      pvVar5 = local_b0;
    }
                    /* try { // try from 002a1950 to 002a195b has its CatchHandler @ 002a1c54 */
    (**(code **)(*param_3 + 0x110))(&local_a8,param_3,pvVar5,uVar11);
    *param_1 = 6;
    *(undefined8 **)(param_1 + 2) = local_a8;
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar8 = FUN_00255510(0xffffffffffffffff,plVar12 + 1), lVar8 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002a19ec to 002a19fb has its CatchHandler @ 002a210c */
    FUN_002a21c4(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar8);
    pJVar10 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002a1a08 to 002a1a1b has its CatchHandler @ 002a20ec */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 002a1a1c to 002a1a2f has its CatchHandler @ 002a20d4 */
    FUN_00263450(auStack_138,auStack_150,"` expected between ");
                    /* try { // try from 002a1a30 to 002a1a3b has its CatchHandler @ 002a20a4 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002a1a3c to 002a1a4b has its CatchHandler @ 002a2080 */
    FUN_00264adc(auStack_120,auStack_138,local_168);
                    /* try { // try from 002a1a4c to 002a1a5f has its CatchHandler @ 002a205c */
    FUN_00263450(auStack_108,auStack_120," and ");
                    /* try { // try from 002a1a60 to 002a1a6b has its CatchHandler @ 002a2038 */
    std::__ndk1::to_string(2);
                    /* try { // try from 002a1a6c to 002a1a7b has its CatchHandler @ 002a2010 */
    FUN_00264adc(auStack_f0,auStack_108,auStack_180);
                    /* try { // try from 002a1a7c to 002a1a8f has its CatchHandler @ 002a1fcc */
    FUN_00263450(local_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 002a1a90 to 002a1a9b has its CatchHandler @ 002a1c00 */
    std::__ndk1::to_string(uVar11);
                    /* try { // try from 002a1a9c to 002a1aab has its CatchHandler @ 002a1bdc */
    FUN_00264adc(local_c0,local_d8,auStack_198);
                    /* try { // try from 002a1aac to 002a1abf has its CatchHandler @ 002a1bb8 */
    FUN_00263450(&local_a8,local_c0,&DAT_001d5be0);
                    /* try { // try from 002a1ac4 to 002a1aff has its CatchHandler @ 002a1b40 */
    facebook::jsi::JSError::JSError(pJVar10,param_3,&local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar10,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a2134  FUN_002a2134 =====

void FUN_002a2134(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395318) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a2184  FUN_002a2184 =====

undefined * FUN_002a2184(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395320;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a21c4  FUN_002a21c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a21c4(undefined8 *param_1,int param_2,byte *param_3,long param_4)

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
    puVar7 = PTR_typeinfo_name_00394eb8;
    uStack_68 = _UNK_001d7f98;
    local_70 = _DAT_001d7f90;
    *(undefined1 *)((long)local_60 + 0x29) = 0;
    uVar13 = *(undefined8 *)puVar7;
    uVar15 = *(undefined8 *)(puVar7 + 0x18);
    uVar14 = *(undefined8 *)(puVar7 + 0x10);
    uVar12 = *(undefined8 *)(puVar7 + 0x21);
    uVar10 = *(undefined8 *)(puVar7 + 0x19);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar13;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    *(undefined8 *)((long)local_60 + 0x21) = uVar12;
    *(undefined8 *)((long)local_60 + 0x19) = uVar10;
                    /* try { // try from 002a2248 to 002a2257 has its CatchHandler @ 002a24e8 */
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
    if (0xffffffffffffffef < uVar1) goto LAB_002a24a8;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002a23ac;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002a2394 to 002a239b has its CatchHandler @ 002a24fc */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002a23ac:
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
                    /* try { // try from 002a23ec to 002a23f3 has its CatchHandler @ 002a24d4 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 002a240c to 002a241f has its CatchHandler @ 002a24bc */
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002a2544;
                    /* try { // try from 002a24a4 to 002a24a7 has its CatchHandler @ 002a2518 */
      FUN_00260a84();
LAB_002a24a8:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002a24b8 to 002a24bb has its CatchHandler @ 002a24fc */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002a240c with catch @ 002a24bc */
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
      goto LAB_002a2544;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002a231c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002a2304 to 002a230b has its CatchHandler @ 002a2518 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_002a231c:
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
                    /* try { // try from 002a235c to 002a2363 has its CatchHandler @ 002a2500 */
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
LAB_002a2544:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a2548  FUN_002a2548 =====

void FUN_002a2548(long *param_1)

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


// ===== 002a25d4  FUN_002a25d4 =====

void FUN_002a25d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fc58;
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


// ===== 002a2640  FUN_002a2640 =====

void FUN_002a2640(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fc58;
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


// ===== 002a26a8  FUN_002a26a8 =====

undefined8 * FUN_002a26a8(long param_1)

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
  *puVar4 = &PTR_FUN_0037fc58;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a2708 to 002a270b has its CatchHandler @ 002a2744 */
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


// ===== 002a276c  FUN_002a276c =====

void FUN_002a276c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037fc58;
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


// ===== 002a2804  FUN_002a2804 =====

void FUN_002a2804(long param_1)

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


// ===== 002a2864  FUN_002a2864 =====

void FUN_002a2864(void *param_1)

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


// ===== 002a28c0  FUN_002a28c0 =====

void FUN_002a28c0(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  JSError *pJVar9;
  ulong uVar10;
  long *plVar11;
  code *pcVar12;
  IRuntime *pIVar13;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 *local_150 [3];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  undefined8 *local_a8;
  long *plStack_a0;
  void *local_98;
  undefined8 *local_90;
  long *plStack_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar13 = (IRuntime *)*param_5;
  uVar10 = *param_6;
  local_a8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002a2920 to 002a292f has its CatchHandler @ 002a31a8 */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,&local_a8);
  plVar1 = plStack_88;
  if ((local_90 == (undefined8 *)0x0) ||
     (lVar7 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar7 == 0)) {
    lVar7 = 0;
    plVar11 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_002a297c;
  }
  else if (plVar1 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar1 + 1);
    plVar11 = plVar1;
LAB_002a297c:
    lVar8 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  puVar5 = PTR_defaultValue_003952e8;
  if ((uVar10 & 0xfffffffffffffffe) != 2) {
                    /* try { // try from 002a2bc4 to 002a2bd3 has its CatchHandler @ 002a3308 */
    FUN_002a21c4(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar7);
    pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002a2be0 to 002a2bf3 has its CatchHandler @ 002a32e8 */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 002a2bf4 to 002a2c07 has its CatchHandler @ 002a32d0 */
    FUN_00263450(auStack_138,local_150,"` expected between ");
                    /* try { // try from 002a2c08 to 002a2c13 has its CatchHandler @ 002a32a0 */
    std::__ndk1::to_string(2);
                    /* try { // try from 002a2c14 to 002a2c23 has its CatchHandler @ 002a327c */
    FUN_00264adc(auStack_120,auStack_138,auStack_168);
                    /* try { // try from 002a2c24 to 002a2c37 has its CatchHandler @ 002a3258 */
    FUN_00263450(auStack_108,auStack_120," and ");
                    /* try { // try from 002a2c38 to 002a2c43 has its CatchHandler @ 002a3234 */
    std::__ndk1::to_string(3);
                    /* try { // try from 002a2c44 to 002a2c53 has its CatchHandler @ 002a320c */
    FUN_00264adc(auStack_f0,auStack_108,auStack_180);
                    /* try { // try from 002a2c54 to 002a2c67 has its CatchHandler @ 002a31c8 */
    FUN_00263450(local_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 002a2c68 to 002a2c73 has its CatchHandler @ 002a2dd8 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002a2c74 to 002a2c83 has its CatchHandler @ 002a2db4 */
    FUN_00264adc(local_c0,local_d8,auStack_198);
                    /* try { // try from 002a2c84 to 002a2c97 has its CatchHandler @ 002a2d90 */
    FUN_00263450(&local_a8,local_c0,&DAT_001d5be0);
                    /* try { // try from 002a2c9c to 002a2cd7 has its CatchHandler @ 002a2d18 */
    facebook::jsi::JSError::JSError(pJVar9,param_3,&local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002a332c;
  }
  pcVar12 = *(code **)(param_2 + 0x20);
  uVar3 = *(ulong *)(param_2 + 0x28);
  if (((*PTR_defaultValue_003952f0 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_defaultValue_003952f0), iVar6 != 0)) {
    *(undefined4 *)puVar5 = 0;
    __cxa_atexit(PTR__Value_00394848,puVar5,&PTR_LOOP_0037bc90);
    __cxa_guard_release(PTR_defaultValue_003952f0);
  }
  plVar1 = (long *)(lVar7 + ((long)uVar3 >> 1));
  if ((uVar3 & 1) != 0) {
    pcVar12 = *(code **)(pcVar12 + *plVar1);
  }
  pIVar2 = (IRuntime *)puVar5;
  if (uVar10 != 0) {
    pIVar2 = pIVar13;
  }
                    /* try { // try from 002a29fc to 002a2a07 has its CatchHandler @ 002a2ec4 */
  facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002a2a10 to 002a2a1f has its CatchHandler @ 002a2ea0 */
  (**(code **)(*param_3 + 0x120))(local_c0,param_3,&local_a8);
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  pIVar2 = pIVar13 + 0x10;
  if (uVar10 < 2) {
    pIVar2 = (IRuntime *)puVar5;
  }
                    /* try { // try from 002a2a40 to 002a2a4b has its CatchHandler @ 002a2e84 */
  facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002a2a54 to 002a2a63 has its CatchHandler @ 002a2e60 */
  (**(code **)(*param_3 + 0x120))(local_d8,param_3,&local_a8);
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  pIVar13 = pIVar13 + 0x20;
  if (uVar10 < 3) {
    pIVar13 = (IRuntime *)puVar5;
  }
  if (*(int *)pIVar13 == 0) {
    local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
    local_78 = '\0';
  }
  else {
                    /* try { // try from 002a2a8c to 002a2a9b has its CatchHandler @ 002a2e20 */
    facebook::jsi::Value::asString(pIVar13);
                    /* try { // try from 002a2aa4 to 002a2ab3 has its CatchHandler @ 002a2dfc */
    (**(code **)(*param_3 + 0x120))(&local_a8,param_3,local_150);
    if (local_150[0] != (undefined8 *)0x0) {
      (**(code **)*local_150[0])();
    }
    local_78 = '\x01';
    plStack_88 = plStack_a0;
    local_90 = local_a8;
    local_80 = local_98;
  }
                    /* try { // try from 002a2af0 to 002a2b03 has its CatchHandler @ 002a2e2c */
  (*pcVar12)(plVar1,local_c0,local_d8,&local_90);
  if ((local_78 != '\0') && (((ulong)local_90 & 1) != 0)) {
    operator_delete(local_80);
  }
  if ((local_d8[0] & 1) == 0) {
    if ((local_c0[0] & 1) != 0) goto LAB_002a2b48;
LAB_002a2b2c:
    *param_1 = 0;
  }
  else {
    operator_delete(local_c8);
    if ((local_c0[0] & 1) == 0) goto LAB_002a2b2c;
LAB_002a2b48:
    operator_delete(local_b0);
    *param_1 = 0;
  }
  if ((plVar11 != (long *)0x0) && (lVar7 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar7 == 0)
     ) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_002a332c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a3330  FUN_002a3330 =====

void FUN_002a3330(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003952f8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a3380  FUN_002a3380 =====

undefined * FUN_002a3380(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395300;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a33c0  FUN_002a33c0 =====

void FUN_002a33c0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fbd8;
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


// ===== 002a342c  FUN_002a342c =====

void FUN_002a342c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fbd8;
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


// ===== 002a3494  FUN_002a3494 =====

undefined8 * FUN_002a3494(long param_1)

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
  *puVar4 = &PTR_FUN_0037fbd8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a34f4 to 002a34f7 has its CatchHandler @ 002a3530 */
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


// ===== 002a3558  FUN_002a3558 =====

void FUN_002a3558(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037fbd8;
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


// ===== 002a35f0  FUN_002a35f0 =====

void FUN_002a35f0(long param_1)

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


// ===== 002a3650  FUN_002a3650 =====

void FUN_002a3650(void *param_1)

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


// ===== 002a36ac  FUN_002a36ac =====

void FUN_002a36ac(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  JSError *pJVar9;
  ulong uVar10;
  long *plVar11;
  code *pcVar12;
  IRuntime *pIVar13;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 *local_150 [3];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  byte local_c0 [16];
  void *local_b0;
  undefined8 *local_a8;
  long *plStack_a0;
  void *local_98;
  undefined8 *local_90;
  long *plStack_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar13 = (IRuntime *)*param_5;
  uVar10 = *param_6;
  local_a8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002a370c to 002a371b has its CatchHandler @ 002a3ee8 */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,&local_a8);
  plVar1 = plStack_88;
  if ((local_90 == (undefined8 *)0x0) ||
     (lVar7 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar7 == 0)) {
    lVar7 = 0;
    plVar11 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002a3794;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar11 = (long *)0x0;
      goto joined_r0x002a3794;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar11 = plVar1;
  }
  lVar8 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar8 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002a3794:
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  puVar5 = PTR_defaultValue_003952c8;
  if (uVar10 - 1 < 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003952d0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_defaultValue_003952d0), iVar6 != 0)) {
      *(undefined4 *)puVar5 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar5,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003952d0);
    }
    plVar1 = (long *)(lVar7 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
    pIVar2 = (IRuntime *)puVar5;
    if (uVar10 != 0) {
      pIVar2 = pIVar13;
    }
                    /* try { // try from 002a37e8 to 002a37f3 has its CatchHandler @ 002a3c04 */
    facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002a37fc to 002a380b has its CatchHandler @ 002a3be0 */
    (**(code **)(*param_3 + 0x120))(local_c0,param_3,&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      (**(code **)*local_a8)();
    }
    pIVar13 = pIVar13 + 0x10;
    if (uVar10 < 2) {
      pIVar13 = (IRuntime *)puVar5;
    }
    if (*(int *)pIVar13 == 0) {
      local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
      local_78 = '\0';
    }
    else {
                    /* try { // try from 002a3834 to 002a3843 has its CatchHandler @ 002a3ba0 */
      facebook::jsi::Value::asString(pIVar13);
                    /* try { // try from 002a384c to 002a385b has its CatchHandler @ 002a3b7c */
      (**(code **)(*param_3 + 0x120))(&local_a8,param_3,local_150);
      if (local_150[0] != (undefined8 *)0x0) {
        (**(code **)*local_150[0])();
      }
      local_78 = '\x01';
      plStack_88 = plStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
    }
                    /* try { // try from 002a3898 to 002a38a7 has its CatchHandler @ 002a3bac */
    (*pcVar12)(plVar1,local_c0,&local_90);
    if ((local_78 != '\0') && (((ulong)local_90 & 1) != 0)) {
      operator_delete(local_80);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    *param_1 = 0;
    if ((plVar11 != (long *)0x0) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar7 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002a3944 to 002a3953 has its CatchHandler @ 002a4048 */
    FUN_002a21c4(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar7);
    pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002a3960 to 002a3973 has its CatchHandler @ 002a4028 */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 002a3974 to 002a3987 has its CatchHandler @ 002a4010 */
    FUN_00263450(auStack_138,local_150,"` expected between ");
                    /* try { // try from 002a3988 to 002a3993 has its CatchHandler @ 002a3fe0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002a3994 to 002a39a3 has its CatchHandler @ 002a3fbc */
    FUN_00264adc(auStack_120,auStack_138,auStack_168);
                    /* try { // try from 002a39a4 to 002a39b7 has its CatchHandler @ 002a3f98 */
    FUN_00263450(auStack_108,auStack_120," and ");
                    /* try { // try from 002a39b8 to 002a39c3 has its CatchHandler @ 002a3f74 */
    std::__ndk1::to_string(2);
                    /* try { // try from 002a39c4 to 002a39d3 has its CatchHandler @ 002a3f4c */
    FUN_00264adc(auStack_f0,auStack_108,auStack_180);
                    /* try { // try from 002a39d4 to 002a39e7 has its CatchHandler @ 002a3f08 */
    FUN_00263450(auStack_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 002a39e8 to 002a39f3 has its CatchHandler @ 002a3b58 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002a39f4 to 002a3a03 has its CatchHandler @ 002a3b34 */
    FUN_00264adc(local_c0,auStack_d8,auStack_198);
                    /* try { // try from 002a3a04 to 002a3a17 has its CatchHandler @ 002a3b10 */
    FUN_00263450(&local_a8,local_c0,&DAT_001d5be0);
                    /* try { // try from 002a3a1c to 002a3a57 has its CatchHandler @ 002a3a98 */
    facebook::jsi::JSError::JSError(pJVar9,param_3,&local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a4070  FUN_002a4070 =====

void FUN_002a4070(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003952d8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a40c0  FUN_002a40c0 =====

undefined * FUN_002a40c0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003952e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a4100  FUN_002a4100 =====

void FUN_002a4100(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fb58;
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


// ===== 002a416c  FUN_002a416c =====

void FUN_002a416c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fb58;
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


// ===== 002a41d4  FUN_002a41d4 =====

undefined8 * FUN_002a41d4(long param_1)

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
  *puVar4 = &PTR_FUN_0037fb58;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a4234 to 002a4237 has its CatchHandler @ 002a4270 */
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


// ===== 002a4298  FUN_002a4298 =====

void FUN_002a4298(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037fb58;
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


// ===== 002a4330  FUN_002a4330 =====

void FUN_002a4330(long param_1)

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


// ===== 002a4390  FUN_002a4390 =====

void FUN_002a4390(void *param_1)

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


// ===== 002a43ec  FUN_002a43ec =====

void FUN_002a43ec(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  JSError *pJVar10;
  ulong uVar11;
  long *plVar12;
  code *pcVar13;
  IRuntime *pIVar14;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 *local_150 [3];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  byte local_c0 [16];
  void *local_b0;
  undefined8 *local_a8;
  long *plStack_a0;
  void *local_98;
  undefined8 *local_90;
  long *plStack_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar14 = (IRuntime *)*param_5;
  uVar11 = *param_6;
  local_a8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002a444c to 002a445b has its CatchHandler @ 002a4c38 */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,&local_a8);
  plVar1 = plStack_88;
  if ((local_90 == (undefined8 *)0x0) ||
     (lVar8 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar8 == 0)) {
    lVar8 = 0;
    plVar12 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002a44d4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar12 = (long *)0x0;
      goto joined_r0x002a44d4;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar12 = plVar1;
  }
  lVar9 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar9 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002a44d4:
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  puVar5 = PTR_defaultValue_003952a8;
  if (uVar11 - 1 < 2) {
    pcVar13 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003952b0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_defaultValue_003952b0), iVar7 != 0)) {
      *(undefined4 *)puVar5 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar5,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003952b0);
    }
    plVar1 = (long *)(lVar8 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *plVar1);
    }
    pIVar2 = (IRuntime *)puVar5;
    if (uVar11 != 0) {
      pIVar2 = pIVar14;
    }
                    /* try { // try from 002a4528 to 002a4533 has its CatchHandler @ 002a4954 */
    facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002a453c to 002a454b has its CatchHandler @ 002a4930 */
    (**(code **)(*param_3 + 0x120))(local_c0,param_3,&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      (**(code **)*local_a8)();
    }
    pIVar14 = pIVar14 + 0x10;
    if (uVar11 < 2) {
      pIVar14 = (IRuntime *)puVar5;
    }
    if (*(int *)pIVar14 == 0) {
      local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
      local_78 = '\0';
    }
    else {
                    /* try { // try from 002a4574 to 002a4583 has its CatchHandler @ 002a48f0 */
      facebook::jsi::Value::asString(pIVar14);
                    /* try { // try from 002a458c to 002a459b has its CatchHandler @ 002a48cc */
      (**(code **)(*param_3 + 0x120))(&local_a8,param_3,local_150);
      if (local_150[0] != (undefined8 *)0x0) {
        (**(code **)*local_150[0])();
      }
      local_78 = '\x01';
      plStack_88 = plStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
    }
                    /* try { // try from 002a45d8 to 002a45e7 has its CatchHandler @ 002a48fc */
    bVar6 = (*pcVar13)(plVar1,local_c0,&local_90);
    if ((local_78 != '\0') && (((ulong)local_90 & 1) != 0)) {
      operator_delete(local_80);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    *param_1 = 2;
    *(byte *)(param_1 + 2) = bVar6 & 1;
    if ((plVar12 != (long *)0x0) &&
       (lVar8 = FUN_00255510(0xffffffffffffffff,plVar12 + 1), lVar8 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002a4694 to 002a46a3 has its CatchHandler @ 002a4d98 */
    FUN_002a21c4(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar8);
    pJVar10 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002a46b0 to 002a46c3 has its CatchHandler @ 002a4d78 */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 002a46c4 to 002a46d7 has its CatchHandler @ 002a4d60 */
    FUN_00263450(auStack_138,local_150,"` expected between ");
                    /* try { // try from 002a46d8 to 002a46e3 has its CatchHandler @ 002a4d30 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002a46e4 to 002a46f3 has its CatchHandler @ 002a4d0c */
    FUN_00264adc(auStack_120,auStack_138,auStack_168);
                    /* try { // try from 002a46f4 to 002a4707 has its CatchHandler @ 002a4ce8 */
    FUN_00263450(auStack_108,auStack_120," and ");
                    /* try { // try from 002a4708 to 002a4713 has its CatchHandler @ 002a4cc4 */
    std::__ndk1::to_string(2);
                    /* try { // try from 002a4714 to 002a4723 has its CatchHandler @ 002a4c9c */
    FUN_00264adc(auStack_f0,auStack_108,auStack_180);
                    /* try { // try from 002a4724 to 002a4737 has its CatchHandler @ 002a4c58 */
    FUN_00263450(auStack_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 002a4738 to 002a4743 has its CatchHandler @ 002a48a8 */
    std::__ndk1::to_string(uVar11);
                    /* try { // try from 002a4744 to 002a4753 has its CatchHandler @ 002a4884 */
    FUN_00264adc(local_c0,auStack_d8,auStack_198);
                    /* try { // try from 002a4754 to 002a4767 has its CatchHandler @ 002a4860 */
    FUN_00263450(&local_a8,local_c0,&DAT_001d5be0);
                    /* try { // try from 002a476c to 002a47a7 has its CatchHandler @ 002a47e8 */
    facebook::jsi::JSError::JSError(pJVar10,param_3,&local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar10,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a4dc0  FUN_002a4dc0 =====

void FUN_002a4dc0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003952b8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a4e10  FUN_002a4e10 =====

undefined * FUN_002a4e10(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003952c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a4e50  FUN_002a4e50 =====

void FUN_002a4e50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fad8;
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


// ===== 002a4ebc  FUN_002a4ebc =====

void FUN_002a4ebc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fad8;
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


// ===== 002a4f24  FUN_002a4f24 =====

undefined8 * FUN_002a4f24(long param_1)

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
  *puVar4 = &PTR_FUN_0037fad8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a4f84 to 002a4f87 has its CatchHandler @ 002a4fc0 */
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


// ===== 002a4fe8  FUN_002a4fe8 =====

void FUN_002a4fe8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037fad8;
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


// ===== 002a5080  FUN_002a5080 =====

void FUN_002a5080(long param_1)

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


// ===== 002a50e0  FUN_002a50e0 =====

void FUN_002a50e0(void *param_1)

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


// ===== 002a513c  FUN_002a513c =====

void FUN_002a513c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  JSError *pJVar10;
  code *pcVar11;
  ulong uVar12;
  long *plVar13;
  IRuntime *pIVar14;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 *local_150 [3];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  byte local_c0 [16];
  void *local_b0;
  undefined8 *local_a8;
  long *plStack_a0;
  void *local_98;
  undefined8 *local_90;
  long *plStack_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar14 = (IRuntime *)*param_5;
  uVar12 = *param_6;
  local_a8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002a519c to 002a51ab has its CatchHandler @ 002a5994 */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,&local_a8);
  plVar1 = plStack_88;
  if ((local_90 == (undefined8 *)0x0) ||
     (lVar8 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar8 == 0)) {
    lVar8 = 0;
    plVar13 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002a5224;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar13 = (long *)0x0;
      goto joined_r0x002a5224;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar13 = plVar1;
  }
  lVar9 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar9 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002a5224:
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  puVar5 = PTR_defaultValue_00395288;
  if ((uVar12 & 0xfffffffffffffffe) == 2) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395290 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_defaultValue_00395290), iVar7 != 0)) {
      *(undefined4 *)puVar5 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar5,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395290);
    }
    plVar1 = (long *)(lVar8 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
    pIVar2 = (IRuntime *)puVar5;
    if (uVar12 != 0) {
      pIVar2 = pIVar14;
    }
                    /* try { // try from 002a5278 to 002a5283 has its CatchHandler @ 002a56b0 */
    facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002a528c to 002a529b has its CatchHandler @ 002a568c */
    (**(code **)(*param_3 + 0x120))(local_c0,param_3,&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      (**(code **)*local_a8)();
    }
                    /* try { // try from 002a52bc to 002a52bf has its CatchHandler @ 002a5670 */
    uVar6 = facebook::jsi::Value::asBool();
    pIVar14 = pIVar14 + 0x20;
    if (uVar12 < 3) {
      pIVar14 = (IRuntime *)puVar5;
    }
    if (*(int *)pIVar14 == 0) {
      local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
      local_78 = '\0';
    }
    else {
                    /* try { // try from 002a52d8 to 002a52e7 has its CatchHandler @ 002a5648 */
      facebook::jsi::Value::asString(pIVar14);
                    /* try { // try from 002a52f0 to 002a52ff has its CatchHandler @ 002a5624 */
      (**(code **)(*param_3 + 0x120))(&local_a8,param_3,local_150);
      if (local_150[0] != (undefined8 *)0x0) {
        (**(code **)*local_150[0])();
      }
      local_78 = '\x01';
      plStack_88 = plStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
    }
                    /* try { // try from 002a533c to 002a534f has its CatchHandler @ 002a564c */
    (*pcVar11)(plVar1,local_c0,uVar6 & 1,&local_90);
    if ((local_78 != '\0') && (((ulong)local_90 & 1) != 0)) {
      operator_delete(local_80);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    *param_1 = 0;
    if ((plVar13 != (long *)0x0) &&
       (lVar8 = FUN_00255510(0xffffffffffffffff,plVar13 + 1), lVar8 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002a53ec to 002a53fb has its CatchHandler @ 002a5af4 */
    FUN_002a21c4(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar8);
    pJVar10 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002a5408 to 002a541b has its CatchHandler @ 002a5ad4 */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 002a541c to 002a542f has its CatchHandler @ 002a5abc */
    FUN_00263450(auStack_138,local_150,"` expected between ");
                    /* try { // try from 002a5430 to 002a543b has its CatchHandler @ 002a5a8c */
    std::__ndk1::to_string(2);
                    /* try { // try from 002a543c to 002a544b has its CatchHandler @ 002a5a68 */
    FUN_00264adc(auStack_120,auStack_138,auStack_168);
                    /* try { // try from 002a544c to 002a545f has its CatchHandler @ 002a5a44 */
    FUN_00263450(auStack_108,auStack_120," and ");
                    /* try { // try from 002a5460 to 002a546b has its CatchHandler @ 002a5a20 */
    std::__ndk1::to_string(3);
                    /* try { // try from 002a546c to 002a547b has its CatchHandler @ 002a59f8 */
    FUN_00264adc(auStack_f0,auStack_108,auStack_180);
                    /* try { // try from 002a547c to 002a548f has its CatchHandler @ 002a59b4 */
    FUN_00263450(auStack_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 002a5490 to 002a549b has its CatchHandler @ 002a5600 */
    std::__ndk1::to_string(uVar12);
                    /* try { // try from 002a549c to 002a54ab has its CatchHandler @ 002a55dc */
    FUN_00264adc(local_c0,auStack_d8,auStack_198);
                    /* try { // try from 002a54ac to 002a54bf has its CatchHandler @ 002a55b8 */
    FUN_00263450(&local_a8,local_c0,&DAT_001d5be0);
                    /* try { // try from 002a54c4 to 002a54ff has its CatchHandler @ 002a5540 */
    facebook::jsi::JSError::JSError(pJVar10,param_3,&local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar10,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a5b1c  FUN_002a5b1c =====

void FUN_002a5b1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395298) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a5b6c  FUN_002a5b6c =====

undefined * FUN_002a5b6c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003952a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a5bac  FUN_002a5bac =====

void FUN_002a5bac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fa58;
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


// ===== 002a5c18  FUN_002a5c18 =====

void FUN_002a5c18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037fa58;
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


// ===== 002a5c80  FUN_002a5c80 =====

undefined8 * FUN_002a5c80(long param_1)

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
  *puVar4 = &PTR_FUN_0037fa58;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a5ce0 to 002a5ce3 has its CatchHandler @ 002a5d1c */
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


// ===== 002a5d44  FUN_002a5d44 =====

void FUN_002a5d44(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037fa58;
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


// ===== 002a5ddc  FUN_002a5ddc =====

void FUN_002a5ddc(long param_1)

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


// ===== 002a5e3c  FUN_002a5e3c =====

void FUN_002a5e3c(void *param_1)

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


// ===== 002a5e98  FUN_002a5e98 =====

void FUN_002a5e98(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  JSError *pJVar9;
  ulong uVar10;
  long *plVar11;
  code *pcVar12;
  IRuntime *pIVar13;
  undefined8 uVar14;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 *local_160 [3];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  byte local_d0 [16];
  void *local_c0;
  undefined8 *local_b8;
  long *plStack_b0;
  void *local_a8;
  undefined8 *local_a0;
  long *plStack_98;
  void *local_90;
  char local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  pIVar13 = (IRuntime *)*param_5;
  uVar10 = *param_6;
  local_b8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002a5efc to 002a5f0b has its CatchHandler @ 002a66e8 */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,&local_b8);
  plVar1 = plStack_98;
  if ((local_a0 == (undefined8 *)0x0) ||
     (lVar7 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar7 == 0)) {
    lVar7 = 0;
    plVar11 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002a5f84;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar11 = (long *)0x0;
      goto joined_r0x002a5f84;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar11 = plVar1;
  }
  lVar8 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar8 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002a5f84:
  if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)();
  }
  puVar5 = PTR_defaultValue_00395268;
  if (uVar10 - 1 < 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395270 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_defaultValue_00395270), iVar6 != 0)) {
      *(undefined4 *)puVar5 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar5,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395270);
    }
    plVar1 = (long *)(lVar7 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
    pIVar2 = (IRuntime *)puVar5;
    if (uVar10 != 0) {
      pIVar2 = pIVar13;
    }
                    /* try { // try from 002a5fd8 to 002a5fe3 has its CatchHandler @ 002a6404 */
    facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002a5fec to 002a5ffb has its CatchHandler @ 002a63e0 */
    (**(code **)(*param_3 + 0x120))(local_d0,param_3,&local_b8);
    if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)();
    }
    pIVar13 = pIVar13 + 0x10;
    if (uVar10 < 2) {
      pIVar13 = (IRuntime *)puVar5;
    }
    if (*(int *)pIVar13 == 0) {
      local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffffffffff00);
      local_88 = '\0';
    }
    else {
                    /* try { // try from 002a6024 to 002a6033 has its CatchHandler @ 002a63a0 */
      facebook::jsi::Value::asString(pIVar13);
                    /* try { // try from 002a603c to 002a604b has its CatchHandler @ 002a637c */
      (**(code **)(*param_3 + 0x120))(&local_b8,param_3,local_160);
      if (local_160[0] != (undefined8 *)0x0) {
        (**(code **)*local_160[0])();
      }
      local_88 = '\x01';
      plStack_98 = plStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
    }
                    /* try { // try from 002a6088 to 002a6097 has its CatchHandler @ 002a63ac */
    uVar14 = (*pcVar12)(plVar1,local_d0,&local_a0);
    if ((local_88 != '\0') && (((ulong)local_a0 & 1) != 0)) {
      operator_delete(local_90);
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    *(undefined8 *)(param_1 + 2) = uVar14;
    *param_1 = 3;
    if ((plVar11 != (long *)0x0) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar7 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_80) {
      return;
    }
  }
  else {
                    /* try { // try from 002a6144 to 002a6153 has its CatchHandler @ 002a6848 */
    FUN_002a21c4(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar7);
    pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002a6160 to 002a6173 has its CatchHandler @ 002a6828 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002a6174 to 002a6187 has its CatchHandler @ 002a6810 */
    FUN_00263450(auStack_148,local_160,"` expected between ");
                    /* try { // try from 002a6188 to 002a6193 has its CatchHandler @ 002a67e0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002a6194 to 002a61a3 has its CatchHandler @ 002a67bc */
    FUN_00264adc(auStack_130,auStack_148,auStack_178);
                    /* try { // try from 002a61a4 to 002a61b7 has its CatchHandler @ 002a6798 */
    FUN_00263450(auStack_118,auStack_130," and ");
                    /* try { // try from 002a61b8 to 002a61c3 has its CatchHandler @ 002a6774 */
    std::__ndk1::to_string(2);
                    /* try { // try from 002a61c4 to 002a61d3 has its CatchHandler @ 002a674c */
    FUN_00264adc(auStack_100,auStack_118,auStack_190);
                    /* try { // try from 002a61d4 to 002a61e7 has its CatchHandler @ 002a6708 */
    FUN_00263450(auStack_e8,auStack_100," arguments, but received ");
                    /* try { // try from 002a61e8 to 002a61f3 has its CatchHandler @ 002a6358 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002a61f4 to 002a6203 has its CatchHandler @ 002a6334 */
    FUN_00264adc(local_d0,auStack_e8,auStack_1a8);
                    /* try { // try from 002a6204 to 002a6217 has its CatchHandler @ 002a6310 */
    FUN_00263450(&local_b8,local_d0,&DAT_001d5be0);
                    /* try { // try from 002a621c to 002a6257 has its CatchHandler @ 002a6298 */
    facebook::jsi::JSError::JSError(pJVar9,param_3,&local_b8);
    if (*(long *)(lVar4 + 0x28) == local_80) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a6870  FUN_002a6870 =====

void FUN_002a6870(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395278) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a68c0  FUN_002a68c0 =====

undefined * FUN_002a68c0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395280;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a6900  FUN_002a6900 =====

void FUN_002a6900(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f9d8;
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


// ===== 002a696c  FUN_002a696c =====

void FUN_002a696c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f9d8;
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


// ===== 002a69d4  FUN_002a69d4 =====

undefined8 * FUN_002a69d4(long param_1)

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
  *puVar4 = &PTR_FUN_0037f9d8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a6a34 to 002a6a37 has its CatchHandler @ 002a6a70 */
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


// ===== 002a6a98  FUN_002a6a98 =====

void FUN_002a6a98(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f9d8;
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


// ===== 002a6b30  FUN_002a6b30 =====

void FUN_002a6b30(long param_1)

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


// ===== 002a6b90  FUN_002a6b90 =====

void FUN_002a6b90(void *param_1)

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


// ===== 002a6bec  FUN_002a6bec =====

void FUN_002a6bec(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  JSError *pJVar9;
  ulong uVar10;
  long *plVar11;
  code *pcVar12;
  IRuntime *pIVar13;
  undefined8 uVar14;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 *local_160 [3];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  byte local_d0 [16];
  void *local_c0;
  undefined8 *local_b8;
  long *plStack_b0;
  void *local_a8;
  undefined8 *local_a0;
  long *plStack_98;
  void *local_90;
  char local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  pIVar13 = (IRuntime *)*param_5;
  uVar10 = *param_6;
  local_b8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002a6c50 to 002a6c5f has its CatchHandler @ 002a744c */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,&local_b8);
  plVar1 = plStack_98;
  if ((local_a0 == (undefined8 *)0x0) ||
     (lVar7 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar7 == 0)) {
    lVar7 = 0;
    plVar11 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002a6cd8;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar11 = (long *)0x0;
      goto joined_r0x002a6cd8;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar11 = plVar1;
  }
  lVar8 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar8 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002a6cd8:
  if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)();
  }
  puVar5 = PTR_defaultValue_00395248;
  if ((uVar10 & 0xfffffffffffffffe) == 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395250 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_defaultValue_00395250), iVar6 != 0)) {
      *(undefined4 *)puVar5 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar5,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395250);
    }
    plVar1 = (long *)(lVar7 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
    pIVar2 = (IRuntime *)puVar5;
    if (uVar10 != 0) {
      pIVar2 = pIVar13;
    }
                    /* try { // try from 002a6d2c to 002a6d37 has its CatchHandler @ 002a7168 */
    facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002a6d40 to 002a6d4f has its CatchHandler @ 002a7144 */
    (**(code **)(*param_3 + 0x120))(local_d0,param_3,&local_b8);
    if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)();
    }
                    /* try { // try from 002a6d70 to 002a6d73 has its CatchHandler @ 002a7128 */
    uVar14 = facebook::jsi::Value::asNumber();
    pIVar13 = pIVar13 + 0x20;
    if (uVar10 < 3) {
      pIVar13 = (IRuntime *)puVar5;
    }
    if (*(int *)pIVar13 == 0) {
      local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffffffffff00);
      local_88 = '\0';
    }
    else {
                    /* try { // try from 002a6d8c to 002a6d9b has its CatchHandler @ 002a7100 */
      facebook::jsi::Value::asString(pIVar13);
                    /* try { // try from 002a6da4 to 002a6db3 has its CatchHandler @ 002a70dc */
      (**(code **)(*param_3 + 0x120))(&local_b8,param_3,local_160);
      if (local_160[0] != (undefined8 *)0x0) {
        (**(code **)*local_160[0])();
      }
      local_88 = '\x01';
      plStack_98 = plStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
    }
                    /* try { // try from 002a6df0 to 002a6e03 has its CatchHandler @ 002a7104 */
    (*pcVar12)(uVar14,plVar1,local_d0,&local_a0);
    if ((local_88 != '\0') && (((ulong)local_a0 & 1) != 0)) {
      operator_delete(local_90);
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    *param_1 = 0;
    if ((plVar11 != (long *)0x0) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar7 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_80) {
      return;
    }
  }
  else {
                    /* try { // try from 002a6ea4 to 002a6eb3 has its CatchHandler @ 002a75ac */
    FUN_002a21c4(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar7);
    pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002a6ec0 to 002a6ed3 has its CatchHandler @ 002a758c */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002a6ed4 to 002a6ee7 has its CatchHandler @ 002a7574 */
    FUN_00263450(auStack_148,local_160,"` expected between ");
                    /* try { // try from 002a6ee8 to 002a6ef3 has its CatchHandler @ 002a7544 */
    std::__ndk1::to_string(2);
                    /* try { // try from 002a6ef4 to 002a6f03 has its CatchHandler @ 002a7520 */
    FUN_00264adc(auStack_130,auStack_148,auStack_178);
                    /* try { // try from 002a6f04 to 002a6f17 has its CatchHandler @ 002a74fc */
    FUN_00263450(auStack_118,auStack_130," and ");
                    /* try { // try from 002a6f18 to 002a6f23 has its CatchHandler @ 002a74d8 */
    std::__ndk1::to_string(3);
                    /* try { // try from 002a6f24 to 002a6f33 has its CatchHandler @ 002a74b0 */
    FUN_00264adc(auStack_100,auStack_118,auStack_190);
                    /* try { // try from 002a6f34 to 002a6f47 has its CatchHandler @ 002a746c */
    FUN_00263450(auStack_e8,auStack_100," arguments, but received ");
                    /* try { // try from 002a6f48 to 002a6f53 has its CatchHandler @ 002a70b8 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002a6f54 to 002a6f63 has its CatchHandler @ 002a7094 */
    FUN_00264adc(local_d0,auStack_e8,auStack_1a8);
                    /* try { // try from 002a6f64 to 002a6f77 has its CatchHandler @ 002a7070 */
    FUN_00263450(&local_b8,local_d0,&DAT_001d5be0);
                    /* try { // try from 002a6f7c to 002a6fb7 has its CatchHandler @ 002a6ff8 */
    facebook::jsi::JSError::JSError(pJVar9,param_3,&local_b8);
    if (*(long *)(lVar4 + 0x28) == local_80) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a75d4  FUN_002a75d4 =====

void FUN_002a75d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395258) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a7624  FUN_002a7624 =====

undefined * FUN_002a7624(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395260;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a7664  FUN_002a7664 =====

void FUN_002a7664(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f808;
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


// ===== 002a76d0  FUN_002a76d0 =====

void FUN_002a76d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f808;
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


// ===== 002a7738  FUN_002a7738 =====

undefined8 * FUN_002a7738(long param_1)

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
  *puVar4 = &PTR_FUN_0037f808;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a7798 to 002a779b has its CatchHandler @ 002a77d4 */
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


// ===== 002a77fc  FUN_002a77fc =====

void FUN_002a77fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f808;
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


// ===== 002a7894  FUN_002a7894 =====

void FUN_002a7894(long param_1)

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


// ===== 002a78f4  FUN_002a78f4 =====

void FUN_002a78f4(void *param_1)

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


// ===== 002a7950  FUN_002a7950 =====

void FUN_002a7950(undefined4 *param_1,long param_2,Runtime *param_3,long param_4,undefined8 *param_5
                 ,ulong *param_6)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  JSError *pJVar10;
  long *plVar11;
  ulong uVar12;
  IRuntime *pIVar13;
  code *pcVar14;
  undefined8 *local_170 [3];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  long local_110;
  long *local_108;
  long *local_f8;
  long *local_f0;
  Runtime *local_e0;
  long *local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  Runtime *local_b8;
  long *local_b0;
  long *local_a8;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pIVar13 = (IRuntime *)*param_5;
  uVar12 = *param_6;
  local_e0 = (Runtime *)(**(code **)(*(long *)param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8))
  ;
                    /* try { // try from 002a79b0 to 002a79bf has its CatchHandler @ 002a8388 */
  (**(code **)(*(long *)param_3 + 0x160))(&local_a0,param_3,&local_e0);
  if ((local_a0 == 0) ||
     (lVar7 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar7 == 0)) {
    lVar7 = 0;
    plVar11 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_002a7a0c;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar11 = plStack_98;
LAB_002a7a0c:
    lVar8 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_e0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_e0)();
  }
  if (uVar12 != 1) {
                    /* try { // try from 002a7e60 to 002a7e6f has its CatchHandler @ 002a8548 */
    FUN_002a21c4(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar7);
    pJVar10 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002a7e7c to 002a7e8f has its CatchHandler @ 002a8528 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002a7e90 to 002a7ea3 has its CatchHandler @ 002a8510 */
    FUN_00263450(auStack_128,auStack_140,"` expected ");
                    /* try { // try from 002a7ea4 to 002a7eaf has its CatchHandler @ 002a84e0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002a7eb0 to 002a7ebf has its CatchHandler @ 002a84bc */
    FUN_00264adc(&local_110,auStack_128,auStack_158);
                    /* try { // try from 002a7ec0 to 002a7ed3 has its CatchHandler @ 002a8498 */
    FUN_00263450(&local_f8,&local_110," arguments, but received ");
                    /* try { // try from 002a7ed4 to 002a7edf has its CatchHandler @ 002a8474 */
    std::__ndk1::to_string(uVar12);
                    /* try { // try from 002a7ee0 to 002a7eef has its CatchHandler @ 002a844c */
    FUN_00264adc(&local_b8,&local_f8,local_170);
                    /* try { // try from 002a7ef0 to 002a7f03 has its CatchHandler @ 002a8408 */
    FUN_00263450(&local_e0,&local_b8,&DAT_001d5be0);
                    /* try { // try from 002a7f08 to 002a7f43 has its CatchHandler @ 002a83a8 */
    facebook::jsi::JSError::JSError(pJVar10,param_3,&local_e0);
    if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar10,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002a856c;
  }
  pcVar14 = *(code **)(param_2 + 0x20);
  uVar12 = *(ulong *)(param_2 + 0x28);
  if (((*PTR_defaultValue_00395208 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_defaultValue_00395208), puVar3 = PTR_defaultValue_00395200,
     iVar6 != 0)) {
    *(undefined4 *)PTR_defaultValue_00395200 = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(PTR_defaultValue_00395208);
  }
  plVar9 = (long *)(lVar7 + ((long)uVar12 >> 1));
  if ((uVar12 & 1) != 0) {
    pcVar14 = *(code **)(pcVar14 + *plVar9);
  }
                    /* try { // try from 002a7a78 to 002a7a8f has its CatchHandler @ 002a809c */
  facebook::jsi::Value::asObject(pIVar13);
                    /* try { // try from 002a7a90 to 002a7a9f has its CatchHandler @ 002a8078 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_e0);
  if (local_e0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_e0)();
  }
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
                    /* try { // try from 002a7ab8 to 002a7ac3 has its CatchHandler @ 002a8050 */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 002a7ac8 to 002a7ad3 has its CatchHandler @ 002a803c */
  FUN_0026ce4c(&local_b8,local_e0,local_170);
                    /* try { // try from 002a7ad4 to 002a7adf has its CatchHandler @ 002a8028 */
  FUN_0026d090(&local_f8,&local_b8);
  if (local_b0 != (long *)0x0) {
    uVar12 = FUN_00255510(0xffffffffffffffff);
    if (uVar12 < 2) {
      if ((*(byte *)(local_b0 + 2) & 1) == 0) {
        if (local_b8 != (Runtime *)0x0) {
          if (*(undefined8 **)local_b8 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_b8)();
          }
          operator_delete(local_b8);
        }
        local_b8 = (Runtime *)0x0;
        *(undefined4 *)(local_b0 + 2) = 1;
        goto LAB_002a7b40;
      }
      lVar7 = *local_b0;
      plVar2 = local_b0;
    }
    else {
LAB_002a7b40:
      lVar7 = *local_b0;
      plVar2 = local_b0;
    }
    if (((lVar7 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_d8 != (long *)0x0) &&
     (lVar7 = FUN_00255510(0xffffffffffffffff,local_d8 + 1), lVar7 == 0)) {
    (**(code **)(*local_d8 + 0x10))(local_d8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_f0;
  plVar4 = local_f8;
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_b0 = plVar4;
  local_a8 = plVar5;
  local_b8 = param_3;
                    /* try { // try from 002a7bc4 to 002a7bcf has its CatchHandler @ 002a8014 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_3);
  plVar2 = local_108;
  if (local_108 != (long *)0x0) {
    FUN_00259a00(1,local_108 + 2);
  }
  local_d8 = plVar4;
  local_b0 = (long *)0x0;
  local_a8 = (long *)0x0;
  local_d0 = (long)plVar5;
  local_c8 = local_110;
  local_c0 = plVar2;
  local_e0 = param_3;
  if (plVar2 != (long *)0x0) {
    FUN_00259a00(1,plVar2 + 2);
  }
  local_80 = (long *)0x0;
                    /* try { // try from 002a7c08 to 002a7c0f has its CatchHandler @ 002a7fec */
  local_80 = (long *)operator_new(0x30);
  local_80[2] = (long)plVar4;
  local_80[3] = (long)plVar5;
  *local_80 = (long)&PTR_FUN_0037f878;
  local_80[1] = (long)param_3;
  local_d8 = (long *)0x0;
  local_d0 = 0;
  local_80[4] = local_110;
  local_80[5] = (long)plVar2;
  local_c8 = 0;
  local_c0 = (long *)0x0;
  if (((plVar2 != (long *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_108 != (long *)0x0)) &&
     (lVar7 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar7 == 0)) {
    (**(code **)(*local_108 + 0x10))(local_108);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_a8 != (long *)0x0) {
    uVar12 = FUN_00255510(0xffffffffffffffff);
    plVar2 = local_b0;
    if (uVar12 < 2) {
      if ((*(byte *)(local_a8 + 2) & 1) == 0) {
        if (local_b0 != (long *)0x0) {
          if ((undefined8 *)*local_b0 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*local_b0)();
          }
          operator_delete(plVar2);
        }
        local_b0 = (long *)0x0;
        *(undefined4 *)(local_a8 + 2) = 1;
        goto LAB_002a7cd4;
      }
      lVar7 = *local_a8;
      plVar2 = local_a8;
    }
    else {
LAB_002a7cd4:
      lVar7 = *local_a8;
      plVar2 = local_a8;
    }
    local_a8 = plVar2;
    if (((lVar7 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_f0 != (long *)0x0) {
    uVar12 = FUN_00255510(0xffffffffffffffff);
    plVar2 = local_f8;
    if (uVar12 < 2) {
      if ((*(byte *)(local_f0 + 2) & 1) == 0) {
        if (local_f8 != (long *)0x0) {
          if ((undefined8 *)*local_f8 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*local_f8)();
          }
          operator_delete(plVar2);
        }
        local_f8 = (long *)0x0;
        *(undefined4 *)(local_f0 + 2) = 1;
        goto LAB_002a7d64;
      }
      lVar7 = *local_f0;
      plVar2 = local_f0;
    }
    else {
LAB_002a7d64:
      lVar7 = *local_f0;
      plVar2 = local_f0;
    }
    local_f0 = plVar2;
    if (((lVar7 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_170[0] != (undefined8 *)0x0) {
    (**(code **)*local_170[0])();
  }
                    /* try { // try from 002a7da8 to 002a7db7 has its CatchHandler @ 002a7fb8 */
  (*pcVar14)(plVar9,&local_a0);
  if (local_80 == &local_a0) {
    lVar7 = 4;
    plVar9 = &local_a0;
LAB_002a7de0:
    (**(code **)(*plVar9 + lVar7 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar7 = 5;
    plVar9 = local_80;
    goto LAB_002a7de0;
  }
  *param_1 = 0;
  if ((plVar11 != (long *)0x0) && (lVar7 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar7 == 0)
     ) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
LAB_002a856c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a8570  FUN_002a8570 =====

void FUN_002a8570(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395238) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a85c0  FUN_002a85c0 =====

undefined * FUN_002a85c0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395240;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a8600  FUN_002a8600 =====

void FUN_002a8600(long param_1)

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


// ===== 002a8654  FUN_002a8654 =====

void FUN_002a8654(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f878;
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


// ===== 002a86b4  FUN_002a86b4 =====

void FUN_002a86b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f878;
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


// ===== 002a871c  FUN_002a871c =====

undefined8 * FUN_002a871c(long param_1)

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
  *puVar2 = &PTR_FUN_0037f878;
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


// ===== 002a87b8  FUN_002a87b8 =====

void FUN_002a87b8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037f878;
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


// ===== 002a884c  FUN_002a884c =====

void FUN_002a884c(long param_1)

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


// ===== 002a88a0  FUN_002a88a0 =====

void FUN_002a88a0(void *param_1)

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


// ===== 002a88fc  FUN_002a88fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a88fc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  long *plVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 uStack_151;
  ulong local_150;
  long *plStack_148;
  long *local_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  byte local_110;
  void *local_108;
  ulong uStack_100;
  undefined8 *local_f8;
  long lStack_f0;
  undefined4 local_e8;
  char local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  char local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  char local_a0;
  byte local_90 [16];
  void *local_80;
  byte *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar11 != (long *)0x0) && (plVar16 = *(long **)(param_1 + 0x20), plVar16 != (long *)0x0))
    {
      plStack_148 = *(long **)(param_1 + 0x10);
      local_150 = *(ulong *)(param_1 + 8);
      local_140 = *(long **)(param_1 + 0x18);
      if (local_140 != (long *)0x0) {
        FUN_00255510(1);
      }
                    /* try { // try from 002a8970 to 002a897b has its CatchHandler @ 002a8d54 */
      FUN_002a8e38(&local_138,param_2);
      local_70 = (byte *)0x0;
                    /* try { // try from 002a8980 to 002a8987 has its CatchHandler @ 002a8d44 */
      local_70 = (byte *)operator_new(0xc0);
      pvVar10 = local_a8;
      uVar9 = uStack_b0;
      uVar8 = local_b8;
      pvVar17 = local_c8;
      uVar7 = uStack_d0;
      uVar6 = local_d8;
      uVar13 = uStack_100;
      pvVar3 = local_108;
      *(undefined8 *)((ulong)&local_150 | 8) = 0;
      ((undefined8 *)((ulong)&local_150 | 8))[1] = 0;
      *(undefined ***)local_70 = &PTR_FUN_0037f920;
      *(ulong *)(local_70 + 8) = local_150;
      *(long **)(local_70 + 0x18) = local_140;
      *(long **)(local_70 + 0x10) = plStack_148;
      *(undefined8 *)(local_70 + 0x28) = uStack_130;
      *(ulong *)(local_70 + 0x20) = local_138;
      *(void **)(local_70 + 0x30) = local_128;
      local_138 = 0;
      uStack_130 = 0;
      local_70[0x48] = local_110;
      local_128 = (void *)0x0;
      *(undefined8 *)(local_70 + 0x40) = uStack_118;
      *(undefined8 *)(local_70 + 0x38) = local_120;
      local_70[0x50] = 0;
      local_70[0x78] = 0;
      if (local_e0 != '\0') {
        local_108 = (void *)0x0;
        uStack_100 = 0;
        *(undefined8 **)(local_70 + 0x60) = local_f8;
        *(void **)(local_70 + 0x50) = pvVar3;
        *(ulong *)(local_70 + 0x58) = uVar13;
        *(long *)(local_70 + 0x68) = lStack_f0;
        *(undefined4 *)(local_70 + 0x70) = local_e8;
        if (lStack_f0 != 0) {
          uVar15 = local_f8[1];
          if ((uVar13 & uVar13 - 1) == 0) {
            uVar15 = uVar13 - 1 & uVar15;
          }
          else if (uVar13 <= uVar15) {
            uVar1 = 0;
            if (uVar13 != 0) {
              uVar1 = uVar15 / uVar13;
            }
            uVar15 = uVar15 - uVar1 * uVar13;
          }
          *(byte **)((long)pvVar3 + uVar15 * 8) = local_70 + 0x60;
          local_f8 = (undefined8 *)0x0;
          lStack_f0 = 0;
        }
        local_70[0x78] = 1;
      }
      local_70[0x80] = 0;
      local_70[0x98] = 0;
      if (local_c0 != '\0') {
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = (void *)0x0;
        *(undefined8 *)(local_70 + 0x88) = uVar7;
        *(ulong *)(local_70 + 0x80) = uVar6;
        *(void **)(local_70 + 0x90) = pvVar17;
        local_70[0x98] = 1;
      }
      local_70[0xa0] = 0;
      local_70[0xb8] = 0;
      if (local_a0 != '\0') {
        uStack_b0 = 0;
        local_a8 = (void *)0x0;
        local_b8 = 0;
        *(undefined8 *)(local_70 + 0xa8) = uVar9;
        *(ulong *)(local_70 + 0xa0) = uVar8;
        *(void **)(local_70 + 0xb0) = pvVar10;
        local_70[0xb8] = 1;
      }
                    /* try { // try from 002a8b28 to 002a8b37 has its CatchHandler @ 002a8d0c */
      (**(code **)(*plVar16 + 0x18))(plVar16,local_90);
      if (local_70 == local_90) {
        lVar14 = 4;
        pbVar12 = local_90;
LAB_002a8b58:
        (**(code **)(*(long *)pbVar12 + lVar14 * 8))();
      }
      else if (local_70 != (byte *)0x0) {
        lVar14 = 5;
        pbVar12 = local_70;
        goto LAB_002a8b58;
      }
      if ((local_a0 != '\0') && ((local_b8 & 1) != 0)) {
        operator_delete(local_a8);
      }
      if ((local_c0 != '\0') && ((local_d8 & 1) != 0)) {
        operator_delete(local_c8);
      }
      pvVar3 = local_108;
      puVar4 = local_f8;
      if (local_e0 != '\0') {
        while (puVar4 != (undefined8 *)0x0) {
          pvVar17 = (void *)*puVar4;
          local_108 = pvVar3;
          if (*(uint *)(puVar4 + 8) != 0xffffffff) {
                    /* try { // try from 002a8bd8 to 002a8be3 has its CatchHandler @ 002a8da4 */
            (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)(puVar4 + 8)])(&uStack_151,puVar4 + 5);
          }
          *(undefined4 *)(puVar4 + 8) = 0xffffffff;
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          pvVar3 = local_108;
          puVar4 = (undefined8 *)pvVar17;
        }
        local_108 = (void *)0x0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
      }
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if (local_140 != (long *)0x0) {
        uVar13 = FUN_00255510(0xffffffffffffffff);
        plVar16 = plStack_148;
        if ((uVar13 < 2) && ((*(byte *)(local_140 + 2) & 1) == 0)) {
          if (plStack_148 != (long *)0x0) {
            if ((undefined8 *)*plStack_148 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*plStack_148)();
            }
            operator_delete(plVar16);
          }
          plStack_148 = (long *)0x0;
          *(undefined4 *)(local_140 + 2) = 1;
        }
        plVar16 = local_140;
        if ((*local_140 == 0) && (local_140[1] == 0)) {
          if (local_140 != (long *)0x0) {
            std::__ndk1::mutex::~mutex((mutex *)((long)local_140 + 0x14));
            operator_delete(plVar16);
          }
          local_140 = (long *)0x0;
        }
      }
      goto LAB_002a8cb4;
    }
  }
                    /* try { // try from 002a8a20 to 002a8a27 has its CatchHandler @ 002a8d7c */
  local_140 = (long *)operator_new(0x50);
  puVar5 = PTR_typeinfo_name_00395210;
  plStack_148 = _UNK_001d8038;
  local_150 = _DAT_001d8030;
  *(undefined4 *)(local_140 + 8) = 0x45454545;
  lVar18 = *(long *)(puVar5 + 8);
  lVar14 = *(long *)puVar5;
  lVar20 = *(long *)(puVar5 + 0x18);
  lVar19 = *(long *)(puVar5 + 0x10);
  *(undefined1 *)((long)local_140 + 0x44) = 0;
  local_140[1] = lVar18;
  *local_140 = lVar14;
  local_140[3] = lVar20;
  local_140[2] = lVar19;
  lVar14 = *(long *)(puVar5 + 0x20);
  lVar19 = *(long *)(puVar5 + 0x38);
  lVar18 = *(long *)(puVar5 + 0x30);
  local_140[5] = *(long *)(puVar5 + 0x28);
  local_140[4] = lVar14;
  local_140[7] = lVar19;
  local_140[6] = lVar18;
                    /* try { // try from 002a8a60 to 002a8a6f has its CatchHandler @ 002a8d64 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_150,true);
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
LAB_002a8cb4:
  if ((plVar11 != (long *)0x0) &&
     (lVar14 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar14 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002a8da8  FUN_002a8da8 =====

void FUN_002a8da8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395210) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a8df8  FUN_002a8df8 =====

undefined * FUN_002a8df8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395218;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a8e38  FUN_002a8e38 =====

void FUN_002a8e38(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if ((*param_2 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined8 *)param_1 = uVar5;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  bVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x30] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  param_1[0x28] = bVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  param_1[0x58] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (param_2[0x58] != 0) {
                    /* try { // try from 002a8eb0 to 002a8ebb has its CatchHandler @ 002a8fc4 */
    FUN_0025fce4(param_1 + 0x30,param_2 + 0x30);
    param_1[0x58] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
  }
  pbVar4 = param_1 + 0x60;
  *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  param_1[0x78] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (param_2[0x78] != 0) {
    if ((param_2[0x60] & 1) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      uVar5 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = uVar6;
      *(undefined8 *)pbVar4 = uVar5;
    }
    else {
                    /* try { // try from 002a8ef8 to 002a8eff has its CatchHandler @ 002a8f9c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(pbVar4,*(char **)(param_2 + 0x70),*(ulong *)(param_2 + 0x68));
    }
    param_1[0x78] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
  }
  pbVar4 = param_1 + 0x80;
  *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  param_1[0x98] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (param_2[0x98] != 0) {
    if ((param_2[0x80] & 1) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x88);
      uVar5 = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(param_1 + 0x88) = uVar6;
      *(undefined8 *)pbVar4 = uVar5;
    }
    else {
                    /* try { // try from 002a8f3c to 002a8f43 has its CatchHandler @ 002a8f74 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(pbVar4,*(char **)(param_2 + 0x90),*(ulong *)(param_2 + 0x88));
    }
    param_1[0x98] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9004  FUN_002a9004 =====

void FUN_002a9004(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0xb0) != '\0') && ((*(byte *)(param_1 + 0x98) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0xa8));
  }
  if ((*(char *)(param_1 + 0x90) != '\0') && ((*(byte *)(param_1 + 0x78) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_0025f528(param_1 + 0x48);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a909c  FUN_002a909c =====

void FUN_002a909c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f920;
  if ((*(char *)(param_1 + 0x17) != '\0') && ((*(byte *)(param_1 + 0x14) & 1) != 0)) {
    operator_delete((void *)param_1[0x16]);
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    FUN_0025f528(param_1 + 10);
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9140  FUN_002a9140 =====

void FUN_002a9140(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f920;
  if ((*(char *)(param_1 + 0x17) != '\0') && ((*(byte *)(param_1 + 0x14) & 1) != 0)) {
    operator_delete((void *)param_1[0x16]);
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    FUN_0025f528(param_1 + 10);
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a91ec  FUN_002a91ec =====

undefined8 * FUN_002a91ec(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0xc0);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0037f920;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
                    /* try { // try from 002a9244 to 002a924f has its CatchHandler @ 002a9278 */
  FUN_002a8e38(puVar2 + 4,param_1 + 0x20);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a92a8  FUN_002a92a8 =====

void FUN_002a92a8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037f920;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
                    /* try { // try from 002a9304 to 002a930f has its CatchHandler @ 002a9334 */
  FUN_002a8e38(param_2 + 4,param_1 + 0x20);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a935c  FUN_002a935c =====

void FUN_002a935c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_002a9d34(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9398  FUN_002a9398 =====

void FUN_002a9398(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_002a9d34((long)param_1 + 8);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a93e8  FUN_002a93e8 =====

void FUN_002a93e8(long param_1)

{
  long lVar1;
  ulong uVar2;
  Runtime *pRVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  runtime_error *this;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  undefined4 local_f0 [2];
  undefined8 *local_e8;
  Value aVStack_e0 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  uint local_b8;
  char cStack_b4;
  char cStack_b3;
  char cStack_b2;
  char cStack_b1;
  char cStack_b0;
  undefined2 local_af;
  undefined1 local_ad;
  void *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  Runtime *local_90;
  Runtime **local_88;
  uint local_80;
  undefined4 uStack_7c;
  double local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
    FUN_00264e5c(&local_b8,PTR_typeinfo_name_00395220,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002a9928 to 002a993b has its CatchHandler @ 002a9b00 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)&local_b8);
                    /* try { // try from 002a993c to 002a994f has its CatchHandler @ 002a9ae8 */
    FUN_00263450(&local_80,&local_d0," - the underlying `jsi::Function` has already been deleted!");
                    /* try { // try from 002a9954 to 002a998b has its CatchHandler @ 002a9ab4 */
    std::runtime_error::runtime_error(this,(basic_string *)&local_80);
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    pRVar3 = *(Runtime **)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    (**(code **)(*(long *)pRVar3 + 0x130))(&local_a0,pRVar3);
    cStack_b3 = 0;
    local_b8 = 0x6d616e08;
    cStack_b4 = 0x65;
                    /* try { // try from 002a9460 to 002a946b has its CatchHandler @ 002a9a18 */
    uVar5 = margelo::nitro::PropNameIDCache::get(pRVar3,(basic_string *)&local_b8);
    uVar2 = (ulong)(*(byte *)(param_1 + 0x20) >> 1);
    lVar1 = param_1 + 0x21;
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x28);
      lVar1 = *(long *)(param_1 + 0x30);
    }
                    /* try { // try from 002a9494 to 002a949f has its CatchHandler @ 002a9a14 */
    (**(code **)(*(long *)pRVar3 + 0x110))(&local_d0,pRVar3,lVar1,uVar2);
    local_80 = 6;
                    /* try { // try from 002a94b8 to 002a94cb has its CatchHandler @ 002a99fc */
    (**(code **)(*(long *)pRVar3 + 0x1b0))(pRVar3,&local_a0,uVar5,&local_80);
    facebook::jsi::Value::~Value((Value *)&local_80);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    cStack_b3 = 0;
    local_b8 = 0x70797408;
    cStack_b4 = 0x65;
                    /* try { // try from 002a94fc to 002a9507 has its CatchHandler @ 002a99f8 */
    uVar5 = margelo::nitro::PropNameIDCache::get(pRVar3,(basic_string *)&local_b8);
    local_78 = (double)*(int *)(param_1 + 0x38);
    local_80 = 3;
                    /* try { // try from 002a9528 to 002a9537 has its CatchHandler @ 002a99f4 */
    (**(code **)(*(long *)pRVar3 + 0x1b0))(pRVar3,&local_a0,uVar5,&local_80);
    facebook::jsi::Value::~Value((Value *)&local_80);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    local_b8 = 0x6c65640a;
    cStack_b4 = 0x61;
    cStack_b3 = 0x79;
    cStack_b2 = 0;
                    /* try { // try from 002a956c to 002a9577 has its CatchHandler @ 002a99f0 */
    uVar5 = margelo::nitro::PropNameIDCache::get(pRVar3,(basic_string *)&local_b8);
    local_80 = (uint)*(byte *)(param_1 + 0x48);
    if (*(byte *)(param_1 + 0x48) != 0) {
      local_78 = *(double *)(param_1 + 0x40);
      local_80 = 3;
    }
                    /* try { // try from 002a959c to 002a95ab has its CatchHandler @ 002a99ec */
    (**(code **)(*(long *)pRVar3 + 0x1b0))(pRVar3,&local_a0,uVar5,&local_80);
    facebook::jsi::Value::~Value((Value *)&local_80);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    local_af = 0x7365;
    local_b8 = CONCAT31((int3)s_properties_001d73ef._0_8_,0x14);
    cStack_b4 = SUB81(s_properties_001d73ef._0_8_,3);
    cStack_b3 = SUB81(s_properties_001d73ef._0_8_,4);
    cStack_b2 = SUB81(s_properties_001d73ef._0_8_,5);
    cStack_b1 = SUB81(s_properties_001d73ef._0_8_,6);
    cStack_b0 = SUB81(s_properties_001d73ef._0_8_,7);
    local_ad = 0;
                    /* try { // try from 002a95e8 to 002a95f3 has its CatchHandler @ 002a99e8 */
    uVar5 = margelo::nitro::PropNameIDCache::get(pRVar3,(basic_string *)&local_b8);
    if (*(char *)(param_1 + 0x78) == '\0') {
      local_d0 = 0;
    }
    else {
                    /* try { // try from 002a9608 to 002a9613 has its CatchHandler @ 002a99a8 */
      (**(code **)(*(long *)pRVar3 + 0x130))(&local_80,pRVar3);
      local_98 = CONCAT44(uStack_7c,local_80);
      plVar9 = *(long **)(param_1 + 0x60);
      if (plVar9 != (long *)0x0) {
        do {
          local_90 = pRVar3;
          if (*(uint *)(plVar9 + 8) == 0xffffffff) {
            if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 002a999c to 002a999f has its CatchHandler @ 002a9a28 */
              uVar7 = FUN_002a9bc8();
                    /* catch() { ... } // from try @ 002a9824 with catch @ 002a99a0 */
                    /* catch() { ... } // from try @ 002a9460 with catch @ 002a9a18 */
              if ((local_b8 & 1) != 0) {
                operator_delete(local_a8);
              }
              if (local_a0 != (undefined8 *)0x0) {
                (**(code **)*local_a0)();
              }
              if (*(long *)(lVar4 + 0x28) == local_68) {
                FUN_00255d34(uVar7);
              }
            }
            goto LAB_002a9b34;
          }
                    /* try { // try from 002a965c to 002a966b has its CatchHandler @ 002a9a30 */
          local_88 = &local_90;
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<margelo_nitro_JSIConverter<std___ndk1_variant<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>,void>_toJSI(facebook_jsi_Runtime&,std___ndk1_variant<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>const&>_0037f990
                    )[*(uint *)(plVar9 + 8)])(&local_80,&local_88,plVar9 + 5);
          lVar1 = (long)plVar9 + 0x11;
          if ((*(byte *)(plVar9 + 2) & 1) != 0) {
            lVar1 = plVar9[4];
          }
                    /* try { // try from 002a9680 to 002a96a7 has its CatchHandler @ 002a9a58 */
          uVar6 = __strlen_chk(lVar1,0xffffffffffffffff);
          (**(code **)(*(long *)pRVar3 + 0x108))(&local_88,pRVar3,lVar1,uVar6);
                    /* try { // try from 002a96b0 to 002a96c3 has its CatchHandler @ 002a9a38 */
          (**(code **)(*(long *)pRVar3 + 0x1b8))(pRVar3,&local_98,&local_88,&local_80);
          if (local_88 != (Runtime **)0x0) {
            (**(code **)*local_88)();
          }
          facebook::jsi::Value::~Value((Value *)&local_80);
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      local_d0 = 7;
      local_c8 = local_98;
    }
                    /* try { // try from 002a96fc to 002a970f has its CatchHandler @ 002a99dc */
    (**(code **)(*(long *)pRVar3 + 0x1b0))(pRVar3,&local_a0,uVar5,&local_d0);
    facebook::jsi::Value::~Value((Value *)&local_d0);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    local_b8 = 0x6c727506;
    cStack_b4 = 0;
                    /* try { // try from 002a973c to 002a9747 has its CatchHandler @ 002a99d8 */
    uVar5 = margelo::nitro::PropNameIDCache::get(pRVar3,(basic_string *)&local_b8);
    uVar8 = (uint)*(byte *)(param_1 + 0x98);
    if (*(byte *)(param_1 + 0x98) != 0) {
      uVar2 = (ulong)(*(byte *)(param_1 + 0x80) >> 1);
      lVar1 = param_1 + 0x81;
      if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0x88);
        lVar1 = *(long *)(param_1 + 0x90);
      }
                    /* try { // try from 002a9778 to 002a9783 has its CatchHandler @ 002a99a4 */
      (**(code **)(*(long *)pRVar3 + 0x110))(&local_d0,pRVar3,lVar1,uVar2);
      local_78 = (double)CONCAT44(uStack_cc,local_d0);
      uVar8 = 6;
    }
                    /* try { // try from 002a979c to 002a97af has its CatchHandler @ 002a99d4 */
    local_80 = uVar8;
    (**(code **)(*(long *)pRVar3 + 0x1b0))(pRVar3,&local_a0,uVar5,&local_80);
    facebook::jsi::Value::~Value((Value *)&local_80);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    cStack_b1 = '\0';
    local_b8 = 0x7261740c;
    cStack_b4 = 'g';
    cStack_b3 = 'e';
    cStack_b2 = 't';
                    /* try { // try from 002a97e8 to 002a97f3 has its CatchHandler @ 002a99d0 */
    uVar5 = margelo::nitro::PropNameIDCache::get(pRVar3,(basic_string *)&local_b8);
    uVar8 = (uint)*(byte *)(param_1 + 0xb8);
    if (*(byte *)(param_1 + 0xb8) != 0) {
      uVar2 = (ulong)(*(byte *)(param_1 + 0xa0) >> 1);
      lVar1 = param_1 + 0xa1;
      if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0xa8);
        lVar1 = *(long *)(param_1 + 0xb0);
      }
                    /* try { // try from 002a9824 to 002a982f has its CatchHandler @ 002a99a0 */
      (**(code **)(*(long *)pRVar3 + 0x110))(&local_d0,pRVar3,lVar1,uVar2);
      local_78 = (double)CONCAT44(uStack_cc,local_d0);
      uVar8 = 6;
    }
                    /* try { // try from 002a9848 to 002a985b has its CatchHandler @ 002a99cc */
    local_80 = uVar8;
    (**(code **)(*(long *)pRVar3 + 0x1b0))(pRVar3,&local_a0,uVar5,&local_80);
    facebook::jsi::Value::~Value((Value *)&local_80);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    local_f0[0] = 7;
    local_e8 = local_a0;
    facebook::jsi::Value::Value((Value *)&local_80,(Value *)local_f0);
    local_b8 = 0;
                    /* try { // try from 002a989c to 002a98b7 has its CatchHandler @ 002a99ac */
    (**(code **)(*(long *)pRVar3 + 0x280))(aVStack_e0,pRVar3,uVar7,&local_b8,&local_80,1);
    facebook::jsi::Value::~Value((Value *)&local_b8);
    facebook::jsi::Value::~Value((Value *)&local_80);
    facebook::jsi::Value::~Value((Value *)local_f0);
    facebook::jsi::Value::~Value(aVStack_e0);
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
LAB_002a9b34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9b38  FUN_002a9b38 =====

void FUN_002a9b38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395228) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002a9b88  FUN_002a9b88 =====

undefined * FUN_002a9b88(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395230;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9bc8  FUN_002a9bc8 =====

void FUN_002a9bc8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    plVar2 = (long *)__cxa_allocate_exception(8);
    *plVar2 = (long)(PTR_vtable_00395330 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar2,PTR_typeinfo_00395328,PTR__exception_003947b8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9c20  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, void>::toJSI(facebook::jsi::Runtime&, std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, void>::toJSI(facebook::jsi::Runtime&, std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&>
          (__dispatcher<0ul> *this,__value_visitor *param_1,__base *param_2)

{
  __value_visitor _Var1;
  long lVar2;
  undefined4 *in_x8;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  _Var1 = *param_1;
  *in_x8 = 2;
  *(__value_visitor *)(in_x8 + 2) = _Var1;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return (_func_decltype_auto *)this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9c68  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, void>::toJSI(facebook::jsi::Runtime&, std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, void>::toJSI(facebook::jsi::Runtime&, std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&>
          (__dispatcher<1ul> *this,__value_visitor *param_1,__base *param_2)

{
  ulong uVar1;
  __value_visitor *p_Var2;
  long lVar3;
  bool bVar4;
  _func_decltype_auto *p_Var5;
  undefined4 *in_x8;
  undefined8 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  p_Var2 = *(__value_visitor **)(param_1 + 0x10);
  bVar4 = ((byte)*param_1 & 1) == 0;
  if (bVar4) {
    p_Var2 = param_1 + 1;
  }
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (!bVar4) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  p_Var5 = (_func_decltype_auto *)
           (**(code **)(*(long *)**(undefined8 **)this + 0x110))
                     (&local_30,(long *)**(undefined8 **)this,p_Var2,uVar1);
  *in_x8 = 6;
  *(undefined8 *)(in_x8 + 2) = local_30;
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return p_Var5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9cec  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, void>::toJSI(facebook::jsi::Runtime&, std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, void>::toJSI(facebook::jsi::Runtime&, std::__ndk1::variant<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&)::{lambda(auto:1 const&)#1}>&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&>
          (__dispatcher<2ul> *this,__value_visitor *param_1,__base *param_2)

{
  long lVar1;
  undefined4 *in_x8;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)param_1;
  *in_x8 = 3;
  *(undefined8 *)(in_x8 + 2) = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9d34  FUN_002a9d34 =====

void FUN_002a9d34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0xb0) != '\0') && ((*(byte *)(param_1 + 0x98) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0xa8));
  }
  if ((*(char *)(param_1 + 0x90) != '\0') && ((*(byte *)(param_1 + 0x78) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_0025f528(param_1 + 0x48);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002a9dcc  FUN_002a9dcc =====

void FUN_002a9dcc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f788;
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


// ===== 002a9e38  FUN_002a9e38 =====

void FUN_002a9e38(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f788;
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


// ===== 002a9ea0  FUN_002a9ea0 =====

undefined8 * FUN_002a9ea0(long param_1)

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
  *puVar4 = &PTR_FUN_0037f788;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002a9f00 to 002a9f03 has its CatchHandler @ 002a9f3c */
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


// ===== 002a9f64  FUN_002a9f64 =====

void FUN_002a9f64(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f788;
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


// ===== 002a9ffc  FUN_002a9ffc =====

void FUN_002a9ffc(long param_1)

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


// ===== 002aa05c  FUN_002aa05c =====

void FUN_002aa05c(void *param_1)

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


// ===== 002aa0b8  FUN_002aa0b8 =====

void FUN_002aa0b8(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002aa114 to 002aa123 has its CatchHandler @ 002aa664 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002aa19c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002aa19c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002aa19c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003951e8
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003951e8
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003951e0
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003951e0
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003951e8
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002aa1d4 to 002aa1d7 has its CatchHandler @ 002aa374 */
    (*pcVar9)();
    *param_1 = 0;
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
                    /* try { // try from 002aa24c to 002aa25b has its CatchHandler @ 002aa800 */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002aa268 to 002aa27b has its CatchHandler @ 002aa7e0 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002aa27c to 002aa28f has its CatchHandler @ 002aa7c8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002aa290 to 002aa29b has its CatchHandler @ 002aa798 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002aa29c to 002aa2ab has its CatchHandler @ 002aa774 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002aa2ac to 002aa2bf has its CatchHandler @ 002aa750 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002aa2c0 to 002aa2cb has its CatchHandler @ 002aa72c */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002aa2cc to 002aa2db has its CatchHandler @ 002aa708 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002aa2dc to 002aa2ef has its CatchHandler @ 002aa6e4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002aa2f4 to 002aa32f has its CatchHandler @ 002aa684 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002aa828  FUN_002aa828 =====

void FUN_002aa828(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003951f0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002aa878  FUN_002aa878 =====

undefined * FUN_002aa878(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003951f8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002aa8b8  FUN_002aa8b8 =====

void FUN_002aa8b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f708;
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


// ===== 002aa924  FUN_002aa924 =====

void FUN_002aa924(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f708;
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


// ===== 002aa98c  FUN_002aa98c =====

undefined8 * FUN_002aa98c(long param_1)

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
  *puVar4 = &PTR_FUN_0037f708;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002aa9ec to 002aa9ef has its CatchHandler @ 002aaa28 */
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


// ===== 002aaa50  FUN_002aaa50 =====

void FUN_002aaa50(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f708;
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


// ===== 002aaae8  FUN_002aaae8 =====

void FUN_002aaae8(long param_1)

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


// ===== 002aab48  FUN_002aab48 =====

void FUN_002aab48(void *param_1)

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


// ===== 002aaba4  FUN_002aaba4 =====

void FUN_002aaba4(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002aac00 to 002aac0f has its CatchHandler @ 002ab1b0 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002aac88;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002aac88;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002aac88:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951c8
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951c8
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951c0
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951c0
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951c8
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002aacc0 to 002aacc7 has its CatchHandler @ 002aaeb8 */
    (*pcVar9)(auStack_110);
                    /* try { // try from 002aacc8 to 002aacd7 has its CatchHandler @ 002aaea0 */
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
                    /* try { // try from 002aad78 to 002aad87 has its CatchHandler @ 002ab34c */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002aad94 to 002aada7 has its CatchHandler @ 002ab32c */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002aada8 to 002aadbb has its CatchHandler @ 002ab314 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002aadbc to 002aadc7 has its CatchHandler @ 002ab2e4 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002aadc8 to 002aadd7 has its CatchHandler @ 002ab2c0 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002aadd8 to 002aadeb has its CatchHandler @ 002ab29c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002aadec to 002aadf7 has its CatchHandler @ 002ab278 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002aadf8 to 002aae07 has its CatchHandler @ 002ab254 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002aae08 to 002aae1b has its CatchHandler @ 002ab230 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002aae20 to 002aae5b has its CatchHandler @ 002ab1d0 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ab374  FUN_002ab374 =====

void FUN_002ab374(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003951d0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002ab3c4  FUN_002ab3c4 =====

undefined * FUN_002ab3c4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003951d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ab404  FUN_002ab404 =====

void FUN_002ab404(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f688;
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


// ===== 002ab470  FUN_002ab470 =====

void FUN_002ab470(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f688;
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


// ===== 002ab4d8  FUN_002ab4d8 =====

undefined8 * FUN_002ab4d8(long param_1)

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
  *puVar4 = &PTR_FUN_0037f688;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002ab538 to 002ab53b has its CatchHandler @ 002ab574 */
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


// ===== 002ab59c  FUN_002ab59c =====

void FUN_002ab59c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f688;
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


// ===== 002ab634  FUN_002ab634 =====

void FUN_002ab634(long param_1)

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


// ===== 002ab694  FUN_002ab694 =====

void FUN_002ab694(void *param_1)

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


// ===== 002ab6f0  FUN_002ab6f0 =====

void FUN_002ab6f0(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002ab74c to 002ab75b has its CatchHandler @ 002abd18 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar3 = local_78;
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar3 == (long *)0x0) goto joined_r0x002ab7d4;
  }
  else {
    if (plVar3 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002ab7d4;
    }
    FUN_00259a00(1,plVar3 + 1);
    plVar8 = plVar3;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002ab7d4:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 0) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951a8
         & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951a8
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951a0
       , iVar4 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951a0
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003951a8
                         );
    }
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *(long *)(lVar5 + ((long)uVar9 >> 1)));
    }
                    /* try { // try from 002ab80c to 002ab813 has its CatchHandler @ 002aba20 */
    (*pcVar10)(&local_80);
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 002ab820 to 002ab82b has its CatchHandler @ 002aba04 */
      FUN_002abf6c(param_1,param_3,local_80);
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
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002ab8dc to 002ab8eb has its CatchHandler @ 002abeb4 */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ab8f8 to 002ab90b has its CatchHandler @ 002abe94 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002ab90c to 002ab91f has its CatchHandler @ 002abe7c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002ab920 to 002ab92b has its CatchHandler @ 002abe4c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002ab92c to 002ab93b has its CatchHandler @ 002abe28 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002ab93c to 002ab94f has its CatchHandler @ 002abe04 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002ab950 to 002ab95b has its CatchHandler @ 002abde0 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002ab95c to 002ab96b has its CatchHandler @ 002abdbc */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002ab96c to 002ab97f has its CatchHandler @ 002abd98 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002ab984 to 002ab9bf has its CatchHandler @ 002abd38 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002abedc  FUN_002abedc =====

void FUN_002abedc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003951b0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002abf2c  FUN_002abf2c =====

undefined * FUN_002abf2c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003951b8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002abf6c  FUN_002abf6c =====

void FUN_002abf6c(undefined8 param_1,undefined8 param_2,long *param_3)

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
    FUN_00264e5c(abStack_50,PTR_typeinfo_name_00395580);
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002abfe8 to 002abffb has its CatchHandler @ 002ac09c */
    std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",abStack_50);
                    /* try { // try from 002abffc to 002ac00f has its CatchHandler @ 002ac084 */
    FUN_00263450(auStack_68,auStack_80,&DAT_001d795b);
                    /* try { // try from 002ac014 to 002ac04f has its CatchHandler @ 002ac050 */
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


// ===== 002ac0d4  FUN_002ac0d4 =====

void FUN_002ac0d4(long *param_1,char param_2)

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


// ===== 002ac168  FUN_002ac168 =====

void FUN_002ac168(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f608;
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


// ===== 002ac1d4  FUN_002ac1d4 =====

void FUN_002ac1d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f608;
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


// ===== 002ac23c  FUN_002ac23c =====

undefined8 * FUN_002ac23c(long param_1)

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
  *puVar4 = &PTR_FUN_0037f608;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002ac29c to 002ac29f has its CatchHandler @ 002ac2d8 */
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


// ===== 002ac300  FUN_002ac300 =====

void FUN_002ac300(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f608;
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


// ===== 002ac398  FUN_002ac398 =====

void FUN_002ac398(long param_1)

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


// ===== 002ac3f8  FUN_002ac3f8 =====

void FUN_002ac3f8(void *param_1)

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


// ===== 002ac454  FUN_002ac454 =====

void FUN_002ac454(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002ac4b4 to 002ac4c3 has its CatchHandler @ 002aca7c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002ac53c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002ac53c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002ac53c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395188 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395188), puVar3 = PTR_defaultValue_00395180,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395180 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395188);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002ac578 to 002ac587 has its CatchHandler @ 002ac784 */
    FUN_002accd0(auStack_110,param_3,uVar10);
                    /* try { // try from 002ac588 to 002ac593 has its CatchHandler @ 002ac76c */
    (*pcVar11)(plVar1,auStack_110);
    if ((local_108 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar5 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 0;
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
                    /* try { // try from 002ac638 to 002ac647 has its CatchHandler @ 002acc18 */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ac654 to 002ac667 has its CatchHandler @ 002acbf8 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002ac668 to 002ac67b has its CatchHandler @ 002acbe0 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002ac67c to 002ac687 has its CatchHandler @ 002acbb0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002ac688 to 002ac697 has its CatchHandler @ 002acb8c */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002ac698 to 002ac6ab has its CatchHandler @ 002acb68 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002ac6ac to 002ac6b7 has its CatchHandler @ 002acb44 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002ac6b8 to 002ac6c7 has its CatchHandler @ 002acb20 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002ac6c8 to 002ac6db has its CatchHandler @ 002acafc */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002ac6e0 to 002ac71b has its CatchHandler @ 002aca9c */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002acc40  FUN_002acc40 =====

void FUN_002acc40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395190) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002acc90  FUN_002acc90 =====

undefined * FUN_002acc90(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395198;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002accd0  FUN_002accd0 =====

void FUN_002accd0(long *param_1,long *param_2,IRuntime *param_3)

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
                    /* try { // try from 002acd14 to 002acd23 has its CatchHandler @ 002acf88 */
  (**(code **)(*param_2 + 0x160))(&local_68,param_2,&local_50);
  if ((local_68 == 0) ||
     (lVar2 = __dynamic_cast(local_68,PTR_typeinfo_00394860,PTR_typeinfo_00395338,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* try { // try from 002acdc4 to 002acdd3 has its CatchHandler @ 002acf70 */
    facebook::jsi::Value::toString(param_3);
                    /* try { // try from 002acddc to 002acdeb has its CatchHandler @ 002acf50 */
    (**(code **)(*param_2 + 0x120))(&local_68,param_2,local_80);
    if (local_80[0] != (undefined8 *)0x0) {
      (**(code **)*local_80[0])();
    }
                    /* try { // try from 002ace00 to 002ace13 has its CatchHandler @ 002acf38 */
    FUN_00264e5c(local_80,PTR_typeinfo_name_00395580,0);
    pJVar3 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ace20 to 002ace33 has its CatchHandler @ 002acf18 */
    std::__ndk1::operator+
              ("Downcasting failed - It has a different NativeState<T>!\n- Did you accidentally pass a different type?\n- Is react-native-nitro-modules linked multiple times? Ensure you don\'t have any duplicate symbols for `"
               ,(basic_string *)local_80);
                    /* try { // try from 002ace34 to 002ace47 has its CatchHandler @ 002acf00 */
    FUN_00263450(auStack_b0,auStack_c8,"` in your app\'s binary.");
                    /* try { // try from 002ace48 to 002ace57 has its CatchHandler @ 002aced0 */
    FUN_002ad048(auStack_98,&local_68,auStack_b0);
                    /* try { // try from 002ace5c to 002ace97 has its CatchHandler @ 002ace98 */
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


// ===== 002acfbc  FUN_002acfbc =====

void FUN_002acfbc(long *param_1)

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


// ===== 002ad048  FUN_002ad048 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ad048(undefined8 *param_1,byte *param_2,byte *param_3)

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
  local_60 = (undefined8 *)operator_new(0x40);
  puVar7 = PTR_typeinfo_name_00395580;
  uStack_68 = _UNK_001d8068;
  local_70 = _DAT_001d8060;
  uVar15 = *(undefined8 *)(PTR_typeinfo_name_00395580 + 8);
  uVar14 = *(undefined8 *)PTR_typeinfo_name_00395580;
  uVar13 = *(undefined8 *)(PTR_typeinfo_name_00395580 + 0x18);
  uVar12 = *(undefined8 *)(PTR_typeinfo_name_00395580 + 0x10);
  *(undefined2 *)(local_60 + 6) = 0x4563;
  *(undefined1 *)((long)local_60 + 0x32) = 0;
  local_60[1] = uVar15;
  *local_60 = uVar14;
  local_60[3] = uVar13;
  local_60[2] = uVar12;
  uVar12 = *(undefined8 *)(puVar7 + 0x20);
  local_60[5] = *(undefined8 *)(puVar7 + 0x28);
  local_60[4] = uVar12;
                    /* try { // try from 002ad0b8 to 002ad0c7 has its CatchHandler @ 002ad3b0 */
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
                    /* try { // try from 002ad124 to 002ad12b has its CatchHandler @ 002ad3c4 */
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
                    /* try { // try from 002ad188 to 002ad19b has its CatchHandler @ 002ad390 */
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
                    /* try { // try from 002ad1d4 to 002ad1db has its CatchHandler @ 002ad370 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_c0,(ulong)pvVar6);
    local_90 = (void *)puVar8[2];
    uStack_98 = puVar8[1];
    local_a0 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 002ad1f4 to 002ad207 has its CatchHandler @ 002ad350 */
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
                    /* try { // try from 002ad238 to 002ad23f has its CatchHandler @ 002ad30c */
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
                    /* try { // try from 002ad308 to 002ad30b has its CatchHandler @ 002ad3c4 */
    uVar12 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002ad238 with catch @ 002ad30c */
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


// ===== 002ad3f4  FUN_002ad3f4 =====

void FUN_002ad3f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f588;
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


// ===== 002ad460  FUN_002ad460 =====

void FUN_002ad460(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f588;
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


// ===== 002ad4c8  FUN_002ad4c8 =====

undefined8 * FUN_002ad4c8(long param_1)

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
  *puVar4 = &PTR_FUN_0037f588;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002ad528 to 002ad52b has its CatchHandler @ 002ad564 */
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


// ===== 002ad58c  FUN_002ad58c =====

void FUN_002ad58c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f588;
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


// ===== 002ad624  FUN_002ad624 =====

void FUN_002ad624(long param_1)

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


// ===== 002ad684  FUN_002ad684 =====

void FUN_002ad684(void *param_1)

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


// ===== 002ad6e0  FUN_002ad6e0 =====

void FUN_002ad6e0(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002ad73c to 002ad74b has its CatchHandler @ 002adcec */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002ad7c4;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002ad7c4;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002ad7c4:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395120
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395120
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395118
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395118
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395120
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002ad7fc to 002ad803 has its CatchHandler @ 002ad9f4 */
    (*pcVar9)(&local_110);
                    /* try { // try from 002ad808 to 002ad813 has its CatchHandler @ 002ad9dc */
    FUN_002adf40(param_1,param_3,local_110,local_108);
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
                    /* try { // try from 002ad8b4 to 002ad8c3 has its CatchHandler @ 002ade88 */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ad8d0 to 002ad8e3 has its CatchHandler @ 002ade68 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002ad8e4 to 002ad8f7 has its CatchHandler @ 002ade50 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 002ad8f8 to 002ad903 has its CatchHandler @ 002ade20 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002ad904 to 002ad913 has its CatchHandler @ 002addfc */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002ad914 to 002ad927 has its CatchHandler @ 002addd8 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002ad928 to 002ad933 has its CatchHandler @ 002addb4 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002ad934 to 002ad943 has its CatchHandler @ 002add90 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002ad944 to 002ad957 has its CatchHandler @ 002add6c */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002ad95c to 002ad997 has its CatchHandler @ 002add0c */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002adeb0  FUN_002adeb0 =====

void FUN_002adeb0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395170) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002adf00  FUN_002adf00 =====

undefined * FUN_002adf00(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395178;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002adf40  FUN_002adf40 =====

void FUN_002adf40(undefined8 param_1,Runtime *param_2,undefined1 *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  runtime_error *this;
  undefined1 auStack_b0 [24];
  basic_string abStack_98 [24];
  undefined **local_80;
  undefined1 *local_78;
  long *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 2) {
    FUN_0026aee4(&local_80,param_2);
                    /* try { // try from 002ae020 to 002ae02f has its CatchHandler @ 002ae1e8 */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_80);
LAB_002ae030:
    facebook::jsi::Value::~Value((Value *)&local_80);
  }
  else {
    if (iVar1 == 1) {
      local_80 = (undefined **)CONCAT44(local_80._4_4_,2);
      local_78 = (undefined1 *)CONCAT71(local_78._1_7_,*param_3);
                    /* try { // try from 002ae000 to 002ae00f has its CatchHandler @ 002ae1ec */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_80);
      goto LAB_002ae030;
    }
    if (iVar1 != 0) {
      FUN_00264e5c(&local_80,*(undefined8 *)(PTR_typeinfo_00395360 + 8),1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002ae0e0 to 002ae0f3 has its CatchHandler @ 002ae190 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_80);
                    /* try { // try from 002ae0f4 to 002ae107 has its CatchHandler @ 002ae178 */
      FUN_00263450(abStack_98,auStack_b0,"> has invalid state!");
                    /* try { // try from 002ae10c to 002ae143 has its CatchHandler @ 002ae144 */
      std::runtime_error::runtime_error(this,abStack_98);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ae210;
    }
    local_78 = param_3;
    if (param_4 == (long *)0x0) {
      local_70 = (long *)0x0;
      local_80 = &PTR_FUN_00382a88;
      local_60 = &local_80;
    }
    else {
      FUN_00259a00(1,param_4 + 1);
      local_80 = &PTR_FUN_00382a88;
      local_70 = param_4;
      FUN_00259a00(1,param_4 + 1);
      local_60 = &local_80;
      lVar3 = FUN_00255510(0xffffffffffffffff,param_4 + 1);
      if (lVar3 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 002ae054 to 002ae067 has its CatchHandler @ 002ae1b0 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_80);
    if (local_60 == &local_80) {
      lVar3 = 4;
      pppuVar4 = &local_80;
LAB_002ae088:
      (*(code *)(*pppuVar4)[lVar3])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar3 = 5;
      pppuVar4 = local_60;
      goto LAB_002ae088;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_002ae210:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ae214  FUN_002ae214 =====

void FUN_002ae214(long *param_1)

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


// ===== 002ae2a0  FUN_002ae2a0 =====

void FUN_002ae2a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00382a88;
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


// ===== 002ae338  FUN_002ae338 =====

void FUN_002ae338(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00382a88;
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


// ===== 002ae3c4  FUN_002ae3c4 =====

void FUN_002ae3c4(long param_1)

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
  *puVar4 = &PTR_FUN_00382a88;
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


// ===== 002ae43c  FUN_002ae43c =====

void FUN_002ae43c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00382a88;
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


// ===== 002ae4a0  FUN_002ae4a0 =====

void FUN_002ae4a0(long param_1)

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


// ===== 002ae52c  FUN_002ae52c =====

void FUN_002ae52c(void *param_1)

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


// ===== 002ae5ac  FUN_002ae5ac =====

void FUN_002ae5ac(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long **pplVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  void *pvVar15;
  long local_130 [4];
  long *local_110 [2];
  long local_100 [4];
  long *local_e0 [2];
  long local_d0 [4];
  long *local_b0 [2];
  long local_a0 [4];
  long *local_80 [2];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar12 = *param_5;
  FUN_002aee18(local_a0,param_3,lVar12);
  lVar13 = *(long *)(param_2 + 8);
  if (local_80[0] == (long *)0x0) {
    pplVar10 = local_e0;
LAB_002ae620:
    *pplVar10 = (long *)0x0;
  }
  else {
    if (local_80[0] != local_a0) {
      pplVar10 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_002ae620;
    }
    local_e0[0] = local_100;
                    /* try { // try from 002ae638 to 002ae643 has its CatchHandler @ 002aec38 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,local_100);
  }
  plVar7 = local_e0[0];
  local_b0[0] = (long *)0x0;
  if (local_e0[0] != (long *)0x0) {
                    /* try { // try from 002ae650 to 002ae657 has its CatchHandler @ 002aec44 */
    plVar4 = (long *)operator_new(0x40);
    *plVar4 = (long)&PTR_FUN_00382c18;
    if (plVar7 == local_100) {
      plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 002ae68c to 002ae69b has its CatchHandler @ 002aec34 */
      (**(code **)(local_100[0] + 0x18))(local_100);
      local_b0[0] = plVar4;
    }
    else {
      plVar4[6] = (long)plVar7;
      local_e0[0] = (long *)0x0;
      local_b0[0] = plVar4;
    }
  }
                    /* try { // try from 002ae6a0 to 002ae6a7 has its CatchHandler @ 002aec54 */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar13 + 8) == 1) {
    if (local_b0[0] != (long *)0x0) {
                    /* try { // try from 002ae6cc to 002ae77b has its CatchHandler @ 002aeccc */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar13);
LAB_002ae90c:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == local_d0) {
        lVar13 = 4;
        plVar7 = local_d0;
LAB_002ae938:
        (**(code **)(*plVar7 + lVar13 * 8))();
      }
      else if (local_b0[0] != (long *)0x0) {
        lVar13 = 5;
        plVar7 = local_b0[0];
        goto LAB_002ae938;
      }
      if (local_e0[0] == local_100) {
        lVar13 = 4;
        plVar7 = local_100;
LAB_002ae968:
        (**(code **)(*plVar7 + lVar13 * 8))();
      }
      else if (local_e0[0] != (long *)0x0) {
        lVar13 = 5;
        plVar7 = local_e0[0];
        goto LAB_002ae968;
      }
      if (local_80[0] == local_a0) {
        lVar13 = 4;
        plVar7 = local_a0;
LAB_002ae998:
        (**(code **)(*plVar7 + lVar13 * 8))();
      }
      else if (local_80[0] != (long *)0x0) {
        lVar13 = 5;
        plVar7 = local_80[0];
        goto LAB_002ae998;
      }
      FUN_0026c2bc(local_a0,param_3,lVar12 + 0x10);
      lVar12 = *(long *)(param_2 + 8);
      if (local_80[0] == (long *)0x0) {
        pplVar10 = local_110;
LAB_002ae9e0:
        *pplVar10 = (long *)0x0;
      }
      else {
        if (local_80[0] != local_a0) {
          pplVar10 = local_80;
          local_110[0] = local_80[0];
          goto LAB_002ae9e0;
        }
        local_110[0] = local_130;
                    /* try { // try from 002ae9f8 to 002aea03 has its CatchHandler @ 002aec30 */
        (**(code **)(local_a0[0] + 0x18))(local_a0,local_130);
      }
      plVar7 = local_110[0];
      local_b0[0] = (long *)0x0;
      if (local_110[0] != (long *)0x0) {
                    /* try { // try from 002aea10 to 002aea17 has its CatchHandler @ 002aec3c */
        plVar4 = (long *)operator_new(0x40);
        *plVar4 = (long)&PTR_FUN_00384d40;
        if (plVar7 == local_130) {
          plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 002aea4c to 002aea5b has its CatchHandler @ 002aec2c */
          (**(code **)(local_130[0] + 0x18))(local_130);
          local_b0[0] = plVar4;
        }
        else {
          plVar4[6] = (long)plVar7;
          local_110[0] = (long *)0x0;
          local_b0[0] = plVar4;
        }
      }
                    /* try { // try from 002aea60 to 002aea67 has its CatchHandler @ 002aec4c */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar12 + 8) == 2) {
        if (local_b0[0] == (long *)0x0) goto LAB_002aebe4;
                    /* try { // try from 002aea84 to 002aeac7 has its CatchHandler @ 002aec60 */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar12);
      }
      else {
        uVar2 = *(ulong *)(lVar12 + 0x30);
        if (uVar2 < *(ulong *)(lVar12 + 0x38)) {
          if (local_b0[0] == (long *)0x0) {
            pplVar10 = (long **)(uVar2 + 0x20);
LAB_002aead0:
            *pplVar10 = (long *)0x0;
          }
          else {
            if (local_b0[0] != local_d0) {
              pplVar10 = local_b0;
              *(long **)(uVar2 + 0x20) = local_b0[0];
              goto LAB_002aead0;
            }
            *(ulong *)(uVar2 + 0x20) = uVar2;
                    /* try { // try from 002aeae8 to 002aeaef has its CatchHandler @ 002aec20 */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar2);
          }
          lVar13 = uVar2 + 0x30;
        }
        else {
          lVar13 = FUN_0026c714(lVar12 + 0x28,local_d0);
        }
        *(long *)(lVar12 + 0x30) = lVar13;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == local_d0) {
        lVar12 = 4;
        plVar7 = local_d0;
LAB_002aeb24:
        (**(code **)(*plVar7 + lVar12 * 8))();
      }
      else if (local_b0[0] != (long *)0x0) {
        lVar12 = 5;
        plVar7 = local_b0[0];
        goto LAB_002aeb24;
      }
      if (local_110[0] == local_130) {
        lVar12 = 4;
        plVar7 = local_130;
LAB_002aeb54:
        (**(code **)(*plVar7 + lVar12 * 8))();
      }
      else if (local_110[0] != (long *)0x0) {
        lVar12 = 5;
        plVar7 = local_110[0];
        goto LAB_002aeb54;
      }
      *param_1 = 0;
      if (local_80[0] == local_a0) {
        lVar12 = 4;
        local_80[0] = local_a0;
LAB_002aeb88:
        (**(code **)(*local_80[0] + lVar12 * 8))();
      }
      else if (local_80[0] != (long *)0x0) {
        lVar12 = 5;
        goto LAB_002aeb88;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_002aed84;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002aed84;
                    /* try { // try from 002aebe0 to 002aebe3 has its CatchHandler @ 002aeccc */
    FUN_0025cd00();
LAB_002aebe4:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002aed84;
                    /* try { // try from 002aebf4 to 002aebf7 has its CatchHandler @ 002aec60 */
    FUN_0025cd00();
LAB_002aebf8:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002aed84;
                    /* try { // try from 002aec08 to 002aec1f has its CatchHandler @ 002aeccc */
    FUN_002af270();
  }
  else {
    plVar7 = *(long **)(lVar13 + 0x18);
    pplVar10 = local_b0;
    if (plVar7 < *(long **)(lVar13 + 0x20)) {
      if (local_b0[0] == (long *)0x0) {
        pplVar10 = (long **)(plVar7 + 4);
LAB_002ae788:
        *pplVar10 = (long *)0x0;
      }
      else {
        if (local_b0[0] != local_d0) {
          plVar7[4] = (long)local_b0[0];
          goto LAB_002ae788;
        }
        plVar7[4] = (long)plVar7;
                    /* try { // try from 002ae7d8 to 002ae7df has its CatchHandler @ 002aec28 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],plVar7);
      }
      plVar4 = plVar7 + 6;
LAB_002ae908:
      *(long **)(lVar13 + 0x18) = plVar4;
      goto LAB_002ae90c;
    }
    plVar14 = *(long **)(lVar13 + 0x10);
    lVar9 = (long)plVar7 - (long)plVar14 >> 4;
    uVar2 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar2) goto LAB_002aebf8;
    lVar8 = (long)*(long **)(lVar13 + 0x20) - (long)plVar14 >> 4;
    uVar11 = lVar8 * 0x5555555555555556;
    if (uVar11 < uVar2 || uVar11 - uVar2 == 0) {
      uVar11 = uVar2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar11 = 0x555555555555555;
    }
    if (uVar11 == 0) {
      pvVar5 = (void *)0x0;
LAB_002ae794:
      pvVar15 = (void *)((long)pvVar5 + lVar9 * 0x10);
      if (local_b0[0] == (long *)0x0) {
        pplVar10 = (long **)((long)pvVar15 + 0x20);
LAB_002ae7c0:
        *pplVar10 = (long *)0x0;
      }
      else {
        if (local_b0[0] != local_d0) {
          *(long **)((long)pvVar15 + 0x20) = local_b0[0];
          goto LAB_002ae7c0;
        }
        *(void **)((long)pvVar15 + 0x20) = pvVar15;
                    /* try { // try from 002ae7fc to 002ae807 has its CatchHandler @ 002aec24 */
        (**(code **)(local_d0[0] + 0x18))(local_d0,pvVar15);
        plVar14 = *(long **)(lVar13 + 0x10);
        plVar7 = *(long **)(lVar13 + 0x18);
      }
      pvVar5 = (void *)((long)pvVar5 + uVar11 * 0x30);
      plVar4 = (long *)((long)pvVar15 + 0x30);
      if (plVar7 == plVar14) {
        *(void **)(lVar13 + 0x10) = pvVar15;
        *(long **)(lVar13 + 0x18) = plVar4;
        *(void **)(lVar13 + 0x20) = pvVar5;
      }
      else {
        lVar9 = 0;
        plVar6 = plVar7;
        do {
          plVar1 = (long *)((long)pvVar15 + lVar9);
          lVar8 = *(long *)((long)plVar7 + lVar9 + -0x10);
          if (lVar8 == 0) {
LAB_002ae838:
            plVar1[-2] = 0;
          }
          else {
            if ((long)plVar7 + lVar9 + -0x30 != lVar8) {
              plVar1[-2] = lVar8;
              plVar1 = plVar6;
              goto LAB_002ae838;
            }
            plVar1[-2] = (long)(plVar1 + -6);
                    /* try { // try from 002ae88c to 002ae88f has its CatchHandler @ 002aec5c */
            (**(code **)(**(long **)((long)plVar7 + lVar9 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          plVar6 = plVar6 + -6;
        } while ((long *)((long)plVar7 + lVar9) != plVar14);
        plVar14 = *(long **)(lVar13 + 0x10);
        plVar7 = *(long **)(lVar13 + 0x18);
        *(long *)(lVar13 + 0x10) = (long)pvVar15 + lVar9;
        *(long **)(lVar13 + 0x18) = plVar4;
        *(void **)(lVar13 + 0x20) = pvVar5;
joined_r0x002ae8a8:
        if (plVar7 != plVar14) {
          plVar6 = (long *)plVar7[-2];
          plVar7 = plVar7 + -6;
          if (plVar7 != plVar6) goto code_r0x002ae8e4;
          lVar9 = 4;
          plVar6 = plVar7;
          goto LAB_002ae8bc;
        }
      }
      if (plVar14 != (long *)0x0) {
        operator_delete(plVar14);
      }
      goto LAB_002ae908;
    }
    if (uVar11 < 0x555555555555556) {
      pvVar5 = operator_new(uVar11 * 0x30);
      goto LAB_002ae794;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 002aeae8 with catch @ 002aec20 */
    FUN_0025ad9c();
  }
LAB_002aed84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x002ae8e4:
  if (plVar6 != (long *)0x0) {
    lVar9 = 5;
LAB_002ae8bc:
    (**(code **)(*plVar6 + lVar9 * 8))();
  }
  goto joined_r0x002ae8a8;
}


// ===== 002aed88  FUN_002aed88 =====

void FUN_002aed88(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395160) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002aedd8  FUN_002aedd8 =====

undefined * FUN_002aedd8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395168;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002aee18  FUN_002aee18 =====

void FUN_002aee18(long param_1,Runtime *param_2,IRuntime *param_3)

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
                    /* try { // try from 002aee54 to 002aee63 has its CatchHandler @ 002af250 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_98);
  if (local_98 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_98)();
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
                    /* try { // try from 002aee7c to 002aee87 has its CatchHandler @ 002af214 */
  margelo::nitro::JSICache::getOrCreateCache(param_2);
                    /* try { // try from 002aee8c to 002aee97 has its CatchHandler @ 002af204 */
  FUN_0026ce4c(&local_80,local_98,&local_60);
                    /* try { // try from 002aee98 to 002aeea3 has its CatchHandler @ 002af1f4 */
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
        goto LAB_002aef04;
      }
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    else {
LAB_002aef04:
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
                    /* try { // try from 002aef84 to 002aef8f has its CatchHandler @ 002af1e4 */
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
                    /* try { // try from 002aefc8 to 002aefcf has its CatchHandler @ 002af1c0 */
  puVar7 = (undefined8 *)operator_new(0x30);
  puVar7[2] = plVar4;
  puVar7[3] = plVar5;
  *puVar7 = &PTR_FUN_00382af8;
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
        goto LAB_002af090;
      }
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    else {
LAB_002af090:
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    local_88 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_68 == (long *)0x0) goto LAB_002af150;
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
      goto LAB_002af120;
    }
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  else {
LAB_002af120:
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  local_68 = plVar2;
  if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
    std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
    operator_delete(plVar2);
  }
LAB_002af150:
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af270  FUN_002af270 =====

void FUN_002af270(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af2a8  FUN_002af2a8 =====

void FUN_002af2a8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00382c18;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_002af334;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x002af314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002af334:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af338  FUN_002af338 =====

void FUN_002af338(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00382c18;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002af394;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002af394:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af3bc  FUN_002af3bc =====

undefined8 * FUN_002af3bc(long param_1)

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
  *puVar2 = &PTR_FUN_00382c18;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_002af434;
    }
                    /* try { // try from 002af418 to 002af433 has its CatchHandler @ 002af45c */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_002af434:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af484  FUN_002af484 =====

void FUN_002af484(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00382c18;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x002af52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_002af530;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_002af530:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af534  FUN_002af534 =====

void FUN_002af534(long param_1)

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
      goto LAB_002af5b4;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002af594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002af5b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af5b8  FUN_002af5b8 =====

void FUN_002af5b8(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_002af608;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002af608:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af630  FUN_002af630 =====

void FUN_002af630(long param_1,undefined1 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = *param_2;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_0025cd00();
    }
  }
  else {
    (**(code **)(*plVar2 + 0x30))(plVar2,local_2c);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af6a4  FUN_002af6a4 =====

void FUN_002af6a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395150) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002af6f4  FUN_002af6f4 =====

undefined * FUN_002af6f4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395158;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002af734  FUN_002af734 =====

void FUN_002af734(long param_1)

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


// ===== 002af788  FUN_002af788 =====

void FUN_002af788(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382af8;
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


// ===== 002af7e8  FUN_002af7e8 =====

void FUN_002af7e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382af8;
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


// ===== 002af850  FUN_002af850 =====

undefined8 * FUN_002af850(long param_1)

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
  *puVar2 = &PTR_FUN_00382af8;
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


// ===== 002af8ec  FUN_002af8ec =====

void FUN_002af8ec(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00382af8;
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


// ===== 002af980  FUN_002af980 =====

void FUN_002af980(long param_1)

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


// ===== 002af9d4  FUN_002af9d4 =====

void FUN_002af9d4(void *param_1)

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


// ===== 002afa30  FUN_002afa30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002afa30(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined1 local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar4 = (long *)0x0;
LAB_002afb08:
                    /* try { // try from 002afb08 to 002afb0f has its CatchHandler @ 002afc48 */
    local_70 = (undefined8 *)operator_new(0x30);
    puVar3 = PTR_typeinfo_name_00395128;
    uStack_78 = _UNK_001d7ff8;
    local_80 = _DAT_001d7ff0;
    *(undefined1 *)((long)local_70 + 0x27) = 0;
    uVar9 = *(undefined8 *)puVar3;
    uVar11 = *(undefined8 *)(puVar3 + 0x18);
    uVar10 = *(undefined8 *)(puVar3 + 0x10);
    uVar7 = *(undefined8 *)(puVar3 + 0x1f);
    local_70[1] = *(undefined8 *)(puVar3 + 8);
    *local_70 = uVar9;
    local_70[3] = uVar11;
    local_70[2] = uVar10;
    *(undefined8 *)((long)local_70 + 0x1f) = uVar7;
                    /* try { // try from 002afb3c to 002afb4b has its CatchHandler @ 002afc30 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (plVar4 == (long *)0x0) goto LAB_002afbc0;
  }
  else {
    uVar1 = *param_2;
    plVar4 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar4 == (long *)0x0) || (plVar8 = *(long **)(param_1 + 0x20), plVar8 == (long *)0x0))
    goto LAB_002afb08;
    uStack_98 = *(ulong *)(param_1 + 0x10);
    local_a0 = *(ulong *)(param_1 + 8);
    local_90 = *(void **)(param_1 + 0x18);
    if (local_90 != (void *)0x0) {
      FUN_00255510(1);
    }
    local_60 = (ulong *)0x0;
    local_88 = uVar1;
                    /* try { // try from 002afaa4 to 002afaab has its CatchHandler @ 002afc20 */
    local_60 = (ulong *)operator_new(0x28);
    *local_60 = (ulong)&PTR_FUN_00382b88;
    local_60[2] = uStack_98;
    local_60[1] = local_a0;
    local_60[3] = (ulong)local_90;
    *(undefined8 *)((ulong)&local_a0 | 8) = 0;
    ((undefined8 *)((ulong)&local_a0 | 8))[1] = 0;
    *(undefined1 *)(local_60 + 4) = uVar1;
                    /* try { // try from 002afadc to 002afaeb has its CatchHandler @ 002afbe8 */
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_80);
    if (local_60 == &local_80) {
      lVar6 = 4;
      puVar5 = &local_80;
LAB_002afb8c:
      (**(code **)(*puVar5 + lVar6 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar6 = 5;
      puVar5 = local_60;
      goto LAB_002afb8c;
    }
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar4 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_002afbc0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002afc70  FUN_002afc70 =====

void FUN_002afc70(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395128) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002afcc0  FUN_002afcc0 =====

undefined * FUN_002afcc0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395130;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002afd00  FUN_002afd00 =====

void FUN_002afd00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382b88;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 + 2);
}


// ===== 002afd44  FUN_002afd44 =====

void FUN_002afd44(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382b88;
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002afd9c  FUN_002afd9c =====

void FUN_002afd9c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_00382b88;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002afe28  FUN_002afe28 =====

void FUN_002afe28(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00382b88;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002afeac  FUN_002afeac =====

void FUN_002afeac(long param_1)

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


// ===== 002afee8  FUN_002afee8 =====

void FUN_002afee8(void *param_1)

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


// ===== 002aff38  FUN_002aff38 =====

void FUN_002aff38(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  runtime_error *this;
  undefined4 local_90 [2];
  undefined1 local_88;
  Value aVStack_80 [24];
  undefined4 local_68 [6];
  Value aVStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) == 0) {
      plVar1 = *(long **)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      local_90[0] = 2;
      local_88 = *(undefined1 *)(param_1 + 0x20);
      facebook::jsi::Value::Value(aVStack_50,(Value *)local_90);
      local_68[0] = 0;
                    /* try { // try from 002aff9c to 002affb7 has its CatchHandler @ 002b0080 */
      (**(code **)(*plVar1 + 0x280))(aVStack_80,plVar1,uVar2,local_68,aVStack_50,1);
      facebook::jsi::Value::~Value((Value *)local_68);
      facebook::jsi::Value::~Value(aVStack_50);
      facebook::jsi::Value::~Value((Value *)local_90);
      facebook::jsi::Value::~Value(aVStack_80);
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_002b0120;
    }
  }
  FUN_00264e5c(local_68,PTR_typeinfo_name_00395138,1);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002b001c to 002b002f has its CatchHandler @ 002b00ec */
  std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 002b0030 to 002b0043 has its CatchHandler @ 002b00d4 */
  FUN_00263450(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!");
                    /* try { // try from 002b0048 to 002b007f has its CatchHandler @ 002b00a0 */
  std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
  }
LAB_002b0120:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b0124  FUN_002b0124 =====

void FUN_002b0124(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395140) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b0174  FUN_002b0174 =====

undefined * FUN_002b0174(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395148;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b01b4  FUN_002b01b4 =====

void FUN_002b01b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f508;
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


// ===== 002b0220  FUN_002b0220 =====

void FUN_002b0220(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f508;
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


// ===== 002b0288  FUN_002b0288 =====

undefined8 * FUN_002b0288(long param_1)

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
  *puVar4 = &PTR_FUN_0037f508;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b02e8 to 002b02eb has its CatchHandler @ 002b0324 */
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


// ===== 002b034c  FUN_002b034c =====

void FUN_002b034c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f508;
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


// ===== 002b03e4  FUN_002b03e4 =====

void FUN_002b03e4(long param_1)

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


// ===== 002b0444  FUN_002b0444 =====

void FUN_002b0444(void *param_1)

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


// ===== 002b04a0  FUN_002b04a0 =====

void FUN_002b04a0(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 *local_b8 [3];
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_b8[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002b0500 to 002b050f has its CatchHandler @ 002b0aec */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_b8);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_002b055c;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_002b055c:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_b8[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 002b0684 to 002b0693 has its CatchHandler @ 002b0c88 */
    FUN_002a21c4(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b06a0 to 002b06b3 has its CatchHandler @ 002b0c68 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002b06b4 to 002b06c7 has its CatchHandler @ 002b0c50 */
    FUN_00263450(auStack_118,auStack_130,"` expected ");
                    /* try { // try from 002b06c8 to 002b06d3 has its CatchHandler @ 002b0c20 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002b06d4 to 002b06e3 has its CatchHandler @ 002b0bfc */
    FUN_00264adc(auStack_100,auStack_118,auStack_148);
                    /* try { // try from 002b06e4 to 002b06f7 has its CatchHandler @ 002b0bd8 */
    FUN_00263450(auStack_e8,auStack_100," arguments, but received ");
                    /* try { // try from 002b06f8 to 002b0703 has its CatchHandler @ 002b0bb4 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002b0704 to 002b0713 has its CatchHandler @ 002b0b90 */
    FUN_00264adc(auStack_d0,auStack_e8,auStack_160);
                    /* try { // try from 002b0714 to 002b0727 has its CatchHandler @ 002b0b6c */
    FUN_00263450(local_b8,auStack_d0,&DAT_001d5be0);
                    /* try { // try from 002b072c to 002b0767 has its CatchHandler @ 002b0b0c */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b8);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002b0cac;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*PTR_defaultValue_003950d8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003950d8), puVar3 = PTR_defaultValue_003950d0,
     iVar4 != 0)) {
    *(undefined4 *)PTR_defaultValue_003950d0 = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(PTR_defaultValue_003950d8);
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 002b05c4 to 002b05d3 has its CatchHandler @ 002b07f4 */
  FUN_002b0d40(&local_a0,param_3,uVar10);
                    /* try { // try from 002b05d4 to 002b05e3 has its CatchHandler @ 002b07b8 */
  (*pcVar11)(plVar1,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_002b0604:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_002b0604;
  }
  *param_1 = 0;
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_002b0cac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b0cb0  FUN_002b0cb0 =====

void FUN_002b0cb0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395108) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b0d00  FUN_002b0d00 =====

undefined * FUN_002b0d00(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395110;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b0d40  FUN_002b0d40 =====

void FUN_002b0d40(long param_1,Runtime *param_2,IRuntime *param_3)

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
                    /* try { // try from 002b0d7c to 002b0d8b has its CatchHandler @ 002b1178 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_98);
  if (local_98 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_98)();
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
                    /* try { // try from 002b0da4 to 002b0daf has its CatchHandler @ 002b113c */
  margelo::nitro::JSICache::getOrCreateCache(param_2);
                    /* try { // try from 002b0db4 to 002b0dbf has its CatchHandler @ 002b112c */
  FUN_0026ce4c(&local_80,local_98,&local_60);
                    /* try { // try from 002b0dc0 to 002b0dcb has its CatchHandler @ 002b111c */
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
        goto LAB_002b0e2c;
      }
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    else {
LAB_002b0e2c:
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
                    /* try { // try from 002b0eac to 002b0eb7 has its CatchHandler @ 002b110c */
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
                    /* try { // try from 002b0ef0 to 002b0ef7 has its CatchHandler @ 002b10e8 */
  puVar7 = (undefined8 *)operator_new(0x30);
  puVar7[2] = plVar4;
  puVar7[3] = plVar5;
  *puVar7 = &PTR_FUN_00380048;
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
        goto LAB_002b0fb8;
      }
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    else {
LAB_002b0fb8:
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    local_88 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_68 == (long *)0x0) goto LAB_002b1078;
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
      goto LAB_002b1048;
    }
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  else {
LAB_002b1048:
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  local_68 = plVar2;
  if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
    std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
    operator_delete(plVar2);
  }
LAB_002b1078:
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1198  FUN_002b1198 =====

void FUN_002b1198(long param_1)

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


// ===== 002b11ec  FUN_002b11ec =====

void FUN_002b11ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380048;
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


// ===== 002b124c  FUN_002b124c =====

void FUN_002b124c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380048;
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


// ===== 002b12b4  FUN_002b12b4 =====

undefined8 * FUN_002b12b4(long param_1)

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
  *puVar2 = &PTR_FUN_00380048;
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


// ===== 002b1350  FUN_002b1350 =====

void FUN_002b1350(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00380048;
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


// ===== 002b13e4  FUN_002b13e4 =====

void FUN_002b13e4(long param_1)

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


// ===== 002b1438  FUN_002b1438 =====

void FUN_002b1438(void *param_1)

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


// ===== 002b1494  FUN_002b1494 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b1494(long param_1,ulong *param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong local_c0;
  long *plStack_b8;
  long *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined4 local_90;
  byte local_80 [16];
  void *local_70;
  byte *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar3 = (long *)0x0;
LAB_002b1520:
                    /* try { // try from 002b1520 to 002b1527 has its CatchHandler @ 002b17b0 */
    local_b0 = (long *)operator_new(0x40);
    puVar2 = PTR_typeinfo_name_003950e0;
    plStack_b8 = _UNK_001d8128;
    local_c0 = _DAT_001d8120;
    *(undefined1 *)((long)local_b0 + 0x3c) = 0;
    lVar9 = *(long *)puVar2;
    lVar13 = *(long *)(puVar2 + 0x18);
    lVar12 = *(long *)(puVar2 + 0x10);
    lVar8 = *(long *)(puVar2 + 0x28);
    lVar6 = *(long *)(puVar2 + 0x20);
    local_b0[1] = *(long *)(puVar2 + 8);
    *local_b0 = lVar9;
    local_b0[3] = lVar13;
    local_b0[2] = lVar12;
    uVar11 = *(undefined8 *)(puVar2 + 0x34);
    uVar10 = *(undefined8 *)(puVar2 + 0x2c);
    local_b0[5] = lVar8;
    local_b0[4] = lVar6;
    *(undefined8 *)((long)local_b0 + 0x34) = uVar11;
    *(undefined8 *)((long)local_b0 + 0x2c) = uVar10;
                    /* try { // try from 002b155c to 002b156b has its CatchHandler @ 002b1798 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_c0,true);
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (plVar3 == (long *)0x0) goto LAB_002b1718;
  }
  else {
    plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar3 == (long *)0x0) || (plVar7 = *(long **)(param_1 + 0x20), plVar7 == (long *)0x0))
    goto LAB_002b1520;
    plStack_b8 = *(long **)(param_1 + 0x10);
    local_c0 = *(ulong *)(param_1 + 8);
    local_b0 = *(long **)(param_1 + 0x18);
    if (local_b0 != (long *)0x0) {
      FUN_00255510(1);
    }
    if ((*param_2 & 1) == 0) {
      uStack_a0 = param_2[1];
      local_a8 = *param_2;
      local_98 = (void *)param_2[2];
    }
    else {
                    /* try { // try from 002b15a8 to 002b15af has its CatchHandler @ 002b1740 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)param_2[2],param_2[1]);
    }
    uVar5 = param_2[3];
    local_60 = (byte *)0x0;
    local_90 = (int)uVar5;
                    /* try { // try from 002b15bc to 002b15c3 has its CatchHandler @ 002b1788 */
    local_60 = (byte *)operator_new(0x40);
    *(undefined ***)local_60 = &PTR_FUN_003800c8;
    *(long **)(local_60 + 0x10) = plStack_b8;
    *(ulong *)(local_60 + 8) = local_c0;
    *(long **)(local_60 + 0x18) = local_b0;
    *(undefined8 *)((ulong)&local_c0 | 8) = 0;
    ((undefined8 *)((ulong)&local_c0 | 8))[1] = 0;
    *(ulong *)(local_60 + 0x28) = uStack_a0;
    *(ulong *)(local_60 + 0x20) = local_a8;
    *(void **)(local_60 + 0x30) = local_98;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    *(int *)(local_60 + 0x38) = (int)uVar5;
                    /* try { // try from 002b160c to 002b161b has its CatchHandler @ 002b1750 */
    (**(code **)(*plVar7 + 0x18))(plVar7,local_80);
    if (local_60 == local_80) {
      lVar6 = 4;
      pbVar4 = local_80;
LAB_002b163c:
      (**(code **)(*(long *)pbVar4 + lVar6 * 8))();
    }
    else if (local_60 != (byte *)0x0) {
      lVar6 = 5;
      pbVar4 = local_60;
      goto LAB_002b163c;
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_b0 != (long *)0x0) {
      uVar5 = FUN_00255510(0xffffffffffffffff);
      plVar7 = plStack_b8;
      if ((uVar5 < 2) && ((*(byte *)(local_b0 + 2) & 1) == 0)) {
        if (plStack_b8 != (long *)0x0) {
          if ((undefined8 *)*plStack_b8 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plStack_b8)();
          }
          operator_delete(plVar7);
        }
        plStack_b8 = (long *)0x0;
        *(undefined4 *)(local_b0 + 2) = 1;
      }
      plVar7 = local_b0;
      if ((*local_b0 == 0) && (local_b0[1] == 0)) {
        if (local_b0 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)local_b0 + 0x14));
          operator_delete(plVar7);
        }
        local_b0 = (long *)0x0;
      }
    }
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_002b1718:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b17d8  FUN_002b17d8 =====

void FUN_002b17d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003950e0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b1828  FUN_002b1828 =====

undefined * FUN_002b1828(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003950e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1868  FUN_002b1868 =====

void FUN_002b1868(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b18c0  FUN_002b18c0 =====

void FUN_002b18c0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003800c8;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1924  FUN_002b1924 =====

void FUN_002b1924(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003800c8;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1990  FUN_002b1990 =====

undefined8 * FUN_002b1990(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_003800c8;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = uVar6;
    puVar2[6] = uVar5;
  }
  else {
                    /* try { // try from 002b1a0c to 002b1a13 has its CatchHandler @ 002b1a44 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1a74  FUN_002b1a74 =====

void FUN_002b1a74(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003800c8;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar5;
    param_2[4] = uVar4;
  }
  else {
                    /* try { // try from 002b1af4 to 002b1afb has its CatchHandler @ 002b1b28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x38);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1b50  FUN_002b1b50 =====

void FUN_002b1b50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1ba8  FUN_002b1ba8 =====

void FUN_002b1ba8(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1c08  FUN_002b1c08 =====

void FUN_002b1c08(long param_1)

{
  ulong uVar1;
  Runtime *pRVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  runtime_error *this;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  Value aVStack_a0 [24];
  uint local_88;
  undefined1 uStack_84;
  undefined1 local_83;
  undefined2 uStack_82;
  undefined1 local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60 [2];
  double local_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
    FUN_00264e5c(&local_88,PTR_typeinfo_name_003950f0,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002b1e20 to 002b1e33 has its CatchHandler @ 002b1f38 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)&local_88);
                    /* try { // try from 002b1e34 to 002b1e47 has its CatchHandler @ 002b1f20 */
    FUN_00263450(local_60,aVStack_a0," - the underlying `jsi::Function` has already been deleted!");
                    /* try { // try from 002b1e4c to 002b1e83 has its CatchHandler @ 002b1eec */
    std::runtime_error::runtime_error(this,(basic_string *)local_60);
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    pRVar2 = *(Runtime **)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    (**(code **)(*(long *)pRVar2 + 0x130))(&local_70,pRVar2);
    local_80 = 0;
    local_88 = 0x73656d0e;
    uStack_84 = 0x73;
    local_83 = 0x61;
    uStack_82 = 0x6567;
                    /* try { // try from 002b1c84 to 002b1c8f has its CatchHandler @ 002b1ec0 */
    uVar6 = margelo::nitro::PropNameIDCache::get(pRVar2,(basic_string *)&local_88);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x20) >> 1);
    lVar5 = param_1 + 0x21;
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x30);
    }
                    /* try { // try from 002b1cb8 to 002b1cc3 has its CatchHandler @ 002b1ebc */
    (**(code **)(*(long *)pRVar2 + 0x110))(&local_68,pRVar2,lVar5,uVar1);
    local_60[0] = 6;
    local_58 = (double)local_68;
                    /* try { // try from 002b1cdc to 002b1cef has its CatchHandler @ 002b1eac */
    (**(code **)(*(long *)pRVar2 + 0x1b0))(pRVar2,&local_70,uVar6,local_60);
    facebook::jsi::Value::~Value((Value *)local_60);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    local_83 = 0;
    local_88 = 0x70797408;
    uStack_84 = 0x65;
                    /* try { // try from 002b1d20 to 002b1d2b has its CatchHandler @ 002b1ea8 */
    uVar6 = margelo::nitro::PropNameIDCache::get(pRVar2,(basic_string *)&local_88);
    local_58 = (double)*(int *)(param_1 + 0x38);
    local_60[0] = 3;
                    /* try { // try from 002b1d4c to 002b1d5b has its CatchHandler @ 002b1ea4 */
    (**(code **)(*(long *)pRVar2 + 0x1b0))(pRVar2,&local_70,uVar6,local_60);
    facebook::jsi::Value::~Value((Value *)local_60);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    local_b0[0] = 7;
    local_a8 = local_70;
    facebook::jsi::Value::Value((Value *)local_60,(Value *)local_b0);
    local_88 = 0;
                    /* try { // try from 002b1d9c to 002b1db7 has its CatchHandler @ 002b1e84 */
    (**(code **)(*(long *)pRVar2 + 0x280))(aVStack_a0,pRVar2,uVar3,&local_88,local_60,1);
    facebook::jsi::Value::~Value((Value *)&local_88);
    facebook::jsi::Value::~Value((Value *)local_60);
    facebook::jsi::Value::~Value((Value *)local_b0);
    facebook::jsi::Value::~Value(aVStack_a0);
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b1f70  FUN_002b1f70 =====

void FUN_002b1f70(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003950f8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b1fc0  FUN_002b1fc0 =====

undefined * FUN_002b1fc0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395100;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b2000  FUN_002b2000 =====

void FUN_002b2000(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f408;
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


// ===== 002b206c  FUN_002b206c =====

void FUN_002b206c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f408;
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


// ===== 002b20d4  FUN_002b20d4 =====

undefined8 * FUN_002b20d4(long param_1)

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
  *puVar4 = &PTR_FUN_0037f408;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b2134 to 002b2137 has its CatchHandler @ 002b2170 */
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


// ===== 002b2198  FUN_002b2198 =====

void FUN_002b2198(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f408;
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


// ===== 002b2230  FUN_002b2230 =====

void FUN_002b2230(long param_1)

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


// ===== 002b2290  FUN_002b2290 =====

void FUN_002b2290(void *param_1)

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


// ===== 002b22ec  FUN_002b22ec =====

void FUN_002b22ec(undefined4 *param_1,long param_2,Runtime *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  JSError *pJVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 ***pppuVar11;
  long *plVar12;
  ulong uVar13;
  code *pcVar14;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 local_190 [3];
  basic_string local_178;
  char local_177 [8];
  undefined4 local_16f;
  undefined1 local_16b;
  void *local_168;
  long local_160 [4];
  long *local_140 [2];
  undefined8 *local_130 [4];
  undefined8 **local_110 [2];
  long local_100 [4];
  long *local_e0 [2];
  undefined8 *local_d0 [4];
  undefined8 **local_b0 [2];
  undefined8 *local_a0;
  long *plStack_98;
  undefined8 **local_80 [3];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar13 = *param_6;
  local_d0[0] = (undefined8 *)
                (**(code **)(*(long *)param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002b2348 to 002b2357 has its CatchHandler @ 002b2c7c */
  (**(code **)(*(long *)param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == (undefined8 *)0x0) ||
     (lVar4 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar12 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_002b23a4;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar12 = plStack_98;
LAB_002b23a4:
    lVar5 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar13 != 0) {
                    /* try { // try from 002b2740 to 002b274f has its CatchHandler @ 002b2e1c */
    FUN_002a21c4(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b275c to 002b276f has its CatchHandler @ 002b2dfc */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002b2770 to 002b2783 has its CatchHandler @ 002b2de4 */
    FUN_00263450(&local_178,local_190,"` expected ");
                    /* try { // try from 002b2784 to 002b278f has its CatchHandler @ 002b2db4 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002b2790 to 002b279f has its CatchHandler @ 002b2d90 */
    FUN_00264adc(local_160,&local_178,auStack_1a8);
                    /* try { // try from 002b27a0 to 002b27b3 has its CatchHandler @ 002b2d6c */
    FUN_00263450(local_130,local_160," arguments, but received ");
                    /* try { // try from 002b27b4 to 002b27bf has its CatchHandler @ 002b2d48 */
    std::__ndk1::to_string(uVar13);
                    /* try { // try from 002b27c0 to 002b27cf has its CatchHandler @ 002b2d24 */
    FUN_00264adc(local_100,local_130,auStack_1c0);
                    /* try { // try from 002b27d0 to 002b27e3 has its CatchHandler @ 002b2cfc */
    FUN_00263450(local_d0,local_100,&DAT_001d5be0);
                    /* try { // try from 002b27e8 to 002b2823 has its CatchHandler @ 002b2c9c */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002b2e40;
  }
  pcVar14 = *(code **)(param_2 + 0x20);
  uVar13 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18functionIFvRKNS3_9RiveErrorEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003950a8
       & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18functionIFvRKNS3_9RiveErrorEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003950a8
                                 ),
     puVar2 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18functionIFvRKNS3_9RiveErrorEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003950a0
     , iVar3 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18functionIFvRKNS3_9RiveErrorEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003950a0
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18functionIFvRKNS3_9RiveErrorEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003950a8
                       );
  }
  if ((uVar13 & 1) != 0) {
    pcVar14 = *(code **)(pcVar14 + *(long *)(lVar4 + ((long)uVar13 >> 1)));
  }
                    /* try { // try from 002b2408 to 002b2413 has its CatchHandler @ 002b2988 */
  (*pcVar14)(local_160);
  if (local_140[0] == (long *)0x0) {
    pplVar10 = local_e0;
LAB_002b243c:
    *pplVar10 = (long *)0x0;
  }
  else {
    if (local_140[0] != local_160) {
      pplVar10 = local_140;
      local_e0[0] = local_140[0];
      goto LAB_002b243c;
    }
    local_e0[0] = local_100;
                    /* try { // try from 002b2454 to 002b245f has its CatchHandler @ 002b2874 */
    (**(code **)(local_160[0] + 0x18))(local_160,local_100);
  }
  local_b0[0] = (undefined8 **)0x0;
                    /* try { // try from 002b2464 to 002b246b has its CatchHandler @ 002b2918 */
  ppuVar6 = (undefined8 **)operator_new(0x40);
  *ppuVar6 = &PTR_FUN_0037f478;
  if (local_e0[0] == (long *)0x0) {
    pplVar10 = ppuVar6 + 6;
LAB_002b24a0:
    *pplVar10 = (long *)0x0;
  }
  else {
    if (local_e0[0] != local_100) {
      pplVar10 = local_e0;
      ppuVar6[6] = local_e0[0];
      goto LAB_002b24a0;
    }
    ppuVar6[6] = ppuVar6 + 2;
                    /* try { // try from 002b24b4 to 002b24c3 has its CatchHandler @ 002b2870 */
    (**(code **)(local_100[0] + 0x18))(local_100);
  }
  local_b0[0] = ppuVar6;
  if (local_e0[0] == local_100) {
    lVar4 = 4;
    plVar9 = local_100;
LAB_002b24ec:
    (**(code **)(*plVar9 + lVar4 * 8))(plVar9);
  }
  else if (local_e0[0] != (long *)0x0) {
    lVar4 = 5;
    plVar9 = local_e0[0];
    goto LAB_002b24ec;
  }
  local_178 = (basic_string)0x18;
  local_16f = 0x6e6f6974;
  local_177[0] = s_hostFunction_001d69de[0];
  local_177[1] = s_hostFunction_001d69de[1];
  local_177[2] = s_hostFunction_001d69de[2];
  local_177[3] = s_hostFunction_001d69de[3];
  local_177[4] = s_hostFunction_001d69de[4];
  local_177[5] = s_hostFunction_001d69de[5];
  local_177[6] = s_hostFunction_001d69de[6];
  local_177[7] = s_hostFunction_001d69de[7];
  local_16b = 0;
                    /* try { // try from 002b2524 to 002b252f has its CatchHandler @ 002b28e4 */
  uVar7 = margelo::nitro::PropNameIDCache::get(param_3,&local_178);
  if (local_b0[0] == (undefined8 **)0x0) {
    pppuVar11 = local_110;
LAB_002b255c:
    *pppuVar11 = (undefined8 **)0x0;
  }
  else {
    if (local_b0[0] != local_d0) {
      pppuVar11 = local_b0;
      local_110[0] = local_b0[0];
      goto LAB_002b255c;
    }
    local_110[0] = local_130;
                    /* try { // try from 002b2574 to 002b257f has its CatchHandler @ 002b286c */
    (*(code *)local_d0[0][3])(local_d0,local_130);
  }
  if (local_110[0] == (undefined8 **)0x0) {
    pppuVar11 = local_80;
LAB_002b25a8:
    *pppuVar11 = (undefined8 **)0x0;
  }
  else {
    if (local_110[0] != local_130) {
      pppuVar11 = local_110;
      local_80[0] = local_110[0];
      goto LAB_002b25a8;
    }
    local_80[0] = &local_a0;
                    /* try { // try from 002b25c0 to 002b25cb has its CatchHandler @ 002b2868 */
    (*(code *)local_130[0][3])(local_130,&local_a0);
  }
                    /* try { // try from 002b25d4 to 002b25ef has its CatchHandler @ 002b2878 */
  (**(code **)(*(long *)param_3 + 0x278))(local_190,param_3,uVar7,1,&local_a0);
  if (local_80[0] == &local_a0) {
    lVar4 = 4;
    ppuVar6 = &local_a0;
LAB_002b2610:
    (*(code *)(*ppuVar6)[lVar4])();
  }
  else if (local_80[0] != (undefined8 **)0x0) {
    lVar4 = 5;
    ppuVar6 = local_80[0];
    goto LAB_002b2610;
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_190[0];
  local_190[0] = 0;
  if (local_110[0] == local_130) {
    lVar4 = 4;
    ppuVar6 = local_130;
LAB_002b2654:
    (*(code *)(*ppuVar6)[lVar4])();
  }
  else if (local_110[0] != (undefined8 **)0x0) {
    lVar4 = 5;
    ppuVar6 = local_110[0];
    goto LAB_002b2654;
  }
  if (((byte)local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  if (local_b0[0] == local_d0) {
    lVar4 = 4;
    ppuVar6 = local_d0;
LAB_002b2694:
    (*(code *)(*ppuVar6)[lVar4])();
  }
  else if (local_b0[0] != (undefined8 **)0x0) {
    lVar4 = 5;
    ppuVar6 = local_b0[0];
    goto LAB_002b2694;
  }
  if (local_140[0] == local_160) {
    lVar4 = 4;
    local_140[0] = local_160;
LAB_002b26c4:
    (**(code **)(*local_140[0] + lVar4 * 8))();
  }
  else if (local_140[0] != (long *)0x0) {
    lVar4 = 5;
    goto LAB_002b26c4;
  }
  if ((plVar12 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar12 + 1), lVar4 == 0)
     ) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_002b2e40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b2e44  FUN_002b2e44 =====

void FUN_002b2e44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003950c0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b2e94  FUN_002b2e94 =====

undefined * FUN_002b2e94(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003950c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b2ed4  FUN_002b2ed4 =====

void FUN_002b2ed4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_0037f478;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_002b2f60;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x002b2f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002b2f60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b2f64  FUN_002b2f64 =====

void FUN_002b2f64(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_0037f478;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002b2fc0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002b2fc0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b2fe8  FUN_002b2fe8 =====

undefined8 * FUN_002b2fe8(long param_1)

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
  *puVar2 = &PTR_FUN_0037f478;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_002b3060;
    }
                    /* try { // try from 002b3044 to 002b305f has its CatchHandler @ 002b3088 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_002b3060:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b30b0  FUN_002b30b0 =====

void FUN_002b30b0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0037f478;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x002b3158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_002b315c;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_002b315c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b3160  FUN_002b3160 =====

void FUN_002b3160(long param_1)

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
      goto LAB_002b31e0;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002b31c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002b31e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b31e4  FUN_002b31e4 =====

void FUN_002b31e4(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_002b3234;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002b3234:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b325c  FUN_002b325c =====

void FUN_002b325c(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
                 undefined8 *param_5,ulong *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  JSError *pJVar5;
  ulong uVar6;
  double dVar7;
  Value aVStack_f0 [24];
  IRuntime aIStack_d8 [24];
  basic_string local_c0;
  undefined4 uStack_bf;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  void *local_b0;
  basic_string local_a8;
  undefined4 local_a7;
  undefined3 uStack_a3;
  undefined1 local_a0;
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong uStack_88;
  char *local_80;
  undefined8 *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  int local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = *param_6;
  if (uVar6 == 1) {
    facebook::jsi::Value::asObject((IRuntime *)*param_5);
    local_a0 = 0;
    local_a8 = (basic_string)0xe;
    local_a7 = 0x7373656d;
    uStack_a3 = 0x656761;
                    /* try { // try from 002b32d0 to 002b32f7 has its CatchHandler @ 002b35a0 */
    uVar3 = margelo::nitro::PropNameIDCache::get(param_3,&local_a8);
    (**(code **)(*(long *)param_3 + 0x180))(aIStack_d8,param_3,&local_78,uVar3);
                    /* try { // try from 002b32f8 to 002b3307 has its CatchHandler @ 002b3540 */
    facebook::jsi::Value::asString(aIStack_d8);
                    /* try { // try from 002b3310 to 002b331f has its CatchHandler @ 002b3520 */
    (**(code **)(*(long *)param_3 + 0x120))(local_90,param_3,&local_c0);
    puVar2 = (undefined8 *)CONCAT26(uStack_ba,CONCAT15(uStack_bb,CONCAT41(uStack_bf,local_c0)));
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    uStack_bb = 0;
    local_c0 = (basic_string)0x8;
    uStack_bf = 0x65707974;
                    /* try { // try from 002b334c to 002b3373 has its CatchHandler @ 002b3570 */
    uVar3 = margelo::nitro::PropNameIDCache::get(param_3,&local_c0);
    (**(code **)(*(long *)param_3 + 0x180))(aVStack_f0,param_3,&local_78,uVar3);
                    /* try { // try from 002b3374 to 002b33a7 has its CatchHandler @ 002b3548 */
    dVar7 = (double)facebook::jsi::Value::asNumber();
    if (((byte)local_90[0] & 1) == 0) {
      local_70[0] = local_90[0];
      uStack_68 = uStack_88;
      local_60 = local_80;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(local_70,local_80,uStack_88);
    }
    local_58 = (int)dVar7;
    facebook::jsi::Value::~Value(aVStack_f0);
    if (((byte)local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    facebook::jsi::Value::~Value((Value *)aIStack_d8);
    if (((byte)local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)();
    }
    plVar4 = *(long **)(param_2 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 002b351c to 002b351f has its CatchHandler @ 002b3558 */
        uVar3 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 002b3310 with catch @ 002b3520 */
        puVar2 = (undefined8 *)CONCAT26(uStack_ba,CONCAT15(uStack_bb,CONCAT41(uStack_bf,local_c0)));
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2);
        }
        facebook::jsi::Value::~Value((Value *)aIStack_d8);
        if (((byte)local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)();
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
          FUN_00255d34(uVar3);
        }
      }
    }
    else {
                    /* try { // try from 002b3414 to 002b341b has its CatchHandler @ 002b3558 */
      (**(code **)(*plVar4 + 0x30))(plVar4,local_70);
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      *param_1 = 0;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
  }
  else {
    pJVar5 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b3468 to 002b3473 has its CatchHandler @ 002b36d0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002b3474 to 002b3487 has its CatchHandler @ 002b36b8 */
    FUN_002b3788(&local_c0,"Function expected ",aIStack_d8);
                    /* try { // try from 002b3488 to 002b349b has its CatchHandler @ 002b3688 */
    FUN_00263450(&local_a8,&local_c0," arguments, but received ");
                    /* try { // try from 002b349c to 002b34a7 has its CatchHandler @ 002b3664 */
    std::__ndk1::to_string(uVar6);
                    /* try { // try from 002b34a8 to 002b34b7 has its CatchHandler @ 002b3640 */
    FUN_00264adc(local_90,&local_a8,aVStack_f0);
                    /* try { // try from 002b34b8 to 002b34cb has its CatchHandler @ 002b361c */
    FUN_00263450(local_70,local_90,&DAT_001d5be0);
                    /* try { // try from 002b34d0 to 002b350b has its CatchHandler @ 002b35cc */
    facebook::jsi::JSError::JSError(pJVar5,param_3,local_70);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar5,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b36f8  FUN_002b36f8 =====

void FUN_002b36f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003950b0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b3748  FUN_002b3748 =====

undefined * FUN_002b3748(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003950b8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b3788  FUN_002b3788 =====

void FUN_002b3788(undefined8 *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  strlen(param_2);
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     (param_3,(char *)0x0,(ulong)param_2);
  uVar5 = *puVar2;
  uVar4 = puVar2[2];
  param_1[1] = puVar2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b3810  FUN_002b3810 =====

void FUN_002b3810(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f388;
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


// ===== 002b387c  FUN_002b387c =====

void FUN_002b387c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f388;
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


// ===== 002b38e4  FUN_002b38e4 =====

undefined8 * FUN_002b38e4(long param_1)

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
  *puVar4 = &PTR_FUN_0037f388;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b3944 to 002b3947 has its CatchHandler @ 002b3980 */
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


// ===== 002b39a8  FUN_002b39a8 =====

void FUN_002b39a8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f388;
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


// ===== 002b3a40  FUN_002b3a40 =====

void FUN_002b3a40(long param_1)

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


// ===== 002b3aa0  FUN_002b3aa0 =====

void FUN_002b3aa0(void *param_1)

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


// ===== 002b3afc  FUN_002b3afc =====

void FUN_002b3afc(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  code *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  long *local_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  long local_98;
  long *plStack_90;
  uint local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar11 = (undefined *)*param_5;
  uVar10 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002b3b5c to 002b3b6b has its CatchHandler @ 002b4250 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((local_98 == 0) ||
     (lVar6 = __dynamic_cast(local_98,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    local_1a8 = (long *)0x0;
    if (plStack_90 == (long *)0x0) goto joined_r0x002b3be4;
  }
  else {
    if (plStack_90 == (long *)0x0) {
      local_1a8 = (long *)0x0;
      goto joined_r0x002b3be4;
    }
    FUN_00259a00(1,plStack_90 + 1);
    local_1a8 = plStack_90;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_90 + 0x10))(plStack_90);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002b3be4:
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  puVar2 = PTR_defaultValue_00395068;
  if (uVar10 < 2) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395070 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00395070), iVar5 != 0)) {
      *(undefined4 *)puVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395070);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *plVar1);
    }
    if (uVar10 != 0) {
      puVar2 = puVar11;
    }
                    /* try { // try from 002b3c34 to 002b3c43 has its CatchHandler @ 002b3f48 */
    FUN_002b4444(&local_98,param_3,puVar2);
                    /* try { // try from 002b3c44 to 002b3c4f has its CatchHandler @ 002b3f34 */
    (*pcVar9)(plVar1,&local_98);
    if ((local_78 != '\0') && (local_80 != 0xffffffff)) {
                    /* try { // try from 002b3c70 to 002b3c7b has its CatchHandler @ 002b3f0c */
      (*(code *)(&PTR_FUN_0038ae50)[local_80])(local_b0,&local_98);
    }
    *param_1 = 0;
    if ((local_1a8 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,local_1a8 + 1), lVar6 == 0)) {
      (**(code **)(*local_1a8 + 0x10))(local_1a8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002b3cf4 to 002b3d03 has its CatchHandler @ 002b438c */
    FUN_002a21c4(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b3d14 to 002b3d27 has its CatchHandler @ 002b436c */
    std::__ndk1::operator+("`",(basic_string *)&local_98);
                    /* try { // try from 002b3d28 to 002b3d3b has its CatchHandler @ 002b4354 */
    FUN_00263450(auStack_140,auStack_158,"` expected between ");
                    /* try { // try from 002b3d3c to 002b3d47 has its CatchHandler @ 002b4324 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002b3d48 to 002b3d57 has its CatchHandler @ 002b4300 */
    FUN_00264adc(auStack_128,auStack_140,auStack_170);
                    /* try { // try from 002b3d58 to 002b3d6b has its CatchHandler @ 002b42dc */
    FUN_00263450(auStack_110,auStack_128," and ");
                    /* try { // try from 002b3d6c to 002b3d77 has its CatchHandler @ 002b42b8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002b3d78 to 002b3d87 has its CatchHandler @ 002b4294 */
    FUN_00264adc(auStack_f8,auStack_110,auStack_188);
                    /* try { // try from 002b3d88 to 002b3d9b has its CatchHandler @ 002b4270 */
    FUN_00263450(auStack_e0,auStack_f8," arguments, but received ");
                    /* try { // try from 002b3d9c to 002b3da7 has its CatchHandler @ 002b3f10 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002b3da8 to 002b3db7 has its CatchHandler @ 002b3ee8 */
    FUN_00264adc(auStack_c8,auStack_e0,auStack_1a0);
                    /* try { // try from 002b3db8 to 002b3dcb has its CatchHandler @ 002b3ec4 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002b3dd0 to 002b3e0b has its CatchHandler @ 002b3e4c */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_b0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b43b4  FUN_002b43b4 =====

void FUN_002b43b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395090) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b4404  FUN_002b4404 =====

undefined * FUN_002b4404(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395098;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b4444  FUN_002b4444 =====

void FUN_002b4444(undefined1 *param_1,Runtime *param_2,IRuntime *param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  runtime_error *this;
  int iVar8;
  uint uVar9;
  double dVar10;
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [3];
  IRuntime aIStack_b8 [24];
  undefined8 *local_a0;
  long *plStack_98;
  char *local_90;
  uint local_88;
  undefined1 uStack_84;
  undefined2 uStack_83;
  undefined1 uStack_81;
  long *local_80;
  void *local_78;
  undefined8 *local_70;
  long *plStack_68;
  char *local_60;
  uint local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar8 = *(int *)param_3;
  if (iVar8 == 0) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    if (iVar8 != 7) {
LAB_002b45c0:
      if (iVar8 == 3) {
        uVar9 = (uint)*(double *)(param_3 + 8);
        if ((uVar9 < 2) && (*(double *)(param_3 + 8) == (double)(int)uVar9)) {
          dVar10 = (double)facebook::jsi::Value::asNumber();
          local_58 = 1;
          local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)dVar10);
          lVar6 = 1;
          goto LAB_002b47c8;
        }
      }
      else if (iVar8 == 7) {
        local_a0 = (undefined8 *)
                   (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 002b462c to 002b4697 has its CatchHandler @ 002b4ae0 */
        uVar4 = (**(code **)(*(long *)param_2 + 0x1e0))(param_2,&local_a0);
        if (((((uVar4 & 1) == 0) &&
             (uVar4 = (**(code **)(*(long *)param_2 + 0x1e8))(param_2,&local_a0), (uVar4 & 1) == 0))
            && (uVar4 = (**(code **)(*(long *)param_2 + 0x200))(param_2,&local_a0), (uVar4 & 1) == 0
               )) && ((uVar4 = (**(code **)(*(long *)param_2 + 0x208))(param_2,&local_a0),
                      (uVar4 & 1) == 0 &&
                      (uVar4 = (**(code **)(*(long *)param_2 + 0x158))(param_2,&local_a0),
                      (uVar4 & 1) == 0)))) {
          local_70 = (undefined8 *)0x656d614e79620c;
                    /* try { // try from 002b4868 to 002b488f has its CatchHandler @ 002b49f4 */
          uVar7 = margelo::nitro::PropNameIDCache::get(param_2,(basic_string *)&local_70);
          (**(code **)(*(long *)param_2 + 0x180))(&local_88,param_2,&local_a0,uVar7);
          bVar3 = local_88 == 6;
          facebook::jsi::Value::~Value((Value *)&local_88);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete(local_60);
          }
        }
        else {
          bVar3 = false;
        }
        if (local_a0 != (undefined8 *)0x0) {
          (**(code **)*local_a0)();
        }
        if (bVar3) {
          facebook::jsi::Value::asObject(param_3);
          uStack_81 = 0;
          local_88 = 0x4e79620c;
          uStack_84 = 0x61;
          uStack_83 = 0x656d;
                    /* try { // try from 002b46e8 to 002b470f has its CatchHandler @ 002b4af0 */
          uVar7 = margelo::nitro::PropNameIDCache::get(param_2,(basic_string *)&local_88);
          (**(code **)(*(long *)param_2 + 0x180))(aIStack_b8,param_2,local_d0,uVar7);
                    /* try { // try from 002b4710 to 002b471f has its CatchHandler @ 002b4ac4 */
          facebook::jsi::Value::asString(aIStack_b8);
                    /* try { // try from 002b4728 to 002b4737 has its CatchHandler @ 002b4aa4 */
          (**(code **)(*(long *)param_2 + 0x120))(&local_70,param_2,&local_a0);
          if (local_a0 != (undefined8 *)0x0) {
            (**(code **)*local_a0)();
          }
          if (((ulong)local_70 & 1) == 0) {
            plStack_98 = plStack_68;
            local_a0 = local_70;
            local_90 = local_60;
          }
          else {
                    /* try { // try from 002b476c to 002b4773 has its CatchHandler @ 002b4a74 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_a0,local_60,(ulong)plStack_68);
            if (((ulong)local_70 & 1) != 0) {
              operator_delete(local_60);
            }
          }
          facebook::jsi::Value::~Value((Value *)aIStack_b8);
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          if (local_d0[0] != (undefined8 *)0x0) {
            (**(code **)*local_d0[0])();
          }
          lVar6 = 2;
          local_58 = 2;
          plStack_68 = plStack_98;
          local_70 = local_a0;
          local_60 = local_90;
          goto LAB_002b47c8;
        }
      }
      facebook::jsi::Value::toString(param_3);
                    /* try { // try from 002b48d0 to 002b48df has its CatchHandler @ 002b4ad4 */
      (**(code **)(*(long *)param_2 + 0x120))(&local_70,param_2,&local_88);
      puVar5 = (undefined8 *)CONCAT17(uStack_81,CONCAT25(uStack_83,CONCAT14(uStack_84,local_88)));
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
                    /* try { // try from 002b48f4 to 002b48fb has its CatchHandler @ 002b4a8c */
      FUN_002b4dcc(&local_88);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002b4908 to 002b491b has its CatchHandler @ 002b4a54 */
      std::__ndk1::operator+("Cannot convert \"",(basic_string *)&local_70);
                    /* try { // try from 002b491c to 002b492f has its CatchHandler @ 002b4a3c */
      FUN_00263450(local_d0,auStack_e8,"\" to any type in variant<");
                    /* try { // try from 002b4930 to 002b493f has its CatchHandler @ 002b4a0c */
      FUN_00264d50(aIStack_b8,local_d0,&local_88);
                    /* try { // try from 002b4940 to 002b4953 has its CatchHandler @ 002b49d0 */
      FUN_00263450(&local_a0,aIStack_b8,&DAT_001d795b);
                    /* try { // try from 002b4958 to 002b498f has its CatchHandler @ 002b4990 */
      std::runtime_error::runtime_error(this,(basic_string *)&local_a0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002b4b50;
    }
    local_a0 = (undefined8 *)
               (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 002b44a4 to 002b44cb has its CatchHandler @ 002b4b1c */
    uVar4 = (**(code **)(*(long *)param_2 + 0x158))(param_2,&local_a0);
    if ((uVar4 & 1) == 0) {
      bVar3 = false;
    }
    else {
      (**(code **)(*(long *)param_2 + 0x160))(&local_88,param_2,&local_a0);
      lVar6 = CONCAT17(uStack_81,CONCAT25(uStack_83,CONCAT14(uStack_84,local_88)));
      if ((lVar6 == 0) ||
         (puVar5 = (undefined8 *)
                   __dynamic_cast(lVar6,PTR_typeinfo_00394860,PTR_typeinfo_00395338,
                                  0xffffffffffffffff), puVar5 == (undefined8 *)0x0)) {
        lVar6 = -0x30;
      }
      else {
        plStack_68 = local_80;
        lVar6 = -0x48;
        local_70 = puVar5;
      }
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar6) = 0;
      *(undefined8 *)(&stack0xffffffffffffffc8 + lVar6) = 0;
      plVar2 = plStack_68;
      bVar3 = local_70 != (undefined8 *)0x0;
      if ((plStack_68 != (long *)0x0) &&
         (lVar6 = FUN_00255510(0xffffffffffffffff,plStack_68 + 1), lVar6 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((local_80 != (long *)0x0) &&
         (lVar6 = FUN_00255510(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
        (**(code **)(*local_80 + 0x10))(local_80);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (local_a0 != (undefined8 *)0x0) {
      (**(code **)*local_a0)();
    }
    if (!bVar3) {
      iVar8 = *(int *)param_3;
      goto LAB_002b45c0;
    }
    FUN_002accd0(&local_70,param_2,param_3);
    lVar6 = 0;
    local_58 = 0;
LAB_002b47c8:
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
                    /* try { // try from 002b47e0 to 002b47ef has its CatchHandler @ 002b4b54 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>&&>_0038ae68
              )[lVar6])(&local_88,param_1,&local_70);
    param_1[0x20] = 1;
    *(uint *)(param_1 + 0x18) = local_58;
    if (local_58 != 0xffffffff) {
                    /* try { // try from 002b4814 to 002b481f has its CatchHandler @ 002b4adc */
      (*(code *)(&PTR_FUN_0038ae50)[local_58])(&local_88,&local_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002b4b50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b4b58  FUN_002b4b58 =====

void FUN_002b4b58(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
                    /* try { // try from 002b4b98 to 002b4ba3 has its CatchHandler @ 002b4bd0 */
      (*(code *)(&PTR_FUN_0038ae50)[*(uint *)(param_1 + 0x18)])(&uStack_29,param_1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b4bd4  FUN_002b4bd4 =====

void FUN_002b4bd4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_2 + 8);
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


// ===== 002b4c60  FUN_002b4c60 =====

void FUN_002b4c60(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b4c98  FUN_002b4c98 =====

void FUN_002b4c98(undefined8 param_1,byte *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*param_2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_2 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b4cf8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode,
   margelo::nitro::rive::DataBindByName>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b4d3c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode,
   margelo::nitro::rive::DataBindByName>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b4d7c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode,
   margelo::nitro::rive::DataBindByName>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar4;
  *(undefined8 *)param_2 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b4dcc  FUN_002b4dcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b4dcc(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *__dest;
  ulong uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte local_1e8 [8];
  ulong local_1e0;
  void *local_1d8;
  byte local_1d0 [8];
  ulong local_1c8;
  void *local_1c0;
  byte local_1b8 [8];
  ulong local_1b0;
  void *local_1a8;
  ulong local_1a0;
  ulong uStack_198;
  undefined8 *local_190;
  undefined *local_180;
  undefined *local_178 [2];
  undefined8 local_168 [2];
  ulong local_158;
  undefined8 uStack_150;
  ulong local_148;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  ulong uStack_120;
  uint local_118;
  undefined *local_110 [3];
  undefined8 uStack_f8;
  undefined4 auStack_f0 [30];
  long local_78;
  
  puVar5 = PTR_VTT_00395348;
  puVar4 = PTR_vtable_00395340;
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_180 = *(undefined **)(PTR_VTT_00395348 + 8);
  puVar1 = PTR_vtable_00395340 + 0x40;
  local_110[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_180 + -0x18) + -8) =
       *(undefined8 *)(PTR_VTT_00395348 + 0x10);
  lVar7 = *(long *)(local_180 + -0x18);
                    /* try { // try from 002b4e34 to 002b4e3f has its CatchHandler @ 002b52d0 */
  std::__ndk1::ios_base::init((void *)((long)local_178 + lVar7 + -8));
  local_180 = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_f8 + lVar7) = 0;
  *(undefined4 *)((long)auStack_f0 + lVar7) = 0xffffffff;
  local_110[0] = puVar1;
                    /* try { // try from 002b4e58 to 002b4e5f has its CatchHandler @ 002b52bc */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  puVar4 = PTR_vtable_00395350;
  local_178[0] = PTR_vtable_00395350 + 0x10;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  local_118 = 0x10;
                    /* try { // try from 002b4e84 to 002b4e8b has its CatchHandler @ 002b52b4 */
  local_190 = (undefined8 *)operator_new(0x50);
  puVar1 = PTR_typeinfo_name_00395078;
  uStack_198 = _UNK_001d8158;
  local_1a0 = _DAT_001d8150;
  *(undefined1 *)((long)local_190 + 0x4b) = 0;
  uVar13 = *(undefined8 *)(puVar1 + 0x20);
  uVar15 = *(undefined8 *)(puVar1 + 0x38);
  uVar14 = *(undefined8 *)(puVar1 + 0x30);
  uVar12 = *(undefined8 *)(puVar1 + 0x43);
  uVar8 = *(undefined8 *)(puVar1 + 0x3b);
  local_190[5] = *(undefined8 *)(puVar1 + 0x28);
  local_190[4] = uVar13;
  local_190[7] = uVar15;
  local_190[6] = uVar14;
  *(undefined8 *)((long)local_190 + 0x43) = uVar12;
  *(undefined8 *)((long)local_190 + 0x3b) = uVar8;
  uVar8 = *(undefined8 *)puVar1;
  uVar13 = *(undefined8 *)(puVar1 + 0x18);
  uVar12 = *(undefined8 *)(puVar1 + 0x10);
  local_190[1] = *(undefined8 *)(puVar1 + 8);
  *local_190 = uVar8;
  local_190[3] = uVar13;
  local_190[2] = uVar12;
                    /* try { // try from 002b4ec0 to 002b4ecf has its CatchHandler @ 002b52a0 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_1a0,false);
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  uVar9 = (ulong)(local_1b8[0] >> 1);
  pvVar10 = (void *)((ulong)local_1b8 | 1);
  if ((local_1b8[0] & 1) != 0) {
    uVar9 = local_1b0;
    pvVar10 = local_1a8;
  }
                    /* try { // try from 002b4f00 to 002b4f1b has its CatchHandler @ 002b5328 */
  FUN_002b5360(&local_180,pvVar10,uVar9);
  FUN_002b5360(&local_180,&DAT_001d554c,2);
                    /* try { // try from 002b4f1c to 002b4f23 has its CatchHandler @ 002b529c */
  local_190 = (undefined8 *)operator_new(0x30);
  uStack_198 = _UNK_001d8048;
  local_1a0 = _DAT_001d8040;
  uVar12 = *(undefined8 *)(PTR_typeinfo_name_00395080 + 8);
  uVar8 = *(undefined8 *)PTR_typeinfo_name_00395080;
  uVar14 = *(undefined8 *)(PTR_typeinfo_name_00395080 + 0x18);
  uVar13 = *(undefined8 *)(PTR_typeinfo_name_00395080 + 0x10);
  *(undefined4 *)((long)local_190 + 0x1f) = 0x4565646f;
  *(undefined1 *)((long)local_190 + 0x23) = 0;
  local_190[1] = uVar12;
  *local_190 = uVar8;
  local_190[3] = uVar14;
  local_190[2] = uVar13;
                    /* try { // try from 002b4f54 to 002b4f63 has its CatchHandler @ 002b5288 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_1a0,false);
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  uVar9 = (ulong)(local_1d0[0] >> 1);
  pvVar10 = (void *)((ulong)local_1d0 | 1);
  if ((local_1d0[0] & 1) != 0) {
    uVar9 = local_1c8;
    pvVar10 = local_1c0;
  }
                    /* try { // try from 002b4f94 to 002b4faf has its CatchHandler @ 002b5310 */
  FUN_002b5360(&local_180,pvVar10,uVar9);
  FUN_002b5360(&local_180,&DAT_001d554c,2);
                    /* try { // try from 002b4fb0 to 002b4fb7 has its CatchHandler @ 002b5284 */
  local_190 = (undefined8 *)operator_new(0x30);
  puVar1 = PTR_typeinfo_name_00395088;
  uStack_198 = _UNK_001d7fc8;
  local_1a0 = _DAT_001d7fc0;
  *(undefined1 *)((long)local_190 + 0x25) = 0;
  uVar12 = *(undefined8 *)puVar1;
  uVar14 = *(undefined8 *)(puVar1 + 0x18);
  uVar13 = *(undefined8 *)(puVar1 + 0x10);
  uVar8 = *(undefined8 *)(puVar1 + 0x1d);
  local_190[1] = *(undefined8 *)(puVar1 + 8);
  *local_190 = uVar12;
  local_190[3] = uVar14;
  local_190[2] = uVar13;
  *(undefined8 *)((long)local_190 + 0x1d) = uVar8;
                    /* try { // try from 002b4fe4 to 002b4ff3 has its CatchHandler @ 002b5270 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_1a0,false);
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  uVar9 = (ulong)(local_1e8[0] >> 1);
  pvVar10 = (void *)((ulong)local_1e8 | 1);
  if ((local_1e8[0] & 1) != 0) {
    uVar9 = local_1e0;
    pvVar10 = local_1d8;
  }
                    /* try { // try from 002b5024 to 002b503f has its CatchHandler @ 002b52f8 */
  FUN_002b5360(&local_180,pvVar10,uVar9);
  FUN_002b5360(&local_180,&DAT_001d554c,2);
  if ((local_1e8[0] & 1) == 0) {
    if ((local_1d0[0] & 1) == 0) goto LAB_002b5050;
LAB_002b5088:
    operator_delete(local_1c0);
    if ((local_1b8[0] & 1) != 0) goto LAB_002b5098;
LAB_002b5058:
    if ((local_118 >> 4 & 1) == 0) goto LAB_002b5060;
LAB_002b50a8:
    if (uStack_120 < local_148) {
      uStack_120 = local_148;
    }
    puVar11 = &uStack_150;
    local_158 = uStack_120;
LAB_002b50d8:
    pvVar10 = (void *)*puVar11;
    uVar9 = local_158 - (long)pvVar10;
    if (uVar9 < 0xfffffffffffffff0) {
      if (uVar9 < 0x17) {
        puVar11 = (undefined8 *)((ulong)&local_1a0 | 1);
        local_1a0 = CONCAT71(local_1a0._1_7_,(char)((int)uVar9 << 1));
        if (uVar9 == 0) goto LAB_002b5138;
      }
      else {
        uVar2 = (uVar9 | 0xf) + 1;
                    /* try { // try from 002b5110 to 002b5117 has its CatchHandler @ 002b52e0 */
        puVar11 = (undefined8 *)operator_new(uVar2);
        local_1a0 = uVar2 | 1;
        uStack_198 = uVar9;
        local_190 = puVar11;
      }
      memmove(puVar11,pvVar10,uVar9);
      goto LAB_002b5138;
    }
  }
  else {
    operator_delete(local_1d8);
    if ((local_1d0[0] & 1) != 0) goto LAB_002b5088;
LAB_002b5050:
    if ((local_1b8[0] & 1) == 0) goto LAB_002b5058;
LAB_002b5098:
    operator_delete(local_1a8);
    if ((local_118 >> 4 & 1) != 0) goto LAB_002b50a8;
LAB_002b5060:
    if ((local_118 >> 3 & 1) != 0) {
      puVar11 = local_168;
      goto LAB_002b50d8;
    }
    uVar9 = 0;
    local_1a0 = local_1a0 & 0xffffffffffffff00;
    puVar11 = (undefined8 *)((ulong)&local_1a0 | 1);
LAB_002b5138:
    *(undefined1 *)((long)puVar11 + uVar9) = 0;
    bVar6 = (local_1a0 & 1) != 0;
    uVar9 = local_1a0 >> 1 & 0x7f;
    if (bVar6) {
      uVar9 = uStack_198;
    }
    puVar11 = (undefined8 *)((ulong)&local_1a0 | 1);
    if (bVar6) {
      puVar11 = local_190;
    }
    if (uVar9 - 2 <= uVar9) {
      uVar9 = uVar9 - 2;
    }
    if (uVar9 < 0xfffffffffffffff0) {
      if (uVar9 < 0x17) {
        __dest = (undefined1 *)((long)param_1 + 1);
        *(char *)param_1 = (char)((int)uVar9 << 1);
        if (uVar9 != 0) goto LAB_002b51a8;
      }
      else {
        uVar2 = (uVar9 | 0xf) + 1;
                    /* try { // try from 002b5190 to 002b5197 has its CatchHandler @ 002b52e8 */
        __dest = (undefined1 *)operator_new(uVar2);
        param_1[1] = uVar9;
        param_1[2] = (ulong)__dest;
        *param_1 = uVar2 | 1;
LAB_002b51a8:
        memmove(__dest,puVar11,uVar9);
      }
      __dest[uVar9] = 0;
      if ((local_1a0 & 1) != 0) {
        operator_delete(local_190);
      }
      local_180 = *(undefined **)puVar5;
      *(undefined8 *)((long)local_178 + *(long *)(local_180 + -0x18) + -8) =
           *(undefined8 *)(puVar5 + 0x18);
      local_178[0] = puVar4 + 0x10;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_178);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180);
      std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_110);
      if (*(long *)(lVar3 + 0x28) == local_78) {
        return;
      }
      goto LAB_002b535c;
    }
    if (*(long *)(lVar3 + 0x28) != local_78) goto LAB_002b535c;
                    /* try { // try from 002b5258 to 002b525b has its CatchHandler @ 002b52e8 */
    FUN_00260a84();
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 002b526c to 002b526f has its CatchHandler @ 002b52e0 */
    uVar8 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002b4fe4 with catch @ 002b5270 */
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
    if ((local_1d0[0] & 1) != 0) {
      operator_delete(local_1c0);
    }
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_002b5610(&local_180);
    if (*(long *)(lVar3 + 0x28) == local_78) {
      FUN_00255d34(uVar8);
    }
  }
LAB_002b535c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b5360  FUN_002b5360 =====

basic_ostream * FUN_002b5360(basic_ostream *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong __n;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  sentry local_90 [16];
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 002b5398 to 002b53a3 has its CatchHandler @ 002b55c4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_90,param_1);
  if (local_90[0] == (sentry)0x0) goto LAB_002b554c;
  lVar8 = *(long *)(*(long *)param_1 + -0x18);
  uVar3 = *(uint *)(param_1 + lVar8 + 0x90);
  plVar9 = *(long **)(param_1 + lVar8 + 0x28);
  uVar1 = *(uint *)(param_1 + lVar8 + 8);
  if (uVar3 == 0xffffffff) {
                    /* try { // try from 002b53cc to 002b53d7 has its CatchHandler @ 002b55b4 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 002b53d8 to 002b53f7 has its CatchHandler @ 002b55a0 */
    plVar4 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
    std::__ndk1::locale::~locale((locale *)&local_80);
    uVar3 = uVar3 & 0xff;
    *(uint *)(param_1 + lVar8 + 0x90) = uVar3;
  }
  lVar7 = param_2 + param_3;
  if ((uVar1 & 0xb0) != 0x20) {
    lVar7 = param_2;
  }
  if (plVar9 != (long *)0x0) {
    lVar11 = lVar7 - param_2;
    __n = *(long *)(param_1 + lVar8 + 0x18) - param_3;
    if (__n == 0 || *(long *)(param_1 + lVar8 + 0x18) < param_3) {
      __n = 0;
    }
                    /* try { // try from 002b5444 to 002b548f has its CatchHandler @ 002b55b4 */
    if ((lVar11 < 1) ||
       (lVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,param_2,lVar11), lVar5 == lVar11)) {
      if (0 < (long)__n) {
        if (__n < 0x17) {
          pvVar10 = (void *)((ulong)&local_80 | 1);
          local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
        }
        else {
          uVar6 = (__n | 0xf) + 1;
          pvVar10 = operator_new(uVar6);
          local_80 = uVar6 | 1;
          local_78 = __n;
          local_70 = pvVar10;
        }
        memset(pvVar10,uVar3,__n);
        *(undefined1 *)((long)pvVar10 + __n) = 0;
        pvVar10 = (void *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pvVar10 = local_70;
        }
                    /* try { // try from 002b54d4 to 002b54df has its CatchHandler @ 002b5588 */
        uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,pvVar10,__n);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if (uVar6 != __n) goto LAB_002b5530;
      }
      lVar11 = (param_2 + param_3) - lVar7;
                    /* try { // try from 002b5510 to 002b551f has its CatchHandler @ 002b55b4 */
      if ((lVar11 < 1) ||
         (lVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar7,lVar11), lVar7 == lVar11)) {
        *(undefined8 *)(param_1 + lVar8 + 0x18) = 0;
        goto LAB_002b554c;
      }
    }
  }
LAB_002b5530:
                    /* try { // try from 002b5544 to 002b554b has its CatchHandler @ 002b55b0 */
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
LAB_002b554c:
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_90);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b5610  FUN_002b5610 =====

void FUN_002b5610(basic_ostream<char,std::__ndk1::char_traits<char>> *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)PTR_VTT_00395348;
  uVar5 = *(undefined8 *)(PTR_VTT_00395348 + 0x18);
  *(long *)param_1 = lVar4;
  puVar2 = PTR_vtable_00395350;
  *(undefined8 *)(param_1 + *(long *)(lVar4 + -0x18)) = uVar5;
  *(undefined **)(param_1 + 8) = puVar2 + 0x10;
  if (((byte)param_1[0x48] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 8));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0x70));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b56b4  FUN_002b56b4 =====

void FUN_002b56b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f2f0;
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


// ===== 002b5720  FUN_002b5720 =====

void FUN_002b5720(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f2f0;
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


// ===== 002b5788  FUN_002b5788 =====

undefined8 * FUN_002b5788(long param_1)

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
  *puVar4 = &PTR_FUN_0037f2f0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b57e8 to 002b57eb has its CatchHandler @ 002b5824 */
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


// ===== 002b584c  FUN_002b584c =====

void FUN_002b584c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f2f0;
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


// ===== 002b58e4  FUN_002b58e4 =====

void FUN_002b58e4(long param_1)

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


// ===== 002b5944  FUN_002b5944 =====

void FUN_002b5944(void *param_1)

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


// ===== 002b59a0  FUN_002b59a0 =====

void FUN_002b59a0(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
  long *local_150 [3];
  undefined1 *local_138 [3];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8 [3];
  long local_90;
  long *plStack_88;
  uint local_78;
  char local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_a8[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002b59fc to 002b5a0b has its CatchHandler @ 002b5cf0 */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,local_a8);
  if ((local_90 == 0) ||
     (lVar4 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_88 != (long *)0x0) goto LAB_002b5a58;
  }
  else if (plStack_88 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_88 + 1);
    plVar7 = plStack_88;
LAB_002b5a58:
    lVar5 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_a8[0] != (undefined8 *)0x0) {
    (**(code **)*local_a8[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_7variantIJNS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEENS3_12DataBindModeENS3_14DataBindByNameEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395050
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_7variantIJNS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEENS3_12DataBindModeENS3_14DataBindByNameEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395050
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_7variantIJNS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEENS3_12DataBindModeENS3_14DataBindByNameEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395048
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_7variantIJNS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEENS3_12DataBindModeENS3_14DataBindByNameEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395048
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_7variantIJNS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEENS3_12DataBindModeENS3_14DataBindByNameEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395050
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002b5abc to 002b5ac3 has its CatchHandler @ 002b5ce4 */
    (*pcVar9)(&local_90);
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      local_150[0] = param_3;
      if (local_78 == 0xffffffff) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 002b5cdc to 002b5cdf has its CatchHandler @ 002b5d94 */
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 002b5b20 with catch @ 002b5ce0
                        */
          FUN_0025ad9c();
        }
        goto LAB_002b61b0;
      }
                    /* try { // try from 002b5af0 to 002b5aff has its CatchHandler @ 002b5d94 */
      local_138[0] = (undefined1 *)local_150;
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___visitation___variant___value_visitor<margelo_nitro_JSIConverter<std___ndk1_variant<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,void>_toJSI(facebook_jsi_Runtime&,std___ndk1_variant<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>const&)__lambda(auto:1_const&)_1_>&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>const&>_0037f350
                )[local_78])(param_1,local_138,&local_90);
      if ((local_70 != '\0') && (local_78 != 0xffffffff)) {
                    /* try { // try from 002b5b20 to 002b5b2b has its CatchHandler @ 002b5ce0 */
        (*(code *)(&PTR_FUN_0038ae50)[local_78])(local_a8,&local_90);
      }
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
                    /* try { // try from 002b5ba4 to 002b5bb3 has its CatchHandler @ 002b618c */
    FUN_002a21c4(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b5bc0 to 002b5bd3 has its CatchHandler @ 002b616c */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 002b5bd4 to 002b5be7 has its CatchHandler @ 002b6154 */
    FUN_00263450(auStack_108,auStack_120,"` expected ");
                    /* try { // try from 002b5be8 to 002b5bf3 has its CatchHandler @ 002b6124 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002b5bf4 to 002b5c03 has its CatchHandler @ 002b6100 */
    FUN_00264adc(auStack_f0,auStack_108,local_138);
                    /* try { // try from 002b5c04 to 002b5c17 has its CatchHandler @ 002b60dc */
    FUN_00263450(auStack_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 002b5c18 to 002b5c23 has its CatchHandler @ 002b60b8 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002b5c24 to 002b5c33 has its CatchHandler @ 002b6094 */
    FUN_00264adc(auStack_c0,auStack_d8,local_150);
                    /* try { // try from 002b5c34 to 002b5c47 has its CatchHandler @ 002b5d70 */
    FUN_00263450(local_a8,auStack_c0,&DAT_001d5be0);
                    /* try { // try from 002b5c4c to 002b5c87 has its CatchHandler @ 002b5d10 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_a8);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002b61b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b61b4  FUN_002b61b4 =====

void FUN_002b61b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395058) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b6204  FUN_002b6204 =====

undefined * FUN_002b6204(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395060;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b6244  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   void>::toJSI(facebook::jsi::Runtime&,
   std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&)::{lambda(auto:1
   const&)#1}>&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   void>::toJSI(facebook::jsi::Runtime&,
   std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&)::{lambda(auto:1
   const&)#1}>&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&>
          (__dispatcher<0ul> *this,__value_visitor *param_1,__base *param_2)

{
  long lVar1;
  _func_decltype_auto *p_Var2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    p_Var2 = (_func_decltype_auto *)FUN_002abf6c();
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this,**(undefined8 **)this,*(undefined8 *)param_1);
}


// ===== 002b6290  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   void>::toJSI(facebook::jsi::Runtime&,
   std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&)::{lambda(auto:1
   const&)#1}>&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   void>::toJSI(facebook::jsi::Runtime&,
   std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&)::{lambda(auto:1
   const&)#1}>&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&>
          (__dispatcher<1ul> *this,__value_visitor *param_1,__base *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *in_x8;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)param_1;
  *in_x8 = 3;
  *(double *)(in_x8 + 2) = (double)iVar1;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return (_func_decltype_auto *)this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


