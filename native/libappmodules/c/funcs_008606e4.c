// ===== 008606e4  FUN_008606e4 =====

void FUN_008606e4(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 008606f0  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 008606f4  FUN_008606f4 =====

void FUN_008606f4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 008606fc  FUN_008606fc =====

void FUN_008606fc(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined1 local_e8;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_00990308;
  local_e8 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00757d00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 00860794 to 008607bb has its CatchHandler @ 0086095c */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 008607c0 to 008607c7 has its CatchHandler @ 00860974 */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_00990288;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_008607fc:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_008607fc;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 00860810 to 0086081f has its CatchHandler @ 00860958 */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_00860848:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_00860848;
      }
                    /* try { // try from 00860858 to 00860867 has its CatchHandler @ 00860964 */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_00860890:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_00860890;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar2 == (long *)0x0) goto LAB_008608fc;
    }
    lVar7 = FUN_00757990(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_008608fc:
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_00860928;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_00860928:
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00860a10  FUN_00860a10 =====

void FUN_00860a10(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00990288;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00860a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00860a54  FUN_00860a54 =====

void FUN_00860a54(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00990288;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00860aa0;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00860aa0:
  operator_delete(param_1);
  return;
}


// ===== 00860ab0  FUN_00860ab0 =====

undefined8 * FUN_00860ab0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00990288;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00860af8 to 00860b13 has its CatchHandler @ 00860b24 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00860b38  FUN_00860b38 =====

void FUN_00860b38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00990288;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00860ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 00860bac  FUN_00860bac =====

void FUN_00860bac(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00860bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00860be4  FUN_00860be4 =====

void FUN_00860be4(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00860c24;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00860c24:
  operator_delete(param_1);
  return;
}


// ===== 00860c34  FUN_00860c34 =====

void FUN_00860c34(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00860c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 00860c58  FUN_00860c58 =====

long FUN_00860c58(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e7c8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00860c74  FUN_00860c74 =====

undefined * FUN_00860c74(void)

{
  return PTR_typeinfo_0099e7d0;
}


// ===== 00860c80  FUN_00860c80 =====

void FUN_00860c80(void)

{
  return;
}


// ===== 00860c84  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00860c88  FUN_00860c88 =====

void FUN_00860c88(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00990308;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 00860cc0  FUN_00860cc0 =====

void FUN_00860cc0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00990308;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 00860cd8  FUN_00860cd8 =====

void FUN_00860cd8(void)

{
  return;
}


// ===== 00860cdc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00860ce0  FUN_00860ce0 =====

void FUN_00860ce0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00990388;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 00860d1c  FUN_00860d1c =====

long FUN_00860d1c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e7d8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00860d38  FUN_00860d38 =====

undefined * FUN_00860d38(void)

{
  return PTR_typeinfo_0099e7e0;
}


// ===== 00860d44  FUN_00860d44 =====

void FUN_00860d44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990388;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00860d54  FUN_00860d54 =====

void FUN_00860d54(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990388;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00860d84  FUN_00860d84 =====

void FUN_00860d84(void)

{
  return;
}


// ===== 00860d88  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00860d8c  FUN_00860d8c =====

void FUN_00860d8c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009903e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00860d9c  FUN_00860d9c =====

void FUN_00860d9c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009903e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00860dcc  FUN_00860dcc =====

void FUN_00860dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00860dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00860dd8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00860ddc  FUN_00860ddc =====

void FUN_00860ddc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00860e2c  FUN_00860e2c =====

void FUN_00860e2c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990438;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00860e3c  FUN_00860e3c =====

void FUN_00860e3c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990438;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00860e6c  FUN_00860e6c =====

void FUN_00860e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00860e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00860e78  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00860e7c  FUN_00860e7c =====

void FUN_00860e7c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00860f34  facebook::react::concreteComponentDescriptorConstructor<facebook::react::KeyboardGestureAreaComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::KeyboardGestureAreaComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::KeyboardGestureAreaComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1020 [2];
  undefined8 *local_1018;
  void *local_1010;
  void *pvStack_1008;
  undefined8 local_1000;
  void *pvStack_ff8;
  void *local_ff0;
  undefined8 uStack_fe8;
  void *local_fe0;
  void *pvStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined *local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined4 local_fa0 [2];
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined4 local_f78;
  undefined4 local_f70;
  undefined1 local_f6c;
  undefined8 local_f6b;
  undefined8 local_f63;
  undefined8 uStack_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined6 uStack_f2b;
  undefined2 uStack_f25;
  undefined6 uStack_f23;
  undefined8 uStack_f1d;
  undefined4 local_f15;
  undefined8 local_f11;
  undefined1 local_f09;
  undefined1 uStack_f08;
  undefined7 uStack_f07;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  undefined4 uStack_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined4 local_e58;
  undefined1 local_e54;
  undefined4 local_e50;
  undefined1 local_e4c;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined1 uStack_d88;
  undefined7 local_d87;
  undefined1 uStack_d80;
  undefined8 uStack_d7f;
  undefined8 local_d74;
  undefined8 uStack_d6c;
  undefined8 uStack_d64;
  undefined8 uStack_d5c;
  undefined8 local_d54;
  undefined8 uStack_d4c;
  undefined8 uStack_d44;
  undefined8 uStack_d3c;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined5 uStack_d1c;
  undefined3 local_d17;
  undefined5 uStack_d14;
  undefined1 local_d0c;
  undefined1 local_d08;
  undefined1 local_d04;
  undefined1 local_d00;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined4 local_cc0;
  undefined1 local_cbc;
  undefined4 local_cbb;
  undefined1 local_cb7;
  undefined1 local_cb6;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined7 uStack_c88;
  undefined4 uStack_c81;
  undefined8 local_c7c;
  undefined1 local_c74;
  undefined1 local_c6c;
  undefined1 local_c68;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c54;
  undefined1 local_c50;
  undefined1 local_c48;
  undefined1 local_c44;
  undefined1 local_c3c;
  undefined1 local_c38;
  undefined1 local_c30;
  undefined1 local_c2c;
  undefined1 local_c24;
  undefined1 local_c20;
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c0c;
  undefined1 local_c08;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf4;
  undefined1 local_bf0;
  undefined1 local_be8;
  undefined1 local_be4;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined2 local_b48;
  undefined8 local_b44;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined1 local_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined6 uStack_a20;
  undefined2 uStack_a1a;
  undefined6 uStack_a18;
  undefined1 local_a10;
  undefined1 local_a0c;
  undefined1 local_a08;
  undefined8 local_a04;
  undefined8 uStack_9fc;
  undefined1 local_9f4;
  undefined8 local_9f0;
  undefined2 local_9e8;
  undefined1 local_9e6;
  undefined4 local_9e4;
  undefined1 local_9e0;
  undefined1 local_980;
  undefined1 local_978;
  undefined1 local_918;
  undefined4 local_910;
  undefined2 local_90c;
  undefined1 local_908;
  undefined1 local_904;
  undefined1 local_900;
  undefined1 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined4 local_8e0;
  undefined2 local_8dc;
  undefined8 local_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  void *local_8c0;
  undefined4 local_8b8 [2];
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  byte local_1c8;
  void *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_ff8 = (void *)0x0;
  local_1000 = 0;
  uStack_fe8 = 0;
  local_ff0 = (void *)0x0;
  pvStack_fd8 = (void *)0x0;
  local_fe0 = (void *)0x0;
  uStack_fc8 = 0;
  uStack_fd0 = 0;
  pvStack_1008 = (void *)0x0;
  local_1010 = (void *)0x0;
                    /* try { // try from 00860f84 to 00860f8f has its CatchHandler @ 008615ec */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_1010);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00990568;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 00861000 to 0086100b has its CatchHandler @ 0086161c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1020[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1018 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_fa0,0,0x6e8);
  puVar5 = PTR_VTT_0099edd8;
  local_8b8[0] = 5;
  local_8a0 = 0;
  local_fc0 = *(undefined **)(PTR_VTT_0099edd8 + 0x20);
  local_fa0[0] = 5;
  uStack_fa8 = 0;
  local_fb0 = 0;
  local_898 = 0;
  uStack_fb8 = 0;
  uStack_890 = 0x3f800000;
  uStack_8a8 = 0;
  local_8b0 = 0;
  uStack_f90 = 0;
  local_f98 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  local_f78 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_8b8);
  local_f6c = 0;
  local_f11 = 0;
  uStack_a30 = _UNK_00488920;
  local_a38 = _DAT_00488918;
  local_f6b = _s__00375408;
  uStack_b28 = _UNK_00371598;
  local_b30 = _DAT_00371590;
  uStack_a40 = _UNK_00488910;
  local_a48 = _DAT_00488908;
  local_e54 = 0;
  uStack_a50 = _UNK_00488900;
  local_a58 = _DAT_004888f8;
  uStack_a60 = _UNK_004888f0;
  local_a68 = _DAT_004888e8;
  uStack_a18 = 0;
  local_e4c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_e6c = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  uStack_a20 = 0;
  uStack_a1a = 0;
  local_a28 = 0;
  local_f70 = 0x10410710;
  local_f15 = 0x40004;
  uStack_e74 = 0;
  uStack_e70 = 0;
  uStack_e7c = 0;
  uStack_e78 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  local_e58 = 0x7fc00000;
  local_e50 = 0x7fc00000;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  uStack_d7f = 0;
  uStack_d80 = 0;
  uStack_d6c = 0;
  local_d74 = 0;
  uStack_d5c = 0;
  uStack_d64 = 0;
  uStack_d4c = 0;
  local_d54 = 0;
  uStack_d3c = 0;
  uStack_d44 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  local_d17 = 0;
  uStack_d14 = 0;
  local_cbc = 1;
  local_cbb = 0;
  local_cb6 = 0x23;
  local_c7c = 0x3f800000;
  uStack_b60 = 0;
  local_b68 = 0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  uStack_b70 = 0;
  local_b78 = 0;
  local_b44 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_ac0 = 0;
  uStack_ac8 = 0;
  uStack_ab0 = 0;
  local_ab8 = 0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  uStack_a90 = 0;
  local_a98 = 0;
  uStack_a80 = 0;
  uStack_a88 = 0;
  uStack_a70 = 0;
  local_a78 = 0;
  uStack_f07 = 0;
  uStack_f5b = 0;
  local_f63 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1d = 0;
  uStack_f25 = 0;
  uStack_f23 = 0;
  local_f09 = 0;
  uStack_f08 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  local_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  local_ea0 = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dc8 = 0;
  local_d0c = 0;
  local_d08 = 0;
  local_d04 = 0;
  local_d00 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_ce0 = 0;
  uStack_db8 = 0;
  local_dc0 = 0;
  uStack_da8 = 0;
  uStack_db0 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  local_d87 = 0;
  uStack_d90 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  local_cc8 = 0;
  local_cc0 = 0;
  local_cb7 = 0;
  uStack_ca8 = 0;
  local_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  uStack_c88 = 0;
  uStack_c81 = 0;
  local_c90 = 0;
  local_c74 = 0;
  local_c6c = 0;
  local_c68 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c48 = 0;
  local_c44 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c24 = 0;
  local_c20 = 0;
  local_c18 = 0;
  local_c14 = 0;
  local_c0c = 0;
  local_c08 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b38 = 0;
  local_b48 = 0;
  local_b3c = 0;
  local_b20 = 0;
  local_a10 = 0;
  local_a0c = 0;
  local_a08 = 0;
  local_9f0 = 0;
  uStack_9fc = 0;
  local_a04 = 0;
  local_9f4 = 0;
  local_9e8 = 0x101;
  local_9e6 = 0;
  local_9e4 = 0;
  local_9e0 = 0;
  local_980 = 0;
  local_978 = 0;
  local_918 = 0;
  local_908 = 0;
  local_904 = 0;
  local_900 = 0;
  local_8fc = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_90c = 0;
  local_910 = 0;
  local_fc0 = PTR_vtable_0099edd0 + 0x20;
  local_8e0 = 0;
  local_8dc = 0;
  uStack_8d0 = 0;
  local_8d8 = 0;
  local_8c0 = (void *)0x0;
  uStack_8c8 = 0;
                    /* try { // try from 00861404 to 00861417 has its CatchHandler @ 0086161c */
  ::facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps
            ((KeyboardGestureAreaProps *)local_8b8,(PropsParserContext *)local_1020,
             (KeyboardGestureAreaProps *)&local_fc0,(RawProps *)&local_f8);
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  FUN_0078917c(local_8b8,puVar5 + 8);
  if ((uStack_8d0 & 1) != 0) {
    operator_delete(local_8c0);
  }
  FUN_0078917c(&local_fc0,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0086153c to 00861547 has its CatchHandler @ 00861620 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fc0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_009904c0;
  if (local_fe0 != (void *)0x0) {
    pvStack_fd8 = local_fe0;
    operator_delete(local_fe0);
  }
  if (pvStack_ff8 != (void *)0x0) {
    local_ff0 = pvStack_ff8;
    operator_delete(pvStack_ff8);
  }
  if (local_1010 != (void *)0x0) {
    pvStack_1008 = local_1010;
    operator_delete(local_1010);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00861624  FUN_00861624 =====

void FUN_00861624(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00861648  FUN_00861648 =====

undefined * FUN_00861648(void)

{
  return PTR_KeyboardGestureAreaComponentName_0099edc8;
}


// ===== 00861654  FUN_00861654 =====

undefined * FUN_00861654(void)

{
  return PTR_KeyboardGestureAreaComponentName_0099edc8;
}


// ===== 00861660  FUN_00861660 =====

undefined8 FUN_00861660(void)

{
  return 0x61;
}


// ===== 00861668  FUN_00861668 =====

void FUN_00861668(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_009905e0;
                    /* try { // try from 008616d4 to 008616e3 has its CatchHandler @ 008617bc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00990630;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 00861770 to 0086177b has its CatchHandler @ 008617ac */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008617ec  FUN_008617ec =====

void FUN_008617ec(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_009905e0;
                    /* try { // try from 00861844 to 00861853 has its CatchHandler @ 00861994 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00990630;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 008618d8 to 008618e7 has its CatchHandler @ 008619ac */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 008618f8 to 00861907 has its CatchHandler @ 00861984 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00861944 to 0086194f has its CatchHandler @ 008619ac */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008619d4  FUN_008619d4 =====

void FUN_008619d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008619e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008619e8  FUN_008619e8 =====

void FUN_008619e8(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  KeyboardGestureAreaProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  KeyboardGestureAreaProps *pKVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
                                   ), iVar6 != 0)) {
                    /* try { // try from 00861e1c to 00861e1f has its CatchHandler @ 00861e4c */
      FUN_00862928();
      __cxa_atexit(FUN_008628d8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7e8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7e8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7e8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pKVar12 = (KeyboardGestureAreaProps *)*param_4;
    if (pKVar12 == (KeyboardGestureAreaProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
                                     ), iVar6 != 0)) {
                    /* try { // try from 00861d9c to 00861d9f has its CatchHandler @ 00861e64 */
        FUN_00862928();
        __cxa_atexit(FUN_008628d8,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7e8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
                           );
      }
      pKVar12 = *(KeyboardGestureAreaProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7e8
      ;
    }
    plVar8 = (long *)operator_new(0x720);
    this = (KeyboardGestureAreaProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00990748;
                    /* try { // try from 00861ac8 to 00861adb has its CatchHandler @ 00861ed8 */
    facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps
              (this,param_3,pKVar12,param_5);
                    /* try { // try from 00861ae0 to 00861af3 has its CatchHandler @ 00861ef0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00861b1c:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
                                       ), iVar6 != 0)) {
                    /* try { // try from 00861ddc to 00861ddf has its CatchHandler @ 00861e50 */
          FUN_00862928();
          __cxa_atexit(FUN_008628d8,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7e8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7f0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00861b84 to 00861b97 has its CatchHandler @ 00861e7c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7e8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00861bd0:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00861bd0;
        }
        if (plVar8 != (long *)0x0) goto LAB_00861be4;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00861b38 to 00861b4b has its CatchHandler @ 00861ea4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00861be4;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00861be4:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00861b00 to 00861b0b has its CatchHandler @ 00861e78 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_KeyboardGestureAreaComponentName_0099edc8,pcVar9);
      if (iVar6 != 0) goto LAB_00861b1c;
      bVar3 = false;
    }
                    /* try { // try from 00861c10 to 00861c13 has its CatchHandler @ 00861ef0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00861c20 to 00861c3b has its CatchHandler @ 00861ea0 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00861d7c to 00861d8b has its CatchHandler @ 00861e98 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00861f3c;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00861d5c to 00861d6b has its CatchHandler @ 00861efc */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00861f3c;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 00861cbc to 00861cc7 has its CatchHandler @ 00861f04 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00861ccc to 00861ce3 has its CatchHandler @ 00861f08 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00861cf4 to 00861cff has its CatchHandler @ 00861ef8 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00861f3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00861f40  FUN_00861f40 =====

/* WARNING: Removing unreachable block (ram,0x00862038) */
/* WARNING: Removing unreachable block (ram,0x00862048) */
/* WARNING: Removing unreachable block (ram,0x0086206c) */
/* WARNING: Removing unreachable block (ram,0x0086207c) */

void FUN_00861f40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00990940;
                    /* try { // try from 00861f94 to 00861f9b has its CatchHandler @ 008620f8 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00990798;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 00861fd8 to 00861fe7 has its CatchHandler @ 008620c0 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_009907e8;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00862120  FUN_00862120 =====

/* WARNING: Removing unreachable block (ram,0x008621f4) */
/* WARNING: Removing unreachable block (ram,0x00862204) */
/* WARNING: Removing unreachable block (ram,0x00862258) */
/* WARNING: Removing unreachable block (ram,0x00862268) */

void FUN_00862120(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00862164 to 0086216f has its CatchHandler @ 008622e0 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00862174 to 0086217b has its CatchHandler @ 008622d0 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_009909a0;
                    /* try { // try from 008621a0 to 008621af has its CatchHandler @ 008622a8 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_009907e8;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00862308  FUN_00862308 =====

void FUN_00862308(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 00862350 to 00862357 has its CatchHandler @ 0086263c */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_009909f0;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 00862394 to 008623a3 has its CatchHandler @ 00862610 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008623b4 to 008623bb has its CatchHandler @ 00862600 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_00990a40;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0086246c to 00862473 has its CatchHandler @ 008625f0 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008624c0 to 008624d7 has its CatchHandler @ 008625c0 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 0086252c to 00862537 has its CatchHandler @ 008625a0 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00862664  FUN_00862664 =====

void FUN_00862664(void)

{
  return;
}


// ===== 00862668  FUN_00862668 =====

void FUN_00862668(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0086268c  FUN_0086268c =====

void FUN_0086268c(void)

{
  return;
}


// ===== 00862690  FUN_00862690 =====

void FUN_00862690(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008626e0  FUN_008626e0 =====

void FUN_008626e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009905e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008626f0  FUN_008626f0 =====

void FUN_008626f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009905e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00862720  FUN_00862720 =====

void FUN_00862720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00862728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086272c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00862730  FUN_00862730 =====

void FUN_00862730(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008627f0  FUN_008627f0 =====

void FUN_008627f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00862858  FUN_00862858 =====

bool FUN_00862858(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00862870  FUN_00862870 =====

bool FUN_00862870(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00862888  FUN_00862888 =====

void FUN_00862888(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008628d8  FUN_008628d8 =====

void FUN_008628d8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00862928  FUN_00862928 =====

void FUN_00862928(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x720);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009906f8;
  memset(__s,0,0x708);
                    /* try { // try from 00862964 to 00862977 has its CatchHandler @ 008629f8 */
  FUN_00788b10(__s,PTR_VTT_0099edd8 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099edd0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined2 *)((long)puVar2 + 0x6fc) = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32KeyboardGestureAreaComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24KeyboardGestureAreaPropsENS0_31KeyboardGestureAreaEventEmitterENS0_24KeyboardGestureAreaStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7e8
  ;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00862a14  FUN_00862a14 =====

void FUN_00862a14(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009906f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00862a24  FUN_00862a24 =====

void FUN_00862a24(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009906f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00862a54  FUN_00862a54 =====

void FUN_00862a54(long param_1)

{
  if ((*(byte *)(param_1 + 0x708) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x718));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099edd8 + 8);
  return;
}


// ===== 00862a90  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00862a94  FUN_00862a94 =====

void FUN_00862a94(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990748;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00862aa4  FUN_00862aa4 =====

void FUN_00862aa4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990748;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00862ad4  FUN_00862ad4 =====

void FUN_00862ad4(long param_1)

{
  if ((*(byte *)(param_1 + 0x708) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x718));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099edd8 + 8);
  return;
}


// ===== 00862b10  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00862b14  FUN_00862b14 =====

void FUN_00862b14(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00862b64  FUN_00862b64 =====

void FUN_00862b64(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990798;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00862b74  FUN_00862b74 =====

void FUN_00862b74(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990798;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00862ba4  FUN_00862ba4 =====

void FUN_00862ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00862bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00862bb0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00862bb4  FUN_00862bb4 =====

void FUN_00862bb4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00862c1c  FUN_00862c1c =====

void FUN_00862c1c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 00862c28  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 00862c2c  FUN_00862c2c =====

void FUN_00862c2c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00862c34  FUN_00862c34 =====

void FUN_00862c34(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined1 local_e8;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_009908c0;
  local_e8 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00757d00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 00862ccc to 00862cf3 has its CatchHandler @ 00862e94 */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 00862cf8 to 00862cff has its CatchHandler @ 00862eac */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_00990840;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_00862d34:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_00862d34;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 00862d48 to 00862d57 has its CatchHandler @ 00862e90 */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_00862d80:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_00862d80;
      }
                    /* try { // try from 00862d90 to 00862d9f has its CatchHandler @ 00862e9c */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_00862dc8:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_00862dc8;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar2 == (long *)0x0) goto LAB_00862e34;
    }
    lVar7 = FUN_00757990(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_00862e34:
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_00862e60;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_00862e60:
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00862f48  FUN_00862f48 =====

void FUN_00862f48(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00990840;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00862f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00862f8c  FUN_00862f8c =====

void FUN_00862f8c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00990840;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00862fd8;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00862fd8:
  operator_delete(param_1);
  return;
}


// ===== 00862fe8  FUN_00862fe8 =====

undefined8 * FUN_00862fe8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00990840;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00863030 to 0086304b has its CatchHandler @ 0086305c */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00863070  FUN_00863070 =====

void FUN_00863070(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00990840;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x008630e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 008630e4  FUN_008630e4 =====

void FUN_008630e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00863114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0086311c  FUN_0086311c =====

void FUN_0086311c(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0086315c;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0086315c:
  operator_delete(param_1);
  return;
}


// ===== 0086316c  FUN_0086316c =====

void FUN_0086316c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00863180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 00863190  FUN_00863190 =====

long FUN_00863190(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e7f8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008631ac  FUN_008631ac =====

undefined * FUN_008631ac(void)

{
  return PTR_typeinfo_0099e800;
}


// ===== 008631b8  FUN_008631b8 =====

void FUN_008631b8(void)

{
  return;
}


// ===== 008631bc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008631c0  FUN_008631c0 =====

void FUN_008631c0(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_009908c0;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 008631f8  FUN_008631f8 =====

void FUN_008631f8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009908c0;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 00863210  FUN_00863210 =====

void FUN_00863210(void)

{
  return;
}


// ===== 00863214  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00863218  FUN_00863218 =====

void FUN_00863218(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00990940;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 00863254  FUN_00863254 =====

long FUN_00863254(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e808) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00863270  FUN_00863270 =====

undefined * FUN_00863270(void)

{
  return PTR_typeinfo_0099e810;
}


// ===== 0086327c  FUN_0086327c =====

void FUN_0086327c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990940;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086328c  FUN_0086328c =====

void FUN_0086328c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990940;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008632bc  FUN_008632bc =====

void FUN_008632bc(void)

{
  return;
}


// ===== 008632c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008632c4  FUN_008632c4 =====

void FUN_008632c4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009909a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008632d4  FUN_008632d4 =====

void FUN_008632d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009909a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00863304  FUN_00863304 =====

void FUN_00863304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086330c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00863310  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00863314  FUN_00863314 =====

void FUN_00863314(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00863364  FUN_00863364 =====

void FUN_00863364(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009909f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00863374  FUN_00863374 =====

void FUN_00863374(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009909f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008633a4  FUN_008633a4 =====

void FUN_008633a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008633ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008633b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008633b4  FUN_008633b4 =====

void FUN_008633b4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0086346c  facebook::react::concreteComponentDescriptorConstructor<facebook::react::OverKeyboardViewComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::OverKeyboardViewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::OverKeyboardViewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fe0 [2];
  undefined8 *local_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 local_fc0;
  void *pvStack_fb8;
  void *local_fb0;
  undefined8 uStack_fa8;
  void *local_fa0;
  void *pvStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined *local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined4 local_f60 [2];
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined4 local_f38;
  undefined4 local_f30;
  undefined1 local_f2c;
  undefined8 local_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined6 uStack_eeb;
  undefined2 uStack_ee5;
  undefined6 uStack_ee3;
  undefined8 uStack_edd;
  undefined4 local_ed5;
  undefined8 local_ed1;
  undefined1 local_ec9;
  undefined1 uStack_ec8;
  undefined7 uStack_ec7;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 uStack_d48;
  undefined7 local_d47;
  undefined1 uStack_d40;
  undefined8 uStack_d3f;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined8 uStack_d1c;
  undefined8 local_d14;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined8 uStack_cfc;
  undefined8 local_cf4;
  undefined8 uStack_cec;
  undefined8 uStack_ce4;
  undefined5 uStack_cdc;
  undefined3 local_cd7;
  undefined5 uStack_cd4;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc4;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined1 local_c7c;
  undefined4 local_c7b;
  undefined1 local_c77;
  undefined1 local_c76;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined7 uStack_c48;
  undefined4 uStack_c41;
  undefined8 local_c3c;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined1 local_b68;
  undefined1 local_b64;
  undefined1 local_b60;
  undefined1 local_b5c;
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined2 local_b08;
  undefined8 local_b04;
  undefined1 local_afc;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined1 local_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined6 uStack_9e0;
  undefined2 uStack_9da;
  undefined6 uStack_9d8;
  undefined1 local_9d0;
  undefined1 local_9cc;
  undefined1 local_9c8;
  undefined8 local_9c4;
  undefined8 uStack_9bc;
  undefined1 local_9b4;
  undefined8 local_9b0;
  undefined2 local_9a8;
  undefined1 local_9a6;
  undefined4 local_9a4;
  undefined1 local_9a0;
  undefined1 local_940;
  undefined1 local_938;
  undefined1 local_8d8;
  undefined4 local_8d0;
  undefined2 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined1 local_8c0;
  undefined1 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0;
  undefined4 local_898 [2];
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fb8 = (void *)0x0;
  local_fc0 = 0;
  uStack_fa8 = 0;
  local_fb0 = (void *)0x0;
  pvStack_f98 = (void *)0x0;
  local_fa0 = (void *)0x0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
                    /* try { // try from 008634bc to 008634c7 has its CatchHandler @ 00863af8 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00990b20;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 00863538 to 00863543 has its CatchHandler @ 00863b28 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fd8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_f60,0,0x6c8);
  puVar5 = PTR_VTT_0099edf0;
  local_898[0] = 5;
  local_880 = 0;
  local_f80 = *(undefined **)(PTR_VTT_0099edf0 + 0x20);
  local_f60[0] = 5;
  uStack_f68 = 0;
  local_f70 = 0;
  local_878 = 0;
  uStack_f78 = 0;
  uStack_870 = 0x3f800000;
  uStack_888 = 0;
  local_890 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_f38 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_898);
  local_f2c = 0;
  local_ed1 = 0;
  uStack_9f0 = _UNK_00488920;
  local_9f8 = _DAT_00488918;
  local_f2b = _s__00375408;
  uStack_ae8 = _UNK_00371598;
  local_af0 = _DAT_00371590;
  uStack_a00 = _UNK_00488910;
  local_a08 = _DAT_00488908;
  local_e14 = 0;
  uStack_a10 = _UNK_00488900;
  local_a18 = _DAT_004888f8;
  uStack_a20 = _UNK_004888f0;
  local_a28 = _DAT_004888e8;
  uStack_9d8 = 0;
  local_e0c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_e2c = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  uStack_9e0 = 0;
  uStack_9da = 0;
  local_9e8 = 0;
  local_f30 = 0x10410710;
  local_ed5 = 0x40004;
  uStack_e34 = 0;
  uStack_e30 = 0;
  uStack_e3c = 0;
  uStack_e38 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  local_dc8 = 0x7fc00000;
  local_dc0 = 0x7fc00000;
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  uStack_d3f = 0;
  uStack_d40 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  uStack_d0c = 0;
  local_d14 = 0;
  uStack_cfc = 0;
  uStack_d04 = 0;
  uStack_cec = 0;
  local_cf4 = 0;
  uStack_cdc = 0;
  uStack_ce4 = 0;
  local_cd7 = 0;
  uStack_cd4 = 0;
  local_c7c = 1;
  local_c7b = 0;
  local_c76 = 0x23;
  local_c3c = 0x3f800000;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  local_b04 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_ac0 = 0;
  uStack_ac8 = 0;
  uStack_ab0 = 0;
  local_ab8 = 0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  uStack_a90 = 0;
  local_a98 = 0;
  uStack_a80 = 0;
  uStack_a88 = 0;
  uStack_a70 = 0;
  local_a78 = 0;
  uStack_a60 = 0;
  uStack_a68 = 0;
  uStack_a50 = 0;
  local_a58 = 0;
  uStack_a40 = 0;
  uStack_a48 = 0;
  uStack_a30 = 0;
  local_a38 = 0;
  uStack_ec7 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edd = 0;
  uStack_ee5 = 0;
  uStack_ee3 = 0;
  local_ec9 = 0;
  uStack_ec8 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  uStack_e68 = 0;
  uStack_e70 = 0;
  local_e60 = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d88 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc4 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_ca0 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  uStack_d70 = 0;
  uStack_d58 = 0;
  local_d60 = 0;
  uStack_d48 = 0;
  local_d47 = 0;
  uStack_d50 = 0;
  uStack_c90 = 0;
  local_c98 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c77 = 0;
  uStack_c68 = 0;
  local_c70 = 0;
  uStack_c58 = 0;
  uStack_c60 = 0;
  uStack_c48 = 0;
  uStack_c41 = 0;
  local_c50 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b64 = 0;
  local_b60 = 0;
  local_b5c = 0;
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_af8 = 0;
  local_b08 = 0;
  local_afc = 0;
  local_ae0 = 0;
  local_9d0 = 0;
  local_9cc = 0;
  local_9c8 = 0;
  local_9b0 = 0;
  uStack_9bc = 0;
  local_9c4 = 0;
  local_9b4 = 0;
  local_9a8 = 0x101;
  local_9a6 = 0;
  local_9a4 = 0;
  local_9a0 = 0;
  local_940 = 0;
  local_938 = 0;
  local_8d8 = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8cc = 0;
  local_8d0 = 0;
  local_f80 = PTR_vtable_0099ede8 + 0x20;
  local_8a0 = 0;
                    /* try { // try from 00863930 to 00863943 has its CatchHandler @ 00863b28 */
  ::facebook::react::OverKeyboardViewProps::OverKeyboardViewProps
            ((OverKeyboardViewProps *)local_898,(PropsParserContext *)local_fe0,
             (OverKeyboardViewProps *)&local_f80,(RawProps *)&local_f8);
  FUN_0078917c(local_898,puVar5 + 8);
  FUN_0078917c(&local_f80,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00863a48 to 00863a53 has its CatchHandler @ 00863b2c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f80,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00990a78;
  if (local_fa0 != (void *)0x0) {
    pvStack_f98 = local_fa0;
    operator_delete(local_fa0);
  }
  if (pvStack_fb8 != (void *)0x0) {
    local_fb0 = pvStack_fb8;
    operator_delete(pvStack_fb8);
  }
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00863b30  FUN_00863b30 =====

void FUN_00863b30(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00863b54  FUN_00863b54 =====

undefined * FUN_00863b54(void)

{
  return PTR_OverKeyboardViewComponentName_0099ede0;
}


// ===== 00863b60  FUN_00863b60 =====

undefined * FUN_00863b60(void)

{
  return PTR_OverKeyboardViewComponentName_0099ede0;
}


// ===== 00863b6c  FUN_00863b6c =====

undefined8 FUN_00863b6c(void)

{
  return 0x61;
}


// ===== 00863b74  FUN_00863b74 =====

void FUN_00863b74(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00990b98;
                    /* try { // try from 00863be0 to 00863bef has its CatchHandler @ 00863cc8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00990be8;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 00863c7c to 00863c87 has its CatchHandler @ 00863cb8 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00863cf8  FUN_00863cf8 =====

void FUN_00863cf8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_00990b98;
                    /* try { // try from 00863d50 to 00863d5f has its CatchHandler @ 00863ea0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00990be8;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00863de4 to 00863df3 has its CatchHandler @ 00863eb8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 00863e04 to 00863e13 has its CatchHandler @ 00863e90 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00863e50 to 00863e5b has its CatchHandler @ 00863eb8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00863ee0  FUN_00863ee0 =====

void FUN_00863ee0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00863ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00863ef4  FUN_00863ef4 =====

void FUN_00863ef4(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  OverKeyboardViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  OverKeyboardViewProps *pOVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
                                   ), iVar6 != 0)) {
                    /* try { // try from 00864328 to 0086432b has its CatchHandler @ 00864358 */
      FUN_00864e78();
      __cxa_atexit(FUN_00864e28,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e818
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e818
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e818
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pOVar12 = (OverKeyboardViewProps *)*param_4;
    if (pOVar12 == (OverKeyboardViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
                                     ), iVar6 != 0)) {
                    /* try { // try from 008642a8 to 008642ab has its CatchHandler @ 00864370 */
        FUN_00864e78();
        __cxa_atexit(FUN_00864e28,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e818
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
                           );
      }
      pOVar12 = *(OverKeyboardViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e818
      ;
    }
    plVar8 = (long *)operator_new(0x700);
    this = (OverKeyboardViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00990d00;
                    /* try { // try from 00863fd4 to 00863fe7 has its CatchHandler @ 008643e4 */
    facebook::react::OverKeyboardViewProps::OverKeyboardViewProps(this,param_3,pOVar12,param_5);
                    /* try { // try from 00863fec to 00863fff has its CatchHandler @ 008643fc */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00864028:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
                                       ), iVar6 != 0)) {
                    /* try { // try from 008642e8 to 008642eb has its CatchHandler @ 0086435c */
          FUN_00864e78();
          __cxa_atexit(FUN_00864e28,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e818
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e820
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00864090 to 008640a3 has its CatchHandler @ 00864388 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e818
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008640dc:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008640dc;
        }
        if (plVar8 != (long *)0x0) goto LAB_008640f0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00864044 to 00864057 has its CatchHandler @ 008643b0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008640f0;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008640f0:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0086400c to 00864017 has its CatchHandler @ 00864384 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_OverKeyboardViewComponentName_0099ede0,pcVar9);
      if (iVar6 != 0) goto LAB_00864028;
      bVar3 = false;
    }
                    /* try { // try from 0086411c to 0086411f has its CatchHandler @ 008643fc */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0086412c to 00864147 has its CatchHandler @ 008643ac */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00864288 to 00864297 has its CatchHandler @ 008643a4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00864448;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00864268 to 00864277 has its CatchHandler @ 00864408 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00864448;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 008641c8 to 008641d3 has its CatchHandler @ 00864410 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008641d8 to 008641ef has its CatchHandler @ 00864414 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00864200 to 0086420b has its CatchHandler @ 00864404 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00864448:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086444c  FUN_0086444c =====

/* WARNING: Removing unreachable block (ram,0x0086454c) */
/* WARNING: Removing unreachable block (ram,0x0086455c) */
/* WARNING: Removing unreachable block (ram,0x00864580) */
/* WARNING: Removing unreachable block (ram,0x00864590) */

void FUN_0086444c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00990ef8;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(undefined4 *)((long)plVar3 + 0x1c) = 0;
                    /* try { // try from 008644a8 to 008644af has its CatchHandler @ 0086460c */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00990d50;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 008644ec to 008644fb has its CatchHandler @ 008645d4 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00990da0;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00864634  FUN_00864634 =====

/* WARNING: Removing unreachable block (ram,0x00864708) */
/* WARNING: Removing unreachable block (ram,0x00864718) */
/* WARNING: Removing unreachable block (ram,0x0086476c) */
/* WARNING: Removing unreachable block (ram,0x0086477c) */

void FUN_00864634(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00864678 to 00864683 has its CatchHandler @ 008647f4 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00864688 to 0086468f has its CatchHandler @ 008647e4 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00990f58;
                    /* try { // try from 008646b4 to 008646c3 has its CatchHandler @ 008647bc */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00990da0;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086481c  FUN_0086481c =====

void FUN_0086481c(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 00864864 to 0086486b has its CatchHandler @ 00864b50 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00990fa8;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008648a8 to 008648b7 has its CatchHandler @ 00864b24 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008648c8 to 008648cf has its CatchHandler @ 00864b14 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_00990ff8;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00864980 to 00864987 has its CatchHandler @ 00864b04 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008649d4 to 008649eb has its CatchHandler @ 00864ad4 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 00864a40 to 00864a4b has its CatchHandler @ 00864ab4 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00864b78  FUN_00864b78 =====

void FUN_00864b78(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)facebook::react::ShadowNode::getState();
  facebook::react::YogaLayoutableShadowNode::setSize
            (**(undefined4 **)(*plVar1 + 0x18),(*(undefined4 **)(*plVar1 + 0x18))[1],param_2);
  facebook::react::YogaLayoutableShadowNode::setPositionType(param_2,2);
  return;
}


// ===== 00864bb8  FUN_00864bb8 =====

void FUN_00864bb8(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00864bdc  FUN_00864bdc =====

void FUN_00864bdc(void)

{
  return;
}


// ===== 00864be0  FUN_00864be0 =====

void FUN_00864be0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00864c30  FUN_00864c30 =====

void FUN_00864c30(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990b98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00864c40  FUN_00864c40 =====

void FUN_00864c40(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990b98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00864c70  FUN_00864c70 =====

void FUN_00864c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00864c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00864c7c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00864c80  FUN_00864c80 =====

void FUN_00864c80(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00864d40  FUN_00864d40 =====

void FUN_00864d40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00864da8  FUN_00864da8 =====

bool FUN_00864da8(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00864dc0  FUN_00864dc0 =====

bool FUN_00864dc0(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00864dd8  FUN_00864dd8 =====

void FUN_00864dd8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00864e28  FUN_00864e28 =====

void FUN_00864e28(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00864e78  FUN_00864e78 =====

void FUN_00864e78(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00990cb0;
  memset(__s,0,0x6e8);
                    /* try { // try from 00864eb4 to 00864ec7 has its CatchHandler @ 00864f38 */
  FUN_00788b10(__s,PTR_VTT_0099edf0 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099ede8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29OverKeyboardViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21OverKeyboardViewPropsENS0_28OverKeyboardViewEventEmitterENS0_21OverKeyboardViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e818
  ;
  *(undefined1 *)(puVar2 + 0xdf) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00864f54  FUN_00864f54 =====

void FUN_00864f54(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990cb0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00864f64  FUN_00864f64 =====

void FUN_00864f64(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990cb0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00864f94  FUN_00864f94 =====

void FUN_00864f94(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099edf0 + 8);
  return;
}


// ===== 00864fa8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00864fac  FUN_00864fac =====

void FUN_00864fac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990d00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00864fbc  FUN_00864fbc =====

void FUN_00864fbc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990d00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00864fec  FUN_00864fec =====

void FUN_00864fec(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099edf0 + 8);
  return;
}


// ===== 00865000  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00865004  FUN_00865004 =====

void FUN_00865004(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00865054  FUN_00865054 =====

void FUN_00865054(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990d50;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00865064  FUN_00865064 =====

void FUN_00865064(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990d50;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00865094  FUN_00865094 =====

void FUN_00865094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086509c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008650a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008650a4  FUN_008650a4 =====

void FUN_008650a4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0086510c  FUN_0086510c =====

void FUN_0086510c(void)

{
  facebook::react::OverKeyboardViewState::getDynamic();
  return;
}


// ===== 00865114  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 00865118  FUN_00865118 =====

void FUN_00865118(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00865120  FUN_00865120 =====

void FUN_00865120(long param_1,dynamic *param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ****ppppuVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  dynamic adStack_120 [48];
  undefined **local_f0;
  float local_e8;
  float fStack_e4;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
                    /* try { // try from 00865154 to 0086518b has its CatchHandler @ 0086548c */
  piVar2 = (int *)folly::dynamic::operator[](adStack_120,"screenWidth","");
  if (*piVar2 == 3) {
    dVar9 = *(double *)(piVar2 + 2);
    piVar2 = (int *)folly::dynamic::operator[](adStack_120,"screenHeight","");
    if (*piVar2 == 3) {
      local_f0 = &PTR_FUN_00990e78;
      local_d0 = &local_f0;
      local_e8 = (float)dVar9;
      fStack_e4 = (float)*(double *)(piVar2 + 2);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (plVar3 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar3 != (long *)0x0)) {
        lVar8 = *(long *)(param_1 + 8);
        if (lVar8 != 0) {
          local_90 = lVar8;
          local_88 = plVar3;
          FUN_00757d00(1,plVar3 + 1);
          local_a0[0] = local_d0;
          if (local_d0 != (undefined ***)0x0) {
            if (local_d0 == &local_f0) {
              local_a0[0] = local_c0;
              (*(code *)local_f0[3])(&local_f0,local_c0);
            }
            else {
                    /* try { // try from 0086520c to 00865233 has its CatchHandler @ 008653f8 */
              local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
            }
          }
          local_60 = (long *)0x0;
                    /* try { // try from 00865238 to 0086523f has its CatchHandler @ 00865410 */
          plVar4 = (long *)operator_new(0x40);
          *plVar4 = (long)&PTR_FUN_00990df8;
          if (local_a0[0] == (undefined ***)0x0) {
            ppppuVar6 = (undefined ****)(plVar4 + 6);
LAB_00865274:
            *ppppuVar6 = (undefined ***)0x0;
          }
          else {
            if (local_a0[0] != local_c0) {
              ppppuVar6 = local_a0;
              plVar4[6] = (long)local_a0[0];
              goto LAB_00865274;
            }
            plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 00865288 to 00865297 has its CatchHandler @ 008653f4 */
            (*(code *)local_c0[0][3])(local_c0);
          }
          local_60 = plVar4;
          if (local_a0[0] == local_c0) {
            lVar7 = 4;
            pppuVar5 = local_c0;
LAB_008652c0:
            (*(code *)(*pppuVar5)[lVar7])(pppuVar5);
          }
          else if (local_a0[0] != (undefined ***)0x0) {
            lVar7 = 5;
            pppuVar5 = local_a0[0];
            goto LAB_008652c0;
          }
                    /* try { // try from 008652d0 to 008652df has its CatchHandler @ 00865400 */
          facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                    (lVar8,&local_90,0);
          plVar4 = local_80;
          if (local_60 == plVar4) {
            lVar8 = 4;
LAB_00865308:
            (**(code **)(*plVar4 + lVar8 * 8))();
          }
          else if (local_60 != (long *)0x0) {
            lVar8 = 5;
            plVar4 = local_60;
            goto LAB_00865308;
          }
          plVar4 = local_88;
          if ((local_88 != (long *)0x0) &&
             (lVar8 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar8 == 0)) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
          if (plVar3 == (long *)0x0) goto LAB_00865374;
        }
        lVar8 = FUN_00757990(0xffffffffffffffff,plVar3 + 1);
        if (lVar8 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
LAB_00865374:
      if (local_d0 == &local_f0) {
        lVar8 = 4;
        pppuVar5 = &local_f0;
LAB_00865394:
        (*(code *)(*pppuVar5)[lVar8])();
      }
      else if (local_d0 != (undefined ***)0x0) {
        lVar8 = 5;
        pppuVar5 = local_d0;
        goto LAB_00865394;
      }
      folly::dynamic::folly::dynamic::destroy(adStack_120);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_008654b0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 008653e4 to 008653f3 has its CatchHandler @ 0086548c */
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099edf8);
  }
LAB_008654b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008654b4  FUN_008654b4 =====

void FUN_008654b4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00990df8;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x008654f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 008654f8  FUN_008654f8 =====

void FUN_008654f8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00990df8;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00865544;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00865544:
  operator_delete(param_1);
  return;
}


// ===== 00865554  FUN_00865554 =====

undefined8 * FUN_00865554(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00990df8;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0086559c to 008655b7 has its CatchHandler @ 008655c8 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 008655dc  FUN_008655dc =====

void FUN_008655dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00990df8;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0086564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 00865650  FUN_00865650 =====

void FUN_00865650(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00865680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00865688  FUN_00865688 =====

void FUN_00865688(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_008656c8;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_008656c8:
  operator_delete(param_1);
  return;
}


// ===== 008656d8  FUN_008656d8 =====

void FUN_008656d8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008656ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 008656fc  FUN_008656fc =====

long FUN_008656fc(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e828) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00865718  FUN_00865718 =====

undefined * FUN_00865718(void)

{
  return PTR_typeinfo_0099e830;
}


// ===== 00865724  FUN_00865724 =====

void FUN_00865724(void)

{
  return;
}


// ===== 00865728  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086572c  FUN_0086572c =====

void FUN_0086572c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00990e78;
  puVar1[1] = uVar2;
  return;
}


// ===== 00865760  FUN_00865760 =====

void FUN_00865760(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00990e78;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 00865778  FUN_00865778 =====

void FUN_00865778(void)

{
  return;
}


// ===== 0086577c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00865780  FUN_00865780 =====

void FUN_00865780(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00990ef8;
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[1] = puVar1;
  puVar1[3] = uVar2;
  *param_1 = puVar1 + 3;
  return;
}


// ===== 008657c8  FUN_008657c8 =====

long FUN_008657c8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e838) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008657e4  FUN_008657e4 =====

undefined * FUN_008657e4(void)

{
  return PTR_typeinfo_0099e840;
}


// ===== 008657f0  FUN_008657f0 =====

void FUN_008657f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990ef8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00865800  FUN_00865800 =====

void FUN_00865800(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990ef8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00865830  FUN_00865830 =====

void FUN_00865830(void)

{
  return;
}


// ===== 00865834  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00865838  FUN_00865838 =====

void FUN_00865838(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990f58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00865848  FUN_00865848 =====

void FUN_00865848(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990f58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00865878  FUN_00865878 =====

void FUN_00865878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00865880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00865884  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00865888  FUN_00865888 =====

void FUN_00865888(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008658d8  FUN_008658d8 =====

void FUN_008658d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990fa8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008658e8  FUN_008658e8 =====

void FUN_008658e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990fa8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00865918  FUN_00865918 =====

void FUN_00865918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00865920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00865924  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00865928  FUN_00865928 =====

void FUN_00865928(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 008659e0  facebook::react::concreteComponentDescriptorConstructor<facebook::react::KeyboardBackgroundViewComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::KeyboardBackgroundViewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::KeyboardBackgroundViewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fd0 [2];
  undefined8 *local_fc8;
  void *local_fc0;
  void *pvStack_fb8;
  undefined8 local_fb0;
  void *pvStack_fa8;
  void *local_fa0;
  undefined8 uStack_f98;
  void *local_f90;
  void *pvStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined *local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined4 local_f50 [2];
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined4 local_f28;
  undefined4 local_f20;
  undefined1 local_f1c;
  undefined8 local_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined8 uStack_eeb;
  undefined8 local_ee3;
  undefined6 uStack_edb;
  undefined2 uStack_ed5;
  undefined6 uStack_ed3;
  undefined8 uStack_ecd;
  undefined4 local_ec5;
  undefined8 local_ec1;
  undefined1 local_eb9;
  undefined1 uStack_eb8;
  undefined7 uStack_eb7;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined4 local_d98;
  undefined1 local_d94;
  undefined4 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined1 uStack_d38;
  undefined7 local_d37;
  undefined1 uStack_d30;
  undefined8 uStack_d2f;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined8 uStack_d0c;
  undefined8 local_d04;
  undefined8 uStack_cfc;
  undefined8 uStack_cf4;
  undefined8 uStack_cec;
  undefined8 local_ce4;
  undefined8 uStack_cdc;
  undefined8 uStack_cd4;
  undefined5 uStack_ccc;
  undefined3 local_cc7;
  undefined5 uStack_cc4;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_cac;
  undefined1 local_ca8;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined4 local_c70;
  undefined1 local_c6c;
  undefined4 local_c6b;
  undefined1 local_c67;
  undefined1 local_c66;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined7 uStack_c38;
  undefined4 uStack_c31;
  undefined8 local_c2c;
  undefined1 local_c24;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined1 local_b68;
  undefined1 local_b64;
  undefined1 local_b60;
  undefined1 local_b5c;
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined1 local_b38;
  undefined1 local_b34;
  undefined1 local_b30;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined2 local_af8;
  undefined8 local_af4;
  undefined1 local_aec;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined1 local_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined6 uStack_9d0;
  undefined2 uStack_9ca;
  undefined6 uStack_9c8;
  undefined1 local_9c0;
  undefined1 local_9bc;
  undefined1 local_9b8;
  undefined8 local_9b4;
  undefined8 uStack_9ac;
  undefined1 local_9a4;
  undefined8 local_9a0;
  undefined2 local_998;
  undefined1 local_996;
  undefined4 local_994;
  undefined1 local_990;
  undefined1 local_930;
  undefined1 local_928;
  undefined1 local_8c8;
  undefined4 local_8c0;
  undefined2 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0;
  undefined1 local_89c;
  undefined1 local_898;
  undefined1 local_894;
  undefined4 local_890 [2];
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fa8 = (void *)0x0;
  local_fb0 = 0;
  uStack_f98 = 0;
  local_fa0 = (void *)0x0;
  pvStack_f88 = (void *)0x0;
  local_f90 = (void *)0x0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  pvStack_fb8 = (void *)0x0;
  local_fc0 = (void *)0x0;
                    /* try { // try from 00865a30 to 00865a3b has its CatchHandler @ 00866064 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_fc0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_009910d8;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 00865aa8 to 00865ab3 has its CatchHandler @ 00866094 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fd0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fc8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_f50,0,0x6c0);
  puVar5 = PTR_VTT_0099ee10;
  local_890[0] = 5;
  local_878 = 0;
  local_f70 = *(undefined **)(PTR_VTT_0099ee10 + 0x20);
  local_f50[0] = 5;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f68 = 0;
  local_870 = 0;
  uStack_868 = 0x3f800000;
  uStack_880 = 0;
  local_888 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  local_f28 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_890);
  local_f1c = 0;
  local_ec1 = 0;
  uStack_9e0 = _UNK_00488920;
  local_9e8 = _DAT_00488918;
  local_f1b = _s__00375408;
  uStack_ad8 = _UNK_00371598;
  local_ae0 = _DAT_00371590;
  uStack_9f0 = _UNK_00488910;
  local_9f8 = _DAT_00488908;
  local_e04 = 0;
  uStack_a00 = _UNK_00488900;
  local_a08 = _DAT_004888f8;
  uStack_a10 = _UNK_004888f0;
  local_a18 = _DAT_004888e8;
  uStack_9c8 = 0;
  local_dfc = 0;
  uStack_e30 = 0;
  local_e38 = 0;
  uStack_e1c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_9d0 = 0;
  uStack_9ca = 0;
  local_9d8 = 0;
  local_f20 = 0x10410710;
  local_ec5 = 0x40004;
  uStack_e24 = 0;
  uStack_e20 = 0;
  uStack_e2c = 0;
  uStack_e28 = 0;
  uStack_e10 = 0;
  local_e18 = 0;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  local_dc8 = 0x7fc00000;
  local_dc0 = 0x7fc00000;
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  local_d98 = 0x7fc00000;
  local_d90 = 0x7fc00000;
  uStack_d2f = 0;
  uStack_d30 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  uStack_cfc = 0;
  local_d04 = 0;
  uStack_cec = 0;
  uStack_cf4 = 0;
  uStack_cdc = 0;
  local_ce4 = 0;
  uStack_ccc = 0;
  uStack_cd4 = 0;
  local_cc7 = 0;
  uStack_cc4 = 0;
  local_c6c = 1;
  local_c6b = 0;
  local_c66 = 0x23;
  local_c2c = 0x3f800000;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  local_af4 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_a50 = 0;
  uStack_a58 = 0;
  uStack_a40 = 0;
  local_a48 = 0;
  uStack_a30 = 0;
  uStack_a38 = 0;
  uStack_a20 = 0;
  local_a28 = 0;
  uStack_eb7 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edb = 0;
  local_ee3 = 0;
  uStack_ecd = 0;
  uStack_ed5 = 0;
  uStack_ed3 = 0;
  local_eb9 = 0;
  uStack_eb8 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  local_e68 = 0;
  uStack_e70 = 0;
  uStack_e58 = 0;
  uStack_e60 = 0;
  local_e50 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d94 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d78 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_cb4 = 0;
  local_cb0 = 0;
  local_cac = 0;
  local_ca8 = 0;
  local_c90 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  uStack_d60 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  local_d37 = 0;
  uStack_d40 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c67 = 0;
  uStack_c58 = 0;
  local_c60 = 0;
  uStack_c48 = 0;
  uStack_c50 = 0;
  uStack_c38 = 0;
  uStack_c31 = 0;
  local_c40 = 0;
  local_c24 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b64 = 0;
  local_b60 = 0;
  local_b5c = 0;
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_b38 = 0;
  local_b34 = 0;
  local_b30 = 0;
  local_b2c = 0;
  local_ae8 = 0;
  local_af8 = 0;
  local_aec = 0;
  local_ad0 = 0;
  local_9c0 = 0;
  local_9bc = 0;
  local_9b8 = 0;
  local_9a0 = 0;
  uStack_9ac = 0;
  local_9b4 = 0;
  local_9a4 = 0;
  local_998 = 0x101;
  local_996 = 0;
  local_994 = 0;
  local_990 = 0;
  local_930 = 0;
  local_928 = 0;
  local_8c8 = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8a0 = 0;
  local_89c = 0;
  local_898 = 0;
  local_894 = 0;
  local_8bc = 0;
  local_8c0 = 0;
  local_f70 = PTR_vtable_0099ee08 + 0x20;
                    /* try { // try from 00865ea0 to 00865eb3 has its CatchHandler @ 00866094 */
  ::facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps
            ((KeyboardBackgroundViewProps *)local_890,(PropsParserContext *)local_fd0,
             (KeyboardBackgroundViewProps *)&local_f70,(RawProps *)&local_f8);
  FUN_0078917c(local_890,puVar5 + 8);
  FUN_0078917c(&local_f70,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00865fb8 to 00865fc3 has its CatchHandler @ 00866098 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f70,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00991030;
  if (local_f90 != (void *)0x0) {
    pvStack_f88 = local_f90;
    operator_delete(local_f90);
  }
  if (pvStack_fa8 != (void *)0x0) {
    local_fa0 = pvStack_fa8;
    operator_delete(pvStack_fa8);
  }
  if (local_fc0 != (void *)0x0) {
    pvStack_fb8 = local_fc0;
    operator_delete(local_fc0);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086609c  FUN_0086609c =====

void FUN_0086609c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008660c0  FUN_008660c0 =====

undefined * FUN_008660c0(void)

{
  return PTR_KeyboardBackgroundViewComponentName_0099ee00;
}


// ===== 008660cc  FUN_008660cc =====

undefined * FUN_008660cc(void)

{
  return PTR_KeyboardBackgroundViewComponentName_0099ee00;
}


// ===== 008660d8  FUN_008660d8 =====

undefined8 FUN_008660d8(void)

{
  return 0x61;
}


// ===== 008660e0  FUN_008660e0 =====

void FUN_008660e0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00991150;
                    /* try { // try from 0086614c to 0086615b has its CatchHandler @ 00866234 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009911a0;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 008661e8 to 008661f3 has its CatchHandler @ 00866224 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00866264  FUN_00866264 =====

void FUN_00866264(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_00991150;
                    /* try { // try from 008662bc to 008662cb has its CatchHandler @ 0086640c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_009911a0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00866350 to 0086635f has its CatchHandler @ 00866424 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 00866370 to 0086637f has its CatchHandler @ 008663fc */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008663bc to 008663c7 has its CatchHandler @ 00866424 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086644c  FUN_0086644c =====

void FUN_0086644c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0086645c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00866460  FUN_00866460 =====

void FUN_00866460(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  KeyboardBackgroundViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  KeyboardBackgroundViewProps *pKVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
                                   ), iVar6 != 0)) {
                    /* try { // try from 00866894 to 00866897 has its CatchHandler @ 008668c4 */
      FUN_008673a0();
      __cxa_atexit(FUN_00867350,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e848
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e848
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e848
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pKVar12 = (KeyboardBackgroundViewProps *)*param_4;
    if (pKVar12 == (KeyboardBackgroundViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
                                     ), iVar6 != 0)) {
                    /* try { // try from 00866814 to 00866817 has its CatchHandler @ 008668dc */
        FUN_008673a0();
        __cxa_atexit(FUN_00867350,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e848
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
                           );
      }
      pKVar12 = *(KeyboardBackgroundViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e848
      ;
    }
    plVar8 = (long *)operator_new(0x6f8);
    this = (KeyboardBackgroundViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009912b8;
                    /* try { // try from 00866540 to 00866553 has its CatchHandler @ 00866950 */
    facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps
              (this,param_3,pKVar12,param_5);
                    /* try { // try from 00866558 to 0086656b has its CatchHandler @ 00866968 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00866594:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
                                       ), iVar6 != 0)) {
                    /* try { // try from 00866854 to 00866857 has its CatchHandler @ 008668c8 */
          FUN_008673a0();
          __cxa_atexit(FUN_00867350,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e848
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e850
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008665fc to 0086660f has its CatchHandler @ 008668f4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e848
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00866648:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00866648;
        }
        if (plVar8 != (long *)0x0) goto LAB_0086665c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008665b0 to 008665c3 has its CatchHandler @ 0086691c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0086665c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0086665c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00866578 to 00866583 has its CatchHandler @ 008668f0 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_KeyboardBackgroundViewComponentName_0099ee00,pcVar9);
      if (iVar6 != 0) goto LAB_00866594;
      bVar3 = false;
    }
                    /* try { // try from 00866688 to 0086668b has its CatchHandler @ 00866968 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00866698 to 008666b3 has its CatchHandler @ 00866918 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008667f4 to 00866803 has its CatchHandler @ 00866910 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008669b4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008667d4 to 008667e3 has its CatchHandler @ 00866974 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008669b4;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 00866734 to 0086673f has its CatchHandler @ 0086697c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00866744 to 0086675b has its CatchHandler @ 00866980 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0086676c to 00866777 has its CatchHandler @ 00866970 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_008669b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008669b8  FUN_008669b8 =====

/* WARNING: Removing unreachable block (ram,0x00866ab0) */
/* WARNING: Removing unreachable block (ram,0x00866ac0) */
/* WARNING: Removing unreachable block (ram,0x00866ae4) */
/* WARNING: Removing unreachable block (ram,0x00866af4) */

void FUN_008669b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_009914b0;
                    /* try { // try from 00866a0c to 00866a13 has its CatchHandler @ 00866b70 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00991308;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 00866a50 to 00866a5f has its CatchHandler @ 00866b38 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00991358;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00866b98  FUN_00866b98 =====

/* WARNING: Removing unreachable block (ram,0x00866c6c) */
/* WARNING: Removing unreachable block (ram,0x00866c7c) */
/* WARNING: Removing unreachable block (ram,0x00866cd0) */
/* WARNING: Removing unreachable block (ram,0x00866ce0) */

void FUN_00866b98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00866bdc to 00866be7 has its CatchHandler @ 00866d58 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00866bec to 00866bf3 has its CatchHandler @ 00866d48 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00991510;
                    /* try { // try from 00866c18 to 00866c27 has its CatchHandler @ 00866d20 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00991358;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00866d80  FUN_00866d80 =====

void FUN_00866d80(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 00866dc8 to 00866dcf has its CatchHandler @ 008670b4 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00991560;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 00866e0c to 00866e1b has its CatchHandler @ 00867088 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00866e2c to 00866e33 has its CatchHandler @ 00867078 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_009915b0;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00866ee4 to 00866eeb has its CatchHandler @ 00867068 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 00866f38 to 00866f4f has its CatchHandler @ 00867038 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 00866fa4 to 00866faf has its CatchHandler @ 00867018 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008670dc  FUN_008670dc =====

void FUN_008670dc(void)

{
  return;
}


// ===== 008670e0  FUN_008670e0 =====

void FUN_008670e0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00867104  FUN_00867104 =====

void FUN_00867104(void)

{
  return;
}


// ===== 00867108  FUN_00867108 =====

void FUN_00867108(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00867158  FUN_00867158 =====

void FUN_00867158(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991150;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00867168  FUN_00867168 =====

void FUN_00867168(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991150;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00867198  FUN_00867198 =====

void FUN_00867198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008671a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008671a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008671a8  FUN_008671a8 =====

void FUN_008671a8(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00867268  FUN_00867268 =====

void FUN_00867268(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008672d0  FUN_008672d0 =====

bool FUN_008672d0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008672e8  FUN_008672e8 =====

bool FUN_008672e8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00867300  FUN_00867300 =====

void FUN_00867300(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00867350  FUN_00867350 =====

void FUN_00867350(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008673a0  FUN_008673a0 =====

void FUN_008673a0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00991268;
  memset(__s,0,0x6e0);
                    /* try { // try from 008673dc to 008673ef has its CatchHandler @ 0086745c */
  FUN_00788b10(__s,PTR_VTT_0099ee10 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  puVar1 = PTR_vtable_0099ee08;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardBackgroundViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardBackgroundViewPropsENS0_34KeyboardBackgroundViewEventEmitterENS0_27KeyboardBackgroundViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e848
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00867478  FUN_00867478 =====

void FUN_00867478(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991268;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00867488  FUN_00867488 =====

void FUN_00867488(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991268;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008674b8  FUN_008674b8 =====

void FUN_008674b8(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee10 + 8);
  return;
}


// ===== 008674cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008674d0  FUN_008674d0 =====

void FUN_008674d0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009912b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008674e0  FUN_008674e0 =====

void FUN_008674e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009912b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00867510  FUN_00867510 =====

void FUN_00867510(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee10 + 8);
  return;
}


// ===== 00867524  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00867528  FUN_00867528 =====

void FUN_00867528(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00867578  FUN_00867578 =====

void FUN_00867578(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991308;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00867588  FUN_00867588 =====

void FUN_00867588(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991308;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008675b8  FUN_008675b8 =====

void FUN_008675b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008675c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008675c4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008675c8  FUN_008675c8 =====

void FUN_008675c8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00867630  FUN_00867630 =====

void FUN_00867630(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 0086763c  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 00867640  FUN_00867640 =====

void FUN_00867640(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00867648  FUN_00867648 =====

void FUN_00867648(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined1 local_e8;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_00991430;
  local_e8 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00757d00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 008676e0 to 00867707 has its CatchHandler @ 008678a8 */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 0086770c to 00867713 has its CatchHandler @ 008678c0 */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_009913b0;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_00867748:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_00867748;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 0086775c to 0086776b has its CatchHandler @ 008678a4 */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_00867794:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_00867794;
      }
                    /* try { // try from 008677a4 to 008677b3 has its CatchHandler @ 008678b0 */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_008677dc:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_008677dc;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar2 == (long *)0x0) goto LAB_00867848;
    }
    lVar7 = FUN_00757990(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_00867848:
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_00867874;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_00867874:
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086795c  FUN_0086795c =====

void FUN_0086795c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_009913b0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00867998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 008679a0  FUN_008679a0 =====

void FUN_008679a0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_009913b0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_008679ec;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_008679ec:
  operator_delete(param_1);
  return;
}


// ===== 008679fc  FUN_008679fc =====

undefined8 * FUN_008679fc(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_009913b0;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00867a44 to 00867a5f has its CatchHandler @ 00867a70 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00867a84  FUN_00867a84 =====

void FUN_00867a84(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_009913b0;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00867af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 00867af8  FUN_00867af8 =====

void FUN_00867af8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00867b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00867b30  FUN_00867b30 =====

void FUN_00867b30(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00867b70;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00867b70:
  operator_delete(param_1);
  return;
}


// ===== 00867b80  FUN_00867b80 =====

void FUN_00867b80(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00867b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 00867ba4  FUN_00867ba4 =====

long FUN_00867ba4(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e858) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00867bc0  FUN_00867bc0 =====

undefined * FUN_00867bc0(void)

{
  return PTR_typeinfo_0099e860;
}


// ===== 00867bcc  FUN_00867bcc =====

void FUN_00867bcc(void)

{
  return;
}


// ===== 00867bd0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00867bd4  FUN_00867bd4 =====

void FUN_00867bd4(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00991430;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 00867c0c  FUN_00867c0c =====

void FUN_00867c0c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00991430;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 00867c24  FUN_00867c24 =====

void FUN_00867c24(void)

{
  return;
}


// ===== 00867c28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00867c2c  FUN_00867c2c =====

void FUN_00867c2c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_009914b0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 00867c68  FUN_00867c68 =====

long FUN_00867c68(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e868) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00867c84  FUN_00867c84 =====

undefined * FUN_00867c84(void)

{
  return PTR_typeinfo_0099e870;
}


// ===== 00867c90  FUN_00867c90 =====

void FUN_00867c90(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009914b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00867ca0  FUN_00867ca0 =====

void FUN_00867ca0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009914b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00867cd0  FUN_00867cd0 =====

void FUN_00867cd0(void)

{
  return;
}


// ===== 00867cd4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00867cd8  FUN_00867cd8 =====

void FUN_00867cd8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991510;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00867ce8  FUN_00867ce8 =====

void FUN_00867ce8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991510;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00867d18  FUN_00867d18 =====

void FUN_00867d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00867d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00867d24  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00867d28  FUN_00867d28 =====

void FUN_00867d28(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00867d78  FUN_00867d78 =====

void FUN_00867d78(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991560;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00867d88  FUN_00867d88 =====

void FUN_00867d88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991560;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00867db8  FUN_00867db8 =====

void FUN_00867db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00867dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00867dc4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00867dc8  FUN_00867dc8 =====

void FUN_00867dc8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00867e80  facebook::react::concreteComponentDescriptorConstructor<facebook::react::ClippingScrollViewDecoratorViewComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::ClippingScrollViewDecoratorViewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::ClippingScrollViewDecoratorViewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1000 [2];
  undefined8 *local_ff8;
  void *local_ff0;
  void *pvStack_fe8;
  undefined8 local_fe0;
  void *pvStack_fd8;
  void *local_fd0;
  undefined8 uStack_fc8;
  void *local_fc0;
  void *pvStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined *local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined4 local_f80 [2];
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined4 local_f58;
  undefined4 local_f50;
  undefined1 local_f4c;
  undefined8 local_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined6 uStack_f0b;
  undefined2 uStack_f05;
  undefined6 uStack_f03;
  undefined8 uStack_efd;
  undefined4 local_ef5;
  undefined8 local_ef1;
  undefined1 local_ee9;
  undefined1 uStack_ee8;
  undefined7 uStack_ee7;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined4 uStack_e58;
  undefined4 uStack_e54;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined1 uStack_d68;
  undefined7 local_d67;
  undefined1 uStack_d60;
  undefined8 uStack_d5f;
  undefined8 local_d54;
  undefined8 uStack_d4c;
  undefined8 uStack_d44;
  undefined8 uStack_d3c;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined8 uStack_d1c;
  undefined8 local_d14;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined5 uStack_cfc;
  undefined3 local_cf7;
  undefined5 uStack_cf4;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_ce4;
  undefined1 local_ce0;
  undefined1 local_cdc;
  undefined1 local_cd8;
  undefined1 local_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined4 local_ca0;
  undefined1 local_c9c;
  undefined4 local_c9b;
  undefined1 local_c97;
  undefined1 local_c96;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined7 uStack_c68;
  undefined4 uStack_c61;
  undefined8 local_c5c;
  undefined1 local_c54;
  undefined1 local_c4c;
  undefined1 local_c48;
  undefined1 local_c40;
  undefined1 local_c3c;
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined1 local_b68;
  undefined1 local_b64;
  undefined1 local_b60;
  undefined1 local_b5c;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined2 local_b28;
  undefined8 local_b24;
  undefined1 local_b1c;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined1 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined6 uStack_a00;
  undefined2 uStack_9fa;
  undefined6 uStack_9f8;
  undefined1 local_9f0;
  undefined1 local_9ec;
  undefined1 local_9e8;
  undefined8 local_9e4;
  undefined8 uStack_9dc;
  undefined1 local_9d4;
  undefined8 local_9d0;
  undefined2 local_9c8;
  undefined1 local_9c6;
  undefined4 local_9c4;
  undefined1 local_9c0;
  undefined1 local_960;
  undefined1 local_958;
  undefined1 local_8f8;
  undefined4 local_8f0;
  undefined2 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined1 local_8d0;
  undefined1 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined1 local_8b0;
  undefined4 local_8a8 [2];
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fd8 = (void *)0x0;
  local_fe0 = 0;
  uStack_fc8 = 0;
  local_fd0 = (void *)0x0;
  pvStack_fb8 = (void *)0x0;
  local_fc0 = (void *)0x0;
  uStack_fa8 = 0;
  uStack_fb0 = 0;
  pvStack_fe8 = (void *)0x0;
  local_ff0 = (void *)0x0;
                    /* try { // try from 00867ed0 to 00867edb has its CatchHandler @ 00868510 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_ff0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00991690;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 00867f4c to 00867f57 has its CatchHandler @ 00868540 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1000[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_ff8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_f80,0,0x6d8);
  puVar5 = PTR_VTT_0099ee28;
  local_8a8[0] = 5;
  local_890 = 0;
  local_fa0 = *(undefined **)(PTR_VTT_0099ee28 + 0x20);
  local_f80[0] = 5;
  uStack_f88 = 0;
  local_f90 = 0;
  local_888 = 0;
  uStack_f98 = 0;
  uStack_880 = 0x3f800000;
  uStack_898 = 0;
  local_8a0 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  local_f58 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_8a8);
  local_f4c = 0;
  local_ef1 = 0;
  uStack_a10 = _UNK_00488920;
  local_a18 = _DAT_00488918;
  local_f4b = _s__00375408;
  uStack_b08 = _UNK_00371598;
  local_b10 = _DAT_00371590;
  uStack_a20 = _UNK_00488910;
  local_a28 = _DAT_00488908;
  local_e34 = 0;
  uStack_a30 = _UNK_00488900;
  local_a38 = _DAT_004888f8;
  uStack_a40 = _UNK_004888f0;
  local_a48 = _DAT_004888e8;
  uStack_9f8 = 0;
  local_e2c = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  uStack_e4c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_a00 = 0;
  uStack_9fa = 0;
  local_a08 = 0;
  local_f50 = 0x10410710;
  local_ef5 = 0x40004;
  uStack_e54 = 0;
  uStack_e50 = 0;
  uStack_e5c = 0;
  uStack_e58 = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  local_dc8 = 0x7fc00000;
  local_dc0 = 0x7fc00000;
  uStack_d5f = 0;
  uStack_d60 = 0;
  uStack_d4c = 0;
  local_d54 = 0;
  uStack_d3c = 0;
  uStack_d44 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  uStack_d0c = 0;
  local_d14 = 0;
  uStack_cfc = 0;
  uStack_d04 = 0;
  local_cf7 = 0;
  uStack_cf4 = 0;
  local_c9c = 1;
  local_c9b = 0;
  local_c96 = 0x23;
  local_c5c = 0x3f800000;
  uStack_b40 = 0;
  local_b48 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b50 = 0;
  local_b58 = 0;
  local_b24 = 0;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_ac0 = 0;
  uStack_ac8 = 0;
  uStack_ab0 = 0;
  local_ab8 = 0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  uStack_a90 = 0;
  local_a98 = 0;
  uStack_a80 = 0;
  uStack_a88 = 0;
  uStack_a70 = 0;
  local_a78 = 0;
  uStack_a60 = 0;
  uStack_a68 = 0;
  uStack_a50 = 0;
  local_a58 = 0;
  uStack_ee7 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efd = 0;
  uStack_f05 = 0;
  uStack_f03 = 0;
  local_ee9 = 0;
  uStack_ee8 = 0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  uStack_e88 = 0;
  uStack_e90 = 0;
  local_e80 = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_da8 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_ce4 = 0;
  local_ce0 = 0;
  local_cdc = 0;
  local_cd8 = 0;
  local_cc0 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  uStack_d90 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  local_d67 = 0;
  uStack_d70 = 0;
  uStack_cb0 = 0;
  local_cb8 = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c97 = 0;
  uStack_c88 = 0;
  local_c90 = 0;
  uStack_c78 = 0;
  uStack_c80 = 0;
  uStack_c68 = 0;
  uStack_c61 = 0;
  local_c70 = 0;
  local_c54 = 0;
  local_c4c = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b64 = 0;
  local_b60 = 0;
  local_b5c = 0;
  local_b18 = 0;
  local_b28 = 0;
  local_b1c = 0;
  local_b00 = 0;
  local_9f0 = 0;
  local_9ec = 0;
  local_9e8 = 0;
  local_9d0 = 0;
  uStack_9dc = 0;
  local_9e4 = 0;
  local_9d4 = 0;
  local_9c8 = 0x101;
  local_9c6 = 0;
  local_9c4 = 0;
  local_9c0 = 0;
  local_960 = 0;
  local_958 = 0;
  local_8f8 = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8d0 = 0;
  local_8cc = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8ec = 0;
  local_8f0 = 0;
  local_fa0 = PTR_vtable_0099ee20 + 0x20;
  uStack_8b8 = 0;
  local_8c0 = 0;
  local_8b0 = 0;
                    /* try { // try from 00868348 to 0086835b has its CatchHandler @ 00868540 */
  ::facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps
            ((ClippingScrollViewDecoratorViewProps *)local_8a8,(PropsParserContext *)local_1000,
             (ClippingScrollViewDecoratorViewProps *)&local_fa0,(RawProps *)&local_f8);
  FUN_0078917c(local_8a8,puVar5 + 8);
  FUN_0078917c(&local_fa0,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00868460 to 0086846b has its CatchHandler @ 00868544 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fa0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_009915e8;
  if (local_fc0 != (void *)0x0) {
    pvStack_fb8 = local_fc0;
    operator_delete(local_fc0);
  }
  if (pvStack_fd8 != (void *)0x0) {
    local_fd0 = pvStack_fd8;
    operator_delete(pvStack_fd8);
  }
  if (local_ff0 != (void *)0x0) {
    pvStack_fe8 = local_ff0;
    operator_delete(local_ff0);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00868548  FUN_00868548 =====

void FUN_00868548(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0086856c  FUN_0086856c =====

undefined * FUN_0086856c(void)

{
  return PTR_ClippingScrollViewDecoratorViewComponentName_0099ee18;
}


// ===== 00868578  FUN_00868578 =====

undefined * FUN_00868578(void)

{
  return PTR_ClippingScrollViewDecoratorViewComponentName_0099ee18;
}


// ===== 00868584  FUN_00868584 =====

undefined8 FUN_00868584(void)

{
  return 0x61;
}


// ===== 0086858c  FUN_0086858c =====

void FUN_0086858c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00991708;
                    /* try { // try from 008685f8 to 00868607 has its CatchHandler @ 008686e0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00991758;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 00868694 to 0086869f has its CatchHandler @ 008686d0 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00868710  FUN_00868710 =====

void FUN_00868710(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_00991708;
                    /* try { // try from 00868768 to 00868777 has its CatchHandler @ 008688b8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00991758;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 008687fc to 0086880b has its CatchHandler @ 008688d0 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 0086881c to 0086882b has its CatchHandler @ 008688a8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00868868 to 00868873 has its CatchHandler @ 008688d0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008688f8  FUN_008688f8 =====

void FUN_008688f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00868908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0086890c  FUN_0086890c =====

void FUN_0086890c(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  ClippingScrollViewDecoratorViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  ClippingScrollViewDecoratorViewProps *pCVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
                                   ), iVar6 != 0)) {
                    /* try { // try from 00868d40 to 00868d43 has its CatchHandler @ 00868d70 */
      FUN_0086984c();
      __cxa_atexit(FUN_008697fc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e878
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e878
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e878
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pCVar12 = (ClippingScrollViewDecoratorViewProps *)*param_4;
    if (pCVar12 == (ClippingScrollViewDecoratorViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
                                     ), iVar6 != 0)) {
                    /* try { // try from 00868cc0 to 00868cc3 has its CatchHandler @ 00868d88 */
        FUN_0086984c();
        __cxa_atexit(FUN_008697fc,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e878
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
                           );
      }
      pCVar12 = *(ClippingScrollViewDecoratorViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e878
      ;
    }
    plVar8 = (long *)operator_new(0x710);
    this = (ClippingScrollViewDecoratorViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00991870;
                    /* try { // try from 008689ec to 008689ff has its CatchHandler @ 00868dfc */
    facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps
              (this,param_3,pCVar12,param_5);
                    /* try { // try from 00868a04 to 00868a17 has its CatchHandler @ 00868e14 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00868a40:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
                                       ), iVar6 != 0)) {
                    /* try { // try from 00868d00 to 00868d03 has its CatchHandler @ 00868d74 */
          FUN_0086984c();
          __cxa_atexit(FUN_008697fc,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e878
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e880
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00868aa8 to 00868abb has its CatchHandler @ 00868da0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e878
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00868af4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00868af4;
        }
        if (plVar8 != (long *)0x0) goto LAB_00868b08;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00868a5c to 00868a6f has its CatchHandler @ 00868dc8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00868b08;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00868b08:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00868a24 to 00868a2f has its CatchHandler @ 00868d9c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_ClippingScrollViewDecoratorViewComponentName_0099ee18,pcVar9);
      if (iVar6 != 0) goto LAB_00868a40;
      bVar3 = false;
    }
                    /* try { // try from 00868b34 to 00868b37 has its CatchHandler @ 00868e14 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00868b44 to 00868b5f has its CatchHandler @ 00868dc4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00868ca0 to 00868caf has its CatchHandler @ 00868dbc */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00868e60;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00868c80 to 00868c8f has its CatchHandler @ 00868e20 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00868e60;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 00868be0 to 00868beb has its CatchHandler @ 00868e28 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00868bf0 to 00868c07 has its CatchHandler @ 00868e2c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00868c18 to 00868c23 has its CatchHandler @ 00868e1c */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00868e60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00868e64  FUN_00868e64 =====

/* WARNING: Removing unreachable block (ram,0x00868f5c) */
/* WARNING: Removing unreachable block (ram,0x00868f6c) */
/* WARNING: Removing unreachable block (ram,0x00868f90) */
/* WARNING: Removing unreachable block (ram,0x00868fa0) */

void FUN_00868e64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00991a68;
                    /* try { // try from 00868eb8 to 00868ebf has its CatchHandler @ 0086901c */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009918c0;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 00868efc to 00868f0b has its CatchHandler @ 00868fe4 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00991910;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00869044  FUN_00869044 =====

/* WARNING: Removing unreachable block (ram,0x00869118) */
/* WARNING: Removing unreachable block (ram,0x00869128) */
/* WARNING: Removing unreachable block (ram,0x0086917c) */
/* WARNING: Removing unreachable block (ram,0x0086918c) */

void FUN_00869044(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00869088 to 00869093 has its CatchHandler @ 00869204 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00869098 to 0086909f has its CatchHandler @ 008691f4 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00991ac8;
                    /* try { // try from 008690c4 to 008690d3 has its CatchHandler @ 008691cc */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00991910;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086922c  FUN_0086922c =====

void FUN_0086922c(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 00869274 to 0086927b has its CatchHandler @ 00869560 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00991b18;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008692b8 to 008692c7 has its CatchHandler @ 00869534 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008692d8 to 008692df has its CatchHandler @ 00869524 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_00991b68;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00869390 to 00869397 has its CatchHandler @ 00869514 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008693e4 to 008693fb has its CatchHandler @ 008694e4 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 00869450 to 0086945b has its CatchHandler @ 008694c4 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00869588  FUN_00869588 =====

void FUN_00869588(void)

{
  return;
}


// ===== 0086958c  FUN_0086958c =====

void FUN_0086958c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008695b0  FUN_008695b0 =====

void FUN_008695b0(void)

{
  return;
}


// ===== 008695b4  FUN_008695b4 =====

void FUN_008695b4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00869604  FUN_00869604 =====

void FUN_00869604(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991708;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00869614  FUN_00869614 =====

void FUN_00869614(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991708;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00869644  FUN_00869644 =====

void FUN_00869644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00869650  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00869654  FUN_00869654 =====

void FUN_00869654(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00869714  FUN_00869714 =====

void FUN_00869714(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086977c  FUN_0086977c =====

bool FUN_0086977c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00869794  FUN_00869794 =====

bool FUN_00869794(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008697ac  FUN_008697ac =====

void FUN_008697ac(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008697fc  FUN_008697fc =====

void FUN_008697fc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0086984c  FUN_0086984c =====

void FUN_0086984c(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x710);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00991820;
  memset(__s,0,0x6f8);
                    /* try { // try from 00869888 to 0086989b has its CatchHandler @ 00869918 */
  FUN_00788b10(__s,PTR_VTT_0099ee28 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099ee20;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined1 *)(puVar2 + 0xe1) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_44ClippingScrollViewDecoratorViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_36ClippingScrollViewDecoratorViewPropsENS0_43ClippingScrollViewDecoratorViewEventEmitterENS0_36ClippingScrollViewDecoratorViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e878
  ;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00869934  FUN_00869934 =====

void FUN_00869934(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991820;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00869944  FUN_00869944 =====

void FUN_00869944(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991820;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00869974  FUN_00869974 =====

void FUN_00869974(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee28 + 8);
  return;
}


// ===== 00869988  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086998c  FUN_0086998c =====

void FUN_0086998c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991870;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086999c  FUN_0086999c =====

void FUN_0086999c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991870;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008699cc  FUN_008699cc =====

void FUN_008699cc(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee28 + 8);
  return;
}


// ===== 008699e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008699e4  FUN_008699e4 =====

void FUN_008699e4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00869a34  FUN_00869a34 =====

void FUN_00869a34(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009918c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00869a44  FUN_00869a44 =====

void FUN_00869a44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009918c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00869a74  FUN_00869a74 =====

void FUN_00869a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00869a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00869a80  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00869a84  FUN_00869a84 =====

void FUN_00869a84(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00869aec  FUN_00869aec =====

void FUN_00869aec(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 00869af8  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 00869afc  FUN_00869afc =====

void FUN_00869afc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00869b04  FUN_00869b04 =====

void FUN_00869b04(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined1 local_e8;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_009919e8;
  local_e8 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00757d00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 00869b9c to 00869bc3 has its CatchHandler @ 00869d64 */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 00869bc8 to 00869bcf has its CatchHandler @ 00869d7c */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_00991968;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_00869c04:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_00869c04;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 00869c18 to 00869c27 has its CatchHandler @ 00869d60 */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_00869c50:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_00869c50;
      }
                    /* try { // try from 00869c60 to 00869c6f has its CatchHandler @ 00869d6c */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_00869c98:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_00869c98;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar2 == (long *)0x0) goto LAB_00869d04;
    }
    lVar7 = FUN_00757990(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_00869d04:
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_00869d30;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_00869d30:
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00869e18  FUN_00869e18 =====

void FUN_00869e18(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00991968;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00869e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00869e5c  FUN_00869e5c =====

void FUN_00869e5c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00991968;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00869ea8;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00869ea8:
  operator_delete(param_1);
  return;
}


// ===== 00869eb8  FUN_00869eb8 =====

undefined8 * FUN_00869eb8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00991968;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00869f00 to 00869f1b has its CatchHandler @ 00869f2c */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00869f40  FUN_00869f40 =====

void FUN_00869f40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00991968;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00869fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 00869fb4  FUN_00869fb4 =====

void FUN_00869fb4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00869fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00869fec  FUN_00869fec =====

void FUN_00869fec(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0086a02c;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0086a02c:
  operator_delete(param_1);
  return;
}


// ===== 0086a03c  FUN_0086a03c =====

void FUN_0086a03c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0086a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 0086a060  FUN_0086a060 =====

long FUN_0086a060(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e888) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0086a07c  FUN_0086a07c =====

undefined * FUN_0086a07c(void)

{
  return PTR_typeinfo_0099e890;
}


// ===== 0086a088  FUN_0086a088 =====

void FUN_0086a088(void)

{
  return;
}


// ===== 0086a08c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086a090  FUN_0086a090 =====

void FUN_0086a090(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_009919e8;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0086a0c8  FUN_0086a0c8 =====

void FUN_0086a0c8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009919e8;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 0086a0e0  FUN_0086a0e0 =====

void FUN_0086a0e0(void)

{
  return;
}


// ===== 0086a0e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086a0e8  FUN_0086a0e8 =====

void FUN_0086a0e8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00991a68;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 0086a124  FUN_0086a124 =====

long FUN_0086a124(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e898) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0086a140  FUN_0086a140 =====

undefined * FUN_0086a140(void)

{
  return PTR_typeinfo_0099e8a0;
}


// ===== 0086a14c  FUN_0086a14c =====

void FUN_0086a14c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991a68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086a15c  FUN_0086a15c =====

void FUN_0086a15c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991a68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086a18c  FUN_0086a18c =====

void FUN_0086a18c(void)

{
  return;
}


// ===== 0086a190  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086a194  FUN_0086a194 =====

void FUN_0086a194(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991ac8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086a1a4  FUN_0086a1a4 =====

void FUN_0086a1a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991ac8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086a1d4  FUN_0086a1d4 =====

void FUN_0086a1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086a1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086a1e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086a1e4  FUN_0086a1e4 =====

void FUN_0086a1e4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0086a234  FUN_0086a234 =====

void FUN_0086a234(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991b18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086a244  FUN_0086a244 =====

void FUN_0086a244(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991b18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086a274  FUN_0086a274 =====

void FUN_0086a274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086a27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086a280  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086a284  FUN_0086a284 =====

void FUN_0086a284(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0086a33c  facebook::react::concreteComponentDescriptorConstructor<facebook::react::KeyboardToolbarGroupViewComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::KeyboardToolbarGroupViewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::KeyboardToolbarGroupViewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fd0 [2];
  undefined8 *local_fc8;
  void *local_fc0;
  void *pvStack_fb8;
  undefined8 local_fb0;
  void *pvStack_fa8;
  void *local_fa0;
  undefined8 uStack_f98;
  void *local_f90;
  void *pvStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined *local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined4 local_f50 [2];
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined4 local_f28;
  undefined4 local_f20;
  undefined1 local_f1c;
  undefined8 local_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined8 uStack_eeb;
  undefined8 local_ee3;
  undefined6 uStack_edb;
  undefined2 uStack_ed5;
  undefined6 uStack_ed3;
  undefined8 uStack_ecd;
  undefined4 local_ec5;
  undefined8 local_ec1;
  undefined1 local_eb9;
  undefined1 uStack_eb8;
  undefined7 uStack_eb7;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined4 local_d98;
  undefined1 local_d94;
  undefined4 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined1 uStack_d38;
  undefined7 local_d37;
  undefined1 uStack_d30;
  undefined8 uStack_d2f;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined8 uStack_d0c;
  undefined8 local_d04;
  undefined8 uStack_cfc;
  undefined8 uStack_cf4;
  undefined8 uStack_cec;
  undefined8 local_ce4;
  undefined8 uStack_cdc;
  undefined8 uStack_cd4;
  undefined5 uStack_ccc;
  undefined3 local_cc7;
  undefined5 uStack_cc4;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_cac;
  undefined1 local_ca8;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined4 local_c70;
  undefined1 local_c6c;
  undefined4 local_c6b;
  undefined1 local_c67;
  undefined1 local_c66;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined7 uStack_c38;
  undefined4 uStack_c31;
  undefined8 local_c2c;
  undefined1 local_c24;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined1 local_b68;
  undefined1 local_b64;
  undefined1 local_b60;
  undefined1 local_b5c;
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined1 local_b38;
  undefined1 local_b34;
  undefined1 local_b30;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined2 local_af8;
  undefined8 local_af4;
  undefined1 local_aec;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined1 local_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined6 uStack_9d0;
  undefined2 uStack_9ca;
  undefined6 uStack_9c8;
  undefined1 local_9c0;
  undefined1 local_9bc;
  undefined1 local_9b8;
  undefined8 local_9b4;
  undefined8 uStack_9ac;
  undefined1 local_9a4;
  undefined8 local_9a0;
  undefined2 local_998;
  undefined1 local_996;
  undefined4 local_994;
  undefined1 local_990;
  undefined1 local_930;
  undefined1 local_928;
  undefined1 local_8c8;
  undefined4 local_8c0;
  undefined2 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0;
  undefined1 local_89c;
  undefined1 local_898;
  undefined1 local_894;
  undefined4 local_890 [2];
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fa8 = (void *)0x0;
  local_fb0 = 0;
  uStack_f98 = 0;
  local_fa0 = (void *)0x0;
  pvStack_f88 = (void *)0x0;
  local_f90 = (void *)0x0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  pvStack_fb8 = (void *)0x0;
  local_fc0 = (void *)0x0;
                    /* try { // try from 0086a38c to 0086a397 has its CatchHandler @ 0086a9c0 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_fc0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00991c48;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 0086a404 to 0086a40f has its CatchHandler @ 0086a9f0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fd0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fc8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_f50,0,0x6c0);
  puVar5 = PTR_VTT_0099ee40;
  local_890[0] = 5;
  local_878 = 0;
  local_f70 = *(undefined **)(PTR_VTT_0099ee40 + 0x20);
  local_f50[0] = 5;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f68 = 0;
  local_870 = 0;
  uStack_868 = 0x3f800000;
  uStack_880 = 0;
  local_888 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  local_f28 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_890);
  local_f1c = 0;
  local_ec1 = 0;
  uStack_9e0 = _UNK_00488920;
  local_9e8 = _DAT_00488918;
  local_f1b = _s__00375408;
  uStack_ad8 = _UNK_00371598;
  local_ae0 = _DAT_00371590;
  uStack_9f0 = _UNK_00488910;
  local_9f8 = _DAT_00488908;
  local_e04 = 0;
  uStack_a00 = _UNK_00488900;
  local_a08 = _DAT_004888f8;
  uStack_a10 = _UNK_004888f0;
  local_a18 = _DAT_004888e8;
  uStack_9c8 = 0;
  local_dfc = 0;
  uStack_e30 = 0;
  local_e38 = 0;
  uStack_e1c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_9d0 = 0;
  uStack_9ca = 0;
  local_9d8 = 0;
  local_f20 = 0x10410710;
  local_ec5 = 0x40004;
  uStack_e24 = 0;
  uStack_e20 = 0;
  uStack_e2c = 0;
  uStack_e28 = 0;
  uStack_e10 = 0;
  local_e18 = 0;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  local_dc8 = 0x7fc00000;
  local_dc0 = 0x7fc00000;
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  local_d98 = 0x7fc00000;
  local_d90 = 0x7fc00000;
  uStack_d2f = 0;
  uStack_d30 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  uStack_cfc = 0;
  local_d04 = 0;
  uStack_cec = 0;
  uStack_cf4 = 0;
  uStack_cdc = 0;
  local_ce4 = 0;
  uStack_ccc = 0;
  uStack_cd4 = 0;
  local_cc7 = 0;
  uStack_cc4 = 0;
  local_c6c = 1;
  local_c6b = 0;
  local_c66 = 0x23;
  local_c2c = 0x3f800000;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  local_af4 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_a50 = 0;
  uStack_a58 = 0;
  uStack_a40 = 0;
  local_a48 = 0;
  uStack_a30 = 0;
  uStack_a38 = 0;
  uStack_a20 = 0;
  local_a28 = 0;
  uStack_eb7 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edb = 0;
  local_ee3 = 0;
  uStack_ecd = 0;
  uStack_ed5 = 0;
  uStack_ed3 = 0;
  local_eb9 = 0;
  uStack_eb8 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  local_e68 = 0;
  uStack_e70 = 0;
  uStack_e58 = 0;
  uStack_e60 = 0;
  local_e50 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d94 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d78 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_cb4 = 0;
  local_cb0 = 0;
  local_cac = 0;
  local_ca8 = 0;
  local_c90 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  uStack_d60 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  local_d37 = 0;
  uStack_d40 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c67 = 0;
  uStack_c58 = 0;
  local_c60 = 0;
  uStack_c48 = 0;
  uStack_c50 = 0;
  uStack_c38 = 0;
  uStack_c31 = 0;
  local_c40 = 0;
  local_c24 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b64 = 0;
  local_b60 = 0;
  local_b5c = 0;
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_b38 = 0;
  local_b34 = 0;
  local_b30 = 0;
  local_b2c = 0;
  local_ae8 = 0;
  local_af8 = 0;
  local_aec = 0;
  local_ad0 = 0;
  local_9c0 = 0;
  local_9bc = 0;
  local_9b8 = 0;
  local_9a0 = 0;
  uStack_9ac = 0;
  local_9b4 = 0;
  local_9a4 = 0;
  local_998 = 0x101;
  local_996 = 0;
  local_994 = 0;
  local_990 = 0;
  local_930 = 0;
  local_928 = 0;
  local_8c8 = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8a0 = 0;
  local_89c = 0;
  local_898 = 0;
  local_894 = 0;
  local_8bc = 0;
  local_8c0 = 0;
  local_f70 = PTR_vtable_0099ee38 + 0x20;
                    /* try { // try from 0086a7fc to 0086a80f has its CatchHandler @ 0086a9f0 */
  ::facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps
            ((KeyboardToolbarGroupViewProps *)local_890,(PropsParserContext *)local_fd0,
             (KeyboardToolbarGroupViewProps *)&local_f70,(RawProps *)&local_f8);
  FUN_0078917c(local_890,puVar5 + 8);
  FUN_0078917c(&local_f70,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0086a914 to 0086a91f has its CatchHandler @ 0086a9f4 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f70,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00991ba0;
  if (local_f90 != (void *)0x0) {
    pvStack_f88 = local_f90;
    operator_delete(local_f90);
  }
  if (pvStack_fa8 != (void *)0x0) {
    local_fa0 = pvStack_fa8;
    operator_delete(pvStack_fa8);
  }
  if (local_fc0 != (void *)0x0) {
    pvStack_fb8 = local_fc0;
    operator_delete(local_fc0);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086a9f8  FUN_0086a9f8 =====

void FUN_0086a9f8(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0086aa1c  FUN_0086aa1c =====

undefined * FUN_0086aa1c(void)

{
  return PTR_KeyboardToolbarGroupViewComponentName_0099ee30;
}


// ===== 0086aa28  FUN_0086aa28 =====

undefined * FUN_0086aa28(void)

{
  return PTR_KeyboardToolbarGroupViewComponentName_0099ee30;
}


// ===== 0086aa34  FUN_0086aa34 =====

undefined8 FUN_0086aa34(void)

{
  return 0x61;
}


// ===== 0086aa3c  FUN_0086aa3c =====

void FUN_0086aa3c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00991cc0;
                    /* try { // try from 0086aaa8 to 0086aab7 has its CatchHandler @ 0086ab90 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00991d10;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 0086ab44 to 0086ab4f has its CatchHandler @ 0086ab80 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086abc0  FUN_0086abc0 =====

void FUN_0086abc0(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_00991cc0;
                    /* try { // try from 0086ac18 to 0086ac27 has its CatchHandler @ 0086ad68 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00991d10;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0086acac to 0086acbb has its CatchHandler @ 0086ad80 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 0086accc to 0086acdb has its CatchHandler @ 0086ad58 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0086ad18 to 0086ad23 has its CatchHandler @ 0086ad80 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086ada8  FUN_0086ada8 =====

void FUN_0086ada8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0086adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0086adbc  FUN_0086adbc =====

void FUN_0086adbc(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  KeyboardToolbarGroupViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  KeyboardToolbarGroupViewProps *pKVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0086b1f0 to 0086b1f3 has its CatchHandler @ 0086b220 */
      FUN_0086bcfc();
      __cxa_atexit(FUN_0086bcac,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8a8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8a8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8a8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pKVar12 = (KeyboardToolbarGroupViewProps *)*param_4;
    if (pKVar12 == (KeyboardToolbarGroupViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0086b170 to 0086b173 has its CatchHandler @ 0086b238 */
        FUN_0086bcfc();
        __cxa_atexit(FUN_0086bcac,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8a8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
                           );
      }
      pKVar12 = *(KeyboardToolbarGroupViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8a8
      ;
    }
    plVar8 = (long *)operator_new(0x6f8);
    this = (KeyboardToolbarGroupViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00991e28;
                    /* try { // try from 0086ae9c to 0086aeaf has its CatchHandler @ 0086b2ac */
    facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps
              (this,param_3,pKVar12,param_5);
                    /* try { // try from 0086aeb4 to 0086aec7 has its CatchHandler @ 0086b2c4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0086aef0:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0086b1b0 to 0086b1b3 has its CatchHandler @ 0086b224 */
          FUN_0086bcfc();
          __cxa_atexit(FUN_0086bcac,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8a8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8b0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0086af58 to 0086af6b has its CatchHandler @ 0086b250 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8a8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0086afa4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0086afa4;
        }
        if (plVar8 != (long *)0x0) goto LAB_0086afb8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0086af0c to 0086af1f has its CatchHandler @ 0086b278 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0086afb8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0086afb8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0086aed4 to 0086aedf has its CatchHandler @ 0086b24c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_KeyboardToolbarGroupViewComponentName_0099ee30,pcVar9);
      if (iVar6 != 0) goto LAB_0086aef0;
      bVar3 = false;
    }
                    /* try { // try from 0086afe4 to 0086afe7 has its CatchHandler @ 0086b2c4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0086aff4 to 0086b00f has its CatchHandler @ 0086b274 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0086b150 to 0086b15f has its CatchHandler @ 0086b26c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0086b310;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0086b130 to 0086b13f has its CatchHandler @ 0086b2d0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0086b310;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 0086b090 to 0086b09b has its CatchHandler @ 0086b2d8 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0086b0a0 to 0086b0b7 has its CatchHandler @ 0086b2dc */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0086b0c8 to 0086b0d3 has its CatchHandler @ 0086b2cc */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0086b310:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086b314  FUN_0086b314 =====

/* WARNING: Removing unreachable block (ram,0x0086b40c) */
/* WARNING: Removing unreachable block (ram,0x0086b41c) */
/* WARNING: Removing unreachable block (ram,0x0086b440) */
/* WARNING: Removing unreachable block (ram,0x0086b450) */

void FUN_0086b314(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00992020;
                    /* try { // try from 0086b368 to 0086b36f has its CatchHandler @ 0086b4cc */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00991e78;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 0086b3ac to 0086b3bb has its CatchHandler @ 0086b494 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00991ec8;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086b4f4  FUN_0086b4f4 =====

/* WARNING: Removing unreachable block (ram,0x0086b5c8) */
/* WARNING: Removing unreachable block (ram,0x0086b5d8) */
/* WARNING: Removing unreachable block (ram,0x0086b62c) */
/* WARNING: Removing unreachable block (ram,0x0086b63c) */

void FUN_0086b4f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 0086b538 to 0086b543 has its CatchHandler @ 0086b6b4 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 0086b548 to 0086b54f has its CatchHandler @ 0086b6a4 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00992080;
                    /* try { // try from 0086b574 to 0086b583 has its CatchHandler @ 0086b67c */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00991ec8;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086b6dc  FUN_0086b6dc =====

void FUN_0086b6dc(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 0086b724 to 0086b72b has its CatchHandler @ 0086ba10 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_009920d0;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0086b768 to 0086b777 has its CatchHandler @ 0086b9e4 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0086b788 to 0086b78f has its CatchHandler @ 0086b9d4 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_00992120;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0086b840 to 0086b847 has its CatchHandler @ 0086b9c4 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0086b894 to 0086b8ab has its CatchHandler @ 0086b994 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 0086b900 to 0086b90b has its CatchHandler @ 0086b974 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086ba38  FUN_0086ba38 =====

void FUN_0086ba38(void)

{
  return;
}


// ===== 0086ba3c  FUN_0086ba3c =====

void FUN_0086ba3c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0086ba60  FUN_0086ba60 =====

void FUN_0086ba60(void)

{
  return;
}


// ===== 0086ba64  FUN_0086ba64 =====

void FUN_0086ba64(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0086bab4  FUN_0086bab4 =====

void FUN_0086bab4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991cc0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086bac4  FUN_0086bac4 =====

void FUN_0086bac4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991cc0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086baf4  FUN_0086baf4 =====

void FUN_0086baf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086bb00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086bb04  FUN_0086bb04 =====

void FUN_0086bb04(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086bbc4  FUN_0086bbc4 =====

void FUN_0086bbc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086bc2c  FUN_0086bc2c =====

bool FUN_0086bc2c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0086bc44  FUN_0086bc44 =====

bool FUN_0086bc44(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0086bc5c  FUN_0086bc5c =====

void FUN_0086bc5c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0086bcac  FUN_0086bcac =====

void FUN_0086bcac(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0086bcfc  FUN_0086bcfc =====

void FUN_0086bcfc(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00991dd8;
  memset(__s,0,0x6e0);
                    /* try { // try from 0086bd38 to 0086bd4b has its CatchHandler @ 0086bdb8 */
  FUN_00788b10(__s,PTR_VTT_0099ee40 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  puVar1 = PTR_vtable_0099ee38;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37KeyboardToolbarGroupViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29KeyboardToolbarGroupViewPropsENS0_36KeyboardToolbarGroupViewEventEmitterENS0_29KeyboardToolbarGroupViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8a8
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0086bdd4  FUN_0086bdd4 =====

void FUN_0086bdd4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991dd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086bde4  FUN_0086bde4 =====

void FUN_0086bde4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991dd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086be14  FUN_0086be14 =====

void FUN_0086be14(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee40 + 8);
  return;
}


// ===== 0086be28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086be2c  FUN_0086be2c =====

void FUN_0086be2c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991e28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086be3c  FUN_0086be3c =====

void FUN_0086be3c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991e28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086be6c  FUN_0086be6c =====

void FUN_0086be6c(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee40 + 8);
  return;
}


// ===== 0086be80  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086be84  FUN_0086be84 =====

void FUN_0086be84(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0086bed4  FUN_0086bed4 =====

void FUN_0086bed4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991e78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086bee4  FUN_0086bee4 =====

void FUN_0086bee4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00991e78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086bf14  FUN_0086bf14 =====

void FUN_0086bf14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086bf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086bf20  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086bf24  FUN_0086bf24 =====

void FUN_0086bf24(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0086bf8c  FUN_0086bf8c =====

void FUN_0086bf8c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 0086bf98  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 0086bf9c  FUN_0086bf9c =====

void FUN_0086bf9c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0086bfa4  FUN_0086bfa4 =====

void FUN_0086bfa4(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined1 local_e8;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_00991fa0;
  local_e8 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00757d00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 0086c03c to 0086c063 has its CatchHandler @ 0086c204 */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 0086c068 to 0086c06f has its CatchHandler @ 0086c21c */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_00991f20;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_0086c0a4:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_0086c0a4;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 0086c0b8 to 0086c0c7 has its CatchHandler @ 0086c200 */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_0086c0f0:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_0086c0f0;
      }
                    /* try { // try from 0086c100 to 0086c10f has its CatchHandler @ 0086c20c */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_0086c138:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_0086c138;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar2 == (long *)0x0) goto LAB_0086c1a4;
    }
    lVar7 = FUN_00757990(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_0086c1a4:
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_0086c1d0;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_0086c1d0:
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086c2b8  FUN_0086c2b8 =====

void FUN_0086c2b8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00991f20;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0086c2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0086c2fc  FUN_0086c2fc =====

void FUN_0086c2fc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00991f20;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0086c348;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0086c348:
  operator_delete(param_1);
  return;
}


// ===== 0086c358  FUN_0086c358 =====

undefined8 * FUN_0086c358(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00991f20;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0086c3a0 to 0086c3bb has its CatchHandler @ 0086c3cc */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 0086c3e0  FUN_0086c3e0 =====

void FUN_0086c3e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00991f20;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0086c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 0086c454  FUN_0086c454 =====

void FUN_0086c454(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0086c484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0086c48c  FUN_0086c48c =====

void FUN_0086c48c(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0086c4cc;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0086c4cc:
  operator_delete(param_1);
  return;
}


// ===== 0086c4dc  FUN_0086c4dc =====

void FUN_0086c4dc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0086c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 0086c500  FUN_0086c500 =====

long FUN_0086c500(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e8b8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0086c51c  FUN_0086c51c =====

undefined * FUN_0086c51c(void)

{
  return PTR_typeinfo_0099e8c0;
}


// ===== 0086c528  FUN_0086c528 =====

void FUN_0086c528(void)

{
  return;
}


// ===== 0086c52c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


