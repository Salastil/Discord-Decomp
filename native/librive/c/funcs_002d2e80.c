// ===== 002d2e80  FUN_002d2e80 =====

void FUN_002d2e80(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00380f90;
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


// ===== 002d2f18  FUN_002d2f18 =====

void FUN_002d2f18(long param_1)

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


// ===== 002d2f78  FUN_002d2f78 =====

void FUN_002d2f78(void *param_1)

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


// ===== 002d2fd4  FUN_002d2fd4 =====

void FUN_002d2fd4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002d3034 to 002d3043 has its CatchHandler @ 002d3324 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394b28,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002d30bc;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002d30bc;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar8 = plVar1;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002d30bc:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395498 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395498), puVar3 = PTR_defaultValue_00395490,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395490 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395498);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 002d30f8 to 002d310b has its CatchHandler @ 002d33c8 */
    facebook::jsi::Value::asNumber();
    (*pcVar10)(&local_80,plVar1);
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 002d3118 to 002d3123 has its CatchHandler @ 002d3308 */
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
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002d31d4 to 002d31e3 has its CatchHandler @ 002d37b8 */
    FUN_002cde80(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002d31f0 to 002d3203 has its CatchHandler @ 002d3798 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002d3204 to 002d3217 has its CatchHandler @ 002d3780 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002d3218 to 002d3223 has its CatchHandler @ 002d3750 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002d3224 to 002d3233 has its CatchHandler @ 002d372c */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002d3234 to 002d3247 has its CatchHandler @ 002d3708 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002d3248 to 002d3253 has its CatchHandler @ 002d36e4 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002d3254 to 002d3263 has its CatchHandler @ 002d36c0 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002d3264 to 002d3277 has its CatchHandler @ 002d33a4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002d327c to 002d32b7 has its CatchHandler @ 002d3344 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d37e0  FUN_002d37e0 =====

void FUN_002d37e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003954a0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d3830  FUN_002d3830 =====

undefined * FUN_002d3830(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003954a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d3870  FUN_002d3870 =====

void FUN_002d3870(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380f10;
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


// ===== 002d38dc  FUN_002d38dc =====

void FUN_002d38dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380f10;
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


// ===== 002d3944  FUN_002d3944 =====

undefined8 * FUN_002d3944(long param_1)

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
  *puVar4 = &PTR_FUN_00380f10;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002d39a4 to 002d39a7 has its CatchHandler @ 002d39e0 */
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


// ===== 002d3a08  FUN_002d3a08 =====

void FUN_002d3a08(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00380f10;
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


// ===== 002d3aa0  FUN_002d3aa0 =====

void FUN_002d3aa0(long param_1)

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


// ===== 002d3b00  FUN_002d3b00 =====

void FUN_002d3b00(void *param_1)

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


// ===== 002d3b5c  FUN_002d3b5c =====

void FUN_002d3b5c(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002d3bb8 to 002d3bc7 has its CatchHandler @ 002d4168 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394b28,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002d3c40;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002d3c40;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002d3c40:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395478
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395478
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395470
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395470
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395478
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002d3c78 to 002d3c7f has its CatchHandler @ 002d3e70 */
    (*pcVar9)(&local_110);
                    /* try { // try from 002d3c84 to 002d3c8f has its CatchHandler @ 002d3e58 */
    FUN_0026ab84(param_1,param_3,local_110,local_108);
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
                    /* try { // try from 002d3d30 to 002d3d3f has its CatchHandler @ 002d4304 */
    FUN_002cde80(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002d3d4c to 002d3d5f has its CatchHandler @ 002d42e4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002d3d60 to 002d3d73 has its CatchHandler @ 002d42cc */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 002d3d74 to 002d3d7f has its CatchHandler @ 002d429c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002d3d80 to 002d3d8f has its CatchHandler @ 002d4278 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002d3d90 to 002d3da3 has its CatchHandler @ 002d4254 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002d3da4 to 002d3daf has its CatchHandler @ 002d4230 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002d3db0 to 002d3dbf has its CatchHandler @ 002d420c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002d3dc0 to 002d3dd3 has its CatchHandler @ 002d41e8 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002d3dd8 to 002d3e13 has its CatchHandler @ 002d4188 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d432c  FUN_002d432c =====

void FUN_002d432c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395480) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d437c  FUN_002d437c =====

undefined * FUN_002d437c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395488;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d43bc  FUN_002d43bc =====

void FUN_002d43bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380e90;
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


// ===== 002d4428  FUN_002d4428 =====

void FUN_002d4428(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380e90;
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


// ===== 002d4490  FUN_002d4490 =====

undefined8 * FUN_002d4490(long param_1)

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
  *puVar4 = &PTR_FUN_00380e90;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002d44f0 to 002d44f3 has its CatchHandler @ 002d452c */
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


// ===== 002d4554  FUN_002d4554 =====

void FUN_002d4554(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00380e90;
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


// ===== 002d45ec  FUN_002d45ec =====

void FUN_002d45ec(long param_1)

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


// ===== 002d464c  FUN_002d464c =====

void FUN_002d464c(void *param_1)

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


// ===== 002d46a8  FUN_002d46a8 =====

void FUN_002d46a8(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
  undefined1 auStack_140 [24];
  undefined8 local_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002d4704 to 002d4713 has its CatchHandler @ 002d4ccc */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394b28,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002d478c;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x002d478c;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002d478c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395458
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395458
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395450
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395450
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar4,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395458
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 002d47c4 to 002d47cf has its CatchHandler @ 002d49d4 */
    (*pcVar11)(&local_80);
    plVar1 = (long *)(ulong)((byte)local_80 >> 1);
    pvVar3 = (void *)((ulong)&local_80 | 1);
    if (((byte)local_80 & 1) != 0) {
      plVar1 = local_78;
      pvVar3 = local_70;
    }
                    /* try { // try from 002d47f4 to 002d47ff has its CatchHandler @ 002d49b8 */
    (**(code **)(*param_3 + 0x110))(local_128,param_3,pvVar3,plVar1);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = local_128[0];
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
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
                    /* try { // try from 002d4890 to 002d489f has its CatchHandler @ 002d4e68 */
    FUN_002cde80(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002d48ac to 002d48bf has its CatchHandler @ 002d4e48 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 002d48c0 to 002d48d3 has its CatchHandler @ 002d4e30 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002d48d4 to 002d48df has its CatchHandler @ 002d4e00 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002d48e0 to 002d48ef has its CatchHandler @ 002d4ddc */
    FUN_00264adc(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 002d48f0 to 002d4903 has its CatchHandler @ 002d4db8 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002d4904 to 002d490f has its CatchHandler @ 002d4d94 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002d4910 to 002d491f has its CatchHandler @ 002d4d70 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002d4920 to 002d4933 has its CatchHandler @ 002d4d4c */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002d4938 to 002d4973 has its CatchHandler @ 002d4cec */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d4e90  FUN_002d4e90 =====

void FUN_002d4e90(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395460) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d4ee0  FUN_002d4ee0 =====

undefined * FUN_002d4ee0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395468;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d4f20  FUN_002d4f20 =====

void FUN_002d4f20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380e10;
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


// ===== 002d4f8c  FUN_002d4f8c =====

void FUN_002d4f8c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380e10;
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


// ===== 002d4ff4  FUN_002d4ff4 =====

undefined8 * FUN_002d4ff4(long param_1)

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
  *puVar4 = &PTR_FUN_00380e10;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002d5054 to 002d5057 has its CatchHandler @ 002d5090 */
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


// ===== 002d50b8  FUN_002d50b8 =====

void FUN_002d50b8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00380e10;
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


// ===== 002d5150  FUN_002d5150 =====

void FUN_002d5150(long param_1)

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


// ===== 002d51b0  FUN_002d51b0 =====

void FUN_002d51b0(void *param_1)

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


// ===== 002d520c  FUN_002d520c =====

void FUN_002d520c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002d5268 to 002d5277 has its CatchHandler @ 002d57c0 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394b28,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002d52f0;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002d52f0;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002d52f0:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395438
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395438
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395430
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395430
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395438
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002d5328 to 002d532b has its CatchHandler @ 002d54d0 */
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
                    /* try { // try from 002d53a8 to 002d53b7 has its CatchHandler @ 002d595c */
    FUN_002cde80(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002d53c4 to 002d53d7 has its CatchHandler @ 002d593c */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002d53d8 to 002d53eb has its CatchHandler @ 002d5924 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002d53ec to 002d53f7 has its CatchHandler @ 002d58f4 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002d53f8 to 002d5407 has its CatchHandler @ 002d58d0 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002d5408 to 002d541b has its CatchHandler @ 002d58ac */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002d541c to 002d5427 has its CatchHandler @ 002d5888 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002d5428 to 002d5437 has its CatchHandler @ 002d5864 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002d5438 to 002d544b has its CatchHandler @ 002d5840 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002d5450 to 002d548b has its CatchHandler @ 002d57e0 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d5984  FUN_002d5984 =====

void FUN_002d5984(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395440) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d59d4  FUN_002d59d4 =====

undefined * FUN_002d59d4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395448;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d5a14  margelo::nitro::rive::HybridViewModelSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelSpec::loadHybridMethods(HybridViewModelSpec *this)

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


// ===== 002d5a58  FUN_002d5a58 =====

void FUN_002d5a58(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2d5a5c);
  (*pcVar1)();
}


// ===== 002d5a5c  FUN_002d5a5c =====

void FUN_002d5a5c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2d5a60);
  (*pcVar1)();
}


// ===== 002d5a60  FUN_002d5a60 =====

void FUN_002d5a60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2d5a64);
  (*pcVar1)();
}


// ===== 002d5a64  FUN_002d5a64 =====

void FUN_002d5a64(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2d5a68);
  (*pcVar1)();
}


// ===== 002d5a68  margelo::nitro::rive::HybridViewModelInstanceSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelInstanceSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelInstanceSpec::loadHybridMethods
          (HybridViewModelInstanceSpec *this)

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
  basic_string local_248;
  undefined7 uStack_247;
  char cStack_240;
  undefined7 uStack_23f;
  char cStack_238;
  undefined1 uStack_237;
  undefined6 uStack_236;
  basic_string local_230;
  char acStack_22f [6];
  char cStack_229;
  char cStack_228;
  char acStack_227 [6];
  undefined1 uStack_221;
  long *local_220;
  basic_string local_218;
  undefined7 uStack_217;
  char cStack_210;
  undefined2 uStack_20f;
  undefined5 uStack_20d;
  long *local_208;
  basic_string local_200;
  undefined7 uStack_1ff;
  char cStack_1f8;
  undefined7 uStack_1f7;
  char cStack_1f0;
  undefined1 uStack_1ef;
  undefined6 uStack_1ee;
  basic_string local_1e8;
  undefined7 uStack_1e7;
  char cStack_1e0;
  undefined4 uStack_1df;
  undefined1 uStack_1db;
  undefined2 uStack_1da;
  long *local_1d8;
  basic_string local_1d0;
  char acStack_1cf [5];
  undefined2 uStack_1ca;
  char cStack_1c8;
  char acStack_1c7 [5];
  undefined1 uStack_1c2;
  undefined1 uStack_1c1;
  long *local_1c0;
  basic_string local_1b8;
  char acStack_1b7 [7];
  char cStack_1b0;
  char acStack_1af [7];
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  basic_string local_1a0;
  undefined7 uStack_19f;
  char cStack_198;
  undefined4 uStack_197;
  undefined1 uStack_193;
  undefined2 uStack_192;
  long *local_190;
  basic_string local_188;
  char acStack_187 [5];
  undefined2 uStack_182;
  char cStack_180;
  char acStack_17f [5];
  undefined1 uStack_17a;
  undefined1 uStack_179;
  long *local_178;
  basic_string local_170;
  char acStack_16f [7];
  char cStack_168;
  char acStack_167 [7];
  undefined1 local_160;
  undefined7 uStack_15f;
  basic_string local_158;
  char acStack_157 [6];
  char cStack_151;
  char cStack_150;
  char acStack_14f [6];
  undefined1 uStack_149;
  long *local_148;
  basic_string local_140;
  char acStack_13f [6];
  char cStack_139;
  char cStack_138;
  char acStack_137 [6];
  undefined1 uStack_131;
  long *local_130;
  basic_string local_128;
  undefined7 uStack_127;
  char cStack_120;
  undefined4 uStack_11f;
  undefined1 uStack_11b;
  undefined2 uStack_11a;
  long *local_118;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00395338;
                    /* try { // try from 002d5acc to 002d5adb has its CatchHandler @ 002d87f0 */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar9 = plStack_d8;
    plVar6 = local_e0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395580) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar5 + 0x10);
      local_e0 = plVar6;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00395338;
                    /* try { // try from 002d5be8 to 002d5bf7 has its CatchHandler @ 002d87e4 */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar9 = plStack_88;
      plVar6 = local_90;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x002d5c9c;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x002d5c9c:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_128 = (basic_string)0x18;
    uStack_11f = 0x656d614e;
    uStack_127 = (undefined7)s_instanceName_001d6318._0_8_;
    cStack_120 = SUB81(s_instanceName_001d6318._0_8_,7);
    uStack_11b = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7b4c to 002d7b5f has its CatchHandler @ 002d8fb8 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002d7b60 to 002d7b73 has its CatchHandler @ 002d8c9c */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 002d7b78 to 002d7baf has its CatchHandler @ 002d8c78 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plVar6 = plVar9 + 3;
    lVar5 = FUN_002632b8(*plVar6,plVar9[4],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7bc0 to 002d7bd3 has its CatchHandler @ 002d8fb4 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002d7bd4 to 002d7be7 has its CatchHandler @ 002d8c74 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7bec to 002d7c23 has its CatchHandler @ 002d8c48 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT26(uStack_11a,CONCAT15(uStack_11b,CONCAT41(uStack_11f,cStack_120)));
    local_110 = (undefined *)CONCAT71(uStack_127,local_128);
    local_100 = local_118;
    plStack_f0 = _UNK_001d81a8;
    local_f8 = _DAT_001d81a0;
    local_e8 = 1;
                    /* try { // try from 002d5d24 to 002d5d2b has its CatchHandler @ 002d89f0 */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_00381428;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 002d5d5c to 002d5d5f has its CatchHandler @ 002d87d4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d5d9c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d5dac:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d5dac;
      }
      if (local_70 != &local_90) goto LAB_002d5d9c;
      local_c0 = &local_e0;
                    /* try { // try from 002d7440 to 002d744b has its CatchHandler @ 002d8194 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_128 & 1) == 0) {
      uStack_a0 = CONCAT26(uStack_11a,CONCAT15(uStack_11b,CONCAT41(uStack_11f,cStack_120)));
      local_a8 = CONCAT71(uStack_127,local_128);
      local_98 = local_118;
    }
    else {
                    /* try { // try from 002d5ddc to 002d5de3 has its CatchHandler @ 002d8768 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_118,
                 CONCAT26(uStack_11a,CONCAT15(uStack_11b,CONCAT41(uStack_11f,cStack_120))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d5e08:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d5e08;
    }
                    /* try { // try from 002d5e14 to 002d5e27 has its CatchHandler @ 002d89e0 */
    FUN_002634d4(plVar9 + 8,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d5e5c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d5e5c;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = (basic_string)0x1c;
    uStack_131 = 0;
    acStack_13f[0] = s_numberProperty_001d6bf1[0];
    acStack_13f[1] = s_numberProperty_001d6bf1[1];
    acStack_13f[2] = s_numberProperty_001d6bf1[2];
    acStack_13f[3] = s_numberProperty_001d6bf1[3];
    acStack_13f[4] = s_numberProperty_001d6bf1[4];
    acStack_13f[5] = s_numberProperty_001d6bf1[5];
    cStack_139 = (char)s_numberProperty_001d6bf1._6_2_;
    cStack_138 = SUB21(s_numberProperty_001d6bf1._6_2_,1);
    acStack_137[0] = s_numberProperty_001d6bf1[8];
    acStack_137[1] = s_numberProperty_001d6bf1[9];
    acStack_137[2] = s_numberProperty_001d6bf1[10];
    acStack_137[3] = s_numberProperty_001d6bf1[0xb];
    acStack_137[4] = s_numberProperty_001d6bf1[0xc];
    acStack_137[5] = s_numberProperty_001d6bf1[0xd];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_140);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_140), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d75dc to 002d75ef has its CatchHandler @ 002d9104 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_140);
                    /* try { // try from 002d75f0 to 002d7603 has its CatchHandler @ 002d8f9c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d7608 to 002d763f has its CatchHandler @ 002d8f78 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7c30 to 002d7c43 has its CatchHandler @ 002d8f74 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_140);
                    /* try { // try from 002d7c44 to 002d7c57 has its CatchHandler @ 002d8c44 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7c5c to 002d7c93 has its CatchHandler @ 002d8c18 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT17(uStack_131,CONCAT61(acStack_137,cStack_138));
    local_110 = (undefined *)CONCAT17(cStack_139,CONCAT61(acStack_13f,local_140));
    local_e8 = 0;
    local_100 = local_130;
    plStack_f0 = _UNK_001d8138;
    local_f8 = _DAT_001d8130;
                    /* try { // try from 002d5eec to 002d5ef3 has its CatchHandler @ 002d89c8 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003814a8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d5f24 to 002d5f27 has its CatchHandler @ 002d8758 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d5f64:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d5f74:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d5f74;
      }
      if (local_70 != &local_90) goto LAB_002d5f64;
      local_c0 = &local_e0;
                    /* try { // try from 002d7460 to 002d746b has its CatchHandler @ 002d8190 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_140 & 1) == 0) {
      uStack_a0 = CONCAT17(uStack_131,CONCAT61(acStack_137,cStack_138));
      local_a8 = CONCAT17(cStack_139,CONCAT61(acStack_13f,local_140));
      local_98 = local_130;
    }
    else {
                    /* try { // try from 002d5fa8 to 002d5faf has its CatchHandler @ 002d86ec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_130,CONCAT17(uStack_131,CONCAT61(acStack_137,cStack_138)));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d5fd4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d5fd4;
    }
                    /* try { // try from 002d5fe0 to 002d5ff3 has its CatchHandler @ 002d89b8 */
    FUN_002634d4(plVar6,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d6028:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d6028;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x1c;
    uStack_149 = 0;
    acStack_157[0] = s_stringProperty_001d5c1d[0];
    acStack_157[1] = s_stringProperty_001d5c1d[1];
    acStack_157[2] = s_stringProperty_001d5c1d[2];
    acStack_157[3] = s_stringProperty_001d5c1d[3];
    acStack_157[4] = s_stringProperty_001d5c1d[4];
    acStack_157[5] = s_stringProperty_001d5c1d[5];
    cStack_151 = (char)s_stringProperty_001d5c1d._6_2_;
    cStack_150 = SUB21(s_stringProperty_001d5c1d._6_2_,1);
    acStack_14f[0] = s_stringProperty_001d5c1d[8];
    acStack_14f[1] = s_stringProperty_001d5c1d[9];
    acStack_14f[2] = s_stringProperty_001d5c1d[10];
    acStack_14f[3] = s_stringProperty_001d5c1d[0xb];
    acStack_14f[4] = s_stringProperty_001d5c1d[0xc];
    acStack_14f[5] = s_stringProperty_001d5c1d[0xd];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_158);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_158), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7650 to 002d7663 has its CatchHandler @ 002d90e8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002d7664 to 002d7677 has its CatchHandler @ 002d8f5c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d767c to 002d76b3 has its CatchHandler @ 002d8f38 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_158);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7ca0 to 002d7cb3 has its CatchHandler @ 002d8f34 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002d7cb4 to 002d7cc7 has its CatchHandler @ 002d8c14 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7ccc to 002d7d03 has its CatchHandler @ 002d8be8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT17(uStack_149,CONCAT61(acStack_14f,cStack_150));
    local_110 = (undefined *)CONCAT17(cStack_151,CONCAT61(acStack_157,local_158));
    local_e8 = 0;
    local_100 = local_148;
    plStack_f0 = _UNK_001d7f68;
    local_f8 = _DAT_001d7f60;
                    /* try { // try from 002d60b8 to 002d60bf has its CatchHandler @ 002d89a0 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00381528;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d60f0 to 002d60f3 has its CatchHandler @ 002d86dc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d6130:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d6140:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d6140;
      }
      if (local_70 != &local_90) goto LAB_002d6130;
      local_c0 = &local_e0;
                    /* try { // try from 002d7480 to 002d748b has its CatchHandler @ 002d818c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_158 & 1) == 0) {
      uStack_a0 = CONCAT17(uStack_149,CONCAT61(acStack_14f,cStack_150));
      local_a8 = CONCAT17(cStack_151,CONCAT61(acStack_157,local_158));
      local_98 = local_148;
    }
    else {
                    /* try { // try from 002d6174 to 002d617b has its CatchHandler @ 002d8670 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,CONCAT17(uStack_149,CONCAT61(acStack_14f,cStack_150)));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d61a0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d61a0;
    }
                    /* try { // try from 002d61ac to 002d61bf has its CatchHandler @ 002d8990 */
    FUN_002634d4(plVar6,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d61f4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d61f4;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = (basic_string)0x1e;
    local_160 = 0;
    acStack_16f[0] = s_booleanProperty_001d6c00[0];
    acStack_16f[1] = s_booleanProperty_001d6c00[1];
    acStack_16f[2] = s_booleanProperty_001d6c00[2];
    acStack_16f[3] = s_booleanProperty_001d6c00[3];
    acStack_16f[4] = s_booleanProperty_001d6c00[4];
    acStack_16f[5] = s_booleanProperty_001d6c00[5];
    acStack_16f[6] = s_booleanProperty_001d6c00[6];
    cStack_168 = s_booleanProperty_001d6c00[7];
    acStack_167[0] = s_booleanProperty_001d6c00[8];
    acStack_167[1] = s_booleanProperty_001d6c00[9];
    acStack_167[2] = s_booleanProperty_001d6c00[10];
    acStack_167[3] = s_booleanProperty_001d6c00[0xb];
    acStack_167[4] = s_booleanProperty_001d6c00[0xc];
    acStack_167[5] = s_booleanProperty_001d6c00[0xd];
    acStack_167[6] = s_booleanProperty_001d6c00[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_170);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_170), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d76c4 to 002d76d7 has its CatchHandler @ 002d90cc */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002d76d8 to 002d76eb has its CatchHandler @ 002d8f1c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d76f0 to 002d7727 has its CatchHandler @ 002d8ef8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_170);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7d10 to 002d7d23 has its CatchHandler @ 002d8ef4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002d7d24 to 002d7d37 has its CatchHandler @ 002d8be4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7d3c to 002d7d73 has its CatchHandler @ 002d8bb8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT71(acStack_167,cStack_168);
    local_110 = (undefined *)CONCAT71(acStack_16f,local_170);
    local_100 = (long *)CONCAT71(uStack_15f,local_160);
    local_e8 = 0;
    plStack_f0 = _UNK_001d81b8;
    local_f8 = _DAT_001d81b0;
                    /* try { // try from 002d6288 to 002d628f has its CatchHandler @ 002d8978 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003815a8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d62c0 to 002d62c3 has its CatchHandler @ 002d8660 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d6300:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d6310:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d6310;
      }
      if (local_70 != &local_90) goto LAB_002d6300;
      local_c0 = &local_e0;
                    /* try { // try from 002d74a0 to 002d74ab has its CatchHandler @ 002d8188 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_170 & 1) == 0) {
      uStack_a0 = CONCAT71(acStack_167,cStack_168);
      local_a8 = CONCAT71(acStack_16f,local_170);
      local_98 = (long *)CONCAT71(uStack_15f,local_160);
    }
    else {
                    /* try { // try from 002d6344 to 002d634b has its CatchHandler @ 002d85f4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_15f,local_160),CONCAT71(acStack_167,cStack_168));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d6370:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d6370;
    }
                    /* try { // try from 002d637c to 002d638f has its CatchHandler @ 002d8968 */
    FUN_002634d4(plVar6,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d63c4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d63c4;
    }
    if (((byte)local_170 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_15f,local_160));
    }
    local_188 = (basic_string)0x1a;
    uStack_17a = 0;
    acStack_187[0] = s_colorProperty_001d4f94[0];
    acStack_187[1] = s_colorProperty_001d4f94[1];
    acStack_187[2] = s_colorProperty_001d4f94[2];
    acStack_187[3] = s_colorProperty_001d4f94[3];
    acStack_187[4] = s_colorProperty_001d4f94[4];
    uStack_182 = (undefined2)s_colorProperty_001d4f94._5_3_;
    cStack_180 = SUB31(s_colorProperty_001d4f94._5_3_,2);
    acStack_17f[0] = s_colorProperty_001d4f94[8];
    acStack_17f[1] = s_colorProperty_001d4f94[9];
    acStack_17f[2] = s_colorProperty_001d4f94[10];
    acStack_17f[3] = s_colorProperty_001d4f94[0xb];
    acStack_17f[4] = s_colorProperty_001d4f94[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_188);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_188), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7738 to 002d774b has its CatchHandler @ 002d90b0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002d774c to 002d775f has its CatchHandler @ 002d8edc */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d7764 to 002d779b has its CatchHandler @ 002d8eb8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_188);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7d80 to 002d7d93 has its CatchHandler @ 002d8eb4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002d7d94 to 002d7da7 has its CatchHandler @ 002d8bb4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7dac to 002d7de3 has its CatchHandler @ 002d8b88 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT17(uStack_179,CONCAT16(uStack_17a,CONCAT51(acStack_17f,cStack_180)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_182,CONCAT51(acStack_187,local_188));
    local_e8 = 0;
    local_100 = local_178;
    plStack_f0 = _UNK_001d8188;
    local_f8 = _DAT_001d8180;
                    /* try { // try from 002d6454 to 002d645b has its CatchHandler @ 002d8950 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00381628;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d648c to 002d648f has its CatchHandler @ 002d85e4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d64cc:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d64dc:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d64dc;
      }
      if (local_70 != &local_90) goto LAB_002d64cc;
      local_c0 = &local_e0;
                    /* try { // try from 002d74c0 to 002d74cb has its CatchHandler @ 002d8184 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_188 & 1) == 0) {
      uStack_a0 = CONCAT17(uStack_179,CONCAT16(uStack_17a,CONCAT51(acStack_17f,cStack_180)));
      local_a8 = CONCAT26(uStack_182,CONCAT51(acStack_187,local_188));
      local_98 = local_178;
    }
    else {
                    /* try { // try from 002d6510 to 002d6517 has its CatchHandler @ 002d8578 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_178,
                 CONCAT17(uStack_179,CONCAT16(uStack_17a,CONCAT51(acStack_17f,cStack_180))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d653c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d653c;
    }
                    /* try { // try from 002d6548 to 002d655b has its CatchHandler @ 002d8940 */
    FUN_002634d4(plVar6,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d6590:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d6590;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete(local_178);
    }
    local_1a0 = (basic_string)0x18;
    uStack_197 = 0x79747265;
    uStack_19f = (undefined7)s_enumProperty_001d5258._0_8_;
    cStack_198 = SUB81(s_enumProperty_001d5258._0_8_,7);
    uStack_193 = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1a0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1a0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d77ac to 002d77bf has its CatchHandler @ 002d9094 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002d77c0 to 002d77d3 has its CatchHandler @ 002d8e9c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d77d8 to 002d780f has its CatchHandler @ 002d8e78 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1a0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7df0 to 002d7e03 has its CatchHandler @ 002d8e74 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002d7e04 to 002d7e17 has its CatchHandler @ 002d8b84 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7e1c to 002d7e53 has its CatchHandler @ 002d8b58 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT26(uStack_192,CONCAT15(uStack_193,CONCAT41(uStack_197,cStack_198)));
    local_110 = (undefined *)CONCAT71(uStack_19f,local_1a0);
    local_e8 = 0;
    local_100 = local_190;
    plStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002d6624 to 002d662b has its CatchHandler @ 002d8928 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003816a8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d665c to 002d665f has its CatchHandler @ 002d8568 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d669c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d66ac:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d66ac;
      }
      if (local_70 != &local_90) goto LAB_002d669c;
      local_c0 = &local_e0;
                    /* try { // try from 002d74e0 to 002d74eb has its CatchHandler @ 002d8180 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1a0 & 1) == 0) {
      uStack_a0 = CONCAT26(uStack_192,CONCAT15(uStack_193,CONCAT41(uStack_197,cStack_198)));
      local_a8 = CONCAT71(uStack_19f,local_1a0);
      local_98 = local_190;
    }
    else {
                    /* try { // try from 002d66e0 to 002d66e7 has its CatchHandler @ 002d84fc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_190,
                 CONCAT26(uStack_192,CONCAT15(uStack_193,CONCAT41(uStack_197,cStack_198))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d670c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d670c;
    }
                    /* try { // try from 002d6718 to 002d672b has its CatchHandler @ 002d8918 */
    FUN_002634d4(plVar6,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d6760:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d6760;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
    local_1b8 = (basic_string)0x1e;
    local_1a8 = 0;
    acStack_1b7[0] = s_triggerProperty_001d5a54[0];
    acStack_1b7[1] = s_triggerProperty_001d5a54[1];
    acStack_1b7[2] = s_triggerProperty_001d5a54[2];
    acStack_1b7[3] = s_triggerProperty_001d5a54[3];
    acStack_1b7[4] = s_triggerProperty_001d5a54[4];
    acStack_1b7[5] = s_triggerProperty_001d5a54[5];
    acStack_1b7[6] = s_triggerProperty_001d5a54[6];
    cStack_1b0 = s_triggerProperty_001d5a54[7];
    acStack_1af[0] = s_triggerProperty_001d5a54[8];
    acStack_1af[1] = s_triggerProperty_001d5a54[9];
    acStack_1af[2] = s_triggerProperty_001d5a54[10];
    acStack_1af[3] = s_triggerProperty_001d5a54[0xb];
    acStack_1af[4] = s_triggerProperty_001d5a54[0xc];
    acStack_1af[5] = s_triggerProperty_001d5a54[0xd];
    acStack_1af[6] = s_triggerProperty_001d5a54[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1b8);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1b8), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7820 to 002d7833 has its CatchHandler @ 002d907c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1b8);
                    /* try { // try from 002d7834 to 002d7847 has its CatchHandler @ 002d8e5c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d784c to 002d7883 has its CatchHandler @ 002d8e38 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1b8);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7e60 to 002d7e73 has its CatchHandler @ 002d8e34 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1b8);
                    /* try { // try from 002d7e74 to 002d7e87 has its CatchHandler @ 002d8b54 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7e8c to 002d7ec3 has its CatchHandler @ 002d8b28 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT71(acStack_1af,cStack_1b0);
    local_110 = (undefined *)CONCAT71(acStack_1b7,local_1b8);
    local_100 = (long *)CONCAT71(uStack_1a7,local_1a8);
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 002d67f4 to 002d67fb has its CatchHandler @ 002d8900 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00381728;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d682c to 002d682f has its CatchHandler @ 002d84ec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d686c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d687c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d687c;
      }
      if (local_70 != &local_90) goto LAB_002d686c;
      local_c0 = &local_e0;
                    /* try { // try from 002d7500 to 002d750b has its CatchHandler @ 002d817c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1b8 & 1) == 0) {
      uStack_a0 = CONCAT71(acStack_1af,cStack_1b0);
      local_a8 = CONCAT71(acStack_1b7,local_1b8);
      local_98 = (long *)CONCAT71(uStack_1a7,local_1a8);
    }
    else {
                    /* try { // try from 002d68b0 to 002d68b7 has its CatchHandler @ 002d8480 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_1a7,local_1a8),CONCAT71(acStack_1af,cStack_1b0));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d68dc:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d68dc;
    }
                    /* try { // try from 002d68e8 to 002d68fb has its CatchHandler @ 002d88f0 */
    FUN_002634d4(plVar6,&local_1b8,&local_1b8,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d6930:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d6930;
    }
    if (((byte)local_1b8 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_1a7,local_1a8));
    }
    local_1d0 = (basic_string)0x1a;
    uStack_1c2 = 0;
    acStack_1cf[0] = s_imageProperty_001d5dc0[0];
    acStack_1cf[1] = s_imageProperty_001d5dc0[1];
    acStack_1cf[2] = s_imageProperty_001d5dc0[2];
    acStack_1cf[3] = s_imageProperty_001d5dc0[3];
    acStack_1cf[4] = s_imageProperty_001d5dc0[4];
    uStack_1ca = (undefined2)s_imageProperty_001d5dc0._5_3_;
    cStack_1c8 = SUB31(s_imageProperty_001d5dc0._5_3_,2);
    acStack_1c7[0] = s_imageProperty_001d5dc0[8];
    acStack_1c7[1] = s_imageProperty_001d5dc0[9];
    acStack_1c7[2] = s_imageProperty_001d5dc0[10];
    acStack_1c7[3] = s_imageProperty_001d5dc0[0xb];
    acStack_1c7[4] = s_imageProperty_001d5dc0[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1d0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1d0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7894 to 002d78a7 has its CatchHandler @ 002d9060 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1d0);
                    /* try { // try from 002d78a8 to 002d78bb has its CatchHandler @ 002d8e1c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d78c0 to 002d78f7 has its CatchHandler @ 002d8df8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1d0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7ed0 to 002d7ee3 has its CatchHandler @ 002d8df4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1d0);
                    /* try { // try from 002d7ee4 to 002d7ef7 has its CatchHandler @ 002d8b24 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7efc to 002d7f33 has its CatchHandler @ 002d8af8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT17(uStack_1c1,CONCAT16(uStack_1c2,CONCAT51(acStack_1c7,cStack_1c8)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_1ca,CONCAT51(acStack_1cf,local_1d0));
    local_e8 = 0;
    local_100 = local_1c0;
    plStack_f0 = _UNK_001d8058;
    local_f8 = _DAT_001d8050;
                    /* try { // try from 002d69c0 to 002d69c7 has its CatchHandler @ 002d88d8 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003817a8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d69f8 to 002d69fb has its CatchHandler @ 002d8470 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d6a38:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d6a48:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d6a48;
      }
      if (local_70 != &local_90) goto LAB_002d6a38;
      local_c0 = &local_e0;
                    /* try { // try from 002d7520 to 002d752b has its CatchHandler @ 002d8178 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1d0 & 1) == 0) {
      uStack_a0 = CONCAT17(uStack_1c1,CONCAT16(uStack_1c2,CONCAT51(acStack_1c7,cStack_1c8)));
      local_a8 = CONCAT26(uStack_1ca,CONCAT51(acStack_1cf,local_1d0));
      local_98 = local_1c0;
    }
    else {
                    /* try { // try from 002d6a7c to 002d6a83 has its CatchHandler @ 002d8404 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_1c0,
                 CONCAT17(uStack_1c1,CONCAT16(uStack_1c2,CONCAT51(acStack_1c7,cStack_1c8))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d6aa8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d6aa8;
    }
                    /* try { // try from 002d6ab4 to 002d6ac7 has its CatchHandler @ 002d88c8 */
    FUN_002634d4(plVar6,&local_1d0,&local_1d0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d6afc:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d6afc;
    }
    if (((byte)local_1d0 & 1) != 0) {
      operator_delete(local_1c0);
    }
    local_1e8 = (basic_string)0x18;
    uStack_1df = 0x79747265;
    uStack_1e7 = (undefined7)s_listProperty_001d718b._0_8_;
    cStack_1e0 = SUB81(s_listProperty_001d718b._0_8_,7);
    uStack_1db = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1e8);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1e8), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7908 to 002d791b has its CatchHandler @ 002d9044 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1e8);
                    /* try { // try from 002d791c to 002d792f has its CatchHandler @ 002d8ddc */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d7934 to 002d796b has its CatchHandler @ 002d8db8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1e8);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7f40 to 002d7f53 has its CatchHandler @ 002d8db4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1e8);
                    /* try { // try from 002d7f54 to 002d7f67 has its CatchHandler @ 002d8af4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7f6c to 002d7fa3 has its CatchHandler @ 002d8ac8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT26(uStack_1da,CONCAT15(uStack_1db,CONCAT41(uStack_1df,cStack_1e0)));
    local_110 = (undefined *)CONCAT71(uStack_1e7,local_1e8);
    local_e8 = 0;
    local_100 = local_1d8;
    plStack_f0 = _UNK_001d80c8;
    local_f8 = _DAT_001d80c0;
                    /* try { // try from 002d6b90 to 002d6b97 has its CatchHandler @ 002d88b0 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00381828;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d6bc8 to 002d6bcb has its CatchHandler @ 002d83f4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d6c08:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d6c18:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d6c18;
      }
      if (local_70 != &local_90) goto LAB_002d6c08;
      local_c0 = &local_e0;
                    /* try { // try from 002d7540 to 002d754b has its CatchHandler @ 002d8174 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1e8 & 1) == 0) {
      uStack_a0 = CONCAT26(uStack_1da,CONCAT15(uStack_1db,CONCAT41(uStack_1df,cStack_1e0)));
      local_a8 = CONCAT71(uStack_1e7,local_1e8);
      local_98 = local_1d8;
    }
    else {
                    /* try { // try from 002d6c4c to 002d6c53 has its CatchHandler @ 002d8388 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_1d8,
                 CONCAT26(uStack_1da,CONCAT15(uStack_1db,CONCAT41(uStack_1df,cStack_1e0))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d6c78:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d6c78;
    }
                    /* try { // try from 002d6c84 to 002d6c97 has its CatchHandler @ 002d88a0 */
    FUN_002634d4(plVar6,&local_1e8,&local_1e8,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d6ccc:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d6ccc;
    }
    if (((byte)local_1e8 & 1) != 0) {
      operator_delete(local_1d8);
    }
    local_200 = (basic_string)0x20;
    uStack_1ef = 0;
    uStack_1f7 = (undefined7)s_artboardProperty_001d65f8._8_8_;
    cStack_1f0 = SUB81(s_artboardProperty_001d65f8._8_8_,7);
    uStack_1ff = (undefined7)s_artboardProperty_001d65f8._0_8_;
    cStack_1f8 = SUB81(s_artboardProperty_001d65f8._0_8_,7);
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_200);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_200), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d797c to 002d798f has its CatchHandler @ 002d9028 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_200);
                    /* try { // try from 002d7990 to 002d79a3 has its CatchHandler @ 002d8d9c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d79a8 to 002d79df has its CatchHandler @ 002d8d78 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_200);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7fb0 to 002d7fc3 has its CatchHandler @ 002d8d74 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_200);
                    /* try { // try from 002d7fc4 to 002d7fd7 has its CatchHandler @ 002d8ac4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d7fdc to 002d8013 has its CatchHandler @ 002d8a98 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT71(uStack_1f7,cStack_1f8);
    local_110 = (undefined *)CONCAT71(uStack_1ff,local_200);
    local_100 = (long *)CONCAT62(uStack_1ee,CONCAT11(uStack_1ef,cStack_1f0));
    local_e8 = 0;
    plStack_f0 = _UNK_001d80e8;
    local_f8 = _DAT_001d80e0;
                    /* try { // try from 002d6d54 to 002d6d5b has its CatchHandler @ 002d8888 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003818a8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d6d8c to 002d6d8f has its CatchHandler @ 002d8378 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d6dcc:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d6ddc:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d6ddc;
      }
      if (local_70 != &local_90) goto LAB_002d6dcc;
      local_c0 = &local_e0;
                    /* try { // try from 002d7560 to 002d756b has its CatchHandler @ 002d8170 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_200 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_1f7,cStack_1f8);
      local_a8 = CONCAT71(uStack_1ff,local_200);
      local_98 = (long *)CONCAT62(uStack_1ee,CONCAT11(uStack_1ef,cStack_1f0));
    }
    else {
                    /* try { // try from 002d6e10 to 002d6e17 has its CatchHandler @ 002d830c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT62(uStack_1ee,CONCAT11(uStack_1ef,cStack_1f0)),
                 CONCAT71(uStack_1f7,cStack_1f8));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d6e3c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d6e3c;
    }
                    /* try { // try from 002d6e48 to 002d6e5b has its CatchHandler @ 002d8878 */
    FUN_002634d4(plVar6,&local_200,&local_200,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d6e90:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d6e90;
    }
    if (((byte)local_200 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_1ee,CONCAT11(uStack_1ef,cStack_1f0)));
    }
    local_218 = (basic_string)0x12;
    uStack_20f = 0x6c;
    uStack_217 = (undefined7)s_viewModel_001d63c9._0_8_;
    cStack_210 = SUB81(s_viewModel_001d63c9._0_8_,7);
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_218);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_218), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d79f0 to 002d7a03 has its CatchHandler @ 002d900c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_218);
                    /* try { // try from 002d7a04 to 002d7a17 has its CatchHandler @ 002d8d5c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d7a1c to 002d7a53 has its CatchHandler @ 002d8d38 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_218);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d8020 to 002d8033 has its CatchHandler @ 002d8d34 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_218);
                    /* try { // try from 002d8034 to 002d8047 has its CatchHandler @ 002d8a94 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d804c to 002d8083 has its CatchHandler @ 002d8a68 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT53(uStack_20d,CONCAT21(uStack_20f,cStack_210));
    local_110 = (undefined *)CONCAT71(uStack_217,local_218);
    local_e8 = 0;
    local_100 = local_208;
    plStack_f0 = _UNK_001d7f88;
    local_f8 = _DAT_001d7f80;
                    /* try { // try from 002d6f1c to 002d6f23 has its CatchHandler @ 002d8860 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00381928;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d6f54 to 002d6f57 has its CatchHandler @ 002d82fc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d6f94:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d6fa4:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d6fa4;
      }
      if (local_70 != &local_90) goto LAB_002d6f94;
      local_c0 = &local_e0;
                    /* try { // try from 002d7580 to 002d758b has its CatchHandler @ 002d816c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_218 & 1) == 0) {
      uStack_a0 = CONCAT53(uStack_20d,CONCAT21(uStack_20f,cStack_210));
      local_a8 = CONCAT71(uStack_217,local_218);
      local_98 = local_208;
    }
    else {
                    /* try { // try from 002d6fd8 to 002d6fdf has its CatchHandler @ 002d8290 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_208,CONCAT53(uStack_20d,CONCAT21(uStack_20f,cStack_210)));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d7004:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d7004;
    }
                    /* try { // try from 002d7010 to 002d7023 has its CatchHandler @ 002d8850 */
    FUN_002634d4(plVar6,&local_218,&local_218,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d7058:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d7058;
    }
    if (((byte)local_218 & 1) != 0) {
      operator_delete(local_208);
    }
    local_230 = (basic_string)0x1c;
    uStack_221 = 0;
    acStack_22f[0] = s_viewModelAsync_001d5404[0];
    acStack_22f[1] = s_viewModelAsync_001d5404[1];
    acStack_22f[2] = s_viewModelAsync_001d5404[2];
    acStack_22f[3] = s_viewModelAsync_001d5404[3];
    acStack_22f[4] = s_viewModelAsync_001d5404[4];
    acStack_22f[5] = s_viewModelAsync_001d5404[5];
    cStack_229 = (char)s_viewModelAsync_001d5404._6_2_;
    cStack_228 = SUB21(s_viewModelAsync_001d5404._6_2_,1);
    acStack_227[0] = s_viewModelAsync_001d5404[8];
    acStack_227[1] = s_viewModelAsync_001d5404[9];
    acStack_227[2] = s_viewModelAsync_001d5404[10];
    acStack_227[3] = s_viewModelAsync_001d5404[0xb];
    acStack_227[4] = s_viewModelAsync_001d5404[0xc];
    acStack_227[5] = s_viewModelAsync_001d5404[0xd];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_230);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_230), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7a64 to 002d7a77 has its CatchHandler @ 002d8ff0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_230);
                    /* try { // try from 002d7a78 to 002d7a8b has its CatchHandler @ 002d8d1c */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d7a90 to 002d7ac7 has its CatchHandler @ 002d8cf8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_230);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d8090 to 002d80a3 has its CatchHandler @ 002d8cf4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_230);
                    /* try { // try from 002d80a4 to 002d80b7 has its CatchHandler @ 002d8a64 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d80bc to 002d80f3 has its CatchHandler @ 002d8a38 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT17(uStack_221,CONCAT61(acStack_227,cStack_228));
    local_110 = (undefined *)CONCAT17(cStack_229,CONCAT61(acStack_22f,local_230));
    local_e8 = 0;
    local_100 = local_220;
    plStack_f0 = _UNK_001d8028;
    local_f8 = _DAT_001d8020;
                    /* try { // try from 002d70e8 to 002d70ef has its CatchHandler @ 002d8838 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003819a8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d7120 to 002d7123 has its CatchHandler @ 002d8280 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d7160:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d7170:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d7170;
      }
      if (local_70 != &local_90) goto LAB_002d7160;
      local_c0 = &local_e0;
                    /* try { // try from 002d75a0 to 002d75ab has its CatchHandler @ 002d8168 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_230 & 1) == 0) {
      uStack_a0 = CONCAT17(uStack_221,CONCAT61(acStack_227,cStack_228));
      local_a8 = CONCAT17(cStack_229,CONCAT61(acStack_22f,local_230));
      local_98 = local_220;
    }
    else {
                    /* try { // try from 002d71a4 to 002d71ab has its CatchHandler @ 002d8214 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_220,CONCAT17(uStack_221,CONCAT61(acStack_227,cStack_228)));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d71d0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d71d0;
    }
                    /* try { // try from 002d71dc to 002d71ef has its CatchHandler @ 002d8828 */
    FUN_002634d4(plVar6,&local_230,&local_230,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d7224:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d7224;
    }
    if (((byte)local_230 & 1) != 0) {
      operator_delete(local_220);
    }
    local_248 = (basic_string)0x20;
    uStack_237 = 0;
    uStack_23f = (undefined7)s_replaceViewModel_001d4fa2._8_8_;
    cStack_238 = SUB81(s_replaceViewModel_001d4fa2._8_8_,7);
    uStack_247 = (undefined7)s_replaceViewModel_001d4fa2._0_8_;
    cStack_240 = SUB81(s_replaceViewModel_001d4fa2._0_8_,7);
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_248);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_248), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d7ad8 to 002d7aeb has its CatchHandler @ 002d8fd4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_248);
                    /* try { // try from 002d7aec to 002d7aff has its CatchHandler @ 002d8cdc */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002d7b04 to 002d7b3b has its CatchHandler @ 002d8cb8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_248);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d8100 to 002d8113 has its CatchHandler @ 002d8cb4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_248);
                    /* try { // try from 002d8114 to 002d8127 has its CatchHandler @ 002d8a34 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002d812c to 002d8163 has its CatchHandler @ 002d8a08 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002d9140;
    }
    plStack_108 = (long *)CONCAT71(uStack_23f,cStack_240);
    local_110 = (undefined *)CONCAT71(uStack_247,local_248);
    local_100 = (long *)CONCAT62(uStack_236,CONCAT11(uStack_237,cStack_238));
    local_e8 = 0;
    plStack_f0 = _UNK_001d7fe8;
    local_f8 = _DAT_001d7fe0;
                    /* try { // try from 002d72ac to 002d72b3 has its CatchHandler @ 002d8810 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00381a28;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002d72e4 to 002d72e7 has its CatchHandler @ 002d8204 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002d7324:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002d7334:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002d7334;
      }
      if (local_70 != &local_90) goto LAB_002d7324;
      local_c0 = &local_e0;
                    /* try { // try from 002d75c0 to 002d75cb has its CatchHandler @ 002d8164 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 2;
    if (((byte)local_248 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_23f,cStack_240);
      local_a8 = CONCAT71(uStack_247,local_248);
      local_98 = (long *)CONCAT62(uStack_236,CONCAT11(uStack_237,cStack_238));
    }
    else {
                    /* try { // try from 002d7368 to 002d736f has its CatchHandler @ 002d8198 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT62(uStack_236,CONCAT11(uStack_237,cStack_238)),
                 CONCAT71(uStack_23f,cStack_240));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002d7394:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002d7394;
    }
                    /* try { // try from 002d73a0 to 002d73b3 has its CatchHandler @ 002d8800 */
    FUN_002634d4(plVar6,&local_248,&local_248,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002d73e8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002d73e8;
    }
    if (((byte)local_248 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_236,CONCAT11(uStack_237,cStack_238)));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_002d9140:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d9144  FUN_002d9144 =====

void FUN_002d9144(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381a28;
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


// ===== 002d91b0  FUN_002d91b0 =====

void FUN_002d91b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381a28;
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


// ===== 002d9218  FUN_002d9218 =====

undefined8 * FUN_002d9218(long param_1)

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
  *puVar4 = &PTR_FUN_00381a28;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002d9278 to 002d927b has its CatchHandler @ 002d92b4 */
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


// ===== 002d92dc  FUN_002d92dc =====

void FUN_002d92dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381a28;
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


// ===== 002d9374  FUN_002d9374 =====

void FUN_002d9374(long param_1)

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


// ===== 002d93d4  FUN_002d93d4 =====

void FUN_002d93d4(void *param_1)

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


// ===== 002d9430  FUN_002d9430 =====

void FUN_002d9430(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  IRuntime *pIVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined8 *local_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98;
  long *local_90;
  basic_string local_80;
  undefined7 uStack_7f;
  long *plStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar9 = (IRuntime *)*param_5;
  uVar10 = *param_6;
  local_98 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002d9490 to 002d949f has its CatchHandler @ 002d9af0 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,&local_98);
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002d9518;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002d9518;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002d9518:
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)();
  }
  if (uVar10 == 2) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395710 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395710), puVar3 = PTR_defaultValue_00395708,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395708 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395710);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002d9554 to 002d9563 has its CatchHandler @ 002d97fc */
    facebook::jsi::Value::asString(pIVar9);
                    /* try { // try from 002d956c to 002d957b has its CatchHandler @ 002d97d8 */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_128);
    if (local_128[0] != (undefined8 *)0x0) {
      (**(code **)*local_128[0])();
    }
                    /* try { // try from 002d9590 to 002d959f has its CatchHandler @ 002d97bc */
    FUN_002accd0(&local_98,param_3,pIVar9 + 0x10);
                    /* try { // try from 002d95a0 to 002d95af has its CatchHandler @ 002d97a4 */
    (*pcVar11)(plVar1,&local_80,&local_98);
    if ((local_90 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_90 + 1), lVar5 == 0)) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
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
                    /* try { // try from 002d9670 to 002d967f has its CatchHandler @ 002d9c90 */
    FUN_002d9d48(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002d968c to 002d969f has its CatchHandler @ 002d9c70 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 002d96a0 to 002d96b3 has its CatchHandler @ 002d9c58 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002d96b4 to 002d96bf has its CatchHandler @ 002d9c28 */
    std::__ndk1::to_string(2);
                    /* try { // try from 002d96c0 to 002d96cf has its CatchHandler @ 002d9c04 */
    FUN_00264adc(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 002d96d0 to 002d96e3 has its CatchHandler @ 002d9be0 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002d96e4 to 002d96ef has its CatchHandler @ 002d9bbc */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002d96f0 to 002d96ff has its CatchHandler @ 002d9b98 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002d9700 to 002d9713 has its CatchHandler @ 002d9b70 */
    FUN_00263450(&local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002d9718 to 002d9753 has its CatchHandler @ 002d9b10 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,&local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d9cb8  FUN_002d9cb8 =====

void FUN_002d9cb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395718) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d9d08  FUN_002d9d08 =====

undefined * FUN_002d9d08(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395720;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d9d48  FUN_002d9d48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d9d48(undefined8 *param_1,int param_2,byte *param_3,long param_4)

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
    puVar7 = PTR_typeinfo_name_00395580;
    uStack_68 = _UNK_001d8068;
    local_70 = _DAT_001d8060;
    uVar14 = *(undefined8 *)(PTR_typeinfo_name_00395580 + 8);
    uVar13 = *(undefined8 *)PTR_typeinfo_name_00395580;
    uVar12 = *(undefined8 *)(PTR_typeinfo_name_00395580 + 0x18);
    uVar10 = *(undefined8 *)(PTR_typeinfo_name_00395580 + 0x10);
    *(undefined2 *)(local_60 + 6) = 0x4563;
    *(undefined1 *)((long)local_60 + 0x32) = 0;
    local_60[1] = uVar14;
    *local_60 = uVar13;
    local_60[3] = uVar12;
    local_60[2] = uVar10;
    uVar10 = *(undefined8 *)(puVar7 + 0x20);
    local_60[5] = *(undefined8 *)(puVar7 + 0x28);
    local_60[4] = uVar10;
                    /* try { // try from 002d9dd4 to 002d9de3 has its CatchHandler @ 002da074 */
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
    if (0xffffffffffffffef < uVar1) goto LAB_002da034;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002d9f38;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002d9f20 to 002d9f27 has its CatchHandler @ 002da088 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002d9f38:
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
                    /* try { // try from 002d9f78 to 002d9f7f has its CatchHandler @ 002da060 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 002d9f98 to 002d9fab has its CatchHandler @ 002da048 */
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002da0d0;
                    /* try { // try from 002da030 to 002da033 has its CatchHandler @ 002da0a4 */
      FUN_00260a84();
LAB_002da034:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002da044 to 002da047 has its CatchHandler @ 002da088 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002d9f98 with catch @ 002da048 */
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
      goto LAB_002da0d0;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002d9ea8;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002d9e90 to 002d9e97 has its CatchHandler @ 002da0a4 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_002d9ea8:
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
                    /* try { // try from 002d9ee8 to 002d9eef has its CatchHandler @ 002da08c */
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
LAB_002da0d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002da0d4  FUN_002da0d4 =====

void FUN_002da0d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003819a8;
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


// ===== 002da140  FUN_002da140 =====

void FUN_002da140(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003819a8;
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


// ===== 002da1a8  FUN_002da1a8 =====

undefined8 * FUN_002da1a8(long param_1)

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
  *puVar4 = &PTR_FUN_003819a8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002da208 to 002da20b has its CatchHandler @ 002da244 */
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


// ===== 002da26c  FUN_002da26c =====

void FUN_002da26c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003819a8;
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


// ===== 002da304  FUN_002da304 =====

void FUN_002da304(long param_1)

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


// ===== 002da364  FUN_002da364 =====

void FUN_002da364(void *param_1)

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


// ===== 002da3c0  FUN_002da3c0 =====

void FUN_002da3c0(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
                    /* try { // try from 002da420 to 002da42f has its CatchHandler @ 002daa70 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002da4a8;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002da4a8;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002da4a8:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003956f0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003956f0), puVar3 = PTR_defaultValue_003956e8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003956e8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003956f0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002da4e4 to 002da4f3 has its CatchHandler @ 002da77c */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002da4fc to 002da50b has its CatchHandler @ 002da758 */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_140);
    if (local_140[0] != (undefined8 *)0x0) {
      (**(code **)*local_140[0])();
    }
                    /* try { // try from 002da520 to 002da52f has its CatchHandler @ 002da73c */
    (*pcVar11)(&local_128,plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 002da544 to 002da54f has its CatchHandler @ 002da724 */
    FUN_002ce204(param_1,param_3,local_128,local_120);
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
                    /* try { // try from 002da5f0 to 002da5ff has its CatchHandler @ 002dac10 */
    FUN_002d9d48(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002da60c to 002da61f has its CatchHandler @ 002dabf0 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 002da620 to 002da633 has its CatchHandler @ 002dabd8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002da634 to 002da63f has its CatchHandler @ 002daba8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002da640 to 002da64f has its CatchHandler @ 002dab84 */
    FUN_00264adc(auStack_e0,auStack_f8,&local_128);
                    /* try { // try from 002da650 to 002da663 has its CatchHandler @ 002dab60 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002da664 to 002da66f has its CatchHandler @ 002dab3c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002da670 to 002da67f has its CatchHandler @ 002dab18 */
    FUN_00264adc(auStack_b0,auStack_c8,local_140);
                    /* try { // try from 002da680 to 002da693 has its CatchHandler @ 002daaf0 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002da698 to 002da6d3 has its CatchHandler @ 002daa90 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dac38  FUN_002dac38 =====

void FUN_002dac38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003956f8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002dac88  FUN_002dac88 =====

undefined * FUN_002dac88(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395700;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dacc8  FUN_002dacc8 =====

void FUN_002dacc8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381928;
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


// ===== 002dad34  FUN_002dad34 =====

void FUN_002dad34(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381928;
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


// ===== 002dad9c  FUN_002dad9c =====

undefined8 * FUN_002dad9c(long param_1)

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
  *puVar4 = &PTR_FUN_00381928;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002dadfc to 002dadff has its CatchHandler @ 002dae38 */
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


// ===== 002dae60  FUN_002dae60 =====

void FUN_002dae60(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381928;
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


// ===== 002daef8  FUN_002daef8 =====

void FUN_002daef8(long param_1)

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


// ===== 002daf58  FUN_002daf58 =====

void FUN_002daf58(void *param_1)

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


// ===== 002dafb4  FUN_002dafb4 =====

void FUN_002dafb4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
                    /* try { // try from 002db014 to 002db023 has its CatchHandler @ 002db680 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395338,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002db09c;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002db09c;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar8 = plVar1;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002db09c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003956d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003956d0), puVar3 = PTR_defaultValue_003956c8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003956c8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003956d0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002db0d8 to 002db0e7 has its CatchHandler @ 002db38c */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002db0f0 to 002db0ff has its CatchHandler @ 002db368 */
    (**(code **)(*param_3 + 0x120))(local_98,param_3,local_140);
    if (local_140[0] != (undefined8 *)0x0) {
      (**(code **)*local_140[0])();
    }
                    /* try { // try from 002db114 to 002db123 has its CatchHandler @ 002db34c */
    (*pcVar11)(&local_80,plVar1,local_98);
    if (((ulong)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 002db140 to 002db14b has its CatchHandler @ 002db330 */
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
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002db1fc to 002db20b has its CatchHandler @ 002db820 */
    FUN_002d9d48(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002db218 to 002db22b has its CatchHandler @ 002db800 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002db22c to 002db23f has its CatchHandler @ 002db7e8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002db240 to 002db24b has its CatchHandler @ 002db7b8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002db24c to 002db25b has its CatchHandler @ 002db794 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002db25c to 002db26f has its CatchHandler @ 002db770 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002db270 to 002db27b has its CatchHandler @ 002db74c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002db27c to 002db28b has its CatchHandler @ 002db728 */
    FUN_00264adc(auStack_b0,auStack_c8,local_140);
                    /* try { // try from 002db28c to 002db29f has its CatchHandler @ 002db700 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002db2a4 to 002db2df has its CatchHandler @ 002db6a0 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002db848  FUN_002db848 =====

void FUN_002db848(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003956d8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002db898  FUN_002db898 =====

undefined * FUN_002db898(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003956e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002db8d8  FUN_002db8d8 =====

void FUN_002db8d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003818a8;
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


// ===== 002db944  FUN_002db944 =====

void FUN_002db944(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003818a8;
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


// ===== 002db9ac  FUN_002db9ac =====

undefined8 * FUN_002db9ac(long param_1)

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
  *puVar4 = &PTR_FUN_003818a8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002dba0c to 002dba0f has its CatchHandler @ 002dba48 */
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


// ===== 002dba70  FUN_002dba70 =====

void FUN_002dba70(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003818a8;
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


// ===== 002dbb08  FUN_002dbb08 =====

void FUN_002dbb08(long param_1)

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


// ===== 002dbb68  FUN_002dbb68 =====

void FUN_002dbb68(void *param_1)

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


// ===== 002dbbc4  FUN_002dbbc4 =====

void FUN_002dbbc4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002dbc24 to 002dbc33 has its CatchHandler @ 002dc024 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002dbc80;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002dbc80:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003956b0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003956b0), puVar3 = PTR_defaultValue_003956a8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003956a8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003956b0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002dbce8 to 002dbcf7 has its CatchHandler @ 002dc018 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002dbd00 to 002dbd0f has its CatchHandler @ 002dbff4 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002dbd24 to 002dbd33 has its CatchHandler @ 002dbfd8 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002dbf04 to 002dbf17 has its CatchHandler @ 002dc238 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395dd0,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002dbf24 to 002dbf37 has its CatchHandler @ 002dc1f4 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002dbf38 to 002dbf4b has its CatchHandler @ 002dc1c0 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002dbf50 to 002dbf8b has its CatchHandler @ 002dc188 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002dc560;
      }
                    /* try { // try from 002dbd5c to 002dbd6b has its CatchHandler @ 002dc238 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002dbe1c to 002dbe2b has its CatchHandler @ 002dc53c */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002dbe38 to 002dbe4b has its CatchHandler @ 002dc218 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002dbe4c to 002dbe5f has its CatchHandler @ 002dc1dc */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002dbe60 to 002dbe6b has its CatchHandler @ 002dc158 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002dbe6c to 002dbe7b has its CatchHandler @ 002dc134 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002dbe7c to 002dbe8f has its CatchHandler @ 002dc110 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002dbe90 to 002dbe9b has its CatchHandler @ 002dc0ec */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002dbe9c to 002dbeab has its CatchHandler @ 002dc0c8 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002dbeac to 002dbebf has its CatchHandler @ 002dc0a4 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002dbec4 to 002dbeff has its CatchHandler @ 002dc044 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002dc560:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dc564  FUN_002dc564 =====

void FUN_002dc564(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003956b8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002dc5b4  FUN_002dc5b4 =====

undefined * FUN_002dc5b4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003956c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dc5f4  FUN_002dc5f4 =====

void FUN_002dc5f4(long *param_1,char param_2)

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


// ===== 002dc688  FUN_002dc688 =====

void FUN_002dc688(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381828;
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


// ===== 002dc6f4  FUN_002dc6f4 =====

void FUN_002dc6f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381828;
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


// ===== 002dc75c  FUN_002dc75c =====

undefined8 * FUN_002dc75c(long param_1)

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
  *puVar4 = &PTR_FUN_00381828;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002dc7bc to 002dc7bf has its CatchHandler @ 002dc7f8 */
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


// ===== 002dc820  FUN_002dc820 =====

void FUN_002dc820(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381828;
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


// ===== 002dc8b8  FUN_002dc8b8 =====

void FUN_002dc8b8(long param_1)

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


// ===== 002dc918  FUN_002dc918 =====

void FUN_002dc918(void *param_1)

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


// ===== 002dc974  FUN_002dc974 =====

void FUN_002dc974(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002dc9d4 to 002dc9e3 has its CatchHandler @ 002dcdd4 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002dca30;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002dca30:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395690 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395690), puVar3 = PTR_defaultValue_00395688,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395688 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395690);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002dca98 to 002dcaa7 has its CatchHandler @ 002dcdc8 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002dcab0 to 002dcabf has its CatchHandler @ 002dcda4 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002dcad4 to 002dcae3 has its CatchHandler @ 002dcd88 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002dccb4 to 002dccc7 has its CatchHandler @ 002dcfe8 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395c08,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002dccd4 to 002dcce7 has its CatchHandler @ 002dcfa4 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002dcce8 to 002dccfb has its CatchHandler @ 002dcf70 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002dcd00 to 002dcd3b has its CatchHandler @ 002dcf38 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002dd310;
      }
                    /* try { // try from 002dcb0c to 002dcb1b has its CatchHandler @ 002dcfe8 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002dcbcc to 002dcbdb has its CatchHandler @ 002dd2ec */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002dcbe8 to 002dcbfb has its CatchHandler @ 002dcfc8 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002dcbfc to 002dcc0f has its CatchHandler @ 002dcf8c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002dcc10 to 002dcc1b has its CatchHandler @ 002dcf08 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002dcc1c to 002dcc2b has its CatchHandler @ 002dcee4 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002dcc2c to 002dcc3f has its CatchHandler @ 002dcec0 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002dcc40 to 002dcc4b has its CatchHandler @ 002dce9c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002dcc4c to 002dcc5b has its CatchHandler @ 002dce78 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002dcc5c to 002dcc6f has its CatchHandler @ 002dce54 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002dcc74 to 002dccaf has its CatchHandler @ 002dcdf4 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002dd310:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dd314  FUN_002dd314 =====

void FUN_002dd314(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395698) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002dd364  FUN_002dd364 =====

undefined * FUN_002dd364(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003956a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dd3a4  FUN_002dd3a4 =====

void FUN_002dd3a4(long *param_1,char param_2)

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


// ===== 002dd438  FUN_002dd438 =====

void FUN_002dd438(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003817a8;
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


// ===== 002dd4a4  FUN_002dd4a4 =====

void FUN_002dd4a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003817a8;
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


// ===== 002dd50c  FUN_002dd50c =====

undefined8 * FUN_002dd50c(long param_1)

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
  *puVar4 = &PTR_FUN_003817a8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002dd56c to 002dd56f has its CatchHandler @ 002dd5a8 */
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


// ===== 002dd5d0  FUN_002dd5d0 =====

void FUN_002dd5d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003817a8;
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


// ===== 002dd668  FUN_002dd668 =====

void FUN_002dd668(long param_1)

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


// ===== 002dd6c8  FUN_002dd6c8 =====

void FUN_002dd6c8(void *param_1)

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


// ===== 002dd724  FUN_002dd724 =====

void FUN_002dd724(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002dd784 to 002dd793 has its CatchHandler @ 002ddb84 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002dd7e0;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002dd7e0:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395670 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395670), puVar3 = PTR_defaultValue_00395668,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395668 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395670);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002dd848 to 002dd857 has its CatchHandler @ 002ddb78 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002dd860 to 002dd86f has its CatchHandler @ 002ddb54 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002dd884 to 002dd893 has its CatchHandler @ 002ddb38 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002dda64 to 002dda77 has its CatchHandler @ 002ddd98 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395ba0,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002dda84 to 002dda97 has its CatchHandler @ 002ddd54 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002dda98 to 002ddaab has its CatchHandler @ 002ddd20 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002ddab0 to 002ddaeb has its CatchHandler @ 002ddce8 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002de0c0;
      }
                    /* try { // try from 002dd8bc to 002dd8cb has its CatchHandler @ 002ddd98 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002dd97c to 002dd98b has its CatchHandler @ 002de09c */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002dd998 to 002dd9ab has its CatchHandler @ 002ddd78 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002dd9ac to 002dd9bf has its CatchHandler @ 002ddd3c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002dd9c0 to 002dd9cb has its CatchHandler @ 002ddcb8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002dd9cc to 002dd9db has its CatchHandler @ 002ddc94 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002dd9dc to 002dd9ef has its CatchHandler @ 002ddc70 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002dd9f0 to 002dd9fb has its CatchHandler @ 002ddc4c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002dd9fc to 002dda0b has its CatchHandler @ 002ddc28 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002dda0c to 002dda1f has its CatchHandler @ 002ddc04 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002dda24 to 002dda5f has its CatchHandler @ 002ddba4 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002de0c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002de0c4  FUN_002de0c4 =====

void FUN_002de0c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395678) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002de114  FUN_002de114 =====

undefined * FUN_002de114(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395680;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002de154  FUN_002de154 =====

void FUN_002de154(long *param_1,char param_2)

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


// ===== 002de1e8  FUN_002de1e8 =====

void FUN_002de1e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381728;
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


// ===== 002de254  FUN_002de254 =====

void FUN_002de254(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381728;
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


// ===== 002de2bc  FUN_002de2bc =====

undefined8 * FUN_002de2bc(long param_1)

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
  *puVar4 = &PTR_FUN_00381728;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002de31c to 002de31f has its CatchHandler @ 002de358 */
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


// ===== 002de380  FUN_002de380 =====

void FUN_002de380(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381728;
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


// ===== 002de418  FUN_002de418 =====

void FUN_002de418(long param_1)

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


// ===== 002de478  FUN_002de478 =====

void FUN_002de478(void *param_1)

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


// ===== 002de4d4  FUN_002de4d4 =====

void FUN_002de4d4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002de534 to 002de543 has its CatchHandler @ 002de934 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002de590;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002de590:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395650 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395650), puVar3 = PTR_defaultValue_00395648,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395648 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395650);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002de5f8 to 002de607 has its CatchHandler @ 002de928 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002de610 to 002de61f has its CatchHandler @ 002de904 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002de634 to 002de643 has its CatchHandler @ 002de8e8 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002de814 to 002de827 has its CatchHandler @ 002deb48 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395b58,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002de834 to 002de847 has its CatchHandler @ 002deb04 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002de848 to 002de85b has its CatchHandler @ 002dead0 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002de860 to 002de89b has its CatchHandler @ 002dea98 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002dee70;
      }
                    /* try { // try from 002de66c to 002de67b has its CatchHandler @ 002deb48 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002de72c to 002de73b has its CatchHandler @ 002dee4c */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002de748 to 002de75b has its CatchHandler @ 002deb28 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002de75c to 002de76f has its CatchHandler @ 002deaec */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002de770 to 002de77b has its CatchHandler @ 002dea68 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002de77c to 002de78b has its CatchHandler @ 002dea44 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002de78c to 002de79f has its CatchHandler @ 002dea20 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002de7a0 to 002de7ab has its CatchHandler @ 002de9fc */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002de7ac to 002de7bb has its CatchHandler @ 002de9d8 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002de7bc to 002de7cf has its CatchHandler @ 002de9b4 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002de7d4 to 002de80f has its CatchHandler @ 002de954 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002dee70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dee74  FUN_002dee74 =====

void FUN_002dee74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395658) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002deec4  FUN_002deec4 =====

undefined * FUN_002deec4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395660;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002def04  FUN_002def04 =====

void FUN_002def04(long *param_1,char param_2)

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


// ===== 002def98  FUN_002def98 =====

void FUN_002def98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003816a8;
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


// ===== 002df004  FUN_002df004 =====

void FUN_002df004(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003816a8;
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


// ===== 002df06c  FUN_002df06c =====

undefined8 * FUN_002df06c(long param_1)

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
  *puVar4 = &PTR_FUN_003816a8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002df0cc to 002df0cf has its CatchHandler @ 002df108 */
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


// ===== 002df130  FUN_002df130 =====

void FUN_002df130(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003816a8;
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


// ===== 002df1c8  FUN_002df1c8 =====

void FUN_002df1c8(long param_1)

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


// ===== 002df228  FUN_002df228 =====

void FUN_002df228(void *param_1)

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


// ===== 002df284  FUN_002df284 =====

void FUN_002df284(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002df2e4 to 002df2f3 has its CatchHandler @ 002df6e4 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002df340;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002df340:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395630 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395630), puVar3 = PTR_defaultValue_00395628,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395628 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395630);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002df3a8 to 002df3b7 has its CatchHandler @ 002df6d8 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002df3c0 to 002df3cf has its CatchHandler @ 002df6b4 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002df3e4 to 002df3f3 has its CatchHandler @ 002df698 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002df5c4 to 002df5d7 has its CatchHandler @ 002df8f8 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395ab0,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002df5e4 to 002df5f7 has its CatchHandler @ 002df8b4 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002df5f8 to 002df60b has its CatchHandler @ 002df880 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002df610 to 002df64b has its CatchHandler @ 002df848 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002dfc20;
      }
                    /* try { // try from 002df41c to 002df42b has its CatchHandler @ 002df8f8 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002df4dc to 002df4eb has its CatchHandler @ 002dfbfc */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002df4f8 to 002df50b has its CatchHandler @ 002df8d8 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002df50c to 002df51f has its CatchHandler @ 002df89c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002df520 to 002df52b has its CatchHandler @ 002df818 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002df52c to 002df53b has its CatchHandler @ 002df7f4 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002df53c to 002df54f has its CatchHandler @ 002df7d0 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002df550 to 002df55b has its CatchHandler @ 002df7ac */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002df55c to 002df56b has its CatchHandler @ 002df788 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002df56c to 002df57f has its CatchHandler @ 002df764 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002df584 to 002df5bf has its CatchHandler @ 002df704 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002dfc20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dfc24  FUN_002dfc24 =====

void FUN_002dfc24(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395638) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002dfc74  FUN_002dfc74 =====

undefined * FUN_002dfc74(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395640;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002dfcb4  FUN_002dfcb4 =====

void FUN_002dfcb4(long *param_1,char param_2)

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


// ===== 002dfd48  FUN_002dfd48 =====

void FUN_002dfd48(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381628;
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


// ===== 002dfdb4  FUN_002dfdb4 =====

void FUN_002dfdb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381628;
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


// ===== 002dfe1c  FUN_002dfe1c =====

undefined8 * FUN_002dfe1c(long param_1)

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
  *puVar4 = &PTR_FUN_00381628;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002dfe7c to 002dfe7f has its CatchHandler @ 002dfeb8 */
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


// ===== 002dfee0  FUN_002dfee0 =====

void FUN_002dfee0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381628;
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


// ===== 002dff78  FUN_002dff78 =====

void FUN_002dff78(long param_1)

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


// ===== 002dffd8  FUN_002dffd8 =====

void FUN_002dffd8(void *param_1)

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


// ===== 002e0034  FUN_002e0034 =====

void FUN_002e0034(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002e0094 to 002e00a3 has its CatchHandler @ 002e0494 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002e00f0;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002e00f0:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395610 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395610), puVar3 = PTR_defaultValue_00395608,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395608 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395610);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002e0158 to 002e0167 has its CatchHandler @ 002e0488 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002e0170 to 002e017f has its CatchHandler @ 002e0464 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002e0194 to 002e01a3 has its CatchHandler @ 002e0448 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002e0374 to 002e0387 has its CatchHandler @ 002e06a8 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395a08,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e0394 to 002e03a7 has its CatchHandler @ 002e0664 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002e03a8 to 002e03bb has its CatchHandler @ 002e0630 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002e03c0 to 002e03fb has its CatchHandler @ 002e05f8 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002e09d0;
      }
                    /* try { // try from 002e01cc to 002e01db has its CatchHandler @ 002e06a8 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002e028c to 002e029b has its CatchHandler @ 002e09ac */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e02a8 to 002e02bb has its CatchHandler @ 002e0688 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002e02bc to 002e02cf has its CatchHandler @ 002e064c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002e02d0 to 002e02db has its CatchHandler @ 002e05c8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002e02dc to 002e02eb has its CatchHandler @ 002e05a4 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002e02ec to 002e02ff has its CatchHandler @ 002e0580 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002e0300 to 002e030b has its CatchHandler @ 002e055c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002e030c to 002e031b has its CatchHandler @ 002e0538 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002e031c to 002e032f has its CatchHandler @ 002e0514 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002e0334 to 002e036f has its CatchHandler @ 002e04b4 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002e09d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e09d4  FUN_002e09d4 =====

void FUN_002e09d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395618) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e0a24  FUN_002e0a24 =====

undefined * FUN_002e0a24(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395620;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e0a64  FUN_002e0a64 =====

void FUN_002e0a64(long *param_1,char param_2)

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


// ===== 002e0af8  FUN_002e0af8 =====

void FUN_002e0af8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003815a8;
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


// ===== 002e0b64  FUN_002e0b64 =====

void FUN_002e0b64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003815a8;
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


// ===== 002e0bcc  FUN_002e0bcc =====

undefined8 * FUN_002e0bcc(long param_1)

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
  *puVar4 = &PTR_FUN_003815a8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e0c2c to 002e0c2f has its CatchHandler @ 002e0c68 */
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


// ===== 002e0c90  FUN_002e0c90 =====

void FUN_002e0c90(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003815a8;
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


// ===== 002e0d28  FUN_002e0d28 =====

void FUN_002e0d28(long param_1)

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


// ===== 002e0d88  FUN_002e0d88 =====

void FUN_002e0d88(void *param_1)

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


// ===== 002e0de4  FUN_002e0de4 =====

void FUN_002e0de4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002e0e44 to 002e0e53 has its CatchHandler @ 002e1244 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002e0ea0;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002e0ea0:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003955f0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003955f0), puVar3 = PTR_defaultValue_003955e8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003955e8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003955f0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002e0f08 to 002e0f17 has its CatchHandler @ 002e1238 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002e0f20 to 002e0f2f has its CatchHandler @ 002e1214 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002e0f44 to 002e0f53 has its CatchHandler @ 002e11f8 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002e1124 to 002e1137 has its CatchHandler @ 002e1458 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395960,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e1144 to 002e1157 has its CatchHandler @ 002e1414 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002e1158 to 002e116b has its CatchHandler @ 002e13e0 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002e1170 to 002e11ab has its CatchHandler @ 002e13a8 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002e1780;
      }
                    /* try { // try from 002e0f7c to 002e0f8b has its CatchHandler @ 002e1458 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002e103c to 002e104b has its CatchHandler @ 002e175c */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e1058 to 002e106b has its CatchHandler @ 002e1438 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002e106c to 002e107f has its CatchHandler @ 002e13fc */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002e1080 to 002e108b has its CatchHandler @ 002e1378 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002e108c to 002e109b has its CatchHandler @ 002e1354 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002e109c to 002e10af has its CatchHandler @ 002e1330 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002e10b0 to 002e10bb has its CatchHandler @ 002e130c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002e10bc to 002e10cb has its CatchHandler @ 002e12e8 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002e10cc to 002e10df has its CatchHandler @ 002e12c4 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002e10e4 to 002e111f has its CatchHandler @ 002e1264 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002e1780:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e1784  FUN_002e1784 =====

void FUN_002e1784(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003955f8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e17d4  FUN_002e17d4 =====

undefined * FUN_002e17d4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395600;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e1814  FUN_002e1814 =====

void FUN_002e1814(long *param_1,char param_2)

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


// ===== 002e18a8  FUN_002e18a8 =====

void FUN_002e18a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381528;
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


// ===== 002e1914  FUN_002e1914 =====

void FUN_002e1914(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381528;
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


// ===== 002e197c  FUN_002e197c =====

undefined8 * FUN_002e197c(long param_1)

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
  *puVar4 = &PTR_FUN_00381528;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e19dc to 002e19df has its CatchHandler @ 002e1a18 */
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


// ===== 002e1a40  FUN_002e1a40 =====

void FUN_002e1a40(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381528;
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


// ===== 002e1ad8  FUN_002e1ad8 =====

void FUN_002e1ad8(long param_1)

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


// ===== 002e1b38  FUN_002e1b38 =====

void FUN_002e1b38(void *param_1)

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


// ===== 002e1b94  FUN_002e1b94 =====

void FUN_002e1b94(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002e1bf4 to 002e1c03 has its CatchHandler @ 002e1ff4 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002e1c50;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002e1c50:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003955d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003955d0), puVar3 = PTR_defaultValue_003955c8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003955c8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003955d0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002e1cb8 to 002e1cc7 has its CatchHandler @ 002e1fe8 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002e1cd0 to 002e1cdf has its CatchHandler @ 002e1fc4 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002e1cf4 to 002e1d03 has its CatchHandler @ 002e1fa8 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002e1ed4 to 002e1ee7 has its CatchHandler @ 002e2208 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395840,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e1ef4 to 002e1f07 has its CatchHandler @ 002e21c4 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002e1f08 to 002e1f1b has its CatchHandler @ 002e2190 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002e1f20 to 002e1f5b has its CatchHandler @ 002e2158 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002e2530;
      }
                    /* try { // try from 002e1d2c to 002e1d3b has its CatchHandler @ 002e2208 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002e1dec to 002e1dfb has its CatchHandler @ 002e250c */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e1e08 to 002e1e1b has its CatchHandler @ 002e21e8 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002e1e1c to 002e1e2f has its CatchHandler @ 002e21ac */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002e1e30 to 002e1e3b has its CatchHandler @ 002e2128 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002e1e3c to 002e1e4b has its CatchHandler @ 002e2104 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002e1e4c to 002e1e5f has its CatchHandler @ 002e20e0 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002e1e60 to 002e1e6b has its CatchHandler @ 002e20bc */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002e1e6c to 002e1e7b has its CatchHandler @ 002e2098 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002e1e7c to 002e1e8f has its CatchHandler @ 002e2074 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002e1e94 to 002e1ecf has its CatchHandler @ 002e2014 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002e2530:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e2534  FUN_002e2534 =====

void FUN_002e2534(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003955d8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e2584  FUN_002e2584 =====

undefined * FUN_002e2584(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003955e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e25c4  FUN_002e25c4 =====

void FUN_002e25c4(long *param_1,char param_2)

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


// ===== 002e2658  FUN_002e2658 =====

void FUN_002e2658(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003814a8;
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


// ===== 002e26c4  FUN_002e26c4 =====

void FUN_002e26c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003814a8;
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


// ===== 002e272c  FUN_002e272c =====

undefined8 * FUN_002e272c(long param_1)

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
  *puVar4 = &PTR_FUN_003814a8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e278c to 002e278f has its CatchHandler @ 002e27c8 */
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


// ===== 002e27f0  FUN_002e27f0 =====

void FUN_002e27f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003814a8;
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


// ===== 002e2888  FUN_002e2888 =====

void FUN_002e2888(long param_1)

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


// ===== 002e28e8  FUN_002e28e8 =====

void FUN_002e28e8(void *param_1)

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


// ===== 002e2944  FUN_002e2944 =====

void FUN_002e2944(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long *local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002e29a4 to 002e29b3 has its CatchHandler @ 002e2da4 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_90 != (long *)0x0) goto LAB_002e2a00;
  }
  else if (plStack_90 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_90 + 1);
    plVar8 = plStack_90;
LAB_002e2a00:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003955b0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003955b0), puVar3 = PTR_defaultValue_003955a8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003955a8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003955b0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002e2a68 to 002e2a77 has its CatchHandler @ 002e2d98 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002e2a80 to 002e2a8f has its CatchHandler @ 002e2d74 */
    (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
                    /* try { // try from 002e2aa4 to 002e2ab3 has its CatchHandler @ 002e2d58 */
    (*pcVar11)(&local_80,plVar1,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* try { // try from 002e2c84 to 002e2c97 has its CatchHandler @ 002e2fb8 */
        FUN_00264e5c(&local_98,PTR_typeinfo_name_00395788,0);
        pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e2ca4 to 002e2cb7 has its CatchHandler @ 002e2f74 */
        std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_98);
                    /* try { // try from 002e2cb8 to 002e2ccb has its CatchHandler @ 002e2f40 */
        FUN_00263450(local_b0,auStack_c8,&DAT_001d795b);
                    /* try { // try from 002e2cd0 to 002e2d0b has its CatchHandler @ 002e2f08 */
        facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_002e32e0;
      }
                    /* try { // try from 002e2adc to 002e2aeb has its CatchHandler @ 002e2fb8 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_80 + *(long *)(*local_80 + -0x20)));
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
                    /* try { // try from 002e2b9c to 002e2bab has its CatchHandler @ 002e32bc */
    FUN_002d9d48(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e2bb8 to 002e2bcb has its CatchHandler @ 002e2f98 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 002e2bcc to 002e2bdf has its CatchHandler @ 002e2f5c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002e2be0 to 002e2beb has its CatchHandler @ 002e2ed8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002e2bec to 002e2bfb has its CatchHandler @ 002e2eb4 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002e2bfc to 002e2c0f has its CatchHandler @ 002e2e90 */
    FUN_00263450(&local_80,auStack_e0," arguments, but received ");
                    /* try { // try from 002e2c10 to 002e2c1b has its CatchHandler @ 002e2e6c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002e2c1c to 002e2c2b has its CatchHandler @ 002e2e48 */
    FUN_00264adc(auStack_c8,&local_80,auStack_140);
                    /* try { // try from 002e2c2c to 002e2c3f has its CatchHandler @ 002e2e24 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002e2c44 to 002e2c7f has its CatchHandler @ 002e2dc4 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_002e32e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e32e4  FUN_002e32e4 =====

void FUN_002e32e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003955b8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e3334  FUN_002e3334 =====

undefined * FUN_002e3334(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003955c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e3374  FUN_002e3374 =====

void FUN_002e3374(long *param_1,char param_2)

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


// ===== 002e3408  FUN_002e3408 =====

void FUN_002e3408(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381428;
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


// ===== 002e3474  FUN_002e3474 =====

void FUN_002e3474(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381428;
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


// ===== 002e34dc  FUN_002e34dc =====

undefined8 * FUN_002e34dc(long param_1)

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
  *puVar4 = &PTR_FUN_00381428;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e353c to 002e353f has its CatchHandler @ 002e3578 */
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


// ===== 002e35a0  FUN_002e35a0 =====

void FUN_002e35a0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381428;
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


// ===== 002e3638  FUN_002e3638 =====

void FUN_002e3638(long param_1)

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


// ===== 002e3698  FUN_002e3698 =====

void FUN_002e3698(void *param_1)

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


// ===== 002e36f4  FUN_002e36f4 =====

void FUN_002e36f4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
  undefined1 auStack_140 [24];
  undefined8 local_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002e3750 to 002e375f has its CatchHandler @ 002e3d18 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395338,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002e37d8;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x002e37d8;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002e37d8:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive27HybridViewModelInstanceSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395590
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive27HybridViewModelInstanceSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395590
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive27HybridViewModelInstanceSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395588
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive27HybridViewModelInstanceSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395588
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar4,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive27HybridViewModelInstanceSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395590
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 002e3810 to 002e381b has its CatchHandler @ 002e3a20 */
    (*pcVar11)(&local_80);
    plVar1 = (long *)(ulong)((byte)local_80 >> 1);
    pvVar3 = (void *)((ulong)&local_80 | 1);
    if (((byte)local_80 & 1) != 0) {
      plVar1 = local_78;
      pvVar3 = local_70;
    }
                    /* try { // try from 002e3840 to 002e384b has its CatchHandler @ 002e3a04 */
    (**(code **)(*param_3 + 0x110))(local_128,param_3,pvVar3,plVar1);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = local_128[0];
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
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
                    /* try { // try from 002e38dc to 002e38eb has its CatchHandler @ 002e3eb4 */
    FUN_002d9d48(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e38f8 to 002e390b has its CatchHandler @ 002e3e94 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 002e390c to 002e391f has its CatchHandler @ 002e3e7c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002e3920 to 002e392b has its CatchHandler @ 002e3e4c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002e392c to 002e393b has its CatchHandler @ 002e3e28 */
    FUN_00264adc(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 002e393c to 002e394f has its CatchHandler @ 002e3e04 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002e3950 to 002e395b has its CatchHandler @ 002e3de0 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002e395c to 002e396b has its CatchHandler @ 002e3dbc */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002e396c to 002e397f has its CatchHandler @ 002e3d98 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002e3984 to 002e39bf has its CatchHandler @ 002e3d38 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e3edc  FUN_002e3edc =====

void FUN_002e3edc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395598) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e3f2c  FUN_002e3f2c =====

undefined * FUN_002e3f2c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003955a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e3f6c  margelo::nitro::rive::HybridViewModelInstanceSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelInstanceSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelInstanceSpec::loadHybridMethods
          (HybridViewModelInstanceSpec *this)

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


// ===== 002e3fb0  FUN_002e3fb0 =====

void FUN_002e3fb0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2e3fb4);
  (*pcVar1)();
}


// ===== 002e3fb4  FUN_002e3fb4 =====

void FUN_002e3fb4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2e3fb8);
  (*pcVar1)();
}


// ===== 002e3fb8  FUN_002e3fb8 =====

void FUN_002e3fb8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2e3fbc);
  (*pcVar1)();
}


// ===== 002e3fbc  FUN_002e3fbc =====

void FUN_002e3fbc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2e3fc0);
  (*pcVar1)();
}


// ===== 002e3fc0  margelo::nitro::rive::HybridViewModelPropertySpec::loadHybridMethods =====

/* margelo::nitro::rive::HybridViewModelPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelPropertySpec::loadHybridMethods
          (HybridViewModelPropertySpec *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_002e4024(this + *(long *)(*(long *)this + -0x20) + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e4024  FUN_002e4024 =====

void FUN_002e4024(long *param_1)

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
    local_68 = PTR_typeinfo_00395780;
    local_60 = 0;
                    /* try { // try from 002e4060 to 002e406f has its CatchHandler @ 002e4248 */
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
    if (puVar4 == PTR_typeinfo_name_00395778) {
LAB_002e4218:
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
      local_68 = PTR_typeinfo_00395780;
                    /* try { // try from 002e416c to 002e417b has its CatchHandler @ 002e423c */
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
      goto LAB_002e4218;
    }
    puVar4 = *(undefined **)(*plVar5 + 8);
  } while( true );
}


// ===== 002e4270  margelo::nitro::rive::HybridViewModelPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelPropertySpec::loadHybridMethods
          (HybridViewModelPropertySpec *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)this + -0x20);
  margelo::nitro::HybridObject::loadHybridMethods();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_002e4024(this + lVar3 + *(long *)(*(long *)(this + lVar3) + -0x20) + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e42dc  FUN_002e42dc =====

void FUN_002e42dc(NativeState *param_1)

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


// ===== 002e4338  FUN_002e4338 =====

void FUN_002e4338(NativeState *param_1)

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


// ===== 002e439c  FUN_002e439c =====

void FUN_002e439c(long *param_1)

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


// ===== 002e4400  FUN_002e4400 =====

void FUN_002e4400(long *param_1)

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


// ===== 002e446c  margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods
          (HybridViewModelNumberPropertySpec *this)

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
  basic_string local_1a0;
  char acStack_19f [7];
  char cStack_198;
  char acStack_197 [7];
  undefined1 local_190;
  undefined7 uStack_18f;
  basic_string local_188;
  undefined7 uStack_187;
  undefined4 uStack_180;
  uint uStack_17c;
  long *local_178;
  basic_string local_170;
  undefined4 local_16f;
  void *local_160;
  basic_string local_158;
  char acStack_157 [5];
  undefined2 uStack_152;
  char cStack_150;
  char acStack_14f [5];
  undefined1 uStack_14a;
  undefined1 uStack_149;
  long *local_148;
  basic_string local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  void *local_130;
  basic_string local_128;
  undefined4 uStack_127;
  undefined2 uStack_123;
  undefined1 uStack_121;
  long *plStack_120;
  long *local_118;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar5 + *(long *)(*(long *)(this + lVar5) + -0x20) + 8);
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00395728;
                    /* try { // try from 002e44fc to 002e450b has its CatchHandler @ 002e5790 */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar9 = plStack_d8;
    plVar6 = local_e0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395788) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar5 + 0x10);
      local_e0 = plVar6;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00395728;
                    /* try { // try from 002e4618 to 002e4627 has its CatchHandler @ 002e5784 */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar9 = plStack_88;
      plVar6 = local_90;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x002e46cc;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x002e46cc:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_128 = (basic_string)0xa;
    uStack_127 = 0x756c6176;
    uStack_123 = 0x65;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e5208 to 002e521b has its CatchHandler @ 002e5b2c */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002e521c to 002e522f has its CatchHandler @ 002e59f0 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 002e5234 to 002e526b has its CatchHandler @ 002e59cc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    plVar6 = plVar9 + 3;
    lVar5 = FUN_002632b8(*plVar6,plVar9[4],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e527c to 002e528f has its CatchHandler @ 002e5b28 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002e5290 to 002e52a3 has its CatchHandler @ 002e59c8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002e52a8 to 002e52df has its CatchHandler @ 002e599c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    local_110 = (undefined *)
                CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
    local_100 = local_118;
    plStack_108 = plStack_120;
    plStack_f0 = _UNK_001d8138;
    local_f8 = _DAT_001d8130;
    local_e8 = 1;
                    /* try { // try from 002e474c to 002e4753 has its CatchHandler @ 002e5858 */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_00381e48;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 002e4784 to 002e4787 has its CatchHandler @ 002e5774 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002e47c4:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002e47d4:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002e47d4;
      }
      if (local_70 != &local_90) goto LAB_002e47c4;
      local_c0 = &local_e0;
                    /* try { // try from 002e4fbc to 002e4fc7 has its CatchHandler @ 002e5590 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_128 & 1) == 0) {
      plStack_a0 = plStack_120;
      local_a8 = CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
      local_98 = local_118;
    }
    else {
                    /* try { // try from 002e4804 to 002e480b has its CatchHandler @ 002e5708 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_118,(ulong)plStack_120);
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002e4830:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002e4830;
    }
                    /* try { // try from 002e483c to 002e484f has its CatchHandler @ 002e5848 */
    FUN_002634d4(plVar9 + 8,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002e4884:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002e4884;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = (basic_string)0xa;
    local_13f = 0x756c6176;
    local_13b = 0x65;
    lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e52ec to 002e52ff has its CatchHandler @ 002e5b0c */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002e5300 to 002e5313 has its CatchHandler @ 002e5984 */
      FUN_00263450(&local_e0,&local_90,"\" - a setter with that name already exists!");
                    /* try { // try from 002e5318 to 002e534f has its CatchHandler @ 002e5960 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e5360 to 002e5373 has its CatchHandler @ 002e5b08 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002e5374 to 002e5387 has its CatchHandler @ 002e595c */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002e538c to 002e53c3 has its CatchHandler @ 002e5930 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
                    /* try { // try from 002e48e0 to 002e48f7 has its CatchHandler @ 002e5840 */
    FUN_002e8118(&local_e0,&local_140,0x20,1,2);
                    /* try { // try from 002e48f8 to 002e490b has its CatchHandler @ 002e5830 */
    FUN_002634d4(plVar9 + 0xd,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002e4940:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002e4940;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x1a;
    uStack_14a = 0;
    acStack_157[0] = s_getValueAsync_001d6c10[0];
    acStack_157[1] = s_getValueAsync_001d6c10[1];
    acStack_157[2] = s_getValueAsync_001d6c10[2];
    acStack_157[3] = s_getValueAsync_001d6c10[3];
    acStack_157[4] = s_getValueAsync_001d6c10[4];
    uStack_152 = (undefined2)s_getValueAsync_001d6c10._5_3_;
    cStack_150 = SUB31(s_getValueAsync_001d6c10._5_3_,2);
    acStack_14f[0] = s_getValueAsync_001d6c10[8];
    acStack_14f[1] = s_getValueAsync_001d6c10[9];
    acStack_14f[2] = s_getValueAsync_001d6c10[10];
    acStack_14f[3] = s_getValueAsync_001d6c10[0xb];
    acStack_14f[4] = s_getValueAsync_001d6c10[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_158);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_158), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e5038 to 002e504b has its CatchHandler @ 002e5b9c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002e504c to 002e505f has its CatchHandler @ 002e5af0 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002e5064 to 002e509b has its CatchHandler @ 002e5acc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_158);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e53d0 to 002e53e3 has its CatchHandler @ 002e5ac8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002e53e4 to 002e53f7 has its CatchHandler @ 002e592c */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002e53fc to 002e5433 has its CatchHandler @ 002e5900 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    plStack_108 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
    local_e8 = 0;
    local_100 = local_148;
    plStack_f0 = _UNK_001d81b8;
    local_f8 = _DAT_001d81b0;
                    /* try { // try from 002e49d0 to 002e49d7 has its CatchHandler @ 002e5818 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00381f48;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002e4a08 to 002e4a0b has its CatchHandler @ 002e56f8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002e4a48:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002e4a58:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002e4a58;
      }
      if (local_70 != &local_90) goto LAB_002e4a48;
      local_c0 = &local_e0;
                    /* try { // try from 002e4fdc to 002e4fe7 has its CatchHandler @ 002e558c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_158 & 1) == 0) {
      plStack_a0 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))
                                   );
      local_a8 = CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
      local_98 = local_148;
    }
    else {
                    /* try { // try from 002e4a88 to 002e4a8f has its CatchHandler @ 002e568c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,
                 CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002e4ab4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002e4ab4;
    }
                    /* try { // try from 002e4ac0 to 002e4ad3 has its CatchHandler @ 002e5808 */
    FUN_002634d4(plVar6,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002e4b08:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002e4b08;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = (basic_string)0x6;
    local_16f = 0x746573;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_170);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_170), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e50ac to 002e50bf has its CatchHandler @ 002e5b80 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002e50c0 to 002e50d3 has its CatchHandler @ 002e5ab0 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002e50d8 to 002e510f has its CatchHandler @ 002e5a8c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_170);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e5440 to 002e5453 has its CatchHandler @ 002e5a88 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002e5454 to 002e5467 has its CatchHandler @ 002e58fc */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002e546c to 002e54a3 has its CatchHandler @ 002e58d0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
                    /* try { // try from 002e4b68 to 002e4b7f has its CatchHandler @ 002e5800 */
    FUN_002e8118(&local_e0,&local_170,0x30,1,0);
                    /* try { // try from 002e4b80 to 002e4b93 has its CatchHandler @ 002e57f0 */
    FUN_002634d4(plVar6,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002e4bc8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002e4bc8;
    }
    if (((byte)local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    local_188 = (basic_string)0x16;
    uStack_187 = (undefined7)s_addListener_001d6f8c._0_8_;
    uStack_180 = CONCAT31(0x72656e,SUB81(s_addListener_001d6f8c._0_8_,7));
    uStack_17c = uStack_17c & 0xffffff00;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_188);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_188), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e5120 to 002e5133 has its CatchHandler @ 002e5b64 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002e5134 to 002e5147 has its CatchHandler @ 002e5a70 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002e514c to 002e5183 has its CatchHandler @ 002e5a4c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_188);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e54b0 to 002e54c3 has its CatchHandler @ 002e5a48 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002e54c4 to 002e54d7 has its CatchHandler @ 002e58cc */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002e54dc to 002e5513 has its CatchHandler @ 002e58a0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    plStack_108 = (long *)CONCAT44(uStack_17c,uStack_180);
    local_110 = (undefined *)CONCAT71(uStack_187,local_188);
    local_e8 = 0;
    local_100 = local_178;
    plStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002e4c5c to 002e4c63 has its CatchHandler @ 002e57d8 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00381fc8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002e4c94 to 002e4c97 has its CatchHandler @ 002e567c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002e4cd4:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002e4ce4:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002e4ce4;
      }
      if (local_70 != &local_90) goto LAB_002e4cd4;
      local_c0 = &local_e0;
                    /* try { // try from 002e4ffc to 002e5007 has its CatchHandler @ 002e5588 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_188 & 1) == 0) {
      plStack_a0 = (long *)CONCAT44(uStack_17c,uStack_180);
      local_a8 = CONCAT71(uStack_187,local_188);
      local_98 = local_178;
    }
    else {
                    /* try { // try from 002e4d18 to 002e4d1f has its CatchHandler @ 002e5610 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_178,CONCAT44(uStack_17c,uStack_180));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002e4d44:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002e4d44;
    }
                    /* try { // try from 002e4d50 to 002e4d63 has its CatchHandler @ 002e57c8 */
    FUN_002634d4(plVar6,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002e4d98:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002e4d98;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete(local_178);
    }
    local_1a0 = (basic_string)0x1e;
    local_190 = 0;
    acStack_19f[0] = s_removeListeners_001d79f7[0];
    acStack_19f[1] = s_removeListeners_001d79f7[1];
    acStack_19f[2] = s_removeListeners_001d79f7[2];
    acStack_19f[3] = s_removeListeners_001d79f7[3];
    acStack_19f[4] = s_removeListeners_001d79f7[4];
    acStack_19f[5] = s_removeListeners_001d79f7[5];
    acStack_19f[6] = s_removeListeners_001d79f7[6];
    cStack_198 = s_removeListeners_001d79f7[7];
    acStack_197[0] = s_removeListeners_001d79f7[8];
    acStack_197[1] = s_removeListeners_001d79f7[9];
    acStack_197[2] = s_removeListeners_001d79f7[10];
    acStack_197[3] = s_removeListeners_001d79f7[0xb];
    acStack_197[4] = s_removeListeners_001d79f7[0xc];
    acStack_197[5] = s_removeListeners_001d79f7[0xd];
    acStack_197[6] = s_removeListeners_001d79f7[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1a0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1a0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e5194 to 002e51a7 has its CatchHandler @ 002e5b48 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002e51a8 to 002e51bb has its CatchHandler @ 002e5a30 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002e51c0 to 002e51f7 has its CatchHandler @ 002e5a0c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1a0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002e5520 to 002e5533 has its CatchHandler @ 002e5a08 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002e5534 to 002e5547 has its CatchHandler @ 002e589c */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002e554c to 002e5583 has its CatchHandler @ 002e5870 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002e5bd8;
    }
    plStack_108 = (long *)CONCAT71(acStack_197,cStack_198);
    local_110 = (undefined *)CONCAT71(acStack_19f,local_1a0);
    local_100 = (long *)CONCAT71(uStack_18f,local_190);
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 002e4e2c to 002e4e33 has its CatchHandler @ 002e57b0 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00382048;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002e4e64 to 002e4e67 has its CatchHandler @ 002e5600 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002e4ea4:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002e4eb4:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002e4eb4;
      }
      if (local_70 != &local_90) goto LAB_002e4ea4;
      local_c0 = &local_e0;
                    /* try { // try from 002e501c to 002e5027 has its CatchHandler @ 002e5584 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_1a0 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(acStack_197,cStack_198);
      local_a8 = CONCAT71(acStack_19f,local_1a0);
      local_98 = (long *)CONCAT71(uStack_18f,local_190);
    }
    else {
                    /* try { // try from 002e4ee4 to 002e4eeb has its CatchHandler @ 002e5594 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_18f,local_190),CONCAT71(acStack_197,cStack_198));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002e4f10:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002e4f10;
    }
                    /* try { // try from 002e4f1c to 002e4f2f has its CatchHandler @ 002e57a0 */
    FUN_002634d4(plVar6,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002e4f64:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002e4f64;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_18f,local_190));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_002e5bd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e5bdc  FUN_002e5bdc =====

void FUN_002e5bdc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382048;
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


// ===== 002e5c48  FUN_002e5c48 =====

void FUN_002e5c48(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382048;
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


// ===== 002e5cb0  FUN_002e5cb0 =====

undefined8 * FUN_002e5cb0(long param_1)

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
  *puVar4 = &PTR_FUN_00382048;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e5d10 to 002e5d13 has its CatchHandler @ 002e5d4c */
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


// ===== 002e5d74  FUN_002e5d74 =====

void FUN_002e5d74(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00382048;
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


// ===== 002e5e0c  FUN_002e5e0c =====

void FUN_002e5e0c(long param_1)

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


// ===== 002e5e6c  FUN_002e5e6c =====

void FUN_002e5e6c(void *param_1)

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


// ===== 002e5ec8  FUN_002e5ec8 =====

void FUN_002e5ec8(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002e5f24 to 002e5f33 has its CatchHandler @ 002e6474 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395728,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002e5fac;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002e5fac;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002e5fac:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395828
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395828
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395820
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395820
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395828
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002e5fe4 to 002e5fe7 has its CatchHandler @ 002e6184 */
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
                    /* try { // try from 002e605c to 002e606b has its CatchHandler @ 002e6610 */
    FUN_002e66c8(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e6078 to 002e608b has its CatchHandler @ 002e65f0 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002e608c to 002e609f has its CatchHandler @ 002e65d8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002e60a0 to 002e60ab has its CatchHandler @ 002e65a8 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002e60ac to 002e60bb has its CatchHandler @ 002e6584 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002e60bc to 002e60cf has its CatchHandler @ 002e6560 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002e60d0 to 002e60db has its CatchHandler @ 002e653c */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002e60dc to 002e60eb has its CatchHandler @ 002e6518 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002e60ec to 002e60ff has its CatchHandler @ 002e64f4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002e6104 to 002e613f has its CatchHandler @ 002e6494 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e6638  FUN_002e6638 =====

void FUN_002e6638(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395830) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e6688  FUN_002e6688 =====

undefined * FUN_002e6688(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395838;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e66c8  FUN_002e66c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002e66c8(undefined8 *param_1,int param_2,byte *param_3,long param_4)

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
    puVar7 = PTR_typeinfo_name_00395788;
    uStack_68 = _UNK_001d8108;
    local_70 = _DAT_001d8100;
    *(undefined1 *)(local_60 + 7) = 0;
    uVar14 = *(undefined8 *)puVar7;
    uVar13 = *(undefined8 *)(puVar7 + 0x18);
    uVar12 = *(undefined8 *)(puVar7 + 0x10);
    uVar10 = *(undefined8 *)(puVar7 + 0x30);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar14;
    local_60[3] = uVar13;
    local_60[2] = uVar12;
    uVar13 = *(undefined8 *)(puVar7 + 0x28);
    uVar12 = *(undefined8 *)(puVar7 + 0x20);
    local_60[6] = uVar10;
    local_60[5] = uVar13;
    local_60[4] = uVar12;
                    /* try { // try from 002e6754 to 002e6763 has its CatchHandler @ 002e69f4 */
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
    if (0xffffffffffffffef < uVar1) goto LAB_002e69b4;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002e68b8;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002e68a0 to 002e68a7 has its CatchHandler @ 002e6a08 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002e68b8:
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
                    /* try { // try from 002e68f8 to 002e68ff has its CatchHandler @ 002e69e0 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 002e6918 to 002e692b has its CatchHandler @ 002e69c8 */
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002e6a50;
                    /* try { // try from 002e69b0 to 002e69b3 has its CatchHandler @ 002e6a24 */
      FUN_00260a84();
LAB_002e69b4:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002e69c4 to 002e69c7 has its CatchHandler @ 002e6a08 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002e6918 with catch @ 002e69c8 */
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
      goto LAB_002e6a50;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002e6828;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002e6810 to 002e6817 has its CatchHandler @ 002e6a24 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_002e6828:
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
                    /* try { // try from 002e6868 to 002e686f has its CatchHandler @ 002e6a0c */
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
LAB_002e6a50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e6a54  FUN_002e6a54 =====

void FUN_002e6a54(long *param_1)

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


// ===== 002e6ae0  FUN_002e6ae0 =====

void FUN_002e6ae0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381fc8;
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


// ===== 002e6b4c  FUN_002e6b4c =====

void FUN_002e6b4c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381fc8;
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


// ===== 002e6bb4  FUN_002e6bb4 =====

undefined8 * FUN_002e6bb4(long param_1)

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
  *puVar4 = &PTR_FUN_00381fc8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e6c14 to 002e6c17 has its CatchHandler @ 002e6c50 */
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


// ===== 002e6c78  FUN_002e6c78 =====

void FUN_002e6c78(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381fc8;
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


// ===== 002e6d10  FUN_002e6d10 =====

void FUN_002e6d10(long param_1)

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


// ===== 002e6d70  FUN_002e6d70 =====

void FUN_002e6d70(void *param_1)

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


// ===== 002e6dcc  FUN_002e6dcc =====

void FUN_002e6dcc(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [4];
  undefined8 **local_b0;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_d0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002e6e2c to 002e6e3b has its CatchHandler @ 002e7474 */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00395728,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_002e6e88;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_002e6e88:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 002e6ff0 to 002e6fff has its CatchHandler @ 002e7614 */
    FUN_002e66c8(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e700c to 002e701f has its CatchHandler @ 002e75f4 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002e7020 to 002e7033 has its CatchHandler @ 002e75dc */
    FUN_00263450(auStack_130,auStack_148,"` expected ");
                    /* try { // try from 002e7034 to 002e703f has its CatchHandler @ 002e75ac */
    std::__ndk1::to_string(1);
                    /* try { // try from 002e7040 to 002e704f has its CatchHandler @ 002e7588 */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 002e7050 to 002e7063 has its CatchHandler @ 002e7564 */
    FUN_00263450(auStack_100,auStack_118," arguments, but received ");
                    /* try { // try from 002e7064 to 002e706f has its CatchHandler @ 002e7540 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002e7070 to 002e707f has its CatchHandler @ 002e751c */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 002e7080 to 002e7093 has its CatchHandler @ 002e74f4 */
    FUN_00263450(local_d0,auStack_e8,&DAT_001d5be0);
                    /* try { // try from 002e7098 to 002e70d3 has its CatchHandler @ 002e7494 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_d0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002e7638;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957f8
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957f8
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957f0
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957f0
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957f8
                       );
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 002e6ef0 to 002e6eff has its CatchHandler @ 002e7180 */
  FUN_0026be64(local_d0,param_3,uVar10);
                    /* try { // try from 002e6f00 to 002e6f13 has its CatchHandler @ 002e7144 */
  (*pcVar11)(&local_a0,plVar1,local_d0);
  if (local_b0 == local_d0) {
    lVar5 = 4;
    local_b0 = local_d0;
LAB_002e6f34:
    (*(code *)(*local_b0)[lVar5])();
  }
  else if (local_b0 != (undefined8 **)0x0) {
    lVar5 = 5;
    goto LAB_002e6f34;
  }
                    /* try { // try from 002e6f40 to 002e6f53 has its CatchHandler @ 002e7124 */
  FUN_002e76cc(param_1,param_3,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_002e6f74:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_002e6f74;
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_002e7638:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e763c  FUN_002e763c =====

void FUN_002e763c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395810) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e768c  FUN_002e768c =====

undefined * FUN_002e768c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395818;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e76cc  FUN_002e76cc =====

void FUN_002e76cc(undefined4 *param_1,Runtime *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plVar4;
  long lVar5;
  basic_string local_130;
  char local_12f [8];
  undefined4 local_127;
  undefined1 local_123;
  void *local_120;
  undefined8 local_118;
  long local_110 [4];
  long *local_f0 [2];
  long local_e0 [4];
  long *local_c0 [2];
  long local_b0 [4];
  long *local_90 [2];
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pplVar3 = (long **)(param_3 + 4);
  plVar4 = *pplVar3;
  if (plVar4 == (long *)0x0) {
    pplVar3 = local_c0;
LAB_002e771c:
    *pplVar3 = (long *)0x0;
  }
  else {
    local_c0[0] = plVar4;
    if (plVar4 != param_3) goto LAB_002e771c;
    local_c0[0] = local_e0;
                    /* try { // try from 002e7734 to 002e773f has its CatchHandler @ 002e79b4 */
    (**(code **)(*param_3 + 0x18))(param_3,local_e0);
  }
  local_90[0] = (long *)0x0;
                    /* try { // try from 002e7744 to 002e774b has its CatchHandler @ 002e7a50 */
  plVar4 = (long *)operator_new(0x40);
  *plVar4 = (long)&PTR_FUN_00385760;
  if (local_c0[0] == (long *)0x0) {
    pplVar3 = (long **)(plVar4 + 6);
LAB_002e7780:
    *pplVar3 = (long *)0x0;
  }
  else {
    if (local_c0[0] != local_e0) {
      pplVar3 = local_c0;
      plVar4[6] = (long)local_c0[0];
      goto LAB_002e7780;
    }
    plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 002e7794 to 002e77a3 has its CatchHandler @ 002e79b0 */
    (**(code **)(local_e0[0] + 0x18))(local_e0);
  }
  local_90[0] = plVar4;
  if (local_c0[0] == local_e0) {
    lVar5 = 4;
    plVar4 = local_e0;
LAB_002e77cc:
    (**(code **)(*plVar4 + lVar5 * 8))(plVar4);
  }
  else if (local_c0[0] != (long *)0x0) {
    lVar5 = 5;
    plVar4 = local_c0[0];
    goto LAB_002e77cc;
  }
  local_130 = (basic_string)0x18;
  local_127 = 0x6e6f6974;
  local_12f[0] = s_hostFunction_001d69de[0];
  local_12f[1] = s_hostFunction_001d69de[1];
  local_12f[2] = s_hostFunction_001d69de[2];
  local_12f[3] = s_hostFunction_001d69de[3];
  local_12f[4] = s_hostFunction_001d69de[4];
  local_12f[5] = s_hostFunction_001d69de[5];
  local_12f[6] = s_hostFunction_001d69de[6];
  local_12f[7] = s_hostFunction_001d69de[7];
  local_123 = 0;
                    /* try { // try from 002e7804 to 002e780f has its CatchHandler @ 002e7a20 */
  uVar2 = margelo::nitro::PropNameIDCache::get(param_2,&local_130);
  if (local_90[0] == (long *)0x0) {
    pplVar3 = local_f0;
LAB_002e783c:
    *pplVar3 = (long *)0x0;
  }
  else {
    if (local_90[0] != local_b0) {
      pplVar3 = local_90;
      local_f0[0] = local_90[0];
      goto LAB_002e783c;
    }
    local_f0[0] = local_110;
                    /* try { // try from 002e7854 to 002e785f has its CatchHandler @ 002e79ac */
    (**(code **)(local_b0[0] + 0x18))(local_b0,local_110);
  }
  if (local_f0[0] == (long *)0x0) {
    pplVar3 = local_60;
LAB_002e7888:
    *pplVar3 = (long *)0x0;
  }
  else {
    if (local_f0[0] != local_110) {
      pplVar3 = local_f0;
      local_60[0] = local_f0[0];
      goto LAB_002e7888;
    }
    local_60[0] = local_80;
                    /* try { // try from 002e78a0 to 002e78ab has its CatchHandler @ 002e79a8 */
    (**(code **)(local_110[0] + 0x18))(local_110,local_80);
  }
                    /* try { // try from 002e78b4 to 002e78cf has its CatchHandler @ 002e79b8 */
  (**(code **)(*(long *)param_2 + 0x278))(&local_118,param_2,uVar2,0,local_80);
  if (local_60[0] == local_80) {
    lVar5 = 4;
    plVar4 = local_80;
LAB_002e78f0:
    (**(code **)(*plVar4 + lVar5 * 8))();
  }
  else if (local_60[0] != (long *)0x0) {
    lVar5 = 5;
    plVar4 = local_60[0];
    goto LAB_002e78f0;
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_118;
  local_118 = 0;
  if (local_f0[0] == local_110) {
    lVar5 = 4;
    plVar4 = local_110;
LAB_002e7934:
    (**(code **)(*plVar4 + lVar5 * 8))();
  }
  else if (local_f0[0] != (long *)0x0) {
    lVar5 = 5;
    plVar4 = local_f0[0];
    goto LAB_002e7934;
  }
  if (((byte)local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if (local_90[0] == local_b0) {
    lVar5 = 4;
    plVar4 = local_b0;
  }
  else {
    if (local_90[0] == (long *)0x0) goto LAB_002e7980;
    lVar5 = 5;
    plVar4 = local_90[0];
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_002e7980:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002e7aa4  FUN_002e7aa4 =====

void FUN_002e7aa4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00385760;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_002e7b30;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x002e7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002e7b30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e7b34  FUN_002e7b34 =====

void FUN_002e7b34(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00385760;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002e7b90;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002e7b90:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e7bb8  FUN_002e7bb8 =====

undefined8 * FUN_002e7bb8(long param_1)

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
  *puVar2 = &PTR_FUN_00385760;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_002e7c30;
    }
                    /* try { // try from 002e7c14 to 002e7c2f has its CatchHandler @ 002e7c58 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_002e7c30:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e7c80  FUN_002e7c80 =====

void FUN_002e7c80(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00385760;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x002e7d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_002e7d2c;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_002e7d2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e7d30  FUN_002e7d30 =====

void FUN_002e7d30(long param_1)

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
      goto LAB_002e7db0;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002e7d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002e7db0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e7db4  FUN_002e7db4 =====

void FUN_002e7db4(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_002e7e04;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002e7e04:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e7e2c  FUN_002e7e2c =====

/* WARNING: Removing unreachable block (ram,0x002e8064) */
/* WARNING: Type propagation algorithm not settling */

void FUN_002e7e2c(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong *param_6)

{
  long lVar1;
  JSError *pJVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte local_c8 [16];
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = *param_6;
  if (uVar4 == 0) {
    if (*(long **)(param_2 + 0x30) == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar3 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 002e7f0c with catch @ 002e7f5c */
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        if ((local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_00255d34(uVar3);
        }
      }
    }
    else {
      (**(code **)(**(long **)(param_2 + 0x30) + 0x30))();
      *param_1 = 0;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
  else {
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e7ea4 to 002e7eaf has its CatchHandler @ 002e8060 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002e7eb0 to 002e7ec3 has its CatchHandler @ 002e8048 */
    FUN_002b3788(local_98,"Function expected ",local_b0);
                    /* try { // try from 002e7ec4 to 002e7ed7 has its CatchHandler @ 002e8018 */
    FUN_00263450(local_80,local_98," arguments, but received ");
                    /* try { // try from 002e7ed8 to 002e7ee3 has its CatchHandler @ 002e7ff4 */
    std::__ndk1::to_string(uVar4);
                    /* try { // try from 002e7ee4 to 002e7ef3 has its CatchHandler @ 002e7fd0 */
    FUN_00264adc(local_68,local_80,local_c8);
                    /* try { // try from 002e7ef4 to 002e7f07 has its CatchHandler @ 002e7fac */
    FUN_00263450(local_50,local_68,&DAT_001d5be0);
                    /* try { // try from 002e7f0c to 002e7f47 has its CatchHandler @ 002e7f5c */
    facebook::jsi::JSError::JSError(pJVar2,param_3,local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar2,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e8088  FUN_002e8088 =====

void FUN_002e8088(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395800) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e80d8  FUN_002e80d8 =====

undefined * FUN_002e80d8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395808;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e8118  FUN_002e8118 =====

void FUN_002e8118(long param_1,ulong *param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  long local_98;
  long lStack_90;
  undefined4 local_88;
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    local_a0 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,(char *)param_2[2],param_2[1]);
  }
  local_98 = param_3;
  lStack_90 = param_4;
  local_88 = param_5;
                    /* try { // try from 002e8180 to 002e8187 has its CatchHandler @ 002e8330 */
  local_60[0] = (long *)operator_new(0x38);
  *local_60[0] = (long)&PTR_FUN_00381ec8;
  if ((local_b0 & 1) == 0) {
    local_60[0][2] = uStack_a8;
    *(ulong *)(local_60[0] + 1) = local_b0;
    local_60[0][3] = (long)local_a0;
  }
  else {
                    /* try { // try from 002e81b8 to 002e81bb has its CatchHandler @ 002e8320 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60[0] + 1),local_a0,uStack_a8);
  }
  local_60[0][5] = lStack_90;
  local_60[0][4] = local_98;
  *(undefined4 *)(local_60[0] + 6) = local_88;
  if (((byte)local_b0._0_1_ & 1) == 0) {
LAB_002e81f8:
    *(long **)(param_1 + 0x20) = local_60[0];
    pplVar3 = local_60;
LAB_002e820c:
    *pplVar3 = (long *)0x0;
  }
  else {
    operator_delete(local_a0);
    if (local_60[0] == (long *)0x0) {
      pplVar3 = (long **)(param_1 + 0x20);
      goto LAB_002e820c;
    }
    if (local_60[0] != local_80) goto LAB_002e81f8;
    *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 002e82a4 to 002e82af has its CatchHandler @ 002e82b4 */
    (**(code **)(local_80[0] + 0x18))(local_80,param_1);
  }
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = 1;
  if ((uVar4 & 1) == 0) {
    uVar6 = *param_2;
    uVar4 = param_2[2];
    *(ulong *)(param_1 + 0x40) = param_2[1];
    *(ulong *)(param_1 + 0x38) = uVar6;
    *(ulong *)(param_1 + 0x48) = uVar4;
  }
  else {
                    /* try { // try from 002e8238 to 002e823f has its CatchHandler @ 002e82b8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x38),(char *)param_2[2],param_2[1]);
  }
  if (local_60[0] == local_80) {
    lVar5 = 4;
    plVar2 = local_80;
  }
  else {
    if (local_60[0] == (long *)0x0) goto LAB_002e8270;
    lVar5 = 5;
    plVar2 = local_60[0];
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_002e8270:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e8360  FUN_002e8360 =====

void FUN_002e8360(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381ec8;
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


// ===== 002e83cc  FUN_002e83cc =====

void FUN_002e83cc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381ec8;
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


// ===== 002e8434  FUN_002e8434 =====

undefined8 * FUN_002e8434(long param_1)

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
  *puVar4 = &PTR_FUN_00381ec8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e8494 to 002e8497 has its CatchHandler @ 002e84d0 */
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


// ===== 002e84f8  FUN_002e84f8 =====

void FUN_002e84f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381ec8;
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


// ===== 002e8590  FUN_002e8590 =====

void FUN_002e8590(long param_1)

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


// ===== 002e85f0  FUN_002e85f0 =====

void FUN_002e85f0(void *param_1)

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


// ===== 002e864c  FUN_002e864c =====

void FUN_002e864c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002e86ac to 002e86bb has its CatchHandler @ 002e8928 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395728,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002e8734;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002e8734;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002e8734:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003957b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003957b8), puVar3 = PTR_defaultValue_003957b0,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003957b0 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003957b8);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 002e8770 to 002e877f has its CatchHandler @ 002e89cc */
    facebook::jsi::Value::asNumber();
    (*pcVar10)(plVar1);
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
                    /* try { // try from 002e87f4 to 002e8803 has its CatchHandler @ 002e8db4 */
    FUN_002e66c8(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e8810 to 002e8823 has its CatchHandler @ 002e8d94 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002e8824 to 002e8837 has its CatchHandler @ 002e8d7c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002e8838 to 002e8843 has its CatchHandler @ 002e8d4c */
    std::__ndk1::to_string(1);
                    /* try { // try from 002e8844 to 002e8853 has its CatchHandler @ 002e8d28 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002e8854 to 002e8867 has its CatchHandler @ 002e8d04 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002e8868 to 002e8873 has its CatchHandler @ 002e8ce0 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002e8874 to 002e8883 has its CatchHandler @ 002e8cbc */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002e8884 to 002e8897 has its CatchHandler @ 002e89a8 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002e889c to 002e88d7 has its CatchHandler @ 002e8948 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e8ddc  FUN_002e8ddc =====

void FUN_002e8ddc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003957c0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e8e2c  FUN_002e8e2c =====

undefined * FUN_002e8e2c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003957c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e8e6c  FUN_002e8e6c =====

void FUN_002e8e6c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381f48;
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


// ===== 002e8ed8  FUN_002e8ed8 =====

void FUN_002e8ed8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381f48;
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


// ===== 002e8f40  FUN_002e8f40 =====

undefined8 * FUN_002e8f40(long param_1)

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
  *puVar4 = &PTR_FUN_00381f48;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e8fa0 to 002e8fa3 has its CatchHandler @ 002e8fdc */
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


// ===== 002e9004  FUN_002e9004 =====

void FUN_002e9004(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381f48;
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


// ===== 002e909c  FUN_002e909c =====

void FUN_002e909c(long param_1)

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


// ===== 002e90fc  FUN_002e90fc =====

void FUN_002e90fc(void *param_1)

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


// ===== 002e9158  FUN_002e9158 =====

void FUN_002e9158(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002e91b4 to 002e91c3 has its CatchHandler @ 002e9764 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395728,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002e923c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002e923c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002e923c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957d8
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957d8
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957d0
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957d0
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003957d8
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002e9274 to 002e927b has its CatchHandler @ 002e946c */
    (*pcVar9)(&local_110);
                    /* try { // try from 002e9280 to 002e928b has its CatchHandler @ 002e9454 */
    FUN_0026ab84(param_1,param_3,local_110,local_108);
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
                    /* try { // try from 002e932c to 002e933b has its CatchHandler @ 002e9900 */
    FUN_002e66c8(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e9348 to 002e935b has its CatchHandler @ 002e98e0 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002e935c to 002e936f has its CatchHandler @ 002e98c8 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 002e9370 to 002e937b has its CatchHandler @ 002e9898 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002e937c to 002e938b has its CatchHandler @ 002e9874 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002e938c to 002e939f has its CatchHandler @ 002e9850 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002e93a0 to 002e93ab has its CatchHandler @ 002e982c */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002e93ac to 002e93bb has its CatchHandler @ 002e9808 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002e93bc to 002e93cf has its CatchHandler @ 002e97e4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002e93d4 to 002e940f has its CatchHandler @ 002e9784 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e9928  FUN_002e9928 =====

void FUN_002e9928(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003957e0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002e9978  FUN_002e9978 =====

undefined * FUN_002e9978(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003957e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002e99b8  FUN_002e99b8 =====

void FUN_002e99b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381e48;
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


// ===== 002e9a24  FUN_002e9a24 =====

void FUN_002e9a24(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381e48;
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


// ===== 002e9a8c  FUN_002e9a8c =====

undefined8 * FUN_002e9a8c(long param_1)

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
  *puVar4 = &PTR_FUN_00381e48;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002e9aec to 002e9aef has its CatchHandler @ 002e9b28 */
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


// ===== 002e9b50  FUN_002e9b50 =====

void FUN_002e9b50(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381e48;
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


// ===== 002e9be8  FUN_002e9be8 =====

void FUN_002e9be8(long param_1)

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


// ===== 002e9c48  FUN_002e9c48 =====

void FUN_002e9c48(void *param_1)

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


// ===== 002e9ca4  FUN_002e9ca4 =====

void FUN_002e9ca4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002e9d00 to 002e9d0f has its CatchHandler @ 002ea258 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395728,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002e9d88;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002e9d88;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002e9d88:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395798
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395798
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395790
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395790
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelNumberPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395798
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002e9dc0 to 002e9dc3 has its CatchHandler @ 002e9f68 */
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
                    /* try { // try from 002e9e40 to 002e9e4f has its CatchHandler @ 002ea3f4 */
    FUN_002e66c8(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002e9e5c to 002e9e6f has its CatchHandler @ 002ea3d4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002e9e70 to 002e9e83 has its CatchHandler @ 002ea3bc */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002e9e84 to 002e9e8f has its CatchHandler @ 002ea38c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002e9e90 to 002e9e9f has its CatchHandler @ 002ea368 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002e9ea0 to 002e9eb3 has its CatchHandler @ 002ea344 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002e9eb4 to 002e9ebf has its CatchHandler @ 002ea320 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002e9ec0 to 002e9ecf has its CatchHandler @ 002ea2fc */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002e9ed0 to 002e9ee3 has its CatchHandler @ 002ea2d8 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002e9ee8 to 002e9f23 has its CatchHandler @ 002ea278 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ea41c  FUN_002ea41c =====

void FUN_002ea41c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003957a0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002ea46c  FUN_002ea46c =====

undefined * FUN_002ea46c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003957a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ea4ac  margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods
          (HybridViewModelNumberPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ea4f0  margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelNumberPropertySpec::loadHybridMethods
          (HybridViewModelNumberPropertySpec *this)

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


// ===== 002ea534  FUN_002ea534 =====

void FUN_002ea534(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2ea538);
  (*pcVar1)();
}


// ===== 002ea538  FUN_002ea538 =====

void FUN_002ea538(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2ea53c);
  (*pcVar1)();
}


// ===== 002ea53c  FUN_002ea53c =====

void FUN_002ea53c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2ea540);
  (*pcVar1)();
}


// ===== 002ea540  FUN_002ea540 =====

void FUN_002ea540(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2ea544);
  (*pcVar1)();
}


// ===== 002ea544  margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods
          (HybridViewModelStringPropertySpec *this)

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
  basic_string local_1a0;
  char acStack_19f [7];
  char cStack_198;
  char acStack_197 [7];
  undefined1 local_190;
  undefined7 uStack_18f;
  basic_string local_188;
  undefined7 uStack_187;
  undefined4 uStack_180;
  uint uStack_17c;
  long *local_178;
  basic_string local_170;
  undefined4 local_16f;
  void *local_160;
  basic_string local_158;
  char acStack_157 [5];
  undefined2 uStack_152;
  char cStack_150;
  char acStack_14f [5];
  undefined1 uStack_14a;
  undefined1 uStack_149;
  long *local_148;
  basic_string local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  void *local_130;
  basic_string local_128;
  undefined4 uStack_127;
  undefined2 uStack_123;
  undefined1 uStack_121;
  long *plStack_120;
  long *local_118;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar5 + *(long *)(*(long *)(this + lVar5) + -0x20) + 8);
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00395730;
                    /* try { // try from 002ea5d4 to 002ea5e3 has its CatchHandler @ 002eb868 */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar9 = plStack_d8;
    plVar6 = local_e0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395840) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar5 + 0x10);
      local_e0 = plVar6;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00395730;
                    /* try { // try from 002ea6f0 to 002ea6ff has its CatchHandler @ 002eb85c */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar9 = plStack_88;
      plVar6 = local_90;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x002ea7a4;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x002ea7a4:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_128 = (basic_string)0xa;
    uStack_127 = 0x756c6176;
    uStack_123 = 0x65;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb2e0 to 002eb2f3 has its CatchHandler @ 002ebc04 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002eb2f4 to 002eb307 has its CatchHandler @ 002ebac8 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 002eb30c to 002eb343 has its CatchHandler @ 002ebaa4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    plVar6 = plVar9 + 3;
    lVar5 = FUN_002632b8(*plVar6,plVar9[4],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb354 to 002eb367 has its CatchHandler @ 002ebc00 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002eb368 to 002eb37b has its CatchHandler @ 002ebaa0 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002eb380 to 002eb3b7 has its CatchHandler @ 002eba74 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    local_110 = (undefined *)
                CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
    local_100 = local_118;
    plStack_108 = plStack_120;
    plStack_f0 = _UNK_001d8138;
    local_f8 = _DAT_001d8130;
    local_e8 = 1;
                    /* try { // try from 002ea824 to 002ea82b has its CatchHandler @ 002eb930 */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_003823b0;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 002ea85c to 002ea85f has its CatchHandler @ 002eb84c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002ea89c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002ea8ac:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002ea8ac;
      }
      if (local_70 != &local_90) goto LAB_002ea89c;
      local_c0 = &local_e0;
                    /* try { // try from 002eb094 to 002eb09f has its CatchHandler @ 002eb668 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_128 & 1) == 0) {
      plStack_a0 = plStack_120;
      local_a8 = CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
      local_98 = local_118;
    }
    else {
                    /* try { // try from 002ea8dc to 002ea8e3 has its CatchHandler @ 002eb7e0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_118,(ulong)plStack_120);
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002ea908:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002ea908;
    }
                    /* try { // try from 002ea914 to 002ea927 has its CatchHandler @ 002eb920 */
    FUN_002634d4(plVar9 + 8,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002ea95c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002ea95c;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = (basic_string)0xa;
    local_13f = 0x756c6176;
    local_13b = 0x65;
    lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb3c4 to 002eb3d7 has its CatchHandler @ 002ebbe4 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002eb3d8 to 002eb3eb has its CatchHandler @ 002eba5c */
      FUN_00263450(&local_e0,&local_90,"\" - a setter with that name already exists!");
                    /* try { // try from 002eb3f0 to 002eb427 has its CatchHandler @ 002eba38 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb438 to 002eb44b has its CatchHandler @ 002ebbe0 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002eb44c to 002eb45f has its CatchHandler @ 002eba34 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002eb464 to 002eb49b has its CatchHandler @ 002eba08 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
                    /* try { // try from 002ea9b8 to 002ea9cf has its CatchHandler @ 002eb918 */
    FUN_002ee910(&local_e0,&local_140,0x20,1,2);
                    /* try { // try from 002ea9d0 to 002ea9e3 has its CatchHandler @ 002eb908 */
    FUN_002634d4(plVar9 + 0xd,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002eaa18:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002eaa18;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x1a;
    uStack_14a = 0;
    acStack_157[0] = s_getValueAsync_001d6c10[0];
    acStack_157[1] = s_getValueAsync_001d6c10[1];
    acStack_157[2] = s_getValueAsync_001d6c10[2];
    acStack_157[3] = s_getValueAsync_001d6c10[3];
    acStack_157[4] = s_getValueAsync_001d6c10[4];
    uStack_152 = (undefined2)s_getValueAsync_001d6c10._5_3_;
    cStack_150 = SUB31(s_getValueAsync_001d6c10._5_3_,2);
    acStack_14f[0] = s_getValueAsync_001d6c10[8];
    acStack_14f[1] = s_getValueAsync_001d6c10[9];
    acStack_14f[2] = s_getValueAsync_001d6c10[10];
    acStack_14f[3] = s_getValueAsync_001d6c10[0xb];
    acStack_14f[4] = s_getValueAsync_001d6c10[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_158);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_158), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb110 to 002eb123 has its CatchHandler @ 002ebc74 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002eb124 to 002eb137 has its CatchHandler @ 002ebbc8 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002eb13c to 002eb173 has its CatchHandler @ 002ebba4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_158);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb4a8 to 002eb4bb has its CatchHandler @ 002ebba0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002eb4bc to 002eb4cf has its CatchHandler @ 002eba04 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002eb4d4 to 002eb50b has its CatchHandler @ 002eb9d8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    plStack_108 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
    local_e8 = 0;
    local_100 = local_148;
    plStack_f0 = _UNK_001d81b8;
    local_f8 = _DAT_001d81b0;
                    /* try { // try from 002eaaa8 to 002eaaaf has its CatchHandler @ 002eb8f0 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003824b0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002eaae0 to 002eaae3 has its CatchHandler @ 002eb7d0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002eab20:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002eab30:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002eab30;
      }
      if (local_70 != &local_90) goto LAB_002eab20;
      local_c0 = &local_e0;
                    /* try { // try from 002eb0b4 to 002eb0bf has its CatchHandler @ 002eb664 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_158 & 1) == 0) {
      plStack_a0 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))
                                   );
      local_a8 = CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
      local_98 = local_148;
    }
    else {
                    /* try { // try from 002eab60 to 002eab67 has its CatchHandler @ 002eb764 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,
                 CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002eab8c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002eab8c;
    }
                    /* try { // try from 002eab98 to 002eabab has its CatchHandler @ 002eb8e0 */
    FUN_002634d4(plVar6,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002eabe0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002eabe0;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = (basic_string)0x6;
    local_16f = 0x746573;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_170);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_170), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb184 to 002eb197 has its CatchHandler @ 002ebc58 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002eb198 to 002eb1ab has its CatchHandler @ 002ebb88 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002eb1b0 to 002eb1e7 has its CatchHandler @ 002ebb64 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_170);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb518 to 002eb52b has its CatchHandler @ 002ebb60 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002eb52c to 002eb53f has its CatchHandler @ 002eb9d4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002eb544 to 002eb57b has its CatchHandler @ 002eb9a8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
                    /* try { // try from 002eac40 to 002eac57 has its CatchHandler @ 002eb8d8 */
    FUN_002ee910(&local_e0,&local_170,0x30,1,0);
                    /* try { // try from 002eac58 to 002eac6b has its CatchHandler @ 002eb8c8 */
    FUN_002634d4(plVar6,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002eaca0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002eaca0;
    }
    if (((byte)local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    local_188 = (basic_string)0x16;
    uStack_187 = (undefined7)s_addListener_001d6f8c._0_8_;
    uStack_180 = CONCAT31(0x72656e,SUB81(s_addListener_001d6f8c._0_8_,7));
    uStack_17c = uStack_17c & 0xffffff00;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_188);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_188), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb1f8 to 002eb20b has its CatchHandler @ 002ebc3c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002eb20c to 002eb21f has its CatchHandler @ 002ebb48 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002eb224 to 002eb25b has its CatchHandler @ 002ebb24 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_188);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb588 to 002eb59b has its CatchHandler @ 002ebb20 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002eb59c to 002eb5af has its CatchHandler @ 002eb9a4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002eb5b4 to 002eb5eb has its CatchHandler @ 002eb978 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    plStack_108 = (long *)CONCAT44(uStack_17c,uStack_180);
    local_110 = (undefined *)CONCAT71(uStack_187,local_188);
    local_e8 = 0;
    local_100 = local_178;
    plStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002ead34 to 002ead3b has its CatchHandler @ 002eb8b0 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00382530;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002ead6c to 002ead6f has its CatchHandler @ 002eb754 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002eadac:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002eadbc:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002eadbc;
      }
      if (local_70 != &local_90) goto LAB_002eadac;
      local_c0 = &local_e0;
                    /* try { // try from 002eb0d4 to 002eb0df has its CatchHandler @ 002eb660 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_188 & 1) == 0) {
      plStack_a0 = (long *)CONCAT44(uStack_17c,uStack_180);
      local_a8 = CONCAT71(uStack_187,local_188);
      local_98 = local_178;
    }
    else {
                    /* try { // try from 002eadf0 to 002eadf7 has its CatchHandler @ 002eb6e8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_178,CONCAT44(uStack_17c,uStack_180));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002eae1c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002eae1c;
    }
                    /* try { // try from 002eae28 to 002eae3b has its CatchHandler @ 002eb8a0 */
    FUN_002634d4(plVar6,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002eae70:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002eae70;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete(local_178);
    }
    local_1a0 = (basic_string)0x1e;
    local_190 = 0;
    acStack_19f[0] = s_removeListeners_001d79f7[0];
    acStack_19f[1] = s_removeListeners_001d79f7[1];
    acStack_19f[2] = s_removeListeners_001d79f7[2];
    acStack_19f[3] = s_removeListeners_001d79f7[3];
    acStack_19f[4] = s_removeListeners_001d79f7[4];
    acStack_19f[5] = s_removeListeners_001d79f7[5];
    acStack_19f[6] = s_removeListeners_001d79f7[6];
    cStack_198 = s_removeListeners_001d79f7[7];
    acStack_197[0] = s_removeListeners_001d79f7[8];
    acStack_197[1] = s_removeListeners_001d79f7[9];
    acStack_197[2] = s_removeListeners_001d79f7[10];
    acStack_197[3] = s_removeListeners_001d79f7[0xb];
    acStack_197[4] = s_removeListeners_001d79f7[0xc];
    acStack_197[5] = s_removeListeners_001d79f7[0xd];
    acStack_197[6] = s_removeListeners_001d79f7[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1a0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1a0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb26c to 002eb27f has its CatchHandler @ 002ebc20 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002eb280 to 002eb293 has its CatchHandler @ 002ebb08 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002eb298 to 002eb2cf has its CatchHandler @ 002ebae4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1a0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002eb5f8 to 002eb60b has its CatchHandler @ 002ebae0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002eb60c to 002eb61f has its CatchHandler @ 002eb974 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002eb624 to 002eb65b has its CatchHandler @ 002eb948 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ebcb0;
    }
    plStack_108 = (long *)CONCAT71(acStack_197,cStack_198);
    local_110 = (undefined *)CONCAT71(acStack_19f,local_1a0);
    local_100 = (long *)CONCAT71(uStack_18f,local_190);
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 002eaf04 to 002eaf0b has its CatchHandler @ 002eb888 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003825b0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002eaf3c to 002eaf3f has its CatchHandler @ 002eb6d8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002eaf7c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002eaf8c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002eaf8c;
      }
      if (local_70 != &local_90) goto LAB_002eaf7c;
      local_c0 = &local_e0;
                    /* try { // try from 002eb0f4 to 002eb0ff has its CatchHandler @ 002eb65c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_1a0 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(acStack_197,cStack_198);
      local_a8 = CONCAT71(acStack_19f,local_1a0);
      local_98 = (long *)CONCAT71(uStack_18f,local_190);
    }
    else {
                    /* try { // try from 002eafbc to 002eafc3 has its CatchHandler @ 002eb66c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_18f,local_190),CONCAT71(acStack_197,cStack_198));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002eafe8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002eafe8;
    }
                    /* try { // try from 002eaff4 to 002eb007 has its CatchHandler @ 002eb878 */
    FUN_002634d4(plVar6,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002eb03c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002eb03c;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_18f,local_190));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_002ebcb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ebcb4  FUN_002ebcb4 =====

void FUN_002ebcb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003825b0;
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


// ===== 002ebd20  FUN_002ebd20 =====

void FUN_002ebd20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003825b0;
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


// ===== 002ebd88  FUN_002ebd88 =====

undefined8 * FUN_002ebd88(long param_1)

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
  *puVar4 = &PTR_FUN_003825b0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002ebde8 to 002ebdeb has its CatchHandler @ 002ebe24 */
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


// ===== 002ebe4c  FUN_002ebe4c =====

void FUN_002ebe4c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003825b0;
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


// ===== 002ebee4  FUN_002ebee4 =====

void FUN_002ebee4(long param_1)

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


// ===== 002ebf44  FUN_002ebf44 =====

void FUN_002ebf44(void *param_1)

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


// ===== 002ebfa0  FUN_002ebfa0 =====

void FUN_002ebfa0(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002ebffc to 002ec00b has its CatchHandler @ 002ec54c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395730,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002ec084;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002ec084;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002ec084:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395948
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395948
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395940
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395940
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395948
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002ec0bc to 002ec0bf has its CatchHandler @ 002ec25c */
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
                    /* try { // try from 002ec134 to 002ec143 has its CatchHandler @ 002ec6e8 */
    FUN_002ec7a0(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ec150 to 002ec163 has its CatchHandler @ 002ec6c8 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002ec164 to 002ec177 has its CatchHandler @ 002ec6b0 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002ec178 to 002ec183 has its CatchHandler @ 002ec680 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002ec184 to 002ec193 has its CatchHandler @ 002ec65c */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002ec194 to 002ec1a7 has its CatchHandler @ 002ec638 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002ec1a8 to 002ec1b3 has its CatchHandler @ 002ec614 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002ec1b4 to 002ec1c3 has its CatchHandler @ 002ec5f0 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002ec1c4 to 002ec1d7 has its CatchHandler @ 002ec5cc */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002ec1dc to 002ec217 has its CatchHandler @ 002ec56c */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ec710  FUN_002ec710 =====

void FUN_002ec710(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395950) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002ec760  FUN_002ec760 =====

undefined * FUN_002ec760(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395958;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ec7a0  FUN_002ec7a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ec7a0(undefined8 *param_1,int param_2,byte *param_3,long param_4)

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
    puVar7 = PTR_typeinfo_name_00395840;
    uStack_68 = _UNK_001d8108;
    local_70 = _DAT_001d8100;
    *(undefined1 *)(local_60 + 7) = 0;
    uVar14 = *(undefined8 *)puVar7;
    uVar13 = *(undefined8 *)(puVar7 + 0x18);
    uVar12 = *(undefined8 *)(puVar7 + 0x10);
    uVar10 = *(undefined8 *)(puVar7 + 0x30);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar14;
    local_60[3] = uVar13;
    local_60[2] = uVar12;
    uVar13 = *(undefined8 *)(puVar7 + 0x28);
    uVar12 = *(undefined8 *)(puVar7 + 0x20);
    local_60[6] = uVar10;
    local_60[5] = uVar13;
    local_60[4] = uVar12;
                    /* try { // try from 002ec82c to 002ec83b has its CatchHandler @ 002ecacc */
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
    if (0xffffffffffffffef < uVar1) goto LAB_002eca8c;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002ec990;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002ec978 to 002ec97f has its CatchHandler @ 002ecae0 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002ec990:
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
                    /* try { // try from 002ec9d0 to 002ec9d7 has its CatchHandler @ 002ecab8 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 002ec9f0 to 002eca03 has its CatchHandler @ 002ecaa0 */
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002ecb28;
                    /* try { // try from 002eca88 to 002eca8b has its CatchHandler @ 002ecafc */
      FUN_00260a84();
LAB_002eca8c:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002eca9c to 002eca9f has its CatchHandler @ 002ecae0 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002ec9f0 with catch @ 002ecaa0 */
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
      goto LAB_002ecb28;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002ec900;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002ec8e8 to 002ec8ef has its CatchHandler @ 002ecafc */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_002ec900:
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
                    /* try { // try from 002ec940 to 002ec947 has its CatchHandler @ 002ecae4 */
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
LAB_002ecb28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ecb2c  FUN_002ecb2c =====

void FUN_002ecb2c(long *param_1)

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


// ===== 002ecbb8  FUN_002ecbb8 =====

void FUN_002ecbb8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382530;
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


// ===== 002ecc24  FUN_002ecc24 =====

void FUN_002ecc24(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382530;
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


// ===== 002ecc8c  FUN_002ecc8c =====

undefined8 * FUN_002ecc8c(long param_1)

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
  *puVar4 = &PTR_FUN_00382530;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002eccec to 002eccef has its CatchHandler @ 002ecd28 */
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


// ===== 002ecd50  FUN_002ecd50 =====

void FUN_002ecd50(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00382530;
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


// ===== 002ecde8  FUN_002ecde8 =====

void FUN_002ecde8(long param_1)

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


// ===== 002ece48  FUN_002ece48 =====

void FUN_002ece48(void *param_1)

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


// ===== 002ecea4  FUN_002ecea4 =====

void FUN_002ecea4(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [4];
  undefined8 **local_b0;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_d0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002ecf04 to 002ecf13 has its CatchHandler @ 002ed54c */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00395730,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_002ecf60;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_002ecf60:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 002ed0c8 to 002ed0d7 has its CatchHandler @ 002ed6ec */
    FUN_002ec7a0(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ed0e4 to 002ed0f7 has its CatchHandler @ 002ed6cc */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002ed0f8 to 002ed10b has its CatchHandler @ 002ed6b4 */
    FUN_00263450(auStack_130,auStack_148,"` expected ");
                    /* try { // try from 002ed10c to 002ed117 has its CatchHandler @ 002ed684 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002ed118 to 002ed127 has its CatchHandler @ 002ed660 */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 002ed128 to 002ed13b has its CatchHandler @ 002ed63c */
    FUN_00263450(auStack_100,auStack_118," arguments, but received ");
                    /* try { // try from 002ed13c to 002ed147 has its CatchHandler @ 002ed618 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002ed148 to 002ed157 has its CatchHandler @ 002ed5f4 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 002ed158 to 002ed16b has its CatchHandler @ 002ed5cc */
    FUN_00263450(local_d0,auStack_e8,&DAT_001d5be0);
                    /* try { // try from 002ed170 to 002ed1ab has its CatchHandler @ 002ed56c */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_d0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002ed710;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395900
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395900
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003958f8
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003958f8
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395900
                       );
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 002ecfc8 to 002ecfd7 has its CatchHandler @ 002ed258 */
  FUN_002ed7a4(local_d0,param_3,uVar10);
                    /* try { // try from 002ecfd8 to 002ecfeb has its CatchHandler @ 002ed21c */
  (*pcVar11)(&local_a0,plVar1,local_d0);
  if (local_b0 == local_d0) {
    lVar5 = 4;
    local_b0 = local_d0;
LAB_002ed00c:
    (*(code *)(*local_b0)[lVar5])();
  }
  else if (local_b0 != (undefined8 **)0x0) {
    lVar5 = 5;
    goto LAB_002ed00c;
  }
                    /* try { // try from 002ed018 to 002ed02b has its CatchHandler @ 002ed1fc */
  FUN_002e76cc(param_1,param_3,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_002ed04c:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_002ed04c;
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_002ed710:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ed714  FUN_002ed714 =====

void FUN_002ed714(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395930) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002ed764  FUN_002ed764 =====

undefined * FUN_002ed764(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395938;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ed7a4  FUN_002ed7a4 =====

void FUN_002ed7a4(long param_1,Runtime *param_2,IRuntime *param_3)

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
                    /* try { // try from 002ed7e0 to 002ed7ef has its CatchHandler @ 002edbdc */
  facebook::jsi::Object::asFunction((IRuntime *)&local_98);
  if (local_98 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_98)();
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
                    /* try { // try from 002ed808 to 002ed813 has its CatchHandler @ 002edba0 */
  margelo::nitro::JSICache::getOrCreateCache(param_2);
                    /* try { // try from 002ed818 to 002ed823 has its CatchHandler @ 002edb90 */
  FUN_0026ce4c(&local_80,local_98,&local_60);
                    /* try { // try from 002ed824 to 002ed82f has its CatchHandler @ 002edb80 */
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
        goto LAB_002ed890;
      }
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    else {
LAB_002ed890:
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
                    /* try { // try from 002ed910 to 002ed91b has its CatchHandler @ 002edb70 */
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
                    /* try { // try from 002ed954 to 002ed95b has its CatchHandler @ 002edb4c */
  puVar7 = (undefined8 *)operator_new(0x30);
  puVar7[2] = plVar4;
  puVar7[3] = plVar5;
  *puVar7 = &PTR_FUN_00383af8;
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
        goto LAB_002eda1c;
      }
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    else {
LAB_002eda1c:
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    local_88 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_68 == (long *)0x0) goto LAB_002edadc;
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
      goto LAB_002edaac;
    }
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  else {
LAB_002edaac:
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  local_68 = plVar2;
  if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
    std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
    operator_delete(plVar2);
  }
LAB_002edadc:
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002edbfc  FUN_002edbfc =====

void FUN_002edbfc(long param_1)

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


// ===== 002edc50  FUN_002edc50 =====

void FUN_002edc50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383af8;
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


// ===== 002edcb0  FUN_002edcb0 =====

void FUN_002edcb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383af8;
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


// ===== 002edd18  FUN_002edd18 =====

undefined8 * FUN_002edd18(long param_1)

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
  *puVar2 = &PTR_FUN_00383af8;
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


// ===== 002eddb4  FUN_002eddb4 =====

void FUN_002eddb4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00383af8;
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


// ===== 002ede48  FUN_002ede48 =====

void FUN_002ede48(long param_1)

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


// ===== 002ede9c  FUN_002ede9c =====

void FUN_002ede9c(void *param_1)

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


// ===== 002edef8  FUN_002edef8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002edef8(long param_1,ulong *param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_b0;
  long *plStack_a8;
  long *local_a0;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar3 = (long *)0x0;
LAB_002edf84:
                    /* try { // try from 002edf84 to 002edf8b has its CatchHandler @ 002ee210 */
    local_70 = (undefined8 *)operator_new(0x70);
    puVar2 = PTR_typeinfo_name_00395908;
    uStack_78 = _UNK_001d8088;
    local_80 = _DAT_001d8080;
    *(undefined1 *)((long)local_70 + 0x6b) = 0;
    uVar10 = *(undefined8 *)(puVar2 + 0x40);
    uVar12 = *(undefined8 *)(puVar2 + 0x58);
    uVar11 = *(undefined8 *)(puVar2 + 0x50);
    uVar9 = *(undefined8 *)(puVar2 + 99);
    uVar8 = *(undefined8 *)(puVar2 + 0x5b);
    local_70[9] = *(undefined8 *)(puVar2 + 0x48);
    local_70[8] = uVar10;
    local_70[0xb] = uVar12;
    local_70[10] = uVar11;
    *(undefined8 *)((long)local_70 + 99) = uVar9;
    *(undefined8 *)((long)local_70 + 0x5b) = uVar8;
    uVar10 = *(undefined8 *)puVar2;
    uVar9 = *(undefined8 *)(puVar2 + 0x18);
    uVar8 = *(undefined8 *)(puVar2 + 0x10);
    local_70[1] = *(undefined8 *)(puVar2 + 8);
    *local_70 = uVar10;
    local_70[3] = uVar9;
    local_70[2] = uVar8;
    uVar8 = *(undefined8 *)(puVar2 + 0x20);
    uVar10 = *(undefined8 *)(puVar2 + 0x38);
    uVar9 = *(undefined8 *)(puVar2 + 0x30);
    local_70[5] = *(undefined8 *)(puVar2 + 0x28);
    local_70[4] = uVar8;
    local_70[7] = uVar10;
    local_70[6] = uVar9;
                    /* try { // try from 002edfc8 to 002edfd7 has its CatchHandler @ 002ee1f8 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (plVar3 == (long *)0x0) goto LAB_002ee178;
  }
  else {
    plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar3 == (long *)0x0) || (plVar7 = *(long **)(param_1 + 0x20), plVar7 == (long *)0x0))
    goto LAB_002edf84;
    plStack_a8 = *(long **)(param_1 + 0x10);
    local_b0 = *(ulong *)(param_1 + 8);
    local_a0 = *(long **)(param_1 + 0x18);
    if (local_a0 != (long *)0x0) {
      FUN_00255510(1);
    }
    if ((*param_2 & 1) == 0) {
      uStack_90 = param_2[1];
      local_98 = *param_2;
      local_88 = (void *)param_2[2];
    }
    else {
                    /* try { // try from 002ee014 to 002ee01b has its CatchHandler @ 002ee1a0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)param_2[2],param_2[1]);
    }
    local_60 = (ulong *)0x0;
                    /* try { // try from 002ee020 to 002ee027 has its CatchHandler @ 002ee1e8 */
    local_60 = (ulong *)operator_new(0x38);
    *local_60 = (ulong)&PTR_FUN_00383b78;
    local_60[2] = (ulong)plStack_a8;
    local_60[1] = local_b0;
    local_60[3] = (ulong)local_a0;
    *(undefined8 *)((ulong)&local_b0 | 8) = 0;
    ((undefined8 *)((ulong)&local_b0 | 8))[1] = 0;
    local_60[5] = uStack_90;
    local_60[4] = local_98;
    local_60[6] = (ulong)local_88;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
                    /* try { // try from 002ee06c to 002ee07b has its CatchHandler @ 002ee1b0 */
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_80);
    if (local_60 == &local_80) {
      lVar6 = 4;
      puVar4 = &local_80;
LAB_002ee09c:
      (**(code **)(*puVar4 + lVar6 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar6 = 5;
      puVar4 = local_60;
      goto LAB_002ee09c;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_a0 != (long *)0x0) {
      uVar5 = FUN_00255510(0xffffffffffffffff);
      plVar7 = plStack_a8;
      if ((uVar5 < 2) && ((*(byte *)(local_a0 + 2) & 1) == 0)) {
        if (plStack_a8 != (long *)0x0) {
          if ((undefined8 *)*plStack_a8 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plStack_a8)();
          }
          operator_delete(plVar7);
        }
        plStack_a8 = (long *)0x0;
        *(undefined4 *)(local_a0 + 2) = 1;
      }
      plVar7 = local_a0;
      if ((*local_a0 == 0) && (local_a0[1] == 0)) {
        if (local_a0 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)local_a0 + 0x14));
          operator_delete(plVar7);
        }
        local_a0 = (long *)0x0;
      }
    }
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_002ee178:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ee238  FUN_002ee238 =====

void FUN_002ee238(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395908) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002ee288  FUN_002ee288 =====

undefined * FUN_002ee288(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395910;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ee2c8  FUN_002ee2c8 =====

void FUN_002ee2c8(long param_1)

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


// ===== 002ee320  FUN_002ee320 =====

void FUN_002ee320(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383b78;
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


// ===== 002ee384  FUN_002ee384 =====

void FUN_002ee384(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383b78;
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


// ===== 002ee3f0  FUN_002ee3f0 =====

undefined8 * FUN_002ee3f0(long param_1)

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
  *puVar2 = &PTR_FUN_00383b78;
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
                    /* try { // try from 002ee46c to 002ee473 has its CatchHandler @ 002ee49c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ee4cc  FUN_002ee4cc =====

void FUN_002ee4cc(long param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_00383b78;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != lVar3) {
LAB_002ee5ac:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar5;
    param_2[4] = uVar4;
  }
  else {
                    /* try { // try from 002ee55c to 002ee563 has its CatchHandler @ 002ee588 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
    if (*(long *)(lVar1 + 0x28) != lVar3) goto LAB_002ee5ac;
  }
  return;
}


// ===== 002ee5b0  FUN_002ee5b0 =====

void FUN_002ee5b0(long param_1)

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


// ===== 002ee608  FUN_002ee608 =====

void FUN_002ee608(void *param_1)

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


// ===== 002ee668  FUN_002ee668 =====

void FUN_002ee668(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  runtime_error *this;
  undefined4 local_90 [2];
  undefined1 auStack_88 [8];
  Value aVStack_80 [24];
  undefined4 local_68 [6];
  Value aVStack_50 [24];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
    FUN_00264e5c(local_68,PTR_typeinfo_name_00395918,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002ee778 to 002ee78b has its CatchHandler @ 002ee848 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 002ee78c to 002ee79f has its CatchHandler @ 002ee830 */
    FUN_00263450(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 002ee7a4 to 002ee7db has its CatchHandler @ 002ee7fc */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    bVar6 = (*(byte *)(param_1 + 0x20) & 1) != 0;
    lVar1 = param_1 + 0x21;
    if (bVar6) {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    uVar2 = (ulong)(*(byte *)(param_1 + 0x20) >> 1);
    if (bVar6) {
      uVar2 = *(ulong *)(param_1 + 0x28);
    }
    (**(code **)(*plVar3 + 0x110))(auStack_88,plVar3,lVar1,uVar2);
    local_90[0] = 6;
    facebook::jsi::Value::Value(aVStack_50,(Value *)local_90);
    local_68[0] = 0;
                    /* try { // try from 002ee6f8 to 002ee713 has its CatchHandler @ 002ee7dc */
    (**(code **)(*plVar3 + 0x280))(aVStack_80,plVar3,uVar4,local_68,aVStack_50,1);
    facebook::jsi::Value::~Value((Value *)local_68);
    facebook::jsi::Value::~Value(aVStack_50);
    facebook::jsi::Value::~Value((Value *)local_90);
    facebook::jsi::Value::~Value(aVStack_80);
    if (*(long *)(lVar5 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ee880  FUN_002ee880 =====

void FUN_002ee880(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395920) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002ee8d0  FUN_002ee8d0 =====

undefined * FUN_002ee8d0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395928;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ee910  FUN_002ee910 =====

void FUN_002ee910(long param_1,ulong *param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  long local_98;
  long lStack_90;
  undefined4 local_88;
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    local_a0 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,(char *)param_2[2],param_2[1]);
  }
  local_98 = param_3;
  lStack_90 = param_4;
  local_88 = param_5;
                    /* try { // try from 002ee978 to 002ee97f has its CatchHandler @ 002eeb28 */
  local_60[0] = (long *)operator_new(0x38);
  *local_60[0] = (long)&PTR_FUN_00382430;
  if ((local_b0 & 1) == 0) {
    local_60[0][2] = uStack_a8;
    *(ulong *)(local_60[0] + 1) = local_b0;
    local_60[0][3] = (long)local_a0;
  }
  else {
                    /* try { // try from 002ee9b0 to 002ee9b3 has its CatchHandler @ 002eeb18 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60[0] + 1),local_a0,uStack_a8);
  }
  local_60[0][5] = lStack_90;
  local_60[0][4] = local_98;
  *(undefined4 *)(local_60[0] + 6) = local_88;
  if (((byte)local_b0._0_1_ & 1) == 0) {
LAB_002ee9f0:
    *(long **)(param_1 + 0x20) = local_60[0];
    pplVar3 = local_60;
LAB_002eea04:
    *pplVar3 = (long *)0x0;
  }
  else {
    operator_delete(local_a0);
    if (local_60[0] == (long *)0x0) {
      pplVar3 = (long **)(param_1 + 0x20);
      goto LAB_002eea04;
    }
    if (local_60[0] != local_80) goto LAB_002ee9f0;
    *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 002eea9c to 002eeaa7 has its CatchHandler @ 002eeaac */
    (**(code **)(local_80[0] + 0x18))(local_80,param_1);
  }
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = 1;
  if ((uVar4 & 1) == 0) {
    uVar6 = *param_2;
    uVar4 = param_2[2];
    *(ulong *)(param_1 + 0x40) = param_2[1];
    *(ulong *)(param_1 + 0x38) = uVar6;
    *(ulong *)(param_1 + 0x48) = uVar4;
  }
  else {
                    /* try { // try from 002eea30 to 002eea37 has its CatchHandler @ 002eeab0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x38),(char *)param_2[2],param_2[1]);
  }
  if (local_60[0] == local_80) {
    lVar5 = 4;
    plVar2 = local_80;
  }
  else {
    if (local_60[0] == (long *)0x0) goto LAB_002eea68;
    lVar5 = 5;
    plVar2 = local_60[0];
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_002eea68:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002eeb58  FUN_002eeb58 =====

void FUN_002eeb58(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382430;
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


// ===== 002eebc4  FUN_002eebc4 =====

void FUN_002eebc4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382430;
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


// ===== 002eec2c  FUN_002eec2c =====

undefined8 * FUN_002eec2c(long param_1)

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
  *puVar4 = &PTR_FUN_00382430;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002eec8c to 002eec8f has its CatchHandler @ 002eecc8 */
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


// ===== 002eecf0  FUN_002eecf0 =====

void FUN_002eecf0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00382430;
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


// ===== 002eed88  FUN_002eed88 =====

void FUN_002eed88(long param_1)

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


// ===== 002eede8  FUN_002eede8 =====

void FUN_002eede8(void *param_1)

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


// ===== 002eee44  FUN_002eee44 =====

void FUN_002eee44(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_140 [24];
  undefined8 *local_128 [3];
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
                    /* try { // try from 002eeea4 to 002eeeb3 has its CatchHandler @ 002ef49c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395730,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002eef2c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002eef2c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002eef2c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395870 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395870), puVar3 = PTR_defaultValue_00395868,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395868 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395870);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002eef68 to 002eef77 has its CatchHandler @ 002ef1a8 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002eef80 to 002eef8f has its CatchHandler @ 002ef184 */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_128);
    if (local_128[0] != (undefined8 *)0x0) {
      (**(code **)*local_128[0])();
    }
                    /* try { // try from 002eefa4 to 002eefaf has its CatchHandler @ 002ef168 */
    (*pcVar11)(plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
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
                    /* try { // try from 002ef034 to 002ef043 has its CatchHandler @ 002ef63c */
    FUN_002ec7a0(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ef050 to 002ef063 has its CatchHandler @ 002ef61c */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 002ef064 to 002ef077 has its CatchHandler @ 002ef604 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002ef078 to 002ef083 has its CatchHandler @ 002ef5d4 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002ef084 to 002ef093 has its CatchHandler @ 002ef5b0 */
    FUN_00264adc(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 002ef094 to 002ef0a7 has its CatchHandler @ 002ef58c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002ef0a8 to 002ef0b3 has its CatchHandler @ 002ef568 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002ef0b4 to 002ef0c3 has its CatchHandler @ 002ef544 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002ef0c4 to 002ef0d7 has its CatchHandler @ 002ef51c */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002ef0dc to 002ef117 has its CatchHandler @ 002ef4bc */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ef664  FUN_002ef664 =====

void FUN_002ef664(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395878) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002ef6b4  FUN_002ef6b4 =====

undefined * FUN_002ef6b4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395880;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ef6f4  FUN_002ef6f4 =====

void FUN_002ef6f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003824b0;
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


// ===== 002ef760  FUN_002ef760 =====

void FUN_002ef760(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003824b0;
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


// ===== 002ef7c8  FUN_002ef7c8 =====

undefined8 * FUN_002ef7c8(long param_1)

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
  *puVar4 = &PTR_FUN_003824b0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002ef828 to 002ef82b has its CatchHandler @ 002ef864 */
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


// ===== 002ef88c  FUN_002ef88c =====

void FUN_002ef88c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003824b0;
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


// ===== 002ef924  FUN_002ef924 =====

void FUN_002ef924(long param_1)

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


// ===== 002ef984  FUN_002ef984 =====

void FUN_002ef984(void *param_1)

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


// ===== 002ef9e0  FUN_002ef9e0 =====

void FUN_002ef9e0(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002efa3c to 002efa4b has its CatchHandler @ 002effec */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395730,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002efac4;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002efac4;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002efac4:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395890
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395890
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395888
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395888
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395890
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002efafc to 002efb03 has its CatchHandler @ 002efcf4 */
    (*pcVar9)(&local_110);
                    /* try { // try from 002efb08 to 002efb13 has its CatchHandler @ 002efcdc */
    FUN_002f0240(param_1,param_3,local_110,local_108);
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
                    /* try { // try from 002efbb4 to 002efbc3 has its CatchHandler @ 002f0188 */
    FUN_002ec7a0(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002efbd0 to 002efbe3 has its CatchHandler @ 002f0168 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002efbe4 to 002efbf7 has its CatchHandler @ 002f0150 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 002efbf8 to 002efc03 has its CatchHandler @ 002f0120 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002efc04 to 002efc13 has its CatchHandler @ 002f00fc */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002efc14 to 002efc27 has its CatchHandler @ 002f00d8 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002efc28 to 002efc33 has its CatchHandler @ 002f00b4 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002efc34 to 002efc43 has its CatchHandler @ 002f0090 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002efc44 to 002efc57 has its CatchHandler @ 002f006c */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002efc5c to 002efc97 has its CatchHandler @ 002f000c */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f01b0  FUN_002f01b0 =====

void FUN_002f01b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003958e8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f0200  FUN_002f0200 =====

undefined * FUN_002f0200(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003958f0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f0240  FUN_002f0240 =====

void FUN_002f0240(undefined8 param_1,Runtime *param_2,byte *param_3,long *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined ***pppuVar6;
  runtime_error *this;
  undefined1 auStack_b0 [24];
  basic_string abStack_98 [24];
  undefined **local_80;
  byte *pbStack_78;
  long *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar3 = *(int *)(param_3 + 0x18);
  if (iVar3 == 2) {
    FUN_0026aee4(&local_80,param_2);
                    /* try { // try from 002f0348 to 002f0357 has its CatchHandler @ 002f050c */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_80);
LAB_002f0358:
    facebook::jsi::Value::~Value((Value *)&local_80);
  }
  else {
    if (iVar3 == 1) {
      uVar1 = *(ulong *)(param_3 + 8);
      pbVar2 = *(byte **)(param_3 + 0x10);
      if ((*param_3 & 1) == 0) {
        pbVar2 = param_3 + 1;
        uVar1 = (ulong)(*param_3 >> 1);
      }
      (**(code **)(*(long *)param_2 + 0x110))(&pbStack_78,param_2,pbVar2,uVar1);
      local_80 = (undefined **)CONCAT44(local_80._4_4_,6);
                    /* try { // try from 002f0328 to 002f0337 has its CatchHandler @ 002f0510 */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_80);
      goto LAB_002f0358;
    }
    if (iVar3 != 0) {
      FUN_00264e5c(&local_80,PTR_typeinfo_name_003958e0,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f0404 to 002f0417 has its CatchHandler @ 002f04b4 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_80);
                    /* try { // try from 002f0418 to 002f042b has its CatchHandler @ 002f049c */
      FUN_00263450(abStack_98,auStack_b0,"> has invalid state!");
                    /* try { // try from 002f0430 to 002f0467 has its CatchHandler @ 002f0468 */
      std::runtime_error::runtime_error(this,abStack_98);
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f0534;
    }
    pbStack_78 = param_3;
    if (param_4 == (long *)0x0) {
      local_70 = (long *)0x0;
      local_80 = &PTR_FUN_003837e8;
      local_60 = &local_80;
    }
    else {
      FUN_00259a00(1,param_4 + 1);
      local_80 = &PTR_FUN_003837e8;
      local_70 = param_4;
      FUN_00259a00(1,param_4 + 1);
      local_60 = &local_80;
      lVar5 = FUN_00255510(0xffffffffffffffff,param_4 + 1);
      if (lVar5 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 002f037c to 002f038f has its CatchHandler @ 002f04d4 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_80);
    if (local_60 == &local_80) {
      lVar5 = 4;
      pppuVar6 = &local_80;
LAB_002f03b0:
      (*(code *)(*pppuVar6)[lVar5])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar5 = 5;
      pppuVar6 = local_60;
      goto LAB_002f03b0;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_002f0534:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f0538  FUN_002f0538 =====

void FUN_002f0538(long *param_1)

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


// ===== 002f05c4  FUN_002f05c4 =====

void FUN_002f05c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003837e8;
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


// ===== 002f065c  FUN_002f065c =====

void FUN_002f065c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003837e8;
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


// ===== 002f06e8  FUN_002f06e8 =====

void FUN_002f06e8(long param_1)

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
  *puVar4 = &PTR_FUN_003837e8;
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


// ===== 002f0760  FUN_002f0760 =====

void FUN_002f0760(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003837e8;
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


// ===== 002f07c4  FUN_002f07c4 =====

void FUN_002f07c4(long param_1)

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


// ===== 002f0850  FUN_002f0850 =====

void FUN_002f0850(void *param_1)

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


// ===== 002f08d0  FUN_002f08d0 =====

void FUN_002f08d0(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
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
                    /* try { // try from 002f091c to 002f092b has its CatchHandler @ 002f1318 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 002f0944 to 002f094f has its CatchHandler @ 002f12f8 */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 002f0954 to 002f095f has its CatchHandler @ 002f12e8 */
  FUN_0026ce4c(&local_100,local_d0,&local_138);
                    /* try { // try from 002f0960 to 002f096b has its CatchHandler @ 002f12d8 */
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
        goto LAB_002f09cc;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_002f09cc:
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
                    /* try { // try from 002f0a4c to 002f0a57 has its CatchHandler @ 002f12c8 */
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
                    /* try { // try from 002f0a90 to 002f0a97 has its CatchHandler @ 002f12a4 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_00383858;
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
        goto LAB_002f0b58;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_002f0b58:
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
        goto LAB_002f0be8;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_002f0be8:
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
LAB_002f0c58:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_002f0c58;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 002f0c70 to 002f0c7b has its CatchHandler @ 002f1280 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 002f0c88 to 002f0c8f has its CatchHandler @ 002f128c */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_00383978;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 002f0cc4 to 002f0cd3 has its CatchHandler @ 002f127c */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 002f0cd8 to 002f0cdf has its CatchHandler @ 002f129c */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x18) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 002f0d00 to 002f0da3 has its CatchHandler @ 002f13a8 */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
LAB_002f0edc:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_002f0f40:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_002f0f40;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_002f0f70:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_002f0f70;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_002f0fa0:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_002f0fa0;
      }
      FUN_0026c2bc(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_002f0fe8:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_002f0fe8;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 002f1000 to 002f100b has its CatchHandler @ 002f1278 */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 002f1018 to 002f101f has its CatchHandler @ 002f1284 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_00384d40;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 002f1054 to 002f1063 has its CatchHandler @ 002f1274 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 002f1068 to 002f106f has its CatchHandler @ 002f1294 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x18) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_002f1220;
                    /* try { // try from 002f108c to 002f10cf has its CatchHandler @ 002f133c */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0x40);
        if (uVar5 < *(ulong *)(lVar11 + 0x48)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_002f10d8:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_002f10d8;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 002f10f0 to 002f10f7 has its CatchHandler @ 002f1268 */
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
LAB_002f1134:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_002f1134;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_002f1164:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_002f1164;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_002f1198:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_002f1198;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_002f1464;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002f1464;
                    /* try { // try from 002f121c to 002f121f has its CatchHandler @ 002f13a8 */
    FUN_0025cd00();
LAB_002f1220:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002f1464;
                    /* try { // try from 002f1234 to 002f1237 has its CatchHandler @ 002f133c */
    FUN_0025cd00();
LAB_002f1238:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002f1464;
                    /* try { // try from 002f124c to 002f1267 has its CatchHandler @ 002f13a8 */
    FUN_002f14f8();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x28);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0x30)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_002f0dac:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_002f0dac;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 002f0e00 to 002f0e07 has its CatchHandler @ 002f1270 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_002f0ed8:
      *(long *)(lVar11 + 0x28) = lVar9;
      goto LAB_002f0edc;
    }
    uVar17 = *(ulong *)(lVar11 + 0x20);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_002f1238;
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
LAB_002f0db8:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_002f0de8:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_002f0de8;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 002f0e1c to 002f0e27 has its CatchHandler @ 002f126c */
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
LAB_002f0e48:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_002f0e48;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 002f0e9c to 002f0e9f has its CatchHandler @ 002f1338 */
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
joined_r0x002f0ec8:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x002f0f2c;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_002f0f08;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_002f0ed8;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_002f0db8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 002f10f0 with catch @ 002f1268 */
    FUN_0025ad9c();
  }
LAB_002f1464:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x002f0f2c:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_002f0f08:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x002f0ec8;
}


// ===== 002f1468  FUN_002f1468 =====

void FUN_002f1468(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003958d0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f14b8  FUN_002f14b8 =====

undefined * FUN_002f14b8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003958d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f14f8  FUN_002f14f8 =====

void FUN_002f14f8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f1530  FUN_002f1530 =====

void FUN_002f1530(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00383978;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_002f15bc;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x002f159c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002f15bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f15c0  FUN_002f15c0 =====

void FUN_002f15c0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00383978;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002f161c;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002f161c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f1644  FUN_002f1644 =====

undefined8 * FUN_002f1644(long param_1)

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
  *puVar2 = &PTR_FUN_00383978;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_002f16bc;
    }
                    /* try { // try from 002f16a0 to 002f16bb has its CatchHandler @ 002f16e4 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_002f16bc:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f170c  FUN_002f170c =====

void FUN_002f170c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00383978;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x002f17b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_002f17b8;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_002f17b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f17bc  FUN_002f17bc =====

void FUN_002f17bc(long param_1)

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
      goto LAB_002f183c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002f181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002f183c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f1840  FUN_002f1840 =====

void FUN_002f1840(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_002f1890;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002f1890:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f18b8  FUN_002f18b8 =====

void FUN_002f18b8(long param_1,ulong *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_38 = param_2[1];
    local_40 = *param_2;
    local_30 = (void *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_40,(char *)param_2[2],param_2[1]);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      uVar3 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 002f1914 with catch @ 002f1960 */
      if ((local_40 & 1) != 0) {
        operator_delete(local_30);
      }
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_00255d34(uVar3);
      }
    }
  }
  else {
                    /* try { // try from 002f1914 to 002f195f has its CatchHandler @ 002f1960 */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f1990  FUN_002f1990 =====

void FUN_002f1990(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003958c0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f19e0  FUN_002f19e0 =====

undefined * FUN_002f19e0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003958c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f1a20  FUN_002f1a20 =====

void FUN_002f1a20(long param_1)

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


// ===== 002f1a74  FUN_002f1a74 =====

void FUN_002f1a74(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383858;
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


// ===== 002f1ad4  FUN_002f1ad4 =====

void FUN_002f1ad4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383858;
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


// ===== 002f1b3c  FUN_002f1b3c =====

undefined8 * FUN_002f1b3c(long param_1)

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
  *puVar2 = &PTR_FUN_00383858;
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


// ===== 002f1bd8  FUN_002f1bd8 =====

void FUN_002f1bd8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00383858;
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


// ===== 002f1c6c  FUN_002f1c6c =====

void FUN_002f1c6c(long param_1)

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


// ===== 002f1cc0  FUN_002f1cc0 =====

void FUN_002f1cc0(void *param_1)

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


// ===== 002f1d1c  FUN_002f1d1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f1d1c(long param_1,byte *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_d8;
  ulong uStack_d0;
  char *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  char *local_98;
  undefined4 local_88;
  undefined3 uStack_84;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong *local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar1 = *(ulong *)(param_2 + 8);
  pcVar2 = *(char **)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 4);
  bVar4 = *param_2;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  local_88._0_3_ = (undefined3)*(undefined4 *)(param_2 + 1);
  local_88._3_1_ = (undefined1)uVar3;
  uStack_84 = (undefined3)((uint)uVar3 >> 8);
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((bVar4 & 1) == 0) {
    local_d8._0_5_ = CONCAT41(local_88,bVar4);
    local_d8 = CONCAT44(uVar3,(undefined4)local_d8);
    uStack_d0 = uVar1;
    local_c8 = pcVar2;
  }
  else {
                    /* try { // try from 002f1d84 to 002f1d8f has its CatchHandler @ 002f1fc4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_d8,pcVar2,uVar1);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar7 = (long *)0x0;
LAB_002f1e64:
                    /* try { // try from 002f1e64 to 002f1e6b has its CatchHandler @ 002f1fe4 */
    local_70 = (undefined8 *)operator_new(0x70);
    puVar6 = PTR_typeinfo_name_00395898;
    uStack_78 = _UNK_001d8178;
    local_80 = _DAT_001d8170;
    *(undefined1 *)((long)local_70 + 0x69) = 0;
    uVar13 = *(undefined8 *)(puVar6 + 0x40);
    uVar15 = *(undefined8 *)(puVar6 + 0x58);
    uVar14 = *(undefined8 *)(puVar6 + 0x50);
    uVar12 = *(undefined8 *)(puVar6 + 0x61);
    uVar11 = *(undefined8 *)(puVar6 + 0x59);
    local_70[9] = *(undefined8 *)(puVar6 + 0x48);
    local_70[8] = uVar13;
    local_70[0xb] = uVar15;
    local_70[10] = uVar14;
    *(undefined8 *)((long)local_70 + 0x61) = uVar12;
    *(undefined8 *)((long)local_70 + 0x59) = uVar11;
    uVar13 = *(undefined8 *)puVar6;
    uVar12 = *(undefined8 *)(puVar6 + 0x18);
    uVar11 = *(undefined8 *)(puVar6 + 0x10);
    local_70[1] = *(undefined8 *)(puVar6 + 8);
    *local_70 = uVar13;
    local_70[3] = uVar12;
    local_70[2] = uVar11;
    uVar11 = *(undefined8 *)(puVar6 + 0x20);
    uVar13 = *(undefined8 *)(puVar6 + 0x38);
    uVar12 = *(undefined8 *)(puVar6 + 0x30);
    local_70[5] = *(undefined8 *)(puVar6 + 0x28);
    local_70[4] = uVar11;
    local_70[7] = uVar13;
    local_70[6] = uVar12;
                    /* try { // try from 002f1ea8 to 002f1eb7 has its CatchHandler @ 002f1fcc */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (plVar7 == (long *)0x0) goto joined_r0x002f1f18;
  }
  else {
    plVar7 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar7 == (long *)0x0) || (plVar10 = *(long **)(param_1 + 0x20), plVar10 == (long *)0x0))
    goto LAB_002f1e64;
    uStack_b8 = *(ulong *)(param_1 + 0x10);
    local_c0 = *(ulong *)(param_1 + 8);
    local_b0 = *(void **)(param_1 + 0x18);
    if (local_b0 != (void *)0x0) {
      FUN_00255510(1);
    }
    local_98 = local_c8;
    uStack_a0 = uStack_d0;
    local_a8 = local_d8;
    uStack_d0 = 0;
    local_c8 = (char *)0x0;
    local_d8 = 0;
    local_60 = (ulong *)0x0;
                    /* try { // try from 002f1de4 to 002f1deb has its CatchHandler @ 002f1fb4 */
    local_60 = (ulong *)operator_new(0x38);
    *local_60 = (ulong)&PTR_FUN_003838e8;
    local_60[2] = uStack_b8;
    local_60[1] = local_c0;
    local_60[3] = (ulong)local_b0;
    *(undefined8 *)((ulong)&local_c0 | 8) = 0;
    ((undefined8 *)((ulong)&local_c0 | 8))[1] = 0;
    local_60[6] = (ulong)local_98;
    local_60[5] = uStack_a0;
    local_60[4] = local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (char *)0x0;
                    /* try { // try from 002f1e38 to 002f1e47 has its CatchHandler @ 002f1f7c */
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_80);
    if (local_60 == &local_80) {
      lVar9 = 4;
      puVar8 = &local_80;
LAB_002f1ef8:
      (**(code **)(*puVar8 + lVar9 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar9 = 5;
      puVar8 = local_60;
      goto LAB_002f1ef8;
    }
  }
  lVar9 = FUN_00255510(0xffffffffffffffff,plVar7 + 1);
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002f1f18:
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((bVar4 & 1) != 0) {
    operator_delete(pcVar2);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002f2028  FUN_002f2028 =====

void FUN_002f2028(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395898) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f2078  FUN_002f2078 =====

undefined * FUN_002f2078(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003958a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f20b8  FUN_002f20b8 =====

void FUN_002f20b8(long param_1)

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


// ===== 002f2110  FUN_002f2110 =====

void FUN_002f2110(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003838e8;
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


// ===== 002f2174  FUN_002f2174 =====

void FUN_002f2174(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003838e8;
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


// ===== 002f21e0  FUN_002f21e0 =====

undefined8 * FUN_002f21e0(long param_1)

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
  *puVar2 = &PTR_FUN_003838e8;
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
                    /* try { // try from 002f225c to 002f2263 has its CatchHandler @ 002f228c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f22bc  FUN_002f22bc =====

void FUN_002f22bc(long param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_003838e8;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != lVar3) {
LAB_002f239c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar5;
    param_2[4] = uVar4;
  }
  else {
                    /* try { // try from 002f234c to 002f2353 has its CatchHandler @ 002f2378 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),*(char **)(param_1 + 0x30),*(ulong *)(param_1 + 0x28));
    if (*(long *)(lVar1 + 0x28) != lVar3) goto LAB_002f239c;
  }
  return;
}


// ===== 002f23a0  FUN_002f23a0 =====

void FUN_002f23a0(long param_1)

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


// ===== 002f23f8  FUN_002f23f8 =====

void FUN_002f23f8(void *param_1)

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


// ===== 002f2458  FUN_002f2458 =====

void FUN_002f2458(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  runtime_error *this;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined4 local_90 [2];
  undefined1 auStack_88 [8];
  Value aVStack_80 [24];
  undefined4 local_68 [6];
  Value aVStack_50 [24];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uStack_a8 = *(ulong *)(param_1 + 0x28);
  local_b0 = *(ulong *)(param_1 + 0x20);
  local_a0 = *(void **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
                    /* try { // try from 002f2574 to 002f2587 has its CatchHandler @ 002f2684 */
    FUN_00264e5c(local_68,PTR_typeinfo_name_003958a8,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f2594 to 002f25a7 has its CatchHandler @ 002f2664 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 002f25a8 to 002f25bb has its CatchHandler @ 002f264c */
    FUN_00263450(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 002f25c0 to 002f25f7 has its CatchHandler @ 002f2618 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    bVar6 = (local_b0 & 1) != 0;
    pvVar1 = (void *)((ulong)&local_b0 | 1);
    if (bVar6) {
      pvVar1 = local_a0;
    }
    uVar2 = local_b0 >> 1 & 0x7f;
    if (bVar6) {
      uVar2 = uStack_a8;
    }
                    /* try { // try from 002f24d8 to 002f24e3 has its CatchHandler @ 002f2684 */
    (**(code **)(*plVar3 + 0x110))(auStack_88,plVar3,pvVar1,uVar2);
    local_90[0] = 6;
    facebook::jsi::Value::Value(aVStack_50,(Value *)local_90);
    local_68[0] = 0;
                    /* try { // try from 002f2504 to 002f251f has its CatchHandler @ 002f25f8 */
    (**(code **)(*plVar3 + 0x280))(aVStack_80,plVar3,uVar4,local_68,aVStack_50,1);
    facebook::jsi::Value::~Value((Value *)local_68);
    facebook::jsi::Value::~Value(aVStack_50);
    facebook::jsi::Value::~Value((Value *)local_90);
    facebook::jsi::Value::~Value(aVStack_80);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (*(long *)(lVar5 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f26b4  FUN_002f26b4 =====

void FUN_002f26b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003958b0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f2704  FUN_002f2704 =====

undefined * FUN_002f2704(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003958b8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f2744  FUN_002f2744 =====

void FUN_002f2744(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003823b0;
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


// ===== 002f27b0  FUN_002f27b0 =====

void FUN_002f27b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003823b0;
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


// ===== 002f2818  FUN_002f2818 =====

undefined8 * FUN_002f2818(long param_1)

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
  *puVar4 = &PTR_FUN_003823b0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002f2878 to 002f287b has its CatchHandler @ 002f28b4 */
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


// ===== 002f28dc  FUN_002f28dc =====

void FUN_002f28dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003823b0;
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


// ===== 002f2974  FUN_002f2974 =====

void FUN_002f2974(long param_1)

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


// ===== 002f29d4  FUN_002f29d4 =====

void FUN_002f29d4(void *param_1)

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


// ===== 002f2a30  FUN_002f2a30 =====

void FUN_002f2a30(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
  undefined1 auStack_140 [24];
  undefined8 local_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002f2a8c to 002f2a9b has its CatchHandler @ 002f3054 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395730,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002f2b14;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x002f2b14;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002f2b14:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395850
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395850
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395848
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395848
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar4,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive33HybridViewModelStringPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395850
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 002f2b4c to 002f2b57 has its CatchHandler @ 002f2d5c */
    (*pcVar11)(&local_80);
    plVar1 = (long *)(ulong)((byte)local_80 >> 1);
    pvVar3 = (void *)((ulong)&local_80 | 1);
    if (((byte)local_80 & 1) != 0) {
      plVar1 = local_78;
      pvVar3 = local_70;
    }
                    /* try { // try from 002f2b7c to 002f2b87 has its CatchHandler @ 002f2d40 */
    (**(code **)(*param_3 + 0x110))(local_128,param_3,pvVar3,plVar1);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = local_128[0];
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
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
                    /* try { // try from 002f2c18 to 002f2c27 has its CatchHandler @ 002f31f0 */
    FUN_002ec7a0(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002f2c34 to 002f2c47 has its CatchHandler @ 002f31d0 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 002f2c48 to 002f2c5b has its CatchHandler @ 002f31b8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002f2c5c to 002f2c67 has its CatchHandler @ 002f3188 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002f2c68 to 002f2c77 has its CatchHandler @ 002f3164 */
    FUN_00264adc(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 002f2c78 to 002f2c8b has its CatchHandler @ 002f3140 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002f2c8c to 002f2c97 has its CatchHandler @ 002f311c */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002f2c98 to 002f2ca7 has its CatchHandler @ 002f30f8 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002f2ca8 to 002f2cbb has its CatchHandler @ 002f30d4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002f2cc0 to 002f2cfb has its CatchHandler @ 002f3074 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f3218  FUN_002f3218 =====

void FUN_002f3218(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395858) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f3268  FUN_002f3268 =====

undefined * FUN_002f3268(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395860;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f32a8  margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods
          (HybridViewModelStringPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f32ec  margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelStringPropertySpec::loadHybridMethods
          (HybridViewModelStringPropertySpec *this)

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


// ===== 002f3330  FUN_002f3330 =====

void FUN_002f3330(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2f3334);
  (*pcVar1)();
}


// ===== 002f3334  FUN_002f3334 =====

void FUN_002f3334(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2f3338);
  (*pcVar1)();
}


// ===== 002f3338  FUN_002f3338 =====

void FUN_002f3338(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2f333c);
  (*pcVar1)();
}


// ===== 002f333c  FUN_002f333c =====

void FUN_002f333c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2f3340);
  (*pcVar1)();
}


// ===== 002f3340  margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods
          (HybridViewModelBooleanPropertySpec *this)

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
  basic_string local_1a0;
  char acStack_19f [7];
  char cStack_198;
  char acStack_197 [7];
  undefined1 local_190;
  undefined7 uStack_18f;
  basic_string local_188;
  undefined7 uStack_187;
  undefined4 uStack_180;
  uint uStack_17c;
  long *local_178;
  basic_string local_170;
  undefined4 local_16f;
  void *local_160;
  basic_string local_158;
  char acStack_157 [5];
  undefined2 uStack_152;
  char cStack_150;
  char acStack_14f [5];
  undefined1 uStack_14a;
  undefined1 uStack_149;
  long *local_148;
  basic_string local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  void *local_130;
  basic_string local_128;
  undefined4 uStack_127;
  undefined2 uStack_123;
  undefined1 uStack_121;
  long *plStack_120;
  long *local_118;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar5 + *(long *)(*(long *)(this + lVar5) + -0x20) + 8);
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00395738;
                    /* try { // try from 002f33d0 to 002f33df has its CatchHandler @ 002f4664 */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar9 = plStack_d8;
    plVar6 = local_e0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395960) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar5 + 0x10);
      local_e0 = plVar6;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00395738;
                    /* try { // try from 002f34ec to 002f34fb has its CatchHandler @ 002f4658 */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar9 = plStack_88;
      plVar6 = local_90;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x002f35a0;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x002f35a0:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_128 = (basic_string)0xa;
    uStack_127 = 0x756c6176;
    uStack_123 = 0x65;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f40dc to 002f40ef has its CatchHandler @ 002f4a00 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002f40f0 to 002f4103 has its CatchHandler @ 002f48c4 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 002f4108 to 002f413f has its CatchHandler @ 002f48a0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    plVar6 = plVar9 + 3;
    lVar5 = FUN_002632b8(*plVar6,plVar9[4],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f4150 to 002f4163 has its CatchHandler @ 002f49fc */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002f4164 to 002f4177 has its CatchHandler @ 002f489c */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f417c to 002f41b3 has its CatchHandler @ 002f4870 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    local_110 = (undefined *)
                CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
    local_100 = local_118;
    plStack_108 = plStack_120;
    plStack_f0 = _UNK_001d8138;
    local_f8 = _DAT_001d8130;
    local_e8 = 1;
                    /* try { // try from 002f3620 to 002f3627 has its CatchHandler @ 002f472c */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_00382918;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 002f3658 to 002f365b has its CatchHandler @ 002f4648 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002f3698:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002f36a8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002f36a8;
      }
      if (local_70 != &local_90) goto LAB_002f3698;
      local_c0 = &local_e0;
                    /* try { // try from 002f3e90 to 002f3e9b has its CatchHandler @ 002f4464 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_128 & 1) == 0) {
      plStack_a0 = plStack_120;
      local_a8 = CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
      local_98 = local_118;
    }
    else {
                    /* try { // try from 002f36d8 to 002f36df has its CatchHandler @ 002f45dc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_118,(ulong)plStack_120);
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002f3704:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002f3704;
    }
                    /* try { // try from 002f3710 to 002f3723 has its CatchHandler @ 002f471c */
    FUN_002634d4(plVar9 + 8,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f3758:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f3758;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = (basic_string)0xa;
    local_13f = 0x756c6176;
    local_13b = 0x65;
    lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f41c0 to 002f41d3 has its CatchHandler @ 002f49e0 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002f41d4 to 002f41e7 has its CatchHandler @ 002f4858 */
      FUN_00263450(&local_e0,&local_90,"\" - a setter with that name already exists!");
                    /* try { // try from 002f41ec to 002f4223 has its CatchHandler @ 002f4834 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f4234 to 002f4247 has its CatchHandler @ 002f49dc */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002f4248 to 002f425b has its CatchHandler @ 002f4830 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f4260 to 002f4297 has its CatchHandler @ 002f4804 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
                    /* try { // try from 002f37b4 to 002f37cb has its CatchHandler @ 002f4714 */
    FUN_002f65a0(&local_e0,&local_140,0x20,1,2);
                    /* try { // try from 002f37cc to 002f37df has its CatchHandler @ 002f4704 */
    FUN_002634d4(plVar9 + 0xd,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f3814:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f3814;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x1a;
    uStack_14a = 0;
    acStack_157[0] = s_getValueAsync_001d6c10[0];
    acStack_157[1] = s_getValueAsync_001d6c10[1];
    acStack_157[2] = s_getValueAsync_001d6c10[2];
    acStack_157[3] = s_getValueAsync_001d6c10[3];
    acStack_157[4] = s_getValueAsync_001d6c10[4];
    uStack_152 = (undefined2)s_getValueAsync_001d6c10._5_3_;
    cStack_150 = SUB31(s_getValueAsync_001d6c10._5_3_,2);
    acStack_14f[0] = s_getValueAsync_001d6c10[8];
    acStack_14f[1] = s_getValueAsync_001d6c10[9];
    acStack_14f[2] = s_getValueAsync_001d6c10[10];
    acStack_14f[3] = s_getValueAsync_001d6c10[0xb];
    acStack_14f[4] = s_getValueAsync_001d6c10[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_158);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_158), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f3f0c to 002f3f1f has its CatchHandler @ 002f4a70 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002f3f20 to 002f3f33 has its CatchHandler @ 002f49c4 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002f3f38 to 002f3f6f has its CatchHandler @ 002f49a0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_158);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f42a4 to 002f42b7 has its CatchHandler @ 002f499c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002f42b8 to 002f42cb has its CatchHandler @ 002f4800 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f42d0 to 002f4307 has its CatchHandler @ 002f47d4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    plStack_108 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
    local_e8 = 0;
    local_100 = local_148;
    plStack_f0 = _UNK_001d81b8;
    local_f8 = _DAT_001d81b0;
                    /* try { // try from 002f38a4 to 002f38ab has its CatchHandler @ 002f46ec */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00382a18;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002f38dc to 002f38df has its CatchHandler @ 002f45cc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002f391c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002f392c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002f392c;
      }
      if (local_70 != &local_90) goto LAB_002f391c;
      local_c0 = &local_e0;
                    /* try { // try from 002f3eb0 to 002f3ebb has its CatchHandler @ 002f4460 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_158 & 1) == 0) {
      plStack_a0 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))
                                   );
      local_a8 = CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
      local_98 = local_148;
    }
    else {
                    /* try { // try from 002f395c to 002f3963 has its CatchHandler @ 002f4560 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,
                 CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002f3988:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002f3988;
    }
                    /* try { // try from 002f3994 to 002f39a7 has its CatchHandler @ 002f46dc */
    FUN_002634d4(plVar6,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f39dc:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f39dc;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = (basic_string)0x6;
    local_16f = 0x746573;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_170);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_170), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f3f80 to 002f3f93 has its CatchHandler @ 002f4a54 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002f3f94 to 002f3fa7 has its CatchHandler @ 002f4984 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002f3fac to 002f3fe3 has its CatchHandler @ 002f4960 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_170);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f4314 to 002f4327 has its CatchHandler @ 002f495c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002f4328 to 002f433b has its CatchHandler @ 002f47d0 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f4340 to 002f4377 has its CatchHandler @ 002f47a4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
                    /* try { // try from 002f3a3c to 002f3a53 has its CatchHandler @ 002f46d4 */
    FUN_002f65a0(&local_e0,&local_170,0x30,1,0);
                    /* try { // try from 002f3a54 to 002f3a67 has its CatchHandler @ 002f46c4 */
    FUN_002634d4(plVar6,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f3a9c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f3a9c;
    }
    if (((byte)local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    local_188 = (basic_string)0x16;
    uStack_187 = (undefined7)s_addListener_001d6f8c._0_8_;
    uStack_180 = CONCAT31(0x72656e,SUB81(s_addListener_001d6f8c._0_8_,7));
    uStack_17c = uStack_17c & 0xffffff00;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_188);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_188), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f3ff4 to 002f4007 has its CatchHandler @ 002f4a38 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002f4008 to 002f401b has its CatchHandler @ 002f4944 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002f4020 to 002f4057 has its CatchHandler @ 002f4920 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_188);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f4384 to 002f4397 has its CatchHandler @ 002f491c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002f4398 to 002f43ab has its CatchHandler @ 002f47a0 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f43b0 to 002f43e7 has its CatchHandler @ 002f4774 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    plStack_108 = (long *)CONCAT44(uStack_17c,uStack_180);
    local_110 = (undefined *)CONCAT71(uStack_187,local_188);
    local_e8 = 0;
    local_100 = local_178;
    plStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002f3b30 to 002f3b37 has its CatchHandler @ 002f46ac */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00382d28;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002f3b68 to 002f3b6b has its CatchHandler @ 002f4550 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002f3ba8:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002f3bb8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002f3bb8;
      }
      if (local_70 != &local_90) goto LAB_002f3ba8;
      local_c0 = &local_e0;
                    /* try { // try from 002f3ed0 to 002f3edb has its CatchHandler @ 002f445c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_188 & 1) == 0) {
      plStack_a0 = (long *)CONCAT44(uStack_17c,uStack_180);
      local_a8 = CONCAT71(uStack_187,local_188);
      local_98 = local_178;
    }
    else {
                    /* try { // try from 002f3bec to 002f3bf3 has its CatchHandler @ 002f44e4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_178,CONCAT44(uStack_17c,uStack_180));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002f3c18:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002f3c18;
    }
                    /* try { // try from 002f3c24 to 002f3c37 has its CatchHandler @ 002f469c */
    FUN_002634d4(plVar6,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f3c6c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f3c6c;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete(local_178);
    }
    local_1a0 = (basic_string)0x1e;
    local_190 = 0;
    acStack_19f[0] = s_removeListeners_001d79f7[0];
    acStack_19f[1] = s_removeListeners_001d79f7[1];
    acStack_19f[2] = s_removeListeners_001d79f7[2];
    acStack_19f[3] = s_removeListeners_001d79f7[3];
    acStack_19f[4] = s_removeListeners_001d79f7[4];
    acStack_19f[5] = s_removeListeners_001d79f7[5];
    acStack_19f[6] = s_removeListeners_001d79f7[6];
    cStack_198 = s_removeListeners_001d79f7[7];
    acStack_197[0] = s_removeListeners_001d79f7[8];
    acStack_197[1] = s_removeListeners_001d79f7[9];
    acStack_197[2] = s_removeListeners_001d79f7[10];
    acStack_197[3] = s_removeListeners_001d79f7[0xb];
    acStack_197[4] = s_removeListeners_001d79f7[0xc];
    acStack_197[5] = s_removeListeners_001d79f7[0xd];
    acStack_197[6] = s_removeListeners_001d79f7[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1a0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1a0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f4068 to 002f407b has its CatchHandler @ 002f4a1c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002f407c to 002f408f has its CatchHandler @ 002f4904 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002f4094 to 002f40cb has its CatchHandler @ 002f48e0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1a0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f43f4 to 002f4407 has its CatchHandler @ 002f48dc */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002f4408 to 002f441b has its CatchHandler @ 002f4770 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f4420 to 002f4457 has its CatchHandler @ 002f4744 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002f4aac;
    }
    plStack_108 = (long *)CONCAT71(acStack_197,cStack_198);
    local_110 = (undefined *)CONCAT71(acStack_19f,local_1a0);
    local_100 = (long *)CONCAT71(uStack_18f,local_190);
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 002f3d00 to 002f3d07 has its CatchHandler @ 002f4684 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00382da8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002f3d38 to 002f3d3b has its CatchHandler @ 002f44d4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002f3d78:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002f3d88:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002f3d88;
      }
      if (local_70 != &local_90) goto LAB_002f3d78;
      local_c0 = &local_e0;
                    /* try { // try from 002f3ef0 to 002f3efb has its CatchHandler @ 002f4458 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_1a0 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(acStack_197,cStack_198);
      local_a8 = CONCAT71(acStack_19f,local_1a0);
      local_98 = (long *)CONCAT71(uStack_18f,local_190);
    }
    else {
                    /* try { // try from 002f3db8 to 002f3dbf has its CatchHandler @ 002f4468 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_18f,local_190),CONCAT71(acStack_197,cStack_198));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002f3de4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002f3de4;
    }
                    /* try { // try from 002f3df0 to 002f3e03 has its CatchHandler @ 002f4674 */
    FUN_002634d4(plVar6,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f3e38:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f3e38;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_18f,local_190));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_002f4aac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f4ab0  FUN_002f4ab0 =====

void FUN_002f4ab0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382da8;
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


// ===== 002f4b1c  FUN_002f4b1c =====

void FUN_002f4b1c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382da8;
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


// ===== 002f4b84  FUN_002f4b84 =====

undefined8 * FUN_002f4b84(long param_1)

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
  *puVar4 = &PTR_FUN_00382da8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002f4be4 to 002f4be7 has its CatchHandler @ 002f4c20 */
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


// ===== 002f4c48  FUN_002f4c48 =====

void FUN_002f4c48(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00382da8;
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


// ===== 002f4ce0  FUN_002f4ce0 =====

void FUN_002f4ce0(long param_1)

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


// ===== 002f4d40  FUN_002f4d40 =====

void FUN_002f4d40(void *param_1)

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


// ===== 002f4d9c  FUN_002f4d9c =====

void FUN_002f4d9c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002f4df8 to 002f4e07 has its CatchHandler @ 002f5348 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395738,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002f4e80;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002f4e80;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002f4e80:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003959f0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003959f0
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003959e8
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003959e8
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003959f0
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002f4eb8 to 002f4ebb has its CatchHandler @ 002f5058 */
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
                    /* try { // try from 002f4f30 to 002f4f3f has its CatchHandler @ 002f54e4 */
    FUN_002f559c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002f4f4c to 002f4f5f has its CatchHandler @ 002f54c4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002f4f60 to 002f4f73 has its CatchHandler @ 002f54ac */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002f4f74 to 002f4f7f has its CatchHandler @ 002f547c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002f4f80 to 002f4f8f has its CatchHandler @ 002f5458 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002f4f90 to 002f4fa3 has its CatchHandler @ 002f5434 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002f4fa4 to 002f4faf has its CatchHandler @ 002f5410 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002f4fb0 to 002f4fbf has its CatchHandler @ 002f53ec */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002f4fc0 to 002f4fd3 has its CatchHandler @ 002f53c8 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002f4fd8 to 002f5013 has its CatchHandler @ 002f5368 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f550c  FUN_002f550c =====

void FUN_002f550c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003959f8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f555c  FUN_002f555c =====

undefined * FUN_002f555c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395a00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f559c  FUN_002f559c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f559c(undefined8 *param_1,int param_2,byte *param_3,long param_4)

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
  undefined8 uVar16;
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
    puVar7 = PTR_typeinfo_name_00395960;
    uStack_68 = _UNK_001d7fd8;
    local_70 = _DAT_001d7fd0;
    *(undefined1 *)((long)local_60 + 0x39) = 0;
    uVar10 = *(undefined8 *)(puVar7 + 0x20);
    uVar14 = *(undefined8 *)(puVar7 + 8);
    uVar13 = *(undefined8 *)puVar7;
    uVar16 = *(undefined8 *)(puVar7 + 0x18);
    uVar15 = *(undefined8 *)(puVar7 + 0x10);
    local_60[5] = *(undefined8 *)(puVar7 + 0x28);
    local_60[4] = uVar10;
    uVar12 = *(undefined8 *)(puVar7 + 0x31);
    uVar10 = *(undefined8 *)(puVar7 + 0x29);
    local_60[1] = uVar14;
    *local_60 = uVar13;
    local_60[3] = uVar16;
    local_60[2] = uVar15;
    *(undefined8 *)((long)local_60 + 0x31) = uVar12;
    *(undefined8 *)((long)local_60 + 0x29) = uVar10;
                    /* try { // try from 002f5628 to 002f5637 has its CatchHandler @ 002f58c8 */
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
    if (0xffffffffffffffef < uVar1) goto LAB_002f5888;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002f578c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002f5774 to 002f577b has its CatchHandler @ 002f58dc */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002f578c:
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
                    /* try { // try from 002f57cc to 002f57d3 has its CatchHandler @ 002f58b4 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 002f57ec to 002f57ff has its CatchHandler @ 002f589c */
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002f5924;
                    /* try { // try from 002f5884 to 002f5887 has its CatchHandler @ 002f58f8 */
      FUN_00260a84();
LAB_002f5888:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002f5898 to 002f589b has its CatchHandler @ 002f58dc */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002f57ec with catch @ 002f589c */
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
      goto LAB_002f5924;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002f56fc;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002f56e4 to 002f56eb has its CatchHandler @ 002f58f8 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_002f56fc:
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
                    /* try { // try from 002f573c to 002f5743 has its CatchHandler @ 002f58e0 */
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
LAB_002f5924:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f5928  FUN_002f5928 =====

void FUN_002f5928(long *param_1)

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


// ===== 002f59b4  FUN_002f59b4 =====

void FUN_002f59b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382d28;
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


// ===== 002f5a20  FUN_002f5a20 =====

void FUN_002f5a20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382d28;
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


// ===== 002f5a88  FUN_002f5a88 =====

undefined8 * FUN_002f5a88(long param_1)

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
  *puVar4 = &PTR_FUN_00382d28;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002f5ae8 to 002f5aeb has its CatchHandler @ 002f5b24 */
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


// ===== 002f5b4c  FUN_002f5b4c =====

void FUN_002f5b4c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00382d28;
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


// ===== 002f5be4  FUN_002f5be4 =====

void FUN_002f5be4(long param_1)

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


// ===== 002f5c44  FUN_002f5c44 =====

void FUN_002f5c44(void *param_1)

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


// ===== 002f5ca0  FUN_002f5ca0 =====

void FUN_002f5ca0(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [4];
  undefined8 **local_b0;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_d0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002f5d00 to 002f5d0f has its CatchHandler @ 002f6348 */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00395738,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_002f5d5c;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_002f5d5c:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 002f5ec4 to 002f5ed3 has its CatchHandler @ 002f64e8 */
    FUN_002f559c(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002f5ee0 to 002f5ef3 has its CatchHandler @ 002f64c8 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002f5ef4 to 002f5f07 has its CatchHandler @ 002f64b0 */
    FUN_00263450(auStack_130,auStack_148,"` expected ");
                    /* try { // try from 002f5f08 to 002f5f13 has its CatchHandler @ 002f6480 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002f5f14 to 002f5f23 has its CatchHandler @ 002f645c */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 002f5f24 to 002f5f37 has its CatchHandler @ 002f6438 */
    FUN_00263450(auStack_100,auStack_118," arguments, but received ");
                    /* try { // try from 002f5f38 to 002f5f43 has its CatchHandler @ 002f6414 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002f5f44 to 002f5f53 has its CatchHandler @ 002f63f0 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 002f5f54 to 002f5f67 has its CatchHandler @ 002f63c8 */
    FUN_00263450(local_d0,auStack_e8,&DAT_001d5be0);
                    /* try { // try from 002f5f6c to 002f5fa7 has its CatchHandler @ 002f6368 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_d0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002f650c;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvbEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959d0
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvbEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959d0
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvbEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959c8
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvbEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959c8
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvbEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959d0
                       );
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 002f5dc4 to 002f5dd3 has its CatchHandler @ 002f6054 */
  FUN_002aee18(local_d0,param_3,uVar10);
                    /* try { // try from 002f5dd4 to 002f5de7 has its CatchHandler @ 002f6018 */
  (*pcVar11)(&local_a0,plVar1,local_d0);
  if (local_b0 == local_d0) {
    lVar5 = 4;
    local_b0 = local_d0;
LAB_002f5e08:
    (*(code *)(*local_b0)[lVar5])();
  }
  else if (local_b0 != (undefined8 **)0x0) {
    lVar5 = 5;
    goto LAB_002f5e08;
  }
                    /* try { // try from 002f5e14 to 002f5e27 has its CatchHandler @ 002f5ff8 */
  FUN_002e76cc(param_1,param_3,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_002f5e48:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_002f5e48;
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_002f650c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f6510  FUN_002f6510 =====

void FUN_002f6510(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003959d8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f6560  FUN_002f6560 =====

undefined * FUN_002f6560(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003959e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f65a0  FUN_002f65a0 =====

void FUN_002f65a0(long param_1,ulong *param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  long local_98;
  long lStack_90;
  undefined4 local_88;
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    local_a0 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,(char *)param_2[2],param_2[1]);
  }
  local_98 = param_3;
  lStack_90 = param_4;
  local_88 = param_5;
                    /* try { // try from 002f6608 to 002f660f has its CatchHandler @ 002f67b8 */
  local_60[0] = (long *)operator_new(0x38);
  *local_60[0] = (long)&PTR_FUN_00382998;
  if ((local_b0 & 1) == 0) {
    local_60[0][2] = uStack_a8;
    *(ulong *)(local_60[0] + 1) = local_b0;
    local_60[0][3] = (long)local_a0;
  }
  else {
                    /* try { // try from 002f6640 to 002f6643 has its CatchHandler @ 002f67a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60[0] + 1),local_a0,uStack_a8);
  }
  local_60[0][5] = lStack_90;
  local_60[0][4] = local_98;
  *(undefined4 *)(local_60[0] + 6) = local_88;
  if (((byte)local_b0._0_1_ & 1) == 0) {
LAB_002f6680:
    *(long **)(param_1 + 0x20) = local_60[0];
    pplVar3 = local_60;
LAB_002f6694:
    *pplVar3 = (long *)0x0;
  }
  else {
    operator_delete(local_a0);
    if (local_60[0] == (long *)0x0) {
      pplVar3 = (long **)(param_1 + 0x20);
      goto LAB_002f6694;
    }
    if (local_60[0] != local_80) goto LAB_002f6680;
    *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 002f672c to 002f6737 has its CatchHandler @ 002f673c */
    (**(code **)(local_80[0] + 0x18))(local_80,param_1);
  }
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = 1;
  if ((uVar4 & 1) == 0) {
    uVar6 = *param_2;
    uVar4 = param_2[2];
    *(ulong *)(param_1 + 0x40) = param_2[1];
    *(ulong *)(param_1 + 0x38) = uVar6;
    *(ulong *)(param_1 + 0x48) = uVar4;
  }
  else {
                    /* try { // try from 002f66c0 to 002f66c7 has its CatchHandler @ 002f6740 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x38),(char *)param_2[2],param_2[1]);
  }
  if (local_60[0] == local_80) {
    lVar5 = 4;
    plVar2 = local_80;
  }
  else {
    if (local_60[0] == (long *)0x0) goto LAB_002f66f8;
    lVar5 = 5;
    plVar2 = local_60[0];
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_002f66f8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f67e8  FUN_002f67e8 =====

void FUN_002f67e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382998;
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


// ===== 002f6854  FUN_002f6854 =====

void FUN_002f6854(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382998;
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


// ===== 002f68bc  FUN_002f68bc =====

undefined8 * FUN_002f68bc(long param_1)

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
  *puVar4 = &PTR_FUN_00382998;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002f691c to 002f691f has its CatchHandler @ 002f6958 */
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


// ===== 002f6980  FUN_002f6980 =====

void FUN_002f6980(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00382998;
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


// ===== 002f6a18  FUN_002f6a18 =====

void FUN_002f6a18(long param_1)

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


// ===== 002f6a78  FUN_002f6a78 =====

void FUN_002f6a78(void *param_1)

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


// ===== 002f6ad4  FUN_002f6ad4 =====

void FUN_002f6ad4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  long *plVar9;
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
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002f6b34 to 002f6b43 has its CatchHandler @ 002f6db4 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar6 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395738,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002f6bbc;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x002f6bbc;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar9 = plStack_78;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002f6bbc:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395990 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00395990), puVar3 = PTR_defaultValue_00395988,
       iVar5 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395988 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395990);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002f6bf8 to 002f6c0b has its CatchHandler @ 002f6e58 */
    uVar4 = facebook::jsi::Value::asBool();
    (*pcVar11)(plVar1,uVar4 & 1);
    *param_1 = 0;
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
                    /* try { // try from 002f6c80 to 002f6c8f has its CatchHandler @ 002f7240 */
    FUN_002f559c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002f6c9c to 002f6caf has its CatchHandler @ 002f7220 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002f6cb0 to 002f6cc3 has its CatchHandler @ 002f7208 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002f6cc4 to 002f6ccf has its CatchHandler @ 002f71d8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002f6cd0 to 002f6cdf has its CatchHandler @ 002f71b4 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002f6ce0 to 002f6cf3 has its CatchHandler @ 002f7190 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002f6cf4 to 002f6cff has its CatchHandler @ 002f716c */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002f6d00 to 002f6d0f has its CatchHandler @ 002f7148 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002f6d10 to 002f6d23 has its CatchHandler @ 002f6e34 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002f6d28 to 002f6d63 has its CatchHandler @ 002f6dd4 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f7268  FUN_002f7268 =====

void FUN_002f7268(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395998) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f72b8  FUN_002f72b8 =====

undefined * FUN_002f72b8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003959a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f72f8  FUN_002f72f8 =====

void FUN_002f72f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382a18;
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


// ===== 002f7364  FUN_002f7364 =====

void FUN_002f7364(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382a18;
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


// ===== 002f73cc  FUN_002f73cc =====

undefined8 * FUN_002f73cc(long param_1)

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
  *puVar4 = &PTR_FUN_00382a18;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002f742c to 002f742f has its CatchHandler @ 002f7468 */
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


// ===== 002f7490  FUN_002f7490 =====

void FUN_002f7490(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00382a18;
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


// ===== 002f7528  FUN_002f7528 =====

void FUN_002f7528(long param_1)

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


// ===== 002f7588  FUN_002f7588 =====

void FUN_002f7588(void *param_1)

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


// ===== 002f75e4  FUN_002f75e4 =====

void FUN_002f75e4(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002f7640 to 002f764f has its CatchHandler @ 002f7bf0 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395738,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002f76c8;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002f76c8;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002f76c8:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959b0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959b0
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959a8
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959a8
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIbEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003959b0
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002f7700 to 002f7707 has its CatchHandler @ 002f78f8 */
    (*pcVar9)(&local_110);
                    /* try { // try from 002f770c to 002f7717 has its CatchHandler @ 002f78e0 */
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
                    /* try { // try from 002f77b8 to 002f77c7 has its CatchHandler @ 002f7d8c */
    FUN_002f559c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002f77d4 to 002f77e7 has its CatchHandler @ 002f7d6c */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002f77e8 to 002f77fb has its CatchHandler @ 002f7d54 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 002f77fc to 002f7807 has its CatchHandler @ 002f7d24 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002f7808 to 002f7817 has its CatchHandler @ 002f7d00 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002f7818 to 002f782b has its CatchHandler @ 002f7cdc */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002f782c to 002f7837 has its CatchHandler @ 002f7cb8 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002f7838 to 002f7847 has its CatchHandler @ 002f7c94 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002f7848 to 002f785b has its CatchHandler @ 002f7c70 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002f7860 to 002f789b has its CatchHandler @ 002f7c10 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f7db4  FUN_002f7db4 =====

void FUN_002f7db4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003959b8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f7e04  FUN_002f7e04 =====

undefined * FUN_002f7e04(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003959c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


