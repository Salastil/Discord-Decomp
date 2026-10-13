// ===== 0032ec50  margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromURL =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromURL(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromURL(basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  _jobject *p_Var5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  byte *in_x1;
  undefined8 *in_x8;
  byte *pbVar13;
  _jmethodID *p_Var14;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d888 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d888), iVar4 != 0)) {
                    /* try { // try from 0032eea0 to 0032eeb7 has its CatchHandler @ 0032ef78 */
    FUN_00330560(&local_90);
    DAT_0039d880 = FUN_00331c28(&local_90,"loadFontFromURL");
    __cxa_guard_release(&DAT_0039d888);
  }
  pbVar13 = *(byte **)(in_x1 + 0x10);
  p_Var14 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar13 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar13);
  ppuVar8 = local_90;
                    /* try { // try from 0032ecb4 to 0032ecd3 has its CatchHandler @ 0032f044 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var14,DAT_0039d880,ppuVar8);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 0032ece0 to 0032ecf3 has its CatchHandler @ 0032f028 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 0032ecf4 to 0032ecfb has its CatchHandler @ 0032f01c */
  ppuVar8 = (undefined **)operator_new(0x70);
  *in_x8 = ppuVar8;
  ppuVar8[3] = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  ppuVar8[5] = (undefined *)0x0;
  ppuVar8[4] = (undefined *)0x0;
  ppuVar8[7] = (undefined *)0x0;
  ppuVar8[6] = (undefined *)0x0;
  ppuVar8[9] = (undefined *)0x0;
  ppuVar8[8] = (undefined *)0x0;
  ppuVar8[0xb] = (undefined *)0x0;
  ppuVar8[10] = (undefined *)0x0;
  ppuVar8[0xd] = (undefined *)0x0;
  ppuVar8[0xc] = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  *ppuVar8 = (undefined *)0x0;
  local_90 = ppuVar8;
                    /* try { // try from 0032ed1c to 0032ed23 has its CatchHandler @ 0032f00c */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_00388860;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0032eef0 to 0032eef3 has its CatchHandler @ 0032ef5c */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0032ed4c to 0032ed5f has its CatchHandler @ 0032f02c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_003888d8;
                    /* try { // try from 0032ed94 to 0032ed9b has its CatchHandler @ 0032efcc */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
LAB_0032edbc:
    (*(code *)(*pppuVar12)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar12 = local_70;
    goto LAB_0032edbc;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0032ef38 to 0032ef3b has its CatchHandler @ 0032ef58 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0032edd0 to 0032eddf has its CatchHandler @ 0032f02c */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00388958;
                    /* try { // try from 0032ee14 to 0032ee1b has its CatchHandler @ 0032ef8c */
  uStack_88 = uVar10;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0032ee48;
    lVar6 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar6])();
LAB_0032ee48:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0032ee50 to 0032ee63 has its CatchHandler @ 0032f024 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f06c  margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromResource =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromResource(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromResource(basic_string *param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  byte *in_x1;
  long *in_x8;
  byte *pbVar7;
  _jmethodID *p_Var8;
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d898 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d898), iVar2 != 0)) {
                    /* try { // try from 0032f17c to 0032f193 has its CatchHandler @ 0032f1ac */
    FUN_00330560(&local_50);
    DAT_0039d890 = FUN_00331b28(&local_50,"loadFontFromResource");
    __cxa_guard_release(&DAT_0039d898);
  }
  pbVar7 = *(byte **)(in_x1 + 0x10);
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar7 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar7);
  plVar6 = local_50;
                    /* try { // try from 0032f0c8 to 0032f0e7 has its CatchHandler @ 0032f1d8 */
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var8,DAT_0039d890,plVar6);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar6 = local_50;
  local_40 = lVar4;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 0032f0f4 to 0032f107 has its CatchHandler @ 0032f1d4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,plVar6);
  }
                    /* try { // try from 0032f108 to 0032f113 has its CatchHandler @ 0032f1c0 */
  JHybridFallbackFontSpec::JavaPart::getJHybridFallbackFontSpec((JavaPart *)&local_40);
  lVar4 = local_40;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0x38));
  }
  *in_x8 = (long)local_50;
  in_x8[1] = local_48;
  if (local_40 != 0) {
                    /* try { // try from 0032f134 to 0032f147 has its CatchHandler @ 0032f1d0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f200  margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromBytes =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromBytes(std::__ndk1::shared_ptr<margelo::nitro::ArrayBuffer>
   const&) */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromBytes(shared_ptr *param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *in_x8;
  _jmethodID *p_Var7;
  long *local_58;
  long local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d8a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d8a8), iVar2 != 0)) {
                    /* try { // try from 0032f308 to 0032f317 has its CatchHandler @ 0032f330 */
    FUN_00330560(&local_58);
    DAT_0039d8a0 = FUN_00331bac(&local_58);
    __cxa_guard_release(&DAT_0039d8a8);
  }
  p_Var7 = *(_jmethodID **)(param_1 + 8);
  FUN_00328c88(&local_58);
  plVar6 = local_58;
  local_48 = local_58;
                    /* try { // try from 0032f254 to 0032f273 has its CatchHandler @ 0032f35c */
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var7,DAT_0039d8a0,plVar6);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 0032f27c to 0032f28f has its CatchHandler @ 0032f358 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,plVar6);
  }
                    /* try { // try from 0032f290 to 0032f29b has its CatchHandler @ 0032f344 */
  JHybridFallbackFontSpec::JavaPart::getJHybridFallbackFontSpec((JavaPart *)&local_40);
  lVar4 = local_40;
  if (local_58 != (long *)0x0) {
    local_58 = (long *)((long)local_58 + *(long *)(*local_58 + -0x38));
  }
  *in_x8 = (long)local_58;
  in_x8[1] = local_50;
  if (local_40 != 0) {
                    /* try { // try from 0032f2c0 to 0032f2d3 has its CatchHandler @ 0032f354 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f384  margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontByName =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontByName(basic_string *param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  byte *in_x1;
  long *in_x8;
  byte *pbVar7;
  _jmethodID *p_Var8;
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d8b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d8b8), iVar2 != 0)) {
                    /* try { // try from 0032f494 to 0032f4ab has its CatchHandler @ 0032f4c4 */
    FUN_00330560(&local_50);
    DAT_0039d8b0 = FUN_00331b28(&local_50,"loadFontByName");
    __cxa_guard_release(&DAT_0039d8b8);
  }
  pbVar7 = *(byte **)(in_x1 + 0x10);
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar7 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar7);
  plVar6 = local_50;
                    /* try { // try from 0032f3e0 to 0032f3ff has its CatchHandler @ 0032f4f0 */
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var8,DAT_0039d8b0,plVar6);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar6 = local_50;
  local_40 = lVar4;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 0032f40c to 0032f41f has its CatchHandler @ 0032f4ec */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,plVar6);
  }
                    /* try { // try from 0032f420 to 0032f42b has its CatchHandler @ 0032f4d8 */
  JHybridFallbackFontSpec::JavaPart::getJHybridFallbackFontSpec((JavaPart *)&local_40);
  lVar4 = local_40;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0x38));
  }
  *in_x8 = (long)local_50;
  in_x8[1] = local_48;
  if (local_40 != 0) {
                    /* try { // try from 0032f44c to 0032f45f has its CatchHandler @ 0032f4e8 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f518  margelo::nitro::rive::JHybridRiveFontConfigSpec::getSystemDefaultFont =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::getSystemDefaultFont() */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::getSystemDefaultFont(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  long *in_x8;
  _jmethodID *p_Var6;
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d8c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d8c8), iVar2 != 0)) {
                    /* try { // try from 0032f5e8 to 0032f5f7 has its CatchHandler @ 0032f60c */
    FUN_00330560(&local_50);
    DAT_0039d8c0 = FUN_00331a3c(&local_50);
    __cxa_guard_release(&DAT_0039d8c8);
  }
  p_Var6 = *(_jmethodID **)(in_x0 + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039d8c0);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0032f574 to 0032f57f has its CatchHandler @ 0032f620 */
  local_40 = lVar4;
  JHybridFallbackFontSpec::JavaPart::getJHybridFallbackFontSpec((JavaPart *)&local_40);
  lVar4 = local_40;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0x38));
  }
  *in_x8 = (long)local_50;
  in_x8[1] = local_48;
  if (local_40 != 0) {
                    /* try { // try from 0032f5a0 to 0032f5b3 has its CatchHandler @ 0032f648 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f64c  margelo::nitro::rive::JHybridRiveFontConfigSpec::setFontsForWeight =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::setFontsForWeight(double,
   std::__ndk1::vector<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridFallbackFontSpec>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridFallbackFontSpec> > >
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::setFontsForWeight
          (JHybridRiveFontConfigSpec *this,double param_1,vector *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  _jobject *p_Var9;
  long lVar10;
  _jmethodID *p_Var11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d8d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d8d8), iVar4 != 0)) {
                    /* try { // try from 0032f870 to 0032f87f has its CatchHandler @ 0032f8dc */
    FUN_00330560(&local_80);
    DAT_0039d8d0 = FUN_003318e0(&local_80);
    __cxa_guard_release(&DAT_0039d8d8);
  }
  lVar15 = *(long *)param_2;
  lVar7 = *(long *)(param_2 + 8);
  p_Var11 = *(_jmethodID **)(this + 8);
  if (((*PTR_elementClass_003962a0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_elementClass_003962a0), iVar4 != 0)) {
                    /* try { // try from 0032f8a8 to 0032f8bb has its CatchHandler @ 0032f8cc */
    facebook::jni::findClassStatic(PTR_kBaseName_00396250);
    __cxa_guard_release(PTR_elementClass_003962a0);
  }
  uVar13 = lVar7 - lVar15;
  plVar5 = (long *)facebook::jni::Environment::current();
  lVar6 = (**(code **)(*plVar5 + 0x560))
                    (plVar5,uVar13 >> 4 & 0xffffffff,*(undefined8 *)PTR_elementClass_00396298,0);
  facebook::jni::throwCppExceptionIf(lVar6 == 0);
  puVar3 = PTR_typeinfo_00396238;
  puVar2 = PTR_typeinfo_00394c18;
  if (lVar7 != lVar15) {
    uVar13 = (long)uVar13 >> 4;
    lVar15 = 0;
    uVar12 = 0;
    if (uVar13 < 2) {
      uVar13 = 1;
    }
    do {
      lVar10 = *(long *)param_2;
      lVar7 = __dynamic_cast(*(undefined8 *)(lVar10 + lVar15),puVar2,puVar3,0xffffffffffffffff);
      plVar5 = (long *)((undefined8 *)(lVar10 + lVar15))[1];
      if (plVar5 != (long *)0x0) {
        FUN_00259a00(1,plVar5 + 1);
      }
      uVar14 = *(undefined8 *)(lVar7 + 8);
                    /* try { // try from 0032f768 to 0032f783 has its CatchHandler @ 0032f910 */
      plVar8 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar8 + 0xa8))(plVar8,uVar14);
      facebook::jni::throwPendingJniExceptionAsCppException();
      local_80 = lVar7;
      if ((plVar5 != (long *)0x0) &&
         (lVar7 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar7 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      lVar7 = local_80;
                    /* try { // try from 0032f7b8 to 0032f7d7 has its CatchHandler @ 0032f900 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0x570))(plVar5,lVar6,uVar12 & 0xffffffff,lVar7);
      if (lVar7 != 0) {
                    /* try { // try from 0032f7dc to 0032f7ef has its CatchHandler @ 0032f8fc */
        plVar5 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar5 + 0xb0))(plVar5,lVar7);
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x10;
    } while (uVar13 != uVar12);
  }
                    /* try { // try from 0032f7f4 to 0032f813 has its CatchHandler @ 0032f8f4 */
  p_Var9 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var9,p_Var11,param_1,DAT_0039d8d0,lVar6);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar6 != 0) {
                    /* try { // try from 0032f818 to 0032f82b has its CatchHandler @ 0032f8f0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032f940  margelo::nitro::rive::JHybridRiveFontConfigSpec::applyFallbackFonts =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::applyFallbackFonts() */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::applyFallbackFonts(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined8 *in_x8;
  _jmethodID *p_Var11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d8e8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d8e8), iVar4 != 0)) {
                    /* try { // try from 0032fb10 to 0032fb27 has its CatchHandler @ 0032fbe4 */
    FUN_00330560(&local_90);
    DAT_0039d8e0 = FUN_0031e0a0(&local_90,"applyFallbackFonts");
    __cxa_guard_release(&DAT_0039d8e8);
  }
  p_Var11 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var11,DAT_0039d8e0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0032f9a4 to 0032f9ab has its CatchHandler @ 0032fc78 */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0032fb5c to 0032fb5f has its CatchHandler @ 0032fbc8 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0032f9bc to 0032f9cf has its CatchHandler @ 0032fc84 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00388a38;
                    /* try { // try from 0032fa04 to 0032fa0b has its CatchHandler @ 0032fc38 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
LAB_0032fa2c:
    (*(code *)(*pppuVar9)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar9 = local_70;
    goto LAB_0032fa2c;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0032fba4 to 0032fba7 has its CatchHandler @ 0032fbc4 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0032fa40 to 0032fa4f has its CatchHandler @ 0032fc84 */
  uVar8 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar7 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00388ab8;
                    /* try { // try from 0032fa84 to 0032fa8b has its CatchHandler @ 0032fbf8 */
  uStack_88 = uVar7;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar8,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0032fab8;
    lVar6 = 5;
    pppuVar9 = local_70;
  }
  (*(code *)(*pppuVar9)[lVar6])();
LAB_0032fab8:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0032fac0 to 0032fad3 has its CatchHandler @ 0032fc80 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032fcb4  margelo::nitro::rive::JHybridRiveFontConfigSpec::clearFallbackFonts =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::clearFallbackFonts() */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::clearFallbackFonts(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined8 *in_x8;
  _jmethodID *p_Var11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d8f8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d8f8), iVar4 != 0)) {
                    /* try { // try from 0032fe84 to 0032fe9b has its CatchHandler @ 0032ff58 */
    FUN_00330560(&local_90);
    DAT_0039d8f0 = FUN_0031e0a0(&local_90,"clearFallbackFonts");
    __cxa_guard_release(&DAT_0039d8f8);
  }
  p_Var11 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var11,DAT_0039d8f0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0032fd18 to 0032fd1f has its CatchHandler @ 0032ffec */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0032fed0 to 0032fed3 has its CatchHandler @ 0032ff3c */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0032fd30 to 0032fd43 has its CatchHandler @ 0032fff8 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00388b38;
                    /* try { // try from 0032fd78 to 0032fd7f has its CatchHandler @ 0032ffac */
  local_70 = &local_90;
  FUN_0031e2bc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
LAB_0032fda0:
    (*(code *)(*pppuVar9)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar9 = local_70;
    goto LAB_0032fda0;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0032ff18 to 0032ff1b has its CatchHandler @ 0032ff38 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0032fdb4 to 0032fdc3 has its CatchHandler @ 0032fff8 */
  uVar8 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar7 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00388bb8;
                    /* try { // try from 0032fdf8 to 0032fdff has its CatchHandler @ 0032ff6c */
  uStack_88 = uVar7;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar8,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0032fe2c;
    lVar6 = 5;
    pppuVar9 = local_70;
  }
  (*(code *)(*pppuVar9)[lVar6])();
LAB_0032fe2c:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0032fe34 to 0032fe47 has its CatchHandler @ 0032fff4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330028  FUN_00330028 =====

void FUN_00330028(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00330238(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003300a8  FUN_003300a8 =====

void FUN_003300a8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00330238(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330130  FUN_00330130 =====

void FUN_00330130(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00330238(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003301b0  FUN_003301b0 =====

void FUN_003301b0(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00330238(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330238  FUN_00330238 =====

void FUN_00330238(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  puVar2 = PTR_vtable_00396268;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396268 + 0x128);
  param_1[0xe] = (long)(puVar2 + 0x1b0);
  *param_1 = (long)(puVar2 + 0x80);
  local_70 = &PTR_FUN_00388c38;
  plStack_68 = param_1;
                    /* try { // try from 00330290 to 00330297 has its CatchHandler @ 0033030c */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_003302c4;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_003302c4:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 003302cc to 003302df has its CatchHandler @ 00330310 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330314  FUN_00330314 =====

void FUN_00330314(void *param_1)

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


// ===== 0033034c  FUN_0033034c =====

void FUN_0033034c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00388c38;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003303a8  FUN_003303a8 =====

void FUN_003303a8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00388c38;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003303f0  FUN_003303f0 =====

void FUN_003303f0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330428  FUN_00330428 =====

void FUN_00330428(void *param_1)

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


// ===== 00330460  FUN_00330460 =====

void FUN_00330460(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar5 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 0033048c to 0033049f has its CatchHandler @ 003304cc */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003304d0  FUN_003304d0 =====

void FUN_003304d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003962a8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00330520  FUN_00330520 =====

undefined * FUN_00330520(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003962b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330560  FUN_00330560 =====

void FUN_00330560(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003962d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003962d8), iVar2 != 0))
  {
                    /* try { // try from 003305d0 to 003305e3 has its CatchHandler @ 003305f4 */
    facebook::jni::findClassStatic(PTR_kBaseName_003962e0);
    __cxa_guard_release(PTR_cls_003962d8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003962d0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330620  FUN_00330620 =====

void FUN_00330620(long *param_1)

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


// ===== 003306ac  FUN_003306ac =====

void FUN_003306ac(long *param_1)

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


// ===== 00330738  FUN_00330738 =====

void FUN_00330738(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388bb8;
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


// ===== 003307d0  FUN_003307d0 =====

void FUN_003307d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388bb8;
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


// ===== 0033085c  FUN_0033085c =====

void FUN_0033085c(long param_1)

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
  *puVar4 = &PTR_FUN_00388bb8;
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


// ===== 003308d4  FUN_003308d4 =====

void FUN_003308d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00388bb8;
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


// ===== 00330938  FUN_00330938 =====

void FUN_00330938(long param_1)

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


// ===== 003309c4  FUN_003309c4 =====

void FUN_003309c4(void *param_1)

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


// ===== 00330a44  FUN_00330a44 =====

void FUN_00330a44(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 00330a7c to 00330a87 has its CatchHandler @ 00330af0 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00330a94 to 00330a9f has its CatchHandler @ 00330ad8 */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330b18  FUN_00330b18 =====

void FUN_00330b18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive25JHybridRiveFontConfigSpec18clearFallbackFontsEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00330b68  FUN_00330b68 =====

pointer_____offset_0x10___ * FUN_00330b68(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00388c18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330ba8  FUN_00330ba8 =====

void FUN_00330ba8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388b38;
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


// ===== 00330c40  FUN_00330c40 =====

void FUN_00330c40(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388b38;
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


// ===== 00330ccc  FUN_00330ccc =====

void FUN_00330ccc(long param_1)

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
  *puVar4 = &PTR_FUN_00388b38;
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


// ===== 00330d44  FUN_00330d44 =====

void FUN_00330d44(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00388b38;
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


// ===== 00330da8  FUN_00330da8 =====

void FUN_00330da8(long param_1)

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


// ===== 00330e34  FUN_00330e34 =====

void FUN_00330e34(void *param_1)

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


// ===== 00330eb4  FUN_00330eb4 =====

void FUN_00330eb4(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 00330ef0  FUN_00330ef0 =====

void FUN_00330ef0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive25JHybridRiveFontConfigSpec18clearFallbackFontsEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00330f40  FUN_00330f40 =====

pointer_____offset_0x10___ * FUN_00330f40(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00388b98;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00330f80  FUN_00330f80 =====

void FUN_00330f80(long *param_1)

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


// ===== 0033100c  FUN_0033100c =====

void FUN_0033100c(long *param_1)

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


// ===== 00331098  FUN_00331098 =====

void FUN_00331098(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388ab8;
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


// ===== 00331130  FUN_00331130 =====

void FUN_00331130(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388ab8;
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


// ===== 003311bc  FUN_003311bc =====

void FUN_003311bc(long param_1)

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
  *puVar4 = &PTR_FUN_00388ab8;
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


// ===== 00331234  FUN_00331234 =====

void FUN_00331234(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00388ab8;
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


// ===== 00331298  FUN_00331298 =====

void FUN_00331298(long param_1)

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


// ===== 00331324  FUN_00331324 =====

void FUN_00331324(void *param_1)

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


// ===== 003313a4  FUN_003313a4 =====

void FUN_003313a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 003313dc to 003313e7 has its CatchHandler @ 00331450 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 003313f4 to 003313ff has its CatchHandler @ 00331438 */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331478  FUN_00331478 =====

void FUN_00331478(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive25JHybridRiveFontConfigSpec18applyFallbackFontsEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003314c8  FUN_003314c8 =====

pointer_____offset_0x10___ * FUN_003314c8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00388b18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331508  FUN_00331508 =====

void FUN_00331508(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388a38;
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


// ===== 003315a0  FUN_003315a0 =====

void FUN_003315a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388a38;
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


// ===== 0033162c  FUN_0033162c =====

void FUN_0033162c(long param_1)

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
  *puVar4 = &PTR_FUN_00388a38;
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


// ===== 003316a4  FUN_003316a4 =====

void FUN_003316a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00388a38;
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


// ===== 00331708  FUN_00331708 =====

void FUN_00331708(long param_1)

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


// ===== 00331794  FUN_00331794 =====

void FUN_00331794(void *param_1)

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


// ===== 00331814  FUN_00331814 =====

void FUN_00331814(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 00331850  FUN_00331850 =====

void FUN_00331850(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive25JHybridRiveFontConfigSpec18applyFallbackFontsEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003318a0  FUN_003318a0 =====

pointer_____offset_0x10___ * FUN_003318a0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00388a98;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003318e0  FUN_003318e0 =====

long FUN_003318e0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"setFontsForWeight",PTR_kDescriptor_00396308);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033195c  FUN_0033195c =====

void FUN_0033195c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00331988 to 0033199b has its CatchHandler @ 003319c8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003319cc  FUN_003319cc =====

void FUN_003319cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003319f8 to 00331a0b has its CatchHandler @ 00331a38 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331a3c  FUN_00331a3c =====

long FUN_00331a3c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"getSystemDefaultFont",PTR_kDescriptor_00396300);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331ab8  FUN_00331ab8 =====

void FUN_00331ab8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00331ae4 to 00331af7 has its CatchHandler @ 00331b24 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331b28  FUN_00331b28 =====

long FUN_00331b28(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_003962f0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331bac  FUN_00331bac =====

long FUN_00331bac(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"loadFontFromBytes",PTR_kDescriptor_003962f8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331c28  FUN_00331c28 =====

long FUN_00331c28(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_003962e8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331cac  FUN_00331cac =====

void FUN_00331cac(undefined8 *param_1)

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
    FUN_00332de8(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331d24  FUN_00331d24 =====

void FUN_00331d24(long *param_1)

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


// ===== 00331db0  FUN_00331db0 =====

void FUN_00331db0(long *param_1)

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


// ===== 00331e3c  FUN_00331e3c =====

void FUN_00331e3c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388958;
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


// ===== 00331ed4  FUN_00331ed4 =====

void FUN_00331ed4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00388958;
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


// ===== 00331f60  FUN_00331f60 =====

void FUN_00331f60(long param_1)

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
  *puVar4 = &PTR_FUN_00388958;
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


// ===== 00331fd8  FUN_00331fd8 =====

void FUN_00331fd8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00388958;
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


// ===== 0033203c  FUN_0033203c =====

void FUN_0033203c(long param_1)

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


// ===== 003320c8  FUN_003320c8 =====

void FUN_003320c8(void *param_1)

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


// ===== 00332148  FUN_00332148 =====

void FUN_00332148(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00332180 to 0033218b has its CatchHandler @ 003321f4 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00332198 to 003321a3 has its CatchHandler @ 003321dc */
  FUN_003322ac(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033221c  FUN_0033221c =====

void FUN_0033221c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive25JHybridRiveFontConfigSpec15loadFontFromURLERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0033226c  FUN_0033226c =====

pointer_____offset_0x10___ * FUN_0033226c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003889b8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003322ac  FUN_003322ac =====

void FUN_003322ac(exception_ptr *param_1,exception_ptr *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error *this;
  long lVar6;
  long *plVar7;
  undefined1 auStack_90 [24];
  basic_string abStack_78 [24];
  undefined8 local_60 [3];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)param_2;
  local_60[0] = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)local_60);
  if (lVar6 == 0) {
    FUN_00264e5c(local_60,PTR_typeinfo_name_00394c88,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0033245c to 0033246f has its CatchHandler @ 00332538 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 00332470 to 00332483 has its CatchHandler @ 00332520 */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 00332488 to 003324bf has its CatchHandler @ 003324ec */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0033256c;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 == 0xffffffff) {
LAB_00332330:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 00332324 to 0033232f has its CatchHandler @ 003324d4 */
      (*(code *)(&PTR_FUN_003888b0)[uVar2])(local_60,param_1);
      goto LAB_00332330;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  for (lVar6 = *(long *)(param_1 + 0x30); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 003324d0 to 003324d3 has its CatchHandler @ 003324dc */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00332324 with catch @ 003324d4
                        */
        FUN_0025ad9c();
      }
      goto LAB_0033256c;
    }
                    /* try { // try from 00332368 to 0033236f has its CatchHandler @ 003324d8 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 0x20);
LAB_00332398:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x003323b0;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_0033238c;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  plVar5 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x20) = plVar4;
joined_r0x003323c8:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x00332430;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_00332408;
  }
  *(long **)(param_1 + 0x38) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0033256c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x003323b0:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_0033238c:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_00332398;
code_r0x00332430:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_00332408:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x003323c8;
}


// ===== 00332570  FUN_00332570 =====

void FUN_00332570(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003325a8  FUN_003325a8 =====

void FUN_003325a8(undefined8 param_1,long param_2)

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


// ===== 00332634  FUN_00332634 =====

void FUN_00332634(undefined8 param_1,exception_ptr *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::exception_ptr::~exception_ptr(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00332670  FUN_00332670 =====

void FUN_00332670(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003888d8;
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


// ===== 00332708  FUN_00332708 =====

void FUN_00332708(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003888d8;
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


// ===== 00332794  FUN_00332794 =====

void FUN_00332794(long param_1)

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
  *puVar4 = &PTR_FUN_003888d8;
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


// ===== 0033280c  FUN_0033280c =====

void FUN_0033280c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003888d8;
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


// ===== 00332870  FUN_00332870 =====

void FUN_00332870(long param_1)

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


// ===== 003328fc  FUN_003328fc =====

void FUN_003328fc(void *param_1)

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


// ===== 0033297c  FUN_0033297c =====

/* WARNING: Removing unreachable block (ram,0x00332b0c) */
/* WARNING: Removing unreachable block (ram,0x00332b1c) */

void FUN_0033297c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *local_58;
  long local_50;
  undefined1 uStack_41;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_40 = *param_2;
  plVar7 = *(long **)(param_1 + 8);
  margelo::nitro::rive::JHybridFallbackFontSpec::JavaPart::getJHybridFallbackFontSpec
            ((JavaPart *)&local_40);
  if (local_58 != (long *)0x0) {
    local_58 = (long *)((long)local_58 + *(long *)(*local_58 + -0x38));
  }
                    /* try { // try from 003329e0 to 003329e7 has its CatchHandler @ 00332bc0 */
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(plVar7 + 2);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 1) {
      plVar8 = (long *)plVar7[1];
      plVar7[1] = local_50;
      *plVar7 = (long)local_58;
      if ((plVar8 != (long *)0x0) &&
         (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      goto LAB_00332a60;
    }
                    /* try { // try from 00332a44 to 00332a4f has its CatchHandler @ 00332bbc */
    (*(code *)(&PTR_FUN_003888b0)[uVar2])(&uStack_41,plVar7);
  }
  *(undefined4 *)(plVar7 + 2) = 1;
  plVar7[1] = local_50;
  *plVar7 = (long)local_58;
LAB_00332a60:
  plVar8 = (long *)plVar7[3];
  plVar1 = (long *)plVar7[4];
  if (plVar8 != plVar1) {
    do {
      if ((int)plVar7[2] != 1) {
LAB_00332ba8:
        if (*(long *)(lVar3 + 0x28) == local_38) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00332a44 with catch @ 00332bbc
                        */
          FUN_0025ad9c();
        }
        goto LAB_00332c0c;
      }
      plVar5 = (long *)plVar8[4];
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00332ba4 to 00332bbb has its CatchHandler @ 00332bcc */
          FUN_0025cd00();
          goto LAB_00332ba8;
        }
        goto LAB_00332c0c;
      }
                    /* try { // try from 00332a88 to 00332a8f has its CatchHandler @ 00332bc8 */
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar7);
      plVar8 = plVar8 + 6;
    } while (plVar8 != plVar1);
    plVar1 = (long *)plVar7[3];
    plVar5 = (long *)plVar7[4];
    plVar8 = plVar5;
joined_r0x00332aa4:
    if (plVar5 != plVar1) {
      plVar6 = (long *)plVar5[-2];
      plVar5 = plVar5 + -6;
      plVar8 = plVar1;
      if (plVar5 != plVar6) goto code_r0x00332ad8;
      lVar4 = 4;
      plVar6 = plVar5;
      goto LAB_00332ab4;
    }
  }
  plVar1 = (long *)plVar7[6];
  plVar5 = (long *)plVar7[7];
  plVar7[4] = (long)plVar8;
joined_r0x00332af4:
  if (plVar5 == plVar1) {
    plVar7[7] = (long)plVar1;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
LAB_00332c0c:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar8 = (long *)plVar5[-2];
  plVar5 = plVar5 + -6;
  if (plVar5 != plVar8) goto code_r0x00332b88;
  lVar4 = 4;
  plVar8 = plVar5;
  goto LAB_00332b60;
code_r0x00332ad8:
  if (plVar6 != (long *)0x0) {
    lVar4 = 5;
LAB_00332ab4:
    (**(code **)(*plVar6 + lVar4 * 8))();
  }
  goto joined_r0x00332aa4;
code_r0x00332b88:
  if (plVar8 != (long *)0x0) {
    lVar4 = 5;
LAB_00332b60:
    (**(code **)(*plVar8 + lVar4 * 8))();
  }
  goto joined_r0x00332af4;
}


// ===== 00332c10  FUN_00332c10 =====

void FUN_00332c10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive25JHybridRiveFontConfigSpec15loadFontFromURLERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00332c60  FUN_00332c60 =====

pointer_____offset_0x10___ * FUN_00332c60(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00388938;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00332ca0  FUN_00332ca0 =====

void FUN_00332ca0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00332cec  FUN_00332cec =====

void FUN_00332cec(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x18);
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    FUN_00332de8(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00332d60  FUN_00332d60 =====

void FUN_00332d60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396290) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00332db0  FUN_00332db0 =====

void FUN_00332db0(void *param_1)

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


// ===== 00332de8  FUN_00332de8 =====

void FUN_00332de8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error arStack_a8 [16];
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  exception_ptr local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* try { // try from 00332f2c to 00332fb7 has its CatchHandler @ 00333004 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,PTR_typeinfo_name_00394c88,0);
    FUN_00264adc(local_68,local_80,local_98);
    FUN_00263450(local_50,local_68,"> was destroyed!");
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::runtime_error::runtime_error(arStack_a8,local_50);
    FUN_003201f8(local_68,arStack_a8);
    FUN_003322ac(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x48));
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x38);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00332e40:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00332e40;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x30);
    }
    *(long **)(param_1 + 0x38) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x20);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00332ea0:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00332ea0;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x18);
    }
    *(long **)(param_1 + 0x20) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
                    /* try { // try from 00332ef4 to 00332eff has its CatchHandler @ 00333008 */
    (*(code *)(&PTR_FUN_003888b0)[*(uint *)(param_1 + 0x10)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0033300c  FUN_0033300c =====

void FUN_0033300c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00388cb8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333050  FUN_00333050 =====

void FUN_00333050(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00388cb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003330a8  FUN_003330a8 =====

void FUN_003330a8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x003330e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003330e8  FUN_003330e8 =====

void FUN_003330e8(void *param_1)

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


// ===== 00333120  margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  long *plVar11;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_58 = PTR_kDescriptor_00388200;
  local_60 = PTR_s_initHybrid_003881f8;
  local_50 = PTR_call_00388208;
  pcVar10 = (char *)operator_new(0x40);
  uVar8 = s_Lcom_margelo_nitro_rive_HybridRi_001d53b6._33_8_;
  uVar7 = s_Lcom_margelo_nitro_rive_HybridRi_001d53b6._25_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridRi_001d53b6._17_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridRi_001d53b6._9_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridRi_001d53b6._1_8_;
  uVar2 = CONCAT17(s_Lcom_margelo_nitro_rive_HybridRi_001d53b6[0x30],
                   s_Lcom_margelo_nitro_rive_HybridRi_001d53b6._41_7_);
  uVar3 = CONCAT71(s_Lcom_margelo_nitro_rive_HybridRi_001d53b6._49_7_,
                   s_Lcom_margelo_nitro_rive_HybridRi_001d53b6[0x30]);
  pcVar10[0x37] = '\0';
  *(undefined8 *)(pcVar10 + 0x28) = uVar2;
  *(undefined8 *)(pcVar10 + 0x20) = uVar8;
  *(undefined8 *)(pcVar10 + 8) = uVar5;
  *(undefined8 *)pcVar10 = uVar4;
  *(undefined8 *)(pcVar10 + 0x18) = uVar7;
  *(undefined8 *)(pcVar10 + 0x10) = uVar6;
  *(undefined8 *)(pcVar10 + 0x2f) = uVar3;
                    /* try { // try from 00333188 to 0033318f has its CatchHandler @ 00333200 */
  facebook::jni::findClassLocal(pcVar10);
  operator_delete(pcVar10);
                    /* try { // try from 00333198 to 003331bf has its CatchHandler @ 00333214 */
  plVar11 = (long *)facebook::jni::Environment::current();
  iVar9 = (**(code **)(*plVar11 + 0x6b8))(plVar11,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar9 != 0);
  if (local_40 != 0) {
                    /* try { // try from 003331c8 to 003331db has its CatchHandler @ 00333210 */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb8))(plVar11,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033323c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00333268 to 00333273 has its CatchHandler @ 003332a4 */
  FUN_0032e460(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003332f0  margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromURL =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromURL(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromURL
          (JHybridRiveFontConfigSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadFontFromURL((basic_string *)(this + *(long *)(*(long *)this + -0x30)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333334  margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromResource =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromResource(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromResource
          (JHybridRiveFontConfigSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadFontFromResource((basic_string *)(this + *(long *)(*(long *)this + -0x38)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333378  margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromBytes =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromBytes(std::__ndk1::shared_ptr<margelo::nitro::ArrayBuffer>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontFromBytes
          (JHybridRiveFontConfigSpec *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadFontFromBytes((shared_ptr *)(this + *(long *)(*(long *)this + -0x40)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003333bc  margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontByName =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::loadFontByName
          (JHybridRiveFontConfigSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadFontByName((basic_string *)(this + *(long *)(*(long *)this + -0x48)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333400  margelo::nitro::rive::JHybridRiveFontConfigSpec::getSystemDefaultFont =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFontConfigSpec::getSystemDefaultFont() */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::getSystemDefaultFont
          (JHybridRiveFontConfigSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getSystemDefaultFont();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333444  margelo::nitro::rive::JHybridRiveFontConfigSpec::setFontsForWeight =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFontConfigSpec::setFontsForWeight(double,
   std::__ndk1::vector<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridFallbackFontSpec>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridFallbackFontSpec> > >
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::setFontsForWeight
          (JHybridRiveFontConfigSpec *this,double param_1,vector *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setFontsForWeight(this + *(long *)(*(long *)this + -0x58),param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333488  margelo::nitro::rive::JHybridRiveFontConfigSpec::applyFallbackFonts =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFontConfigSpec::applyFallbackFonts() */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::applyFallbackFonts(JHybridRiveFontConfigSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    applyFallbackFonts();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003334cc  margelo::nitro::rive::JHybridRiveFontConfigSpec::clearFallbackFonts =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFontConfigSpec::clearFallbackFonts() */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::clearFallbackFonts(JHybridRiveFontConfigSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    clearFallbackFonts();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333510  margelo::nitro::rive::JHybridRiveImageSpec::JavaPart::getJHybridRiveImageSpec =====

/* margelo::nitro::rive::JHybridRiveImageSpec::JavaPart::getJHybridRiveImageSpec() */

void __thiscall
margelo::nitro::rive::JHybridRiveImageSpec::JavaPart::getJHybridRiveImageSpec(JavaPart *this)

{
  long lVar1;
  long lVar2;
  runtime_error *this_00;
  long *in_x8;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  margelo::nitro::JHybridObject::JavaPart::getJHybridObject();
  if ((local_38 == 0) ||
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396158,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003335d8 to 003335e3 has its CatchHandler @ 00333618 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridRiveImageSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 003335f8 to 0033360f has its CatchHandler @ 00333610 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    *in_x8 = lVar2;
    in_x8[1] = (long)local_30;
    if (local_30 != (long *)0x0) {
      FUN_00259a00(1,local_30 + 1);
      if ((local_30 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333654  margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::initHybrid(undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_003336ac(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003336ac  FUN_003336ac =====

void FUN_003336ac(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  CxxPart *pCVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  CxxPart *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar2 = (CxxPart *)operator_new(0x20);
                    /* try { // try from 003336e4 to 003336eb has its CatchHandler @ 003337c8 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396328 + 0x10;
                    /* try { // try from 003336fc to 00333703 has its CatchHandler @ 003337c0 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00333708 to 00333723 has its CatchHandler @ 003337dc */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0033372c to 00333737 has its CatchHandler @ 00333790 */
  local_50 = pCVar2;
  local_40 = lVar4;
  FUN_00319a60(&local_40,&local_50);
  pCVar2 = local_50;
  local_50 = (CxxPart *)0x0;
  if (pCVar2 != (CxxPart *)0x0) {
    (**(code **)(*(long *)pCVar2 + 8))();
  }
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 00333758 to 0033376b has its CatchHandler @ 003337d8 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333814  FUN_00333814 =====

void FUN_00333814(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_00395e68 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 00333850 to 00333863 has its CatchHandler @ 003338a0 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003338a4  margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  runtime_error *this;
  bad_alloc *pbVar9;
  long *in_x1;
  long *in_x8;
  long lVar10;
  long *plVar11;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR_target_class_00396340;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_00333b60:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00333b6c to 00333b77 has its CatchHandler @ 00333d04 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridRiveImageSpec::JavaPart!"
                        );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00333b88 to 00333b9f has its CatchHandler @ 00333d00 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00333da8;
  }
  if (((*PTR_target_class_00396348 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396348),
     (int)param_1 != 0)) {
                    /* try { // try from 00333bb0 to 00333bbf has its CatchHandler @ 00333cc4 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396350);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396348);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00333da8;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396350);
LAB_00333c04:
                    /* try { // try from 00333c04 to 00333c13 has its CatchHandler @ 00333cf0 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00333da8;
                    /* try { // try from 00333c38 to 00333c53 has its CatchHandler @ 00333cd8 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396350);
  }
  else {
                    /* try { // try from 003338fc to 0033390f has its CatchHandler @ 00333d44 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00333918 to 0033392f has its CatchHandler @ 00333d40 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_00333c04;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 00333940 to 0033395b has its CatchHandler @ 00333d48 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00333cac to 00333cc3 has its CatchHandler @ 00333d48 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00333da8;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 00333978 to 0033398b has its CatchHandler @ 00333d3c */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_00333b60;
                    /* try { // try from 00333990 to 00333997 has its CatchHandler @ 00333d2c */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_003892a0;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00396318;
                    /* try { // try from 003339c8 to 003339e3 has its CatchHandler @ 00333d24 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396318 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00396320 + 0x38;
    plVar5[5] = (long)(PTR_construction_vtable_00396320 + 0xa8);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 003339fc to 00333a17 has its CatchHandler @ 00333d4c */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00333a1c to 00333a2b has its CatchHandler @ 00333d14 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00333a34 to 00333a47 has its CatchHandler @ 00333d38 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00396310 + 0x48;
    puVar2 = PTR_vtable_00396310 + 0x140;
    plVar5[5] = (long)(PTR_vtable_00396310 + 0xb8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 00333a68 to 00333a83 has its CatchHandler @ 00333d54 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar7 + 0xa8))(plVar7,local_88);
    param_1 = (basic_strong_ref *)facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 != 0) {
      plVar5[4] = lVar6;
      lVar6 = (long)plVar11 + *(long *)(plVar5[3] + -0x20);
      if ((lVar6 != -0x20) &&
         ((*(long *)(lVar6 + 0x28) == 0 || (*(long *)(*(long *)(lVar6 + 0x28) + 8) == -1)))) {
        FUN_00259a00(1,plVar5 + 1);
        FUN_00259a00(1,plVar5 + 2);
        lVar10 = *(long *)(lVar6 + 0x28);
        *(long *)(lVar6 + 0x20) = lVar6;
        *(long **)(lVar6 + 0x28) = plVar5;
        if (lVar10 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        param_1 = (basic_strong_ref *)FUN_00255510(0xffffffffffffffff,plVar5 + 1);
        if (param_1 == (basic_strong_ref *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          param_1 = (basic_strong_ref *)std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x48);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 00333b1c to 00333b2f has its CatchHandler @ 00333d34 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_00333da8;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00333c74 to 00333c8b has its CatchHandler @ 00333d54 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00333da8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00333dac  FUN_00333dac =====

void FUN_00333dac(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00333dd8 to 00333deb has its CatchHandler @ 00333e18 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333e1c  FUN_00333e1c =====

void FUN_00333e1c(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00334208();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333e90  FUN_00333e90 =====

void FUN_00333e90(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00334208();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333f0c  margelo::nitro::rive::JHybridRiveImageSpec::getByteSize =====

/* margelo::nitro::rive::JHybridRiveImageSpec::getByteSize() */

undefined1  [16] __thiscall
margelo::nitro::rive::JHybridRiveImageSpec::getByteSize(JHybridRiveImageSpec *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d938 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d938), iVar2 != 0)) {
                    /* try { // try from 00333fa0 to 00333fb7 has its CatchHandler @ 00333fcc */
    FUN_00334530(auStack_40);
    DAT_0039d930 = FUN_002620fc(auStack_40,"getByteSize");
    __cxa_guard_release(&DAT_0039d938);
  }
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = facebook::jni::Environment::current();
  auVar5._0_8_ = FUN_00262180(uVar3,uVar4,DAT_0039d930);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00333ff8  FUN_00333ff8 =====

void FUN_00333ff8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00334208(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334078  FUN_00334078 =====

void FUN_00334078(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00334208(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334100  FUN_00334100 =====

void FUN_00334100(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00334208(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334180  FUN_00334180 =====

void FUN_00334180(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00334208(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334208  FUN_00334208 =====

void FUN_00334208(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  puVar2 = PTR_vtable_00396310;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396310 + 0xb8);
  param_1[0xe] = (long)(puVar2 + 0x140);
  *param_1 = (long)(puVar2 + 0x48);
  local_70 = &PTR_FUN_00389220;
  plStack_68 = param_1;
                    /* try { // try from 00334260 to 00334267 has its CatchHandler @ 003342dc */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00334294;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_00334294:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 0033429c to 003342af has its CatchHandler @ 003342e0 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003342e4  FUN_003342e4 =====

void FUN_003342e4(void *param_1)

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


// ===== 0033431c  FUN_0033431c =====

void FUN_0033431c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00389220;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334378  FUN_00334378 =====

void FUN_00334378(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00389220;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003343c0  FUN_003343c0 =====

void FUN_003343c0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003343f8  FUN_003343f8 =====

void FUN_003343f8(void *param_1)

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


// ===== 00334430  FUN_00334430 =====

void FUN_00334430(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar5 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 0033445c to 0033446f has its CatchHandler @ 0033449c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003344a0  FUN_003344a0 =====

void FUN_003344a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396330) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003344f0  FUN_003344f0 =====

undefined * FUN_003344f0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396338;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334530  FUN_00334530 =====

void FUN_00334530(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396360 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396360), iVar2 != 0))
  {
                    /* try { // try from 003345a0 to 003345b3 has its CatchHandler @ 003345c4 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396368);
    __cxa_guard_release(PTR_cls_00396360);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396358;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003345f0  FUN_003345f0 =====

void FUN_003345f0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003892a0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334634  FUN_00334634 =====

void FUN_00334634(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003892a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033468c  FUN_0033468c =====

void FUN_0033468c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x003346c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003346cc  FUN_003346cc =====

void FUN_003346cc(void *param_1)

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


// ===== 00334704  margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  long *plVar10;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_58 = PTR_kDescriptor_00388d00;
  local_60 = PTR_s_initHybrid_00388cf8;
  local_50 = PTR_call_00388d08;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridRi_001d745c._41_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridRi_001d745c._33_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridRi_001d745c._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridRi_001d745c._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridRi_001d745c._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridRi_001d745c._1_8_;
  pcVar9[0x32] = '\0';
  pcVar9[0x30] = 'r';
  pcVar9[0x31] = 't';
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
  *(undefined8 *)(pcVar9 + 0x28) = uVar7;
  *(undefined8 *)(pcVar9 + 0x20) = uVar6;
                    /* try { // try from 0033476c to 00334773 has its CatchHandler @ 003347e4 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0033477c to 003347a3 has its CatchHandler @ 003347f8 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 003347ac to 003347bf has its CatchHandler @ 003347f4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334820  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveImageSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0033484c to 00334857 has its CatchHandler @ 00334888 */
  FUN_003336ac(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003348d4  margelo::nitro::rive::JHybridRiveImageSpec::getByteSize =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveImageSpec::getByteSize() */

void __thiscall margelo::nitro::rive::JHybridRiveImageSpec::getByteSize(JHybridRiveImageSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getByteSize(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334918  margelo::nitro::rive::JHybridRiveImageFactorySpec::JavaPart::getJHybridRiveImageFactorySpec =====

/* margelo::nitro::rive::JHybridRiveImageFactorySpec::JavaPart::getJHybridRiveImageFactorySpec() */

void __thiscall
margelo::nitro::rive::JHybridRiveImageFactorySpec::JavaPart::getJHybridRiveImageFactorySpec
          (JavaPart *this)

{
  long lVar1;
  long lVar2;
  runtime_error *this_00;
  long *in_x8;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  margelo::nitro::JHybridObject::JavaPart::getJHybridObject();
  if ((local_38 == 0) ||
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396388,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003349e0 to 003349eb has its CatchHandler @ 00334a20 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridRiveImageFactorySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 00334a00 to 00334a17 has its CatchHandler @ 00334a18 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    *in_x8 = lVar2;
    in_x8[1] = (long)local_30;
    if (local_30 != (long *)0x0) {
      FUN_00259a00(1,local_30 + 1);
      if ((local_30 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334a5c  FUN_00334a5c =====

void FUN_00334a5c(long *param_1)

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


// ===== 00334ae8  margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00334b40(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334b40  FUN_00334b40 =====

void FUN_00334b40(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  CxxPart *pCVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  CxxPart *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar2 = (CxxPart *)operator_new(0x20);
                    /* try { // try from 00334b78 to 00334b7f has its CatchHandler @ 00334c5c */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396390 + 0x10;
                    /* try { // try from 00334b90 to 00334b97 has its CatchHandler @ 00334c54 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00334b9c to 00334bb7 has its CatchHandler @ 00334c70 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00334bc0 to 00334bcb has its CatchHandler @ 00334c24 */
  local_50 = pCVar2;
  local_40 = lVar4;
  FUN_00319a60(&local_40,&local_50);
  pCVar2 = local_50;
  local_50 = (CxxPart *)0x0;
  if (pCVar2 != (CxxPart *)0x0) {
    (**(code **)(*(long *)pCVar2 + 8))();
  }
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 00334bec to 00334bff has its CatchHandler @ 00334c6c */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334ca8  FUN_00334ca8 =====

void FUN_00334ca8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_00395e68 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 00334ce4 to 00334cf7 has its CatchHandler @ 00334d34 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334d38  margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  runtime_error *this;
  bad_alloc *pbVar9;
  long *in_x1;
  long *in_x8;
  long lVar10;
  long *plVar11;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR_target_class_003963b0;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_00334ff4:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00335000 to 0033500b has its CatchHandler @ 00335198 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridRiveImageFactorySpec::JavaPart!"
                        );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0033501c to 00335033 has its CatchHandler @ 00335194 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0033523c;
  }
  if (((*PTR_target_class_003963b8 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_003963b8),
     (int)param_1 != 0)) {
                    /* try { // try from 00335044 to 00335053 has its CatchHandler @ 00335158 */
    facebook::jni::findClassStatic(PTR_kBaseName_003963c0);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_003963b8);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0033523c;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_003963c0);
LAB_00335098:
                    /* try { // try from 00335098 to 003350a7 has its CatchHandler @ 00335184 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0033523c;
                    /* try { // try from 003350cc to 003350e7 has its CatchHandler @ 0033516c */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_003963c0);
  }
  else {
                    /* try { // try from 00334d90 to 00334da3 has its CatchHandler @ 003351d8 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00334dac to 00334dc3 has its CatchHandler @ 003351d4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_00335098;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 00334dd4 to 00334def has its CatchHandler @ 003351dc */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00335140 to 00335157 has its CatchHandler @ 003351dc */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0033523c;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 00334e0c to 00334e1f has its CatchHandler @ 003351d0 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_00334ff4;
                    /* try { // try from 00334e24 to 00334e2b has its CatchHandler @ 003351c0 */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_00389cf0;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00396378;
                    /* try { // try from 00334e5c to 00334e77 has its CatchHandler @ 003351b8 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396378 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00396380 + 0x48;
    plVar5[5] = (long)(PTR_construction_vtable_00396380 + 200);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 00334e90 to 00334eab has its CatchHandler @ 003351e0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00334eb0 to 00334ebf has its CatchHandler @ 003351a8 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00334ec8 to 00334edb has its CatchHandler @ 003351cc */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00396370 + 0x58;
    puVar2 = PTR_vtable_00396370 + 0x160;
    plVar5[5] = (long)(PTR_vtable_00396370 + 0xd8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 00334efc to 00334f17 has its CatchHandler @ 003351e8 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar7 + 0xa8))(plVar7,local_88);
    param_1 = (basic_strong_ref *)facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 != 0) {
      plVar5[4] = lVar6;
      lVar6 = (long)plVar11 + *(long *)(plVar5[3] + -0x20);
      if ((lVar6 != -0x20) &&
         ((*(long *)(lVar6 + 0x28) == 0 || (*(long *)(*(long *)(lVar6 + 0x28) + 8) == -1)))) {
        FUN_00259a00(1,plVar5 + 1);
        FUN_00259a00(1,plVar5 + 2);
        lVar10 = *(long *)(lVar6 + 0x28);
        *(long *)(lVar6 + 0x20) = lVar6;
        *(long **)(lVar6 + 0x28) = plVar5;
        if (lVar10 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        param_1 = (basic_strong_ref *)FUN_00255510(0xffffffffffffffff,plVar5 + 1);
        if (param_1 == (basic_strong_ref *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          param_1 = (basic_strong_ref *)std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x58);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 00334fb0 to 00334fc3 has its CatchHandler @ 003351c8 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0033523c;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00335108 to 0033511f has its CatchHandler @ 003351e8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0033523c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00335240  FUN_00335240 =====

void FUN_00335240(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00336180();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003352b4  FUN_003352b4 =====

void FUN_003352b4(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00336180();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335330  margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromURLAsync =====

/* margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromURLAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromURLAsync(basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  _jobject *p_Var5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  byte *in_x1;
  undefined8 *in_x8;
  byte *pbVar13;
  _jmethodID *p_Var14;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d968 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d968), iVar4 != 0)) {
                    /* try { // try from 00335580 to 00335597 has its CatchHandler @ 00335658 */
    FUN_003364a8(&local_90);
    DAT_0039d960 = FUN_00331c28(&local_90,"loadFromURLAsync");
    __cxa_guard_release(&DAT_0039d968);
  }
  pbVar13 = *(byte **)(in_x1 + 0x10);
  p_Var14 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar13 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar13);
  ppuVar8 = local_90;
                    /* try { // try from 00335394 to 003353b3 has its CatchHandler @ 00335724 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var14,DAT_0039d960,ppuVar8);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 003353c0 to 003353d3 has its CatchHandler @ 00335708 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 003353d4 to 003353db has its CatchHandler @ 003356fc */
  ppuVar8 = (undefined **)operator_new(0x70);
  *in_x8 = ppuVar8;
  ppuVar8[3] = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  ppuVar8[5] = (undefined *)0x0;
  ppuVar8[4] = (undefined *)0x0;
  ppuVar8[7] = (undefined *)0x0;
  ppuVar8[6] = (undefined *)0x0;
  ppuVar8[9] = (undefined *)0x0;
  ppuVar8[8] = (undefined *)0x0;
  ppuVar8[0xb] = (undefined *)0x0;
  ppuVar8[10] = (undefined *)0x0;
  ppuVar8[0xd] = (undefined *)0x0;
  ppuVar8[0xc] = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  *ppuVar8 = (undefined *)0x0;
  local_90 = ppuVar8;
                    /* try { // try from 003353fc to 00335403 has its CatchHandler @ 003356ec */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_003898a8;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 003355d0 to 003355d3 has its CatchHandler @ 0033563c */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0033542c to 0033543f has its CatchHandler @ 0033570c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00389920;
                    /* try { // try from 00335474 to 0033547b has its CatchHandler @ 003356ac */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
LAB_0033549c:
    (*(code *)(*pppuVar12)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar12 = local_70;
    goto LAB_0033549c;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00335618 to 0033561b has its CatchHandler @ 00335638 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 003354b0 to 003354bf has its CatchHandler @ 0033570c */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_003899a0;
                    /* try { // try from 003354f4 to 003354fb has its CatchHandler @ 0033566c */
  uStack_88 = uVar10;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00335528;
    lVar6 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar6])();
LAB_00335528:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00335530 to 00335543 has its CatchHandler @ 00335704 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033574c  margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromResourceAsync =====

/* margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromResourceAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromResourceAsync(basic_string *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  _jobject *p_Var5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  byte *in_x1;
  undefined8 *in_x8;
  byte *pbVar13;
  _jmethodID *p_Var14;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d978 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d978), iVar4 != 0)) {
                    /* try { // try from 0033599c to 003359b3 has its CatchHandler @ 00335a74 */
    FUN_003364a8(&local_90);
    DAT_0039d970 = FUN_00331c28(&local_90,"loadFromResourceAsync");
    __cxa_guard_release(&DAT_0039d978);
  }
  pbVar13 = *(byte **)(in_x1 + 0x10);
  p_Var14 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar13 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar13);
  ppuVar8 = local_90;
                    /* try { // try from 003357b0 to 003357cf has its CatchHandler @ 00335b40 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var14,DAT_0039d970,ppuVar8);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 003357dc to 003357ef has its CatchHandler @ 00335b24 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 003357f0 to 003357f7 has its CatchHandler @ 00335b18 */
  ppuVar8 = (undefined **)operator_new(0x70);
  *in_x8 = ppuVar8;
  ppuVar8[3] = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  ppuVar8[5] = (undefined *)0x0;
  ppuVar8[4] = (undefined *)0x0;
  ppuVar8[7] = (undefined *)0x0;
  ppuVar8[6] = (undefined *)0x0;
  ppuVar8[9] = (undefined *)0x0;
  ppuVar8[8] = (undefined *)0x0;
  ppuVar8[0xb] = (undefined *)0x0;
  ppuVar8[10] = (undefined *)0x0;
  ppuVar8[0xd] = (undefined *)0x0;
  ppuVar8[0xc] = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  *ppuVar8 = (undefined *)0x0;
  local_90 = ppuVar8;
                    /* try { // try from 00335818 to 0033581f has its CatchHandler @ 00335b08 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_003898a8;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 003359ec to 003359ef has its CatchHandler @ 00335a58 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00335848 to 0033585b has its CatchHandler @ 00335b28 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00389a20;
                    /* try { // try from 00335890 to 00335897 has its CatchHandler @ 00335ac8 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
LAB_003358b8:
    (*(code *)(*pppuVar12)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar12 = local_70;
    goto LAB_003358b8;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00335a34 to 00335a37 has its CatchHandler @ 00335a54 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 003358cc to 003358db has its CatchHandler @ 00335b28 */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00389aa0;
                    /* try { // try from 00335910 to 00335917 has its CatchHandler @ 00335a88 */
  uStack_88 = uVar10;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00335944;
    lVar6 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar6])();
LAB_00335944:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0033594c to 0033595f has its CatchHandler @ 00335b20 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335b68  margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromBytesAsync =====

/* margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromBytesAsync(std::__ndk1::shared_ptr<margelo::nitro::ArrayBuffer>
   const&) */

void margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromBytesAsync(shared_ptr *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  _jobject *p_Var5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  undefined8 *in_x8;
  _jmethodID *p_Var13;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d988 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d988), iVar4 != 0)) {
                    /* try { // try from 00335dac to 00335dbb has its CatchHandler @ 00335e7c */
    FUN_003364a8(&local_90);
    DAT_0039d980 = FUN_00336568(&local_90);
    __cxa_guard_release(&DAT_0039d988);
  }
  p_Var13 = *(_jmethodID **)(param_1 + 8);
  FUN_00328c88(&local_90);
                    /* try { // try from 00335bc4 to 00335be3 has its CatchHandler @ 00335f48 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039d980,local_90);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 00335bec to 00335bff has its CatchHandler @ 00335f2c */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 00335c00 to 00335c07 has its CatchHandler @ 00335f20 */
  ppuVar8 = (undefined **)operator_new(0x70);
  *in_x8 = ppuVar8;
  ppuVar8[3] = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  ppuVar8[5] = (undefined *)0x0;
  ppuVar8[4] = (undefined *)0x0;
  ppuVar8[7] = (undefined *)0x0;
  ppuVar8[6] = (undefined *)0x0;
  ppuVar8[9] = (undefined *)0x0;
  ppuVar8[8] = (undefined *)0x0;
  ppuVar8[0xb] = (undefined *)0x0;
  ppuVar8[10] = (undefined *)0x0;
  ppuVar8[0xd] = (undefined *)0x0;
  ppuVar8[0xc] = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  *ppuVar8 = (undefined *)0x0;
  local_90 = ppuVar8;
                    /* try { // try from 00335c28 to 00335c2f has its CatchHandler @ 00335f10 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_003898a8;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00335df4 to 00335df7 has its CatchHandler @ 00335e60 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00335c58 to 00335c6b has its CatchHandler @ 00335f30 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00389b70;
                    /* try { // try from 00335ca0 to 00335ca7 has its CatchHandler @ 00335ed0 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
LAB_00335cc8:
    (*(code *)(*pppuVar12)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar12 = local_70;
    goto LAB_00335cc8;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00335e3c to 00335e3f has its CatchHandler @ 00335e5c */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00335cdc to 00335ceb has its CatchHandler @ 00335f30 */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00389bf0;
                    /* try { // try from 00335d20 to 00335d27 has its CatchHandler @ 00335e90 */
  uStack_88 = uVar10;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00335d54;
    lVar6 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar6])();
LAB_00335d54:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00335d5c to 00335d6f has its CatchHandler @ 00335f28 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335f70  FUN_00335f70 =====

void FUN_00335f70(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00336180(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335ff0  FUN_00335ff0 =====

void FUN_00335ff0(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00336180(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336078  FUN_00336078 =====

void FUN_00336078(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00336180(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003360f8  FUN_003360f8 =====

void FUN_003360f8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00336180(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336180  FUN_00336180 =====

void FUN_00336180(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  puVar2 = PTR_vtable_00396370;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396370 + 0xd8);
  param_1[0xe] = (long)(puVar2 + 0x160);
  *param_1 = (long)(puVar2 + 0x58);
  local_70 = &PTR_FUN_00389c70;
  plStack_68 = param_1;
                    /* try { // try from 003361d8 to 003361df has its CatchHandler @ 00336254 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0033620c;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_0033620c:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 00336214 to 00336227 has its CatchHandler @ 00336258 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033625c  FUN_0033625c =====

void FUN_0033625c(void *param_1)

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


// ===== 00336294  FUN_00336294 =====

void FUN_00336294(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00389c70;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003362f0  FUN_003362f0 =====

void FUN_003362f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00389c70;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336338  FUN_00336338 =====

void FUN_00336338(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336370  FUN_00336370 =====

void FUN_00336370(void *param_1)

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


// ===== 003363a8  FUN_003363a8 =====

void FUN_003363a8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar5 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 003363d4 to 003363e7 has its CatchHandler @ 00336414 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336418  FUN_00336418 =====

void FUN_00336418(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003963a0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00336468  FUN_00336468 =====

undefined * FUN_00336468(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003963a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003364a8  FUN_003364a8 =====

void FUN_003364a8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003963d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003963d0), iVar2 != 0))
  {
                    /* try { // try from 00336518 to 0033652b has its CatchHandler @ 0033653c */
    facebook::jni::findClassStatic(PTR_kBaseName_003963d8);
    __cxa_guard_release(PTR_cls_003963d0);
  }
  *param_1 = *(undefined8 *)PTR_cls_003963c8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336568  FUN_00336568 =====

long FUN_00336568(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"loadFromBytesAsync",PTR_kDescriptor_003963e0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003365e4  FUN_003365e4 =====

void FUN_003365e4(undefined8 *param_1)

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
    FUN_003377ac(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033665c  FUN_0033665c =====

void FUN_0033665c(long *param_1)

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


// ===== 003366e8  FUN_003366e8 =====

void FUN_003366e8(long *param_1)

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


// ===== 00336774  FUN_00336774 =====

void FUN_00336774(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389bf0;
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


// ===== 0033680c  FUN_0033680c =====

void FUN_0033680c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389bf0;
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


// ===== 00336898  FUN_00336898 =====

void FUN_00336898(long param_1)

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
  *puVar4 = &PTR_FUN_00389bf0;
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


// ===== 00336910  FUN_00336910 =====

void FUN_00336910(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00389bf0;
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


// ===== 00336974  FUN_00336974 =====

void FUN_00336974(long param_1)

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


// ===== 00336a00  FUN_00336a00 =====

void FUN_00336a00(void *param_1)

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


// ===== 00336a80  FUN_00336a80 =====

void FUN_00336a80(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00336ab8 to 00336ac3 has its CatchHandler @ 00336b2c */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00336ad0 to 00336adb has its CatchHandler @ 00336b14 */
  FUN_00336be4(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336b54  FUN_00336b54 =====

void FUN_00336b54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive27JHybridRiveImageFactorySpec18loadFromBytesAsyncERKNSt6__ndk110shared_ptrINS0_11ArrayBufferEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00336ba4  FUN_00336ba4 =====

pointer_____offset_0x10___ * FUN_00336ba4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00389c50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336be4  FUN_00336be4 =====

void FUN_00336be4(exception_ptr *param_1,exception_ptr *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error *this;
  long lVar6;
  long *plVar7;
  undefined1 auStack_90 [24];
  basic_string abStack_78 [24];
  undefined8 local_60 [3];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)param_2;
  local_60[0] = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)local_60);
  if (lVar6 == 0) {
    FUN_00264e5c(local_60,PTR_typeinfo_name_00394e10,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00336d94 to 00336da7 has its CatchHandler @ 00336e70 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 00336da8 to 00336dbb has its CatchHandler @ 00336e58 */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 00336dc0 to 00336df7 has its CatchHandler @ 00336e24 */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00336ea4;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 == 0xffffffff) {
LAB_00336c68:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 00336c5c to 00336c67 has its CatchHandler @ 00336e0c */
      (*(code *)(&PTR_FUN_003898f8)[uVar2])(local_60,param_1);
      goto LAB_00336c68;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  for (lVar6 = *(long *)(param_1 + 0x30); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00336e08 to 00336e0b has its CatchHandler @ 00336e14 */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00336c5c with catch @ 00336e0c
                        */
        FUN_0025ad9c();
      }
      goto LAB_00336ea4;
    }
                    /* try { // try from 00336ca0 to 00336ca7 has its CatchHandler @ 00336e10 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 0x20);
LAB_00336cd0:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x00336ce8;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_00336cc4;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  plVar5 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x20) = plVar4;
joined_r0x00336d00:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x00336d68;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_00336d40;
  }
  *(long **)(param_1 + 0x38) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00336ea4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00336ce8:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_00336cc4:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_00336cd0;
code_r0x00336d68:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_00336d40:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x00336d00;
}


// ===== 00336ea8  FUN_00336ea8 =====

void FUN_00336ea8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336ee0  FUN_00336ee0 =====

void FUN_00336ee0(undefined8 param_1,long param_2)

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


// ===== 00336f6c  FUN_00336f6c =====

void FUN_00336f6c(undefined8 param_1,exception_ptr *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::exception_ptr::~exception_ptr(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336fa8  FUN_00336fa8 =====

void FUN_00336fa8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389b70;
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


// ===== 00337040  FUN_00337040 =====

void FUN_00337040(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389b70;
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


// ===== 003370cc  FUN_003370cc =====

void FUN_003370cc(long param_1)

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
  *puVar4 = &PTR_FUN_00389b70;
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


// ===== 00337144  FUN_00337144 =====

void FUN_00337144(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00389b70;
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


// ===== 003371a8  FUN_003371a8 =====

void FUN_003371a8(long param_1)

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


// ===== 00337234  FUN_00337234 =====

void FUN_00337234(void *param_1)

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


// ===== 003372b4  FUN_003372b4 =====

/* WARNING: Removing unreachable block (ram,0x0033734c) */
/* WARNING: Removing unreachable block (ram,0x0033735c) */

void FUN_003372b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  margelo::nitro::rive::JHybridRiveImageSpec::JavaPart::getJHybridRiveImageSpec
            ((JavaPart *)&local_30);
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0x40));
  }
  local_38 = local_48;
                    /* try { // try from 00337308 to 00337313 has its CatchHandler @ 00337394 */
  local_40 = local_50;
  FUN_00337458(uVar3,&local_40);
  if ((local_38 != (long *)0x0) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,local_38 + 1), lVar2 == 0)) {
    (**(code **)(*local_38 + 0x10))(local_38);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003373c8  FUN_003373c8 =====

void FUN_003373c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive27JHybridRiveImageFactorySpec18loadFromBytesAsyncERKNSt6__ndk110shared_ptrINS0_11ArrayBufferEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00337418  FUN_00337418 =====

pointer_____offset_0x10___ * FUN_00337418(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00389bd0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337458  FUN_00337458 =====

void FUN_00337458(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 1) {
      uVar9 = param_2[1];
      uVar8 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      plVar7 = (long *)param_1[1];
      param_1[1] = uVar9;
      *param_1 = uVar8;
      if ((plVar7 != (long *)0x0) &&
         (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      goto LAB_00337508;
    }
                    /* try { // try from 003374e8 to 003374f3 has its CatchHandler @ 00337634 */
    (*(code *)(&PTR_FUN_003898f8)[uVar2])(&uStack_39,param_1);
  }
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
LAB_00337508:
  plVar7 = (long *)param_1[3];
  plVar1 = (long *)param_1[4];
  if (plVar7 != plVar1) {
    do {
      if (*(int *)(param_1 + 2) != 1) {
LAB_00337620:
        if (*(long *)(lVar3 + 0x28) == local_38) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 003374e8 with catch @ 00337634
                        */
          FUN_0025ad9c();
        }
        goto LAB_00337660;
      }
      plVar5 = (long *)plVar7[4];
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0033761c to 00337633 has its CatchHandler @ 0033763c */
          FUN_0025cd00();
          goto LAB_00337620;
        }
        goto LAB_00337660;
      }
                    /* try { // try from 00337530 to 00337537 has its CatchHandler @ 00337638 */
      (**(code **)(*plVar5 + 0x30))(plVar5,param_1);
      plVar7 = plVar7 + 6;
    } while (plVar7 != plVar1);
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_1[4];
    plVar7 = plVar5;
joined_r0x0033754c:
    if (plVar5 != plVar1) {
      plVar6 = (long *)plVar5[-2];
      plVar5 = plVar5 + -6;
      plVar7 = plVar1;
      if (plVar5 != plVar6) goto code_r0x00337580;
      lVar4 = 4;
      plVar6 = plVar5;
      goto LAB_0033755c;
    }
  }
  plVar1 = (long *)param_1[6];
  plVar5 = (long *)param_1[7];
  param_1[4] = plVar7;
joined_r0x0033759c:
  if (plVar5 == plVar1) {
    param_1[7] = plVar1;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
LAB_00337660:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar7 = (long *)plVar5[-2];
  plVar5 = plVar5 + -6;
  if (plVar5 != plVar7) goto code_r0x00337600;
  lVar4 = 4;
  plVar7 = plVar5;
  goto LAB_003375d8;
code_r0x00337580:
  if (plVar6 != (long *)0x0) {
    lVar4 = 5;
LAB_0033755c:
    (**(code **)(*plVar6 + lVar4 * 8))();
  }
  goto joined_r0x0033754c;
code_r0x00337600:
  if (plVar7 != (long *)0x0) {
    lVar4 = 5;
LAB_003375d8:
    (**(code **)(*plVar7 + lVar4 * 8))();
  }
  goto joined_r0x0033759c;
}


// ===== 00337664  FUN_00337664 =====

void FUN_00337664(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003376b0  FUN_003376b0 =====

void FUN_003376b0(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x18);
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    FUN_003377ac(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337724  FUN_00337724 =====

void FUN_00337724(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396398) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00337774  FUN_00337774 =====

void FUN_00337774(void *param_1)

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


// ===== 003377ac  FUN_003377ac =====

void FUN_003377ac(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error arStack_a8 [16];
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  exception_ptr local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* try { // try from 003378f0 to 0033797b has its CatchHandler @ 003379c8 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,PTR_typeinfo_name_00394e10,0);
    FUN_00264adc(local_68,local_80,local_98);
    FUN_00263450(local_50,local_68,"> was destroyed!");
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::runtime_error::runtime_error(arStack_a8,local_50);
    FUN_003201f8(local_68,arStack_a8);
    FUN_00336be4(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x48));
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x38);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00337804:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00337804;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x30);
    }
    *(long **)(param_1 + 0x38) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x20);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00337864:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00337864;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x18);
    }
    *(long **)(param_1 + 0x20) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
                    /* try { // try from 003378b8 to 003378c3 has its CatchHandler @ 003379cc */
    (*(code *)(&PTR_FUN_003898f8)[*(uint *)(param_1 + 0x10)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003379d0  FUN_003379d0 =====

void FUN_003379d0(long *param_1)

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


// ===== 00337a5c  FUN_00337a5c =====

void FUN_00337a5c(long *param_1)

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


// ===== 00337ae8  FUN_00337ae8 =====

void FUN_00337ae8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389aa0;
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


// ===== 00337b80  FUN_00337b80 =====

void FUN_00337b80(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389aa0;
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


// ===== 00337c0c  FUN_00337c0c =====

void FUN_00337c0c(long param_1)

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
  *puVar4 = &PTR_FUN_00389aa0;
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


// ===== 00337c84  FUN_00337c84 =====

void FUN_00337c84(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00389aa0;
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


// ===== 00337ce8  FUN_00337ce8 =====

void FUN_00337ce8(long param_1)

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


// ===== 00337d74  FUN_00337d74 =====

void FUN_00337d74(void *param_1)

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


// ===== 00337df4  FUN_00337df4 =====

void FUN_00337df4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00337e2c to 00337e37 has its CatchHandler @ 00337ea0 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00337e44 to 00337e4f has its CatchHandler @ 00337e88 */
  FUN_00336be4(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337ec8  FUN_00337ec8 =====

void FUN_00337ec8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive27JHybridRiveImageFactorySpec21loadFromResourceAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00337f18  FUN_00337f18 =====

pointer_____offset_0x10___ * FUN_00337f18(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00389b00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337f58  FUN_00337f58 =====

void FUN_00337f58(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389a20;
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


// ===== 00337ff0  FUN_00337ff0 =====

void FUN_00337ff0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389a20;
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


// ===== 0033807c  FUN_0033807c =====

void FUN_0033807c(long param_1)

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
  *puVar4 = &PTR_FUN_00389a20;
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


// ===== 003380f4  FUN_003380f4 =====

void FUN_003380f4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00389a20;
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


// ===== 00338158  FUN_00338158 =====

void FUN_00338158(long param_1)

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


// ===== 003381e4  FUN_003381e4 =====

void FUN_003381e4(void *param_1)

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


// ===== 00338264  FUN_00338264 =====

/* WARNING: Removing unreachable block (ram,0x003382fc) */
/* WARNING: Removing unreachable block (ram,0x0033830c) */

void FUN_00338264(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  margelo::nitro::rive::JHybridRiveImageSpec::JavaPart::getJHybridRiveImageSpec
            ((JavaPart *)&local_30);
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0x40));
  }
  local_38 = local_48;
                    /* try { // try from 003382b8 to 003382c3 has its CatchHandler @ 00338344 */
  local_40 = local_50;
  FUN_00337458(uVar3,&local_40);
  if ((local_38 != (long *)0x0) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,local_38 + 1), lVar2 == 0)) {
    (**(code **)(*local_38 + 0x10))(local_38);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00338378  FUN_00338378 =====

void FUN_00338378(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive27JHybridRiveImageFactorySpec21loadFromResourceAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003383c8  FUN_003383c8 =====

pointer_____offset_0x10___ * FUN_003383c8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00389a80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338408  FUN_00338408 =====

void FUN_00338408(long *param_1)

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


// ===== 00338494  FUN_00338494 =====

void FUN_00338494(long *param_1)

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


// ===== 00338520  FUN_00338520 =====

void FUN_00338520(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003899a0;
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


// ===== 003385b8  FUN_003385b8 =====

void FUN_003385b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003899a0;
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


// ===== 00338644  FUN_00338644 =====

void FUN_00338644(long param_1)

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
  *puVar4 = &PTR_FUN_003899a0;
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


// ===== 003386bc  FUN_003386bc =====

void FUN_003386bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003899a0;
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


// ===== 00338720  FUN_00338720 =====

void FUN_00338720(long param_1)

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


// ===== 003387ac  FUN_003387ac =====

void FUN_003387ac(void *param_1)

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


// ===== 0033882c  FUN_0033882c =====

void FUN_0033882c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00338864 to 0033886f has its CatchHandler @ 003388d8 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0033887c to 00338887 has its CatchHandler @ 003388c0 */
  FUN_00336be4(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338900  FUN_00338900 =====

void FUN_00338900(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive27JHybridRiveImageFactorySpec16loadFromURLAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00338950  FUN_00338950 =====

pointer_____offset_0x10___ * FUN_00338950(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00389a00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338990  FUN_00338990 =====

void FUN_00338990(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389920;
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


// ===== 00338a28  FUN_00338a28 =====

void FUN_00338a28(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00389920;
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


// ===== 00338ab4  FUN_00338ab4 =====

void FUN_00338ab4(long param_1)

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
  *puVar4 = &PTR_FUN_00389920;
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


// ===== 00338b2c  FUN_00338b2c =====

void FUN_00338b2c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00389920;
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


// ===== 00338b90  FUN_00338b90 =====

void FUN_00338b90(long param_1)

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


// ===== 00338c1c  FUN_00338c1c =====

void FUN_00338c1c(void *param_1)

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


// ===== 00338c9c  FUN_00338c9c =====

/* WARNING: Removing unreachable block (ram,0x00338d34) */
/* WARNING: Removing unreachable block (ram,0x00338d44) */

void FUN_00338c9c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  margelo::nitro::rive::JHybridRiveImageSpec::JavaPart::getJHybridRiveImageSpec
            ((JavaPart *)&local_30);
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0x40));
  }
  local_38 = local_48;
                    /* try { // try from 00338cf0 to 00338cfb has its CatchHandler @ 00338d7c */
  local_40 = local_50;
  FUN_00337458(uVar3,&local_40);
  if ((local_38 != (long *)0x0) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,local_38 + 1), lVar2 == 0)) {
    (**(code **)(*local_38 + 0x10))(local_38);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00338db0  FUN_00338db0 =====

void FUN_00338db0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive27JHybridRiveImageFactorySpec16loadFromURLAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00338e00  FUN_00338e00 =====

pointer_____offset_0x10___ * FUN_00338e00(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00389980;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338e40  FUN_00338e40 =====

void FUN_00338e40(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00389cf0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338e84  FUN_00338e84 =====

void FUN_00338e84(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00389cf0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338edc  FUN_00338edc =====

void FUN_00338edc(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00338f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338f1c  FUN_00338f1c =====

void FUN_00338f1c(void *param_1)

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


// ===== 00338f54  margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  long *plVar10;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_58 = PTR_kDescriptor_003892e8;
  local_60 = PTR_s_initHybrid_003892e0;
  local_50 = PTR_call_003892f0;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridRi_001d709f._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridRi_001d709f._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridRi_001d709f._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridRi_001d709f._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridRi_001d709f._1_8_;
  uVar2 = CONCAT71(s_Lcom_margelo_nitro_rive_HybridRi_001d709f._42_7_,
                   s_Lcom_margelo_nitro_rive_HybridRi_001d709f[0x29]);
  pcVar9[0x39] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT17(s_Lcom_margelo_nitro_rive_HybridRi_001d709f[0x31],
                   s_Lcom_margelo_nitro_rive_HybridRi_001d709f._42_7_);
  *(undefined8 *)(pcVar9 + 0x31) = s_Lcom_margelo_nitro_rive_HybridRi_001d709f._50_8_;
  *(undefined8 *)(pcVar9 + 0x29) = uVar2;
                    /* try { // try from 00338fbc to 00338fc3 has its CatchHandler @ 00339034 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00338fcc to 00338ff3 has its CatchHandler @ 00339048 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00338ffc to 0033900f has its CatchHandler @ 00339044 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339070  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveImageFactorySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0033909c to 003390a7 has its CatchHandler @ 003390d8 */
  FUN_00334b40(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339124  margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromURLAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromURLAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromURLAsync
          (JHybridRiveImageFactorySpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadFromURLAsync((basic_string *)(this + *(long *)(*(long *)this + -0x30)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339168  margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromResourceAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromResourceAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromResourceAsync
          (JHybridRiveImageFactorySpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadFromResourceAsync((basic_string *)(this + *(long *)(*(long *)this + -0x38)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003391ac  margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromBytesAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromBytesAsync(std::__ndk1::shared_ptr<margelo::nitro::ArrayBuffer>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveImageFactorySpec::loadFromBytesAsync
          (JHybridRiveImageFactorySpec *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadFromBytesAsync((shared_ptr *)(this + *(long *)(*(long *)this + -0x40)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003391f0  margelo::nitro::rive::JHybridRiveRuntimeSpec::JavaPart::getJHybridRiveRuntimeSpec =====

/* margelo::nitro::rive::JHybridRiveRuntimeSpec::JavaPart::getJHybridRiveRuntimeSpec() */

void __thiscall
margelo::nitro::rive::JHybridRiveRuntimeSpec::JavaPart::getJHybridRiveRuntimeSpec(JavaPart *this)

{
  long lVar1;
  long lVar2;
  runtime_error *this_00;
  long *in_x8;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  margelo::nitro::JHybridObject::JavaPart::getJHybridObject();
  if ((local_38 == 0) ||
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396400,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003392b8 to 003392c3 has its CatchHandler @ 003392f8 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridRiveRuntimeSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 003392d8 to 003392ef has its CatchHandler @ 003392f0 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    *in_x8 = lVar2;
    in_x8[1] = (long)local_30;
    if (local_30 != (long *)0x0) {
      FUN_00259a00(1,local_30 + 1);
      if ((local_30 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339334  FUN_00339334 =====

void FUN_00339334(long *param_1)

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


// ===== 003393c0  margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::initHybrid(undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00339418(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339418  FUN_00339418 =====

void FUN_00339418(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  CxxPart *pCVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  CxxPart *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar2 = (CxxPart *)operator_new(0x20);
                    /* try { // try from 00339450 to 00339457 has its CatchHandler @ 00339534 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396408 + 0x10;
                    /* try { // try from 00339468 to 0033946f has its CatchHandler @ 0033952c */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00339474 to 0033948f has its CatchHandler @ 00339548 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00339498 to 003394a3 has its CatchHandler @ 003394fc */
  local_50 = pCVar2;
  local_40 = lVar4;
  FUN_00319a60(&local_40,&local_50);
  pCVar2 = local_50;
  local_50 = (CxxPart *)0x0;
  if (pCVar2 != (CxxPart *)0x0) {
    (**(code **)(*(long *)pCVar2 + 8))();
  }
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 003394c4 to 003394d7 has its CatchHandler @ 00339544 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339580  FUN_00339580 =====

void FUN_00339580(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_00395e68 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 003395bc to 003395cf has its CatchHandler @ 0033960c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339610  margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  runtime_error *this;
  bad_alloc *pbVar9;
  long *in_x1;
  long *in_x8;
  long lVar10;
  long *plVar11;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR_target_class_00396420;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_003398cc:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003398d8 to 003398e3 has its CatchHandler @ 00339a70 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridRiveRuntimeSpec::JavaPart!"
                        );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 003398f4 to 0033990b has its CatchHandler @ 00339a6c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00339b14;
  }
  if (((*PTR_target_class_00396428 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396428),
     (int)param_1 != 0)) {
                    /* try { // try from 0033991c to 0033992b has its CatchHandler @ 00339a30 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396430);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396428);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00339b14;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396430);
LAB_00339970:
                    /* try { // try from 00339970 to 0033997f has its CatchHandler @ 00339a5c */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00339b14;
                    /* try { // try from 003399a4 to 003399bf has its CatchHandler @ 00339a44 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396430);
  }
  else {
                    /* try { // try from 00339668 to 0033967b has its CatchHandler @ 00339ab0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00339684 to 0033969b has its CatchHandler @ 00339aac */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_00339970;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 003396ac to 003396c7 has its CatchHandler @ 00339ab4 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00339a18 to 00339a2f has its CatchHandler @ 00339ab4 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00339b14;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 003396e4 to 003396f7 has its CatchHandler @ 00339aa8 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_003398cc;
                    /* try { // try from 003396fc to 00339703 has its CatchHandler @ 00339a98 */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0038a478;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_003963f0;
                    /* try { // try from 00339734 to 0033974f has its CatchHandler @ 00339a90 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_003963f0 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_003963f8 + 0x48;
    plVar5[5] = (long)(PTR_construction_vtable_003963f8 + 200);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 00339768 to 00339783 has its CatchHandler @ 00339ab8 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00339788 to 00339797 has its CatchHandler @ 00339a80 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 003397a0 to 003397b3 has its CatchHandler @ 00339aa4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_003963e8 + 0x58;
    puVar2 = PTR_vtable_003963e8 + 0x160;
    plVar5[5] = (long)(PTR_vtable_003963e8 + 0xd8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 003397d4 to 003397ef has its CatchHandler @ 00339ac0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar7 + 0xa8))(plVar7,local_88);
    param_1 = (basic_strong_ref *)facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 != 0) {
      plVar5[4] = lVar6;
      lVar6 = (long)plVar11 + *(long *)(plVar5[3] + -0x20);
      if ((lVar6 != -0x20) &&
         ((*(long *)(lVar6 + 0x28) == 0 || (*(long *)(*(long *)(lVar6 + 0x28) + 8) == -1)))) {
        FUN_00259a00(1,plVar5 + 1);
        FUN_00259a00(1,plVar5 + 2);
        lVar10 = *(long *)(lVar6 + 0x28);
        *(long *)(lVar6 + 0x20) = lVar6;
        *(long **)(lVar6 + 0x28) = plVar5;
        if (lVar10 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        param_1 = (basic_strong_ref *)FUN_00255510(0xffffffffffffffff,plVar5 + 1);
        if (param_1 == (basic_strong_ref *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          param_1 = (basic_strong_ref *)std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x58);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 00339888 to 0033989b has its CatchHandler @ 00339aa0 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_00339b14;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 003399e0 to 003399f7 has its CatchHandler @ 00339ac0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00339b14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00339b18  FUN_00339b18 =====

void FUN_00339b18(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0033a3c0();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339b8c  FUN_00339b8c =====

void FUN_00339b8c(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0033a3c0();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339c08  margelo::nitro::rive::JHybridRiveRuntimeSpec::getIsInitialized =====

/* margelo::nitro::rive::JHybridRiveRuntimeSpec::getIsInitialized() */

void __thiscall
margelo::nitro::rive::JHybridRiveRuntimeSpec::getIsInitialized(JHybridRiveRuntimeSpec *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _jobject *p_Var4;
  _jmethodID *p_Var5;
  JClass aJStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d9e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039d9e8), iVar3 != 0)) {
                    /* try { // try from 00339c98 to 00339caf has its CatchHandler @ 00339cc4 */
    FUN_0033a6e8(aJStack_40);
    DAT_0039d9e0 = facebook::jni::JClass::getMethod<unsigned_char()>(aJStack_40,"isInitialized");
    __cxa_guard_release(&DAT_0039d9e8);
  }
  p_Var5 = *(_jmethodID **)(this + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  cVar2 = _JNIEnv::CallBooleanMethod(p_Var4,p_Var5,DAT_0039d9e0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}


// ===== 00339cf0  margelo::nitro::rive::JHybridRiveRuntimeSpec::getInitError =====

/* margelo::nitro::rive::JHybridRiveRuntimeSpec::getInitError() */

void margelo::nitro::rive::JHybridRiveRuntimeSpec::getInitError(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  undefined8 *in_x8;
  _jmethodID *p_Var6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d9f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d9f8), iVar2 != 0)) {
                    /* try { // try from 00339dd0 to 00339de7 has its CatchHandler @ 00339dfc */
    FUN_0033a6e8(&local_58);
    DAT_0039d9f0 = facebook::jni::JClass::
                   getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
                             ((JClass *)&local_58,"getInitError");
    __cxa_guard_release(&DAT_0039d9f8);
  }
  p_Var6 = *(_jmethodID **)(in_x0 + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039d9f0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
  if (lVar4 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 3) = 0;
  }
  else {
                    /* try { // try from 00339d50 to 00339d5b has its CatchHandler @ 00339e10 */
    facebook::jni::JString::toStdString();
    lVar4 = local_40;
    *(undefined1 *)(in_x8 + 3) = 1;
    in_x8[1] = uStack_50;
    *in_x8 = local_58;
    in_x8[2] = local_48;
    if (local_40 != 0) {
                    /* try { // try from 00339d7c to 00339d8f has its CatchHandler @ 00339e38 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339e3c  margelo::nitro::rive::JHybridRiveRuntimeSpec::initialize =====

/* margelo::nitro::rive::JHybridRiveRuntimeSpec::initialize() */

void margelo::nitro::rive::JHybridRiveRuntimeSpec::initialize(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined8 *in_x8;
  _jmethodID *p_Var11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039da08 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039da08), iVar4 != 0)) {
                    /* try { // try from 0033a00c to 0033a023 has its CatchHandler @ 0033a0e0 */
    FUN_0033a6e8(&local_90);
    DAT_0039da00 = FUN_0031e0a0(&local_90,"initialize");
    __cxa_guard_release(&DAT_0039da08);
  }
  p_Var11 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var11,DAT_0039da00);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 00339ea0 to 00339ea7 has its CatchHandler @ 0033a174 */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0033a058 to 0033a05b has its CatchHandler @ 0033a0c4 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00339eb8 to 00339ecb has its CatchHandler @ 0033a180 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038a2f8;
                    /* try { // try from 00339f00 to 00339f07 has its CatchHandler @ 0033a134 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
LAB_00339f28:
    (*(code *)(*pppuVar9)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar9 = local_70;
    goto LAB_00339f28;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0033a0a0 to 0033a0a3 has its CatchHandler @ 0033a0c0 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00339f3c to 00339f4b has its CatchHandler @ 0033a180 */
  uVar8 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar7 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038a378;
                    /* try { // try from 00339f80 to 00339f87 has its CatchHandler @ 0033a0f4 */
  uStack_88 = uVar7;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar8,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00339fb4;
    lVar6 = 5;
    pppuVar9 = local_70;
  }
  (*(code *)(*pppuVar9)[lVar6])();
LAB_00339fb4:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00339fbc to 00339fcf has its CatchHandler @ 0033a17c */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a1b0  FUN_0033a1b0 =====

void FUN_0033a1b0(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0033a3c0(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a230  FUN_0033a230 =====

void FUN_0033a230(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0033a3c0(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a2b8  FUN_0033a2b8 =====

void FUN_0033a2b8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0033a3c0(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a338  FUN_0033a338 =====

void FUN_0033a338(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0033a3c0(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a3c0  FUN_0033a3c0 =====

void FUN_0033a3c0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  puVar2 = PTR_vtable_003963e8;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_003963e8 + 0xd8);
  param_1[0xe] = (long)(puVar2 + 0x160);
  *param_1 = (long)(puVar2 + 0x58);
  local_70 = &PTR_FUN_0038a3f8;
  plStack_68 = param_1;
                    /* try { // try from 0033a418 to 0033a41f has its CatchHandler @ 0033a494 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0033a44c;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_0033a44c:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 0033a454 to 0033a467 has its CatchHandler @ 0033a498 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a49c  FUN_0033a49c =====

void FUN_0033a49c(void *param_1)

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


// ===== 0033a4d4  FUN_0033a4d4 =====

void FUN_0033a4d4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038a3f8;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a530  FUN_0033a530 =====

void FUN_0033a530(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038a3f8;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a578  FUN_0033a578 =====

void FUN_0033a578(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a5b0  FUN_0033a5b0 =====

void FUN_0033a5b0(void *param_1)

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


// ===== 0033a5e8  FUN_0033a5e8 =====

void FUN_0033a5e8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar5 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 0033a614 to 0033a627 has its CatchHandler @ 0033a654 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a658  FUN_0033a658 =====

void FUN_0033a658(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396410) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0033a6a8  FUN_0033a6a8 =====

undefined * FUN_0033a6a8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396418;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a6e8  FUN_0033a6e8 =====

void FUN_0033a6e8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396440 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396440), iVar2 != 0))
  {
                    /* try { // try from 0033a758 to 0033a76b has its CatchHandler @ 0033a77c */
    facebook::jni::findClassStatic(PTR_kBaseName_00396448);
    __cxa_guard_release(PTR_cls_00396440);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396438;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033a7a8  FUN_0033a7a8 =====

void FUN_0033a7a8(long *param_1)

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


// ===== 0033a834  FUN_0033a834 =====

void FUN_0033a834(long *param_1)

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


// ===== 0033a8c0  FUN_0033a8c0 =====

void FUN_0033a8c0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038a378;
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


// ===== 0033a958  FUN_0033a958 =====

void FUN_0033a958(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038a378;
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


// ===== 0033a9e4  FUN_0033a9e4 =====

void FUN_0033a9e4(long param_1)

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
  *puVar4 = &PTR_FUN_0038a378;
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


// ===== 0033aa5c  FUN_0033aa5c =====

void FUN_0033aa5c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038a378;
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


// ===== 0033aac0  FUN_0033aac0 =====

void FUN_0033aac0(long param_1)

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


// ===== 0033ab4c  FUN_0033ab4c =====

void FUN_0033ab4c(void *param_1)

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


// ===== 0033abcc  FUN_0033abcc =====

void FUN_0033abcc(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 0033ac04 to 0033ac0f has its CatchHandler @ 0033ac78 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0033ac1c to 0033ac27 has its CatchHandler @ 0033ac60 */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033aca0  FUN_0033aca0 =====

void FUN_0033aca0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive22JHybridRiveRuntimeSpec10initializeEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0033acf0  FUN_0033acf0 =====

pointer_____offset_0x10___ * FUN_0033acf0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038a3d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033ad30  FUN_0033ad30 =====

void FUN_0033ad30(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038a2f8;
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


// ===== 0033adc8  FUN_0033adc8 =====

void FUN_0033adc8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038a2f8;
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


// ===== 0033ae54  FUN_0033ae54 =====

void FUN_0033ae54(long param_1)

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
  *puVar4 = &PTR_FUN_0038a2f8;
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


// ===== 0033aecc  FUN_0033aecc =====

void FUN_0033aecc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038a2f8;
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


// ===== 0033af30  FUN_0033af30 =====

void FUN_0033af30(long param_1)

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


// ===== 0033afbc  FUN_0033afbc =====

void FUN_0033afbc(void *param_1)

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


// ===== 0033b03c  FUN_0033b03c =====

void FUN_0033b03c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 0033b078  FUN_0033b078 =====

void FUN_0033b078(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive22JHybridRiveRuntimeSpec10initializeEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0033b0c8  FUN_0033b0c8 =====

pointer_____offset_0x10___ * FUN_0033b0c8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038a358;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b108  FUN_0033b108 =====

void FUN_0033b108(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038a478;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b14c  FUN_0033b14c =====

void FUN_0033b14c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038a478;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b1a4  FUN_0033b1a4 =====

void FUN_0033b1a4(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0033b1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b1e4  FUN_0033b1e4 =====

void FUN_0033b1e4(void *param_1)

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


// ===== 0033b21c  margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  long *plVar10;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_58 = PTR_kDescriptor_00389d38;
  local_60 = PTR_s_initHybrid_00389d30;
  local_50 = PTR_call_00389d40;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridRi_001d4eec._41_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridRi_001d4eec._33_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridRi_001d4eec._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridRi_001d4eec._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridRi_001d4eec._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridRi_001d4eec._1_8_;
  pcVar9[0x34] = '\0';
  pcVar9[0x30] = 'P';
  pcVar9[0x31] = 'a';
  pcVar9[0x32] = 'r';
  pcVar9[0x33] = 't';
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
  *(undefined8 *)(pcVar9 + 0x28) = uVar7;
  *(undefined8 *)(pcVar9 + 0x20) = uVar6;
                    /* try { // try from 0033b288 to 0033b28f has its CatchHandler @ 0033b300 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0033b298 to 0033b2bf has its CatchHandler @ 0033b314 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0033b2c8 to 0033b2db has its CatchHandler @ 0033b310 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b33c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveRuntimeSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0033b368 to 0033b373 has its CatchHandler @ 0033b3a4 */
  FUN_00339418(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b3f0  margelo::nitro::rive::JHybridRiveRuntimeSpec::getIsInitialized =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveRuntimeSpec::getIsInitialized() */

void __thiscall
margelo::nitro::rive::JHybridRiveRuntimeSpec::getIsInitialized(JHybridRiveRuntimeSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getIsInitialized(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b434  margelo::nitro::rive::JHybridRiveRuntimeSpec::getInitError =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveRuntimeSpec::getInitError() */

void __thiscall
margelo::nitro::rive::JHybridRiveRuntimeSpec::getInitError(JHybridRiveRuntimeSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getInitError();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b478  margelo::nitro::rive::JHybridRiveRuntimeSpec::initialize =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveRuntimeSpec::initialize() */

void __thiscall
margelo::nitro::rive::JHybridRiveRuntimeSpec::initialize(JHybridRiveRuntimeSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    initialize();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b4bc  margelo::nitro::rive::JHybridRiveViewSpec::JavaPart::getJHybridRiveViewSpec =====

/* margelo::nitro::rive::JHybridRiveViewSpec::JavaPart::getJHybridRiveViewSpec() */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::JavaPart::getJHybridRiveViewSpec(JavaPart *this)

{
  long lVar1;
  long lVar2;
  runtime_error *this_00;
  long *in_x8;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  margelo::nitro::JHybridObject::JavaPart::getJHybridObject();
  if ((local_38 == 0) ||
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396468,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0033b584 to 0033b58f has its CatchHandler @ 0033b5c4 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridRiveViewSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0033b5a4 to 0033b5bb has its CatchHandler @ 0033b5bc */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    *in_x8 = lVar2;
    in_x8[1] = (long)local_30;
    if (local_30 != (long *)0x0) {
      FUN_00259a00(1,local_30 + 1);
      if ((local_30 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b600  FUN_0033b600 =====

void FUN_0033b600(long *param_1)

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


// ===== 0033b68c  margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveViewSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::initHybrid(undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0033b6e4(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b6e4  FUN_0033b6e4 =====

void FUN_0033b6e4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  CxxPart *pCVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  CxxPart *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar2 = (CxxPart *)operator_new(0x20);
                    /* try { // try from 0033b71c to 0033b723 has its CatchHandler @ 0033b800 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396470 + 0x10;
                    /* try { // try from 0033b734 to 0033b73b has its CatchHandler @ 0033b7f8 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0033b740 to 0033b75b has its CatchHandler @ 0033b814 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0033b764 to 0033b76f has its CatchHandler @ 0033b7c8 */
  local_50 = pCVar2;
  local_40 = lVar4;
  FUN_00319a60(&local_40,&local_50);
  pCVar2 = local_50;
  local_50 = (CxxPart *)0x0;
  if (pCVar2 != (CxxPart *)0x0) {
    (**(code **)(*(long *)pCVar2 + 8))();
  }
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0033b790 to 0033b7a3 has its CatchHandler @ 0033b810 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b84c  FUN_0033b84c =====

void FUN_0033b84c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_00395e68 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 0033b888 to 0033b89b has its CatchHandler @ 0033b8d8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b8dc  margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  runtime_error *this;
  bad_alloc *pbVar9;
  long *in_x1;
  long *in_x8;
  long lVar10;
  long *plVar11;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR_target_class_00396890;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_0033bb9c:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0033bba8 to 0033bbb3 has its CatchHandler @ 0033bd40 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridRiveViewSpec::JavaPart!")
    ;
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0033bbc4 to 0033bbdb has its CatchHandler @ 0033bd3c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0033bde4;
  }
  if (((*PTR_target_class_00396898 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396898),
     (int)param_1 != 0)) {
                    /* try { // try from 0033bbec to 0033bbfb has its CatchHandler @ 0033bd00 */
    facebook::jni::findClassStatic(PTR_kBaseName_003968a0);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396898);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0033bde4;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_003968a0);
LAB_0033bc40:
                    /* try { // try from 0033bc40 to 0033bc4f has its CatchHandler @ 0033bd2c */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0033bde4;
                    /* try { // try from 0033bc74 to 0033bc8f has its CatchHandler @ 0033bd14 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_003968a0);
  }
  else {
                    /* try { // try from 0033b934 to 0033b947 has its CatchHandler @ 0033bd80 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0033b950 to 0033b967 has its CatchHandler @ 0033bd7c */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0033bc40;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0033b978 to 0033b993 has its CatchHandler @ 0033bd84 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0033bce8 to 0033bcff has its CatchHandler @ 0033bd84 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0033bde4;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 0033b9b0 to 0033b9c3 has its CatchHandler @ 0033bd78 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_0033bb9c;
                    /* try { // try from 0033b9c8 to 0033b9cf has its CatchHandler @ 0033bd68 */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0038b4d8;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00396458;
                    /* try { // try from 0033ba00 to 0033ba1b has its CatchHandler @ 0033bd60 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396458 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00396460 + 0x140;
    plVar5[5] = (long)(PTR_construction_vtable_00396460 + 0x2b8);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0033ba34 to 0033ba4f has its CatchHandler @ 0033bd88 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0033ba54 to 0033ba63 has its CatchHandler @ 0033bd50 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0033ba6c to 0033ba7f has its CatchHandler @ 0033bd74 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00396450 + 0x150;
    puVar2 = PTR_vtable_00396450 + 0x350;
    plVar5[5] = (long)(PTR_vtable_00396450 + 0x2c8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 0033baa0 to 0033babb has its CatchHandler @ 0033bd90 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar7 + 0xa8))(plVar7,local_88);
    param_1 = (basic_strong_ref *)facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 != 0) {
      plVar5[4] = lVar6;
      lVar6 = (long)plVar11 + *(long *)(plVar5[3] + -0x20);
      if ((lVar6 != -0x20) &&
         ((*(long *)(lVar6 + 0x28) == 0 || (*(long *)(*(long *)(lVar6 + 0x28) + 8) == -1)))) {
        FUN_00259a00(1,plVar5 + 1);
        FUN_00259a00(1,plVar5 + 2);
        lVar10 = *(long *)(lVar6 + 0x28);
        *(long *)(lVar6 + 0x20) = lVar6;
        *(long **)(lVar6 + 0x28) = plVar5;
        if (lVar10 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        param_1 = (basic_strong_ref *)FUN_00255510(0xffffffffffffffff,plVar5 + 1);
        if (param_1 == (basic_strong_ref *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          param_1 = (basic_strong_ref *)std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x150);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 0033bb58 to 0033bb6b has its CatchHandler @ 0033bd70 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0033bde4;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0033bcb0 to 0033bcc7 has its CatchHandler @ 0033bd90 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0033bde4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0033bde8  FUN_0033bde8 =====

void FUN_0033bde8(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00341c20();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033be5c  FUN_0033be5c =====

void FUN_0033be5c(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00341c20();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033bed8  margelo::nitro::rive::JHybridRiveViewSpec::getArtboardName =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getArtboardName() */

void margelo::nitro::rive::JHybridRiveViewSpec::getArtboardName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  undefined8 *in_x8;
  _jmethodID *p_Var6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039da38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039da38), iVar2 != 0)) {
                    /* try { // try from 0033bfb8 to 0033bfcf has its CatchHandler @ 0033bfe4 */
    FUN_00341f48(&local_58);
    DAT_0039da30 = facebook::jni::JClass::
                   getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
                             ((JClass *)&local_58,"getArtboardName");
    __cxa_guard_release(&DAT_0039da38);
  }
  p_Var6 = *(_jmethodID **)(in_x0 + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039da30);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
  if (lVar4 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 3) = 0;
  }
  else {
                    /* try { // try from 0033bf38 to 0033bf43 has its CatchHandler @ 0033bff8 */
    facebook::jni::JString::toStdString();
    lVar4 = local_40;
    *(undefined1 *)(in_x8 + 3) = 1;
    in_x8[1] = uStack_50;
    *in_x8 = local_58;
    in_x8[2] = local_48;
    if (local_40 != 0) {
                    /* try { // try from 0033bf64 to 0033bf77 has its CatchHandler @ 0033c020 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c024  margelo::nitro::rive::JHybridRiveViewSpec::setArtboardName =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setArtboardName(std::__ndk1::optional<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setArtboardName
          (JHybridRiveViewSpec *this,optional *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  optional *poVar6;
  _jmethodID *p_Var7;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039da48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039da48), iVar3 != 0)) {
                    /* try { // try from 0033c0fc to 0033c113 has its CatchHandler @ 0033c12c */
    FUN_00341f48(&local_40);
    DAT_0039da40 = FUN_00348580(&local_40,"setArtboardName");
    __cxa_guard_release(&DAT_0039da48);
  }
  p_Var7 = *(_jmethodID **)(this + 8);
  if (param_1[0x18] == (optional)0x0) {
    local_40 = 0;
  }
  else {
    poVar6 = *(optional **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      poVar6 = param_1 + 1;
    }
    facebook::jni::make_jstring((char *)poVar6);
  }
  lVar2 = local_40;
                    /* try { // try from 0033c090 to 0033c0ab has its CatchHandler @ 0033c144 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var7,DAT_0039da40,lVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  lVar2 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0033c0b4 to 0033c0c7 has its CatchHandler @ 0033c140 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c16c  margelo::nitro::rive::JHybridRiveViewSpec::getStateMachineName =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getStateMachineName() */

void margelo::nitro::rive::JHybridRiveViewSpec::getStateMachineName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  undefined8 *in_x8;
  _jmethodID *p_Var6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039da58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039da58), iVar2 != 0)) {
                    /* try { // try from 0033c24c to 0033c263 has its CatchHandler @ 0033c278 */
    FUN_00341f48(&local_58);
    DAT_0039da50 = facebook::jni::JClass::
                   getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
                             ((JClass *)&local_58,"getStateMachineName");
    __cxa_guard_release(&DAT_0039da58);
  }
  p_Var6 = *(_jmethodID **)(in_x0 + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039da50);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
  if (lVar4 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 3) = 0;
  }
  else {
                    /* try { // try from 0033c1cc to 0033c1d7 has its CatchHandler @ 0033c28c */
    facebook::jni::JString::toStdString();
    lVar4 = local_40;
    *(undefined1 *)(in_x8 + 3) = 1;
    in_x8[1] = uStack_50;
    *in_x8 = local_58;
    in_x8[2] = local_48;
    if (local_40 != 0) {
                    /* try { // try from 0033c1f8 to 0033c20b has its CatchHandler @ 0033c2b4 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c2b8  margelo::nitro::rive::JHybridRiveViewSpec::setStateMachineName =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setStateMachineName(std::__ndk1::optional<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setStateMachineName
          (JHybridRiveViewSpec *this,optional *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  optional *poVar6;
  _jmethodID *p_Var7;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039da68 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039da68), iVar3 != 0)) {
                    /* try { // try from 0033c390 to 0033c3a7 has its CatchHandler @ 0033c3c0 */
    FUN_00341f48(&local_40);
    DAT_0039da60 = FUN_00348580(&local_40,"setStateMachineName");
    __cxa_guard_release(&DAT_0039da68);
  }
  p_Var7 = *(_jmethodID **)(this + 8);
  if (param_1[0x18] == (optional)0x0) {
    local_40 = 0;
  }
  else {
    poVar6 = *(optional **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      poVar6 = param_1 + 1;
    }
    facebook::jni::make_jstring((char *)poVar6);
  }
  lVar2 = local_40;
                    /* try { // try from 0033c324 to 0033c33f has its CatchHandler @ 0033c3d8 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var7,DAT_0039da60,lVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  lVar2 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0033c348 to 0033c35b has its CatchHandler @ 0033c3d4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c400  margelo::nitro::rive::JHybridRiveViewSpec::getAutoPlay =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getAutoPlay() */

uint __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getAutoPlay(JHybridRiveViewSpec *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  _jmethodID *p_Var7;
  uint uVar8;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039da78 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039da78), iVar3 != 0)) {
                    /* try { // try from 0033c4cc to 0033c4db has its CatchHandler @ 0033c4f0 */
    FUN_00341f48(&local_40);
    DAT_0039da70 = FUN_00348504(&local_40);
    __cxa_guard_release(&DAT_0039da78);
  }
  p_Var7 = *(_jmethodID **)(this + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,DAT_0039da70);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
                    /* try { // try from 0033c45c to 0033c463 has its CatchHandler @ 0033c504 */
    cVar2 = FUN_00345500(&local_40);
                    /* try { // try from 0033c464 to 0033c483 has its CatchHandler @ 0033c52c */
    plVar6 = (long *)facebook::jni::Environment::current();
    uVar8 = (uint)(cVar2 != '\0');
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8 | (uint)(lVar5 != 0) << 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c530  margelo::nitro::rive::JHybridRiveViewSpec::setAutoPlay =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setAutoPlay(std::__ndk1::optional<bool>) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setAutoPlay(JHybridRiveViewSpec *this,uint param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  _jmethodID *p_Var6;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039da88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039da88), iVar3 != 0)) {
                    /* try { // try from 0033c5f8 to 0033c607 has its CatchHandler @ 0033c620 */
    FUN_00341f48(&local_40);
    DAT_0039da80 = FUN_00348488(&local_40);
    __cxa_guard_release(&DAT_0039da88);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  if ((param_2 & 0xff00) == 0) {
    local_40 = 0;
  }
  else {
    FUN_00323638(&local_40,param_2);
  }
  lVar2 = local_40;
                    /* try { // try from 0033c590 to 0033c5ab has its CatchHandler @ 0033c638 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,DAT_0039da80,lVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar2 != 0) {
                    /* try { // try from 0033c5b0 to 0033c5c3 has its CatchHandler @ 0033c634 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c660  margelo::nitro::rive::JHybridRiveViewSpec::getFile =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getFile() */

void margelo::nitro::rive::JHybridRiveViewSpec::getFile(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  long *in_x8;
  _jmethodID *p_Var6;
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039da98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039da98), iVar2 != 0)) {
                    /* try { // try from 0033c730 to 0033c73f has its CatchHandler @ 0033c754 */
    FUN_00341f48(&local_50);
    DAT_0039da90 = FUN_0034839c(&local_50);
    __cxa_guard_release(&DAT_0039da98);
  }
  p_Var6 = *(_jmethodID **)(in_x0 + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039da90);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0033c6bc to 0033c6c7 has its CatchHandler @ 0033c768 */
  local_40 = lVar4;
  JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec((JavaPart *)&local_40);
  lVar4 = local_40;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0xa0));
  }
  *in_x8 = (long)local_50;
  in_x8[1] = local_48;
  if (local_40 != 0) {
                    /* try { // try from 0033c6e8 to 0033c6fb has its CatchHandler @ 0033c790 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c794  margelo::nitro::rive::JHybridRiveViewSpec::setFile =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setFile(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridRiveFileSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setFile(JHybridRiveViewSpec *this,shared_ptr *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  _jobject *p_Var4;
  long *plVar5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039daa8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039daa8), iVar2 != 0)) {
                    /* try { // try from 0033c8bc to 0033c8cb has its CatchHandler @ 0033c8e4 */
    FUN_00341f48(auStack_50);
    DAT_0039daa0 = FUN_00348320(auStack_50);
    __cxa_guard_release(&DAT_0039daa8);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  lVar3 = __dynamic_cast(*(undefined8 *)param_1,PTR_typeinfo_00394870,PTR_typeinfo_00395e90,
                         0xffffffffffffffff);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar5 + 1);
  }
  uVar7 = *(undefined8 *)(lVar3 + 8);
                    /* try { // try from 0033c818 to 0033c833 has its CatchHandler @ 0033c8f8 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,DAT_0039daa0,uVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if ((plVar5 == (long *)0x0) || (lVar3 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar3 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c920  margelo::nitro::rive::JHybridRiveViewSpec::getAlignment =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getAlignment() */

ulong __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getAlignment(JHybridRiveViewSpec *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  _jmethodID *p_Var9;
  undefined8 uVar10;
  ulong unaff_x22;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dab8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039dab8), iVar3 != 0)) {
                    /* try { // try from 0033ca34 to 0033ca43 has its CatchHandler @ 0033cae8 */
    FUN_00341f48(&local_40);
    DAT_0039dab0 = FUN_00348234(&local_40);
    __cxa_guard_release(&DAT_0039dab8);
  }
  p_Var9 = *(_jmethodID **)(this + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039dab0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
  if (lVar5 == 0) {
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    if (((*PTR_clazz_00396480 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_clazz_00396480), iVar3 != 0)) {
                    /* try { // try from 0033ca68 to 0033ca73 has its CatchHandler @ 0033cac8 */
      FUN_003480f4(PTR_clazz_00396478);
      __cxa_guard_release(PTR_clazz_00396480);
    }
    puVar2 = PTR_fieldOrdinal_00396488;
    if (((*PTR_fieldOrdinal_00396490 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_fieldOrdinal_00396490), iVar3 != 0)) {
                    /* try { // try from 0033ca94 to 0033caa7 has its CatchHandler @ 0033cabc */
      uVar10 = FUN_002622e0(PTR_clazz_00396478,"value");
      *(undefined8 *)puVar2 = uVar10;
      __cxa_guard_release(PTR_fieldOrdinal_00396490);
    }
    lVar5 = local_40;
    uVar10 = *(undefined8 *)puVar2;
                    /* try { // try from 0033c9ac to 0033c9c3 has its CatchHandler @ 0033cb18 */
    plVar6 = (long *)facebook::jni::Environment::current();
    uVar7 = (**(code **)(*plVar6 + 800))(plVar6,lVar5,uVar10);
    unaff_x22 = uVar7 >> 8 & 0xffffff;
    uVar7 = uVar7 & 0xffffffff;
    if (lVar5 != 0) {
                    /* try { // try from 0033c9d0 to 0033c9e3 has its CatchHandler @ 0033cb14 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
    }
    uVar8 = 0x100000000;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8 | (unaff_x22 & 0xffffff) << 8 | uVar7 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033cb1c  margelo::nitro::rive::JHybridRiveViewSpec::setAlignment =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setAlignment(std::__ndk1::optional<margelo::nitro::rive::Alignment>)
    */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setAlignment(JHybridRiveViewSpec *this,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  _jobject *p_Var13;
  logic_error *this_00;
  _jmethodID *p_Var14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_80 [24];
  basic_string abStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dac8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_0039dac8), iVar11 != 0)) {
                    /* try { // try from 0033ce84 to 0033ce93 has its CatchHandler @ 0033d1dc */
    FUN_00341f48(abStack_50);
    DAT_0039dac0 = FUN_00348078(abStack_50);
    __cxa_guard_release(&DAT_0039dac8);
  }
  p_Var14 = *(_jmethodID **)(this + 8);
  if ((param_2 & 0xff00000000) == 0) {
    uVar15 = 0;
  }
  else {
    if (((*PTR_clazz_003964b8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_clazz_003964b8), iVar11 != 0)) {
                    /* try { // try from 0033cebc to 0033cec7 has its CatchHandler @ 0033d1c8 */
      FUN_003480f4(PTR_clazz_003964b0);
      __cxa_guard_release(PTR_clazz_003964b8);
    }
    puVar10 = PTR_fieldBOTTOMRIGHT_00396540;
    puVar9 = PTR_fieldBOTTOMCENTER_00396530;
    puVar8 = PTR_fieldBOTTOMLEFT_00396520;
    puVar7 = PTR_fieldCENTERRIGHT_00396510;
    puVar6 = PTR_fieldCENTER_00396500;
    puVar5 = PTR_fieldCENTERLEFT_003964f0;
    puVar4 = PTR_fieldTOPRIGHT_003964e0;
    puVar3 = PTR_fieldTOPCENTER_003964d0;
    puVar2 = PTR_fieldTOPLEFT_003964c0;
    iVar11 = (int)param_2;
    if (iVar11 < 4) {
      if (iVar11 < 2) {
        if (iVar11 == 0) {
          if (((*PTR_fieldTOPLEFT_003964c8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_fieldTOPLEFT_003964c8), iVar11 != 0)) {
                    /* try { // try from 0033cf74 to 0033cf7f has its CatchHandler @ 0033d1b4 */
            uVar15 = FUN_003481b4("TOPLEFT");
            *(undefined8 *)puVar2 = uVar15;
            __cxa_guard_release(PTR_fieldTOPLEFT_003964c8);
          }
          uVar15 = *(undefined8 *)puVar2;
          uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033cd0c to 0033cd23 has its CatchHandler @ 0033d294 */
          plVar12 = (long *)facebook::jni::Environment::current();
          uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
        }
        else {
          if (iVar11 != 1) {
LAB_0033ced8:
            std::__ndk1::to_string(iVar11);
            this_00 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0033cef0 to 0033cf03 has its CatchHandler @ 0033d23c */
            std::__ndk1::operator+("Invalid enum value (",abStack_50);
                    /* try { // try from 0033cf04 to 0033cf17 has its CatchHandler @ 0033d224 */
            FUN_00263450(abStack_68,auStack_80,&DAT_001d5be0);
                    /* try { // try from 0033cf1c to 0033cf63 has its CatchHandler @ 0033d1f0 */
            std::logic_error::logic_error(this_00,abStack_68);
            *(undefined **)this_00 = PTR_vtable_00394b38 + 0x10;
            if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
              __cxa_throw(this_00,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
            }
            goto LAB_0033d270;
          }
          if (((*PTR_fieldTOPCENTER_003964d8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_fieldTOPCENTER_003964d8), iVar11 != 0)) {
                    /* try { // try from 0033cfd4 to 0033cfdf has its CatchHandler @ 0033d18c */
            uVar15 = FUN_003481b4("TOPCENTER");
            *(undefined8 *)puVar3 = uVar15;
            __cxa_guard_release(PTR_fieldTOPCENTER_003964d8);
          }
          uVar15 = *(undefined8 *)puVar3;
          uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033cc20 to 0033cc37 has its CatchHandler @ 0033d28c */
          plVar12 = (long *)facebook::jni::Environment::current();
          uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
        }
      }
      else if (iVar11 == 2) {
        if (((*PTR_fieldTOPRIGHT_003964e8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_fieldTOPRIGHT_003964e8), iVar11 != 0)) {
                    /* try { // try from 0033cfa4 to 0033cfaf has its CatchHandler @ 0033d1a0 */
          uVar15 = FUN_003481b4("TOPRIGHT");
          *(undefined8 *)puVar4 = uVar15;
          __cxa_guard_release(PTR_fieldTOPRIGHT_003964e8);
        }
        uVar15 = *(undefined8 *)puVar4;
        uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033cd50 to 0033cd67 has its CatchHandler @ 0033d290 */
        plVar12 = (long *)facebook::jni::Environment::current();
        uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
      }
      else {
        if (iVar11 != 3) goto LAB_0033ced8;
        if (((*PTR_fieldCENTERLEFT_003964f8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_fieldCENTERLEFT_003964f8), iVar11 != 0)) {
                    /* try { // try from 0033d004 to 0033d00f has its CatchHandler @ 0033d178 */
          uVar15 = FUN_003481b4("CENTERLEFT");
          *(undefined8 *)puVar5 = uVar15;
          __cxa_guard_release(PTR_fieldCENTERLEFT_003964f8);
        }
        uVar15 = *(undefined8 *)puVar5;
        uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033cc74 to 0033cc8b has its CatchHandler @ 0033d288 */
        plVar12 = (long *)facebook::jni::Environment::current();
        uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
      }
    }
    else if (iVar11 < 6) {
      if (iVar11 == 4) {
        if (((*PTR_fieldCENTER_00396508 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_fieldCENTER_00396508), iVar11 != 0)) {
                    /* try { // try from 0033d064 to 0033d06f has its CatchHandler @ 0033d150 */
          uVar15 = FUN_003481b4("CENTER");
          *(undefined8 *)puVar6 = uVar15;
          __cxa_guard_release(PTR_fieldCENTER_00396508);
        }
        uVar15 = *(undefined8 *)puVar6;
        uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033cd94 to 0033cdab has its CatchHandler @ 0033d284 */
        plVar12 = (long *)facebook::jni::Environment::current();
        uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
      }
      else {
        if (iVar11 != 5) goto LAB_0033ced8;
        if (((*PTR_fieldCENTERRIGHT_00396518 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_fieldCENTERRIGHT_00396518), iVar11 != 0)) {
                    /* try { // try from 0033d034 to 0033d03f has its CatchHandler @ 0033d164 */
          uVar15 = FUN_003481b4("CENTERRIGHT");
          *(undefined8 *)puVar7 = uVar15;
          __cxa_guard_release(PTR_fieldCENTERRIGHT_00396518);
        }
        uVar15 = *(undefined8 *)puVar7;
        uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033ccc8 to 0033ccdf has its CatchHandler @ 0033d280 */
        plVar12 = (long *)facebook::jni::Environment::current();
        uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
      }
    }
    else if (iVar11 == 6) {
      if (((*PTR_fieldBOTTOMLEFT_00396528 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_fieldBOTTOMLEFT_00396528), iVar11 != 0)) {
                    /* try { // try from 0033d094 to 0033d09f has its CatchHandler @ 0033d13c */
        uVar15 = FUN_003481b4("BOTTOMLEFT");
        *(undefined8 *)puVar8 = uVar15;
        __cxa_guard_release(PTR_fieldBOTTOMLEFT_00396528);
      }
      uVar15 = *(undefined8 *)puVar8;
      uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033cdd8 to 0033cdef has its CatchHandler @ 0033d27c */
      plVar12 = (long *)facebook::jni::Environment::current();
      uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
    }
    else if (iVar11 == 7) {
      if (((*PTR_fieldBOTTOMCENTER_00396538 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_fieldBOTTOMCENTER_00396538), iVar11 != 0)) {
                    /* try { // try from 0033d0f4 to 0033d0ff has its CatchHandler @ 0033d114 */
        uVar15 = FUN_003481b4("BOTTOMCENTER");
        *(undefined8 *)puVar9 = uVar15;
        __cxa_guard_release(PTR_fieldBOTTOMCENTER_00396538);
      }
      uVar15 = *(undefined8 *)puVar9;
      uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033ce1c to 0033ce33 has its CatchHandler @ 0033d278 */
      plVar12 = (long *)facebook::jni::Environment::current();
      uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
    }
    else {
      if (iVar11 != 8) goto LAB_0033ced8;
      if (((*PTR_fieldBOTTOMRIGHT_00396548 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_fieldBOTTOMRIGHT_00396548), iVar11 != 0)) {
                    /* try { // try from 0033d0c4 to 0033d0cf has its CatchHandler @ 0033d128 */
        uVar15 = FUN_003481b4("BOTTOMRIGHT");
        *(undefined8 *)puVar10 = uVar15;
        __cxa_guard_release(PTR_fieldBOTTOMRIGHT_00396548);
      }
      uVar15 = *(undefined8 *)puVar10;
      uVar16 = *(undefined8 *)PTR_clazz_003964b0;
                    /* try { // try from 0033cbc0 to 0033cbd7 has its CatchHandler @ 0033d274 */
      plVar12 = (long *)facebook::jni::Environment::current();
      uVar15 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar15);
    }
  }
  p_Var13 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var13,p_Var14,DAT_0039dac0,uVar15);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
LAB_0033d270:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033d298  margelo::nitro::rive::JHybridRiveViewSpec::getFit =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getFit() */

ulong __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getFit(JHybridRiveViewSpec *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  _jmethodID *p_Var9;
  undefined8 uVar10;
  ulong unaff_x22;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dad8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039dad8), iVar3 != 0)) {
                    /* try { // try from 0033d3ac to 0033d3bb has its CatchHandler @ 0033d460 */
    FUN_00341f48(&local_40);
    DAT_0039dad0 = FUN_00347f8c(&local_40);
    __cxa_guard_release(&DAT_0039dad8);
  }
  p_Var9 = *(_jmethodID **)(this + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039dad0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
  if (lVar5 == 0) {
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    if (((*PTR_clazz_00396560 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_clazz_00396560), iVar3 != 0)) {
                    /* try { // try from 0033d3e0 to 0033d3eb has its CatchHandler @ 0033d440 */
      FUN_00347e4c(PTR_clazz_00396558);
      __cxa_guard_release(PTR_clazz_00396560);
    }
    puVar2 = PTR_fieldOrdinal_00396568;
    if (((*PTR_fieldOrdinal_00396570 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_fieldOrdinal_00396570), iVar3 != 0)) {
                    /* try { // try from 0033d40c to 0033d41f has its CatchHandler @ 0033d434 */
      uVar10 = FUN_002622e0(PTR_clazz_00396558,"value");
      *(undefined8 *)puVar2 = uVar10;
      __cxa_guard_release(PTR_fieldOrdinal_00396570);
    }
    lVar5 = local_40;
    uVar10 = *(undefined8 *)puVar2;
                    /* try { // try from 0033d324 to 0033d33b has its CatchHandler @ 0033d490 */
    plVar6 = (long *)facebook::jni::Environment::current();
    uVar7 = (**(code **)(*plVar6 + 800))(plVar6,lVar5,uVar10);
    unaff_x22 = uVar7 >> 8 & 0xffffff;
    uVar7 = uVar7 & 0xffffffff;
    if (lVar5 != 0) {
                    /* try { // try from 0033d348 to 0033d35b has its CatchHandler @ 0033d48c */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
    }
    uVar8 = 0x100000000;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8 | (unaff_x22 & 0xffffff) << 8 | uVar7 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033d494  margelo::nitro::rive::JHybridRiveViewSpec::setFit =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setFit(std::__ndk1::optional<margelo::nitro::rive::Fit>)
    */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setFit(JHybridRiveViewSpec *this,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  _jobject *p_Var12;
  logic_error *this_00;
  _jmethodID *p_Var13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_80 [24];
  basic_string abStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dae8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0039dae8), iVar10 != 0)) {
                    /* try { // try from 0033d7b0 to 0033d7bf has its CatchHandler @ 0033dac4 */
    FUN_00341f48(abStack_50);
    DAT_0039dae0 = FUN_00347dd0(abStack_50);
    __cxa_guard_release(&DAT_0039dae8);
  }
  p_Var13 = *(_jmethodID **)(this + 8);
  if ((param_2 & 0xff00000000) == 0) {
    uVar14 = 0;
  }
  else {
    if (((*PTR_clazz_00396598 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_clazz_00396598), iVar10 != 0)) {
                    /* try { // try from 0033d7e8 to 0033d7f3 has its CatchHandler @ 0033dab0 */
      FUN_00347e4c(PTR_clazz_00396590);
      __cxa_guard_release(PTR_clazz_00396598);
    }
    puVar9 = PTR_fieldLAYOUT_00396610;
    puVar8 = PTR_fieldSCALEDOWN_00396600;
    puVar7 = PTR_fieldNONE_003965f0;
    puVar6 = PTR_fieldFITHEIGHT_003965e0;
    puVar5 = PTR_fieldFITWIDTH_003965d0;
    puVar4 = PTR_fieldCOVER_003965c0;
    puVar3 = PTR_fieldCONTAIN_003965b0;
    puVar2 = PTR_fieldFILL_003965a0;
    iVar10 = (int)param_2;
    if (iVar10 < 4) {
      if (iVar10 < 2) {
        if (iVar10 == 0) {
          if (((*PTR_fieldFILL_003965a8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_fieldFILL_003965a8), iVar10 != 0)) {
                    /* try { // try from 0033d960 to 0033d96b has its CatchHandler @ 0033da4c */
            uVar14 = FUN_00347f0c(&DAT_001d4f7e);
            *(undefined8 *)puVar2 = uVar14;
            __cxa_guard_release(PTR_fieldFILL_003965a8);
          }
          uVar14 = *(undefined8 *)puVar2;
          uVar15 = *(undefined8 *)PTR_clazz_00396590;
                    /* try { // try from 0033d67c to 0033d693 has its CatchHandler @ 0033db68 */
          plVar11 = (long *)facebook::jni::Environment::current();
          uVar14 = (**(code **)(*plVar11 + 0x488))(plVar11,uVar15,uVar14);
        }
        else {
          if (iVar10 != 1) {
LAB_0033d804:
            std::__ndk1::to_string(iVar10);
            this_00 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0033d81c to 0033d82f has its CatchHandler @ 0033db24 */
            std::__ndk1::operator+("Invalid enum value (",abStack_50);
                    /* try { // try from 0033d830 to 0033d843 has its CatchHandler @ 0033db0c */
            FUN_00263450(abStack_68,auStack_80,&DAT_001d5be0);
                    /* try { // try from 0033d848 to 0033d88f has its CatchHandler @ 0033dad8 */
            std::logic_error::logic_error(this_00,abStack_68);
            *(undefined **)this_00 = PTR_vtable_00394b38 + 0x10;
            if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
              __cxa_throw(this_00,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
            }
            goto LAB_0033db58;
          }
          if (((*PTR_fieldCONTAIN_003965b8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_fieldCONTAIN_003965b8), iVar10 != 0)) {
                    /* try { // try from 0033d8a0 to 0033d8ab has its CatchHandler @ 0033da9c */
            uVar14 = FUN_00347f0c("CONTAIN");
            *(undefined8 *)puVar3 = uVar14;
            __cxa_guard_release(PTR_fieldCONTAIN_003965b8);
          }
          uVar14 = *(undefined8 *)puVar3;
          uVar15 = *(undefined8 *)PTR_clazz_00396590;
                    /* try { // try from 0033d52c to 0033d543 has its CatchHandler @ 0033db78 */
          plVar11 = (long *)facebook::jni::Environment::current();
          uVar14 = (**(code **)(*plVar11 + 0x488))(plVar11,uVar15,uVar14);
        }
      }
      else if (iVar10 == 2) {
        if (((*PTR_fieldCOVER_003965c8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_fieldCOVER_003965c8), iVar10 != 0)) {
                    /* try { // try from 0033d9c0 to 0033d9cb has its CatchHandler @ 0033da24 */
          uVar14 = FUN_00347f0c("COVER");
          *(undefined8 *)puVar4 = uVar14;
          __cxa_guard_release(PTR_fieldCOVER_003965c8);
        }
        uVar14 = *(undefined8 *)puVar4;
        uVar15 = *(undefined8 *)PTR_clazz_00396590;
                    /* try { // try from 0033d704 to 0033d71b has its CatchHandler @ 0033db60 */
        plVar11 = (long *)facebook::jni::Environment::current();
        uVar14 = (**(code **)(*plVar11 + 0x488))(plVar11,uVar15,uVar14);
      }
      else {
        if (iVar10 != 3) goto LAB_0033d804;
        if (((*PTR_fieldFITWIDTH_003965d8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_fieldFITWIDTH_003965d8), iVar10 != 0)) {
                    /* try { // try from 0033d900 to 0033d90b has its CatchHandler @ 0033da74 */
          uVar14 = FUN_00347f0c("FITWIDTH");
          *(undefined8 *)puVar5 = uVar14;
          __cxa_guard_release(PTR_fieldFITWIDTH_003965d8);
        }
        uVar14 = *(undefined8 *)puVar5;
        uVar15 = *(undefined8 *)PTR_clazz_00396590;
                    /* try { // try from 0033d5e4 to 0033d5fb has its CatchHandler @ 0033db70 */
        plVar11 = (long *)facebook::jni::Environment::current();
        uVar14 = (**(code **)(*plVar11 + 0x488))(plVar11,uVar15,uVar14);
      }
    }
    else if (iVar10 < 6) {
      if (iVar10 == 4) {
        if (((*PTR_fieldFITHEIGHT_003965e8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_fieldFITHEIGHT_003965e8), iVar10 != 0)) {
                    /* try { // try from 0033d990 to 0033d99b has its CatchHandler @ 0033da38 */
          uVar14 = FUN_00347f0c("FITHEIGHT");
          *(undefined8 *)puVar6 = uVar14;
          __cxa_guard_release(PTR_fieldFITHEIGHT_003965e8);
        }
        uVar14 = *(undefined8 *)puVar6;
        uVar15 = *(undefined8 *)PTR_clazz_00396590;
                    /* try { // try from 0033d6c0 to 0033d6d7 has its CatchHandler @ 0033db64 */
        plVar11 = (long *)facebook::jni::Environment::current();
        uVar14 = (**(code **)(*plVar11 + 0x488))(plVar11,uVar15,uVar14);
      }
      else {
        if (iVar10 != 5) goto LAB_0033d804;
        if (((*PTR_fieldNONE_003965f8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_fieldNONE_003965f8), iVar10 != 0)) {
                    /* try { // try from 0033d8d0 to 0033d8db has its CatchHandler @ 0033da88 */
          uVar14 = FUN_00347f0c(&DAT_001d5975);
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(PTR_fieldNONE_003965f8);
        }
        uVar14 = *(undefined8 *)puVar7;
        uVar15 = *(undefined8 *)PTR_clazz_00396590;
                    /* try { // try from 0033d590 to 0033d5a7 has its CatchHandler @ 0033db74 */
        plVar11 = (long *)facebook::jni::Environment::current();
        uVar14 = (**(code **)(*plVar11 + 0x488))(plVar11,uVar15,uVar14);
      }
    }
    else if (iVar10 == 6) {
      if (((*PTR_fieldSCALEDOWN_00396608 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_fieldSCALEDOWN_00396608), iVar10 != 0)) {
                    /* try { // try from 0033d9f0 to 0033d9fb has its CatchHandler @ 0033da10 */
        uVar14 = FUN_00347f0c("SCALEDOWN");
        *(undefined8 *)puVar8 = uVar14;
        __cxa_guard_release(PTR_fieldSCALEDOWN_00396608);
      }
      uVar14 = *(undefined8 *)puVar8;
      uVar15 = *(undefined8 *)PTR_clazz_00396590;
                    /* try { // try from 0033d748 to 0033d75f has its CatchHandler @ 0033db5c */
      plVar11 = (long *)facebook::jni::Environment::current();
      uVar14 = (**(code **)(*plVar11 + 0x488))(plVar11,uVar15,uVar14);
    }
    else {
      if (iVar10 != 7) goto LAB_0033d804;
      if (((*PTR_fieldLAYOUT_00396618 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_fieldLAYOUT_00396618), iVar10 != 0)) {
                    /* try { // try from 0033d930 to 0033d93b has its CatchHandler @ 0033da60 */
        uVar14 = FUN_00347f0c("LAYOUT");
        *(undefined8 *)puVar9 = uVar14;
        __cxa_guard_release(PTR_fieldLAYOUT_00396618);
      }
      uVar14 = *(undefined8 *)puVar9;
      uVar15 = *(undefined8 *)PTR_clazz_00396590;
                    /* try { // try from 0033d638 to 0033d64f has its CatchHandler @ 0033db6c */
      plVar11 = (long *)facebook::jni::Environment::current();
      uVar14 = (**(code **)(*plVar11 + 0x488))(plVar11,uVar15,uVar14);
    }
  }
  p_Var12 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var12,p_Var13,DAT_0039dae0,uVar14);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
LAB_0033db58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033db7c  margelo::nitro::rive::JHybridRiveViewSpec::getLayoutScaleFactor =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getLayoutScaleFactor() */

ulong __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getLayoutScaleFactor(JHybridRiveViewSpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  _jmethodID *p_Var8;
  ulong uVar9;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039daf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039daf8), iVar2 != 0)) {
                    /* try { // try from 0033dc58 to 0033dc6f has its CatchHandler @ 0033dc84 */
    FUN_00341f48(&local_40);
    DAT_0039daf0 = FUN_00326344(&local_40,"getLayoutScaleFactor");
    __cxa_guard_release(&DAT_0039daf8);
  }
  p_Var8 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var8,DAT_0039daf0);
  uVar5 = facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
  if (lVar4 == 0) {
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
                    /* try { // try from 0033dbdc to 0033dbe3 has its CatchHandler @ 0033dc98 */
    uVar9 = FUN_0025f988(&local_40);
                    /* try { // try from 0033dbe4 to 0033dbfb has its CatchHandler @ 0033dcc0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    uVar5 = (**(code **)(*plVar6 + 0xb8))(plVar6,lVar4);
    uVar7 = uVar9 & 0xffffffffffffff00;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar9 & 0xff | uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5,lVar4 != 0);
}


// ===== 0033dcc4  margelo::nitro::rive::JHybridRiveViewSpec::setLayoutScaleFactor =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setLayoutScaleFactor(std::__ndk1::optional<double>) */

void margelo::nitro::rive::JHybridRiveViewSpec::setLayoutScaleFactor
               (long param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  _jmethodID *p_Var6;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db08 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039db08), iVar3 != 0)) {
                    /* try { // try from 0033dd90 to 0033dd9f has its CatchHandler @ 0033ddb8 */
    FUN_00341f48(&local_40);
    DAT_0039db00 = FUN_00347d54(&local_40);
    __cxa_guard_release(&DAT_0039db08);
  }
  p_Var6 = *(_jmethodID **)(param_1 + 8);
  if (param_3 == '\0') {
    local_40 = 0;
  }
  else {
    FUN_003231b4(param_2,&local_40);
  }
  lVar2 = local_40;
                    /* try { // try from 0033dd28 to 0033dd43 has its CatchHandler @ 0033ddd0 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,DAT_0039db00,lVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar2 != 0) {
                    /* try { // try from 0033dd48 to 0033dd5b has its CatchHandler @ 0033ddcc */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033ddf8  margelo::nitro::rive::JHybridRiveViewSpec::getDataBind =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getDataBind() */

void margelo::nitro::rive::JHybridRiveViewSpec::getDataBind(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  undefined1 *in_x8;
  _jmethodID *p_Var6;
  undefined1 uStack_61;
  undefined1 auStack_60 [24];
  uint local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039db18), iVar2 != 0)) {
                    /* try { // try from 0033df28 to 0033df37 has its CatchHandler @ 0033df4c */
    FUN_00341f48(auStack_60);
    DAT_0039db10 = FUN_00347c68(auStack_60);
    __cxa_guard_release(&DAT_0039db18);
  }
  p_Var6 = *(_jmethodID **)(in_x0 + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039db10);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
  if (lVar4 == 0) {
    *in_x8 = 0;
    in_x8[0x20] = 0;
  }
  else {
                    /* try { // try from 0033de58 to 0033de63 has its CatchHandler @ 0033df68 */
    JVariant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName::toCpp();
    *in_x8 = 0;
    *(undefined4 *)(in_x8 + 0x18) = 0xffffffff;
    if (local_48 == 0xffffffff) {
      in_x8[0x20] = 1;
    }
    else {
                    /* try { // try from 0033de88 to 0033de97 has its CatchHandler @ 0033df64 */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>&&>_0038ae68
                )[local_48])(&uStack_61);
      in_x8[0x20] = 1;
      *(uint *)(in_x8 + 0x18) = local_48;
      if (local_48 != 0xffffffff) {
                    /* try { // try from 0033debc to 0033dec7 has its CatchHandler @ 0033df60 */
        (*(code *)(&PTR_FUN_0038ae50)[local_48])(&uStack_61,auStack_60);
      }
    }
                    /* try { // try from 0033dee0 to 0033def3 has its CatchHandler @ 0033df90 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033df94  margelo::nitro::rive::JHybridRiveViewSpec::setDataBind =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setDataBind(std::__ndk1::optional<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setDataBind(JHybridRiveViewSpec *this,optional *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  _jclass *p_Var8;
  long lVar9;
  _jobject *p_Var10;
  logic_error *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  optional *poVar14;
  _jmethodID *p_Var15;
  long *plVar16;
  undefined8 uVar17;
  _jmethodID *p_Var18;
  undefined1 auStack_98 [24];
  long local_80;
  long local_78 [3];
  long local_60 [3];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_0039db28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039db28), iVar6 != 0)) {
                    /* try { // try from 0033e354 to 0033e363 has its CatchHandler @ 0033e7b0 */
    FUN_00341f48(local_60);
    DAT_0039db20 = FUN_00347658(local_60);
    __cxa_guard_release(&DAT_0039db28);
  }
  p_Var15 = *(_jmethodID **)(this + 8);
  if (param_1[0x20] == (optional)0x0) {
    local_80 = 0;
    lVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar13 = (ulong)uVar1;
    if (uVar1 == 0xffffffff) {
      uVar13 = 0xffffffffffffffff;
    }
    if (uVar13 == 2) {
      if (uVar1 != 2) {
LAB_0033e37c:
        if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0033e928;
        FUN_002a9bc8();
LAB_0033e390:
        plVar11 = (logic_error *)__cxa_allocate_exception(0x10);
        uVar13 = (ulong)*(uint *)(param_1 + 0x18);
        if (*(uint *)(param_1 + 0x18) == 0xffffffff) {
          uVar13 = 0xffffffffffffffff;
        }
                    /* try { // try from 0033e3a8 to 0033e3af has its CatchHandler @ 0033e8b0 */
        std::__ndk1::to_string(uVar13);
                    /* try { // try from 0033e3b0 to 0033e3c3 has its CatchHandler @ 0033e898 */
        FUN_002b3788(local_78,"Variant holds unknown index! (",auStack_98);
                    /* try { // try from 0033e3c4 to 0033e3d7 has its CatchHandler @ 0033e848 */
        FUN_00263450(local_60,local_78,&DAT_001d5d7c);
                    /* try { // try from 0033e3dc to 0033e423 has its CatchHandler @ 0033e810 */
        std::logic_error::logic_error(plVar11,(basic_string *)local_60);
        *(undefined **)plVar11 = PTR_vtable_00394b38 + 0x10;
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(plVar11,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
        }
        goto LAB_0033e928;
      }
      if (((*PTR_clazz_003966e0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_clazz_003966e0), iVar6 != 0)) {
                    /* try { // try from 0033e460 to 0033e46b has its CatchHandler @ 0033e740 */
        FUN_003478f0(PTR_clazz_003966d8);
        __cxa_guard_release(PTR_clazz_003966e0);
      }
      if (((*PTR_create_003966f0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_create_003966f0), iVar6 != 0)) {
                    /* try { // try from 0033e48c to 0033e48f has its CatchHandler @ 0033e72c */
        uVar17 = FUN_003479b0();
        *(undefined8 *)PTR_create_003966e8 = uVar17;
        __cxa_guard_release(PTR_create_003966f0);
      }
      poVar14 = *(optional **)(param_1 + 0x10);
      p_Var18 = *(_jmethodID **)PTR_clazz_003966d8;
      if (((byte)*param_1 & 1) == 0) {
        poVar14 = param_1 + 1;
      }
      facebook::jni::make_jstring((char *)poVar14);
      lVar7 = local_60[0];
                    /* try { // try from 0033e104 to 0033e127 has its CatchHandler @ 0033e8f0 */
      p_Var8 = (_jclass *)facebook::jni::Environment::current();
      lVar7 = _JNIEnv::CallStaticObjectMethod
                        (p_Var8,p_Var18,*(undefined8 *)PTR_create_003966e8,lVar7);
      facebook::jni::throwPendingJniExceptionAsCppException();
      local_78[0] = lVar7;
      if (local_60[0] != 0) {
                    /* try { // try from 0033e134 to 0033e147 has its CatchHandler @ 0033e8cc */
        plVar16 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar16 + 0xb8))(plVar16,local_60[0]);
      }
      if (((*PTR_method_003966c8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_method_003966c8), iVar6 != 0)) {
                    /* try { // try from 0033e594 to 0033e5a3 has its CatchHandler @ 0033e768 */
        FUN_003477b4(local_60);
        uVar17 = FUN_00347874(local_60);
        *(undefined8 *)PTR_method_003966c0 = uVar17;
        __cxa_guard_release(PTR_method_003966c8);
      }
      if (((*PTR_cls_00396640 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_cls_00396640), iVar6 != 0)) {
                    /* try { // try from 0033e5d0 to 0033e5e3 has its CatchHandler @ 0033e708 */
        facebook::jni::findClassStatic(PTR_kBaseName_00396648);
        __cxa_guard_release(PTR_cls_00396640);
      }
      p_Var18 = *(_jmethodID **)PTR_cls_00396638;
                    /* try { // try from 0033e174 to 0033e197 has its CatchHandler @ 0033e8d0 */
      p_Var8 = (_jclass *)facebook::jni::Environment::current();
      lVar7 = _JNIEnv::CallStaticObjectMethod
                        (p_Var8,p_Var18,*(undefined8 *)PTR_method_003966c0,lVar7);
      facebook::jni::throwPendingJniExceptionAsCppException();
      lVar9 = local_78[0];
      local_80 = lVar7;
      if (local_78[0] != 0) {
                    /* try { // try from 0033e1a4 to 0033e1b7 has its CatchHandler @ 0033e8c8 */
        plVar16 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar16 + 0xb8))(plVar16,lVar9);
      }
    }
    else if (uVar13 == 1) {
      if (uVar1 != 1) goto LAB_0033e37c;
      iVar6 = *(int *)param_1;
      if (((*PTR_clazz_00396678 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_clazz_00396678), iVar5 != 0)) {
                    /* try { // try from 0033e434 to 0033e43f has its CatchHandler @ 0033e754 */
        FUN_00347aac(PTR_clazz_00396670);
        __cxa_guard_release(PTR_clazz_00396678);
      }
      puVar4 = PTR_fieldNONE_00396690;
      puVar3 = PTR_fieldAUTO_00396680;
      if (iVar6 == 0) {
        if (((*PTR_fieldAUTO_00396688 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_fieldAUTO_00396688), iVar6 != 0)) {
                    /* try { // try from 0033e6c0 to 0033e6cb has its CatchHandler @ 0033e6e0 */
          uVar17 = FUN_00347b6c(&DAT_001d5594);
          *(undefined8 *)puVar3 = uVar17;
          __cxa_guard_release(PTR_fieldAUTO_00396688);
        }
        uVar17 = *(undefined8 *)puVar3;
        uVar12 = *(undefined8 *)PTR_clazz_00396670;
                    /* try { // try from 0033e1e4 to 0033e1fb has its CatchHandler @ 0033e8c0 */
        plVar16 = (long *)facebook::jni::Environment::current();
        uVar17 = (**(code **)(*plVar16 + 0x488))(plVar16,uVar12,uVar17);
      }
      else {
        if (iVar6 != 1) {
          std::__ndk1::to_string(iVar6);
          plVar11 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0033e60c to 0033e61f has its CatchHandler @ 0033e878 */
          std::__ndk1::operator+("Invalid enum value (",(basic_string *)local_60);
                    /* try { // try from 0033e620 to 0033e633 has its CatchHandler @ 0033e7f8 */
          FUN_00263450(local_78,auStack_98,&DAT_001d5be0);
                    /* try { // try from 0033e638 to 0033e67f has its CatchHandler @ 0033e7c4 */
          std::logic_error::logic_error(plVar11,(basic_string *)local_78);
          *(undefined **)plVar11 = PTR_vtable_00394b38 + 0x10;
          if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            __cxa_throw(plVar11,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
          }
          goto LAB_0033e928;
        }
        if (((*PTR_fieldNONE_00396698 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_fieldNONE_00396698), iVar6 != 0)) {
                    /* try { // try from 0033e690 to 0033e69b has its CatchHandler @ 0033e6f4 */
          uVar17 = FUN_00347b6c(&DAT_001d5975);
          *(undefined8 *)puVar4 = uVar17;
          __cxa_guard_release(PTR_fieldNONE_00396698);
        }
        uVar17 = *(undefined8 *)puVar4;
        uVar12 = *(undefined8 *)PTR_clazz_00396670;
                    /* try { // try from 0033e098 to 0033e0af has its CatchHandler @ 0033e8c4 */
        plVar16 = (long *)facebook::jni::Environment::current();
        uVar17 = (**(code **)(*plVar16 + 0x488))(plVar16,uVar12,uVar17);
      }
      puVar3 = PTR_method_00396658;
      if (((*PTR_method_00396660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_method_00396660), iVar6 != 0)) {
                    /* try { // try from 0033e52c to 0033e53b has its CatchHandler @ 0033e780 */
        FUN_003477b4(local_60);
        uVar12 = FUN_00347a30(local_60);
        *(undefined8 *)puVar3 = uVar12;
        __cxa_guard_release(PTR_method_00396660);
      }
      if (((*PTR_cls_00396640 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_cls_00396640), iVar6 != 0)) {
                    /* try { // try from 0033e560 to 0033e573 has its CatchHandler @ 0033e714 */
        facebook::jni::findClassStatic(PTR_kBaseName_00396648);
        __cxa_guard_release(PTR_cls_00396640);
      }
      p_Var18 = *(_jmethodID **)PTR_cls_00396638;
      p_Var8 = (_jclass *)facebook::jni::Environment::current();
      lVar7 = _JNIEnv::CallStaticObjectMethod(p_Var8,p_Var18,*(undefined8 *)puVar3,uVar17);
      facebook::jni::throwPendingJniExceptionAsCppException();
      local_80 = lVar7;
    }
    else {
      if (uVar13 != 0) goto LAB_0033e390;
      if (uVar1 != 0) goto LAB_0033e37c;
      lVar7 = __dynamic_cast(*(undefined8 *)param_1,PTR_typeinfo_00395338,PTR_typeinfo_00396978,
                             0xffffffffffffffff);
      plVar16 = *(long **)(param_1 + 8);
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
      }
      else {
        FUN_00259a00(1,plVar16 + 1);
      }
      uVar17 = *(undefined8 *)(lVar7 + 8);
      if (((*PTR_method_00396630 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_method_00396630), iVar6 != 0)) {
                    /* try { // try from 0033e4bc to 0033e4cb has its CatchHandler @ 0033e798 */
        FUN_003477b4(local_60);
        uVar12 = FUN_00347bec(local_60);
        *(undefined8 *)PTR_method_00396628 = uVar12;
        __cxa_guard_release(PTR_method_00396630);
      }
      if (((*PTR_cls_00396640 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_cls_00396640), iVar6 != 0)) {
                    /* try { // try from 0033e4f8 to 0033e50b has its CatchHandler @ 0033e720 */
        facebook::jni::findClassStatic(PTR_kBaseName_00396648);
        __cxa_guard_release(PTR_cls_00396640);
      }
      p_Var18 = *(_jmethodID **)PTR_cls_00396638;
                    /* try { // try from 0033e28c to 0033e2af has its CatchHandler @ 0033e8e0 */
      p_Var8 = (_jclass *)facebook::jni::Environment::current();
      lVar7 = _JNIEnv::CallStaticObjectMethod
                        (p_Var8,p_Var18,*(undefined8 *)PTR_method_00396628,uVar17);
      facebook::jni::throwPendingJniExceptionAsCppException();
      local_80 = lVar7;
      if ((plVar16 != (long *)0x0) &&
         (lVar9 = FUN_00255510(0xffffffffffffffff,plVar16 + 1), lVar7 = local_80, lVar9 == 0)) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        std::__ndk1::__shared_weak_count::__release_weak();
        lVar7 = local_80;
      }
    }
  }
                    /* try { // try from 0033e2e4 to 0033e2ff has its CatchHandler @ 0033e904 */
  p_Var10 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var10,p_Var15,DAT_0039db20,lVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  lVar7 = local_80;
  if (local_80 != 0) {
                    /* try { // try from 0033e308 to 0033e31b has its CatchHandler @ 0033e900 */
    plVar16 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar16 + 0xb8))(plVar16,lVar7);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0033e928:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033e92c  margelo::nitro::rive::JHybridRiveViewSpec::getOnError =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getOnError() */

void margelo::nitro::rive::JHybridRiveViewSpec::getOnError(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long in_x0;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  long in_x8;
  _jmethodID *p_Var8;
  undefined8 uVar9;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039db38), iVar3 != 0)) {
                    /* try { // try from 0033eafc to 0033eb0b has its CatchHandler @ 0033ec04 */
    FUN_00341f48(&local_40);
    DAT_0039db30 = FUN_00346098(&local_40);
    __cxa_guard_release(&DAT_0039db38);
  }
  p_Var8 = *(_jmethodID **)(in_x0 + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039db30);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (((*PTR_cls_00394358 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00394358), iVar3 != 0))
  {
                    /* try { // try from 0033eb30 to 0033eb43 has its CatchHandler @ 0033ebf0 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394360);
    __cxa_guard_release(PTR_cls_00394358);
  }
  uVar9 = *(undefined8 *)PTR_cls_00394350;
                    /* try { // try from 0033e9a4 to 0033e9bf has its CatchHandler @ 0033ec78 */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6,lVar5,uVar9);
  if (cVar2 == '\0') {
                    /* try { // try from 0033eaac to 0033eab7 has its CatchHandler @ 0033ec38 */
    FUN_00346184(&local_40,lVar5);
    local_48 = local_40;
    local_40 = 0;
    local_50 = 0;
                    /* try { // try from 0033eac4 to 0033eacb has its CatchHandler @ 0033ec18 */
    FUN_00346234();
    FUN_003462e8(&local_48);
    FUN_003463a4(&local_50);
    FUN_00346414(&local_40);
  }
  else {
    lVar7 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 0033e9cc to 0033e9e7 has its CatchHandler @ 0033ec7c */
      plVar6 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar5);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar7 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
                    /* try { // try from 0033ebbc to 0033ebd3 has its CatchHandler @ 0033ec7c */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0033ec74;
      }
    }
    local_48 = lVar7;
    if (((*PTR_hybridDataField_00394330 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_00394330), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0033eb74 to 0033eb77 has its CatchHandler @ 0033ebd4 */
      uVar9 = FUN_0026288c(local_40);
      *(undefined8 *)PTR_hybridDataField_00394328 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_00394330);
    }
                    /* try { // try from 0033ea00 to 0033ea4f has its CatchHandler @ 0033ec48 */
    lVar7 = facebook::jni::getHybridDataFromField
                      ((JObject *)&local_48,(JField *)PTR_hybridDataField_00394328);
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
LAB_0033ea34:
      *(long **)(in_x8 + 0x20) = plVar6;
    }
    else {
      if (plVar6 != (long *)(lVar7 + 0x10)) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        goto LAB_0033ea34;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar7 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 0033ea58 to 0033ea6b has its CatchHandler @ 0033ec40 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
    }
  }
  if (lVar5 != 0) {
                    /* try { // try from 0033ea74 to 0033ea87 has its CatchHandler @ 0033ec44 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0033ec74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033ec80  margelo::nitro::rive::JHybridRiveViewSpec::setOnError =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setOnError(std::__ndk1::function<void
   (margelo::nitro::rive::RiveError const&)> const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setOnError(JHybridRiveViewSpec *this,function *param_1)

{
  long lVar1;
  undefined *puVar2;
  _jmethodID *p_Var3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  function *pfVar7;
  _jclass *p_Var8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  _jobject *p_Var13;
  _jmethodID *p_Var14;
  undefined8 uVar15;
  long local_98;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db48 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039db48), iVar5 != 0)) {
                    /* try { // try from 0033f0ac to 0033f0bb has its CatchHandler @ 0033f294 */
    FUN_00341f48(&local_60);
    DAT_0039db40 = FUN_00345b28(&local_60);
    __cxa_guard_release(&DAT_0039db48);
  }
  p_Var14 = *(_jmethodID **)(this + 8);
  if (((*PTR_isHybrid_00396810 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_isHybrid_00396810), iVar5 != 0)) {
                    /* try { // try from 0033f0e4 to 0033f0fb has its CatchHandler @ 0033f280 */
    FUN_00345c14(&local_80);
    local_78 = local_80;
    bVar4 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *PTR_isHybrid_00396808 = bVar4 & 1;
    __cxa_guard_release(PTR_isHybrid_00396810);
  }
  plVar6 = (long *)operator_new(0x40);
  pfVar7 = *(function **)(param_1 + 0x20);
  *plVar6 = (long)&PTR_FUN_0038afa0;
  if (pfVar7 != (function *)0x0) {
    if (pfVar7 == param_1) {
      lVar10 = *(long *)param_1;
      plVar6[6] = (long)(plVar6 + 2);
      (**(code **)(lVar10 + 0x18))(param_1);
      goto LAB_0033ed28;
    }
                    /* try { // try from 0033ed08 to 0033ed27 has its CatchHandler @ 0033f330 */
    pfVar7 = (function *)(**(code **)(*(long *)pfVar7 + 0x10))();
  }
  plVar6[6] = (long)pfVar7;
LAB_0033ed28:
  if (*PTR_isHybrid_00396808 == '\0') {
                    /* try { // try from 0033ee54 to 0033ee5b has its CatchHandler @ 0033f2e0 */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 0033ee60 to 0033ee7b has its CatchHandler @ 0033f360 */
    plVar9 = (long *)facebook::jni::Environment::current();
    plVar9 = (long *)(**(code **)(*plVar9 + 200))(plVar9,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0033ee84 to 0033ee8f has its CatchHandler @ 0033f2b8 */
    local_68 = plVar6;
    local_60 = plVar9;
    FUN_00319a60(&local_60,&local_68);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_60;
    if (local_60 != (long *)0x0) {
                    /* try { // try from 0033eeb0 to 0033eec3 has its CatchHandler @ 0033f2fc */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,plVar6);
    }
                    /* try { // try from 0033eecc to 0033eee7 has its CatchHandler @ 0033f358 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar6 + 200))(plVar6,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0033eeec to 0033ef07 has its CatchHandler @ 0033f350 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar11 = (**(code **)(*plVar6 + 200))(plVar6,lVar10);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar11;
    if (((DAT_0039dfb8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039dfb8), iVar5 != 0)) {
      FUN_00345de4(&DAT_0039dfb0);
      __cxa_guard_release(&DAT_0039dfb8);
    }
    if (((DAT_0039dfc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039dfc8), iVar5 != 0)) {
                    /* try { // try from 0033f1ec to 0033f1ef has its CatchHandler @ 0033f204 */
      DAT_0039dfc0 = FUN_00345ea4();
      __cxa_guard_release(&DAT_0039dfc8);
    }
    lVar11 = local_70;
    uVar15 = DAT_0039dfc0;
                    /* try { // try from 0033ef38 to 0033ef53 has its CatchHandler @ 0033f348 */
    plVar6 = (long *)facebook::jni::Environment::current();
    plVar6 = (long *)(**(code **)(*plVar6 + 200))(plVar6,lVar11);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = plVar6;
                    /* try { // try from 0033ef58 to 0033ef83 has its CatchHandler @ 0033f380 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var3 = DAT_0039dfb0;
    plVar9 = (long *)facebook::jni::Environment::current();
    plVar9 = (long *)(**(code **)(*plVar9 + 200))(plVar9,plVar6);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar9;
                    /* try { // try from 0033ef88 to 0033ef9b has its CatchHandler @ 0033f2a8 */
    local_98 = _JNIEnv::NewObject(p_Var8,p_Var3,uVar15,plVar9);
    if (plVar9 != (long *)0x0) {
                    /* try { // try from 0033efa4 to 0033efb7 has its CatchHandler @ 0033f2f8 */
      plVar12 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar12 + 0xb8))(plVar12,plVar9);
    }
                    /* try { // try from 0033efc0 to 0033efc3 has its CatchHandler @ 0033f380 */
    facebook::jni::throwCppExceptionIf(local_98 == 0);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 0033efc8 to 0033efdb has its CatchHandler @ 0033f2f4 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,plVar6);
    }
    if (lVar11 != 0) {
                    /* try { // try from 0033efe0 to 0033eff3 has its CatchHandler @ 0033f2f0 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar11);
    }
    if (lVar10 != 0) {
                    /* try { // try from 0033f000 to 0033f013 has its CatchHandler @ 0033f2ec */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar10);
    }
    if (local_88 != 0) {
                    /* try { // try from 0033f020 to 0033f033 has its CatchHandler @ 0033f2e8 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,local_88);
    }
  }
  else {
    if (((DAT_0039df88 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039df88), iVar5 != 0)) {
      FUN_00345de4(&DAT_0039df80);
      __cxa_guard_release(&DAT_0039df88);
    }
    if (((DAT_0039df98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039df98), iVar5 != 0)) {
                    /* try { // try from 0033f158 to 0033f15b has its CatchHandler @ 0033f258 */
      DAT_0039df90 = FUN_00345f20();
      __cxa_guard_release(&DAT_0039df98);
    }
    uVar15 = DAT_0039df90;
                    /* try { // try from 0033ed68 to 0033ed8b has its CatchHandler @ 0033f3ac */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    local_98 = _JNIEnv::NewObject(p_Var8,DAT_0039df80,uVar15);
    facebook::jni::throwCppExceptionIf(local_98 == 0);
                    /* try { // try from 0033ed90 to 0033edab has its CatchHandler @ 0033f3a8 */
    plVar9 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar9 + 200))(plVar9,local_98);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_00396820;
    local_70 = lVar10;
    if (((*PTR_holderField_00396828 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_holderField_00396828), iVar5 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0033f18c to 0033f193 has its CatchHandler @ 0033f22c */
      uVar15 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar2 = uVar15;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_00396828);
    }
    lVar10 = local_70;
    uVar15 = *(undefined8 *)puVar2;
                    /* try { // try from 0033edd4 to 0033edeb has its CatchHandler @ 0033f37c */
    plVar9 = (long *)facebook::jni::Environment::current();
    local_68 = (long *)(**(code **)(*plVar9 + 0x2f8))(plVar9,lVar10,uVar15);
                    /* try { // try from 0033edf0 to 0033edfb has its CatchHandler @ 0033f300 */
    local_60 = plVar6;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    plVar6 = local_60;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_68;
    if (local_68 != (long *)0x0) {
                    /* try { // try from 0033ee1c to 0033ee2f has its CatchHandler @ 0033f344 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,plVar6);
    }
    lVar10 = local_70;
    if (local_70 != 0) {
                    /* try { // try from 0033ee38 to 0033ee4b has its CatchHandler @ 0033f340 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar10);
    }
  }
                    /* try { // try from 0033f03c to 0033f057 has its CatchHandler @ 0033f3c4 */
  p_Var13 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var13,p_Var14,DAT_0039db40,local_98);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_98 != 0) {
                    /* try { // try from 0033f05c to 0033f06f has its CatchHandler @ 0033f378 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033f3ec  margelo::nitro::rive::JHybridRiveViewSpec::awaitViewReady =====

/* margelo::nitro::rive::JHybridRiveViewSpec::awaitViewReady() */

void margelo::nitro::rive::JHybridRiveViewSpec::awaitViewReady(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  long *plVar12;
  undefined8 *in_x8;
  _jmethodID *p_Var13;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db58 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039db58), iVar4 != 0)) {
                    /* try { // try from 0033f5fc to 0033f613 has its CatchHandler @ 0033f6d0 */
    FUN_00341f48(&local_90);
    DAT_0039db50 = FUN_0031e0a0(&local_90,"awaitViewReady");
    __cxa_guard_release(&DAT_0039db58);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039db50);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0033f450 to 0033f457 has its CatchHandler @ 0033f774 */
  ppuVar7 = (undefined **)operator_new(0x68);
  ppuVar7[0xc] = (undefined *)0x0;
  *in_x8 = ppuVar7;
  ppuVar7[1] = (undefined *)0x0;
  *ppuVar7 = (undefined *)0x0;
  ppuVar7[3] = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  ppuVar7[5] = (undefined *)0x0;
  ppuVar7[4] = (undefined *)0x0;
  ppuVar7[7] = (undefined *)0x0;
  ppuVar7[6] = (undefined *)0x0;
  ppuVar7[9] = (undefined *)0x0;
  ppuVar7[8] = (undefined *)0x0;
  ppuVar7[0xb] = (undefined *)0x0;
  ppuVar7[10] = (undefined *)0x0;
  local_90 = ppuVar7;
                    /* try { // try from 0033f478 to 0033f47f has its CatchHandler @ 0033f764 */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_0038eb60;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0033f648 to 0033f64b has its CatchHandler @ 0033f6b4 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0033f4a8 to 0033f4bb has its CatchHandler @ 0033f780 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038b008;
                    /* try { // try from 0033f4f0 to 0033f4f7 has its CatchHandler @ 0033f724 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0033f518:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0033f518;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0033f690 to 0033f693 has its CatchHandler @ 0033f6b0 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0033f52c to 0033f53b has its CatchHandler @ 0033f780 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038b088;
                    /* try { // try from 0033f570 to 0033f577 has its CatchHandler @ 0033f6e4 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0033f5a4;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0033f5a4:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0033f5ac to 0033f5bf has its CatchHandler @ 0033f77c */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033f7b0  margelo::nitro::rive::JHybridRiveViewSpec::bindViewModelInstance =====

/* margelo::nitro::rive::JHybridRiveViewSpec::bindViewModelInstance(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::bindViewModelInstance
          (JHybridRiveViewSpec *this,shared_ptr *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  _jobject *p_Var4;
  long *plVar5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039db68), iVar2 != 0)) {
                    /* try { // try from 0033f8d8 to 0033f8ef has its CatchHandler @ 0033f908 */
    FUN_00341f48(auStack_50);
    DAT_0039db60 = FUN_00344674(auStack_50,"bindViewModelInstance");
    __cxa_guard_release(&DAT_0039db68);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  lVar3 = __dynamic_cast(*(undefined8 *)param_1,PTR_typeinfo_00395338,PTR_typeinfo_00396978,
                         0xffffffffffffffff);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar5 + 1);
  }
  uVar7 = *(undefined8 *)(lVar3 + 8);
                    /* try { // try from 0033f834 to 0033f84f has its CatchHandler @ 0033f91c */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,DAT_0039db60,uVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if ((plVar5 == (long *)0x0) || (lVar3 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar3 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033f944  margelo::nitro::rive::JHybridRiveViewSpec::getViewModelInstance =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getViewModelInstance() */

void margelo::nitro::rive::JHybridRiveViewSpec::getViewModelInstance(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long *in_x8;
  _jmethodID *p_Var7;
  long *local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db78 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039db78), iVar3 != 0)) {
                    /* try { // try from 0033fa38 to 0033fa4f has its CatchHandler @ 0033fa64 */
    FUN_00341f48(&local_50);
    DAT_0039db70 = FUN_00344580(&local_50,"getViewModelInstance");
    __cxa_guard_release(&DAT_0039db78);
  }
  p_Var7 = *(_jmethodID **)(in_x0 + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,DAT_0039db70);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0033f9a4 to 0033f9af has its CatchHandler @ 0033fa78 */
    JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar6 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)((long)plVar6 + *(long *)(*plVar6 + -0xa0));
    }
    *in_x8 = (long)plVar6;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 0033f9e4 to 0033f9f7 has its CatchHandler @ 0033faa0 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033faa4  margelo::nitro::rive::JHybridRiveViewSpec::play =====

/* margelo::nitro::rive::JHybridRiveViewSpec::play() */

void margelo::nitro::rive::JHybridRiveViewSpec::play(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined8 *in_x8;
  _jmethodID *p_Var11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039db88), iVar4 != 0)) {
                    /* try { // try from 0033fc74 to 0033fc8b has its CatchHandler @ 0033fd48 */
    FUN_00341f48(&local_90);
    DAT_0039db80 = FUN_0031e0a0(&local_90,&DAT_001d521d);
    __cxa_guard_release(&DAT_0039db88);
  }
  p_Var11 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var11,DAT_0039db80);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0033fb08 to 0033fb0f has its CatchHandler @ 0033fddc */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0033fcc0 to 0033fcc3 has its CatchHandler @ 0033fd2c */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0033fb20 to 0033fb33 has its CatchHandler @ 0033fde8 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038b108;
                    /* try { // try from 0033fb68 to 0033fb6f has its CatchHandler @ 0033fd9c */
  local_70 = &local_90;
  FUN_0031e2bc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
LAB_0033fb90:
    (*(code *)(*pppuVar9)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar9 = local_70;
    goto LAB_0033fb90;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0033fd08 to 0033fd0b has its CatchHandler @ 0033fd28 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0033fba4 to 0033fbb3 has its CatchHandler @ 0033fde8 */
  uVar8 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar7 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038b188;
                    /* try { // try from 0033fbe8 to 0033fbef has its CatchHandler @ 0033fd5c */
  uStack_88 = uVar7;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar8,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0033fc1c;
    lVar6 = 5;
    pppuVar9 = local_70;
  }
  (*(code *)(*pppuVar9)[lVar6])();
LAB_0033fc1c:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0033fc24 to 0033fc37 has its CatchHandler @ 0033fde4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033fe18  margelo::nitro::rive::JHybridRiveViewSpec::pause =====

/* margelo::nitro::rive::JHybridRiveViewSpec::pause() */

void margelo::nitro::rive::JHybridRiveViewSpec::pause(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined8 *in_x8;
  _jmethodID *p_Var11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039db98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039db98), iVar4 != 0)) {
                    /* try { // try from 0033ffe8 to 0033ffff has its CatchHandler @ 003400bc */
    FUN_00341f48(&local_90);
    DAT_0039db90 = FUN_0031e0a0(&local_90,"pause");
    __cxa_guard_release(&DAT_0039db98);
  }
  p_Var11 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var11,DAT_0039db90);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0033fe7c to 0033fe83 has its CatchHandler @ 00340150 */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00340034 to 00340037 has its CatchHandler @ 003400a0 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0033fe94 to 0033fea7 has its CatchHandler @ 0034015c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038b208;
                    /* try { // try from 0033fedc to 0033fee3 has its CatchHandler @ 00340110 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
LAB_0033ff04:
    (*(code *)(*pppuVar9)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar9 = local_70;
    goto LAB_0033ff04;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0034007c to 0034007f has its CatchHandler @ 0034009c */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0033ff18 to 0033ff27 has its CatchHandler @ 0034015c */
  uVar8 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar7 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038b288;
                    /* try { // try from 0033ff5c to 0033ff63 has its CatchHandler @ 003400d0 */
  uStack_88 = uVar7;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar8,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0033ff90;
    lVar6 = 5;
    pppuVar9 = local_70;
  }
  (*(code *)(*pppuVar9)[lVar6])();
LAB_0033ff90:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0033ff98 to 0033ffab has its CatchHandler @ 00340158 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034018c  margelo::nitro::rive::JHybridRiveViewSpec::reset =====

/* margelo::nitro::rive::JHybridRiveViewSpec::reset() */

void margelo::nitro::rive::JHybridRiveViewSpec::reset(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined8 *in_x8;
  _jmethodID *p_Var11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dba8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039dba8), iVar4 != 0)) {
                    /* try { // try from 0034035c to 00340373 has its CatchHandler @ 00340430 */
    FUN_00341f48(&local_90);
    DAT_0039dba0 = FUN_0031e0a0(&local_90,"reset");
    __cxa_guard_release(&DAT_0039dba8);
  }
  p_Var11 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var11,DAT_0039dba0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 003401f0 to 003401f7 has its CatchHandler @ 003404c4 */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 003403a8 to 003403ab has its CatchHandler @ 00340414 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00340208 to 0034021b has its CatchHandler @ 003404d0 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038b308;
                    /* try { // try from 00340250 to 00340257 has its CatchHandler @ 00340484 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
LAB_00340278:
    (*(code *)(*pppuVar9)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar9 = local_70;
    goto LAB_00340278;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 003403f0 to 003403f3 has its CatchHandler @ 00340410 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034028c to 0034029b has its CatchHandler @ 003404d0 */
  uVar8 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar7 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038b388;
                    /* try { // try from 003402d0 to 003402d7 has its CatchHandler @ 00340444 */
  uStack_88 = uVar7;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar8,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00340304;
    lVar6 = 5;
    pppuVar9 = local_70;
  }
  (*(code *)(*pppuVar9)[lVar6])();
LAB_00340304:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0034030c to 0034031f has its CatchHandler @ 003404cc */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00340500  margelo::nitro::rive::JHybridRiveViewSpec::playIfNeeded =====

/* margelo::nitro::rive::JHybridRiveViewSpec::playIfNeeded() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::playIfNeeded(JHybridRiveViewSpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dbb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039dbb8), iVar2 != 0)) {
                    /* try { // try from 00340580 to 00340597 has its CatchHandler @ 003405ac */
    FUN_00341f48(auStack_40);
    DAT_0039dbb0 = FUN_0034236c(auStack_40,"playIfNeeded");
    __cxa_guard_release(&DAT_0039dbb8);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039dbb0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003405d8  margelo::nitro::rive::JHybridRiveViewSpec::onEventListener =====

/* margelo::nitro::rive::JHybridRiveViewSpec::onEventListener(std::__ndk1::function<void
   (margelo::nitro::rive::UnifiedRiveEvent const&)> const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::onEventListener
          (JHybridRiveViewSpec *this,function *param_1)

{
  long lVar1;
  undefined *puVar2;
  _jmethodID *p_Var3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  function *pfVar7;
  _jclass *p_Var8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  _jobject *p_Var13;
  _jmethodID *p_Var14;
  undefined8 uVar15;
  long local_98;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dbc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039dbc8), iVar5 != 0)) {
                    /* try { // try from 00340a04 to 00340a13 has its CatchHandler @ 00340bec */
    FUN_00341f48(&local_60);
    DAT_0039dbc0 = FUN_003423f0(&local_60);
    __cxa_guard_release(&DAT_0039dbc8);
  }
  p_Var14 = *(_jmethodID **)(this + 8);
  if (((*PTR_isHybrid_00396848 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_isHybrid_00396848), iVar5 != 0)) {
                    /* try { // try from 00340a3c to 00340a53 has its CatchHandler @ 00340bd8 */
    FUN_003424dc(&local_80);
    local_78 = local_80;
    bVar4 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *PTR_isHybrid_00396840 = bVar4 & 1;
    __cxa_guard_release(PTR_isHybrid_00396848);
  }
  plVar6 = (long *)operator_new(0x40);
  pfVar7 = *(function **)(param_1 + 0x20);
  *plVar6 = (long)&PTR_FUN_0038b408;
  if (pfVar7 != (function *)0x0) {
    if (pfVar7 == param_1) {
      lVar10 = *(long *)param_1;
      plVar6[6] = (long)(plVar6 + 2);
      (**(code **)(lVar10 + 0x18))(param_1);
      goto LAB_00340680;
    }
                    /* try { // try from 00340660 to 0034067f has its CatchHandler @ 00340c88 */
    pfVar7 = (function *)(**(code **)(*(long *)pfVar7 + 0x10))();
  }
  plVar6[6] = (long)pfVar7;
LAB_00340680:
  if (*PTR_isHybrid_00396840 == '\0') {
                    /* try { // try from 003407ac to 003407b3 has its CatchHandler @ 00340c38 */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 003407b8 to 003407d3 has its CatchHandler @ 00340cb8 */
    plVar9 = (long *)facebook::jni::Environment::current();
    plVar9 = (long *)(**(code **)(*plVar9 + 200))(plVar9,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 003407dc to 003407e7 has its CatchHandler @ 00340c10 */
    local_68 = plVar6;
    local_60 = plVar9;
    FUN_00319a60(&local_60,&local_68);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_60;
    if (local_60 != (long *)0x0) {
                    /* try { // try from 00340808 to 0034081b has its CatchHandler @ 00340c54 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,plVar6);
    }
                    /* try { // try from 00340824 to 0034083f has its CatchHandler @ 00340cb0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar6 + 200))(plVar6,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00340844 to 0034085f has its CatchHandler @ 00340ca8 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar11 = (**(code **)(*plVar6 + 200))(plVar6,lVar10);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar11;
    if (((DAT_0039e028 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e028), iVar5 != 0)) {
      FUN_003426ac(&DAT_0039e020);
      __cxa_guard_release(&DAT_0039e028);
    }
    if (((DAT_0039e038 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e038), iVar5 != 0)) {
                    /* try { // try from 00340b44 to 00340b47 has its CatchHandler @ 00340b5c */
      DAT_0039e030 = FUN_0034276c();
      __cxa_guard_release(&DAT_0039e038);
    }
    lVar11 = local_70;
    uVar15 = DAT_0039e030;
                    /* try { // try from 00340890 to 003408ab has its CatchHandler @ 00340ca0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    plVar6 = (long *)(**(code **)(*plVar6 + 200))(plVar6,lVar11);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = plVar6;
                    /* try { // try from 003408b0 to 003408db has its CatchHandler @ 00340cd8 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var3 = DAT_0039e020;
    plVar9 = (long *)facebook::jni::Environment::current();
    plVar9 = (long *)(**(code **)(*plVar9 + 200))(plVar9,plVar6);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar9;
                    /* try { // try from 003408e0 to 003408f3 has its CatchHandler @ 00340c00 */
    local_98 = _JNIEnv::NewObject(p_Var8,p_Var3,uVar15,plVar9);
    if (plVar9 != (long *)0x0) {
                    /* try { // try from 003408fc to 0034090f has its CatchHandler @ 00340c50 */
      plVar12 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar12 + 0xb8))(plVar12,plVar9);
    }
                    /* try { // try from 00340918 to 0034091b has its CatchHandler @ 00340cd8 */
    facebook::jni::throwCppExceptionIf(local_98 == 0);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 00340920 to 00340933 has its CatchHandler @ 00340c4c */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,plVar6);
    }
    if (lVar11 != 0) {
                    /* try { // try from 00340938 to 0034094b has its CatchHandler @ 00340c48 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar11);
    }
    if (lVar10 != 0) {
                    /* try { // try from 00340958 to 0034096b has its CatchHandler @ 00340c44 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar10);
    }
    if (local_88 != 0) {
                    /* try { // try from 00340978 to 0034098b has its CatchHandler @ 00340c40 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,local_88);
    }
  }
  else {
    if (((DAT_0039dff8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039dff8), iVar5 != 0)) {
      FUN_003426ac(&DAT_0039dff0);
      __cxa_guard_release(&DAT_0039dff8);
    }
    if (((DAT_0039e008 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e008), iVar5 != 0)) {
                    /* try { // try from 00340ab0 to 00340ab3 has its CatchHandler @ 00340bb0 */
      DAT_0039e000 = FUN_003427e8();
      __cxa_guard_release(&DAT_0039e008);
    }
    uVar15 = DAT_0039e000;
                    /* try { // try from 003406c0 to 003406e3 has its CatchHandler @ 00340d04 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    local_98 = _JNIEnv::NewObject(p_Var8,DAT_0039dff0,uVar15);
    facebook::jni::throwCppExceptionIf(local_98 == 0);
                    /* try { // try from 003406e8 to 00340703 has its CatchHandler @ 00340d00 */
    plVar9 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar9 + 200))(plVar9,local_98);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_00396858;
    local_70 = lVar10;
    if (((*PTR_holderField_00396860 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_holderField_00396860), iVar5 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00340ae4 to 00340aeb has its CatchHandler @ 00340b84 */
      uVar15 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar2 = uVar15;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_00396860);
    }
    lVar10 = local_70;
    uVar15 = *(undefined8 *)puVar2;
                    /* try { // try from 0034072c to 00340743 has its CatchHandler @ 00340cd4 */
    plVar9 = (long *)facebook::jni::Environment::current();
    local_68 = (long *)(**(code **)(*plVar9 + 0x2f8))(plVar9,lVar10,uVar15);
                    /* try { // try from 00340748 to 00340753 has its CatchHandler @ 00340c58 */
    local_60 = plVar6;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    plVar6 = local_60;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_68;
    if (local_68 != (long *)0x0) {
                    /* try { // try from 00340774 to 00340787 has its CatchHandler @ 00340c9c */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,plVar6);
    }
    lVar10 = local_70;
    if (local_70 != 0) {
                    /* try { // try from 00340790 to 003407a3 has its CatchHandler @ 00340c98 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar10);
    }
  }
                    /* try { // try from 00340994 to 003409af has its CatchHandler @ 00340d1c */
  p_Var13 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var13,p_Var14,DAT_0039dbc0,local_98);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_98 != 0) {
                    /* try { // try from 003409b4 to 003409c7 has its CatchHandler @ 00340cd0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00340d44  margelo::nitro::rive::JHybridRiveViewSpec::removeEventListeners =====

/* margelo::nitro::rive::JHybridRiveViewSpec::removeEventListeners() */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::removeEventListeners(JHybridRiveViewSpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dbd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039dbd8), iVar2 != 0)) {
                    /* try { // try from 00340dc4 to 00340ddb has its CatchHandler @ 00340df0 */
    FUN_00341f48(auStack_40);
    DAT_0039dbd0 = FUN_0034236c(auStack_40,"removeEventListeners");
    __cxa_guard_release(&DAT_0039dbd8);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039dbd0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00340e1c  margelo::nitro::rive::JHybridRiveViewSpec::setNumberInputValue =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setNumberInputValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, double,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setNumberInputValue
          (JHybridRiveViewSpec *this,basic_string *param_1,double param_2,optional *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  basic_string *pbVar6;
  optional *poVar7;
  _jmethodID *p_Var8;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dbe8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039dbe8), iVar3 != 0)) {
                    /* try { // try from 00340f44 to 00340f53 has its CatchHandler @ 00340f6c */
    FUN_00341f48(&local_50);
    DAT_0039dbe0 = FUN_003422f0(&local_50);
    __cxa_guard_release(&DAT_0039dbe8);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var8 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_50;
  if (param_3[0x18] == (optional)0x0) {
    local_58 = 0;
  }
  else {
    poVar7 = *(optional **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      poVar7 = param_3 + 1;
    }
                    /* try { // try from 00340e98 to 00340e9f has its CatchHandler @ 00340f80 */
    facebook::jni::make_jstring((char *)poVar7);
  }
                    /* try { // try from 00340eb0 to 00340ed3 has its CatchHandler @ 00340f90 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var8,param_2,DAT_0039dbe0,lVar2,local_58);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_58 != 0) {
                    /* try { // try from 00340edc to 00340eef has its CatchHandler @ 00340f8c */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_58);
  }
  if (local_50 != 0) {
                    /* try { // try from 00340ef8 to 00340f0b has its CatchHandler @ 00340f88 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00340fc0  margelo::nitro::rive::JHybridRiveViewSpec::getNumberInputValue =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getNumberInputValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

undefined1  [16] __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getNumberInputValue
          (JHybridRiveViewSpec *this,basic_string *param_1,optional *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  basic_string *pbVar6;
  optional *poVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dbf8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039dbf8), iVar3 != 0)) {
                    /* try { // try from 003410e8 to 003410f7 has its CatchHandler @ 00341110 */
    FUN_00341f48(&local_50);
    DAT_0039dbf0 = FUN_00342274(&local_50);
    __cxa_guard_release(&DAT_0039dbf8);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_50;
  if (param_2[0x18] == (optional)0x0) {
    local_58 = 0;
  }
  else {
    poVar7 = *(optional **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      poVar7 = param_2 + 1;
    }
                    /* try { // try from 00341038 to 0034103f has its CatchHandler @ 00341124 */
    facebook::jni::make_jstring((char *)poVar7);
  }
                    /* try { // try from 00341050 to 00341073 has its CatchHandler @ 00341134 */
  uVar4 = facebook::jni::Environment::current();
  auVar9._0_8_ = FUN_00262180(uVar4,uVar8,DAT_0039dbf0,lVar2,local_58);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_58 != 0) {
                    /* try { // try from 0034107c to 0034108f has its CatchHandler @ 00341130 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_58);
  }
  if (local_50 != 0) {
                    /* try { // try from 00341098 to 003410ab has its CatchHandler @ 0034112c */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    auVar9._8_8_ = 0;
    return auVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341164  margelo::nitro::rive::JHybridRiveViewSpec::setBooleanInputValue =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setBooleanInputValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setBooleanInputValue
          (JHybridRiveViewSpec *this,basic_string *param_1,bool param_2,optional *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  basic_string *pbVar6;
  optional *poVar7;
  _jmethodID *p_Var8;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dc08 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039dc08), iVar3 != 0)) {
                    /* try { // try from 0034128c to 0034129b has its CatchHandler @ 003412b4 */
    FUN_00341f48(&local_50);
    DAT_0039dc00 = FUN_003421f8(&local_50);
    __cxa_guard_release(&DAT_0039dc08);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var8 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_50;
  if (param_3[0x18] == (optional)0x0) {
    local_58 = 0;
  }
  else {
    poVar7 = *(optional **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      poVar7 = param_3 + 1;
    }
                    /* try { // try from 003411e0 to 003411e7 has its CatchHandler @ 003412c8 */
    facebook::jni::make_jstring((char *)poVar7);
  }
                    /* try { // try from 003411f8 to 0034121b has its CatchHandler @ 003412d8 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var8,DAT_0039dc00,lVar2,(ulong)(param_2 & 1),local_58);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_58 != 0) {
                    /* try { // try from 00341224 to 00341237 has its CatchHandler @ 003412d4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_58);
  }
  if (local_50 != 0) {
                    /* try { // try from 00341240 to 00341253 has its CatchHandler @ 003412d0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341308  margelo::nitro::rive::JHybridRiveViewSpec::getBooleanInputValue =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getBooleanInputValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getBooleanInputValue
          (JHybridRiveViewSpec *this,basic_string *param_1,optional *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  _jobject *p_Var5;
  long *plVar6;
  basic_string *pbVar7;
  optional *poVar8;
  _jmethodID *p_Var9;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dc18 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039dc18), iVar4 != 0)) {
                    /* try { // try from 0034142c to 0034143b has its CatchHandler @ 00341454 */
    FUN_00341f48(&local_40);
    DAT_0039dc10 = FUN_0034217c(&local_40);
    __cxa_guard_release(&DAT_0039dc18);
  }
  pbVar7 = *(basic_string **)(param_1 + 0x10);
  p_Var9 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar7 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar7);
  lVar2 = local_40;
  if (param_2[0x18] == (optional)0x0) {
    local_48 = 0;
  }
  else {
    poVar8 = *(optional **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      poVar8 = param_2 + 1;
    }
                    /* try { // try from 0034137c to 00341383 has its CatchHandler @ 00341468 */
    facebook::jni::make_jstring((char *)poVar8);
  }
                    /* try { // try from 00341394 to 003413b7 has its CatchHandler @ 00341478 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  cVar3 = _JNIEnv::CallBooleanMethod(p_Var5,p_Var9,DAT_0039dc10,lVar2,local_48);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_48 != 0) {
                    /* try { // try from 003413c0 to 003413d3 has its CatchHandler @ 00341474 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,local_48);
  }
  if (local_40 != 0) {
                    /* try { // try from 003413dc to 003413ef has its CatchHandler @ 00341470 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3 != '\0');
}


// ===== 003414a8  margelo::nitro::rive::JHybridRiveViewSpec::triggerInput =====

/* margelo::nitro::rive::JHybridRiveViewSpec::triggerInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::triggerInput
          (JHybridRiveViewSpec *this,basic_string *param_1,optional *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  basic_string *pbVar6;
  optional *poVar7;
  _jmethodID *p_Var8;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dc28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039dc28), iVar3 != 0)) {
                    /* try { // try from 003415c0 to 003415cf has its CatchHandler @ 003415e8 */
    FUN_00341f48(&local_40);
    DAT_0039dc20 = FUN_00342100(&local_40);
    __cxa_guard_release(&DAT_0039dc28);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var8 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_40;
  if (param_2[0x18] == (optional)0x0) {
    local_48 = 0;
  }
  else {
    poVar7 = *(optional **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      poVar7 = param_2 + 1;
    }
                    /* try { // try from 0034151c to 00341523 has its CatchHandler @ 003415fc */
    facebook::jni::make_jstring((char *)poVar7);
  }
                    /* try { // try from 00341534 to 00341553 has its CatchHandler @ 0034160c */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var8,DAT_0039dc20,lVar2,local_48);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_48 != 0) {
                    /* try { // try from 0034155c to 0034156f has its CatchHandler @ 00341608 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_48);
  }
  if (local_40 != 0) {
                    /* try { // try from 00341578 to 0034158b has its CatchHandler @ 00341604 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034163c  margelo::nitro::rive::JHybridRiveViewSpec::setTextRunValue =====

/* margelo::nitro::rive::JHybridRiveViewSpec::setTextRunValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setTextRunValue
          (JHybridRiveViewSpec *this,basic_string *param_1,basic_string *param_2,optional *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  basic_string *pbVar6;
  optional *poVar7;
  _jmethodID *p_Var8;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dc38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039dc38), iVar3 != 0)) {
                    /* try { // try from 0034179c to 003417ab has its CatchHandler @ 003417c4 */
    FUN_00341f48(&local_50);
    DAT_0039dc30 = FUN_00342084(&local_50);
    __cxa_guard_release(&DAT_0039dc38);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var8 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_50;
  pbVar6 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
  }
                    /* try { // try from 003416b0 to 003416b7 has its CatchHandler @ 003417e0 */
  facebook::jni::make_jstring((char *)pbVar6);
  if (param_3[0x18] == (optional)0x0) {
    local_60 = 0;
  }
  else {
    poVar7 = *(optional **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      poVar7 = param_3 + 1;
    }
                    /* try { // try from 003416d4 to 003416db has its CatchHandler @ 003417d8 */
    facebook::jni::make_jstring((char *)poVar7);
  }
                    /* try { // try from 003416ec to 0034170f has its CatchHandler @ 003417f4 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var8,DAT_0039dc30,lVar2,local_58,local_60);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_60 != 0) {
                    /* try { // try from 00341718 to 0034172b has its CatchHandler @ 003417f0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_60);
  }
  if (local_58 != 0) {
                    /* try { // try from 00341734 to 00341747 has its CatchHandler @ 003417ec */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_58);
  }
  if (local_50 != 0) {
                    /* try { // try from 00341750 to 00341763 has its CatchHandler @ 003417e8 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034182c  margelo::nitro::rive::JHybridRiveViewSpec::getTextRunValue =====

/* margelo::nitro::rive::JHybridRiveViewSpec::getTextRunValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getTextRunValue
          (JHybridRiveViewSpec *this,basic_string *param_1,optional *param_2)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  basic_string *pbVar6;
  optional *poVar7;
  _jmethodID *p_Var8;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039dc48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039dc48), iVar2 != 0)) {
                    /* try { // try from 00341980 to 0034198f has its CatchHandler @ 003419a8 */
    FUN_00341f48(&local_50);
    DAT_0039dc40 = FUN_00342008(&local_50);
    __cxa_guard_release(&DAT_0039dc48);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var8 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  if (param_2[0x18] == (optional)0x0) {
    local_60 = 0;
  }
  else {
    poVar7 = *(optional **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      poVar7 = param_2 + 1;
    }
                    /* try { // try from 003418a8 to 003418af has its CatchHandler @ 003419bc */
    facebook::jni::make_jstring((char *)poVar7);
  }
                    /* try { // try from 003418c0 to 003418e3 has its CatchHandler @ 003419e0 */
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var8,DAT_0039dc40,local_58,local_60);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_50 = lVar4;
  if (local_60 != 0) {
                    /* try { // try from 003418f0 to 00341903 has its CatchHandler @ 003419dc */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_60);
  }
  if (local_58 != 0) {
                    /* try { // try from 0034190c to 0034191f has its CatchHandler @ 003419d8 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_58);
  }
                    /* try { // try from 00341920 to 0034192b has its CatchHandler @ 003419c4 */
  facebook::jni::JString::toStdString();
  lVar4 = local_50;
  if (local_50 != 0) {
                    /* try { // try from 00341934 to 00341947 has its CatchHandler @ 003419d4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341a10  FUN_00341a10 =====

void FUN_00341a10(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00341c20(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341a90  FUN_00341a90 =====

void FUN_00341a90(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00341c20(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341b18  FUN_00341b18 =====

void FUN_00341b18(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00341c20(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341b98  FUN_00341b98 =====

void FUN_00341b98(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00341c20(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341c20  FUN_00341c20 =====

void FUN_00341c20(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  puVar2 = PTR_vtable_00396450;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396450 + 0x2c8);
  param_1[0xe] = (long)(puVar2 + 0x350);
  *param_1 = (long)(puVar2 + 0x150);
  local_70 = &PTR_FUN_0038b458;
  plStack_68 = param_1;
                    /* try { // try from 00341c78 to 00341c7f has its CatchHandler @ 00341cf4 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00341cac;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_00341cac:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 00341cb4 to 00341cc7 has its CatchHandler @ 00341cf8 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341cfc  FUN_00341cfc =====

void FUN_00341cfc(void *param_1)

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


// ===== 00341d34  FUN_00341d34 =====

void FUN_00341d34(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038b458;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341d90  FUN_00341d90 =====

void FUN_00341d90(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038b458;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341dd8  FUN_00341dd8 =====

void FUN_00341dd8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341e10  FUN_00341e10 =====

void FUN_00341e10(void *param_1)

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


// ===== 00341e48  FUN_00341e48 =====

void FUN_00341e48(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar5 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00341e74 to 00341e87 has its CatchHandler @ 00341eb4 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341eb8  FUN_00341eb8 =====

void FUN_00341eb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396870) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00341f08  FUN_00341f08 =====

undefined * FUN_00341f08(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396878;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00341f48  FUN_00341f48 =====

void FUN_00341f48(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003968b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003968b0), iVar2 != 0))
  {
                    /* try { // try from 00341fb8 to 00341fcb has its CatchHandler @ 00341fdc */
    facebook::jni::findClassStatic(PTR_kBaseName_003968b8);
    __cxa_guard_release(PTR_cls_003968b0);
  }
  *param_1 = *(undefined8 *)PTR_cls_003968a8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342008  FUN_00342008 =====

long FUN_00342008(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"getTextRunValue",PTR_kDescriptor_00396970)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342084  FUN_00342084 =====

long FUN_00342084(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"setTextRunValue",PTR_kDescriptor_00396968)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342100  FUN_00342100 =====

long FUN_00342100(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"triggerInput",PTR_kDescriptor_00396960);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034217c  FUN_0034217c =====

long FUN_0034217c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"getBooleanInputValue",PTR_kDescriptor_00396958);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003421f8  FUN_003421f8 =====

long FUN_003421f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"setBooleanInputValue",PTR_kDescriptor_00396950);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342274  FUN_00342274 =====

long FUN_00342274(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"getNumberInputValue",PTR_kDescriptor_00396948);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003422f0  FUN_003422f0 =====

long FUN_003422f0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"setNumberInputValue",PTR_kDescriptor_00396940);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034236c  FUN_0034236c =====

long FUN_0034236c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_003945c8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003423f0  FUN_003423f0 =====

long FUN_003423f0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"onEventListener_cxx",PTR_kDescriptor_00396938);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034246c  FUN_0034246c =====

void FUN_0034246c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00342498 to 003424ab has its CatchHandler @ 003424d8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003424dc  FUN_003424dc =====

void FUN_003424dc(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003945a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003945a0), iVar2 != 0))
  {
                    /* try { // try from 0034254c to 0034255f has its CatchHandler @ 00342570 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945a8);
    __cxa_guard_release(PTR_cls_003945a0);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394598;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034259c  FUN_0034259c =====

void FUN_0034259c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003425c8 to 003425db has its CatchHandler @ 00342608 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034260c  FUN_0034260c =====

void FUN_0034260c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pvVar6 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar6 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
    goto LAB_003426a8;
  }
  plVar2 = *(long **)((long)pvVar6 + 0x30);
  plVar3 = (long *)((long)pvVar6 + 0x10);
  if (plVar2 == plVar3) {
    lVar5 = 4;
LAB_00342678:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  else if (plVar2 != (long *)0x0) {
    lVar5 = 5;
    plVar3 = plVar2;
    goto LAB_00342678;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_003426a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003426ac  FUN_003426ac =====

void FUN_003426ac(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003945a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003945a0), iVar2 != 0))
  {
                    /* try { // try from 0034271c to 0034272f has its CatchHandler @ 00342740 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945a8);
    __cxa_guard_release(PTR_cls_003945a0);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394598;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034276c  FUN_0034276c =====

long FUN_0034276c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e020,"<init>",PTR_kConstructorDescriptor_00396868);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003427e8  FUN_003427e8 =====

long FUN_003427e8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039dff0,"<init>",PTR_kConstructorDescriptor_00396850);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342864  FUN_00342864 =====

void FUN_00342864(long param_1)

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
      goto LAB_003428e4;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x003428c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_003428e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003428e8  FUN_003428e8 =====

void FUN_003428e8(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_00342938;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00342938:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342960  FUN_00342960 =====

void FUN_00342960(long *param_1)

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


// ===== 003429ec  FUN_003429ec =====

void FUN_003429ec(long *param_1)

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


// ===== 00342a78  FUN_00342a78 =====

void FUN_00342a78(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b388;
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


// ===== 00342b10  FUN_00342b10 =====

void FUN_00342b10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b388;
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


// ===== 00342b9c  FUN_00342b9c =====

void FUN_00342b9c(long param_1)

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
  *puVar4 = &PTR_FUN_0038b388;
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


// ===== 00342c14  FUN_00342c14 =====

void FUN_00342c14(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038b388;
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


// ===== 00342c78  FUN_00342c78 =====

void FUN_00342c78(long param_1)

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


// ===== 00342d04  FUN_00342d04 =====

void FUN_00342d04(void *param_1)

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


// ===== 00342d84  FUN_00342d84 =====

void FUN_00342d84(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 00342dbc to 00342dc7 has its CatchHandler @ 00342e30 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00342dd4 to 00342ddf has its CatchHandler @ 00342e18 */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342e58  FUN_00342e58 =====

void FUN_00342e58(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveViewSpec5resetEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00342ea8  FUN_00342ea8 =====

pointer_____offset_0x10___ * FUN_00342ea8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038b3e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342ee8  FUN_00342ee8 =====

void FUN_00342ee8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b308;
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


// ===== 00342f80  FUN_00342f80 =====

void FUN_00342f80(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b308;
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


// ===== 0034300c  FUN_0034300c =====

void FUN_0034300c(long param_1)

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
  *puVar4 = &PTR_FUN_0038b308;
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


// ===== 00343084  FUN_00343084 =====

void FUN_00343084(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038b308;
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


// ===== 003430e8  FUN_003430e8 =====

void FUN_003430e8(long param_1)

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


// ===== 00343174  FUN_00343174 =====

void FUN_00343174(void *param_1)

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


// ===== 003431f4  FUN_003431f4 =====

void FUN_003431f4(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 00343230  FUN_00343230 =====

void FUN_00343230(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveViewSpec5resetEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00343280  FUN_00343280 =====

pointer_____offset_0x10___ * FUN_00343280(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038b368;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003432c0  FUN_003432c0 =====

void FUN_003432c0(long *param_1)

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


// ===== 0034334c  FUN_0034334c =====

void FUN_0034334c(long *param_1)

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


