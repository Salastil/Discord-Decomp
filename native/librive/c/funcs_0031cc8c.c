// ===== 0031cc8c  margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModelAsync =====

/* margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModelAsync(std::__ndk1::optional<margelo::nitro::rive::ArtboardBy>
   const&) */

void margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModelAsync(optional *param_1)

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
  long in_x1;
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
  if (((DAT_0039d658 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d658), iVar4 != 0)) {
                    /* try { // try from 0031cee0 to 0031ceef has its CatchHandler @ 0031cfb0 */
    FUN_0031def4(&local_90);
    DAT_0039d650 = FUN_0032154c(&local_90);
    __cxa_guard_release(&DAT_0039d658);
  }
  p_Var13 = *(_jmethodID **)(param_1 + 8);
  if (*(char *)(in_x1 + 0x38) == '\0') {
    local_90 = (undefined **)0x0;
  }
  else {
    FUN_003215c8(&local_90);
  }
  ppuVar8 = local_90;
                    /* try { // try from 0031ccf8 to 0031cd17 has its CatchHandler @ 0031d07c */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039d650,ppuVar8);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (ppuVar8 != (undefined **)0x0) {
                    /* try { // try from 0031cd20 to 0031cd33 has its CatchHandler @ 0031d060 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,ppuVar8);
  }
                    /* try { // try from 0031cd34 to 0031cd3b has its CatchHandler @ 0031d054 */
  ppuVar8 = (undefined **)operator_new(0x80);
  *in_x8 = ppuVar8;
  ppuVar8[1] = (undefined *)0x0;
  *ppuVar8 = (undefined *)0x0;
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
  ppuVar8[0xf] = (undefined *)0x0;
  ppuVar8[0xe] = (undefined *)0x0;
  local_90 = ppuVar8;
                    /* try { // try from 0031cd5c to 0031cd63 has its CatchHandler @ 0031d044 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_00386a08;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031cf28 to 0031cf2b has its CatchHandler @ 0031cf94 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031cd8c to 0031cd9f has its CatchHandler @ 0031d064 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00386c40;
                    /* try { // try from 0031cdd4 to 0031cddb has its CatchHandler @ 0031d004 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
LAB_0031cdfc:
    (*(code *)(*pppuVar12)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar12 = local_70;
    goto LAB_0031cdfc;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031cf70 to 0031cf73 has its CatchHandler @ 0031cf90 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031ce10 to 0031ce1f has its CatchHandler @ 0031d064 */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00386cc0;
                    /* try { // try from 0031ce54 to 0031ce5b has its CatchHandler @ 0031cfc4 */
  uStack_88 = uVar10;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0031ce88;
    lVar6 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar6])();
LAB_0031ce88:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0031ce90 to 0031cea3 has its CatchHandler @ 0031d05c */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031d0a4  margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCountAsync =====

/* margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCountAsync() */

void margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCountAsync(void)

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
  if (((DAT_0039d668 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d668), iVar4 != 0)) {
                    /* try { // try from 0031d2b4 to 0031d2cb has its CatchHandler @ 0031d388 */
    FUN_0031def4(&local_90);
    DAT_0039d660 = FUN_0031e0a0(&local_90,"getArtboardCountAsync");
    __cxa_guard_release(&DAT_0039d668);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039d660);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0031d108 to 0031d10f has its CatchHandler @ 0031d42c */
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
                    /* try { // try from 0031d130 to 0031d137 has its CatchHandler @ 0031d41c */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_00392420;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031d300 to 0031d303 has its CatchHandler @ 0031d36c */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031d160 to 0031d173 has its CatchHandler @ 0031d438 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00386d58;
                    /* try { // try from 0031d1a8 to 0031d1af has its CatchHandler @ 0031d3dc */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0031d1d0:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0031d1d0;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031d348 to 0031d34b has its CatchHandler @ 0031d368 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031d1e4 to 0031d1f3 has its CatchHandler @ 0031d438 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00386dd8;
                    /* try { // try from 0031d228 to 0031d22f has its CatchHandler @ 0031d39c */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0031d25c;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0031d25c:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0031d264 to 0031d277 has its CatchHandler @ 0031d434 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031d468  margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNamesAsync =====

/* margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNamesAsync() */

void margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNamesAsync(void)

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
  if (((DAT_0039d678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d678), iVar4 != 0)) {
                    /* try { // try from 0031d67c to 0031d693 has its CatchHandler @ 0031d750 */
    FUN_0031def4(&local_90);
    DAT_0039d670 = FUN_0031e0a0(&local_90,"getArtboardNamesAsync");
    __cxa_guard_release(&DAT_0039d678);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039d670);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0031d4cc to 0031d4d3 has its CatchHandler @ 0031d7f4 */
  ppuVar7 = (undefined **)operator_new(0x78);
  ppuVar7[0xe] = (undefined *)0x0;
  *in_x8 = ppuVar7;
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
  ppuVar7[0xd] = (undefined *)0x0;
  ppuVar7[0xc] = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  *ppuVar7 = (undefined *)0x0;
  local_90 = ppuVar7;
                    /* try { // try from 0031d4f8 to 0031d4ff has its CatchHandler @ 0031d7e4 */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_00386890;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031d6c8 to 0031d6cb has its CatchHandler @ 0031d734 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031d528 to 0031d53b has its CatchHandler @ 0031d800 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00386e58;
                    /* try { // try from 0031d570 to 0031d577 has its CatchHandler @ 0031d7a4 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0031d598:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0031d598;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031d710 to 0031d713 has its CatchHandler @ 0031d730 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031d5ac to 0031d5bb has its CatchHandler @ 0031d800 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00386ed8;
                    /* try { // try from 0031d5f0 to 0031d5f7 has its CatchHandler @ 0031d764 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0031d624;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0031d624:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0031d62c to 0031d63f has its CatchHandler @ 0031d7fc */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031d830  margelo::nitro::rive::JHybridRiveFileSpec::getBindableArtboard =====

/* margelo::nitro::rive::JHybridRiveFileSpec::getBindableArtboard(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridRiveFileSpec::getBindableArtboard(basic_string *param_1)

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
  if (((DAT_0039d688 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d688), iVar2 != 0)) {
                    /* try { // try from 0031d940 to 0031d94f has its CatchHandler @ 0031d968 */
    FUN_0031def4(&local_50);
    DAT_0039d680 = FUN_0031dfb4(&local_50);
    __cxa_guard_release(&DAT_0039d688);
  }
  pbVar7 = *(byte **)(in_x1 + 0x10);
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar7 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar7);
  plVar6 = local_50;
                    /* try { // try from 0031d88c to 0031d8ab has its CatchHandler @ 0031d994 */
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var8,DAT_0039d680,plVar6);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar6 = local_50;
  local_40 = lVar4;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 0031d8b8 to 0031d8cb has its CatchHandler @ 0031d990 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,plVar6);
  }
                    /* try { // try from 0031d8cc to 0031d8d7 has its CatchHandler @ 0031d97c */
  JHybridBindableArtboardSpec::JavaPart::getJHybridBindableArtboardSpec((JavaPart *)&local_40);
  lVar4 = local_40;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0x40));
  }
  *in_x8 = (long)local_50;
  in_x8[1] = local_48;
  if (local_40 != 0) {
                    /* try { // try from 0031d8f8 to 0031d90b has its CatchHandler @ 0031d98c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031d9bc  FUN_0031d9bc =====

void FUN_0031d9bc(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0031dbcc(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031da3c  FUN_0031da3c =====

void FUN_0031da3c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0031dbcc(this);
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


// ===== 0031dac4  FUN_0031dac4 =====

void FUN_0031dac4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0031dbcc(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031db44  FUN_0031db44 =====

void FUN_0031db44(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0031dbcc(this);
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


// ===== 0031dbcc  FUN_0031dbcc =====

void FUN_0031dbcc(long *param_1)

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
  
  puVar2 = PTR_vtable_00395e78;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00395e78 + 0x178);
  param_1[0xe] = (long)(puVar2 + 0x200);
  *param_1 = (long)(puVar2 + 0xa8);
  local_70 = &PTR_FUN_00386f58;
  plStack_68 = param_1;
                    /* try { // try from 0031dc24 to 0031dc2b has its CatchHandler @ 0031dca0 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0031dc58;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_0031dc58:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 0031dc60 to 0031dc73 has its CatchHandler @ 0031dca4 */
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


// ===== 0031dca8  FUN_0031dca8 =====

void FUN_0031dca8(void *param_1)

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


// ===== 0031dce0  FUN_0031dce0 =====

void FUN_0031dce0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00386f58;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031dd3c  FUN_0031dd3c =====

void FUN_0031dd3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00386f58;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031dd84  FUN_0031dd84 =====

void FUN_0031dd84(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ddbc  FUN_0031ddbc =====

void FUN_0031ddbc(void *param_1)

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


// ===== 0031ddf4  FUN_0031ddf4 =====

void FUN_0031ddf4(long param_1)

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
                    /* try { // try from 0031de20 to 0031de33 has its CatchHandler @ 0031de60 */
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


// ===== 0031de64  FUN_0031de64 =====

void FUN_0031de64(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396068) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031deb4  FUN_0031deb4 =====

undefined * FUN_0031deb4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396070;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031def4  FUN_0031def4 =====

void FUN_0031def4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003960d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003960d8), iVar2 != 0))
  {
                    /* try { // try from 0031df64 to 0031df77 has its CatchHandler @ 0031df88 */
    facebook::jni::findClassStatic(PTR_kBaseName_003960e0);
    __cxa_guard_release(PTR_cls_003960d8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003960d0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031dfb4  FUN_0031dfb4 =====

long FUN_0031dfb4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"getBindableArtboard",PTR_kDescriptor_00396130);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031e030  FUN_0031e030 =====

void FUN_0031e030(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0031e05c to 0031e06f has its CatchHandler @ 0031e09c */
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


// ===== 0031e0a0  FUN_0031e0a0 =====

long FUN_0031e0a0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396118);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031e124  FUN_0031e124 =====

void FUN_0031e124(undefined8 *param_1)

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
    FUN_0031ffd4(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031e19c  FUN_0031e19c =====

void FUN_0031e19c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uVar3 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_30);
  if ((uVar3 & 1) == 0) {
    if (((*PTR_cls_00396048 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_00396048), iVar2 != 0)) {
                    /* try { // try from 0031e258 to 0031e26b has its CatchHandler @ 0031e290 */
      facebook::jni::findClassStatic(PTR_kBaseName_00396050);
      __cxa_guard_release(PTR_cls_00396048);
    }
    uVar6 = *(undefined8 *)PTR_cls_00396040;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00394368);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0031e258 with catch @ 0031e290 */
        lVar4 = __cxa_guard_abort(PTR_cls_00396048);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00255d34(uVar6);
        }
      }
      goto LAB_0031e2b8;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0031e2b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0031e2bc  FUN_0031e2bc =====

void FUN_0031e2bc(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock();
  if (*(int *)(param_1 + 0x10) == 1) {
    local_70 = *(undefined8 *)(param_1 + 8);
    plVar3 = (long *)param_2[4];
    if (plVar3 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0031e5c8;
                    /* try { // try from 0031e56c to 0031e597 has its CatchHandler @ 0031e5a4 */
      FUN_0025cd00();
LAB_0031e570:
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0031e5c8;
      FUN_0031f3b0();
LAB_0031e584:
      if (*(long *)(lVar2 + 0x28) == local_68) {
        FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0031e430 with catch @ 0031e598
                        */
        FUN_0025ad9c();
      }
      goto LAB_0031e5c8;
    }
                    /* try { // try from 0031e31c to 0031e3bb has its CatchHandler @ 0031e5a4 */
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_70);
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x20);
    if (uVar12 < *(ulong *)(param_1 + 0x28)) {
      plVar3 = param_2 + 4;
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        plVar3 = (long *)(uVar12 + 0x20);
LAB_0031e3c8:
        *plVar3 = 0;
      }
      else {
        if (plVar7 != param_2) {
          *(long **)(uVar12 + 0x20) = plVar7;
          goto LAB_0031e3c8;
        }
        *(ulong *)(uVar12 + 0x20) = uVar12;
                    /* try { // try from 0031e414 to 0031e41b has its CatchHandler @ 0031e59c */
        (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,uVar12);
      }
      lVar6 = uVar12 + 0x30;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x18);
      lVar6 = (long)(uVar12 - uVar14) >> 4;
      uVar15 = lVar6 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar15) goto LAB_0031e570;
      lVar8 = (long)(*(ulong *)(param_1 + 0x28) - uVar14) >> 4;
      uVar11 = lVar8 * 0x5555555555555556;
      if (uVar11 < uVar15 || uVar11 - uVar15 == 0) {
        uVar11 = uVar15;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar11 = 0x555555555555555;
      }
      if (uVar11 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar11) goto LAB_0031e584;
        pvVar4 = operator_new(uVar11 * 0x30);
      }
      pvVar13 = (void *)((long)pvVar4 + lVar6 * 0x10);
      plVar3 = param_2 + 4;
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        plVar3 = (long *)((long)pvVar13 + 0x20);
LAB_0031e3fc:
        *plVar3 = 0;
      }
      else {
        if (plVar7 != param_2) {
          *(long **)((long)pvVar13 + 0x20) = plVar7;
          goto LAB_0031e3fc;
        }
        lVar6 = *param_2;
        *(void **)((long)pvVar13 + 0x20) = pvVar13;
                    /* try { // try from 0031e430 to 0031e43b has its CatchHandler @ 0031e598 */
        (**(code **)(lVar6 + 0x18))(param_2,pvVar13);
        uVar14 = *(ulong *)(param_1 + 0x18);
        uVar12 = *(ulong *)(param_1 + 0x20);
      }
      pvVar9 = pvVar13;
      if (uVar12 != uVar14) {
        lVar6 = 0;
        uVar15 = uVar12;
        do {
          lVar8 = uVar12 + lVar6;
          uVar1 = (long)pvVar13 + lVar6;
          lVar10 = *(long *)(lVar8 + -0x10);
          if (lVar10 == 0) {
LAB_0031e45c:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar8 + -0x30 != lVar10) {
              *(long *)(uVar1 - 0x10) = lVar10;
              uVar1 = uVar15;
              goto LAB_0031e45c;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 0031e4b0 to 0031e4b3 has its CatchHandler @ 0031e5a0 */
            (**(code **)(**(long **)(lVar8 + -0x10) + 0x18))();
          }
          lVar6 = lVar6 + -0x30;
          uVar15 = uVar15 - 0x30;
        } while (uVar12 + lVar6 != uVar14);
        pvVar9 = (void *)((long)pvVar13 + lVar6);
      }
      plVar3 = *(long **)(param_1 + 0x18);
      plVar7 = *(long **)(param_1 + 0x20);
      lVar6 = (long)pvVar13 + 0x30;
      *(void **)(param_1 + 0x18) = pvVar9;
      *(long *)(param_1 + 0x20) = lVar6;
      *(void **)(param_1 + 0x28) = (void *)((long)pvVar4 + uVar11 * 0x30);
joined_r0x0031e4d4:
      if (plVar7 != plVar3) {
        plVar5 = (long *)plVar7[-2];
        plVar7 = plVar7 + -6;
        if (plVar7 != plVar5) goto code_r0x0031e550;
        lVar8 = 4;
        plVar5 = plVar7;
        goto LAB_0031e528;
      }
      if (plVar3 != (long *)0x0) {
        operator_delete(plVar3);
      }
    }
    *(long *)(param_1 + 0x20) = lVar6;
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0031e5c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0031e550:
  if (plVar5 != (long *)0x0) {
    lVar8 = 5;
LAB_0031e528:
    (**(code **)(*plVar5 + lVar8 * 8))();
  }
  goto joined_r0x0031e4d4;
}


// ===== 0031e5cc  FUN_0031e5cc =====

void FUN_0031e5cc(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock();
  if (*(int *)(param_1 + 0x10) == 2) {
    local_70 = *(undefined8 *)(param_1 + 8);
    plVar3 = (long *)param_2[4];
    if (plVar3 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0031e8d8;
                    /* try { // try from 0031e87c to 0031e8a7 has its CatchHandler @ 0031e8b4 */
      FUN_0025cd00();
LAB_0031e880:
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0031e8d8;
      FUN_0031ea64();
LAB_0031e894:
      if (*(long *)(lVar2 + 0x28) == local_68) {
        FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0031e740 with catch @ 0031e8a8
                        */
        FUN_0025ad9c();
      }
      goto LAB_0031e8d8;
    }
                    /* try { // try from 0031e62c to 0031e6cb has its CatchHandler @ 0031e8b4 */
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_70);
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x38);
    if (uVar12 < *(ulong *)(param_1 + 0x40)) {
      plVar3 = param_2 + 4;
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        plVar3 = (long *)(uVar12 + 0x20);
LAB_0031e6d8:
        *plVar3 = 0;
      }
      else {
        if (plVar7 != param_2) {
          *(long **)(uVar12 + 0x20) = plVar7;
          goto LAB_0031e6d8;
        }
        *(ulong *)(uVar12 + 0x20) = uVar12;
                    /* try { // try from 0031e724 to 0031e72b has its CatchHandler @ 0031e8ac */
        (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,uVar12);
      }
      lVar6 = uVar12 + 0x30;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x30);
      lVar6 = (long)(uVar12 - uVar14) >> 4;
      uVar15 = lVar6 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar15) goto LAB_0031e880;
      lVar8 = (long)(*(ulong *)(param_1 + 0x40) - uVar14) >> 4;
      uVar11 = lVar8 * 0x5555555555555556;
      if (uVar11 < uVar15 || uVar11 - uVar15 == 0) {
        uVar11 = uVar15;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar11 = 0x555555555555555;
      }
      if (uVar11 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar11) goto LAB_0031e894;
        pvVar4 = operator_new(uVar11 * 0x30);
      }
      pvVar13 = (void *)((long)pvVar4 + lVar6 * 0x10);
      plVar3 = param_2 + 4;
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        plVar3 = (long *)((long)pvVar13 + 0x20);
LAB_0031e70c:
        *plVar3 = 0;
      }
      else {
        if (plVar7 != param_2) {
          *(long **)((long)pvVar13 + 0x20) = plVar7;
          goto LAB_0031e70c;
        }
        lVar6 = *param_2;
        *(void **)((long)pvVar13 + 0x20) = pvVar13;
                    /* try { // try from 0031e740 to 0031e74b has its CatchHandler @ 0031e8a8 */
        (**(code **)(lVar6 + 0x18))(param_2,pvVar13);
        uVar14 = *(ulong *)(param_1 + 0x30);
        uVar12 = *(ulong *)(param_1 + 0x38);
      }
      pvVar9 = pvVar13;
      if (uVar12 != uVar14) {
        lVar6 = 0;
        uVar15 = uVar12;
        do {
          lVar8 = uVar12 + lVar6;
          uVar1 = (long)pvVar13 + lVar6;
          lVar10 = *(long *)(lVar8 + -0x10);
          if (lVar10 == 0) {
LAB_0031e76c:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar8 + -0x30 != lVar10) {
              *(long *)(uVar1 - 0x10) = lVar10;
              uVar1 = uVar15;
              goto LAB_0031e76c;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 0031e7c0 to 0031e7c3 has its CatchHandler @ 0031e8b0 */
            (**(code **)(**(long **)(lVar8 + -0x10) + 0x18))();
          }
          lVar6 = lVar6 + -0x30;
          uVar15 = uVar15 - 0x30;
        } while (uVar12 + lVar6 != uVar14);
        pvVar9 = (void *)((long)pvVar13 + lVar6);
      }
      plVar3 = *(long **)(param_1 + 0x30);
      plVar7 = *(long **)(param_1 + 0x38);
      lVar6 = (long)pvVar13 + 0x30;
      *(void **)(param_1 + 0x30) = pvVar9;
      *(long *)(param_1 + 0x38) = lVar6;
      *(void **)(param_1 + 0x40) = (void *)((long)pvVar4 + uVar11 * 0x30);
joined_r0x0031e7e4:
      if (plVar7 != plVar3) {
        plVar5 = (long *)plVar7[-2];
        plVar7 = plVar7 + -6;
        if (plVar7 != plVar5) goto code_r0x0031e860;
        lVar8 = 4;
        plVar5 = plVar7;
        goto LAB_0031e838;
      }
      if (plVar3 != (long *)0x0) {
        operator_delete(plVar3);
      }
    }
    *(long *)(param_1 + 0x38) = lVar6;
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0031e8d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0031e860:
  if (plVar5 != (long *)0x0) {
    lVar8 = 5;
LAB_0031e838:
    (**(code **)(*plVar5 + lVar8 * 8))();
  }
  goto joined_r0x0031e7e4;
}


// ===== 0031e8dc  FUN_0031e8dc =====

void FUN_0031e8dc(long *param_1)

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


// ===== 0031e968  FUN_0031e968 =====

void FUN_0031e968(long *param_1)

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


// ===== 0031e9f4  FUN_0031e9f4 =====

void FUN_0031e9f4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0031ea20 to 0031ea33 has its CatchHandler @ 0031ea60 */
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


// ===== 0031ea64  FUN_0031ea64 =====

void FUN_0031ea64(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ea9c  FUN_0031ea9c =====

void FUN_0031ea9c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386ed8;
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


// ===== 0031eb34  FUN_0031eb34 =====

void FUN_0031eb34(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386ed8;
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


// ===== 0031ebc0  FUN_0031ebc0 =====

void FUN_0031ebc0(long param_1)

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
  *puVar4 = &PTR_FUN_00386ed8;
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


// ===== 0031ec38  FUN_0031ec38 =====

void FUN_0031ec38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386ed8;
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


// ===== 0031ec9c  FUN_0031ec9c =====

void FUN_0031ec9c(long param_1)

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


// ===== 0031ed28  FUN_0031ed28 =====

void FUN_0031ed28(void *param_1)

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


// ===== 0031eda8  FUN_0031eda8 =====

void FUN_0031eda8(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0031ede0 to 0031edeb has its CatchHandler @ 0031ee54 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0031edf8 to 0031ee03 has its CatchHandler @ 0031ee3c */
  FUN_0031efc0(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ee7c  FUN_0031ee7c =====

void FUN_0031ee7c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec21getArtboardNamesAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031eecc  FUN_0031eecc =====

pointer_____offset_0x10___ * FUN_0031eecc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386f38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ef0c  FUN_0031ef0c =====

void FUN_0031ef0c(undefined8 param_1,JniException *param_2)

{
  long lVar1;
  JniException *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (JniException *)__cxa_allocate_exception(0x30);
                    /* try { // try from 0031ef40 to 0031ef47 has its CatchHandler @ 0031ef74 */
  facebook::jni::JniException::JniException(this,param_2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 0031ef58 to 0031ef6f has its CatchHandler @ 0031ef70 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_00396160,PTR__JniException_00396140);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031efc0  FUN_0031efc0 =====

void FUN_0031efc0(exception_ptr *param_1,exception_ptr *param_2)

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
    FUN_00264e5c(local_60,PTR_typeinfo_name_003949f0,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0031f170 to 0031f183 has its CatchHandler @ 0031f24c */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 0031f184 to 0031f197 has its CatchHandler @ 0031f234 */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 0031f19c to 0031f1d3 has its CatchHandler @ 0031f200 */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0031f280;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0xffffffff) {
LAB_0031f044:
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 0031f038 to 0031f043 has its CatchHandler @ 0031f1e8 */
      (*(code *)(&PTR_FUN_003868e0)[uVar2])(local_60,param_1);
      goto LAB_0031f044;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  for (lVar6 = *(long *)(param_1 + 0x38); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0031f1e4 to 0031f1e7 has its CatchHandler @ 0031f1f0 */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0031f038 with catch @ 0031f1e8
                        */
        FUN_0025ad9c();
      }
      goto LAB_0031f280;
    }
                    /* try { // try from 0031f07c to 0031f083 has its CatchHandler @ 0031f1ec */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  plVar7 = *(long **)(param_1 + 0x28);
LAB_0031f0ac:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x0031f0c4;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_0031f0a0;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  plVar5 = *(long **)(param_1 + 0x40);
  *(long **)(param_1 + 0x28) = plVar4;
joined_r0x0031f0dc:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x0031f144;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_0031f11c;
  }
  *(long **)(param_1 + 0x40) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0031f280:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0031f0c4:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_0031f0a0:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_0031f0ac;
code_r0x0031f144:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_0031f11c:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x0031f0dc;
}


// ===== 0031f284  FUN_0031f284 =====

void FUN_0031f284(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031f2bc  FUN_0031f2bc =====

void FUN_0031f2bc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pbVar4 = (byte *)*param_2;
  if (pbVar4 == (byte *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    pbVar3 = (byte *)param_2[1];
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = (byte *)*param_2;
    }
    param_2[1] = pbVar4;
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pbVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031f374  FUN_0031f374 =====

void FUN_0031f374(undefined8 param_1,exception_ptr *param_2)

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


// ===== 0031f3b0  FUN_0031f3b0 =====

void FUN_0031f3b0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031f3e8  FUN_0031f3e8 =====

void FUN_0031f3e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386e58;
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


// ===== 0031f480  FUN_0031f480 =====

void FUN_0031f480(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386e58;
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


// ===== 0031f50c  FUN_0031f50c =====

void FUN_0031f50c(long param_1)

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
  *puVar4 = &PTR_FUN_00386e58;
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


// ===== 0031f584  FUN_0031f584 =====

void FUN_0031f584(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386e58;
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


// ===== 0031f5e8  FUN_0031f5e8 =====

void FUN_0031f5e8(long param_1)

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


// ===== 0031f674  FUN_0031f674 =====

void FUN_0031f674(void *param_1)

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


// ===== 0031f6f4  FUN_0031f6f4 =====

void FUN_0031f6f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  void *pvVar5;
  int iVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *local_a0;
  ulong *local_98;
  ulong *local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar15 = *param_2;
  uVar9 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 0031f730 to 0031f743 has its CatchHandler @ 0031f9e0 */
  plVar7 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar7 + 0x558))(plVar7,uVar15);
  local_a0 = (ulong *)0x0;
  local_98 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
                    /* try { // try from 0031f754 to 0031f75f has its CatchHandler @ 0031f9dc */
  FUN_0031fad0(&local_a0,(long)iVar6);
  if (iVar6 != 0) {
    uVar16 = 0;
    do {
                    /* try { // try from 0031f78c to 0031f7a3 has its CatchHandler @ 0031fa14 */
      plVar7 = (long *)facebook::jni::Environment::current();
      local_70 = (**(code **)(*plVar7 + 0x568))(plVar7,uVar15,uVar16 & 0xffffffff);
                    /* try { // try from 0031f7a8 to 0031f7b3 has its CatchHandler @ 0031fa00 */
      facebook::jni::JString::toStdString();
      puVar17 = local_98;
      puVar2 = local_a0;
      if (local_98 < local_90) {
        local_98[2] = (ulong)local_78;
        local_98[1] = uStack_80;
        *local_98 = local_88;
        local_98 = local_98 + 3;
      }
      else {
        lVar11 = (long)local_98 - (long)local_a0 >> 3;
        uVar19 = lVar11 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar19) {
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0031f9bc to 0031f9d7 has its CatchHandler @ 0031f9e8 */
            FUN_00275ff4();
LAB_0031f9c0:
            if (*(long *)(lVar1 + 0x28) == local_68) {
              uVar9 = FUN_00260a2c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0031f924 with catch @ 0031f9d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0031f78c with catch @ 0031fa14
                        */
              FUN_00275f3c(&local_a0);
              if (*(long *)(lVar1 + 0x28) == local_68) {
                FUN_00255d34(uVar9);
              }
            }
          }
          goto LAB_0031fa3c;
        }
        lVar10 = (long)local_90 - (long)local_a0 >> 3;
        uVar12 = lVar10 * 0x5555555555555556;
        if (uVar12 < uVar19 || uVar12 - uVar19 == 0) {
          uVar12 = uVar19;
        }
        if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
          uVar12 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar12 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_0031f9c0;
                    /* try { // try from 0031f834 to 0031f837 has its CatchHandler @ 0031f9e4 */
          pvVar8 = operator_new(uVar12 * 0x18);
        }
        pvVar5 = local_78;
        uVar4 = uStack_80;
        uVar19 = local_88;
        puVar3 = local_a0;
        puVar14 = (ulong *)((long)pvVar8 + lVar11 * 8);
        uStack_80 = 0;
        local_78 = (void *)0x0;
        local_90 = (ulong *)((long)pvVar8 + uVar12 * 0x18);
        local_88 = 0;
        puVar14[1] = uVar4;
        *puVar14 = uVar19;
        puVar14[2] = (ulong)pvVar5;
        local_a0 = puVar14;
        if (puVar17 != puVar2) {
          do {
            uVar12 = puVar17[-2];
            uVar19 = puVar17[-3];
            local_a0[-1] = puVar17[-1];
            puVar13 = puVar17 + -3;
            local_a0[-2] = uVar12;
            local_a0[-3] = uVar19;
            local_a0 = local_a0 + -3;
            puVar17[-2] = 0;
            puVar17[-1] = 0;
            puVar17[-3] = 0;
            puVar17 = puVar13;
            puVar18 = local_98;
          } while (puVar13 != puVar2);
          while (puVar2 = puVar18, puVar17 = puVar3, puVar2 != puVar3) {
            puVar18 = puVar2 + -3;
            if ((*puVar18 & 1) != 0) {
              operator_delete((void *)puVar2[-1]);
            }
          }
        }
        if (puVar17 != (ulong *)0x0) {
          operator_delete(puVar17);
        }
        local_98 = puVar14 + 3;
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
        }
      }
      lVar11 = local_70;
      if (local_70 != 0) {
                    /* try { // try from 0031f90c to 0031f91f has its CatchHandler @ 0031fa10 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,lVar11);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != (long)iVar6);
  }
                    /* try { // try from 0031f924 to 0031f92f has its CatchHandler @ 0031f9d8 */
  FUN_0031fc38(uVar9,&local_a0);
  puVar2 = local_a0;
  puVar17 = local_98;
  if (local_a0 != (ulong *)0x0) {
    while (puVar3 = puVar17, puVar3 != puVar2) {
      puVar17 = puVar3 + -3;
      if ((*puVar17 & 1) != 0) {
        operator_delete((void *)puVar3[-1]);
      }
    }
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_0031fa3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031fa40  FUN_0031fa40 =====

void FUN_0031fa40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec21getArtboardNamesAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031fa90  FUN_0031fa90 =====

pointer_____offset_0x10___ * FUN_0031fa90(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386eb8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031fad0  FUN_0031fad0 =====

void FUN_0031fad0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pbVar7 = (byte *)*param_1;
  if ((ulong)((param_1[2] - (long)pbVar7 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        FUN_00275ff4();
      }
      goto LAB_0031fc34;
    }
    pbVar8 = (byte *)param_1[1];
    pvVar3 = operator_new(param_2 * 0x18);
    lVar1 = (long)pvVar3 + ((long)pbVar8 - (long)pbVar7);
    pvVar3 = (void *)((long)pvVar3 + param_2 * 0x18);
    lVar5 = lVar1;
    if ((long)pbVar8 - (long)pbVar7 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar3;
    }
    else {
      do {
        uVar10 = *(undefined8 *)(pbVar8 + -0x10);
        uVar9 = *(undefined8 *)(pbVar8 + -0x18);
        *(undefined8 *)(lVar5 + -8) = *(undefined8 *)(pbVar8 + -8);
        pbVar6 = pbVar8 + -0x18;
        *(undefined8 *)(lVar5 + -0x10) = uVar10;
        *(undefined8 *)(lVar5 + -0x18) = uVar9;
        lVar5 = lVar5 + -0x18;
        pbVar8[-0x10] = 0;
        pbVar8[-0xf] = 0;
        pbVar8[-0xe] = 0;
        pbVar8[-0xd] = 0;
        pbVar8[-0xc] = 0;
        pbVar8[-0xb] = 0;
        pbVar8[-10] = 0;
        pbVar8[-9] = 0;
        pbVar8[-8] = 0;
        pbVar8[-7] = 0;
        pbVar8[-6] = 0;
        pbVar8[-5] = 0;
        pbVar8[-4] = 0;
        pbVar8[-3] = 0;
        pbVar8[-2] = 0;
        pbVar8[-1] = 0;
        pbVar8[-0x18] = 0;
        pbVar8[-0x17] = 0;
        pbVar8[-0x16] = 0;
        pbVar8[-0x15] = 0;
        pbVar8[-0x14] = 0;
        pbVar8[-0x13] = 0;
        pbVar8[-0x12] = 0;
        pbVar8[-0x11] = 0;
        pbVar8 = pbVar6;
      } while (pbVar6 != pbVar7);
      pbVar7 = (byte *)*param_1;
      pbVar8 = (byte *)param_1[1];
      *param_1 = lVar5;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar3;
      while (pbVar6 = pbVar8, pbVar6 != pbVar7) {
        pbVar8 = pbVar6 + -0x18;
        if ((*pbVar8 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
      }
    }
    if (pbVar7 != (byte *)0x0) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        operator_delete(pbVar7);
        return;
      }
      goto LAB_0031fc34;
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
LAB_0031fc34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031fc38  FUN_0031fc38 =====

void FUN_0031fc38(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined1 uStack_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 3);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 1) {
      pbVar9 = (byte *)*param_1;
      if (pbVar9 != (byte *)0x0) {
        pbVar7 = (byte *)param_1[1];
        pbVar10 = pbVar9;
        if (pbVar7 != pbVar9) {
          do {
            pbVar10 = pbVar7 + -0x18;
            if ((*pbVar10 & 1) != 0) {
              operator_delete(*(void **)(pbVar7 + -8));
            }
            pbVar7 = pbVar10;
          } while (pbVar10 != pbVar9);
          pbVar10 = (byte *)*param_1;
        }
        param_1[1] = pbVar9;
        operator_delete(pbVar10);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      uVar11 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar11;
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      goto LAB_0031fd30;
    }
                    /* try { // try from 0031fccc to 0031fcd7 has its CatchHandler @ 0031fe5c */
    (*(code *)(&PTR_FUN_003868e0)[uVar2])(&uStack_49,param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
LAB_0031fd30:
  plVar6 = (long *)param_1[4];
  plVar1 = (long *)param_1[5];
  if (plVar6 != plVar1) {
    do {
      if (*(int *)(param_1 + 3) != 1) {
LAB_0031fe48:
        if (*(long *)(lVar3 + 0x28) == local_48) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0031fccc with catch @ 0031fe5c
                        */
          FUN_0025ad9c();
        }
        goto LAB_0031fe88;
      }
      plVar4 = (long *)plVar6[4];
      if (plVar4 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0031fe44 to 0031fe5b has its CatchHandler @ 0031fe64 */
          FUN_0025cd00();
          goto LAB_0031fe48;
        }
        goto LAB_0031fe88;
      }
                    /* try { // try from 0031fd58 to 0031fd5f has its CatchHandler @ 0031fe60 */
      (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
      plVar6 = plVar6 + 6;
    } while (plVar6 != plVar1);
    plVar1 = (long *)param_1[4];
    plVar4 = (long *)param_1[5];
    plVar6 = plVar4;
joined_r0x0031fd74:
    if (plVar4 != plVar1) {
      plVar5 = (long *)plVar4[-2];
      plVar4 = plVar4 + -6;
      plVar6 = plVar1;
      if (plVar4 != plVar5) goto code_r0x0031fda8;
      lVar8 = 4;
      plVar5 = plVar4;
      goto LAB_0031fd84;
    }
  }
  plVar1 = (long *)param_1[7];
  plVar4 = (long *)param_1[8];
  param_1[5] = plVar6;
joined_r0x0031fdc4:
  if (plVar4 == plVar1) {
    param_1[8] = plVar1;
    if (*(long *)(lVar3 + 0x28) == local_48) {
      std::__ndk1::mutex::unlock();
      return;
    }
LAB_0031fe88:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar6 = (long *)plVar4[-2];
  plVar4 = plVar4 + -6;
  if (plVar4 != plVar6) goto code_r0x0031fe28;
  lVar8 = 4;
  plVar6 = plVar4;
  goto LAB_0031fe00;
code_r0x0031fda8:
  if (plVar5 != (long *)0x0) {
    lVar8 = 5;
LAB_0031fd84:
    (**(code **)(*plVar5 + lVar8 * 8))();
  }
  goto joined_r0x0031fd74;
code_r0x0031fe28:
  if (plVar6 != (long *)0x0) {
    lVar8 = 5;
LAB_0031fe00:
    (**(code **)(*plVar6 + lVar8 * 8))();
  }
  goto joined_r0x0031fdc4;
}


// ===== 0031fe8c  FUN_0031fe8c =====

void FUN_0031fe8c(__shared_weak_count *param_1)

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


// ===== 0031fed8  FUN_0031fed8 =====

void FUN_0031fed8(long param_1)

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
    FUN_0031ffd4(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ff4c  FUN_0031ff4c =====

void FUN_0031ff4c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396028) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031ff9c  FUN_0031ff9c =====

void FUN_0031ff9c(void *param_1)

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


// ===== 0031ffd4  FUN_0031ffd4 =====

void FUN_0031ffd4(long param_1)

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
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* try { // try from 00320118 to 003201a3 has its CatchHandler @ 003201f0 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,PTR_typeinfo_name_003949f0,0);
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
    FUN_0031efc0(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x50));
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x40);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0032002c:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0032002c;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x38);
    }
    *(long **)(param_1 + 0x40) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x28);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0032008c:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0032008c;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x20);
    }
    *(long **)(param_1 + 0x28) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
                    /* try { // try from 003200e0 to 003200eb has its CatchHandler @ 003201f4 */
    (*(code *)(&PTR_FUN_003868e0)[*(uint *)(param_1 + 0x18)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003201f8  FUN_003201f8 =====

void FUN_003201f8(undefined8 param_1,runtime_error *param_2)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::runtime_error::runtime_error(this,param_2);
                    /* try { // try from 00320244 to 0032025b has its CatchHandler @ 0032025c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320298  FUN_00320298 =====

void FUN_00320298(undefined8 *param_1)

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
    FUN_00321324(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320310  FUN_00320310 =====

void FUN_00320310(long *param_1)

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


// ===== 0032039c  FUN_0032039c =====

void FUN_0032039c(long *param_1)

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


// ===== 00320428  FUN_00320428 =====

void FUN_00320428(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386dd8;
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


// ===== 003204c0  FUN_003204c0 =====

void FUN_003204c0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386dd8;
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


// ===== 0032054c  FUN_0032054c =====

void FUN_0032054c(long param_1)

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
  *puVar4 = &PTR_FUN_00386dd8;
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


// ===== 003205c4  FUN_003205c4 =====

void FUN_003205c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386dd8;
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


// ===== 00320628  FUN_00320628 =====

void FUN_00320628(long param_1)

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


// ===== 003206b4  FUN_003206b4 =====

void FUN_003206b4(void *param_1)

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


// ===== 00320734  FUN_00320734 =====

void FUN_00320734(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0032076c to 00320777 has its CatchHandler @ 003207e0 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00320784 to 0032078f has its CatchHandler @ 003207c8 */
  FUN_00320898(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320808  FUN_00320808 =====

void FUN_00320808(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec21getArtboardCountAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00320858  FUN_00320858 =====

pointer_____offset_0x10___ * FUN_00320858(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386e38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320898  FUN_00320898 =====

void FUN_00320898(exception_ptr *param_1,exception_ptr *param_2)

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
    FUN_00264e5c(local_60,*(undefined8 *)(PTR_typeinfo_00394b48 + 8),1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00320a4c to 00320a5f has its CatchHandler @ 00320b28 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 00320a60 to 00320a73 has its CatchHandler @ 00320b10 */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 00320a78 to 00320aaf has its CatchHandler @ 00320adc */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00320b5c;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == 0xffffffff) {
LAB_0032091c:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 00320910 to 0032091b has its CatchHandler @ 00320ac4 */
      (*(code *)(&PTR_FUN_00386d30)[uVar2])(local_60,param_1);
      goto LAB_0032091c;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  for (lVar6 = *(long *)(param_1 + 0x28); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00320ac0 to 00320ac3 has its CatchHandler @ 00320acc */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00320910 with catch @ 00320ac4
                        */
        FUN_0025ad9c();
      }
      goto LAB_00320b5c;
    }
                    /* try { // try from 00320954 to 0032095b has its CatchHandler @ 00320ac8 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  plVar7 = *(long **)(param_1 + 0x18);
LAB_00320984:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x0032099c;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_00320978;
  }
  plVar7 = *(long **)(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x18) = plVar4;
joined_r0x003209b4:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x00320a1c;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_003209f4;
  }
  *(long **)(param_1 + 0x30) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00320b5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0032099c:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_00320978:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_00320984;
code_r0x00320a1c:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_003209f4:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x003209b4;
}


// ===== 00320b60  FUN_00320b60 =====

void FUN_00320b60(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320b98  FUN_00320b98 =====

void FUN_00320b98(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320bd0  FUN_00320bd0 =====

void FUN_00320bd0(undefined8 param_1,exception_ptr *param_2)

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


// ===== 00320c0c  FUN_00320c0c =====

void FUN_00320c0c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386d58;
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


// ===== 00320ca4  FUN_00320ca4 =====

void FUN_00320ca4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386d58;
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


// ===== 00320d30  FUN_00320d30 =====

void FUN_00320d30(long param_1)

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
  *puVar4 = &PTR_FUN_00386d58;
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


// ===== 00320da8  FUN_00320da8 =====

void FUN_00320da8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386d58;
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


// ===== 00320e0c  FUN_00320e0c =====

void FUN_00320e0c(long param_1)

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


// ===== 00320e98  FUN_00320e98 =====

void FUN_00320e98(void *param_1)

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


// ===== 00320f18  FUN_00320f18 =====

void FUN_00320f18(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_38 = FUN_0025f988(&local_30);
  FUN_0032100c(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320f7c  FUN_00320f7c =====

void FUN_00320f7c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec21getArtboardCountAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00320fcc  FUN_00320fcc =====

pointer_____offset_0x10___ * FUN_00320fcc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386db8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032100c  FUN_0032100c =====

void FUN_0032100c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 1) {
      uVar8 = *param_2;
      goto LAB_0032107c;
    }
                    /* try { // try from 00321064 to 0032106f has its CatchHandler @ 003211ac */
    (*(code *)(&PTR_FUN_00386d30)[uVar2])(&uStack_39,param_1);
  }
  uVar8 = *param_2;
  *(undefined4 *)(param_1 + 1) = 1;
LAB_0032107c:
  *param_1 = uVar8;
  plVar6 = (long *)param_1[2];
  plVar1 = (long *)param_1[3];
  if (plVar6 != plVar1) {
    do {
      if (*(int *)(param_1 + 1) != 1) {
LAB_00321198:
        if (*(long *)(lVar3 + 0x28) == local_38) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00321064 with catch @ 003211ac
                        */
          FUN_0025ad9c();
        }
        goto LAB_003211d8;
      }
      plVar4 = (long *)plVar6[4];
      if (plVar4 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00321194 to 003211ab has its CatchHandler @ 003211b4 */
          FUN_0025cd00();
          goto LAB_00321198;
        }
        goto LAB_003211d8;
      }
                    /* try { // try from 003210a8 to 003210af has its CatchHandler @ 003211b0 */
      (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
      plVar6 = plVar6 + 6;
    } while (plVar6 != plVar1);
    plVar1 = (long *)param_1[2];
    plVar4 = (long *)param_1[3];
    plVar6 = plVar4;
joined_r0x003210c4:
    if (plVar4 != plVar1) {
      plVar5 = (long *)plVar4[-2];
      plVar4 = plVar4 + -6;
      plVar6 = plVar1;
      if (plVar4 != plVar5) goto code_r0x003210f8;
      lVar7 = 4;
      plVar5 = plVar4;
      goto LAB_003210d4;
    }
  }
  plVar1 = (long *)param_1[5];
  plVar4 = (long *)param_1[6];
  param_1[3] = plVar6;
joined_r0x00321114:
  if (plVar4 == plVar1) {
    param_1[6] = plVar1;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
LAB_003211d8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar6 = (long *)plVar4[-2];
  plVar4 = plVar4 + -6;
  if (plVar4 != plVar6) goto code_r0x00321178;
  lVar7 = 4;
  plVar6 = plVar4;
  goto LAB_00321150;
code_r0x003210f8:
  if (plVar5 != (long *)0x0) {
    lVar7 = 5;
LAB_003210d4:
    (**(code **)(*plVar5 + lVar7 * 8))();
  }
  goto joined_r0x003210c4;
code_r0x00321178:
  if (plVar6 != (long *)0x0) {
    lVar7 = 5;
LAB_00321150:
    (**(code **)(*plVar6 + lVar7 * 8))();
  }
  goto joined_r0x00321114;
}


// ===== 003211dc  FUN_003211dc =====

void FUN_003211dc(__shared_weak_count *param_1)

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


// ===== 00321228  FUN_00321228 =====

void FUN_00321228(long param_1)

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
    FUN_00321324(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032129c  FUN_0032129c =====

void FUN_0032129c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396060) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003212ec  FUN_003212ec =====

void FUN_003212ec(void *param_1)

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


// ===== 00321324  FUN_00321324 =====

void FUN_00321324(long param_1)

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
  if (*(int *)(param_1 + 8) == 0) {
                    /* try { // try from 00321468 to 003214f7 has its CatchHandler @ 00321544 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,*(undefined8 *)(PTR_typeinfo_00394b48 + 8),0);
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
    FUN_00320898(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x40));
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x30);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0032137c:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0032137c;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x28);
    }
    *(long **)(param_1 + 0x30) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x18);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_003213dc:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_003213dc;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x10);
    }
    *(long **)(param_1 + 0x18) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
                    /* try { // try from 00321430 to 0032143b has its CatchHandler @ 00321548 */
    (*(code *)(&PTR_FUN_00386d30)[*(uint *)(param_1 + 8)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032154c  FUN_0032154c =====

long FUN_0032154c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"defaultArtboardViewModelAsync",PTR_kDescriptor_00396128);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003215c8  FUN_003215c8 =====

void FUN_003215c8(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  _jclass *p_Var9;
  logic_error *this;
  _jmethodID *p_Var10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [24];
  long local_78 [3];
  long local_60 [3];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((*PTR_clazz_00395ea8 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_clazz_00395ea8), iVar7 != 0)) {
                    /* try { // try from 003217c0 to 003217c3 has its CatchHandler @ 00321964 */
    FUN_00323070();
    __cxa_guard_release(PTR_clazz_00395ea8);
  }
  if (((*PTR_create_00395eb8 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_create_00395eb8), iVar7 != 0)) {
                    /* try { // try from 003217e4 to 003217e7 has its CatchHandler @ 00321950 */
    uVar11 = FUN_00323134();
    *(undefined8 *)PTR_create_00395eb0 = uVar11;
    __cxa_guard_release(PTR_create_00395eb8);
  }
  iVar7 = *param_2;
  p_Var10 = *(_jmethodID **)PTR_clazz_00395ea0;
  if (((*PTR_clazz_00395ee8 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_clazz_00395ee8), iVar6 != 0)) {
                    /* try { // try from 00321814 to 00321817 has its CatchHandler @ 0032193c */
    FUN_00323478();
    __cxa_guard_release(PTR_clazz_00395ee8);
  }
  puVar4 = PTR_fieldNAME_00395f00;
  puVar3 = PTR_fieldINDEX_00395ef0;
  if (iVar7 == 0) {
    if (((*PTR_fieldINDEX_00395ef8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_fieldINDEX_00395ef8), iVar7 != 0)) {
                    /* try { // try from 003218f4 to 003218ff has its CatchHandler @ 00321914 */
      uVar11 = FUN_0032353c("INDEX");
      *(undefined8 *)puVar3 = uVar11;
      __cxa_guard_release(PTR_fieldINDEX_00395ef8);
    }
    uVar11 = *(undefined8 *)puVar3;
    uVar13 = *(undefined8 *)PTR_clazz_00395ee0;
                    /* try { // try from 003216ac to 003216c3 has its CatchHandler @ 003219ec */
    plVar8 = (long *)facebook::jni::Environment::current();
    uVar11 = (**(code **)(*plVar8 + 0x488))(plVar8,uVar13,uVar11);
  }
  else {
    if (iVar7 != 1) {
      std::__ndk1::to_string(iVar7);
      this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00321840 to 00321853 has its CatchHandler @ 003219c4 */
      std::__ndk1::operator+("Invalid enum value (",(basic_string *)local_60);
                    /* try { // try from 00321854 to 00321867 has its CatchHandler @ 003219ac */
      FUN_00263450(local_78,auStack_90,&DAT_001d5be0);
                    /* try { // try from 0032186c to 003218b3 has its CatchHandler @ 00321978 */
      std::logic_error::logic_error(this,(basic_string *)local_78);
      *(undefined **)this = PTR_vtable_00394b38 + 0x10;
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
      }
      goto LAB_00321a28;
    }
    if (((*PTR_fieldNAME_00395f08 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_fieldNAME_00395f08), iVar7 != 0)) {
                    /* try { // try from 003218c4 to 003218cf has its CatchHandler @ 00321928 */
      uVar11 = FUN_0032353c(&DAT_001d69eb);
      *(undefined8 *)puVar4 = uVar11;
      __cxa_guard_release(PTR_fieldNAME_00395f08);
    }
    uVar11 = *(undefined8 *)puVar4;
    uVar13 = *(undefined8 *)PTR_clazz_00395ee0;
                    /* try { // try from 00321668 to 0032167f has its CatchHandler @ 003219f0 */
    plVar8 = (long *)facebook::jni::Environment::current();
    uVar11 = (**(code **)(*plVar8 + 0x488))(plVar8,uVar13,uVar11);
  }
  if ((char)param_2[4] == '\0') {
    local_60[0] = 0;
    if ((char)param_2[0xc] == '\0') goto LAB_0032171c;
LAB_003216e8:
    lVar12 = local_60[0];
    pcVar1 = (char *)((long)param_2 + 0x19);
    if ((*(byte *)(param_2 + 6) & 1) != 0) {
      pcVar1 = *(char **)(param_2 + 10);
    }
                    /* try { // try from 003216fc to 00321703 has its CatchHandler @ 003219e4 */
    facebook::jni::make_jstring(pcVar1);
  }
  else {
    FUN_003231b4(*(undefined8 *)(param_2 + 2),local_60);
    if ((char)param_2[0xc] != '\0') goto LAB_003216e8;
LAB_0032171c:
    local_78[0] = 0;
    lVar12 = local_60[0];
  }
  lVar5 = local_78[0];
                    /* try { // try from 00321724 to 0032174f has its CatchHandler @ 003219fc */
  p_Var9 = (_jclass *)facebook::jni::Environment::current();
  uVar11 = _JNIEnv::CallStaticObjectMethod
                     (p_Var9,p_Var10,*(undefined8 *)PTR_create_00395eb0,uVar11,lVar12,lVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
  lVar5 = local_78[0];
  *param_1 = uVar11;
  if (local_78[0] != 0) {
                    /* try { // try from 0032175c to 0032176f has its CatchHandler @ 003219f8 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,lVar5);
  }
  if (lVar12 != 0) {
                    /* try { // try from 00321774 to 00321787 has its CatchHandler @ 003219f4 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,lVar12);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00321a28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321a2c  FUN_00321a2c =====

void FUN_00321a2c(undefined8 *param_1)

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
    FUN_00322e4c(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321aa4  FUN_00321aa4 =====

void FUN_00321aa4(long *param_1)

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


// ===== 00321b30  FUN_00321b30 =====

void FUN_00321b30(long *param_1)

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


// ===== 00321bbc  FUN_00321bbc =====

void FUN_00321bbc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00321be8 to 00321bfb has its CatchHandler @ 00321c28 */
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


// ===== 00321c2c  FUN_00321c2c =====

void FUN_00321c2c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386cc0;
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


// ===== 00321cc4  FUN_00321cc4 =====

void FUN_00321cc4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386cc0;
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


// ===== 00321d50  FUN_00321d50 =====

void FUN_00321d50(long param_1)

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
  *puVar4 = &PTR_FUN_00386cc0;
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


// ===== 00321dc8  FUN_00321dc8 =====

void FUN_00321dc8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386cc0;
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


// ===== 00321e2c  FUN_00321e2c =====

void FUN_00321e2c(long param_1)

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


// ===== 00321eb8  FUN_00321eb8 =====

void FUN_00321eb8(void *param_1)

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


// ===== 00321f38  FUN_00321f38 =====

void FUN_00321f38(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00321f70 to 00321f7b has its CatchHandler @ 00321fe4 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00321f88 to 00321f93 has its CatchHandler @ 00321fcc */
  FUN_0032209c(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032200c  FUN_0032200c =====

void FUN_0032200c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec29defaultArtboardViewModelAsyncERKNSt6__ndk18optionalINS1_10ArtboardByEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032205c  FUN_0032205c =====

pointer_____offset_0x10___ * FUN_0032205c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386d20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032209c  FUN_0032209c =====

void FUN_0032209c(long param_1,exception_ptr *param_2)

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
    FUN_00264e5c(local_60,PTR_typeinfo_name_00394a60,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0032224c to 0032225f has its CatchHandler @ 00322328 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 00322260 to 00322273 has its CatchHandler @ 00322310 */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 00322278 to 003222af has its CatchHandler @ 003222dc */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0032235c;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 == 0xffffffff) {
LAB_00322120:
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    std::exception_ptr::exception_ptr((exception_ptr *)(param_1 + 8),param_2);
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 00322114 to 0032211f has its CatchHandler @ 003222c4 */
      (*(code *)(&PTR_FUN_00386b18)[uVar2])(local_60,param_1 + 8);
      goto LAB_00322120;
    }
    std::exception_ptr::operator=((exception_ptr *)(param_1 + 8),param_2);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  for (lVar6 = *(long *)(param_1 + 0x40); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 003222c0 to 003222c3 has its CatchHandler @ 003222cc */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00322114 with catch @ 003222c4
                        */
        FUN_0025ad9c();
      }
      goto LAB_0032235c;
    }
                    /* try { // try from 00322158 to 0032215f has its CatchHandler @ 003222c8 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x28);
  plVar7 = *(long **)(param_1 + 0x30);
LAB_00322188:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x003221a0;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_0032217c;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  plVar5 = *(long **)(param_1 + 0x48);
  *(long **)(param_1 + 0x30) = plVar4;
joined_r0x003221b8:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x00322220;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_003221f8;
  }
  *(long **)(param_1 + 0x48) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0032235c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x003221a0:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_0032217c:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_00322188;
code_r0x00322220:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_003221f8:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x003221b8;
}


// ===== 00322360  FUN_00322360 =====

void FUN_00322360(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322398  FUN_00322398 =====

void FUN_00322398(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(char *)(param_2 + 0x10) == '\0') ||
      (plVar4 = *(long **)(param_2 + 8), plVar4 == (long *)0x0)) ||
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0)) {
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


// ===== 0032242c  FUN_0032242c =====

void FUN_0032242c(undefined8 param_1,exception_ptr *param_2)

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


// ===== 00322468  FUN_00322468 =====

void FUN_00322468(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386c40;
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


// ===== 00322500  FUN_00322500 =====

void FUN_00322500(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386c40;
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


// ===== 0032258c  FUN_0032258c =====

void FUN_0032258c(long param_1)

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
  *puVar4 = &PTR_FUN_00386c40;
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


// ===== 00322604  FUN_00322604 =====

void FUN_00322604(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386c40;
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


// ===== 00322668  FUN_00322668 =====

void FUN_00322668(long param_1)

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


// ===== 003226f4  FUN_003226f4 =====

void FUN_003226f4(void *param_1)

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


// ===== 00322774  FUN_00322774 =====

void FUN_00322774(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  char local_48;
  long local_40;
  long local_38;
  
  plVar2 = local_60;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_2;
  uVar4 = *(undefined8 *)(param_1 + 8);
  local_40 = lVar5;
  if (lVar5 == 0) {
    local_58 = (long *)((ulong)local_58 & 0xffffffffffffff00);
    local_48 = '\0';
  }
  else {
    margelo::nitro::rive::JHybridViewModelSpec::JavaPart::getJHybridViewModelSpec
              ((JavaPart *)&local_40);
    local_60 = (long *)0x0;
    if (local_68 != (long *)0x0) {
      local_68 = (long *)((long)local_68 + *(long *)(*local_68 + -0x98));
    }
    local_50 = plVar2;
    local_48 = '\x01';
    local_58 = local_68;
  }
                    /* try { // try from 003227e4 to 003227ef has its CatchHandler @ 00322880 */
  FUN_00322958(uVar4,&local_58);
  if (((local_48 != '\0') && (local_50 != (long *)0x0)) &&
     (lVar3 = FUN_00255510(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (((lVar5 != 0) && (local_60 != (long *)0x0)) &&
     (lVar5 = FUN_00255510(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003228c8  FUN_003228c8 =====

void FUN_003228c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec29defaultArtboardViewModelAsyncERKNSt6__ndk18optionalINS1_10ArtboardByEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00322918  FUN_00322918 =====

pointer_____offset_0x10___ * FUN_00322918(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386ca0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322958  FUN_00322958 =====

void FUN_00322958(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uStack_39;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 1) {
      cVar3 = *(char *)(param_1 + 0x18);
      if (cVar3 == *(char *)(param_2 + 2)) {
        if (cVar3 != '\0') {
          uVar10 = param_2[1];
          uVar9 = *param_2;
          *param_2 = 0;
          param_2[1] = 0;
          plVar8 = *(long **)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x10) = uVar10;
          *(undefined8 *)(param_1 + 8) = uVar9;
          if ((plVar8 != (long *)0x0) &&
             (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
        }
      }
      else if (cVar3 == '\0') {
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0x10) = param_2[1];
        *(undefined8 *)(param_1 + 8) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      else {
        plVar8 = *(long **)(param_1 + 0x10);
        if ((plVar8 != (long *)0x0) &&
           (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      goto LAB_00322a34;
    }
                    /* try { // try from 003229fc to 00322a07 has its CatchHandler @ 00322bb4 */
    (*(code *)(&PTR_FUN_00386b18)[uVar2])(&uStack_39,param_1 + 8);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 2) != '\0') {
    uVar9 = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 8) = uVar9;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
LAB_00322a34:
  plVar8 = *(long **)(param_1 + 0x28);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar8 != plVar1) {
    do {
      if (*(int *)(param_1 + 0x20) != 1) {
LAB_00322ba0:
        if (*(long *)(lVar4 + 0x28) == local_38) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 003229fc with catch @ 00322bb4
                        */
          FUN_0025ad9c();
        }
        goto LAB_00322be0;
      }
      plVar6 = (long *)plVar8[4];
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 00322b9c to 00322bb3 has its CatchHandler @ 00322bbc */
          FUN_0025cd00();
          goto LAB_00322ba0;
        }
        goto LAB_00322be0;
      }
                    /* try { // try from 00322a5c to 00322a63 has its CatchHandler @ 00322bb8 */
      (**(code **)(*plVar6 + 0x30))(plVar6,param_1 + 8);
      plVar8 = plVar8 + 6;
    } while (plVar8 != plVar1);
    plVar1 = *(long **)(param_1 + 0x28);
    plVar6 = *(long **)(param_1 + 0x30);
    plVar8 = plVar6;
joined_r0x00322a78:
    if (plVar6 != plVar1) {
      plVar7 = (long *)plVar6[-2];
      plVar6 = plVar6 + -6;
      plVar8 = plVar1;
      if (plVar6 != plVar7) goto code_r0x00322aac;
      lVar5 = 4;
      plVar7 = plVar6;
      goto LAB_00322a88;
    }
  }
  plVar1 = *(long **)(param_1 + 0x40);
  plVar6 = *(long **)(param_1 + 0x48);
  *(long **)(param_1 + 0x30) = plVar8;
joined_r0x00322ac8:
  if (plVar6 == plVar1) {
    *(long **)(param_1 + 0x48) = plVar1;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar4 + 0x28) == local_38) {
      return;
    }
LAB_00322be0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar8 = (long *)plVar6[-2];
  plVar6 = plVar6 + -6;
  if (plVar6 != plVar8) goto code_r0x00322b2c;
  lVar5 = 4;
  plVar8 = plVar6;
  goto LAB_00322b04;
code_r0x00322aac:
  if (plVar7 != (long *)0x0) {
    lVar5 = 5;
LAB_00322a88:
    (**(code **)(*plVar7 + lVar5 * 8))();
  }
  goto joined_r0x00322a78;
code_r0x00322b2c:
  if (plVar8 != (long *)0x0) {
    lVar5 = 5;
LAB_00322b04:
    (**(code **)(*plVar8 + lVar5 * 8))();
  }
  goto joined_r0x00322ac8;
}


// ===== 00322be4  FUN_00322be4 =====

void FUN_00322be4(long *param_1,char param_2)

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


// ===== 00322c78  FUN_00322c78 =====

void FUN_00322c78(long *param_1)

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


// ===== 00322d04  FUN_00322d04 =====

void FUN_00322d04(__shared_weak_count *param_1)

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


// ===== 00322d50  FUN_00322d50 =====

void FUN_00322d50(long param_1)

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
    FUN_00322e4c(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322dc4  FUN_00322dc4 =====

void FUN_00322dc4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396058) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00322e14  FUN_00322e14 =====

void FUN_00322e14(void *param_1)

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


// ===== 00322e4c  FUN_00322e4c =====

void FUN_00322e4c(long param_1)

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
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* try { // try from 00322f90 to 0032301b has its CatchHandler @ 00323068 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,PTR_typeinfo_name_00394a60,0);
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
    FUN_0032209c(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x58));
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x48);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00322ea4:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00322ea4;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x40);
    }
    *(long **)(param_1 + 0x48) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x30);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00322f04:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00322f04;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x28);
    }
    *(long **)(param_1 + 0x30) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
                    /* try { // try from 00322f58 to 00322f63 has its CatchHandler @ 0032306c */
    (*(code *)(&PTR_FUN_00386b18)[*(uint *)(param_1 + 0x20)])(local_50,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00323070  FUN_00323070 =====

void FUN_00323070(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00395ec8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00395ec8), iVar2 != 0))
  {
                    /* try { // try from 003230e4 to 003230f7 has its CatchHandler @ 00323108 */
    facebook::jni::findClassStatic(PTR_kBaseName_00395ed0);
    __cxa_guard_release(PTR_cls_00395ec8);
  }
  *(undefined8 *)PTR_clazz_00395ea0 = *(undefined8 *)PTR_cls_00395ec0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323134  FUN_00323134 =====

long FUN_00323134(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_clazz_00395ea0,"fromCpp",PTR_kDescriptor_00395ed8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003231b4  FUN_003231b4 =====

void FUN_003231b4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jclass *p_Var4;
  undefined8 uVar5;
  long lVar6;
  _jmethodID *p_Var7;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00395f38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00395f38), iVar3 != 0))
  {
                    /* try { // try from 0032326c to 00323277 has its CatchHandler @ 003232bc */
    FUN_0026203c(PTR_cls_00395f30);
    __cxa_guard_release(PTR_cls_00395f38);
  }
  puVar2 = PTR_method_00395f40;
  if (((*PTR_method_00395f48 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_00395f48), iVar3 != 0)) {
                    /* try { // try from 00323298 to 0032329b has its CatchHandler @ 003232b0 */
    uVar5 = FUN_003233f8();
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_method_00395f48);
  }
  p_Var7 = *(_jmethodID **)PTR_cls_00395f30;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  uVar5 = _JNIEnv::CallStaticObjectMethod(p_Var4,p_Var7,param_1,*(undefined8 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    *param_2 = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003232ec  _JNIEnv::CallStaticObjectMethod =====

/* _JNIEnv::CallStaticObjectMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticObjectMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 0x398))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323388  FUN_00323388 =====

void FUN_00323388(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003233b4 to 003233c7 has its CatchHandler @ 003233f4 */
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


// ===== 003233f8  FUN_003233f8 =====

long FUN_003233f8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_cls_00395f30,"valueOf",PTR_kDescriptor_00395f50);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323478  FUN_00323478 =====

void FUN_00323478(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00395f18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00395f18), iVar2 != 0))
  {
                    /* try { // try from 003234ec to 003234ff has its CatchHandler @ 00323510 */
    facebook::jni::findClassStatic(PTR_kBaseName_00395f20);
    __cxa_guard_release(PTR_cls_00395f18);
  }
  *(undefined8 *)PTR_clazz_00395ee0 = *(undefined8 *)PTR_cls_00395f10;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032353c  FUN_0032353c =====

long FUN_0032353c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x480))
                    (plVar2,*(undefined8 *)PTR_clazz_00395ee0,param_1,PTR_kDescriptor_00395f28);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003235bc  FUN_003235bc =====

long FUN_003235bc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"viewModelByNameAsync",PTR_kDescriptor_00396120);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323638  FUN_00323638 =====

void FUN_00323638(undefined8 *param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jclass *p_Var4;
  undefined8 uVar5;
  long lVar6;
  _jmethodID *p_Var7;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396080 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00396080), iVar3 != 0))
  {
                    /* try { // try from 003236f0 to 003236fb has its CatchHandler @ 00323740 */
    FUN_00324258(PTR_cls_00396078);
    __cxa_guard_release(PTR_cls_00396080);
  }
  puVar2 = PTR_method_00396088;
  if (((*PTR_method_00396090 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_00396090), iVar3 != 0)) {
                    /* try { // try from 0032371c to 0032371f has its CatchHandler @ 00323734 */
    uVar5 = FUN_00324318();
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_method_00396090);
  }
  p_Var7 = *(_jmethodID **)PTR_cls_00396078;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  uVar5 = _JNIEnv::CallStaticObjectMethod
                    (p_Var4,p_Var7,*(undefined8 *)puVar2,(ulong)(param_2 & 0xff));
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    *param_1 = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323770  FUN_00323770 =====

void FUN_00323770(long *param_1)

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


// ===== 003237fc  FUN_003237fc =====

void FUN_003237fc(long *param_1)

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


// ===== 00323888  FUN_00323888 =====

void FUN_00323888(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003238b4 to 003238c7 has its CatchHandler @ 003238f4 */
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


// ===== 003238f8  FUN_003238f8 =====

void FUN_003238f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386bc0;
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


// ===== 00323990  FUN_00323990 =====

void FUN_00323990(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386bc0;
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


// ===== 00323a1c  FUN_00323a1c =====

void FUN_00323a1c(long param_1)

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
  *puVar4 = &PTR_FUN_00386bc0;
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


// ===== 00323a94  FUN_00323a94 =====

void FUN_00323a94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386bc0;
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


// ===== 00323af8  FUN_00323af8 =====

void FUN_00323af8(long param_1)

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


// ===== 00323b84  FUN_00323b84 =====

void FUN_00323b84(void *param_1)

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


// ===== 00323c04  FUN_00323c04 =====

void FUN_00323c04(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00323c3c to 00323c47 has its CatchHandler @ 00323cb0 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00323c54 to 00323c5f has its CatchHandler @ 00323c98 */
  FUN_0032209c(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323cd8  FUN_00323cd8 =====

void FUN_00323cd8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec20viewModelByNameAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS3_8optionalIbEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSG_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00323d28  FUN_00323d28 =====

pointer_____offset_0x10___ * FUN_00323d28(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386c20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323d68  FUN_00323d68 =====

void FUN_00323d68(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386b40;
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


// ===== 00323e00  FUN_00323e00 =====

void FUN_00323e00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386b40;
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


// ===== 00323e8c  FUN_00323e8c =====

void FUN_00323e8c(long param_1)

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
  *puVar4 = &PTR_FUN_00386b40;
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


// ===== 00323f04  FUN_00323f04 =====

void FUN_00323f04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386b40;
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


// ===== 00323f68  FUN_00323f68 =====

void FUN_00323f68(long param_1)

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


// ===== 00323ff4  FUN_00323ff4 =====

void FUN_00323ff4(void *param_1)

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


// ===== 00324074  FUN_00324074 =====

void FUN_00324074(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  char local_48;
  long local_40;
  long local_38;
  
  plVar2 = local_60;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_2;
  uVar4 = *(undefined8 *)(param_1 + 8);
  local_40 = lVar5;
  if (lVar5 == 0) {
    local_58 = (long *)((ulong)local_58 & 0xffffffffffffff00);
    local_48 = '\0';
  }
  else {
    margelo::nitro::rive::JHybridViewModelSpec::JavaPart::getJHybridViewModelSpec
              ((JavaPart *)&local_40);
    local_60 = (long *)0x0;
    if (local_68 != (long *)0x0) {
      local_68 = (long *)((long)local_68 + *(long *)(*local_68 + -0x98));
    }
    local_50 = plVar2;
    local_48 = '\x01';
    local_58 = local_68;
  }
                    /* try { // try from 003240e4 to 003240ef has its CatchHandler @ 00324180 */
  FUN_00322958(uVar4,&local_58);
  if (((local_48 != '\0') && (local_50 != (long *)0x0)) &&
     (lVar3 = FUN_00255510(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (((lVar5 != 0) && (local_60 != (long *)0x0)) &&
     (lVar5 = FUN_00255510(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003241c8  FUN_003241c8 =====

void FUN_003241c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec20viewModelByNameAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS3_8optionalIbEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSG_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00324218  FUN_00324218 =====

pointer_____offset_0x10___ * FUN_00324218(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386ba0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324258  FUN_00324258 =====

void FUN_00324258(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003960a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003960a0), iVar2 != 0))
  {
                    /* try { // try from 003242c8 to 003242db has its CatchHandler @ 003242ec */
    facebook::jni::findClassStatic(PTR_kBaseName_003960a8);
    __cxa_guard_release(PTR_cls_003960a0);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396098;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324318  FUN_00324318 =====

long FUN_00324318(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_cls_00396078,"valueOf",PTR_kDescriptor_003960b0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324398  FUN_00324398 =====

void FUN_00324398(long *param_1)

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


// ===== 00324424  FUN_00324424 =====

void FUN_00324424(long *param_1)

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


// ===== 003244b0  FUN_003244b0 =====

void FUN_003244b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386988;
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


// ===== 00324548  FUN_00324548 =====

void FUN_00324548(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386988;
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


// ===== 003245d4  FUN_003245d4 =====

void FUN_003245d4(long param_1)

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
  *puVar4 = &PTR_FUN_00386988;
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


// ===== 0032464c  FUN_0032464c =====

void FUN_0032464c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386988;
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


// ===== 003246b0  FUN_003246b0 =====

void FUN_003246b0(long param_1)

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


// ===== 0032473c  FUN_0032473c =====

void FUN_0032473c(void *param_1)

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


// ===== 003247bc  FUN_003247bc =====

void FUN_003247bc(long param_1,undefined8 *param_2)

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
                    /* try { // try from 003247f4 to 003247ff has its CatchHandler @ 00324868 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0032480c to 00324817 has its CatchHandler @ 00324850 */
  FUN_0031efc0(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324890  FUN_00324890 =====

void FUN_00324890(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec22getViewModelNamesAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003248e0  FUN_003248e0 =====

pointer_____offset_0x10___ * FUN_003248e0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003869e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324920  FUN_00324920 =====

void FUN_00324920(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386908;
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


// ===== 003249b8  FUN_003249b8 =====

void FUN_003249b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00386908;
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


// ===== 00324a44  FUN_00324a44 =====

void FUN_00324a44(long param_1)

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
  *puVar4 = &PTR_FUN_00386908;
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


// ===== 00324abc  FUN_00324abc =====

void FUN_00324abc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00386908;
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


// ===== 00324b20  FUN_00324b20 =====

void FUN_00324b20(long param_1)

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


// ===== 00324bac  FUN_00324bac =====

void FUN_00324bac(void *param_1)

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


// ===== 00324c2c  FUN_00324c2c =====

void FUN_00324c2c(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  void *pvVar5;
  int iVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *local_a0;
  ulong *local_98;
  ulong *local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar15 = *param_2;
  uVar9 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00324c68 to 00324c7b has its CatchHandler @ 00324f18 */
  plVar7 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar7 + 0x558))(plVar7,uVar15);
  local_a0 = (ulong *)0x0;
  local_98 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
                    /* try { // try from 00324c8c to 00324c97 has its CatchHandler @ 00324f14 */
  FUN_0031fad0(&local_a0,(long)iVar6);
  if (iVar6 != 0) {
    uVar16 = 0;
    do {
                    /* try { // try from 00324cc4 to 00324cdb has its CatchHandler @ 00324f4c */
      plVar7 = (long *)facebook::jni::Environment::current();
      local_70 = (**(code **)(*plVar7 + 0x568))(plVar7,uVar15,uVar16 & 0xffffffff);
                    /* try { // try from 00324ce0 to 00324ceb has its CatchHandler @ 00324f38 */
      facebook::jni::JString::toStdString();
      puVar17 = local_98;
      puVar2 = local_a0;
      if (local_98 < local_90) {
        local_98[2] = (ulong)local_78;
        local_98[1] = uStack_80;
        *local_98 = local_88;
        local_98 = local_98 + 3;
      }
      else {
        lVar11 = (long)local_98 - (long)local_a0 >> 3;
        uVar19 = lVar11 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar19) {
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00324ef4 to 00324f0f has its CatchHandler @ 00324f20 */
            FUN_00275ff4();
LAB_00324ef8:
            if (*(long *)(lVar1 + 0x28) == local_68) {
              uVar9 = FUN_00260a2c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00324e5c with catch @ 00324f10
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00324cc4 with catch @ 00324f4c
                        */
              FUN_00275f3c(&local_a0);
              if (*(long *)(lVar1 + 0x28) == local_68) {
                FUN_00255d34(uVar9);
              }
            }
          }
          goto LAB_00324f74;
        }
        lVar10 = (long)local_90 - (long)local_a0 >> 3;
        uVar12 = lVar10 * 0x5555555555555556;
        if (uVar12 < uVar19 || uVar12 - uVar19 == 0) {
          uVar12 = uVar19;
        }
        if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
          uVar12 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar12 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_00324ef8;
                    /* try { // try from 00324d6c to 00324d6f has its CatchHandler @ 00324f1c */
          pvVar8 = operator_new(uVar12 * 0x18);
        }
        pvVar5 = local_78;
        uVar4 = uStack_80;
        uVar19 = local_88;
        puVar3 = local_a0;
        puVar14 = (ulong *)((long)pvVar8 + lVar11 * 8);
        uStack_80 = 0;
        local_78 = (void *)0x0;
        local_90 = (ulong *)((long)pvVar8 + uVar12 * 0x18);
        local_88 = 0;
        puVar14[1] = uVar4;
        *puVar14 = uVar19;
        puVar14[2] = (ulong)pvVar5;
        local_a0 = puVar14;
        if (puVar17 != puVar2) {
          do {
            uVar12 = puVar17[-2];
            uVar19 = puVar17[-3];
            local_a0[-1] = puVar17[-1];
            puVar13 = puVar17 + -3;
            local_a0[-2] = uVar12;
            local_a0[-3] = uVar19;
            local_a0 = local_a0 + -3;
            puVar17[-2] = 0;
            puVar17[-1] = 0;
            puVar17[-3] = 0;
            puVar17 = puVar13;
            puVar18 = local_98;
          } while (puVar13 != puVar2);
          while (puVar2 = puVar18, puVar17 = puVar3, puVar2 != puVar3) {
            puVar18 = puVar2 + -3;
            if ((*puVar18 & 1) != 0) {
              operator_delete((void *)puVar2[-1]);
            }
          }
        }
        if (puVar17 != (ulong *)0x0) {
          operator_delete(puVar17);
        }
        local_98 = puVar14 + 3;
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
        }
      }
      lVar11 = local_70;
      if (local_70 != 0) {
                    /* try { // try from 00324e44 to 00324e57 has its CatchHandler @ 00324f48 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,lVar11);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != (long)iVar6);
  }
                    /* try { // try from 00324e5c to 00324e67 has its CatchHandler @ 00324f10 */
  FUN_0031fc38(uVar9,&local_a0);
  puVar2 = local_a0;
  puVar17 = local_98;
  if (local_a0 != (ulong *)0x0) {
    while (puVar3 = puVar17, puVar3 != puVar2) {
      puVar17 = puVar3 + -3;
      if ((*puVar17 & 1) != 0) {
        operator_delete((void *)puVar3[-1]);
      }
    }
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00324f74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324f78  FUN_00324f78 =====

void FUN_00324f78(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveFileSpec22getViewModelNamesAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00324fc8  FUN_00324fc8 =====

pointer_____offset_0x10___ * FUN_00324fc8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00386968;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325008  FUN_00325008 =====

long FUN_00325008(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"updateReferencedAssets",PTR_kDescriptor_00396110);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325084  FUN_00325084 =====

void FUN_00325084(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  _jclass *p_Var5;
  long lVar6;
  long *plVar7;
  long lVar8;
  _jobject *p_Var9;
  _jmethodID *p_Var10;
  undefined8 uVar11;
  long *plVar12;
  char cVar13;
  _jmethodID *p_Var14;
  _jmethodID *local_b0;
  long local_a0;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (((*PTR_clazz_00395f60 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_clazz_00395f60), iVar4 != 0)) {
                    /* try { // try from 003255b8 to 003255bb has its CatchHandler @ 00325690 */
    FUN_003258d0();
    __cxa_guard_release(PTR_clazz_00395f60);
  }
  if (((*PTR_create_00395f70 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_create_00395f70), iVar4 != 0)) {
                    /* try { // try from 003255dc to 003255df has its CatchHandler @ 00325680 */
    uVar11 = FUN_00325994();
    *(undefined8 *)PTR_create_00395f68 = uVar11;
    __cxa_guard_release(PTR_create_00395f70);
  }
  p_Var10 = *(_jmethodID **)PTR_clazz_00395f58;
  if ((char)param_2[5] == '\0') {
    local_b0 = (_jmethodID *)0x0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 3);
    if (((DAT_0039d708 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d708), iVar4 != 0)) {
                    /* try { // try from 0032560c to 0032560f has its CatchHandler @ 00325670 */
      FUN_00325f38();
      __cxa_guard_release(&DAT_0039d708);
    }
    if (((DAT_0039d718 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d718), iVar4 != 0)) {
                    /* try { // try from 00325630 to 00325633 has its CatchHandler @ 00325660 */
      DAT_0039d710 = FUN_00325ff8();
      __cxa_guard_release(&DAT_0039d718);
    }
    uVar11 = DAT_0039d710;
    p_Var5 = (_jclass *)facebook::jni::Environment::current();
    local_b0 = (_jmethodID *)_JNIEnv::NewObject(p_Var5,DAT_0039d700,uVar11,(ulong)uVar2);
    facebook::jni::throwCppExceptionIf(local_b0 == (_jmethodID *)0x0);
    if ((char)param_2[5] == '\0') {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0032565c to 0032565f has its CatchHandler @ 003256e0 */
        uVar11 = FUN_00325a84();
                    /* catch() { ... } // from try @ 00325630 with catch @ 00325660 */
        __cxa_guard_abort(&DAT_0039d718);
        if (*(long *)(lVar3 + 0x28) == local_68) {
          FUN_00255d34(uVar11);
        }
      }
      goto LAB_003257c0;
    }
    for (plVar12 = (long *)param_2[2]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      pcVar1 = (char *)((long)plVar12 + 0x11);
      if ((*(byte *)(plVar12 + 2) & 1) != 0) {
        pcVar1 = (char *)plVar12[4];
      }
                    /* try { // try from 0032517c to 00325183 has its CatchHandler @ 00325718 */
      facebook::jni::make_jstring(pcVar1);
      if (((*PTR_clazz_00395ff0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_clazz_00395ff0), iVar4 != 0)) {
                    /* try { // try from 003254a0 to 003254a3 has its CatchHandler @ 003256cc */
        FUN_00325cf8();
        __cxa_guard_release(PTR_clazz_00395ff0);
      }
      if (((*PTR_create_00396000 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_create_00396000), iVar4 != 0)) {
                    /* try { // try from 003254c4 to 003254c7 has its CatchHandler @ 003256b8 */
        uVar11 = FUN_00325dbc();
        *(undefined8 *)PTR_create_00395ff8 = uVar11;
        __cxa_guard_release(PTR_create_00396000);
      }
      p_Var14 = *(_jmethodID **)PTR_clazz_00395fe8;
      if (*(char *)(plVar12 + 8) == '\0') {
        local_70 = 0;
        if (*(char *)(plVar12 + 0xc) != '\0') goto LAB_003251e4;
LAB_003252c4:
        local_78 = 0;
        lVar8 = local_70;
        if (*(char *)(plVar12 + 0x10) != '\0') goto LAB_0032520c;
LAB_003252d4:
        local_80 = 0;
        if (*(char *)(plVar12 + 0x14) != '\0') goto LAB_00325234;
LAB_003252e4:
        local_88 = 0;
        cVar13 = *(char *)(plVar12 + 0x17);
        if (cVar13 != '\0') goto LAB_0032525c;
LAB_003252f4:
        lVar6 = 0;
      }
      else {
        pcVar1 = (char *)((long)plVar12 + 0x29);
        if ((*(byte *)(plVar12 + 5) & 1) != 0) {
          pcVar1 = (char *)plVar12[7];
        }
                    /* try { // try from 003251d0 to 003251d7 has its CatchHandler @ 003256f8 */
        facebook::jni::make_jstring(pcVar1);
        if (*(char *)(plVar12 + 0xc) == '\0') goto LAB_003252c4;
LAB_003251e4:
        lVar8 = local_70;
        pcVar1 = (char *)((long)plVar12 + 0x49);
        if ((*(byte *)(plVar12 + 9) & 1) != 0) {
          pcVar1 = (char *)plVar12[0xb];
        }
                    /* try { // try from 003251f8 to 003251ff has its CatchHandler @ 00325700 */
        facebook::jni::make_jstring(pcVar1);
        if (*(char *)(plVar12 + 0x10) == '\0') goto LAB_003252d4;
LAB_0032520c:
        pcVar1 = (char *)((long)plVar12 + 0x69);
        if ((*(byte *)(plVar12 + 0xd) & 1) != 0) {
          pcVar1 = (char *)plVar12[0xf];
        }
                    /* try { // try from 00325220 to 00325227 has its CatchHandler @ 00325708 */
        facebook::jni::make_jstring(pcVar1);
        if (*(char *)(plVar12 + 0x14) == '\0') goto LAB_003252e4;
LAB_00325234:
        pcVar1 = (char *)((long)plVar12 + 0x89);
        if ((*(byte *)(plVar12 + 0x11) & 1) != 0) {
          pcVar1 = (char *)plVar12[0x13];
        }
                    /* try { // try from 00325248 to 0032524f has its CatchHandler @ 00325710 */
        facebook::jni::make_jstring(pcVar1);
        cVar13 = *(char *)(plVar12 + 0x17);
        if (cVar13 == '\0') goto LAB_003252f4;
LAB_0032525c:
        lVar6 = __dynamic_cast(plVar12[0x15],PTR_typeinfo_00394b40,PTR_typeinfo_00396158,
                               0xffffffffffffffff);
        param_2 = (long *)plVar12[0x16];
        if (param_2 != (long *)0x0) {
          FUN_00259a00(1,param_2 + 1);
        }
        uVar11 = *(undefined8 *)(lVar6 + 8);
                    /* try { // try from 00325294 to 003252af has its CatchHandler @ 00325744 */
        plVar7 = (long *)facebook::jni::Environment::current();
        lVar6 = (**(code **)(*plVar7 + 0xa8))(plVar7,uVar11);
        facebook::jni::throwPendingJniExceptionAsCppException();
      }
                    /* try { // try from 003252fc to 0032532f has its CatchHandler @ 0032574c */
      p_Var5 = (_jclass *)facebook::jni::Environment::current();
      lVar8 = _JNIEnv::CallStaticObjectMethod
                        (p_Var5,p_Var14,*(undefined8 *)PTR_create_00395ff8,lVar8,local_78,local_80,
                         local_88,lVar6);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar6 != 0) {
                    /* try { // try from 00325338 to 0032534b has its CatchHandler @ 0032573c */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb0))(plVar7,lVar6);
      }
      if (((cVar13 != '\0') && (param_2 != (long *)0x0)) &&
         (lVar6 = FUN_00255510(0xffffffffffffffff,param_2 + 1), lVar6 == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (local_88 != 0) {
                    /* try { // try from 00325370 to 00325383 has its CatchHandler @ 00325738 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,local_88);
      }
      if (local_80 != 0) {
                    /* try { // try from 0032538c to 0032539f has its CatchHandler @ 00325734 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,local_80);
      }
      if (local_78 != 0) {
                    /* try { // try from 003253a8 to 003253bb has its CatchHandler @ 00325740 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,local_78);
      }
      lVar6 = local_70;
      if (local_70 != 0) {
                    /* try { // try from 003253c4 to 003253d7 has its CatchHandler @ 0032572c */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
      }
      if (((*PTR_putMethod_00395fc0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_putMethod_00395fc0), iVar4 != 0)) {
                    /* try { // try from 003254f4 to 00325503 has its CatchHandler @ 003256a4 */
        FUN_00325bbc(&local_70);
        uVar11 = FUN_00325c7c(&local_70);
        *(undefined8 *)PTR_putMethod_00395fb8 = uVar11;
        __cxa_guard_release(PTR_putMethod_00395fc0);
      }
                    /* try { // try from 003253f0 to 00325417 has its CatchHandler @ 00325788 */
      p_Var9 = (_jobject *)facebook::jni::Environment::current();
      lVar6 = _JNIEnv::CallObjectMethod
                        (p_Var9,local_b0,*(undefined8 *)PTR_putMethod_00395fb8,local_a0,lVar8);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar6 != 0) {
                    /* try { // try from 0032541c to 0032542f has its CatchHandler @ 00325728 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
      }
      if (lVar8 != 0) {
                    /* try { // try from 00325438 to 0032544b has its CatchHandler @ 00325724 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
      }
      if (local_a0 != 0) {
                    /* try { // try from 00325454 to 00325467 has its CatchHandler @ 00325730 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,local_a0);
      }
    }
  }
                    /* try { // try from 00325534 to 00325557 has its CatchHandler @ 003256e8 */
  p_Var5 = (_jclass *)facebook::jni::Environment::current();
  uVar11 = _JNIEnv::CallStaticObjectMethod
                     (p_Var5,p_Var10,*(undefined8 *)PTR_create_00395f68,local_b0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  *param_1 = uVar11;
  if (local_b0 != (_jmethodID *)0x0) {
                    /* try { // try from 00325564 to 00325577 has its CatchHandler @ 003256e4 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,local_b0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_003257c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003257c4  _JNIEnv::CallVoidMethod =====

/* _JNIEnv::CallVoidMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 0x1f0))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325860  FUN_00325860 =====

void FUN_00325860(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0032588c to 0032589f has its CatchHandler @ 003258cc */
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


// ===== 003258d0  FUN_003258d0 =====

void FUN_003258d0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00395f80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00395f80), iVar2 != 0))
  {
                    /* try { // try from 00325944 to 00325957 has its CatchHandler @ 00325968 */
    facebook::jni::findClassStatic(PTR_kBaseName_00395f88);
    __cxa_guard_release(PTR_cls_00395f80);
  }
  *(undefined8 *)PTR_clazz_00395f58 = *(undefined8 *)PTR_cls_00395f78;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325994  FUN_00325994 =====

long FUN_00325994(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_clazz_00395f58,"fromCpp",PTR_kDescriptor_00395f90);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325a14  FUN_00325a14 =====

void FUN_00325a14(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00325a40 to 00325a53 has its CatchHandler @ 00325a80 */
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


// ===== 00325a84  FUN_00325a84 =====

void FUN_00325a84(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    plVar2 = (long *)__cxa_allocate_exception(8);
    *plVar2 = (long)(PTR_vtable_00396150 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar2,PTR_typeinfo_00396148,PTR__bad_optional_access_00396138);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325adc  FUN_00325adc =====

void FUN_00325adc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00325b08 to 00325b1b has its CatchHandler @ 00325b48 */
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


// ===== 00325b4c  FUN_00325b4c =====

void FUN_00325b4c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00325b78 to 00325b8b has its CatchHandler @ 00325bb8 */
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


// ===== 00325bbc  FUN_00325bbc =====

void FUN_00325bbc(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00395fd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00395fd0), iVar2 != 0))
  {
                    /* try { // try from 00325c2c to 00325c3f has its CatchHandler @ 00325c50 */
    facebook::jni::findClassStatic(PTR_kBaseName_00395fd8);
    __cxa_guard_release(PTR_cls_00395fd0);
  }
  *param_1 = *(undefined8 *)PTR_cls_00395fc8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325c7c  FUN_00325c7c =====

long FUN_00325c7c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,&DAT_001d659d,PTR_kDescriptor_00395fe0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325cf8  FUN_00325cf8 =====

void FUN_00325cf8(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396010 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396010), iVar2 != 0))
  {
                    /* try { // try from 00325d6c to 00325d7f has its CatchHandler @ 00325d90 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396018);
    __cxa_guard_release(PTR_cls_00396010);
  }
  *(undefined8 *)PTR_clazz_00395fe8 = *(undefined8 *)PTR_cls_00396008;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325dbc  FUN_00325dbc =====

long FUN_00325dbc(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_clazz_00395fe8,"fromCpp",PTR_kDescriptor_00396020);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325e3c  FUN_00325e3c =====

void FUN_00325e3c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00325e68 to 00325e7b has its CatchHandler @ 00325ea8 */
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


// ===== 00325eac  FUN_00325eac =====

void FUN_00325eac(long *param_1)

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


// ===== 00325f38  FUN_00325f38 =====

void FUN_00325f38(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00395fa0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00395fa0), iVar2 != 0))
  {
                    /* try { // try from 00325fa8 to 00325fbb has its CatchHandler @ 00325fcc */
    facebook::jni::findClassStatic(PTR_kBaseName_00395fa8);
    __cxa_guard_release(PTR_cls_00395fa0);
  }
  DAT_0039d700 = *(undefined8 *)PTR_cls_00395f98;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325ff8  FUN_00325ff8 =====

long FUN_00325ff8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039d700,"<init>",PTR_kConstructorDescriptor_00395fb0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326074  FUN_00326074 =====

long FUN_00326074(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"defaultArtboardViewModel",PTR_kDescriptor_00396108);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003260f0  FUN_003260f0 =====

void FUN_003260f0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0032611c to 0032612f has its CatchHandler @ 0032615c */
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


// ===== 00326160  FUN_00326160 =====

long FUN_00326160(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"viewModelByName",PTR_kDescriptor_00396100)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003261dc  FUN_003261dc =====

long FUN_003261dc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"viewModelByIndex",PTR_kDescriptor_003960f8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326258  FUN_00326258 =====

long FUN_00326258(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"getArtboardNames",PTR_kDescriptor_003960f0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003262d4  FUN_003262d4 =====

void FUN_003262d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00326300 to 00326313 has its CatchHandler @ 00326340 */
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


// ===== 00326344  FUN_00326344 =====

long FUN_00326344(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_003960e8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003263c8  FUN_003263c8 =====

void FUN_003263c8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00386fd8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032640c  FUN_0032640c =====

void FUN_0032640c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00386fd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326464  FUN_00326464 =====

void FUN_00326464(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0032649c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003264a4  FUN_003264a4 =====

void FUN_003264a4(void *param_1)

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


// ===== 003264dc  margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_003861f0;
  local_60 = PTR_s_initHybrid_003861e8;
  local_50 = PTR_call_003861f8;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridRi_001d72c3._41_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridRi_001d72c3._33_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridRi_001d72c3._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridRi_001d72c3._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridRi_001d72c3._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridRi_001d72c3._1_8_;
  pcVar9[0x30] = 't';
  pcVar9[0x31] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
  *(undefined8 *)(pcVar9 + 0x28) = uVar7;
  *(undefined8 *)(pcVar9 + 0x20) = uVar6;
                    /* try { // try from 00326540 to 00326547 has its CatchHandler @ 003265b8 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00326550 to 00326577 has its CatchHandler @ 003265cc */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00326580 to 00326593 has its CatchHandler @ 003265c8 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003265f4  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00326620 to 0032662b has its CatchHandler @ 0032665c */
  FUN_0031b0ac(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003266a8  margelo::nitro::rive::JHybridRiveFileSpec::getViewModelCount =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFileSpec::getViewModelCount() */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getViewModelCount(JHybridRiveFileSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getViewModelCount(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003266ec  margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCount =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCount() */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCount(JHybridRiveFileSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getArtboardCount(this + *(long *)(*(long *)this + -0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326730  margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNames =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNames() */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNames(JHybridRiveFileSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getArtboardNames();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326774  margelo::nitro::rive::JHybridRiveFileSpec::viewModelByIndex =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFileSpec::viewModelByIndex(double) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::viewModelByIndex
          (JHybridRiveFileSpec *this,double param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    viewModelByIndex(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003267b8  margelo::nitro::rive::JHybridRiveFileSpec::viewModelByName =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileSpec::viewModelByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::viewModelByName
          (JHybridRiveFileSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    viewModelByName((basic_string *)(this + *(long *)(*(long *)this + -0x50)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003267fc  margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModel =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModel(std::__ndk1::optional<margelo::nitro::rive::ArtboardBy>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModel
          (JHybridRiveFileSpec *this,optional *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    defaultArtboardViewModel((optional *)(this + *(long *)(*(long *)this + -0x58)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326840  margelo::nitro::rive::JHybridRiveFileSpec::updateReferencedAssets =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileSpec::updateReferencedAssets(margelo::nitro::rive::ReferencedAssetsType
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::updateReferencedAssets
          (JHybridRiveFileSpec *this,ReferencedAssetsType *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    updateReferencedAssets(this + *(long *)(*(long *)this + -0x60),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326884  margelo::nitro::rive::JHybridRiveFileSpec::getViewModelNamesAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFileSpec::getViewModelNamesAsync() */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getViewModelNamesAsync(JHybridRiveFileSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getViewModelNamesAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003268c8  margelo::nitro::rive::JHybridRiveFileSpec::viewModelByNameAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileSpec::viewModelByNameAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<bool>) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::viewModelByNameAsync
          (JHybridRiveFileSpec *this,undefined8 param_1,undefined2 param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    viewModelByNameAsync(this + *(long *)(*(long *)this + -0x70),param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326910  margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModelAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModelAsync(std::__ndk1::optional<margelo::nitro::rive::ArtboardBy>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModelAsync
          (JHybridRiveFileSpec *this,optional *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    defaultArtboardViewModelAsync((optional *)(this + *(long *)(*(long *)this + -0x78)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326954  margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCountAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCountAsync() */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCountAsync(JHybridRiveFileSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getArtboardCountAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326998  margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNamesAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNamesAsync() */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNamesAsync(JHybridRiveFileSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getArtboardNamesAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003269dc  margelo::nitro::rive::JHybridRiveFileSpec::getBindableArtboard =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileSpec::getBindableArtboard(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getBindableArtboard
          (JHybridRiveFileSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getBindableArtboard((basic_string *)(this + *(long *)(*(long *)this + -0x90)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326a20  margelo::nitro::rive::JHybridRiveFileFactorySpec::JavaPart::getJHybridRiveFileFactorySpec =====

/* margelo::nitro::rive::JHybridRiveFileFactorySpec::JavaPart::getJHybridRiveFileFactorySpec() */

void __thiscall
margelo::nitro::rive::JHybridRiveFileFactorySpec::JavaPart::getJHybridRiveFileFactorySpec
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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396180,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00326ae8 to 00326af3 has its CatchHandler @ 00326b28 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridRiveFileFactorySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 00326b08 to 00326b1f has its CatchHandler @ 00326b20 */
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


// ===== 00326b64  FUN_00326b64 =====

void FUN_00326b64(long *param_1)

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


// ===== 00326bf0  margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00326c48(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326c48  FUN_00326c48 =====

void FUN_00326c48(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 00326c80 to 00326c87 has its CatchHandler @ 00326d64 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396188 + 0x10;
                    /* try { // try from 00326c98 to 00326c9f has its CatchHandler @ 00326d5c */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00326ca4 to 00326cbf has its CatchHandler @ 00326d78 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00326cc8 to 00326cd3 has its CatchHandler @ 00326d2c */
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
                    /* try { // try from 00326cf4 to 00326d07 has its CatchHandler @ 00326d74 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326db0  FUN_00326db0 =====

void FUN_00326db0(long *param_1)

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
                    /* try { // try from 00326dec to 00326dff has its CatchHandler @ 00326e3c */
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


// ===== 00326e40  margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::createHybridObject
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
  
  puVar1 = PTR_target_class_003961f0;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_003270fc:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00327108 to 00327113 has its CatchHandler @ 003272a0 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridRiveFileFactorySpec::JavaPart!"
                        );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00327124 to 0032713b has its CatchHandler @ 0032729c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00327344;
  }
  if (((*PTR_target_class_003961f8 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_003961f8),
     (int)param_1 != 0)) {
                    /* try { // try from 0032714c to 0032715b has its CatchHandler @ 00327260 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396200);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_003961f8);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00327344;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396200);
LAB_003271a0:
                    /* try { // try from 003271a0 to 003271af has its CatchHandler @ 0032728c */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00327344;
                    /* try { // try from 003271d4 to 003271ef has its CatchHandler @ 00327274 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396200);
  }
  else {
                    /* try { // try from 00326e98 to 00326eab has its CatchHandler @ 003272e0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00326eb4 to 00326ecb has its CatchHandler @ 003272dc */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_003271a0;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 00326edc to 00326ef7 has its CatchHandler @ 003272e4 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00327248 to 0032725f has its CatchHandler @ 003272e4 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00327344;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 00326f14 to 00326f27 has its CatchHandler @ 003272d8 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_003270fc;
                    /* try { // try from 00326f2c to 00326f33 has its CatchHandler @ 003272c8 */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_00387af8;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00396170;
                    /* try { // try from 00326f64 to 00326f7f has its CatchHandler @ 003272c0 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396170 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00396178 + 0x50;
    plVar5[5] = (long)(PTR_construction_vtable_00396178 + 0xd8);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 00326f98 to 00326fb3 has its CatchHandler @ 003272e8 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00326fb8 to 00326fc7 has its CatchHandler @ 003272b0 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00326fd0 to 00326fe3 has its CatchHandler @ 003272d4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00396168 + 0x60;
    puVar2 = PTR_vtable_00396168 + 0x170;
    plVar5[5] = (long)(PTR_vtable_00396168 + 0xe8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 00327004 to 0032701f has its CatchHandler @ 003272f0 */
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
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x60);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 003270b8 to 003270cb has its CatchHandler @ 003272d0 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_00327344;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00327210 to 00327227 has its CatchHandler @ 003272f0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00327344:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00327348  FUN_00327348 =====

void FUN_00327348(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00328824();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003273bc  FUN_003273bc =====

void FUN_003273bc(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00328824();
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


// ===== 00327438  margelo::nitro::rive::JHybridRiveFileFactorySpec::fromURL =====

/* margelo::nitro::rive::JHybridRiveFileFactorySpec::fromURL(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::optional<margelo::nitro::rive::ReferencedAssetsType> const&) */

void margelo::nitro::rive::JHybridRiveFileFactorySpec::fromURL
               (basic_string *param_1,bool param_2,optional *param_3)

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
  byte *pbVar13;
  long in_x3;
  undefined8 *in_x8;
  long lVar14;
  byte *pbVar15;
  _jmethodID *p_Var16;
  long local_a0;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  pbVar13 = (byte *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d748 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d748), iVar4 != 0)) {
                    /* try { // try from 003276d4 to 003276eb has its CatchHandler @ 003277ac */
    FUN_00328b4c(&local_90);
    DAT_0039d740 = FUN_0032ac68(&local_90,"fromURL");
    __cxa_guard_release(&DAT_0039d748);
  }
  pbVar15 = *(byte **)(pbVar13 + 0x10);
  p_Var16 = *(_jmethodID **)(param_1 + 8);
  if ((*pbVar13 & 1) == 0) {
    pbVar15 = pbVar13 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar15);
  ppuVar8 = local_90;
  if (*(char *)(in_x3 + 0x30) == '\0') {
    local_a0 = 0;
  }
  else {
                    /* try { // try from 003274ac to 003274b7 has its CatchHandler @ 003277c0 */
    FUN_00325084(&local_a0);
  }
  lVar14 = local_a0;
                    /* try { // try from 003274c8 to 003274ef has its CatchHandler @ 00327884 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod
                    (p_Var5,p_Var16,DAT_0039d740,ppuVar8,(ulong)((uint)param_3 & 1),lVar14);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (lVar14 != 0) {
                    /* try { // try from 003274f8 to 0032750b has its CatchHandler @ 00327868 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar14);
  }
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 00327514 to 00327527 has its CatchHandler @ 00327864 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 00327528 to 0032752f has its CatchHandler @ 00327858 */
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
                    /* try { // try from 00327550 to 00327557 has its CatchHandler @ 00327848 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_00387600;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00327724 to 00327727 has its CatchHandler @ 00327790 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00327580 to 00327593 has its CatchHandler @ 0032786c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00387678;
                    /* try { // try from 003275c8 to 003275cf has its CatchHandler @ 00327808 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar14 = 4;
    pppuVar12 = &local_90;
LAB_003275f0:
    (*(code *)(*pppuVar12)[lVar14])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar14 = 5;
    pppuVar12 = local_70;
    goto LAB_003275f0;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0032776c to 0032776f has its CatchHandler @ 0032778c */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00327604 to 00327613 has its CatchHandler @ 0032786c */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar14 = in_x8[1];
  if (lVar14 != 0) {
    FUN_00259a00(1,lVar14 + 8);
  }
  local_90 = &PTR_FUN_003876f8;
                    /* try { // try from 00327648 to 0032764f has its CatchHandler @ 003277c8 */
  uStack_88 = uVar10;
  local_80 = lVar14;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar14 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0032767c;
    lVar14 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar14])();
LAB_0032767c:
  lVar14 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00327684 to 00327697 has its CatchHandler @ 00327860 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar14);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003278b4  margelo::nitro::rive::JHybridRiveFileFactorySpec::fromFileURL =====

/* margelo::nitro::rive::JHybridRiveFileFactorySpec::fromFileURL(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::optional<margelo::nitro::rive::ReferencedAssetsType> const&) */

void margelo::nitro::rive::JHybridRiveFileFactorySpec::fromFileURL
               (basic_string *param_1,bool param_2,optional *param_3)

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
  byte *pbVar13;
  long in_x3;
  undefined8 *in_x8;
  long lVar14;
  byte *pbVar15;
  _jmethodID *p_Var16;
  long local_a0;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  pbVar13 = (byte *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d758 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d758), iVar4 != 0)) {
                    /* try { // try from 00327b50 to 00327b67 has its CatchHandler @ 00327c28 */
    FUN_00328b4c(&local_90);
    DAT_0039d750 = FUN_0032ac68(&local_90,"fromFileURL");
    __cxa_guard_release(&DAT_0039d758);
  }
  pbVar15 = *(byte **)(pbVar13 + 0x10);
  p_Var16 = *(_jmethodID **)(param_1 + 8);
  if ((*pbVar13 & 1) == 0) {
    pbVar15 = pbVar13 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar15);
  ppuVar8 = local_90;
  if (*(char *)(in_x3 + 0x30) == '\0') {
    local_a0 = 0;
  }
  else {
                    /* try { // try from 00327928 to 00327933 has its CatchHandler @ 00327c3c */
    FUN_00325084(&local_a0);
  }
  lVar14 = local_a0;
                    /* try { // try from 00327944 to 0032796b has its CatchHandler @ 00327d00 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod
                    (p_Var5,p_Var16,DAT_0039d750,ppuVar8,(ulong)((uint)param_3 & 1),lVar14);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (lVar14 != 0) {
                    /* try { // try from 00327974 to 00327987 has its CatchHandler @ 00327ce4 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar14);
  }
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 00327990 to 003279a3 has its CatchHandler @ 00327ce0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 003279a4 to 003279ab has its CatchHandler @ 00327cd4 */
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
                    /* try { // try from 003279cc to 003279d3 has its CatchHandler @ 00327cc4 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_00387600;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00327ba0 to 00327ba3 has its CatchHandler @ 00327c0c */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 003279fc to 00327a0f has its CatchHandler @ 00327ce8 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00387778;
                    /* try { // try from 00327a44 to 00327a4b has its CatchHandler @ 00327c84 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar14 = 4;
    pppuVar12 = &local_90;
LAB_00327a6c:
    (*(code *)(*pppuVar12)[lVar14])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar14 = 5;
    pppuVar12 = local_70;
    goto LAB_00327a6c;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00327be8 to 00327beb has its CatchHandler @ 00327c08 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00327a80 to 00327a8f has its CatchHandler @ 00327ce8 */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar14 = in_x8[1];
  if (lVar14 != 0) {
    FUN_00259a00(1,lVar14 + 8);
  }
  local_90 = &PTR_FUN_003877f8;
                    /* try { // try from 00327ac4 to 00327acb has its CatchHandler @ 00327c44 */
  uStack_88 = uVar10;
  local_80 = lVar14;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar14 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00327af8;
    lVar14 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar14])();
LAB_00327af8:
  lVar14 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00327b00 to 00327b13 has its CatchHandler @ 00327cdc */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar14);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00327d30  margelo::nitro::rive::JHybridRiveFileFactorySpec::fromResource =====

/* margelo::nitro::rive::JHybridRiveFileFactorySpec::fromResource(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::optional<margelo::nitro::rive::ReferencedAssetsType> const&) */

void margelo::nitro::rive::JHybridRiveFileFactorySpec::fromResource
               (basic_string *param_1,bool param_2,optional *param_3)

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
  byte *pbVar13;
  long in_x3;
  undefined8 *in_x8;
  long lVar14;
  byte *pbVar15;
  _jmethodID *p_Var16;
  long local_a0;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  pbVar13 = (byte *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d768 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d768), iVar4 != 0)) {
                    /* try { // try from 00327fcc to 00327fe3 has its CatchHandler @ 003280a4 */
    FUN_00328b4c(&local_90);
    DAT_0039d760 = FUN_0032ac68(&local_90,"fromResource");
    __cxa_guard_release(&DAT_0039d768);
  }
  pbVar15 = *(byte **)(pbVar13 + 0x10);
  p_Var16 = *(_jmethodID **)(param_1 + 8);
  if ((*pbVar13 & 1) == 0) {
    pbVar15 = pbVar13 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar15);
  ppuVar8 = local_90;
  if (*(char *)(in_x3 + 0x30) == '\0') {
    local_a0 = 0;
  }
  else {
                    /* try { // try from 00327da4 to 00327daf has its CatchHandler @ 003280b8 */
    FUN_00325084(&local_a0);
  }
  lVar14 = local_a0;
                    /* try { // try from 00327dc0 to 00327de7 has its CatchHandler @ 0032817c */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod
                    (p_Var5,p_Var16,DAT_0039d760,ppuVar8,(ulong)((uint)param_3 & 1),lVar14);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (lVar14 != 0) {
                    /* try { // try from 00327df0 to 00327e03 has its CatchHandler @ 00328160 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar14);
  }
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 00327e0c to 00327e1f has its CatchHandler @ 0032815c */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 00327e20 to 00327e27 has its CatchHandler @ 00328150 */
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
                    /* try { // try from 00327e48 to 00327e4f has its CatchHandler @ 00328140 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_00387600;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0032801c to 0032801f has its CatchHandler @ 00328088 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00327e78 to 00327e8b has its CatchHandler @ 00328164 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00387878;
                    /* try { // try from 00327ec0 to 00327ec7 has its CatchHandler @ 00328100 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar14 = 4;
    pppuVar12 = &local_90;
LAB_00327ee8:
    (*(code *)(*pppuVar12)[lVar14])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar14 = 5;
    pppuVar12 = local_70;
    goto LAB_00327ee8;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00328064 to 00328067 has its CatchHandler @ 00328084 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00327efc to 00327f0b has its CatchHandler @ 00328164 */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar14 = in_x8[1];
  if (lVar14 != 0) {
    FUN_00259a00(1,lVar14 + 8);
  }
  local_90 = &PTR_FUN_003878f8;
                    /* try { // try from 00327f40 to 00327f47 has its CatchHandler @ 003280c0 */
  uStack_88 = uVar10;
  local_80 = lVar14;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar14 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00327f74;
    lVar14 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar14])();
LAB_00327f74:
  lVar14 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00327f7c to 00327f8f has its CatchHandler @ 00328158 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar14);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003281ac  margelo::nitro::rive::JHybridRiveFileFactorySpec::fromBytes =====

/* margelo::nitro::rive::JHybridRiveFileFactorySpec::fromBytes(std::__ndk1::shared_ptr<margelo::nitro::ArrayBuffer>
   const&, bool, std::__ndk1::optional<margelo::nitro::rive::ReferencedAssetsType> const&) */

void margelo::nitro::rive::JHybridRiveFileFactorySpec::fromBytes
               (shared_ptr *param_1,bool param_2,optional *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  int iVar5;
  _jobject *p_Var6;
  long lVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  long in_x3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *in_x8;
  _jmethodID *p_Var14;
  undefined **ppuVar15;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d778 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039d778), iVar5 != 0)) {
                    /* try { // try from 0032843c to 0032844b has its CatchHandler @ 0032850c */
    FUN_00328b4c(&local_90);
    DAT_0039d770 = FUN_00328c0c(&local_90);
    __cxa_guard_release(&DAT_0039d778);
  }
  p_Var14 = *(_jmethodID **)(param_1 + 8);
  FUN_00328c88(&local_90,param_2);
  ppuVar9 = local_90;
  if (*(char *)(in_x3 + 0x30) == '\0') {
    local_90 = (undefined **)0x0;
    ppuVar15 = ppuVar9;
  }
  else {
                    /* try { // try from 00328218 to 00328223 has its CatchHandler @ 00328520 */
    ppuVar15 = local_90;
    FUN_00325084(&local_90);
  }
  ppuVar4 = local_90;
                    /* try { // try from 00328234 to 0032825b has its CatchHandler @ 003285e4 */
  p_Var6 = (_jobject *)facebook::jni::Environment::current();
  lVar7 = _JNIEnv::CallObjectMethod
                    (p_Var6,p_Var14,DAT_0039d770,ppuVar9,(ulong)((uint)param_3 & 1),ppuVar4,in_x6,
                     in_x7,ppuVar15);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar7;
  if (ppuVar4 != (undefined **)0x0) {
                    /* try { // try from 00328264 to 00328277 has its CatchHandler @ 003285c8 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,ppuVar4);
  }
  if (ppuVar9 != (undefined **)0x0) {
                    /* try { // try from 0032827c to 0032828f has its CatchHandler @ 003285c4 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,ppuVar9);
  }
                    /* try { // try from 00328290 to 00328297 has its CatchHandler @ 003285b8 */
  ppuVar9 = (undefined **)operator_new(0x70);
  *in_x8 = ppuVar9;
  ppuVar9[3] = (undefined *)0x0;
  ppuVar9[2] = (undefined *)0x0;
  ppuVar9[5] = (undefined *)0x0;
  ppuVar9[4] = (undefined *)0x0;
  ppuVar9[7] = (undefined *)0x0;
  ppuVar9[6] = (undefined *)0x0;
  ppuVar9[9] = (undefined *)0x0;
  ppuVar9[8] = (undefined *)0x0;
  ppuVar9[0xb] = (undefined *)0x0;
  ppuVar9[10] = (undefined *)0x0;
  ppuVar9[0xd] = (undefined *)0x0;
  ppuVar9[0xc] = (undefined *)0x0;
  ppuVar9[1] = (undefined *)0x0;
  *ppuVar9 = (undefined *)0x0;
  local_90 = ppuVar9;
                    /* try { // try from 003282b8 to 003282bf has its CatchHandler @ 003285a8 */
  puVar10 = (undefined8 *)operator_new(0x20);
  puVar10[2] = 0;
  *puVar10 = &PTR____shared_weak_count_00387600;
  puVar10[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar10[3] = ppuVar9;
  in_x8[1] = puVar10;
  if (((*puVar3 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar5 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00328484 to 00328487 has its CatchHandler @ 003284f0 */
    uVar11 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar11;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 003282e8 to 003282fb has its CatchHandler @ 003285cc */
  puVar2 = PTR_hybridDataField_00396030;
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00387978;
                    /* try { // try from 00328330 to 00328337 has its CatchHandler @ 00328568 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar7 = 4;
    pppuVar13 = &local_90;
LAB_00328358:
    (*(code *)(*pppuVar13)[lVar7])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar7 = 5;
    pppuVar13 = local_70;
    goto LAB_00328358;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar5 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 003284cc to 003284cf has its CatchHandler @ 003284ec */
    uVar11 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar11;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0032836c to 0032837b has its CatchHandler @ 003285cc */
  uVar12 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar11 = *in_x8;
  lVar7 = in_x8[1];
  if (lVar7 != 0) {
    FUN_00259a00(1,lVar7 + 8);
  }
  local_90 = &PTR_FUN_003879f8;
                    /* try { // try from 003283b0 to 003283b7 has its CatchHandler @ 00328528 */
  uStack_88 = uVar11;
  local_80 = lVar7;
  local_70 = &local_90;
  FUN_0031e5cc(uVar12,&local_90);
  if (local_70 == &local_90) {
    lVar7 = 4;
    pppuVar13 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_003283e4;
    lVar7 = 5;
    pppuVar13 = local_70;
  }
  (*(code *)(*pppuVar13)[lVar7])();
LAB_003283e4:
  lVar7 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 003283ec to 003283ff has its CatchHandler @ 003285c0 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,lVar7);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328614  FUN_00328614 =====

void FUN_00328614(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00328824(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328694  FUN_00328694 =====

void FUN_00328694(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00328824(this);
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


// ===== 0032871c  FUN_0032871c =====

void FUN_0032871c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00328824(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032879c  FUN_0032879c =====

void FUN_0032879c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00328824(this);
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


// ===== 00328824  FUN_00328824 =====

void FUN_00328824(long *param_1)

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
  
  puVar2 = PTR_vtable_00396168;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396168 + 0xe8);
  param_1[0xe] = (long)(puVar2 + 0x170);
  *param_1 = (long)(puVar2 + 0x60);
  local_70 = &PTR_FUN_00387a78;
  plStack_68 = param_1;
                    /* try { // try from 0032887c to 00328883 has its CatchHandler @ 003288f8 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_003288b0;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_003288b0:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 003288b8 to 003288cb has its CatchHandler @ 003288fc */
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


// ===== 00328900  FUN_00328900 =====

void FUN_00328900(void *param_1)

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


// ===== 00328938  FUN_00328938 =====

void FUN_00328938(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00387a78;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328994  FUN_00328994 =====

void FUN_00328994(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00387a78;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003289dc  FUN_003289dc =====

void FUN_003289dc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328a14  FUN_00328a14 =====

void FUN_00328a14(void *param_1)

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


// ===== 00328a4c  FUN_00328a4c =====

void FUN_00328a4c(long param_1)

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
                    /* try { // try from 00328a78 to 00328a8b has its CatchHandler @ 00328ab8 */
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


// ===== 00328abc  FUN_00328abc =====

void FUN_00328abc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003961e0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00328b0c  FUN_00328b0c =====

undefined * FUN_00328b0c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003961e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328b4c  FUN_00328b4c =====

void FUN_00328b4c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396210 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396210), iVar2 != 0))
  {
                    /* try { // try from 00328bbc to 00328bcf has its CatchHandler @ 00328be0 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396218);
    __cxa_guard_release(PTR_cls_00396210);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396208;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328c0c  FUN_00328c0c =====

long FUN_00328c0c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"fromBytes",PTR_kDescriptor_00396228);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328c88  FUN_00328c88 =====

/* WARNING: Removing unreachable block (ram,0x0032902c) */
/* WARNING: Removing unreachable block (ram,0x00329034) */
/* WARNING: Removing unreachable block (ram,0x00329044) */
/* WARNING: Removing unreachable block (ram,0x0032905c) */

void FUN_00328c88(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  _jmethodID *p_Var4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  _jclass *p_Var8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long local_90;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  puVar3 = PTR_isHybrid_00396198;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((*PTR_isHybrid_003961a0 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_isHybrid_003961a0), iVar6 != 0)) {
                    /* try { // try from 003290a0 to 003290b7 has its CatchHandler @ 00329234 */
    FUN_0032a7c8(&local_80);
    local_78 = local_80;
    bVar5 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *puVar3 = bVar5 & 1;
    __cxa_guard_release(PTR_isHybrid_003961a0);
  }
  plVar7 = (long *)operator_new(0x18);
  lVar9 = *param_2;
  lVar11 = param_2[1];
  *plVar7 = (long)&PTR_FUN_00389b20;
  plVar7[1] = lVar9;
  plVar7[2] = lVar11;
  if (lVar11 != 0) {
    FUN_00259a00(1,lVar11 + 8);
  }
  cVar1 = *puVar3;
  *param_1 = 0;
  if (cVar1 == '\0') {
                    /* try { // try from 00328e24 to 00328e2b has its CatchHandler @ 00329280 */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 00328e30 to 00328e4b has its CatchHandler @ 003292f4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    plVar10 = (long *)(**(code **)(*plVar10 + 200))(plVar10,local_90);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00328e54 to 00328e5f has its CatchHandler @ 00329258 */
    local_68 = plVar7;
    local_60 = plVar10;
    FUN_00319a60(&local_60,&local_68);
    plVar7 = local_68;
    local_68 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_60;
    if (local_60 != (long *)0x0) {
                    /* try { // try from 00328e80 to 00328e93 has its CatchHandler @ 003292a0 */
      plVar10 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar10 + 0xb8))(plVar10,plVar7);
    }
                    /* try { // try from 00328e9c to 00328eb7 has its CatchHandler @ 003292ec */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 200))(plVar7,local_90);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00328ebc to 00328ed7 has its CatchHandler @ 003292e4 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar11 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar11;
    if (((DAT_0039d838 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039d838), iVar6 != 0)) {
      FUN_0032a9a4(&DAT_0039d830);
      __cxa_guard_release(&DAT_0039d838);
    }
    if (((DAT_0039d848 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039d848), iVar6 != 0)) {
                    /* try { // try from 003291a0 to 003291a3 has its CatchHandler @ 003291b8 */
      DAT_0039d840 = FUN_0032aa64();
      __cxa_guard_release(&DAT_0039d848);
    }
    lVar11 = local_70;
    uVar14 = DAT_0039d840;
                    /* try { // try from 00328f08 to 00328f23 has its CatchHandler @ 003292dc */
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,lVar11);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = plVar7;
                    /* try { // try from 00328f28 to 00328f53 has its CatchHandler @ 00329310 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var4 = DAT_0039d830;
    plVar10 = (long *)facebook::jni::Environment::current();
    plVar10 = (long *)(**(code **)(*plVar10 + 200))(plVar10,plVar7);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar10;
                    /* try { // try from 00328f58 to 00328f6b has its CatchHandler @ 00329248 */
    lVar12 = _JNIEnv::NewObject(p_Var8,p_Var4,uVar14,plVar10);
    if (plVar10 != (long *)0x0) {
                    /* try { // try from 00328f74 to 00328f87 has its CatchHandler @ 0032929c */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,plVar10);
    }
                    /* try { // try from 00328f90 to 00328f93 has its CatchHandler @ 00329310 */
    facebook::jni::throwCppExceptionIf(lVar12 == 0);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 00328f98 to 00328fab has its CatchHandler @ 00329298 */
      plVar10 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar10 + 0xb8))(plVar10,plVar7);
    }
    if (lVar11 != 0) {
                    /* try { // try from 00328fb0 to 00328fc3 has its CatchHandler @ 00329294 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar11);
    }
    lVar11 = *param_1;
    if (lVar11 != 0) {
                    /* try { // try from 00328fcc to 00328fdf has its CatchHandler @ 00329290 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar11);
    }
    *param_1 = lVar12;
    if (lVar9 != 0) {
                    /* try { // try from 00328fec to 00328fff has its CatchHandler @ 0032928c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    if (local_90 != 0) {
                    /* try { // try from 0032900c to 0032901f has its CatchHandler @ 00329288 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
    }
  }
  else {
    if (((DAT_0039d818 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039d818), iVar6 != 0)) {
      FUN_0032a9a4(&DAT_0039d810);
      __cxa_guard_release(&DAT_0039d818);
    }
    if (((DAT_0039d828 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039d828), iVar6 != 0)) {
                    /* try { // try from 0032910c to 0032910f has its CatchHandler @ 0032920c */
      DAT_0039d820 = FUN_0032aae0();
      __cxa_guard_release(&DAT_0039d828);
    }
    uVar14 = DAT_0039d820;
                    /* try { // try from 00328d38 to 00328d5b has its CatchHandler @ 0032933c */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    lVar9 = _JNIEnv::NewObject(p_Var8,DAT_0039d810,uVar14);
    facebook::jni::throwCppExceptionIf(lVar9 == 0);
    *param_1 = lVar9;
                    /* try { // try from 00328d60 to 00328d7b has its CatchHandler @ 00329338 */
    plVar10 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar10 + 200))(plVar10,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar3 = PTR_holderField_003961c8;
    if (((*PTR_holderField_003961d0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_holderField_003961d0), iVar6 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00329140 to 00329147 has its CatchHandler @ 003291e0 */
      uVar14 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar3 = uVar14;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_003961d0);
    }
    uVar14 = *(undefined8 *)puVar3;
                    /* try { // try from 00328da4 to 00328dbb has its CatchHandler @ 0032930c */
    plVar10 = (long *)facebook::jni::Environment::current();
    local_68 = (long *)(**(code **)(*plVar10 + 0x2f8))(plVar10,lVar9,uVar14);
                    /* try { // try from 00328dc0 to 00328dcb has its CatchHandler @ 003292a4 */
    local_60 = plVar7;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    plVar7 = local_60;
    local_60 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_68;
    if (local_68 != (long *)0x0) {
                    /* try { // try from 00328dec to 00328dff has its CatchHandler @ 003292d8 */
      plVar10 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar10 + 0xb8))(plVar10,plVar7);
    }
    if (lVar9 != 0) {
                    /* try { // try from 00328e08 to 00328e1b has its CatchHandler @ 003292d4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032936c  FUN_0032936c =====

void FUN_0032936c(undefined8 *param_1)

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
    FUN_0032a5a4(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003293e4  FUN_003293e4 =====

void FUN_003293e4(long *param_1)

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


// ===== 00329470  FUN_00329470 =====

void FUN_00329470(long *param_1)

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


// ===== 003294fc  FUN_003294fc =====

void FUN_003294fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00329528 to 0032953b has its CatchHandler @ 00329568 */
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


// ===== 0032956c  FUN_0032956c =====

void FUN_0032956c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003879f8;
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


// ===== 00329604  FUN_00329604 =====

void FUN_00329604(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003879f8;
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


// ===== 00329690  FUN_00329690 =====

void FUN_00329690(long param_1)

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
  *puVar4 = &PTR_FUN_003879f8;
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


// ===== 00329708  FUN_00329708 =====

void FUN_00329708(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003879f8;
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


// ===== 0032976c  FUN_0032976c =====

void FUN_0032976c(long param_1)

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


// ===== 003297f8  FUN_003297f8 =====

void FUN_003297f8(void *param_1)

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


// ===== 00329878  FUN_00329878 =====

void FUN_00329878(long param_1,undefined8 *param_2)

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
                    /* try { // try from 003298b0 to 003298bb has its CatchHandler @ 00329924 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 003298c8 to 003298d3 has its CatchHandler @ 0032990c */
  FUN_003299dc(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032994c  FUN_0032994c =====

void FUN_0032994c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive26JHybridRiveFileFactorySpec9fromBytesERKNSt6__ndk110shared_ptrINS0_11ArrayBufferEEEbRKNS3_8optionalINS1_20ReferencedAssetsTypeEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSG_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032999c  FUN_0032999c =====

pointer_____offset_0x10___ * FUN_0032999c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00387a58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003299dc  FUN_003299dc =====

void FUN_003299dc(exception_ptr *param_1,exception_ptr *param_2)

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
    FUN_00264e5c(local_60,PTR_typeinfo_name_00394bb8,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00329b8c to 00329b9f has its CatchHandler @ 00329c68 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 00329ba0 to 00329bb3 has its CatchHandler @ 00329c50 */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 00329bb8 to 00329bef has its CatchHandler @ 00329c1c */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00329c9c;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 == 0xffffffff) {
LAB_00329a60:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 00329a54 to 00329a5f has its CatchHandler @ 00329c04 */
      (*(code *)(&PTR_FUN_00387650)[uVar2])(local_60,param_1);
      goto LAB_00329a60;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  for (lVar6 = *(long *)(param_1 + 0x30); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00329c00 to 00329c03 has its CatchHandler @ 00329c0c */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00329a54 with catch @ 00329c04
                        */
        FUN_0025ad9c();
      }
      goto LAB_00329c9c;
    }
                    /* try { // try from 00329a98 to 00329a9f has its CatchHandler @ 00329c08 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 0x20);
LAB_00329ac8:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x00329ae0;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_00329abc;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  plVar5 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x20) = plVar4;
joined_r0x00329af8:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x00329b60;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_00329b38;
  }
  *(long **)(param_1 + 0x38) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00329c9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00329ae0:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_00329abc:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_00329ac8;
code_r0x00329b60:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_00329b38:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x00329af8;
}


// ===== 00329ca0  FUN_00329ca0 =====

void FUN_00329ca0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00329cd8  FUN_00329cd8 =====

void FUN_00329cd8(undefined8 param_1,long param_2)

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


// ===== 00329d64  FUN_00329d64 =====

void FUN_00329d64(undefined8 param_1,exception_ptr *param_2)

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


// ===== 00329da0  FUN_00329da0 =====

void FUN_00329da0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00387978;
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


// ===== 00329e38  FUN_00329e38 =====

void FUN_00329e38(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00387978;
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


// ===== 00329ec4  FUN_00329ec4 =====

void FUN_00329ec4(long param_1)

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
  *puVar4 = &PTR_FUN_00387978;
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


// ===== 00329f3c  FUN_00329f3c =====

void FUN_00329f3c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00387978;
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


// ===== 00329fa0  FUN_00329fa0 =====

void FUN_00329fa0(long param_1)

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


// ===== 0032a02c  FUN_0032a02c =====

void FUN_0032a02c(void *param_1)

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


// ===== 0032a0ac  FUN_0032a0ac =====

/* WARNING: Removing unreachable block (ram,0x0032a144) */
/* WARNING: Removing unreachable block (ram,0x0032a154) */

void FUN_0032a0ac(long param_1,undefined8 *param_2)

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
  margelo::nitro::rive::JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec((JavaPart *)&local_30)
  ;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0xa0));
  }
  local_38 = local_48;
                    /* try { // try from 0032a100 to 0032a10b has its CatchHandler @ 0032a18c */
  local_40 = local_50;
  FUN_0032a250(uVar3,&local_40);
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


// ===== 0032a1c0  FUN_0032a1c0 =====

void FUN_0032a1c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive26JHybridRiveFileFactorySpec9fromBytesERKNSt6__ndk110shared_ptrINS0_11ArrayBufferEEEbRKNS3_8optionalINS1_20ReferencedAssetsTypeEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSG_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032a210  FUN_0032a210 =====

pointer_____offset_0x10___ * FUN_0032a210(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003879d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a250  FUN_0032a250 =====

void FUN_0032a250(undefined8 *param_1,undefined8 *param_2)

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
      goto LAB_0032a300;
    }
                    /* try { // try from 0032a2e0 to 0032a2eb has its CatchHandler @ 0032a42c */
    (*(code *)(&PTR_FUN_00387650)[uVar2])(&uStack_39,param_1);
  }
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
LAB_0032a300:
  plVar7 = (long *)param_1[3];
  plVar1 = (long *)param_1[4];
  if (plVar7 != plVar1) {
    do {
      if (*(int *)(param_1 + 2) != 1) {
LAB_0032a418:
        if (*(long *)(lVar3 + 0x28) == local_38) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0032a2e0 with catch @ 0032a42c
                        */
          FUN_0025ad9c();
        }
        goto LAB_0032a458;
      }
      plVar5 = (long *)plVar7[4];
      if (plVar5 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0032a414 to 0032a42b has its CatchHandler @ 0032a434 */
          FUN_0025cd00();
          goto LAB_0032a418;
        }
        goto LAB_0032a458;
      }
                    /* try { // try from 0032a328 to 0032a32f has its CatchHandler @ 0032a430 */
      (**(code **)(*plVar5 + 0x30))(plVar5,param_1);
      plVar7 = plVar7 + 6;
    } while (plVar7 != plVar1);
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_1[4];
    plVar7 = plVar5;
joined_r0x0032a344:
    if (plVar5 != plVar1) {
      plVar6 = (long *)plVar5[-2];
      plVar5 = plVar5 + -6;
      plVar7 = plVar1;
      if (plVar5 != plVar6) goto code_r0x0032a378;
      lVar4 = 4;
      plVar6 = plVar5;
      goto LAB_0032a354;
    }
  }
  plVar1 = (long *)param_1[6];
  plVar5 = (long *)param_1[7];
  param_1[4] = plVar7;
joined_r0x0032a394:
  if (plVar5 == plVar1) {
    param_1[7] = plVar1;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
LAB_0032a458:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar7 = (long *)plVar5[-2];
  plVar5 = plVar5 + -6;
  if (plVar5 != plVar7) goto code_r0x0032a3f8;
  lVar4 = 4;
  plVar7 = plVar5;
  goto LAB_0032a3d0;
code_r0x0032a378:
  if (plVar6 != (long *)0x0) {
    lVar4 = 5;
LAB_0032a354:
    (**(code **)(*plVar6 + lVar4 * 8))();
  }
  goto joined_r0x0032a344;
code_r0x0032a3f8:
  if (plVar7 != (long *)0x0) {
    lVar4 = 5;
LAB_0032a3d0:
    (**(code **)(*plVar7 + lVar4 * 8))();
  }
  goto joined_r0x0032a394;
}


// ===== 0032a45c  FUN_0032a45c =====

void FUN_0032a45c(__shared_weak_count *param_1)

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


// ===== 0032a4a8  FUN_0032a4a8 =====

void FUN_0032a4a8(long param_1)

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
    FUN_0032a5a4(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a51c  FUN_0032a51c =====

void FUN_0032a51c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396190) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032a56c  FUN_0032a56c =====

void FUN_0032a56c(void *param_1)

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


// ===== 0032a5a4  FUN_0032a5a4 =====

void FUN_0032a5a4(long param_1)

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
                    /* try { // try from 0032a6e8 to 0032a773 has its CatchHandler @ 0032a7c0 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,PTR_typeinfo_name_00394bb8,0);
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
    FUN_003299dc(param_1,local_68);
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
LAB_0032a5fc:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0032a5fc;
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
LAB_0032a65c:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0032a65c;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x18);
    }
    *(long **)(param_1 + 0x20) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
                    /* try { // try from 0032a6b0 to 0032a6bb has its CatchHandler @ 0032a7c4 */
    (*(code *)(&PTR_FUN_00387650)[*(uint *)(param_1 + 0x10)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032a7c8  FUN_0032a7c8 =====

void FUN_0032a7c8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003961b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003961b0), iVar2 != 0))
  {
                    /* try { // try from 0032a838 to 0032a84b has its CatchHandler @ 0032a85c */
    facebook::jni::findClassStatic(PTR_kBaseName_003961b8);
    __cxa_guard_release(PTR_cls_003961b0);
  }
  *param_1 = *(undefined8 *)PTR_cls_003961a8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a888  FUN_0032a888 =====

void FUN_0032a888(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0032a8b4 to 0032a8c7 has its CatchHandler @ 0032a8f4 */
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


// ===== 0032a8f8  FUN_0032a8f8 =====

void FUN_0032a8f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a9a4  FUN_0032a9a4 =====

void FUN_0032a9a4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003961b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003961b0), iVar2 != 0))
  {
                    /* try { // try from 0032aa14 to 0032aa27 has its CatchHandler @ 0032aa38 */
    facebook::jni::findClassStatic(PTR_kBaseName_003961b8);
    __cxa_guard_release(PTR_cls_003961b0);
  }
  *param_1 = *(undefined8 *)PTR_cls_003961a8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032aa64  FUN_0032aa64 =====

long FUN_0032aa64(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039d830,"<init>",PTR_kConstructorDescriptor_003961d8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032aae0  FUN_0032aae0 =====

long FUN_0032aae0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039d810,"<init>",PTR_kConstructorDescriptor_003961c0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ab5c  FUN_0032ab5c =====

void FUN_0032ab5c(long param_1)

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


// ===== 0032abe8  FUN_0032abe8 =====

void FUN_0032abe8(void *param_1)

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


// ===== 0032ac68  FUN_0032ac68 =====

long FUN_0032ac68(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396220);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032acec  FUN_0032acec =====

void FUN_0032acec(long *param_1)

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


// ===== 0032ad78  FUN_0032ad78 =====

void FUN_0032ad78(long *param_1)

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


// ===== 0032ae04  FUN_0032ae04 =====

void FUN_0032ae04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003878f8;
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


// ===== 0032ae9c  FUN_0032ae9c =====

void FUN_0032ae9c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003878f8;
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


// ===== 0032af28  FUN_0032af28 =====

void FUN_0032af28(long param_1)

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
  *puVar4 = &PTR_FUN_003878f8;
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


// ===== 0032afa0  FUN_0032afa0 =====

void FUN_0032afa0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003878f8;
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


// ===== 0032b004  FUN_0032b004 =====

void FUN_0032b004(long param_1)

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


// ===== 0032b090  FUN_0032b090 =====

void FUN_0032b090(void *param_1)

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


// ===== 0032b110  FUN_0032b110 =====

void FUN_0032b110(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0032b148 to 0032b153 has its CatchHandler @ 0032b1bc */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0032b160 to 0032b16b has its CatchHandler @ 0032b1a4 */
  FUN_003299dc(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032b1e4  FUN_0032b1e4 =====

void FUN_0032b1e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive26JHybridRiveFileFactorySpec12fromResourceERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbRKNS3_8optionalINS1_20ReferencedAssetsTypeEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSJ_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032b234  FUN_0032b234 =====

pointer_____offset_0x10___ * FUN_0032b234(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00387958;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032b274  FUN_0032b274 =====

void FUN_0032b274(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00387878;
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


// ===== 0032b30c  FUN_0032b30c =====

void FUN_0032b30c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00387878;
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


// ===== 0032b398  FUN_0032b398 =====

void FUN_0032b398(long param_1)

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
  *puVar4 = &PTR_FUN_00387878;
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


// ===== 0032b410  FUN_0032b410 =====

void FUN_0032b410(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00387878;
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


// ===== 0032b474  FUN_0032b474 =====

void FUN_0032b474(long param_1)

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


// ===== 0032b500  FUN_0032b500 =====

void FUN_0032b500(void *param_1)

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


// ===== 0032b580  FUN_0032b580 =====

/* WARNING: Removing unreachable block (ram,0x0032b618) */
/* WARNING: Removing unreachable block (ram,0x0032b628) */

void FUN_0032b580(long param_1,undefined8 *param_2)

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
  margelo::nitro::rive::JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec((JavaPart *)&local_30)
  ;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0xa0));
  }
  local_38 = local_48;
                    /* try { // try from 0032b5d4 to 0032b5df has its CatchHandler @ 0032b660 */
  local_40 = local_50;
  FUN_0032a250(uVar3,&local_40);
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


// ===== 0032b694  FUN_0032b694 =====

void FUN_0032b694(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive26JHybridRiveFileFactorySpec12fromResourceERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbRKNS3_8optionalINS1_20ReferencedAssetsTypeEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSJ_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032b6e4  FUN_0032b6e4 =====

pointer_____offset_0x10___ * FUN_0032b6e4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003878d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032b724  FUN_0032b724 =====

void FUN_0032b724(long *param_1)

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


// ===== 0032b7b0  FUN_0032b7b0 =====

void FUN_0032b7b0(long *param_1)

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


// ===== 0032b83c  FUN_0032b83c =====

void FUN_0032b83c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003877f8;
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


// ===== 0032b8d4  FUN_0032b8d4 =====

void FUN_0032b8d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003877f8;
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


// ===== 0032b960  FUN_0032b960 =====

void FUN_0032b960(long param_1)

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
  *puVar4 = &PTR_FUN_003877f8;
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


// ===== 0032b9d8  FUN_0032b9d8 =====

void FUN_0032b9d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003877f8;
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


// ===== 0032ba3c  FUN_0032ba3c =====

void FUN_0032ba3c(long param_1)

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


// ===== 0032bac8  FUN_0032bac8 =====

void FUN_0032bac8(void *param_1)

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


// ===== 0032bb48  FUN_0032bb48 =====

void FUN_0032bb48(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0032bb80 to 0032bb8b has its CatchHandler @ 0032bbf4 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0032bb98 to 0032bba3 has its CatchHandler @ 0032bbdc */
  FUN_003299dc(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032bc1c  FUN_0032bc1c =====

void FUN_0032bc1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive26JHybridRiveFileFactorySpec11fromFileURLERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbRKNS3_8optionalINS1_20ReferencedAssetsTypeEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSJ_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032bc6c  FUN_0032bc6c =====

pointer_____offset_0x10___ * FUN_0032bc6c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00387858;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032bcac  FUN_0032bcac =====

void FUN_0032bcac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00387778;
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


// ===== 0032bd44  FUN_0032bd44 =====

void FUN_0032bd44(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00387778;
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


// ===== 0032bdd0  FUN_0032bdd0 =====

void FUN_0032bdd0(long param_1)

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
  *puVar4 = &PTR_FUN_00387778;
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


// ===== 0032be48  FUN_0032be48 =====

void FUN_0032be48(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00387778;
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


// ===== 0032beac  FUN_0032beac =====

void FUN_0032beac(long param_1)

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


// ===== 0032bf38  FUN_0032bf38 =====

void FUN_0032bf38(void *param_1)

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


// ===== 0032bfb8  FUN_0032bfb8 =====

/* WARNING: Removing unreachable block (ram,0x0032c050) */
/* WARNING: Removing unreachable block (ram,0x0032c060) */

void FUN_0032bfb8(long param_1,undefined8 *param_2)

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
  margelo::nitro::rive::JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec((JavaPart *)&local_30)
  ;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0xa0));
  }
  local_38 = local_48;
                    /* try { // try from 0032c00c to 0032c017 has its CatchHandler @ 0032c098 */
  local_40 = local_50;
  FUN_0032a250(uVar3,&local_40);
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


// ===== 0032c0cc  FUN_0032c0cc =====

void FUN_0032c0cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive26JHybridRiveFileFactorySpec11fromFileURLERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbRKNS3_8optionalINS1_20ReferencedAssetsTypeEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSJ_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032c11c  FUN_0032c11c =====

pointer_____offset_0x10___ * FUN_0032c11c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003877d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032c15c  FUN_0032c15c =====

void FUN_0032c15c(long *param_1)

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


// ===== 0032c1e8  FUN_0032c1e8 =====

void FUN_0032c1e8(long *param_1)

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


// ===== 0032c274  FUN_0032c274 =====

void FUN_0032c274(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003876f8;
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


// ===== 0032c30c  FUN_0032c30c =====

void FUN_0032c30c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003876f8;
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


// ===== 0032c398  FUN_0032c398 =====

void FUN_0032c398(long param_1)

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
  *puVar4 = &PTR_FUN_003876f8;
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


// ===== 0032c410  FUN_0032c410 =====

void FUN_0032c410(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003876f8;
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


// ===== 0032c474  FUN_0032c474 =====

void FUN_0032c474(long param_1)

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


// ===== 0032c500  FUN_0032c500 =====

void FUN_0032c500(void *param_1)

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


// ===== 0032c580  FUN_0032c580 =====

void FUN_0032c580(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0032c5b8 to 0032c5c3 has its CatchHandler @ 0032c62c */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0032c5d0 to 0032c5db has its CatchHandler @ 0032c614 */
  FUN_003299dc(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032c654  FUN_0032c654 =====

void FUN_0032c654(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive26JHybridRiveFileFactorySpec7fromURLERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbRKNS3_8optionalINS1_20ReferencedAssetsTypeEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSJ_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032c6a4  FUN_0032c6a4 =====

pointer_____offset_0x10___ * FUN_0032c6a4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00387758;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032c6e4  FUN_0032c6e4 =====

void FUN_0032c6e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00387678;
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


// ===== 0032c77c  FUN_0032c77c =====

void FUN_0032c77c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00387678;
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


// ===== 0032c808  FUN_0032c808 =====

void FUN_0032c808(long param_1)

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
  *puVar4 = &PTR_FUN_00387678;
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


// ===== 0032c880  FUN_0032c880 =====

void FUN_0032c880(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00387678;
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


// ===== 0032c8e4  FUN_0032c8e4 =====

void FUN_0032c8e4(long param_1)

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


// ===== 0032c970  FUN_0032c970 =====

void FUN_0032c970(void *param_1)

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


// ===== 0032c9f0  FUN_0032c9f0 =====

/* WARNING: Removing unreachable block (ram,0x0032ca88) */
/* WARNING: Removing unreachable block (ram,0x0032ca98) */

void FUN_0032c9f0(long param_1,undefined8 *param_2)

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
  margelo::nitro::rive::JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec((JavaPart *)&local_30)
  ;
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0xa0));
  }
  local_38 = local_48;
                    /* try { // try from 0032ca44 to 0032ca4f has its CatchHandler @ 0032cad0 */
  local_40 = local_50;
  FUN_0032a250(uVar3,&local_40);
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


// ===== 0032cb04  FUN_0032cb04 =====

void FUN_0032cb04(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive26JHybridRiveFileFactorySpec7fromURLERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbRKNS3_8optionalINS1_20ReferencedAssetsTypeEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSJ_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032cb54  FUN_0032cb54 =====

pointer_____offset_0x10___ * FUN_0032cb54(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003876d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cb94  FUN_0032cb94 =====

void FUN_0032cb94(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00387af8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cbd8  FUN_0032cbd8 =====

void FUN_0032cbd8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00387af8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cc30  FUN_0032cc30 =====

void FUN_0032cc30(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0032cc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cc70  FUN_0032cc70 =====

void FUN_0032cc70(void *param_1)

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


// ===== 0032cca8  margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_00387020;
  local_60 = PTR_s_initHybrid_00387018;
  local_50 = PTR_call_00387028;
  pcVar10 = (char *)operator_new(0x40);
  uVar8 = s_Lcom_margelo_nitro_rive_HybridRi_001d5d16._49_8_;
  uVar7 = s_Lcom_margelo_nitro_rive_HybridRi_001d5d16._41_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridRi_001d5d16._33_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridRi_001d5d16._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridRi_001d5d16._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridRi_001d5d16._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridRi_001d5d16._1_8_;
  pcVar10[0x38] = '\0';
  *(undefined8 *)(pcVar10 + 0x28) = uVar7;
  *(undefined8 *)(pcVar10 + 0x20) = uVar6;
  *(undefined8 *)(pcVar10 + 8) = uVar3;
  *(undefined8 *)pcVar10 = uVar2;
  *(undefined8 *)(pcVar10 + 0x18) = uVar5;
  *(undefined8 *)(pcVar10 + 0x10) = uVar4;
  *(undefined8 *)(pcVar10 + 0x30) = uVar8;
                    /* try { // try from 0032cd10 to 0032cd17 has its CatchHandler @ 0032cd88 */
  facebook::jni::findClassLocal(pcVar10);
  operator_delete(pcVar10);
                    /* try { // try from 0032cd20 to 0032cd47 has its CatchHandler @ 0032cd9c */
  plVar11 = (long *)facebook::jni::Environment::current();
  iVar9 = (**(code **)(*plVar11 + 0x6b8))(plVar11,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar9 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0032cd50 to 0032cd63 has its CatchHandler @ 0032cd98 */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb8))(plVar11,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cdc4  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileFactorySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0032cdf0 to 0032cdfb has its CatchHandler @ 0032ce2c */
  FUN_00326c48(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ce78  margelo::nitro::rive::JHybridRiveFileFactorySpec::fromURL =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileFactorySpec::fromURL(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::optional<margelo::nitro::rive::ReferencedAssetsType> const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileFactorySpec::fromURL
          (JHybridRiveFileFactorySpec *this,basic_string *param_1,bool param_2,optional *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    fromURL((basic_string *)(this + *(long *)(*(long *)this + -0x30)),SUB81(param_1,0),
            (optional *)(ulong)(param_2 & 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cec0  margelo::nitro::rive::JHybridRiveFileFactorySpec::fromFileURL =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileFactorySpec::fromFileURL(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::optional<margelo::nitro::rive::ReferencedAssetsType> const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileFactorySpec::fromFileURL
          (JHybridRiveFileFactorySpec *this,basic_string *param_1,bool param_2,optional *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    fromFileURL((basic_string *)(this + *(long *)(*(long *)this + -0x38)),SUB81(param_1,0),
                (optional *)(ulong)(param_2 & 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cf08  margelo::nitro::rive::JHybridRiveFileFactorySpec::fromResource =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileFactorySpec::fromResource(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::optional<margelo::nitro::rive::ReferencedAssetsType> const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileFactorySpec::fromResource
          (JHybridRiveFileFactorySpec *this,basic_string *param_1,bool param_2,optional *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    fromResource((basic_string *)(this + *(long *)(*(long *)this + -0x40)),SUB81(param_1,0),
                 (optional *)(ulong)(param_2 & 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cf50  margelo::nitro::rive::JHybridRiveFileFactorySpec::fromBytes =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveFileFactorySpec::fromBytes(std::__ndk1::shared_ptr<margelo::nitro::ArrayBuffer>
   const&, bool, std::__ndk1::optional<margelo::nitro::rive::ReferencedAssetsType> const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileFactorySpec::fromBytes
          (JHybridRiveFileFactorySpec *this,shared_ptr *param_1,bool param_2,optional *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    fromBytes((shared_ptr *)(this + *(long *)(*(long *)this + -0x48)),SUB81(param_1,0),
              (optional *)(ulong)(param_2 & 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032cf98  margelo::nitro::rive::JHybridFallbackFontSpec::JavaPart::getJHybridFallbackFontSpec =====

/* margelo::nitro::rive::JHybridFallbackFontSpec::JavaPart::getJHybridFallbackFontSpec() */

void __thiscall
margelo::nitro::rive::JHybridFallbackFontSpec::JavaPart::getJHybridFallbackFontSpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396238,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0032d060 to 0032d06b has its CatchHandler @ 0032d0a0 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridFallbackFontSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0032d080 to 0032d097 has its CatchHandler @ 0032d098 */
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


// ===== 0032d0dc  FUN_0032d0dc =====

void FUN_0032d0dc(long *param_1)

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


// ===== 0032d168  margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0032d1c0(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032d1c0  FUN_0032d1c0 =====

void FUN_0032d1c0(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0032d1f8 to 0032d1ff has its CatchHandler @ 0032d2dc */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396230 + 0x10;
                    /* try { // try from 0032d210 to 0032d217 has its CatchHandler @ 0032d2d4 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0032d21c to 0032d237 has its CatchHandler @ 0032d2f0 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0032d240 to 0032d24b has its CatchHandler @ 0032d2a4 */
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
                    /* try { // try from 0032d26c to 0032d27f has its CatchHandler @ 0032d2ec */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032d328  FUN_0032d328 =====

void FUN_0032d328(long *param_1)

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
                    /* try { // try from 0032d364 to 0032d377 has its CatchHandler @ 0032d3b4 */
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


// ===== 0032d3b8  margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  runtime_error *this;
  bad_alloc *pbVar8;
  long *in_x1;
  long *in_x8;
  long lVar9;
  long *plVar10;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar2 = PTR_target_class_00396240;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*in_x1 == 0) {
LAB_0032d66c:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0032d678 to 0032d683 has its CatchHandler @ 0032d810 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridFallbackFontSpec::JavaPart!"
                        );
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0032d694 to 0032d6ab has its CatchHandler @ 0032d80c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0032d8bc;
  }
  if (((*PTR_target_class_00396248 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396248),
     (int)param_1 != 0)) {
                    /* try { // try from 0032d6bc to 0032d6cb has its CatchHandler @ 0032d7d0 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396250);
    *(undefined8 *)puVar2 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396248);
  }
  if (*(long *)puVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_0032d8bc;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396250);
LAB_0032d710:
                    /* try { // try from 0032d710 to 0032d71f has its CatchHandler @ 0032d7fc */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar7 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar7 = local_70;
    }
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_0032d8bc;
                    /* try { // try from 0032d744 to 0032d75f has its CatchHandler @ 0032d7e4 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar7,
                 PTR_kBaseName_00396250);
  }
  else {
                    /* try { // try from 0032d410 to 0032d423 has its CatchHandler @ 0032d850 */
    plVar4 = (long *)facebook::jni::Environment::current();
    lVar5 = (**(code **)(*plVar4 + 0xf8))(plVar4,*in_x1);
    local_68 = lVar5;
                    /* try { // try from 0032d42c to 0032d443 has its CatchHandler @ 0032d84c */
    plVar4 = (long *)facebook::jni::Environment::current();
    cVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,lVar5,*(undefined8 *)puVar2);
    if (cVar3 == '\0') goto LAB_0032d710;
    lVar9 = *in_x1;
    if (lVar9 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0032d454 to 0032d46f has its CatchHandler @ 0032d854 */
      plVar4 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar4 + 200))(plVar4,lVar9);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar8 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar8);
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0032d7b8 to 0032d7cf has its CatchHandler @ 0032d854 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar8,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0032d8bc;
      }
    }
    if (lVar5 != 0) {
                    /* try { // try from 0032d48c to 0032d49f has its CatchHandler @ 0032d848 */
      plVar4 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar4 + 0xb8))(plVar4,lVar5);
    }
    if (local_88 == 0) goto LAB_0032d66c;
                    /* try { // try from 0032d4a4 to 0032d4ab has its CatchHandler @ 0032d838 */
    plVar4 = (long *)operator_new(0x98);
    puVar2 = PTR_vtable_00395e70;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_00387bb8;
    plVar10 = plVar4 + 3;
    *plVar10 = (long)(puVar2 + 0x10);
                    /* try { // try from 0032d4dc to 0032d4f3 has its CatchHandler @ 0032d830 */
    margelo::nitro::HybridObject::HybridObject
              ((HybridObject *)(plVar4 + 5),(char *)&PTR_PTR_loadHybridMethods_00387d98);
    plVar4[3] = (long)&PTR_FUN_00387df0;
    plVar4[5] = (long)&PTR_loadHybridMethods_00387e58;
                    /* try { // try from 0032d508 to 0032d523 has its CatchHandler @ 0032d858 */
    plVar6 = (long *)facebook::jni::Environment::current();
    uVar7 = (**(code **)(*plVar6 + 200))(plVar6,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0032d528 to 0032d53b has its CatchHandler @ 0032d820 */
    local_80[0] = uVar7;
    margelo::nitro::JHybridObject::JHybridObject
              ((JHybridObject *)(plVar4 + 0x11),(basic_strong_ref *)&PTR_PTR__JHybridObject_00387da8
              );
    uVar7 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0032d544 to 0032d557 has its CatchHandler @ 0032d844 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,uVar7);
    }
    *plVar10 = (long)&PTR_FUN_00387c38;
    plVar4[5] = (long)&PTR_loadHybridMethods_00387ca0;
    plVar4[0x11] = (long)&PTR_FUN_00387d28;
                    /* try { // try from 0032d574 to 0032d58f has its CatchHandler @ 0032d860 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar5 = (**(code **)(*plVar6 + 0xa8))(plVar6,local_88);
    param_1 = (basic_strong_ref *)facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
      lVar5 = (long)plVar10 + *(long *)(plVar4[3] + -0x20);
      if ((lVar5 != -0x20) &&
         ((*(long *)(lVar5 + 0x28) == 0 || (*(long *)(*(long *)(lVar5 + 0x28) + 8) == -1)))) {
        FUN_00259a00(1,plVar4 + 1);
        FUN_00259a00(1,plVar4 + 2);
        lVar9 = *(long *)(lVar5 + 0x28);
        *(long *)(lVar5 + 0x20) = lVar5;
        *(long **)(lVar5 + 0x28) = plVar4;
        if (lVar9 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        param_1 = (basic_strong_ref *)FUN_00255510(0xffffffffffffffff,plVar4 + 1);
        if (param_1 == (basic_strong_ref *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          param_1 = (basic_strong_ref *)std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar10 + *(long *)(plVar4[3] + -0x40);
      in_x8[1] = (long)plVar4;
      if (local_88 != 0) {
                    /* try { // try from 0032d628 to 0032d63b has its CatchHandler @ 0032d840 */
        plVar4 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar4 + 0xb8))(plVar4,local_88);
      }
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_0032d8bc;
    }
  }
  pbVar8 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0032d780 to 0032d797 has its CatchHandler @ 0032d860 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar8,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0032d8bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032d8c0  FUN_0032d8c0 =====

void FUN_0032d8c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0032d8ec to 0032d8ff has its CatchHandler @ 0032d92c */
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


// ===== 0032d930  FUN_0032d930 =====

void FUN_0032d930(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0032dc30();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032d9a4  FUN_0032d9a4 =====

void FUN_0032d9a4(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0032dc30();
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


// ===== 0032da20  FUN_0032da20 =====

void FUN_0032da20(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0032dc30(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032daa0  FUN_0032daa0 =====

void FUN_0032daa0(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0032dc30(this);
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


// ===== 0032db28  FUN_0032db28 =====

void FUN_0032db28(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0032dc30(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032dba8  FUN_0032dba8 =====

void FUN_0032dba8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0032dc30(this);
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


// ===== 0032dc30  FUN_0032dc30 =====

void FUN_0032dc30(undefined8 *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long lVar4;
  undefined **local_70;
  undefined8 *puStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = &PTR_loadHybridMethods_00387ca0;
  param_1[0xe] = &PTR_FUN_00387d28;
  *param_1 = &PTR_FUN_00387c38;
  local_70 = &PTR_FUN_00388188;
  puStack_68 = param_1;
                    /* try { // try from 0032dc84 to 0032dc8b has its CatchHandler @ 0032dd00 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0032dcb8;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_0032dcb8:
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 0032dcc0 to 0032dcd3 has its CatchHandler @ 0032dd04 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032dd08  FUN_0032dd08 =====

void FUN_0032dd08(void *param_1)

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


// ===== 0032dd40  FUN_0032dd40 =====

void FUN_0032dd40(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00388188;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032dd9c  FUN_0032dd9c =====

void FUN_0032dd9c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00388188;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032dde4  FUN_0032dde4 =====

void FUN_0032dde4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032de1c  FUN_0032de1c =====

void FUN_0032de1c(void *param_1)

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


// ===== 0032de54  FUN_0032de54 =====

void FUN_0032de54(long param_1)

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
                    /* try { // try from 0032de80 to 0032de93 has its CatchHandler @ 0032dec0 */
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


// ===== 0032dec4  FUN_0032dec4 =====

void FUN_0032dec4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396258) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032df14  FUN_0032df14 =====

undefined * FUN_0032df14(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396260;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032df54  FUN_0032df54 =====

void FUN_0032df54(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00387bb8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032df98  FUN_0032df98 =====

void FUN_0032df98(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00387bb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032dff0  FUN_0032dff0 =====

void FUN_0032dff0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0032e028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032e030  FUN_0032e030 =====

void FUN_0032e030(void *param_1)

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


// ===== 0032e068  margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_00387b40;
  local_60 = PTR_s_initHybrid_00387b38;
  local_50 = PTR_call_00387b48;
  pcVar10 = (char *)operator_new(0x40);
  uVar8 = s_Lcom_margelo_nitro_rive_HybridFa_001d537e._33_8_;
  uVar7 = s_Lcom_margelo_nitro_rive_HybridFa_001d537e._25_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridFa_001d537e._17_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridFa_001d537e._9_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridFa_001d537e._1_8_;
  uVar2 = CONCAT35(s_Lcom_margelo_nitro_rive_HybridFa_001d537e._46_3_,
                   s_Lcom_margelo_nitro_rive_HybridFa_001d537e._41_5_);
  uVar3 = CONCAT53(s_Lcom_margelo_nitro_rive_HybridFa_001d537e._49_5_,
                   s_Lcom_margelo_nitro_rive_HybridFa_001d537e._46_3_);
  pcVar10[0x35] = '\0';
  *(undefined8 *)(pcVar10 + 0x28) = uVar2;
  *(undefined8 *)(pcVar10 + 0x20) = uVar8;
  *(undefined8 *)(pcVar10 + 8) = uVar5;
  *(undefined8 *)pcVar10 = uVar4;
  *(undefined8 *)(pcVar10 + 0x18) = uVar7;
  *(undefined8 *)(pcVar10 + 0x10) = uVar6;
  *(undefined8 *)(pcVar10 + 0x2d) = uVar3;
                    /* try { // try from 0032e0d0 to 0032e0d7 has its CatchHandler @ 0032e148 */
  facebook::jni::findClassLocal(pcVar10);
  operator_delete(pcVar10);
                    /* try { // try from 0032e0e0 to 0032e107 has its CatchHandler @ 0032e15c */
  plVar11 = (long *)facebook::jni::Environment::current();
  iVar9 = (**(code **)(*plVar11 + 0x6b8))(plVar11,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar9 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0032e110 to 0032e123 has its CatchHandler @ 0032e158 */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb8))(plVar11,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032e184  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridFallbackFontSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0032e1b0 to 0032e1bb has its CatchHandler @ 0032e1ec */
  FUN_0032d1c0(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032e238  margelo::nitro::rive::JHybridRiveFontConfigSpec::JavaPart::getJHybridRiveFontConfigSpec =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::JavaPart::getJHybridRiveFontConfigSpec() */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::JavaPart::getJHybridRiveFontConfigSpec
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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396280,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0032e300 to 0032e30b has its CatchHandler @ 0032e340 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridRiveFontConfigSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0032e320 to 0032e337 has its CatchHandler @ 0032e338 */
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


// ===== 0032e37c  FUN_0032e37c =====

void FUN_0032e37c(long *param_1)

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


// ===== 0032e408  margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0032e460(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032e460  FUN_0032e460 =====

void FUN_0032e460(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0032e498 to 0032e49f has its CatchHandler @ 0032e57c */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396288 + 0x10;
                    /* try { // try from 0032e4b0 to 0032e4b7 has its CatchHandler @ 0032e574 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0032e4bc to 0032e4d7 has its CatchHandler @ 0032e590 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0032e4e0 to 0032e4eb has its CatchHandler @ 0032e544 */
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
                    /* try { // try from 0032e50c to 0032e51f has its CatchHandler @ 0032e58c */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032e5c8  FUN_0032e5c8 =====

void FUN_0032e5c8(long *param_1)

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
                    /* try { // try from 0032e604 to 0032e617 has its CatchHandler @ 0032e654 */
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


// ===== 0032e658  margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridRiveFontConfigSpec::CxxPart::createHybridObject
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
  
  puVar1 = PTR_target_class_003962b8;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_0032e914:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0032e920 to 0032e92b has its CatchHandler @ 0032eab8 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridRiveFontConfigSpec::JavaPart!"
                        );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0032e93c to 0032e953 has its CatchHandler @ 0032eab4 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0032eb5c;
  }
  if (((*PTR_target_class_003962c0 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_003962c0),
     (int)param_1 != 0)) {
                    /* try { // try from 0032e964 to 0032e973 has its CatchHandler @ 0032ea78 */
    facebook::jni::findClassStatic(PTR_kBaseName_003962c8);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_003962c0);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0032eb5c;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_003962c8);
LAB_0032e9b8:
                    /* try { // try from 0032e9b8 to 0032e9c7 has its CatchHandler @ 0032eaa4 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0032eb5c;
                    /* try { // try from 0032e9ec to 0032ea07 has its CatchHandler @ 0032ea8c */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_003962c8);
  }
  else {
                    /* try { // try from 0032e6b0 to 0032e6c3 has its CatchHandler @ 0032eaf8 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0032e6cc to 0032e6e3 has its CatchHandler @ 0032eaf4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0032e9b8;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0032e6f4 to 0032e70f has its CatchHandler @ 0032eafc */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0032ea60 to 0032ea77 has its CatchHandler @ 0032eafc */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0032eb5c;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 0032e72c to 0032e73f has its CatchHandler @ 0032eaf0 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_0032e914;
                    /* try { // try from 0032e744 to 0032e74b has its CatchHandler @ 0032eae0 */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_00388cb8;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00396270;
                    /* try { // try from 0032e77c to 0032e797 has its CatchHandler @ 0032ead8 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396270 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00396278 + 0x70;
    plVar5[5] = (long)(PTR_construction_vtable_00396278 + 0x118);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0032e7b0 to 0032e7cb has its CatchHandler @ 0032eb00 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0032e7d0 to 0032e7df has its CatchHandler @ 0032eac8 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0032e7e8 to 0032e7fb has its CatchHandler @ 0032eaec */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00396268 + 0x80;
    puVar2 = PTR_vtable_00396268 + 0x1b0;
    plVar5[5] = (long)(PTR_vtable_00396268 + 0x128);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 0032e81c to 0032e837 has its CatchHandler @ 0032eb08 */
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
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x80);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 0032e8d0 to 0032e8e3 has its CatchHandler @ 0032eae8 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0032eb5c;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0032ea28 to 0032ea3f has its CatchHandler @ 0032eb08 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0032eb5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0032eb60  FUN_0032eb60 =====

void FUN_0032eb60(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00330238();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ebd4  FUN_0032ebd4 =====

void FUN_0032ebd4(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00330238();
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


