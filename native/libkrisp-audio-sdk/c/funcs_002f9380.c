// ===== 002f9380  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_0075ec90);
  return;
}


// ===== 002f9390  FUN_002f9390 =====

void FUN_002f9390(void)

{
  return;
}


// ===== 002f9398  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0075552c();
  return;
}


// ===== 002f93a0  FUN_002f93a0 =====

void FUN_002f93a0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002f93ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 002f93b4  FUN_002f93b4 =====

void FUN_002f93b4(undefined8 param_1)

{
  __cxa_atexit(FUN_002f93a0,param_1,&PTR_LOOP_0075ec90);
  return;
}


// ===== 002f93d0  FUN_002f93d0 =====

void FUN_002f93d0(void)

{
  __register_atfork();
  return;
}


// ===== 002f93e0  Krisp::AudioSdk::getLogger =====

/* Krisp::AudioSdk::getLogger() */

void __thiscall Krisp::AudioSdk::getLogger(AudioSdk *this)

{
  long lVar1;
  long lVar2;
  undefined8 *in_x8;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long lStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_007aabb0 & 1) == 0) && (this = (AudioSdk *)FUN_00739c1c(&DAT_007aabb0), (int)this != 0))
  {
    local_58 = 0;
    local_5c = 6;
                    /* try { // try from 002f9480 to 002f948f has its CatchHandler @ 002f94d4 */
    FUN_002f9504(&local_50,&local_58,&local_5c);
    DAT_007aabc8 = lStack_48;
    DAT_007aabc0 = local_50;
    local_50 = 0;
    lStack_48 = 0;
    FUN_002f9624(&local_50);
    __cxa_atexit(FUN_002f9674,&DAT_007aabc0,&PTR_LOOP_0075ec90);
    this = (AudioSdk *)FUN_00739d60(&DAT_007aabb0);
  }
  lVar2 = DAT_007aabc8;
  *in_x8 = DAT_007aabc0;
  in_x8[1] = lVar2;
  if (lVar2 != 0) {
    this = (AudioSdk *)FUN_00755c20(1,lVar2 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


// ===== 002f9504  FUN_002f9504 =====

void FUN_002f9504(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  plVar5 = local_80;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FUN_00759c3c(0x90);
  puVar3 = PTR_DAT_007a0f18;
  uVar1 = *param_3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  local_60 = (long *)0x0;
  *plVar4 = (long)(puVar3 + 0x10);
                    /* try { // try from 002f955c to 002f956b has its CatchHandler @ 002f95c4 */
  FUN_0030b988(plVar4 + 4,local_80,uVar1);
  if (local_60 == local_80) {
    lVar6 = 0x20;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_002f9598;
    lVar6 = 0x28;
    plVar5 = local_60;
  }
  (**(code **)(*plVar5 + lVar6))();
LAB_002f9598:
  *param_1 = (long)(plVar4 + 4);
  param_1[1] = (long)plVar4;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f9624  FUN_002f9624 =====

void FUN_002f9624(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002f9674  FUN_002f9674 =====

void FUN_002f9674(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002f96c4  FUN_002f96c4 =====

void FUN_002f96c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075eca8;
  FUN_00712454();
  return;
}


// ===== 002f96d8  FUN_002f96d8 =====

void FUN_002f96d8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a0f18 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002f970c  FUN_002f970c =====

void FUN_002f970c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002f9714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}


// ===== 002f9718  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002f971c  Krisp::AudioSdk::KmsAdapter::getInstance =====

/* Krisp::AudioSdk::KmsAdapter::getInstance() */

KmsAdapter * __thiscall Krisp::AudioSdk::KmsAdapter::getInstance(KmsAdapter *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  
  if (((DAT_007aabd0 & 1) == 0) &&
     (this = (KmsAdapter *)FUN_00739c1c(&DAT_007aabd0), (int)this != 0)) {
                    /* try { // try from 002f977c to 002f97a7 has its CatchHandler @ 002f97cc */
    puVar2 = (undefined8 *)FUN_00759c3c(0x18);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR__KmsAdapter_0075ecf8;
    FUN_002f97e4(&DAT_007aabd8);
    __cxa_atexit(FUN_002f9848,&DAT_007aabd8,&PTR_LOOP_0075ec90);
    this = (KmsAdapter *)FUN_00739d60(&DAT_007aabd0);
  }
  lVar1 = DAT_007aabe0;
  *in_x8 = DAT_007aabd8;
  in_x8[1] = lVar1;
  if (lVar1 != 0) {
    this = (KmsAdapter *)FUN_00755c20(1,lVar1 + 8);
  }
  return this;
}


// ===== 002f97e4  FUN_002f97e4 =====

void FUN_002f97e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
                    /* try { // try from 002f97fc to 002f9803 has its CatchHandler @ 002f9828 */
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  *puVar1 = &PTR_FUN_0075ed68;
  puVar1[1] = 0;
  return;
}


// ===== 002f9848  FUN_002f9848 =====

void FUN_002f9848(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002f9898  Krisp::AudioSdk::KmsAdapter::init =====

/* Krisp::AudioSdk::KmsAdapter::init(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

void __thiscall Krisp::AudioSdk::KmsAdapter::init(KmsAdapter *this,basic_string *param_1)

{
  basic_string *pbVar1;
  basic_string *__s;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  size_t sVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  void *__dest;
  ulong local_a0;
  size_t local_98;
  void *local_90;
  undefined8 local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 8) != 0) {
    uVar9 = FUN_00753a74(0x10);
                    /* try { // try from 002f9a70 to 002f9a7b has its CatchHandler @ 002f9ad0 */
    FUN_00712630(uVar9,"KmsAdapter::globalInit: SDK already initialized");
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar9,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
    }
    goto LAB_002f9b20;
  }
  bVar5 = ((byte)*param_1 & 1) != 0;
  uVar2 = (ulong)((byte)*param_1 >> 1);
  if (bVar5) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  pbVar1 = param_1 + 4;
  if (bVar5) {
    pbVar1 = *(basic_string **)(param_1 + 0x10);
  }
  __s = (basic_string *)&DAT_001b7310;
  if (uVar2 != 0) {
    __s = pbVar1;
  }
  sVar6 = wcslen((wchar_t *)__s);
  if (0x3ffffffffffffff7 < sVar6) {
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_002f9b20;
    FUN_002f9e4c(&local_a0);
LAB_002f9abc:
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    goto LAB_002f9b20;
  }
  if (sVar6 < 5) {
    __dest = (void *)((ulong)&local_a0 | 4);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_002f9968;
  }
  else {
    uVar2 = (sVar6 & 0x3ffffffffffffffe) + 2;
    if ((sVar6 | 1) != 5) {
      uVar2 = sVar6 | 1;
    }
    if (0x3ffffffffffffffe < uVar2) goto LAB_002f9abc;
    __dest = (void *)FUN_00759c3c((uVar2 + 1) * 4);
    local_a0 = uVar2 + 1 | 1;
    local_98 = sVar6;
    local_90 = __dest;
LAB_002f9968:
    memmove(__dest,__s,sVar6 << 2);
  }
  *(undefined4 *)((long)__dest + sVar6 * 4) = 0;
  local_60 = (long *)0x0;
  local_88 = DAT_001b70d0;
                    /* try { // try from 002f998c to 002f9993 has its CatchHandler @ 002f9afc */
  plVar7 = (long *)FUN_00759c3c(0xe0);
  puVar4 = PTR_DAT_007a0f30;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)(puVar4 + 0x10);
                    /* try { // try from 002f99b0 to 002f99b7 has its CatchHandler @ 002f9ae4 */
  FUN_0030d088(plVar7 + 4);
  plVar10 = *(long **)(this + 0x10);
  *(long **)(this + 8) = plVar7 + 4;
  *(long **)(this + 0x10) = plVar7;
  if ((plVar10 != (long *)0x0) && (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar8 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
                    /* try { // try from 002f99f0 to 002f99f7 has its CatchHandler @ 002f9ae0 */
  FUN_0030d1c0(*(undefined8 *)(this + 8),&local_a0);
  plVar7 = local_80;
  if (local_60 == plVar7) {
    lVar8 = 0x20;
LAB_002f9a20:
    (**(code **)(*plVar7 + lVar8))();
  }
  else if (local_60 != (long *)0x0) {
    lVar8 = 0x28;
    plVar7 = local_60;
    goto LAB_002f9a20;
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_002f9b20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f9b24  FUN_002f9b24 =====

void FUN_002f9b24(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  pbVar1 = *(byte **)(param_1 + 0x40);
  pbVar2 = param_1 + 0x20;
  if (pbVar1 == pbVar2) {
    lVar3 = 0x20;
  }
  else {
    if (pbVar1 == (byte *)0x0) goto LAB_002f9b64;
    lVar3 = 0x28;
    pbVar2 = pbVar1;
  }
  (**(code **)(*(long *)pbVar2 + lVar3))();
LAB_002f9b64:
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 002f9b88  Krisp::AudioSdk::KmsAdapter::destroy =====

/* Krisp::AudioSdk::KmsAdapter::destroy() */

void __thiscall Krisp::AudioSdk::KmsAdapter::destroy(KmsAdapter *this)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (*(long *)(this + 8) == 0) {
    uVar2 = FUN_00753a74(0x10);
                    /* try { // try from 002f9bf8 to 002f9c03 has its CatchHandler @ 002f9c1c */
    FUN_00712630(uVar2,"KmsAdapter::globalDestroy: SDK not initialized");
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar2,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
  FUN_0030d990();
  plVar3 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 002f9c30  FUN_002f9c30 =====

void FUN_002f9c30(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 0x10);
  }
  return;
}


// ===== 002f9c58  Krisp::AudioSdk::KmsAdapter::isSupportedSampleRate =====

/* Krisp::AudioSdk::KmsAdapter::isSupportedSampleRate(Krisp::AudioSdk::SamplingRate) */

undefined8 __thiscall
Krisp::AudioSdk::KmsAdapter::isSupportedSampleRate(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_2 < 0xac44) {
    if (param_2 < 24000) {
      if ((param_2 == 8000) || (param_2 == 16000)) {
        return uVar1;
      }
    }
    else {
      if (param_2 == 24000) {
        return uVar1;
      }
      if (param_2 == 32000) {
        return uVar1;
      }
    }
  }
  else if (param_2 < 0x15888) {
    if (param_2 == 0xac44) {
      return uVar1;
    }
    if (param_2 == 48000) {
      return uVar1;
    }
  }
  else {
    if (param_2 == 0x15888) {
      return uVar1;
    }
    if (param_2 == 96000) {
      return uVar1;
    }
  }
  return 0;
}


// ===== 002f9d00  Krisp::AudioSdk::KmsAdapter::isSupportedFrameDuration =====

/* Krisp::AudioSdk::KmsAdapter::isSupportedFrameDuration(Krisp::AudioSdk::FrameDuration) */

uint __thiscall
Krisp::AudioSdk::KmsAdapter::isSupportedFrameDuration(undefined8 param_1,uint param_2)

{
  return (uint)(param_2 < 0x21) & (uint)(0x140108400 >> ((ulong)param_2 & 0x3f));
}


// ===== 002f9d20  Krisp::AudioSdk::KmsAdapter::~KmsAdapter =====

/* Krisp::AudioSdk::KmsAdapter::~KmsAdapter() */

void __thiscall Krisp::AudioSdk::KmsAdapter::~KmsAdapter(KmsAdapter *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  *(undefined ***)this = &PTR__KmsAdapter_0075ecf8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002f9d80  Krisp::AudioSdk::KmsAdapter::~KmsAdapter =====

/* Krisp::AudioSdk::KmsAdapter::~KmsAdapter() */

void __thiscall Krisp::AudioSdk::KmsAdapter::~KmsAdapter(KmsAdapter *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  *(undefined **)this = PTR_DAT_007a0f20 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(this);
    return;
  }
  free(this);
  return;
}


// ===== 002f9df0  FUN_002f9df0 =====

void FUN_002f9df0(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002f9e14  FUN_002f9e14 =====

void FUN_002f9e14(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002f9e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 002f9e2c  FUN_002f9e2c =====

long FUN_002f9e2c(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5Krisp8A_007a0f48) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002f9e48  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002f9e4c  FUN_002f9e4c =====

void FUN_002f9e4c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("basic_string");
}


// ===== 002f9e60  FUN_002f9e60 =====

void FUN_002f9e60(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 002f9e7c to 002f9e83 has its CatchHandler @ 002f9e9c */
  FUN_002f9eb0(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0f50,PTR_FUN_007a0f58);
}


// ===== 002f9eb0  FUN_002f9eb0 =====

void FUN_002f9eb0(undefined8 *param_1)

{
  FUN_00712630();
  *param_1 = &PTR_FUN_0079de18;
  return;
}


// ===== 002f9ee0  FUN_002f9ee0 =====

void FUN_002f9ee0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(8);
  FUN_0073a1e0();
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0f68,PTR_FUN_007a0f70);
}


// ===== 002f9f14  FUN_002f9f14 =====

void FUN_002f9f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075edb8;
  FUN_00712454();
  return;
}


// ===== 002f9f28  FUN_002f9f28 =====

void FUN_002f9f28(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a0f30 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002f9f5c  FUN_002f9f5c =====

void FUN_002f9f5c(long param_1)

{
  FUN_0030d0b8(param_1 + 0x20);
  return;
}


// ===== 002f9f64  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002f9f68  Krisp::AudioSdk::Nc<float>::create =====

/* Krisp::AudioSdk::Nc<float>::create(Krisp::AudioSdk::NcSessionConfig const&) */

void __thiscall Krisp::AudioSdk::Nc<float>::create(Nc<float> *this,NcSessionConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  KmsAdapter *pKVar7;
  NcSession<float> *pNVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *in_x8;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  NcSession<float> *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)FUN_00759c3c(0x30);
  puVar4 = PTR_DAT_007a0f78;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  puVar4 = PTR_DAT_007a0f80;
  plVar6[4] = 0;
  plVar6[5] = 0;
  in_x8[1] = (long)plVar6;
  pKVar7 = (KmsAdapter *)(plVar6 + 3);
  *(undefined **)pKVar7 = puVar4 + 0x10;
  *in_x8 = (long)pKVar7;
                    /* try { // try from 002f9fd0 to 002f9fd7 has its CatchHandler @ 002fa610 */
  KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 002f9fe8 to 002f9feb has its CatchHandler @ 002fa600 */
  pKVar7 = (KmsAdapter *)(**(code **)(*local_68 + 0x28))(local_68,*(undefined4 *)this);
  if (((ulong)pKVar7 & 1) == 0) {
    uVar13 = 1;
  }
  else {
                    /* try { // try from 002f9ff0 to 002f9ff7 has its CatchHandler @ 002fa588 */
    KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 002fa008 to 002fa00b has its CatchHandler @ 002fa578 */
    pKVar7 = (KmsAdapter *)(**(code **)(*local_78 + 0x28))(local_78,*(undefined4 *)(this + 8));
    if (((ulong)pKVar7 & 1) == 0) {
      uVar13 = 1;
    }
    else {
                    /* try { // try from 002fa010 to 002fa017 has its CatchHandler @ 002fa53c */
      KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 002fa028 to 002fa02b has its CatchHandler @ 002fa52c */
      pKVar7 = (KmsAdapter *)(**(code **)(*local_88 + 0x30))(local_88,*(undefined4 *)(this + 4));
      plVar6 = local_80;
      uVar13 = (uint)pKVar7 ^ 1;
      if ((local_80 != (long *)0x0) &&
         (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_80 + 1),
         pKVar7 == (KmsAdapter *)0x0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
      }
    }
    plVar6 = local_70;
    if ((local_70 != (long *)0x0) &&
       (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_70 + 1),
       pKVar7 == (KmsAdapter *)0x0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
    }
  }
  plVar6 = local_60;
  if ((local_60 != (long *)0x0) &&
     (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_60 + 1),
     pKVar7 == (KmsAdapter *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
  }
  if ((uVar13 & 1) == 0) {
    if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 002fa0dc to 002fa0e3 has its CatchHandler @ 002fa5fc */
      KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 002fa0f0 to 002fa0f7 has its CatchHandler @ 002fa5ec */
      (**(code **)(*local_a0 + 0x20))(&local_88);
                    /* try { // try from 002fa0f8 to 002fa0ff has its CatchHandler @ 002fa5d8 */
      plVar6 = (long *)FUN_00759c3c(0x30);
      puVar4 = PTR_DAT_007a0f88;
      plVar6[2] = 0;
      puVar5 = PTR_DAT_007a0f90;
      *plVar6 = (long)(puVar4 + 0x10);
      plVar6[1] = 0;
      plVar14 = plVar6 + 3;
      *plVar14 = (long)(puVar5 + 0x10);
      plVar6[4] = (long)local_88;
      plVar6[5] = (long)local_80;
      if (local_80 != (long *)0x0) {
        FUN_00755c20(1,local_80 + 2);
      }
      local_78 = plVar14;
      local_70 = plVar6;
                    /* try { // try from 002fa148 to 002fa14f has its CatchHandler @ 002fa5c8 */
      pNVar8 = (NcSession<float> *)FUN_00759c3c(0x70);
      local_78 = (long *)0x0;
      local_70 = (long *)0x0;
                    /* try { // try from 002fa15c to 002fa163 has its CatchHandler @ 002fa5b0 */
      local_68 = plVar14;
      local_60 = plVar6;
      NcSession<float>::NcSession(pNVar8,(shared_ptr *)&local_68);
      plVar6 = local_60;
      local_90 = pNVar8;
      if (local_60 == (long *)0x0) {
        plVar6 = (long *)(*in_x8 + 8);
LAB_002fa1c8:
                    /* try { // try from 002fa1c8 to 002fa1cf has its CatchHandler @ 002fa5a0 */
        pNVar8 = local_90;
        plVar10 = (long *)FUN_00759c3c(0x20);
        puVar4 = PTR_DAT_007a0f98;
        plVar10[2] = 0;
        plVar10[3] = (long)pNVar8;
        *plVar10 = (long)(puVar4 + 0x10);
        plVar10[1] = 0;
        plVar14 = (long *)plVar6[1];
        *plVar6 = (long)pNVar8;
        plVar6[1] = (long)plVar10;
      }
      else {
        lVar9 = FUN_00755c50(0xffffffffffffffff,local_60 + 1);
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
          lVar9 = *in_x8;
        }
        else {
          lVar9 = *in_x8;
        }
        plVar6 = (long *)(lVar9 + 8);
        if (local_90 != (NcSession<float> *)0x0) goto LAB_002fa1c8;
        plVar14 = (long *)plVar6[1];
        *plVar6 = 0;
        plVar6[1] = 0;
      }
      local_90 = (NcSession<float> *)0x0;
      if (plVar14 != (long *)0x0) {
        local_90 = (NcSession<float> *)0x0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar14 + 1);
        if (lVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FUN_0071245c(plVar14);
        }
      }
      pNVar8 = local_90;
      local_90 = (NcSession<float> *)0x0;
      if (pNVar8 != (NcSession<float> *)0x0) {
        NcSession<float>::~NcSession(pNVar8);
        free(pNVar8);
      }
      plVar6 = local_70;
      if ((local_70 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (local_80 != (long *)0x0) {
        FUN_0071245c();
      }
      if ((local_98 == (long *)0x0) ||
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_98 + 1), lVar9 != 0)) {
        lVar9 = *(long *)(this + 0x20);
        if (lVar9 != 0) goto LAB_002fa2ac;
LAB_002fa394:
                    /* try { // try from 002fa394 to 002fa39b has its CatchHandler @ 002fa560 */
        plVar6 = (long *)FUN_00759c3c(0x48);
        puVar4 = PTR_DAT_007a0fa8;
        uVar11 = *(undefined8 *)(this + 0x10);
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)(puVar4 + 0x10);
        uVar2 = *(undefined4 *)(this + 8);
        plVar14 = plVar6 + 3;
        plVar6[4] = 0;
        *plVar14 = 0;
        plVar6[6] = 0;
        plVar6[5] = 0;
        plVar6[8] = 0;
        plVar6[7] = 0;
        *(undefined4 *)plVar14 = uVar2;
                    /* try { // try from 002fa3d8 to 002fa3df has its CatchHandler @ 002fa550 */
        local_68 = plVar14;
        local_60 = plVar6;
        FUN_00714378(plVar6 + 4,uVar11);
        lVar9 = *(long *)(this + 0x10);
        uVar2 = *(undefined4 *)this;
        uVar1 = *(undefined4 *)(this + 4);
        plVar6[7] = *(long *)(lVar9 + 0x18);
        lVar12 = *in_x8;
        plVar6[8] = *(long *)(lVar9 + 0x20);
        pNVar8 = *(NcSession<float> **)(lVar12 + 8);
        local_c0 = plVar14;
        local_b8 = plVar6;
        FUN_00755c20(1,plVar6 + 1);
                    /* try { // try from 002fa414 to 002fa427 has its CatchHandler @ 002fa540 */
        NcSession<float>::initSession(pNVar8,uVar2,uVar1,&local_c0,this[0x18]);
        plVar6 = local_b8;
      }
      else {
        (**(code **)(*local_98 + 0x10))(local_98);
        FUN_0071245c(local_98);
        lVar9 = *(long *)(this + 0x20);
        if (lVar9 == 0) goto LAB_002fa394;
LAB_002fa2ac:
                    /* try { // try from 002fa2ac to 002fa2b3 has its CatchHandler @ 002fa59c */
        plVar6 = (long *)FUN_00759c3c(0x70);
        puVar4 = PTR_DAT_007a0fa0;
        uVar2 = *(undefined4 *)(this + 8);
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar14 = plVar6 + 3;
        *(undefined4 *)plVar14 = uVar2;
        *plVar6 = (long)(puVar4 + 0x10);
        plVar6[7] = 0;
        plVar6[6] = 0;
        plVar6[9] = 0;
        plVar6[8] = 0;
        plVar6[0xb] = 0;
        plVar6[10] = 0;
        plVar6[0xd] = 0;
        plVar6[0xc] = 0;
        plVar6[5] = 0;
        plVar6[4] = 0;
        *(undefined4 *)((long)plVar6 + 0x1c) = 0x3f7851ec;
        local_68 = plVar14;
        local_60 = plVar6;
                    /* try { // try from 002fa2f8 to 002fa30b has its CatchHandler @ 002fa614 */
        FUN_00714378(plVar6 + 4,lVar9);
        FUN_00714378(plVar6 + 7,*(undefined8 *)(this + 0x10));
        lVar9 = *(long *)(this + 0x20);
        uVar2 = *(undefined4 *)this;
        uVar1 = *(undefined4 *)(this + 4);
        plVar6[10] = *(long *)(lVar9 + 0x18);
        lVar12 = *(long *)(this + 0x10);
        plVar6[0xb] = *(long *)(lVar9 + 0x20);
        plVar6[0xc] = *(long *)(lVar12 + 0x18);
        lVar9 = *in_x8;
        plVar6[0xd] = *(long *)(lVar12 + 0x20);
        pNVar8 = *(NcSession<float> **)(lVar9 + 8);
        local_b0 = plVar14;
        local_a8 = plVar6;
        FUN_00755c20(1,plVar6 + 1);
                    /* try { // try from 002fa354 to 002fa367 has its CatchHandler @ 002fa58c */
        NcSession<float>::initRtSession(pNVar8,uVar2,uVar1,&local_b0,this[0x18]);
        plVar6 = local_a8;
      }
      if ((plVar6 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      plVar6 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
                    /* try { // try from 002fa490 to 002fa493 has its CatchHandler @ 002fa624 */
      NcSession<float>::startSession(*(NcSession<float> **)(*in_x8 + 8));
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_002fa648;
    }
    plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 002fa4e8 to 002fa4f3 has its CatchHandler @ 002fa564 */
    FUN_00712630(plVar6,"Nc::create: Model info is empty!");
  }
  else {
    plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 002fa4cc to 002fa4d7 has its CatchHandler @ 002fa568 */
    FUN_00712630(plVar6,"Nc::create: Unsupported sampling rates or frame duration!");
  }
  *plVar6 = (long)(PTR_DAT_007a0fb0 + 0x10);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 002fa514 to 002fa52b has its CatchHandler @ 002fa624 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar6,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
  }
LAB_002fa648:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fa64c  FUN_002fa64c =====

void FUN_002fa64c(undefined8 *param_1)

{
  NcSession<float> *this;
  
  this = (NcSession<float> *)*param_1;
  *param_1 = 0;
  if (this != (NcSession<float> *)0x0) {
    Krisp::AudioSdk::NcSession<float>::~NcSession(this);
    free(this);
    return;
  }
  return;
}


// ===== 002fa688  FUN_002fa688 =====

void FUN_002fa688(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fa6d8  FUN_002fa6d8 =====

void FUN_002fa6d8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fa728  FUN_002fa728 =====

void FUN_002fa728(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fa778  FUN_002fa778 =====

void FUN_002fa778(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fa7c8  Krisp::AudioSdk::Nc<short>::create =====

/* Krisp::AudioSdk::Nc<short>::create(Krisp::AudioSdk::NcSessionConfig const&) */

void __thiscall Krisp::AudioSdk::Nc<short>::create(Nc<short> *this,NcSessionConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  KmsAdapter *pKVar7;
  NcSession<short> *pNVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *in_x8;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  NcSession<short> *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)FUN_00759c3c(0x30);
  puVar4 = PTR_DAT_007a0fc8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  puVar4 = PTR_DAT_007a0fd0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  in_x8[1] = (long)plVar6;
  pKVar7 = (KmsAdapter *)(plVar6 + 3);
  *(undefined **)pKVar7 = puVar4 + 0x10;
  *in_x8 = (long)pKVar7;
                    /* try { // try from 002fa830 to 002fa837 has its CatchHandler @ 002fae70 */
  KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 002fa848 to 002fa84b has its CatchHandler @ 002fae60 */
  pKVar7 = (KmsAdapter *)(**(code **)(*local_68 + 0x28))(local_68,*(undefined4 *)this);
  if (((ulong)pKVar7 & 1) == 0) {
    uVar13 = 1;
  }
  else {
                    /* try { // try from 002fa850 to 002fa857 has its CatchHandler @ 002fade8 */
    KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 002fa868 to 002fa86b has its CatchHandler @ 002fadd8 */
    pKVar7 = (KmsAdapter *)(**(code **)(*local_78 + 0x28))(local_78,*(undefined4 *)(this + 8));
    if (((ulong)pKVar7 & 1) == 0) {
      uVar13 = 1;
    }
    else {
                    /* try { // try from 002fa870 to 002fa877 has its CatchHandler @ 002fad9c */
      KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 002fa888 to 002fa88b has its CatchHandler @ 002fad8c */
      pKVar7 = (KmsAdapter *)(**(code **)(*local_88 + 0x30))(local_88,*(undefined4 *)(this + 4));
      plVar6 = local_80;
      uVar13 = (uint)pKVar7 ^ 1;
      if ((local_80 != (long *)0x0) &&
         (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_80 + 1),
         pKVar7 == (KmsAdapter *)0x0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
      }
    }
    plVar6 = local_70;
    if ((local_70 != (long *)0x0) &&
       (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_70 + 1),
       pKVar7 == (KmsAdapter *)0x0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
    }
  }
  plVar6 = local_60;
  if ((local_60 != (long *)0x0) &&
     (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_60 + 1),
     pKVar7 == (KmsAdapter *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
  }
  if ((uVar13 & 1) == 0) {
    if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 002fa93c to 002fa943 has its CatchHandler @ 002fae5c */
      KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 002fa950 to 002fa957 has its CatchHandler @ 002fae4c */
      (**(code **)(*local_a0 + 0x20))(&local_88);
                    /* try { // try from 002fa958 to 002fa95f has its CatchHandler @ 002fae38 */
      plVar6 = (long *)FUN_00759c3c(0x30);
      puVar4 = PTR_DAT_007a0fd8;
      plVar6[2] = 0;
      puVar5 = PTR_DAT_007a0fe0;
      *plVar6 = (long)(puVar4 + 0x10);
      plVar6[1] = 0;
      plVar14 = plVar6 + 3;
      *plVar14 = (long)(puVar5 + 0x10);
      plVar6[4] = (long)local_88;
      plVar6[5] = (long)local_80;
      if (local_80 != (long *)0x0) {
        FUN_00755c20(1,local_80 + 2);
      }
      local_78 = plVar14;
      local_70 = plVar6;
                    /* try { // try from 002fa9a8 to 002fa9af has its CatchHandler @ 002fae28 */
      pNVar8 = (NcSession<short> *)FUN_00759c3c(0x70);
      local_78 = (long *)0x0;
      local_70 = (long *)0x0;
                    /* try { // try from 002fa9bc to 002fa9c3 has its CatchHandler @ 002fae10 */
      local_68 = plVar14;
      local_60 = plVar6;
      NcSession<short>::NcSession(pNVar8,(shared_ptr *)&local_68);
      plVar6 = local_60;
      local_90 = pNVar8;
      if (local_60 == (long *)0x0) {
        plVar6 = (long *)(*in_x8 + 8);
LAB_002faa28:
                    /* try { // try from 002faa28 to 002faa2f has its CatchHandler @ 002fae00 */
        pNVar8 = local_90;
        plVar10 = (long *)FUN_00759c3c(0x20);
        puVar4 = PTR_DAT_007a0fe8;
        plVar10[2] = 0;
        plVar10[3] = (long)pNVar8;
        *plVar10 = (long)(puVar4 + 0x10);
        plVar10[1] = 0;
        plVar14 = (long *)plVar6[1];
        *plVar6 = (long)pNVar8;
        plVar6[1] = (long)plVar10;
      }
      else {
        lVar9 = FUN_00755c50(0xffffffffffffffff,local_60 + 1);
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
          lVar9 = *in_x8;
        }
        else {
          lVar9 = *in_x8;
        }
        plVar6 = (long *)(lVar9 + 8);
        if (local_90 != (NcSession<short> *)0x0) goto LAB_002faa28;
        plVar14 = (long *)plVar6[1];
        *plVar6 = 0;
        plVar6[1] = 0;
      }
      local_90 = (NcSession<short> *)0x0;
      if (plVar14 != (long *)0x0) {
        local_90 = (NcSession<short> *)0x0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar14 + 1);
        if (lVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FUN_0071245c(plVar14);
        }
      }
      pNVar8 = local_90;
      local_90 = (NcSession<short> *)0x0;
      if (pNVar8 != (NcSession<short> *)0x0) {
        NcSession<short>::~NcSession(pNVar8);
        free(pNVar8);
      }
      plVar6 = local_70;
      if ((local_70 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (local_80 != (long *)0x0) {
        FUN_0071245c();
      }
      if ((local_98 == (long *)0x0) ||
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_98 + 1), lVar9 != 0)) {
        lVar9 = *(long *)(this + 0x20);
        if (lVar9 != 0) goto LAB_002fab0c;
LAB_002fabf4:
                    /* try { // try from 002fabf4 to 002fabfb has its CatchHandler @ 002fadc0 */
        plVar6 = (long *)FUN_00759c3c(0x48);
        puVar4 = PTR_DAT_007a0fa8;
        uVar11 = *(undefined8 *)(this + 0x10);
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)(puVar4 + 0x10);
        uVar2 = *(undefined4 *)(this + 8);
        plVar14 = plVar6 + 3;
        plVar6[4] = 0;
        *plVar14 = 0;
        plVar6[6] = 0;
        plVar6[5] = 0;
        plVar6[8] = 0;
        plVar6[7] = 0;
        *(undefined4 *)plVar14 = uVar2;
                    /* try { // try from 002fac38 to 002fac3f has its CatchHandler @ 002fadb0 */
        local_68 = plVar14;
        local_60 = plVar6;
        FUN_00714378(plVar6 + 4,uVar11);
        lVar9 = *(long *)(this + 0x10);
        uVar2 = *(undefined4 *)this;
        uVar1 = *(undefined4 *)(this + 4);
        plVar6[7] = *(long *)(lVar9 + 0x18);
        lVar12 = *in_x8;
        plVar6[8] = *(long *)(lVar9 + 0x20);
        pNVar8 = *(NcSession<short> **)(lVar12 + 8);
        local_c0 = plVar14;
        local_b8 = plVar6;
        FUN_00755c20(1,plVar6 + 1);
                    /* try { // try from 002fac74 to 002fac87 has its CatchHandler @ 002fada0 */
        NcSession<short>::initSession(pNVar8,uVar2,uVar1,&local_c0,this[0x18]);
        plVar6 = local_b8;
      }
      else {
        (**(code **)(*local_98 + 0x10))(local_98);
        FUN_0071245c(local_98);
        lVar9 = *(long *)(this + 0x20);
        if (lVar9 == 0) goto LAB_002fabf4;
LAB_002fab0c:
                    /* try { // try from 002fab0c to 002fab13 has its CatchHandler @ 002fadfc */
        plVar6 = (long *)FUN_00759c3c(0x70);
        puVar4 = PTR_DAT_007a0fa0;
        uVar2 = *(undefined4 *)(this + 8);
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar14 = plVar6 + 3;
        *(undefined4 *)plVar14 = uVar2;
        *plVar6 = (long)(puVar4 + 0x10);
        plVar6[7] = 0;
        plVar6[6] = 0;
        plVar6[9] = 0;
        plVar6[8] = 0;
        plVar6[0xb] = 0;
        plVar6[10] = 0;
        plVar6[0xd] = 0;
        plVar6[0xc] = 0;
        plVar6[5] = 0;
        plVar6[4] = 0;
        *(undefined4 *)((long)plVar6 + 0x1c) = 0x3f7851ec;
        local_68 = plVar14;
        local_60 = plVar6;
                    /* try { // try from 002fab58 to 002fab6b has its CatchHandler @ 002fae74 */
        FUN_00714378(plVar6 + 4,lVar9);
        FUN_00714378(plVar6 + 7,*(undefined8 *)(this + 0x10));
        lVar9 = *(long *)(this + 0x20);
        uVar2 = *(undefined4 *)this;
        uVar1 = *(undefined4 *)(this + 4);
        plVar6[10] = *(long *)(lVar9 + 0x18);
        lVar12 = *(long *)(this + 0x10);
        plVar6[0xb] = *(long *)(lVar9 + 0x20);
        plVar6[0xc] = *(long *)(lVar12 + 0x18);
        lVar9 = *in_x8;
        plVar6[0xd] = *(long *)(lVar12 + 0x20);
        pNVar8 = *(NcSession<short> **)(lVar9 + 8);
        local_b0 = plVar14;
        local_a8 = plVar6;
        FUN_00755c20(1,plVar6 + 1);
                    /* try { // try from 002fabb4 to 002fabc7 has its CatchHandler @ 002fadec */
        NcSession<short>::initRtSession(pNVar8,uVar2,uVar1,&local_b0,this[0x18]);
        plVar6 = local_a8;
      }
      if ((plVar6 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      plVar6 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
                    /* try { // try from 002facf0 to 002facf3 has its CatchHandler @ 002fae84 */
      NcSession<short>::startSession(*(NcSession<short> **)(*in_x8 + 8));
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_002faea8;
    }
    plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 002fad48 to 002fad53 has its CatchHandler @ 002fadc4 */
    FUN_00712630(plVar6,"Nc::create: Model info is empty!");
  }
  else {
    plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 002fad2c to 002fad37 has its CatchHandler @ 002fadc8 */
    FUN_00712630(plVar6,"Nc::create: Unsupported sampling rates or frame duration!");
  }
  *plVar6 = (long)(PTR_DAT_007a0fb0 + 0x10);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 002fad74 to 002fad8b has its CatchHandler @ 002fae84 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar6,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
  }
LAB_002faea8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002faeac  FUN_002faeac =====

void FUN_002faeac(undefined8 *param_1)

{
  NcSession<short> *this;
  
  this = (NcSession<short> *)*param_1;
  *param_1 = 0;
  if (this != (NcSession<short> *)0x0) {
    Krisp::AudioSdk::NcSession<short>::~NcSession(this);
    free(this);
    return;
  }
  return;
}


// ===== 002faee8  FUN_002faee8 =====

void FUN_002faee8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002faf38  FUN_002faf38 =====

void FUN_002faf38(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002faf88  Krisp::AudioSdk::Nc<float>::create =====

/* Krisp::AudioSdk::Nc<float>::create(Krisp::AudioSdk::NcSessionConfigWithAutoModelSelect const&) */

void Krisp::AudioSdk::Nc<float>::create(NcSessionConfigWithAutoModelSelect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 002fafa0 to 002fafab has its CatchHandler @ 002fafc4 */
  FUN_00712630(uVar1,"Not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
}


// ===== 002fafd8  Krisp::AudioSdk::Nc<short>::create =====

/* Krisp::AudioSdk::Nc<short>::create(Krisp::AudioSdk::NcSessionConfigWithAutoModelSelect const&) */

void Krisp::AudioSdk::Nc<short>::create(NcSessionConfigWithAutoModelSelect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 002faff0 to 002faffb has its CatchHandler @ 002fb014 */
  FUN_00712630(uVar1,"Not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
}


// ===== 002fb028  Krisp::AudioSdk::Nc<short>::process =====

/* Krisp::AudioSdk::Nc<short>::process(short const*, unsigned long, short*, unsigned long, float,
   Krisp::AudioSdk::PerFrameStats*) */

void __thiscall
Krisp::AudioSdk::Nc<short>::process
          (Nc<short> *this,short *param_1,ulong param_2,short *param_3,ulong param_4,float param_5,
          PerFrameStats *param_6)

{
  NcSession<short>::process
            (*(NcSession<short> **)(this + 8),param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ===== 002fb030  Krisp::AudioSdk::Nc<float>::process =====

/* Krisp::AudioSdk::Nc<float>::process(float const*, unsigned long, float*, unsigned long, float,
   Krisp::AudioSdk::PerFrameStats*) */

void __thiscall
Krisp::AudioSdk::Nc<float>::process
          (Nc<float> *this,float *param_1,ulong param_2,float *param_3,ulong param_4,float param_5,
          PerFrameStats *param_6)

{
  NcSession<float>::process
            (*(NcSession<float> **)(this + 8),param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ===== 002fb038  Krisp::AudioSdk::Nc<short>::getSessionStats =====

/* Krisp::AudioSdk::Nc<short>::getSessionStats(Krisp::AudioSdk::SessionStats*) */

void __thiscall Krisp::AudioSdk::Nc<short>::getSessionStats(Nc<short> *this,SessionStats *param_1)

{
  NcSession<short>::getStats(*(NcSession<short> **)(this + 8),param_1);
  return;
}


// ===== 002fb040  Krisp::AudioSdk::Nc<float>::getSessionStats =====

/* Krisp::AudioSdk::Nc<float>::getSessionStats(Krisp::AudioSdk::SessionStats*) */

void __thiscall Krisp::AudioSdk::Nc<float>::getSessionStats(Nc<float> *this,SessionStats *param_1)

{
  NcSession<float>::getStats(*(NcSession<float> **)(this + 8),param_1);
  return;
}


// ===== 002fb048  FUN_002fb048 =====

void FUN_002fb048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075ee08;
  FUN_00712454();
  return;
}


// ===== 002fb05c  FUN_002fb05c =====

void FUN_002fb05c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a0f78 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fb090  FUN_002fb090 =====

void FUN_002fb090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002fb098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 002fb09c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fb0a0  Krisp::AudioSdk::Nc<float>::~Nc =====

/* Krisp::AudioSdk::Nc<float>::~Nc() */

void __thiscall Krisp::AudioSdk::Nc<float>::~Nc(Nc<float> *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__Nc_0075ee58;
  if (*(NcSession<float> **)(this + 8) != (NcSession<float> *)0x0) {
                    /* try { // try from 002fb0d8 to 002fb0e3 has its CatchHandler @ 002fb138 */
    NcSession<float>::stopSession(*(NcSession<float> **)(this + 8));
    NcSession<float>::destroySession(*(NcSession<float> **)(this + 8));
  }
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fb174  Krisp::AudioSdk::Nc<float>::~Nc =====

/* Krisp::AudioSdk::Nc<float>::~Nc() */

void __thiscall Krisp::AudioSdk::Nc<float>::~Nc(Nc<float> *this)

{
  ~Nc(this);
  free(this);
  return;
}


// ===== 002fb198  FUN_002fb198 =====

void FUN_002fb198(void)

{
  FUN_00753ac4();
                    /* WARNING: Subroutine does not return */
  FUN_00739f00();
}


// ===== 002fb1a8  FUN_002fb1a8 =====

void FUN_002fb1a8(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_002fb368;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_002fb25c;
    *__dest = 0;
    uVar2 = 0;
LAB_002fb218:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_002fb25c:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_002fb218;
                    /* try { // try from 002fb27c to 002fb283 has its CatchHandler @ 002fb314 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 002fb28c to 002fb29b has its CatchHandler @ 002fb31c */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_002fb368:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fb36c  FUN_002fb36c =====

void FUN_002fb36c(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  
  if (param_3 < 0x17) {
    *(char *)param_1 = (char)((int)param_3 << 1);
    memmove((undefined1 *)((long)param_1 + 1),param_2,param_3 + 1);
    return;
  }
  if (param_3 < 0xfffffffffffffff8) {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
    memmove(__dest,param_2,param_3 + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 002fb400  FUN_002fb400 =====

void FUN_002fb400(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("basic_string");
}


// ===== 002fb414  FUN_002fb414 =====

void FUN_002fb414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075ee88;
  FUN_00712454();
  return;
}


// ===== 002fb428  FUN_002fb428 =====

void FUN_002fb428(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a0f88 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fb45c  FUN_002fb45c =====

void FUN_002fb45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002fb464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 002fb468  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fb46c  Krisp::AudioSdk::KmsForNc<float>::~KmsForNc =====

/* Krisp::AudioSdk::KmsForNc<float>::~KmsForNc() */

void __thiscall Krisp::AudioSdk::KmsForNc<float>::~KmsForNc(KmsForNc<float> *this)

{
  *(undefined **)this = PTR_DAT_007a0f90 + 0x10;
  if (*(long *)(this + 0x10) != 0) {
    FUN_0071245c();
    return;
  }
  return;
}


// ===== 002fb490  Krisp::AudioSdk::KmsForNc<float>::~KmsForNc =====

/* Krisp::AudioSdk::KmsForNc<float>::~KmsForNc() */

void __thiscall Krisp::AudioSdk::KmsForNc<float>::~KmsForNc(KmsForNc<float> *this)

{
  *(undefined ***)this = &PTR__KmsForNc_0075eed8;
  if (*(long *)(this + 0x10) != 0) {
    FUN_0071245c(*(long *)(this + 0x10));
  }
  free(this);
  return;
}


// ===== 002fb4d0  Krisp::AudioSdk::KmsForNc<float>::createStream =====

/* Krisp::AudioSdk::KmsForNc<float>::createStream(KRISP::Audio::StreamDescriptor const&) */

undefined8 __thiscall
Krisp::AudioSdk::KmsForNc<float>::createStream(KmsForNc<float> *this,StreamDescriptor *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 002fb520 to 002fb527 has its CatchHandler @ 002fb5cc */
        uVar3 = FUN_0030c8bc(*(long *)(this + 8),param_1);
        lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == lVar5) {
          return uVar3;
        }
        goto LAB_002fb5f0;
      }
    }
  }
  uVar3 = FUN_00753a74(0x10);
                    /* try { // try from 002fb588 to 002fb593 has its CatchHandler @ 002fb5bc */
  FUN_00712630(uVar3,"KmsForNc::createStream: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 002fb5a4 to 002fb5bb has its CatchHandler @ 002fb5cc */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar3,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fb5f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fb5f4  Krisp::AudioSdk::KmsForNc<float>::createProcessor =====

/* Krisp::AudioSdk::KmsForNc<float>::createProcessor(std::__ndk1::shared_ptr<KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor> > const&, KRISP::Audio::NoiseCancellation::Configuration const&,
   std::__ndk1::shared_ptr<KRISP::Audio::NoiseCancellation::PerFrameConfigurationSupplier> const&,
   std::__ndk1::shared_ptr<KRISP::Audio::NoiseCancellation::ResultHandlerWithStats<float> > const&)
    */

undefined8 __thiscall
Krisp::AudioSdk::KmsForNc<float>::createProcessor
          (KmsForNc<float> *this,shared_ptr *param_1,Configuration *param_2,shared_ptr *param_3,
          shared_ptr *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = (long *)0x0;
  if (*(long *)(this + 0x10) != 0) {
    local_50 = (long *)FUN_007124b4();
    if (local_50 != (long *)0x0) {
      lVar3 = *(long *)(this + 8);
      local_58 = lVar3;
      if (lVar3 != 0) {
        local_68 = *(undefined8 *)param_3;
        local_60 = *(long **)(param_3 + 8);
        uVar4 = **(undefined8 **)param_1;
        if (local_60 != (long *)0x0) {
          FUN_00755c20(1,local_60 + 1);
        }
        local_78 = *(undefined8 *)param_4;
        local_70 = *(long **)(param_4 + 8);
        if (local_70 != (long *)0x0) {
          FUN_00755c20(1,local_70 + 1);
        }
                    /* try { // try from 002fb688 to 002fb69f has its CatchHandler @ 002fb7a0 */
        uVar4 = FUN_00311290(lVar3,uVar4,param_2,&local_68,&local_78);
        plVar2 = local_70;
        if ((local_70 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_50;
        if ((local_50 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return uVar4;
        }
        goto LAB_002fb7ec;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fb76c to 002fb777 has its CatchHandler @ 002fb7c0 */
  FUN_00712630(uVar4,"KmsForNc::createProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 002fb788 to 002fb79f has its CatchHandler @ 002fb7b8 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fb7ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fb7f0  Krisp::AudioSdk::KmsForNc<float>::createProcessor =====

/* Krisp::AudioSdk::KmsForNc<float>::createProcessor(std::__ndk1::shared_ptr<KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor> > const&, KRISP::Audio::RTExclusiveNC::Configuration const&,
   std::__ndk1::shared_ptr<KRISP::Audio::RTExclusiveNC::PerFrameConfigurationSupplier> const&,
   std::__ndk1::shared_ptr<KRISP::Audio::NoiseCancellation::ResultHandlerWithStats<float> > const&)
    */

undefined8 __thiscall
Krisp::AudioSdk::KmsForNc<float>::createProcessor
          (KmsForNc<float> *this,shared_ptr *param_1,Configuration *param_2,shared_ptr *param_3,
          shared_ptr *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = (long *)0x0;
  if (*(long *)(this + 0x10) != 0) {
    local_50 = (long *)FUN_007124b4();
    if (local_50 != (long *)0x0) {
      lVar3 = *(long *)(this + 8);
      local_58 = lVar3;
      if (lVar3 != 0) {
        local_68 = *(undefined8 *)param_3;
        local_60 = *(long **)(param_3 + 8);
        uVar4 = **(undefined8 **)param_1;
        if (local_60 != (long *)0x0) {
          FUN_00755c20(1,local_60 + 1);
        }
        local_78 = *(undefined8 *)param_4;
        local_70 = *(long **)(param_4 + 8);
        if (local_70 != (long *)0x0) {
          FUN_00755c20(1,local_70 + 1);
        }
                    /* try { // try from 002fb884 to 002fb89b has its CatchHandler @ 002fb99c */
        uVar4 = FUN_0030f380(lVar3,uVar4,param_2,&local_68,&local_78);
        plVar2 = local_70;
        if ((local_70 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_50;
        if ((local_50 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return uVar4;
        }
        goto LAB_002fb9e8;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fb968 to 002fb973 has its CatchHandler @ 002fb9bc */
  FUN_00712630(uVar4,"KmsForNc::createProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 002fb984 to 002fb99b has its CatchHandler @ 002fb9b4 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fb9e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fb9ec  Krisp::AudioSdk::KmsForNc<float>::enableProcessor =====

/* Krisp::AudioSdk::KmsForNc<float>::enableProcessor(KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForNc<float>::enableProcessor
          (KmsForNc<float> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 002fba44 to 002fba4f has its CatchHandler @ 002fbb14 */
        FUN_0030ca8c(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_002fbb38;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fbad0 to 002fbadb has its CatchHandler @ 002fbb04 */
  FUN_00712630(uVar4,"KmsForNc::enableProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 002fbaec to 002fbb03 has its CatchHandler @ 002fbb14 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fbb38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fbb3c  Krisp::AudioSdk::KmsForNc<float>::disableProcessor =====

/* Krisp::AudioSdk::KmsForNc<float>::disableProcessor(KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForNc<float>::disableProcessor
          (KmsForNc<float> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 002fbb94 to 002fbb9f has its CatchHandler @ 002fbc64 */
        FUN_0030cd34(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_002fbc88;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fbc20 to 002fbc2b has its CatchHandler @ 002fbc54 */
  FUN_00712630(uVar4,"KmsForNc::disableProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 002fbc3c to 002fbc53 has its CatchHandler @ 002fbc64 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fbc88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fbc8c  Krisp::AudioSdk::KmsForNc<float>::destroyProcessor =====

/* Krisp::AudioSdk::KmsForNc<float>::destroyProcessor(KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForNc<float>::destroyProcessor
          (KmsForNc<float> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 002fbce4 to 002fbcef has its CatchHandler @ 002fbdb4 */
        FUN_0030ce00(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_002fbdd8;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fbd70 to 002fbd7b has its CatchHandler @ 002fbda4 */
  FUN_00712630(uVar4,"KmsForNc::destroyProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 002fbd8c to 002fbda3 has its CatchHandler @ 002fbdb4 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fbdd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fbddc  FUN_002fbddc =====

void FUN_002fbddc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fbe2c  FUN_002fbe2c =====

void FUN_002fbe2c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fbe7c  FUN_002fbe7c =====

void FUN_002fbe7c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fbecc  FUN_002fbecc =====

void FUN_002fbecc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fbf1c  FUN_002fbf1c =====

void FUN_002fbf1c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fbf6c  FUN_002fbf6c =====

void FUN_002fbf6c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fbf90  FUN_002fbf90 =====

void FUN_002fbf90(long param_1)

{
  NcSession<float> *this;
  
  this = *(NcSession<float> **)(param_1 + 0x18);
  if (this != (NcSession<float> *)0x0) {
    Krisp::AudioSdk::NcSession<float>::~NcSession(this);
    free(this);
    return;
  }
  return;
}


// ===== 002fbfc8  FUN_002fbfc8 =====

long FUN_002fbfc8(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk114default_deleteIN5Kri_007a0ff0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002fbfe4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fbfe8  FUN_002fbfe8 =====

void FUN_002fbfe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075efa0;
  FUN_00712454();
  return;
}


// ===== 002fbffc  FUN_002fbffc =====

void FUN_002fbffc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a0fa0 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fc030  FUN_002fc030 =====

void FUN_002fc030(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x30));
  return;
}


// ===== 002fc074  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fc078  FUN_002fc078 =====

void FUN_002fc078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075eff0;
  FUN_00712454();
  return;
}


// ===== 002fc08c  FUN_002fc08c =====

void FUN_002fc08c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a0fa8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fc0c0  FUN_002fc0c0 =====

void FUN_002fc0c0(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x30));
  return;
}


// ===== 002fc0d4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fc0d8  FUN_002fc0d8 =====

void FUN_002fc0d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f040;
  FUN_00712454();
  return;
}


// ===== 002fc0ec  FUN_002fc0ec =====

void FUN_002fc0ec(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a0fc8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fc120  FUN_002fc120 =====

void FUN_002fc120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002fc128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 002fc12c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fc130  Krisp::AudioSdk::Nc<short>::~Nc =====

/* Krisp::AudioSdk::Nc<short>::~Nc() */

void __thiscall Krisp::AudioSdk::Nc<short>::~Nc(Nc<short> *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__Nc_0075f090;
  if (*(NcSession<short> **)(this + 8) != (NcSession<short> *)0x0) {
                    /* try { // try from 002fc168 to 002fc173 has its CatchHandler @ 002fc1c8 */
    NcSession<short>::stopSession(*(NcSession<short> **)(this + 8));
    NcSession<short>::destroySession(*(NcSession<short> **)(this + 8));
  }
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fc204  Krisp::AudioSdk::Nc<short>::~Nc =====

/* Krisp::AudioSdk::Nc<short>::~Nc() */

void __thiscall Krisp::AudioSdk::Nc<short>::~Nc(Nc<short> *this)

{
  ~Nc(this);
  free(this);
  return;
}


// ===== 002fc228  FUN_002fc228 =====

void FUN_002fc228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f0c0;
  FUN_00712454();
  return;
}


// ===== 002fc23c  FUN_002fc23c =====

void FUN_002fc23c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a0fd8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fc270  FUN_002fc270 =====

void FUN_002fc270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002fc278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 002fc27c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fc280  Krisp::AudioSdk::KmsForNc<short>::~KmsForNc =====

/* Krisp::AudioSdk::KmsForNc<short>::~KmsForNc() */

void __thiscall Krisp::AudioSdk::KmsForNc<short>::~KmsForNc(KmsForNc<short> *this)

{
  *(undefined **)this = PTR_DAT_007a0fe0 + 0x10;
  if (*(long *)(this + 0x10) != 0) {
    FUN_0071245c();
    return;
  }
  return;
}


// ===== 002fc2a4  Krisp::AudioSdk::KmsForNc<short>::~KmsForNc =====

/* Krisp::AudioSdk::KmsForNc<short>::~KmsForNc() */

void __thiscall Krisp::AudioSdk::KmsForNc<short>::~KmsForNc(KmsForNc<short> *this)

{
  *(undefined ***)this = &PTR__KmsForNc_0075f110;
  if (*(long *)(this + 0x10) != 0) {
    FUN_0071245c(*(long *)(this + 0x10));
  }
  free(this);
  return;
}


// ===== 002fc2e4  Krisp::AudioSdk::KmsForNc<short>::createStream =====

/* Krisp::AudioSdk::KmsForNc<short>::createStream(KRISP::Audio::StreamDescriptor const&) */

undefined8 __thiscall
Krisp::AudioSdk::KmsForNc<short>::createStream(KmsForNc<short> *this,StreamDescriptor *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 002fc334 to 002fc33b has its CatchHandler @ 002fc3e0 */
        uVar3 = FUN_0030bfe8(*(long *)(this + 8),param_1);
        lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == lVar5) {
          return uVar3;
        }
        goto LAB_002fc404;
      }
    }
  }
  uVar3 = FUN_00753a74(0x10);
                    /* try { // try from 002fc39c to 002fc3a7 has its CatchHandler @ 002fc3d0 */
  FUN_00712630(uVar3,"KmsForNc::createStream: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 002fc3b8 to 002fc3cf has its CatchHandler @ 002fc3e0 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar3,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fc404:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fc408  Krisp::AudioSdk::KmsForNc<short>::createProcessor =====

/* Krisp::AudioSdk::KmsForNc<short>::createProcessor(std::__ndk1::shared_ptr<KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor> > const&, KRISP::Audio::NoiseCancellation::Configuration const&,
   std::__ndk1::shared_ptr<KRISP::Audio::NoiseCancellation::PerFrameConfigurationSupplier> const&,
   std::__ndk1::shared_ptr<KRISP::Audio::NoiseCancellation::ResultHandlerWithStats<short> > const&)
    */

undefined8 __thiscall
Krisp::AudioSdk::KmsForNc<short>::createProcessor
          (KmsForNc<short> *this,shared_ptr *param_1,Configuration *param_2,shared_ptr *param_3,
          shared_ptr *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = (long *)0x0;
  if (*(long *)(this + 0x10) != 0) {
    local_50 = (long *)FUN_007124b4();
    if (local_50 != (long *)0x0) {
      lVar3 = *(long *)(this + 8);
      local_58 = lVar3;
      if (lVar3 != 0) {
        local_68 = *(undefined8 *)param_3;
        local_60 = *(long **)(param_3 + 8);
        uVar4 = **(undefined8 **)param_1;
        if (local_60 != (long *)0x0) {
          FUN_00755c20(1,local_60 + 1);
        }
        local_78 = *(undefined8 *)param_4;
        local_70 = *(long **)(param_4 + 8);
        if (local_70 != (long *)0x0) {
          FUN_00755c20(1,local_70 + 1);
        }
                    /* try { // try from 002fc49c to 002fc4b3 has its CatchHandler @ 002fc5b4 */
        uVar4 = FUN_00310e48(lVar3,uVar4,param_2,&local_68,&local_78);
        plVar2 = local_70;
        if ((local_70 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_50;
        if ((local_50 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return uVar4;
        }
        goto LAB_002fc600;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fc580 to 002fc58b has its CatchHandler @ 002fc5d4 */
  FUN_00712630(uVar4,"KmsForNc::createProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 002fc59c to 002fc5b3 has its CatchHandler @ 002fc5cc */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fc600:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fc604  Krisp::AudioSdk::KmsForNc<short>::createProcessor =====

/* Krisp::AudioSdk::KmsForNc<short>::createProcessor(std::__ndk1::shared_ptr<KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor> > const&, KRISP::Audio::RTExclusiveNC::Configuration const&,
   std::__ndk1::shared_ptr<KRISP::Audio::RTExclusiveNC::PerFrameConfigurationSupplier> const&,
   std::__ndk1::shared_ptr<KRISP::Audio::NoiseCancellation::ResultHandlerWithStats<short> > const&)
    */

undefined8 __thiscall
Krisp::AudioSdk::KmsForNc<short>::createProcessor
          (KmsForNc<short> *this,shared_ptr *param_1,Configuration *param_2,shared_ptr *param_3,
          shared_ptr *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = (long *)0x0;
  if (*(long *)(this + 0x10) != 0) {
    local_50 = (long *)FUN_007124b4();
    if (local_50 != (long *)0x0) {
      lVar3 = *(long *)(this + 8);
      local_58 = lVar3;
      if (lVar3 != 0) {
        local_68 = *(undefined8 *)param_3;
        local_60 = *(long **)(param_3 + 8);
        uVar4 = **(undefined8 **)param_1;
        if (local_60 != (long *)0x0) {
          FUN_00755c20(1,local_60 + 1);
        }
        local_78 = *(undefined8 *)param_4;
        local_70 = *(long **)(param_4 + 8);
        if (local_70 != (long *)0x0) {
          FUN_00755c20(1,local_70 + 1);
        }
                    /* try { // try from 002fc698 to 002fc6af has its CatchHandler @ 002fc7b0 */
        uVar4 = FUN_0030ef2c(lVar3,uVar4,param_2,&local_68,&local_78);
        plVar2 = local_70;
        if ((local_70 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_50;
        if ((local_50 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return uVar4;
        }
        goto LAB_002fc7fc;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fc77c to 002fc787 has its CatchHandler @ 002fc7d0 */
  FUN_00712630(uVar4,"KmsForNc::createProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 002fc798 to 002fc7af has its CatchHandler @ 002fc7c8 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fc7fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fc800  Krisp::AudioSdk::KmsForNc<short>::enableProcessor =====

/* Krisp::AudioSdk::KmsForNc<short>::enableProcessor(KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForNc<short>::enableProcessor
          (KmsForNc<short> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 002fc858 to 002fc863 has its CatchHandler @ 002fc928 */
        FUN_0030c1b8(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_002fc94c;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fc8e4 to 002fc8ef has its CatchHandler @ 002fc918 */
  FUN_00712630(uVar4,"KmsForNc::enableProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 002fc900 to 002fc917 has its CatchHandler @ 002fc928 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fc94c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fc950  Krisp::AudioSdk::KmsForNc<short>::disableProcessor =====

/* Krisp::AudioSdk::KmsForNc<short>::disableProcessor(KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForNc<short>::disableProcessor
          (KmsForNc<short> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 002fc9a8 to 002fc9b3 has its CatchHandler @ 002fca78 */
        FUN_0030c460(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_002fca9c;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fca34 to 002fca3f has its CatchHandler @ 002fca68 */
  FUN_00712630(uVar4,"KmsForNc::disableProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 002fca50 to 002fca67 has its CatchHandler @ 002fca78 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fca9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fcaa0  Krisp::AudioSdk::KmsForNc<short>::destroyProcessor =====

/* Krisp::AudioSdk::KmsForNc<short>::destroyProcessor(KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForNc<short>::destroyProcessor
          (KmsForNc<short> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 002fcaf8 to 002fcb03 has its CatchHandler @ 002fcbc8 */
        FUN_0030c52c(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_002fcbec;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 002fcb84 to 002fcb8f has its CatchHandler @ 002fcbb8 */
  FUN_00712630(uVar4,"KmsForNc::destroyProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 002fcba0 to 002fcbb7 has its CatchHandler @ 002fcbc8 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_002fcbec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fcbf0  FUN_002fcbf0 =====

void FUN_002fcbf0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fcc40  FUN_002fcc40 =====

void FUN_002fcc40(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fcc90  FUN_002fcc90 =====

void FUN_002fcc90(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fccb4  FUN_002fccb4 =====

void FUN_002fccb4(long param_1)

{
  NcSession<short> *this;
  
  this = *(NcSession<short> **)(param_1 + 0x18);
  if (this != (NcSession<short> *)0x0) {
    Krisp::AudioSdk::NcSession<short>::~NcSession(this);
    free(this);
    return;
  }
  return;
}


// ===== 002fccec  FUN_002fccec =====

long FUN_002fccec(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk114default_deleteIN5Kri_007a0ff8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002fcd08  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fcd0c  Krisp::AudioSdk::NcSession<float>::NcSession =====

/* Krisp::AudioSdk::NcSession<float>::NcSession(std::__ndk1::shared_ptr<Krisp::AudioSdk::IKmsForNc<float>
   > const&) */

void __thiscall
Krisp::AudioSdk::NcSession<float>::NcSession(NcSession<float> *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(long *)(this + 8) = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x68) = 0x42c80000;
  *(undefined4 *)(this + 0x6c) = 1;
  return;
}


// ===== 002fcd5c  Krisp::AudioSdk::NcSession<float>::~NcSession =====

/* Krisp::AudioSdk::NcSession<float>::~NcSession() */

void __thiscall Krisp::AudioSdk::NcSession<float>::~NcSession(NcSession<float> *this)

{
  void *__ptr;
  long lVar1;
  long *plVar2;
  
  __ptr = *(void **)(this + 0x50);
  if (__ptr != (void *)0x0) {
    *(void **)(this + 0x58) = __ptr;
    free(__ptr);
  }
  plVar2 = *(long **)(this + 0x18);
  if ((plVar2 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 != 0))
  {
    plVar2 = *(long **)(this + 8);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    plVar2 = *(long **)(this + 8);
  }
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fcdfc  Krisp::AudioSdk::NcSession<float>::initSession =====

/* Krisp::AudioSdk::NcSession<float>::initSession(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration,
   std::__ndk1::shared_ptr<KRISP::Audio::NoiseCancellation::Configuration>, bool) */

void __thiscall
Krisp::AudioSdk::NcSession<float>::initSession
          (NcSession<float> *this,undefined4 param_2,undefined4 param_3,long *param_4,byte param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_4 == 0) {
    uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 002fd000 to 002fd00b has its CatchHandler @ 002fd034 */
    FUN_002fd1a0(uVar5,"NcSession::initSession: Null config pointer received");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_80 = param_3;
    uStack_7c = param_2;
    lVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_80);
    plVar4 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1008;
    plVar4[3] = lVar3;
    *(long **)(this + 0x10) = plVar4 + 3;
    plVar6 = *(long **)(this + 0x18);
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    *(long **)(this + 0x18) = plVar4;
    if ((plVar6 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    this[0x6d] = (NcSession<float>)(param_5 & 1);
    this[0x6c] = (NcSession<float>)((param_5 ^ 0xff) & 1);
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1010 + 0x10);
    plVar4[1] = (long)this;
    local_58 = plVar4;
                    /* try { // try from 002fcee4 to 002fceeb has its CatchHandler @ 002fd178 */
    local_50 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1018;
    local_50[2] = 0;
    local_50[3] = (long)plVar4;
    *local_50 = (long)(puVar2 + 0x10);
    local_50[1] = 0;
                    /* try { // try from 002fcf04 to 002fcf0b has its CatchHandler @ 002fd168 */
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1020 + 0x10);
    plVar4[1] = (long)this;
    local_68 = plVar4;
                    /* try { // try from 002fcf24 to 002fcf2b has its CatchHandler @ 002fd158 */
    local_60 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1028;
    local_60[2] = 0;
    local_60[3] = (long)plVar4;
    lVar3 = *param_4;
    plVar4 = *(long **)this;
    *local_60 = (long)(puVar2 + 0x10);
    local_60[1] = 0;
                    /* try { // try from 002fcf54 to 002fcf67 has its CatchHandler @ 002fd044 */
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,this + 0x10,lVar3,&local_58,&local_68);
    plVar4 = local_60;
    *(undefined8 *)(this + 0x20) = uVar5;
    if ((local_60 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    plVar4 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fd1a0  FUN_002fd1a0 =====

void FUN_002fd1a0(undefined8 *param_1)

{
  FUN_00712630();
  *param_1 = &PTR_FUN_0079ddd8;
  return;
}


// ===== 002fd1d0  Krisp::AudioSdk::NcSession<float>::createStream =====

/* Krisp::AudioSdk::NcSession<float>::createStream(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration, bool) */

void __thiscall
Krisp::AudioSdk::NcSession<float>::createStream
          (NcSession<float> *this,undefined4 param_2,undefined4 param_3,byte param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_3;
  uStack_4c = param_2;
  uVar2 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_50);
  puVar3 = (undefined8 *)FUN_00759c3c(0x20);
  plVar5 = *(long **)(this + 0x18);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined8 **)(this + 0x18) = puVar3;
  *puVar3 = &PTR_FUN_0075f448;
  puVar3[3] = uVar2;
  *(undefined8 **)(this + 0x10) = puVar3 + 3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  this[0x6d] = (NcSession<float>)(param_4 & 1);
  this[0x6c] = (NcSession<float>)((param_4 ^ 0xff) & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fd2b0  FUN_002fd2b0 =====

void FUN_002fd2b0(ulong *param_1,char *param_2)

{
  ulong uVar1;
  size_t __n;
  undefined1 *__dest;
  
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      return;
    }
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
  }
  memmove(__dest,param_2,__n);
  __dest[__n] = 0;
  return;
}


// ===== 002fd360  Krisp::AudioSdk::NcSession<float>::initRtSession =====

/* Krisp::AudioSdk::NcSession<float>::initRtSession(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration, std::__ndk1::shared_ptr<KRISP::Audio::RTExclusiveNC::Configuration>,
   bool) */

void __thiscall
Krisp::AudioSdk::NcSession<float>::initRtSession
          (NcSession<float> *this,undefined4 param_2,undefined4 param_3,long *param_4,byte param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_4 == 0) {
    uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 002fd564 to 002fd56f has its CatchHandler @ 002fd598 */
    FUN_002fd1a0(uVar5,"NcSession::initRtSession: Null config pointer received");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_80 = param_3;
    uStack_7c = param_2;
    lVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_80);
    plVar4 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1008;
    plVar4[3] = lVar3;
    *(long **)(this + 0x10) = plVar4 + 3;
    plVar6 = *(long **)(this + 0x18);
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    *(long **)(this + 0x18) = plVar4;
    if ((plVar6 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    this[0x6d] = (NcSession<float>)(param_5 & 1);
    this[0x6c] = (NcSession<float>)((param_5 ^ 0xff) & 1);
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1040 + 0x10);
    plVar4[1] = (long)this;
    local_58 = plVar4;
                    /* try { // try from 002fd448 to 002fd44f has its CatchHandler @ 002fd6dc */
    local_50 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1048;
    local_50[2] = 0;
    local_50[3] = (long)plVar4;
    *local_50 = (long)(puVar2 + 0x10);
    local_50[1] = 0;
                    /* try { // try from 002fd468 to 002fd46f has its CatchHandler @ 002fd6cc */
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1050 + 0x10);
    plVar4[1] = (long)this;
    local_68 = plVar4;
                    /* try { // try from 002fd488 to 002fd48f has its CatchHandler @ 002fd6bc */
    local_60 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1058;
    local_60[2] = 0;
    local_60[3] = (long)plVar4;
    lVar3 = *param_4;
    plVar4 = *(long **)this;
    *local_60 = (long)(puVar2 + 0x10);
    local_60[1] = 0;
                    /* try { // try from 002fd4b8 to 002fd4cb has its CatchHandler @ 002fd5a8 */
    uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,this + 0x10,lVar3,&local_58,&local_68);
    plVar4 = local_60;
    *(undefined8 *)(this + 0x20) = uVar5;
    if ((local_60 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    plVar4 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fd704  Krisp::AudioSdk::NcSession<float>::destroySession =====

/* Krisp::AudioSdk::NcSession<float>::destroySession() */

void __thiscall Krisp::AudioSdk::NcSession<float>::destroySession(NcSession<float> *this)

{
  (**(code **)(**(long **)this + 0x30))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
                    /* WARNING: Could not recover jumptable at 0x002fd750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x38))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 002fd754  Krisp::AudioSdk::NcSession<float>::startSession =====

/* Krisp::AudioSdk::NcSession<float>::startSession() */

void __thiscall Krisp::AudioSdk::NcSession<float>::startSession(NcSession<float> *this)

{
                    /* WARNING: Could not recover jumptable at 0x002fd770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x28))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 002fd774  Krisp::AudioSdk::NcSession<float>::stopSession =====

/* Krisp::AudioSdk::NcSession<float>::stopSession() */

void __thiscall Krisp::AudioSdk::NcSession<float>::stopSession(NcSession<float> *this)

{
                    /* WARNING: Could not recover jumptable at 0x002fd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x30))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 002fd794  Krisp::AudioSdk::NcSession<float>::process =====

/* Krisp::AudioSdk::NcSession<float>::process(float const*, unsigned long, float*, unsigned long,
   float, Krisp::AudioSdk::PerFrameStats*) */

void __thiscall
Krisp::AudioSdk::NcSession<float>::process
          (NcSession<float> *this,float *param_1,ulong param_2,float *param_3,ulong param_4,
          float param_5,PerFrameStats *param_6)

{
  void *__src;
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  size_t __n;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((((param_1 == (float *)0x0) || (param_2 == 0)) || (param_3 == (float *)0x0)) || (param_4 == 0)
     ) {
    uVar2 = FUN_00753a74(0x10);
                    /* try { // try from 002fd8a4 to 002fd8af has its CatchHandler @ 002fda9c */
    FUN_002fd1a0(uVar2,"NcSession::process: Null buffer pointer received");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 002fd7f4 to 002fd827 has its CatchHandler @ 002fdaac */
    FUN_002fede8(&local_60,0,param_1,param_1 + param_2);
    *(float *)(this + 0x68) = param_5;
    if (((byte)this[0x6d] & 1) == 0) {
      this[0x6c] = (NcSession<float>)(param_6 == (PerFrameStats *)0x0);
    }
    FUN_0030c7bc(*(undefined8 *)(this + 0x10),&local_60);
    __src = *(void **)(this + 0x50);
    __n = (long)*(void **)(this + 0x58) - (long)__src;
    if (param_4 == (long)__n >> 2) {
      if (*(void **)(this + 0x58) != __src) {
        memmove(param_3,__src,__n);
      }
      if (param_6 != (PerFrameStats *)0x0) {
        *(undefined2 *)param_6 = *(undefined2 *)(this + 0x28);
        *(undefined4 *)(param_6 + 4) = *(undefined4 *)(this + 0x2c);
      }
      if (local_60 != (void *)0x0) {
        local_58 = local_60;
        free(local_60);
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      plVar3 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 002fd8e4 to 002fd8ef has its CatchHandler @ 002fda8c */
      FUN_00714ba0(auStack_c8,param_4);
                    /* try { // try from 002fd8f0 to 002fd903 has its CatchHandler @ 002fda74 */
      puVar4 = (undefined8 *)FUN_00713170(auStack_c8,0,"NcSession::process: Output frame size ");
      local_a0 = puVar4[2];
      uStack_a8 = puVar4[1];
      local_b0 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 002fd91c to 002fd92b has its CatchHandler @ 002fda44 */
      puVar4 = (undefined8 *)FUN_00713bdc(&local_b0," is not equal to ");
      local_80 = puVar4[2];
      uStack_88 = puVar4[1];
      local_90 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 002fd950 to 002fd957 has its CatchHandler @ 002fda20 */
      FUN_00714ba0(auStack_e0,*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 2);
                    /* try { // try from 002fd958 to 002fd967 has its CatchHandler @ 002fd9fc */
      FUN_002fdadc(auStack_78,&local_90,auStack_e0);
                    /* try { // try from 002fd96c to 002fd9b3 has its CatchHandler @ 002fd9b4 */
      FUN_0071259c(plVar3,auStack_78);
      *plVar3 = (long)(PTR_DAT_007a0fb0 + 0x10);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar3,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fdadc  FUN_002fdadc =====

void FUN_002fdadc(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
  puVar3 = (undefined8 *)FUN_0071302c(param_2,pbVar2,uVar1);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  uVar4 = puVar3[2];
  *puVar3 = 0;
  puVar3[1] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  puVar3[2] = 0;
  return;
}


// ===== 002fdb2c  Krisp::AudioSdk::NcSession<float>::getStats =====

/* Krisp::AudioSdk::NcSession<float>::getStats(Krisp::AudioSdk::SessionStats*) */

void __thiscall
Krisp::AudioSdk::NcSession<float>::getStats(NcSession<float> *this,SessionStats *param_1)

{
  undefined8 uVar1;
  
  if (((byte)this[0x6d] & 1) == 0) {
    uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 002fdb6c to 002fdb77 has its CatchHandler @ 002fdbd4 */
    FUN_00712630(uVar1,"NcSession::getStats: enableSessionStats wasn\'t enabled in NcSessionConfig")
    ;
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar1,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
  if (param_1 != (SessionStats *)0x0) {
    uVar1 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x38);
    *(undefined8 *)param_1 = uVar1;
    uVar1 = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x48);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 002fdb9c to 002fdba7 has its CatchHandler @ 002fdbc0 */
  FUN_002fd1a0(uVar1,"NcSession::getStats: Null stats pointer received");
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
}


// ===== 002fdbe8  Krisp::AudioSdk::NcSession<short>::NcSession =====

/* Krisp::AudioSdk::NcSession<short>::NcSession(std::__ndk1::shared_ptr<Krisp::AudioSdk::IKmsForNc<short>
   > const&) */

void __thiscall
Krisp::AudioSdk::NcSession<short>::NcSession(NcSession<short> *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(long *)(this + 8) = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x68) = 0x42c80000;
  *(undefined4 *)(this + 0x6c) = 1;
  return;
}


// ===== 002fdc38  Krisp::AudioSdk::NcSession<short>::~NcSession =====

/* Krisp::AudioSdk::NcSession<short>::~NcSession() */

void __thiscall Krisp::AudioSdk::NcSession<short>::~NcSession(NcSession<short> *this)

{
  void *__ptr;
  long lVar1;
  long *plVar2;
  
  __ptr = *(void **)(this + 0x50);
  if (__ptr != (void *)0x0) {
    *(void **)(this + 0x58) = __ptr;
    free(__ptr);
  }
  plVar2 = *(long **)(this + 0x18);
  if ((plVar2 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 != 0))
  {
    plVar2 = *(long **)(this + 8);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    plVar2 = *(long **)(this + 8);
  }
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 002fdcd8  Krisp::AudioSdk::NcSession<short>::initSession =====

/* Krisp::AudioSdk::NcSession<short>::initSession(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration,
   std::__ndk1::shared_ptr<KRISP::Audio::NoiseCancellation::Configuration>, bool) */

void __thiscall
Krisp::AudioSdk::NcSession<short>::initSession
          (NcSession<short> *this,undefined4 param_2,undefined4 param_3,long *param_4,byte param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_4 == 0) {
    uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 002fdedc to 002fdee7 has its CatchHandler @ 002fdf10 */
    FUN_002fd1a0(uVar5,"NcSession::initSession: Null config pointer received");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_80 = param_3;
    uStack_7c = param_2;
    lVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_80);
    plVar4 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1060;
    plVar4[3] = lVar3;
    *(long **)(this + 0x10) = plVar4 + 3;
    plVar6 = *(long **)(this + 0x18);
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    *(long **)(this + 0x18) = plVar4;
    if ((plVar6 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    this[0x6d] = (NcSession<short>)(param_5 & 1);
    this[0x6c] = (NcSession<short>)((param_5 ^ 0xff) & 1);
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1068 + 0x10);
    plVar4[1] = (long)this;
    local_58 = plVar4;
                    /* try { // try from 002fddc0 to 002fddc7 has its CatchHandler @ 002fe054 */
    local_50 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1070;
    local_50[2] = 0;
    local_50[3] = (long)plVar4;
    *local_50 = (long)(puVar2 + 0x10);
    local_50[1] = 0;
                    /* try { // try from 002fdde0 to 002fdde7 has its CatchHandler @ 002fe044 */
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1078 + 0x10);
    plVar4[1] = (long)this;
    local_68 = plVar4;
                    /* try { // try from 002fde00 to 002fde07 has its CatchHandler @ 002fe034 */
    local_60 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1080;
    local_60[2] = 0;
    local_60[3] = (long)plVar4;
    lVar3 = *param_4;
    plVar4 = *(long **)this;
    *local_60 = (long)(puVar2 + 0x10);
    local_60[1] = 0;
                    /* try { // try from 002fde30 to 002fde43 has its CatchHandler @ 002fdf20 */
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,this + 0x10,lVar3,&local_58,&local_68);
    plVar4 = local_60;
    *(undefined8 *)(this + 0x20) = uVar5;
    if ((local_60 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    plVar4 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fe07c  Krisp::AudioSdk::NcSession<short>::createStream =====

/* Krisp::AudioSdk::NcSession<short>::createStream(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration, bool) */

void __thiscall
Krisp::AudioSdk::NcSession<short>::createStream
          (NcSession<short> *this,undefined4 param_2,undefined4 param_3,byte param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_3;
  uStack_4c = param_2;
  uVar2 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_50);
  puVar3 = (undefined8 *)FUN_00759c3c(0x20);
  plVar5 = *(long **)(this + 0x18);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined8 **)(this + 0x18) = puVar3;
  *puVar3 = &PTR_FUN_0075f6e8;
  puVar3[3] = uVar2;
  *(undefined8 **)(this + 0x10) = puVar3 + 3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  this[0x6d] = (NcSession<short>)(param_4 & 1);
  this[0x6c] = (NcSession<short>)((param_4 ^ 0xff) & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fe15c  Krisp::AudioSdk::NcSession<short>::initRtSession =====

/* Krisp::AudioSdk::NcSession<short>::initRtSession(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration, std::__ndk1::shared_ptr<KRISP::Audio::RTExclusiveNC::Configuration>,
   bool) */

void __thiscall
Krisp::AudioSdk::NcSession<short>::initRtSession
          (NcSession<short> *this,undefined4 param_2,undefined4 param_3,long *param_4,byte param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_4 == 0) {
    uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 002fe360 to 002fe36b has its CatchHandler @ 002fe394 */
    FUN_002fd1a0(uVar5,"NcSession::initRtSession: Null config pointer received");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_80 = param_3;
    uStack_7c = param_2;
    lVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_80);
    plVar4 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1060;
    plVar4[3] = lVar3;
    *(long **)(this + 0x10) = plVar4 + 3;
    plVar6 = *(long **)(this + 0x18);
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    *(long **)(this + 0x18) = plVar4;
    if ((plVar6 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    this[0x6d] = (NcSession<short>)(param_5 & 1);
    this[0x6c] = (NcSession<short>)((param_5 ^ 0xff) & 1);
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1088 + 0x10);
    plVar4[1] = (long)this;
    local_58 = plVar4;
                    /* try { // try from 002fe244 to 002fe24b has its CatchHandler @ 002fe4d8 */
    local_50 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1090;
    local_50[2] = 0;
    local_50[3] = (long)plVar4;
    *local_50 = (long)(puVar2 + 0x10);
    local_50[1] = 0;
                    /* try { // try from 002fe264 to 002fe26b has its CatchHandler @ 002fe4c8 */
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1098 + 0x10);
    plVar4[1] = (long)this;
    local_68 = plVar4;
                    /* try { // try from 002fe284 to 002fe28b has its CatchHandler @ 002fe4b8 */
    local_60 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a10a0;
    local_60[2] = 0;
    local_60[3] = (long)plVar4;
    lVar3 = *param_4;
    plVar4 = *(long **)this;
    *local_60 = (long)(puVar2 + 0x10);
    local_60[1] = 0;
                    /* try { // try from 002fe2b4 to 002fe2c7 has its CatchHandler @ 002fe3a4 */
    uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,this + 0x10,lVar3,&local_58,&local_68);
    plVar4 = local_60;
    *(undefined8 *)(this + 0x20) = uVar5;
    if ((local_60 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    plVar4 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fe500  Krisp::AudioSdk::NcSession<short>::destroySession =====

/* Krisp::AudioSdk::NcSession<short>::destroySession() */

void __thiscall Krisp::AudioSdk::NcSession<short>::destroySession(NcSession<short> *this)

{
  (**(code **)(**(long **)this + 0x30))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
                    /* WARNING: Could not recover jumptable at 0x002fe54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x38))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 002fe550  Krisp::AudioSdk::NcSession<short>::startSession =====

/* Krisp::AudioSdk::NcSession<short>::startSession() */

void __thiscall Krisp::AudioSdk::NcSession<short>::startSession(NcSession<short> *this)

{
                    /* WARNING: Could not recover jumptable at 0x002fe56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x28))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 002fe570  Krisp::AudioSdk::NcSession<short>::stopSession =====

/* Krisp::AudioSdk::NcSession<short>::stopSession() */

void __thiscall Krisp::AudioSdk::NcSession<short>::stopSession(NcSession<short> *this)

{
                    /* WARNING: Could not recover jumptable at 0x002fe58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x30))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 002fe590  Krisp::AudioSdk::NcSession<short>::process =====

/* Krisp::AudioSdk::NcSession<short>::process(short const*, unsigned long, short*, unsigned long,
   float, Krisp::AudioSdk::PerFrameStats*) */

void __thiscall
Krisp::AudioSdk::NcSession<short>::process
          (NcSession<short> *this,short *param_1,ulong param_2,short *param_3,ulong param_4,
          float param_5,PerFrameStats *param_6)

{
  void *__src;
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  size_t __n;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((((param_1 == (short *)0x0) || (param_2 == 0)) || (param_3 == (short *)0x0)) || (param_4 == 0)
     ) {
    uVar2 = FUN_00753a74(0x10);
                    /* try { // try from 002fe6a0 to 002fe6ab has its CatchHandler @ 002fe898 */
    FUN_002fd1a0(uVar2,"NcSession::process: Null buffer pointer received");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 002fe5f0 to 002fe623 has its CatchHandler @ 002fe8a8 */
    FUN_002ff504(&local_60,0,param_1,param_1 + param_2);
    *(float *)(this + 0x68) = param_5;
    if (((byte)this[0x6d] & 1) == 0) {
      this[0x6c] = (NcSession<short>)(param_6 == (PerFrameStats *)0x0);
    }
    FUN_0030bee8(*(undefined8 *)(this + 0x10),&local_60);
    __src = *(void **)(this + 0x50);
    __n = (long)*(void **)(this + 0x58) - (long)__src;
    if (param_4 == (long)__n >> 1) {
      if (*(void **)(this + 0x58) != __src) {
        memmove(param_3,__src,__n);
      }
      if (param_6 != (PerFrameStats *)0x0) {
        *(undefined2 *)param_6 = *(undefined2 *)(this + 0x28);
        *(undefined4 *)(param_6 + 4) = *(undefined4 *)(this + 0x2c);
      }
      if (local_60 != (void *)0x0) {
        local_58 = local_60;
        free(local_60);
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      plVar3 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 002fe6e0 to 002fe6eb has its CatchHandler @ 002fe888 */
      FUN_00714ba0(auStack_c8,param_4);
                    /* try { // try from 002fe6ec to 002fe6ff has its CatchHandler @ 002fe870 */
      puVar4 = (undefined8 *)FUN_00713170(auStack_c8,0,"NcSession::process: Output frame size ");
      local_a0 = puVar4[2];
      uStack_a8 = puVar4[1];
      local_b0 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 002fe718 to 002fe727 has its CatchHandler @ 002fe840 */
      puVar4 = (undefined8 *)FUN_00713bdc(&local_b0," is not equal to ");
      local_80 = puVar4[2];
      uStack_88 = puVar4[1];
      local_90 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 002fe74c to 002fe753 has its CatchHandler @ 002fe81c */
      FUN_00714ba0(auStack_e0,*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 1);
                    /* try { // try from 002fe754 to 002fe763 has its CatchHandler @ 002fe7f8 */
      FUN_002fdadc(auStack_78,&local_90,auStack_e0);
                    /* try { // try from 002fe768 to 002fe7af has its CatchHandler @ 002fe7b0 */
      FUN_0071259c(plVar3,auStack_78);
      *plVar3 = (long)(PTR_DAT_007a0fb0 + 0x10);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar3,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fe8d8  Krisp::AudioSdk::NcSession<short>::getStats =====

/* Krisp::AudioSdk::NcSession<short>::getStats(Krisp::AudioSdk::SessionStats*) */

void __thiscall
Krisp::AudioSdk::NcSession<short>::getStats(NcSession<short> *this,SessionStats *param_1)

{
  undefined8 uVar1;
  
  if (((byte)this[0x6d] & 1) == 0) {
    uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 002fe918 to 002fe923 has its CatchHandler @ 002fe980 */
    FUN_00712630(uVar1,"NcSession::getStats: enableSessionStats wasn\'t enabled in NcSessionConfig")
    ;
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar1,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
  if (param_1 != (SessionStats *)0x0) {
    uVar1 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x38);
    *(undefined8 *)param_1 = uVar1;
    uVar1 = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x48);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 002fe948 to 002fe953 has its CatchHandler @ 002fe96c */
  FUN_002fd1a0(uVar1,"NcSession::getStats: Null stats pointer received");
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
}


// ===== 002fe994  FUN_002fe994 =====

undefined8 FUN_002fe994(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  return CONCAT44(*(undefined4 *)(lVar1 + 0x68),
                  CONCAT13(*(undefined1 *)(lVar1 + 0x6d),
                           CONCAT12(*(undefined1 *)(lVar1 + 0x6f),
                                    CONCAT11(*(undefined1 *)(lVar1 + 0x6c),
                                             *(undefined1 *)(lVar1 + 0x6e)))));
}


// ===== 002fe9c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fe9c4  FUN_002fe9c4 =====

void FUN_002fe9c4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fe9e8  FUN_002fe9e8 =====

void FUN_002fe9e8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002fe9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 002fea00  FUN_002fea00 =====

long FUN_002fea00(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a10a8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002fea1c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fea20  FUN_002fea20 =====

void FUN_002fea20(long param_1,undefined2 *param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  __src = *(void **)(param_2 + 0x14);
  plVar3 = (long *)(lVar4 + 0x50);
  uVar2 = *(long *)(param_2 + 0x18) - (long)__src >> 2;
  uVar1 = *(long *)(lVar4 + 0x58) - *plVar3 >> 2;
  if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
    if (uVar2 < uVar1) {
      *(long *)(lVar4 + 0x58) = *plVar3 + (*(long *)(param_2 + 0x18) - (long)__src);
    }
  }
  else {
    FUN_002feac4(plVar3,uVar2 - uVar1);
    __src = *(void **)(param_2 + 0x14);
  }
  if (*(long *)(param_2 + 0x18) - (long)__src != 0) {
    memmove((void *)*plVar3,__src,*(long *)(param_2 + 0x18) - (long)__src);
  }
  *(undefined2 *)(lVar4 + 0x28) = *param_2;
  *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  uVar7 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar4 + 0x30) = uVar7;
  *(undefined8 *)(lVar4 + 0x48) = uVar6;
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  return;
}


// ===== 002feac0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002feac4  FUN_002feac4 =====

void FUN_002feac4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__s;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  void *__s_00;
  long lVar4;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 2) < param_2) {
    __src = (void *)*param_1;
    lVar4 = (long)__s_00 - (long)__src >> 2;
    uVar1 = lVar4 + param_2;
    if (uVar1 >> 0x3e != 0) {
      FUN_002febf0(param_1);
LAB_002febec:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar2 = param_1[2] - (long)__src;
    uVar3 = (long)uVar2 >> 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar2) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3e != 0) goto LAB_002febec;
      __dest = (void *)FUN_00759c3c(uVar3 << 2);
    }
    __s = (void *)((long)__dest + lVar4 * 4);
    memset(__s,0,param_2 * 4);
    memcpy(__dest,__src,(long)__s_00 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (void *)((long)__s + param_2 * 4);
    param_1[2] = (void *)((long)__dest + uVar3 * 4);
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 4);
      __s_00 = (void *)((long)__s_00 + param_2 * 4);
    }
    param_1[1] = __s_00;
  }
  return;
}


// ===== 002febf0  FUN_002febf0 =====

void FUN_002febf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 002fec04  FUN_002fec04 =====

void FUN_002fec04(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fec28  FUN_002fec28 =====

void FUN_002fec28(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002fec38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 002fec40  FUN_002fec40 =====

long FUN_002fec40(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a10b0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002fec5c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fec60  FUN_002fec60 =====

ulong FUN_002fec60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  return (ulong)CONCAT12(*(undefined1 *)(lVar1 + 0x6d),
                         CONCAT11(*(undefined1 *)(lVar1 + 0x6f),*(undefined1 *)(lVar1 + 0x6c))) |
         (ulong)*(uint *)(lVar1 + 0x68) << 0x20;
}


// ===== 002fec84  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fec88  FUN_002fec88 =====

void FUN_002fec88(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fecac  FUN_002fecac =====

void FUN_002fecac(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002fecbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 002fecc4  FUN_002fecc4 =====

long FUN_002fecc4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a10b8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002fece0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fece4  FUN_002fece4 =====

void FUN_002fece4(long param_1,undefined2 *param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  __src = *(void **)(param_2 + 0x14);
  plVar3 = (long *)(lVar4 + 0x50);
  uVar2 = *(long *)(param_2 + 0x18) - (long)__src >> 2;
  uVar1 = *(long *)(lVar4 + 0x58) - *plVar3 >> 2;
  if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
    if (uVar2 < uVar1) {
      *(long *)(lVar4 + 0x58) = *plVar3 + (*(long *)(param_2 + 0x18) - (long)__src);
    }
  }
  else {
    FUN_002feac4(plVar3,uVar2 - uVar1);
    __src = *(void **)(param_2 + 0x14);
  }
  if (*(long *)(param_2 + 0x18) - (long)__src != 0) {
    memmove((void *)*plVar3,__src,*(long *)(param_2 + 0x18) - (long)__src);
  }
  *(undefined2 *)(lVar4 + 0x28) = *param_2;
  *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  uVar7 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar4 + 0x30) = uVar7;
  *(undefined8 *)(lVar4 + 0x48) = uVar6;
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  return;
}


// ===== 002fed84  FUN_002fed84 =====

void FUN_002fed84(void)

{
  return;
}


// ===== 002fed88  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fed8c  FUN_002fed8c =====

void FUN_002fed8c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002fedb0  FUN_002fedb0 =====

void FUN_002fedb0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002fedc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 002fedc8  FUN_002fedc8 =====

long FUN_002fedc8(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a10c0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002fede4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002fede8  FUN_002fede8 =====

void * FUN_002fede8(undefined8 *param_1,void *param_2,void *param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *__dest;
  void *__dest_00;
  undefined4 *__dest_01;
  undefined8 *puVar3;
  undefined4 *puVar4;
  void *__dest_02;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 *puVar12;
  
  if (param_5 < 1) {
    return param_2;
  }
  __dest_01 = (undefined4 *)param_1[1];
  if (param_1[2] - (long)__dest_01 >> 2 < param_5) {
    pvVar14 = (void *)*param_1;
    uVar1 = param_5 + ((long)__dest_01 - (long)pvVar14 >> 2);
    if (uVar1 >> 0x3e == 0) {
      uVar6 = param_1[2] - (long)pvVar14;
      uVar7 = (long)uVar6 >> 1;
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar7 = 0x3fffffffffffffff;
      }
      if (uVar7 == 0) {
        __dest_02 = (void *)0x0;
      }
      else {
        if (uVar7 >> 0x3e != 0) goto LAB_002ff060;
        __dest_02 = (void *)FUN_00759c3c(uVar7 << 2);
      }
      __dest = (void *)((long)__dest_02 + ((long)param_2 - (long)pvVar14 >> 2) * 4);
      memcpy(__dest,param_3,param_5 * 4);
      __dest_00 = (void *)((long)__dest + param_5 * 4);
      memcpy(__dest_00,param_2,(long)__dest_01 - (long)param_2);
      param_1[1] = param_2;
      memcpy(__dest_02,pvVar14,(long)param_2 - (long)pvVar14);
      *param_1 = __dest_02;
      param_1[1] = (long)__dest_00 + ((long)__dest_01 - (long)param_2);
      param_1[2] = (void *)((long)__dest_02 + uVar7 * 4);
      if (pvVar14 == (void *)0x0) {
        return __dest;
      }
      free(pvVar14);
      return __dest;
    }
    FUN_002febf0(param_1);
LAB_002ff060:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar15 = (long)__dest_01 - (long)param_2 >> 2;
  if (lVar15 < param_5) {
    pvVar14 = (void *)((long)param_3 + ((long)__dest_01 - (long)param_2));
    sVar5 = param_4 - (long)pvVar14;
    if (sVar5 != 0) {
      memmove(__dest_01,pvVar14,sVar5);
    }
    puVar2 = (undefined4 *)((long)__dest_01 + sVar5);
    param_1[1] = puVar2;
    if (lVar15 < 1) {
      return param_2;
    }
    puVar11 = puVar2 + -param_5;
  }
  else {
    pvVar14 = (void *)((long)param_3 + param_5 * 4);
    puVar11 = __dest_01 + -param_5;
    puVar2 = __dest_01;
  }
  puVar4 = (undefined4 *)((long)param_2 + param_5 * 4);
  puVar9 = puVar2;
  if (puVar11 < __dest_01) {
    puVar9 = __dest_01;
    if (__dest_01 <= puVar11 + 1) {
      puVar9 = puVar11 + 1;
    }
    uVar1 = (long)puVar9 + param_5 * 4 + ~(ulong)puVar2;
    puVar8 = puVar2;
    if ((0x1b < uVar1) && (0x1f < (ulong)(param_5 * 4))) {
      puVar13 = (undefined8 *)(puVar2 + 4);
      uVar1 = (uVar1 >> 2) + 1;
      uVar6 = uVar1 & 0x7ffffffffffffff8;
      puVar10 = (undefined8 *)(puVar11 + 4);
      uVar7 = uVar6;
      do {
        puVar3 = puVar10 + -1;
        uVar16 = puVar10[-2];
        uVar18 = puVar10[1];
        uVar17 = *puVar10;
        uVar7 = uVar7 - 8;
        puVar10 = puVar10 + 4;
        puVar13[-1] = *puVar3;
        puVar13[-2] = uVar16;
        puVar13[1] = uVar18;
        *puVar13 = uVar17;
        puVar13 = puVar13 + 4;
      } while (uVar7 != 0);
      puVar9 = puVar2 + uVar6;
      puVar8 = puVar2 + uVar6;
      puVar11 = puVar11 + uVar6;
      if (uVar1 == uVar6) goto LAB_002ff008;
    }
    do {
      puVar12 = puVar11 + 1;
      *puVar8 = *puVar11;
      puVar9 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      puVar11 = puVar12;
    } while (puVar12 < __dest_01);
  }
LAB_002ff008:
  param_1[1] = puVar9;
  if (puVar2 != puVar4) {
    sVar5 = (long)puVar2 - (long)puVar4;
    memmove((void *)((long)puVar2 - sVar5),param_2,sVar5);
  }
  if ((long)pvVar14 - (long)param_3 != 0) {
    memmove(param_2,param_3,(long)pvVar14 - (long)param_3);
  }
  return param_2;
}


// ===== 002ff064  FUN_002ff064 =====

void FUN_002ff064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f448;
  FUN_00712454();
  return;
}


// ===== 002ff078  FUN_002ff078 =====

void FUN_002ff078(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1008 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002ff0ac  FUN_002ff0ac =====

void FUN_002ff0ac(void)

{
  return;
}


// ===== 002ff0b0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff0b4  FUN_002ff0b4 =====

undefined8 FUN_002ff0b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  return CONCAT44(*(undefined4 *)(lVar1 + 0x68),
                  CONCAT13(*(undefined1 *)(lVar1 + 0x6d),
                           CONCAT12(*(undefined1 *)(lVar1 + 0x6f),
                                    CONCAT11(*(undefined1 *)(lVar1 + 0x6c),
                                             *(undefined1 *)(lVar1 + 0x6e)))));
}


// ===== 002ff0e0  FUN_002ff0e0 =====

void FUN_002ff0e0(void)

{
  return;
}


// ===== 002ff0e4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff0e8  FUN_002ff0e8 =====

void FUN_002ff0e8(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002ff10c  FUN_002ff10c =====

void FUN_002ff10c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002ff11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 002ff124  FUN_002ff124 =====

long FUN_002ff124(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a10c8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002ff140  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff144  FUN_002ff144 =====

void FUN_002ff144(long param_1,undefined2 *param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  __src = *(void **)(param_2 + 0x14);
  plVar3 = (long *)(lVar4 + 0x50);
  uVar2 = *(long *)(param_2 + 0x18) - (long)__src >> 1;
  uVar1 = *(long *)(lVar4 + 0x58) - *plVar3 >> 1;
  if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
    if (uVar2 < uVar1) {
      *(long *)(lVar4 + 0x58) = *plVar3 + (*(long *)(param_2 + 0x18) - (long)__src);
    }
  }
  else {
    FUN_002ff1e8(plVar3,uVar2 - uVar1);
    __src = *(void **)(param_2 + 0x14);
  }
  if (*(long *)(param_2 + 0x18) - (long)__src != 0) {
    memmove((void *)*plVar3,__src,*(long *)(param_2 + 0x18) - (long)__src);
  }
  *(undefined2 *)(lVar4 + 0x28) = *param_2;
  *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  uVar7 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar4 + 0x30) = uVar7;
  *(undefined8 *)(lVar4 + 0x48) = uVar6;
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  return;
}


// ===== 002ff1e4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff1e8  FUN_002ff1e8 =====

void FUN_002ff1e8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__s;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  void *__s_00;
  long lVar4;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 1) < param_2) {
    __src = (void *)*param_1;
    lVar4 = (long)__s_00 - (long)__src >> 1;
    uVar1 = lVar4 + param_2;
    if ((long)uVar1 < 0) {
      FUN_002ff308(param_1);
LAB_002ff304:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar3 = param_1[2] - (long)__src;
    uVar2 = uVar3;
    if (uVar3 <= uVar1) {
      uVar2 = uVar1;
    }
    if (0x7ffffffffffffffd < uVar3) {
      uVar2 = 0x7fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((long)uVar2 < 0) goto LAB_002ff304;
      __dest = (void *)FUN_00759c3c(uVar2 << 1);
    }
    __s = (void *)((long)__dest + lVar4 * 2);
    memset(__s,0,param_2 * 2);
    memcpy(__dest,__src,(long)__s_00 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (void *)((long)__s + param_2 * 2);
    param_1[2] = (void *)((long)__dest + uVar2 * 2);
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 2);
      __s_00 = (void *)((long)__s_00 + param_2 * 2);
    }
    param_1[1] = __s_00;
  }
  return;
}


// ===== 002ff308  FUN_002ff308 =====

void FUN_002ff308(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 002ff31c  FUN_002ff31c =====

void FUN_002ff31c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002ff340  FUN_002ff340 =====

void FUN_002ff340(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002ff350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 002ff358  FUN_002ff358 =====

long FUN_002ff358(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a10d0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002ff374  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff378  FUN_002ff378 =====

ulong FUN_002ff378(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  return (ulong)CONCAT12(*(undefined1 *)(lVar1 + 0x6d),
                         CONCAT11(*(undefined1 *)(lVar1 + 0x6f),*(undefined1 *)(lVar1 + 0x6c))) |
         (ulong)*(uint *)(lVar1 + 0x68) << 0x20;
}


// ===== 002ff39c  FUN_002ff39c =====

void FUN_002ff39c(void)

{
  return;
}


// ===== 002ff3a0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff3a4  FUN_002ff3a4 =====

void FUN_002ff3a4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002ff3c8  FUN_002ff3c8 =====

void FUN_002ff3c8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002ff3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 002ff3e0  FUN_002ff3e0 =====

long FUN_002ff3e0(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a10d8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002ff3fc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff400  FUN_002ff400 =====

void FUN_002ff400(long param_1,undefined2 *param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  __src = *(void **)(param_2 + 0x14);
  plVar3 = (long *)(lVar4 + 0x50);
  uVar2 = *(long *)(param_2 + 0x18) - (long)__src >> 1;
  uVar1 = *(long *)(lVar4 + 0x58) - *plVar3 >> 1;
  if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
    if (uVar2 < uVar1) {
      *(long *)(lVar4 + 0x58) = *plVar3 + (*(long *)(param_2 + 0x18) - (long)__src);
    }
  }
  else {
    FUN_002ff1e8(plVar3,uVar2 - uVar1);
    __src = *(void **)(param_2 + 0x14);
  }
  if (*(long *)(param_2 + 0x18) - (long)__src != 0) {
    memmove((void *)*plVar3,__src,*(long *)(param_2 + 0x18) - (long)__src);
  }
  *(undefined2 *)(lVar4 + 0x28) = *param_2;
  *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  uVar7 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar4 + 0x30) = uVar7;
  *(undefined8 *)(lVar4 + 0x48) = uVar6;
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  return;
}


// ===== 002ff4a0  FUN_002ff4a0 =====

void FUN_002ff4a0(void)

{
  return;
}


// ===== 002ff4a4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff4a8  FUN_002ff4a8 =====

void FUN_002ff4a8(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002ff4cc  FUN_002ff4cc =====

void FUN_002ff4cc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002ff4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 002ff4e4  FUN_002ff4e4 =====

long FUN_002ff4e4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a10e0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 002ff500  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff504  FUN_002ff504 =====

void * FUN_002ff504(undefined8 *param_1,void *param_2,void *param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined2 *puVar2;
  void *__dest;
  void *__dest_00;
  undefined2 *__dest_01;
  undefined8 *puVar3;
  undefined2 *puVar4;
  void *__dest_02;
  size_t sVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 *puVar11;
  
  if (param_5 < 1) {
    return param_2;
  }
  __dest_01 = (undefined2 *)param_1[1];
  if (param_1[2] - (long)__dest_01 >> 1 < param_5) {
    pvVar14 = (void *)*param_1;
    uVar1 = param_5 + ((long)__dest_01 - (long)pvVar14 >> 1);
    if (-1 < (long)uVar1) {
      uVar6 = param_1[2] - (long)pvVar14;
      uVar13 = uVar6;
      if (uVar6 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7ffffffffffffffd < uVar6) {
        uVar13 = 0x7fffffffffffffff;
      }
      if (uVar13 == 0) {
        __dest_02 = (void *)0x0;
      }
      else {
        if ((long)uVar13 < 0) goto LAB_002ff770;
        __dest_02 = (void *)FUN_00759c3c(uVar13 << 1);
      }
      __dest = (void *)((long)__dest_02 + ((long)param_2 - (long)pvVar14 >> 1) * 2);
      memcpy(__dest,param_3,param_5 * 2);
      __dest_00 = (void *)((long)__dest + param_5 * 2);
      memcpy(__dest_00,param_2,(long)__dest_01 - (long)param_2);
      param_1[1] = param_2;
      memcpy(__dest_02,pvVar14,(long)param_2 - (long)pvVar14);
      *param_1 = __dest_02;
      param_1[1] = (long)__dest_00 + ((long)__dest_01 - (long)param_2);
      param_1[2] = (void *)((long)__dest_02 + uVar13 * 2);
      if (pvVar14 == (void *)0x0) {
        return __dest;
      }
      free(pvVar14);
      return __dest;
    }
    FUN_002ff308(param_1);
LAB_002ff770:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar15 = (long)__dest_01 - (long)param_2 >> 1;
  if (lVar15 < param_5) {
    pvVar14 = (void *)((long)param_3 + ((long)__dest_01 - (long)param_2));
    sVar5 = param_4 - (long)pvVar14;
    if (sVar5 != 0) {
      memmove(__dest_01,pvVar14,sVar5);
    }
    puVar2 = (undefined2 *)((long)__dest_01 + sVar5);
    param_1[1] = puVar2;
    if (lVar15 < 1) {
      return param_2;
    }
    puVar10 = puVar2 + -param_5;
  }
  else {
    pvVar14 = (void *)((long)param_3 + param_5 * 2);
    puVar10 = __dest_01 + -param_5;
    puVar2 = __dest_01;
  }
  puVar4 = (undefined2 *)((long)param_2 + param_5 * 2);
  puVar8 = puVar2;
  if (puVar10 < __dest_01) {
    puVar8 = __dest_01;
    if (__dest_01 <= puVar10 + 1) {
      puVar8 = puVar10 + 1;
    }
    uVar1 = (long)puVar8 + param_5 * 2 + ~(ulong)puVar2;
    puVar7 = puVar2;
    if ((0x1d < uVar1) && (0x1f < (ulong)(param_5 * 2))) {
      puVar12 = (undefined8 *)(puVar2 + 8);
      uVar1 = (uVar1 >> 1) + 1;
      uVar6 = uVar1 & 0xfffffffffffffff0;
      puVar9 = (undefined8 *)(puVar10 + 8);
      uVar13 = uVar6;
      do {
        puVar3 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar18 = puVar9[1];
        uVar17 = *puVar9;
        uVar13 = uVar13 - 0x10;
        puVar9 = puVar9 + 4;
        puVar12[-1] = *puVar3;
        puVar12[-2] = uVar16;
        puVar12[1] = uVar18;
        *puVar12 = uVar17;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      puVar8 = puVar2 + uVar6;
      puVar7 = puVar2 + uVar6;
      puVar10 = puVar10 + uVar6;
      if (uVar1 == uVar6) goto LAB_002ff718;
    }
    do {
      puVar11 = puVar10 + 1;
      *puVar7 = *puVar10;
      puVar8 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      puVar10 = puVar11;
    } while (puVar11 < __dest_01);
  }
LAB_002ff718:
  param_1[1] = puVar8;
  if (puVar2 != puVar4) {
    sVar5 = (long)puVar2 - (long)puVar4;
    memmove((void *)((long)puVar2 - sVar5),param_2,sVar5);
  }
  if ((long)pvVar14 - (long)param_3 != 0) {
    memmove(param_2,param_3,(long)pvVar14 - (long)param_3);
  }
  return param_2;
}


// ===== 002ff774  FUN_002ff774 =====

void FUN_002ff774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f6e8;
  FUN_00712454();
  return;
}


// ===== 002ff788  FUN_002ff788 =====

void FUN_002ff788(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1060 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 002ff7bc  FUN_002ff7bc =====

void FUN_002ff7bc(void)

{
  return;
}


// ===== 002ff7c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 002ff7c4  FUN_002ff7c4 =====

void FUN_002ff7c4(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    plVar3 = (long *)__ptr[4];
    pvVar1 = (void *)*__ptr;
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 002ff854  FUN_002ff854 =====

void FUN_002ff854(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    plVar3 = (long *)__ptr[4];
    pvVar1 = (void *)*__ptr;
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 002ff8e4  krispCreateNcInt16 =====

undefined8 krispCreateNcInt16(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  NcSessionConfig *extraout_x1;
  NcSessionConfig *pNVar3;
  NcSessionConfig *extraout_x1_00;
  long *plVar4;
  undefined8 local_f0;
  long *local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulong *local_78;
  undefined1 local_70;
  ulong *local_68;
  undefined8 local_60;
  undefined1 uStack_51;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    Krisp::AudioSdk::getLogger((AudioSdk *)0x0);
                    /* try { // try from 002ffacc to 002ffadb has its CatchHandler @ 002ffb88 */
    FUN_002ffd24(local_88,4,"createNc: Null input argument");
    plVar4 = (long *)CONCAT44(uStack_7c,local_80);
    if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return 0;
    }
  }
  else {
    local_80 = *(undefined4 *)(param_1 + 1);
    local_68 = (ulong *)0x0;
    local_90 = 0;
    local_70 = *(undefined1 *)(param_1 + 3);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_d0 = (void *)0x0;
    uStack_a8 = 0;
    local_b0 = 0;
    local_98 = 0;
    local_a0 = (void *)0x0;
    local_88 = *param_1;
                    /* try { // try from 002ff948 to 002ff987 has its CatchHandler @ 002ffbe4 */
    FUN_00714334(&local_b0,*(undefined8 *)param_1[2]);
    local_98 = *(undefined8 *)(param_1[2] + 8);
    local_90 = *(undefined8 *)(param_1[2] + 0x10);
    pNVar3 = extraout_x1;
    local_78 = &local_b0;
    if (((long *)param_1[4] != (long *)0x0) &&
       (pNVar3 = *(NcSessionConfig **)param_1[4], pNVar3 != (NcSessionConfig *)0x0)) {
      FUN_00714334(&local_e0);
      local_c8 = *(undefined8 *)(param_1[4] + 8);
      local_c0 = *(undefined8 *)(param_1[4] + 0x10);
      pNVar3 = extraout_x1_00;
      local_68 = &local_e0;
    }
                    /* try { // try from 002ff9a0 to 002ff9ab has its CatchHandler @ 002ffbe0 */
    Krisp::AudioSdk::Nc<short>::create((Nc<short> *)&local_88,pNVar3);
    if (local_e8 != (long *)0x0) {
      FUN_00755c20(1,local_e8 + 1);
    }
                    /* try { // try from 002ff9c4 to 002ff9cf has its CatchHandler @ 002ffbc4 */
    FUN_00715bcc(&DAT_007aac38);
    local_50 = &local_60;
    local_60 = local_f0;
                    /* try { // try from 002ff9dc to 002ff9fb has its CatchHandler @ 002ffbac */
    lVar2 = FUN_00302758(&DAT_007aabe8,&local_60,PTR_DAT_007a10e8,&local_50,&uStack_51);
    if (local_e8 != (long *)0x0) {
      FUN_00755c20(1,local_e8 + 1);
    }
    plVar4 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = local_f0;
    *(long **)(lVar2 + 0x20) = local_e8;
    if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    FUN_00715bf8(&DAT_007aac38);
    if ((local_e8 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar2 == 0)) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      FUN_0071245c(local_e8);
    }
    if ((local_e8 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar2 == 0)) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      FUN_0071245c(local_e8);
    }
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_b0 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return local_60;
      }
    }
    else {
      free(local_a0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return local_60;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ffd24  FUN_002ffd24 =====

void FUN_002ffd24(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_002ffee4;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_002ffdd8;
    *__dest = 0;
    uVar2 = 0;
LAB_002ffd94:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_002ffdd8:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_002ffd94;
                    /* try { // try from 002ffdf8 to 002ffdff has its CatchHandler @ 002ffe90 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 002ffe08 to 002ffe17 has its CatchHandler @ 002ffe98 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_002ffee4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ffee8  FUN_002ffee8 =====

void FUN_002ffee8(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_003000a8;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_002fff9c;
    *__dest = 0;
    uVar2 = 0;
LAB_002fff58:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_002fff9c:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_002fff58;
                    /* try { // try from 002fffbc to 002fffc3 has its CatchHandler @ 00300054 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 002fffcc to 002fffdb has its CatchHandler @ 0030005c */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_003000a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003000ac  FUN_003000ac =====

void FUN_003000ac(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00300268;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00300148;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_00300148:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0030015c to 0030016b has its CatchHandler @ 00300244 */
  FUN_00303858(local_70,&local_88,param_4);
                    /* try { // try from 00300174 to 00300183 has its CatchHandler @ 00300204 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_70);
  if ((local_70[0] & 1) != 0) {
    free(local_60);
  }
  if ((local_88 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_00300268:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030026c  krispCreateNcFloat =====

undefined8 krispCreateNcFloat(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  NcSessionConfig *extraout_x1;
  NcSessionConfig *pNVar3;
  NcSessionConfig *extraout_x1_00;
  long *plVar4;
  undefined8 local_f0;
  long *local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulong *local_78;
  undefined1 local_70;
  ulong *local_68;
  undefined8 local_60;
  undefined1 uStack_51;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    Krisp::AudioSdk::getLogger((AudioSdk *)0x0);
                    /* try { // try from 00300454 to 00300463 has its CatchHandler @ 00300510 */
    FUN_002ffd24(local_88,4,"createNc: Null input argument");
    plVar4 = (long *)CONCAT44(uStack_7c,local_80);
    if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return 0;
    }
  }
  else {
    local_80 = *(undefined4 *)(param_1 + 1);
    local_68 = (ulong *)0x0;
    local_90 = 0;
    local_70 = *(undefined1 *)(param_1 + 3);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_d0 = (void *)0x0;
    uStack_a8 = 0;
    local_b0 = 0;
    local_98 = 0;
    local_a0 = (void *)0x0;
    local_88 = *param_1;
                    /* try { // try from 003002d0 to 0030030f has its CatchHandler @ 0030056c */
    FUN_00714334(&local_b0,*(undefined8 *)param_1[2]);
    local_98 = *(undefined8 *)(param_1[2] + 8);
    local_90 = *(undefined8 *)(param_1[2] + 0x10);
    pNVar3 = extraout_x1;
    local_78 = &local_b0;
    if (((long *)param_1[4] != (long *)0x0) &&
       (pNVar3 = *(NcSessionConfig **)param_1[4], pNVar3 != (NcSessionConfig *)0x0)) {
      FUN_00714334(&local_e0);
      local_c8 = *(undefined8 *)(param_1[4] + 8);
      local_c0 = *(undefined8 *)(param_1[4] + 0x10);
      pNVar3 = extraout_x1_00;
      local_68 = &local_e0;
    }
                    /* try { // try from 00300328 to 00300333 has its CatchHandler @ 00300568 */
    Krisp::AudioSdk::Nc<float>::create((Nc<float> *)&local_88,pNVar3);
    if (local_e8 != (long *)0x0) {
      FUN_00755c20(1,local_e8 + 1);
    }
                    /* try { // try from 0030034c to 00300357 has its CatchHandler @ 0030054c */
    FUN_00715bcc(&DAT_007aac38);
    local_50 = &local_60;
    local_60 = local_f0;
                    /* try { // try from 00300364 to 00300383 has its CatchHandler @ 00300534 */
    lVar2 = FUN_00302d20(&DAT_007aac10,&local_60,PTR_DAT_007a10e8,&local_50,&uStack_51);
    if (local_e8 != (long *)0x0) {
      FUN_00755c20(1,local_e8 + 1);
    }
    plVar4 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = local_f0;
    *(long **)(lVar2 + 0x20) = local_e8;
    if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    FUN_00715bf8(&DAT_007aac38);
    if ((local_e8 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar2 == 0)) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      FUN_0071245c(local_e8);
    }
    if ((local_e8 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar2 == 0)) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      FUN_0071245c(local_e8);
    }
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_b0 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return local_60;
      }
    }
    else {
      free(local_a0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return local_60;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003006ac  krispDestroyNc =====

void krispDestroyNc(long param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  AudioSdk *this;
  undefined8 uVar5;
  long local_70;
  long *local_68;
  long local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    Krisp::AudioSdk::getLogger((AudioSdk *)0x0);
                    /* try { // try from 003007e8 to 003007f7 has its CatchHandler @ 00300978 */
    FUN_00300ad8(local_70,4,"krispDestroyNc: Null session handle");
    plVar2 = local_68;
    if ((local_68 != (long *)0x0) &&
       (lVar4 = FUN_00755c50(0xffffffffffffffff,local_68 + 1), lVar4 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    uVar5 = 3;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
                    /* try { // try from 003006d0 to 003006df has its CatchHandler @ 003009a8 */
    FUN_00300c9c(&local_70,param_1);
    plVar2 = local_68;
    if (local_70 == 0) {
                    /* try { // try from 00300840 to 0030084b has its CatchHandler @ 00300950 */
      this = (AudioSdk *)FUN_00300de0(&local_50,param_1);
      plVar2 = local_48;
      bVar3 = local_50 == 0;
      if (local_50 != 0) {
        local_50 = 0;
        local_48 = (long *)0x0;
        if ((plVar2 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar4 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        local_40 = param_1;
                    /* try { // try from 00300894 to 0030089f has its CatchHandler @ 00300944 */
        FUN_00715bcc(&DAT_007aac38);
                    /* try { // try from 003008a0 to 003008bf has its CatchHandler @ 00300954 */
        FUN_003032e8(&DAT_007aabe8,&local_40);
        FUN_003035a0(&DAT_007aac10,&local_40);
        this = (AudioSdk *)FUN_00715bf8(&DAT_007aac38);
      }
      plVar2 = local_48;
      if ((local_48 != (long *)0x0) &&
         (this = (AudioSdk *)FUN_00755c50(0xffffffffffffffff,local_48 + 1), this == (AudioSdk *)0x0)
         ) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        this = (AudioSdk *)FUN_0071245c(plVar2);
      }
    }
    else {
      local_70 = 0;
      local_68 = (long *)0x0;
      if ((plVar2 != (long *)0x0) &&
         (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar4 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0071245c(plVar2);
      }
      local_40 = param_1;
                    /* try { // try from 00300720 to 0030072b has its CatchHandler @ 0030099c */
      FUN_00715bcc(&DAT_007aac38);
                    /* try { // try from 0030072c to 0030074b has its CatchHandler @ 003009b4 */
      FUN_003032e8(&DAT_007aabe8,&local_40);
      FUN_003035a0(&DAT_007aac10,&local_40);
      this = (AudioSdk *)FUN_00715bf8(&DAT_007aac38);
      bVar3 = false;
    }
    plVar2 = local_68;
    if ((local_68 != (long *)0x0) &&
       (this = (AudioSdk *)FUN_00755c50(0xffffffffffffffff,local_68 + 1), this == (AudioSdk *)0x0))
    {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      this = (AudioSdk *)FUN_0071245c(plVar2);
    }
    if (bVar3) {
      Krisp::AudioSdk::getLogger(this);
                    /* try { // try from 00300784 to 00300793 has its CatchHandler @ 00300974 */
      FUN_003010e4(local_70,4,"krispDestroyNc: Invalid session handle");
      plVar2 = local_68;
      if ((local_68 != (long *)0x0) &&
         (lVar4 = FUN_00755c50(0xffffffffffffffff,local_68 + 1), lVar4 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0071245c(plVar2);
      }
      uVar5 = 2;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
    else {
      uVar5 = 0;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00300ad8  FUN_00300ad8 =====

void FUN_00300ad8(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00300c98;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00300b8c;
    *__dest = 0;
    uVar2 = 0;
LAB_00300b48:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_00300b8c:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00300b48;
                    /* try { // try from 00300bac to 00300bb3 has its CatchHandler @ 00300c44 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 00300bbc to 00300bcb has its CatchHandler @ 00300c4c */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_00300c98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00300c9c  FUN_00300c9c =====

void FUN_00300c9c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  FUN_00715bcc(&DAT_007aac38);
  if (DAT_007aabf0 != 0) {
    uVar7 = NEON_cnt(DAT_007aabf0,1);
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar5 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff;
    if (uVar5 < 2) {
      uVar3 = DAT_007aabf0 - 1 & param_2;
    }
    else {
      uVar3 = param_2;
      if (DAT_007aabf0 <= param_2) {
        uVar3 = 0;
        if (DAT_007aabf0 != 0) {
          uVar3 = param_2 / DAT_007aabf0;
        }
        uVar3 = param_2 - uVar3 * DAT_007aabf0;
      }
    }
    plVar4 = *(long **)(DAT_007aabe8 + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar4[1] == param_2) {
            if (plVar4[2] == param_2) goto LAB_00300db0;
          }
          else if ((plVar4[1] & DAT_007aabf0 - 1) != uVar3) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == param_2) {
            if (plVar4[2] == param_2) goto LAB_00300db0;
          }
          else {
            if (DAT_007aabf0 <= uVar5) {
              uVar2 = 0;
              if (DAT_007aabf0 != 0) {
                uVar2 = uVar5 / DAT_007aabf0;
              }
              uVar5 = uVar5 - uVar2 * DAT_007aabf0;
            }
            if (uVar5 != uVar3) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00300d98:
  FUN_00715bf8(&DAT_007aac38);
  return;
LAB_00300db0:
  lVar1 = plVar4[4];
  *param_1 = plVar4[3];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
    FUN_00715bf8(&DAT_007aac38);
    return;
  }
  goto LAB_00300d98;
}


// ===== 00300de0  FUN_00300de0 =====

void FUN_00300de0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  FUN_00715bcc(&DAT_007aac38);
  if (DAT_007aac18 != 0) {
    uVar7 = NEON_cnt(DAT_007aac18,1);
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar5 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff;
    if (uVar5 < 2) {
      uVar3 = DAT_007aac18 - 1 & param_2;
    }
    else {
      uVar3 = param_2;
      if (DAT_007aac18 <= param_2) {
        uVar3 = 0;
        if (DAT_007aac18 != 0) {
          uVar3 = param_2 / DAT_007aac18;
        }
        uVar3 = param_2 - uVar3 * DAT_007aac18;
      }
    }
    plVar4 = *(long **)(DAT_007aac10 + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar4[1] == param_2) {
            if (plVar4[2] == param_2) goto LAB_00300ef4;
          }
          else if ((plVar4[1] & DAT_007aac18 - 1) != uVar3) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == param_2) {
            if (plVar4[2] == param_2) goto LAB_00300ef4;
          }
          else {
            if (DAT_007aac18 <= uVar5) {
              uVar2 = 0;
              if (DAT_007aac18 != 0) {
                uVar2 = uVar5 / DAT_007aac18;
              }
              uVar5 = uVar5 - uVar2 * DAT_007aac18;
            }
            if (uVar5 != uVar3) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00300edc:
  FUN_00715bf8(&DAT_007aac38);
  return;
LAB_00300ef4:
  lVar1 = plVar4[4];
  *param_1 = plVar4[3];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
    FUN_00715bf8(&DAT_007aac38);
    return;
  }
  goto LAB_00300edc;
}


// ===== 00300f24  FUN_00300f24 =====

void FUN_00300f24(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_003010e0;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00300fc0;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_00300fc0:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00300fd4 to 00300fe3 has its CatchHandler @ 003010bc */
  FUN_00303858(local_70,&local_88,param_4);
                    /* try { // try from 00300fec to 00300ffb has its CatchHandler @ 0030107c */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_70);
  if ((local_70[0] & 1) != 0) {
    free(local_60);
  }
  if ((local_88 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_003010e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003010e4  FUN_003010e4 =====

void FUN_003010e4(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_003012a4;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00301198;
    *__dest = 0;
    uVar2 = 0;
LAB_00301154:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_00301198:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00301154;
                    /* try { // try from 003011b8 to 003011bf has its CatchHandler @ 00301250 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 003011c8 to 003011d7 has its CatchHandler @ 00301258 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_003012a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003012a8  krispProcessNcInt16 =====

void krispProcessNcInt16(float param_1,AudioSdk *param_2,short *param_3,ulong param_4,short *param_5
                        ,ulong param_6,undefined2 *param_7)

{
  PerFrameStats *pPVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  Nc<short> *local_80;
  long *local_78;
  undefined2 local_68 [2];
  undefined4 local_64;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((((param_6 == 0) || (param_4 == 0)) || (param_2 == (AudioSdk *)0x0)) ||
     ((param_3 == (short *)0x0 || (param_5 == (short *)0x0)))) {
    Krisp::AudioSdk::getLogger(param_2);
                    /* try { // try from 0030138c to 0030139b has its CatchHandler @ 00301410 */
    FUN_0030153c(local_80,4,"krispProcessNcInt16: Null input argument");
    if ((local_78 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_78 + 1), lVar3 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      FUN_0071245c(local_78);
    }
    uVar4 = 3;
  }
  else {
                    /* try { // try from 003012f4 to 00301307 has its CatchHandler @ 00301438 */
    FUN_00300c9c(&local_80,param_2);
    if (local_80 != (Nc<short> *)0x0) {
      pPVar1 = (PerFrameStats *)0x0;
      if (param_7 != (undefined2 *)0x0) {
        pPVar1 = (PerFrameStats *)local_68;
      }
                    /* try { // try from 0030131c to 00301333 has its CatchHandler @ 003013fc */
      Krisp::AudioSdk::Nc<short>::process(local_80,param_3,param_4,param_5,param_6,param_1,pPVar1);
      if (param_7 != (undefined2 *)0x0) {
        *param_7 = local_68[0];
        *(undefined4 *)(param_7 + 2) = local_64;
      }
    }
    if ((local_78 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_78 + 1), lVar3 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      FUN_0071245c(local_78);
    }
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0030153c  FUN_0030153c =====

void FUN_0030153c(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_003016fc;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_003015f0;
    *__dest = 0;
    uVar2 = 0;
LAB_003015ac:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_003015f0:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_003015ac;
                    /* try { // try from 00301610 to 00301617 has its CatchHandler @ 003016a8 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 00301620 to 0030162f has its CatchHandler @ 003016b0 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_003016fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00301700  FUN_00301700 =====

void FUN_00301700(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_003018c0;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_003017b4;
    *__dest = 0;
    uVar2 = 0;
LAB_00301770:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_003017b4:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00301770;
                    /* try { // try from 003017d4 to 003017db has its CatchHandler @ 0030186c */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 003017e4 to 003017f3 has its CatchHandler @ 00301874 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_003018c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003018c4  FUN_003018c4 =====

void FUN_003018c4(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00301a80;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00301960;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_00301960:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00301974 to 00301983 has its CatchHandler @ 00301a5c */
  FUN_00303858(local_70,&local_88,param_4);
                    /* try { // try from 0030198c to 0030199b has its CatchHandler @ 00301a1c */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_70);
  if ((local_70[0] & 1) != 0) {
    free(local_60);
  }
  if ((local_88 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_00301a80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00301a84  krispProcessNcFloat =====

void krispProcessNcFloat(float param_1,AudioSdk *param_2,float *param_3,ulong param_4,float *param_5
                        ,ulong param_6,undefined2 *param_7)

{
  PerFrameStats *pPVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  Nc<float> *local_80;
  long *local_78;
  undefined2 local_68 [2];
  undefined4 local_64;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((((param_6 == 0) || (param_4 == 0)) || (param_2 == (AudioSdk *)0x0)) ||
     ((param_3 == (float *)0x0 || (param_5 == (float *)0x0)))) {
    Krisp::AudioSdk::getLogger(param_2);
                    /* try { // try from 00301b68 to 00301b77 has its CatchHandler @ 00301bec */
    FUN_0030153c(local_80,4,"krispProcessNcFloat: Null input argument");
    if ((local_78 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_78 + 1), lVar3 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      FUN_0071245c(local_78);
    }
    uVar4 = 3;
  }
  else {
                    /* try { // try from 00301ad0 to 00301ae3 has its CatchHandler @ 00301c14 */
    FUN_00300de0(&local_80,param_2);
    if (local_80 != (Nc<float> *)0x0) {
      pPVar1 = (PerFrameStats *)0x0;
      if (param_7 != (undefined2 *)0x0) {
        pPVar1 = (PerFrameStats *)local_68;
      }
                    /* try { // try from 00301af8 to 00301b0f has its CatchHandler @ 00301bd8 */
      Krisp::AudioSdk::Nc<float>::process(local_80,param_3,param_4,param_5,param_6,param_1,pPVar1);
      if (param_7 != (undefined2 *)0x0) {
        *param_7 = local_68[0];
        *(undefined4 *)(param_7 + 2) = local_64;
      }
    }
    if ((local_78 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_78 + 1), lVar3 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      FUN_0071245c(local_78);
    }
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00301d18  krispGetNcSessionStats =====

undefined4 krispGetNcSessionStats(AudioSdk *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  AudioSdk *this;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_90;
  long *local_88;
  Nc<float> *local_80;
  long *local_78;
  Nc<short> *local_70;
  long *local_68;
  undefined8 local_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (AudioSdk *)0x0) || (param_2 == (undefined8 *)0x0)) {
    Krisp::AudioSdk::getLogger(param_1);
                    /* try { // try from 00301d7c to 00301d8b has its CatchHandler @ 00302024 */
    FUN_0030204c(local_60,4,"krispGetNcSessionStats: Null input argument");
    plVar2 = plStack_58;
    if ((plStack_58 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_58 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    uVar4 = 3;
    goto LAB_00301e54;
  }
  plStack_58 = (long *)0x0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
                    /* try { // try from 00301d50 to 00301d5b has its CatchHandler @ 00301f20 */
  FUN_00300c9c(&local_70,param_1);
  if (local_70 == (Nc<short> *)0x0) {
                    /* try { // try from 00301dc4 to 00301dcf has its CatchHandler @ 00301f08 */
    this = (AudioSdk *)FUN_00300de0(&local_80,param_1);
    if (local_80 == (Nc<float> *)0x0) {
                    /* try { // try from 00301e7c to 00301e83 has its CatchHandler @ 00301ef0 */
      Krisp::AudioSdk::getLogger(this);
                    /* try { // try from 00301e88 to 00301e97 has its CatchHandler @ 00301edc */
      FUN_00302210(local_90,4,"krispGetNcSessionStats: Invalid session handle");
      if ((local_88 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar3 == 0)) {
        (**(code **)(*local_88 + 0x10))(local_88);
        FUN_0071245c(local_88);
      }
    }
    else {
                    /* try { // try from 00301dd8 to 00301de3 has its CatchHandler @ 00301ef4 */
      Krisp::AudioSdk::Nc<float>::getSessionStats(local_80,(SessionStats *)&local_60);
    }
    if ((local_78 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_78 + 1), lVar3 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      FUN_0071245c(local_78);
    }
    if (local_80 != (Nc<float> *)0x0) goto LAB_00301e18;
    uVar4 = 3;
    plVar2 = local_68;
  }
  else {
                    /* try { // try from 00301d64 to 00301d6b has its CatchHandler @ 00301f0c */
    Krisp::AudioSdk::Nc<short>::getSessionStats(local_70,(SessionStats *)&local_60);
LAB_00301e18:
    uVar4 = 0;
    param_2[1] = plStack_58;
    *param_2 = local_60;
    param_2[3] = uStack_48;
    param_2[2] = uStack_50;
    plVar2 = local_68;
  }
  if ((plVar2 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
LAB_00301e54:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030204c  FUN_0030204c =====

void FUN_0030204c(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_0030220c;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00302100;
    *__dest = 0;
    uVar2 = 0;
LAB_003020bc:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_00302100:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_003020bc;
                    /* try { // try from 00302120 to 00302127 has its CatchHandler @ 003021b8 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 00302130 to 0030213f has its CatchHandler @ 003021c0 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_0030220c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00302210  FUN_00302210 =====

void FUN_00302210(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_003023d0;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_003022c4;
    *__dest = 0;
    uVar2 = 0;
LAB_00302280:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_003022c4:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00302280;
                    /* try { // try from 003022e4 to 003022eb has its CatchHandler @ 0030237c */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 003022f4 to 00302303 has its CatchHandler @ 00302384 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_003023d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003023d4  FUN_003023d4 =====

void FUN_003023d4(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00302594;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00302488;
    *__dest = 0;
    uVar2 = 0;
LAB_00302444:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_00302488:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00302444;
                    /* try { // try from 003024a8 to 003024af has its CatchHandler @ 00302540 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 003024b8 to 003024c7 has its CatchHandler @ 00302548 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_00302594:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00302598  FUN_00302598 =====

void FUN_00302598(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00302754;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00302634;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_00302634:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00302648 to 00302657 has its CatchHandler @ 00302730 */
  FUN_00303858(local_70,&local_88,param_4);
                    /* try { // try from 00302660 to 0030266f has its CatchHandler @ 003026f0 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_70);
  if ((local_70[0] & 1) != 0) {
    free(local_60);
  }
  if ((local_88 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_00302754:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00302758  FUN_00302758 =====

long * FUN_00302758(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x26;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  plVar13 = (long *)param_1[1];
  plVar14 = (long *)*param_2;
  if (plVar13 != (long *)0x0) {
    uVar16 = NEON_cnt(plVar13,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
    }
    else {
      unaff_x26 = plVar14;
      if (plVar13 <= plVar14) {
        uVar2 = 0;
        if (plVar13 != (long *)0x0) {
          uVar2 = (ulong)plVar14 / (ulong)plVar13;
        }
        unaff_x26 = (long *)((long)plVar14 - uVar2 * (long)plVar13);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar8, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((long *)plVar12[1] == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_00302860;
          }
          else if ((long *)((ulong)plVar12[1] & (long)plVar13 - 1U) != unaff_x26) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          plVar5 = (long *)plVar12[1];
          if (plVar5 == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_00302860;
          }
          else {
            if (plVar13 <= plVar5) {
              uVar10 = 0;
              if (plVar13 != (long *)0x0) {
                uVar10 = (ulong)plVar5 / (ulong)plVar13;
              }
              plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar13);
            }
            if (plVar5 != unaff_x26) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar12 = (long *)FUN_00759c3c(0x28);
  lVar9 = param_1[3];
  plVar5 = (long *)*param_4;
  *plVar12 = 0;
  plVar12[1] = (long)plVar14;
  fVar17 = *(float *)(param_1 + 4);
  lVar6 = *plVar5;
  plVar12[4] = 0;
  plVar12[2] = lVar6;
  plVar12[3] = 0;
  plVar5 = plVar12;
  if ((plVar13 == (long *)0x0) || (fVar17 * (float)plVar13 < (float)(lVar9 + 1))) {
    if (plVar13 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    plVar7 = (long *)(uVar10 | (long)plVar13 << 1);
    plVar11 = (long *)(long)((float)(lVar9 + 1) / fVar17);
    if (plVar7 <= plVar11) {
      plVar7 = plVar11;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
                    /* try { // try from 00302930 to 003029b3 has its CatchHandler @ 00302aa4 */
      plVar5 = (long *)FUN_00711ce0(plVar7);
      plVar13 = (long *)param_1[1];
      plVar7 = plVar5;
    }
    if (plVar13 < plVar7) {
LAB_00302948:
      plVar5 = (long *)FUN_00302b48(param_1,plVar7);
    }
    else if (plVar7 < plVar13) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar13 < (long *)0x3) {
LAB_003029b0:
        plVar5 = (long *)FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(plVar13,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_003029b0;
        if ((long *)0x1 < plVar5) {
          plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
        }
      }
      if (plVar7 <= plVar5) {
        plVar7 = plVar5;
      }
      if (plVar7 < plVar13) goto LAB_00302948;
    }
    plVar13 = (long *)param_1[1];
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
      goto joined_r0x00302a28;
    }
    if (plVar14 < plVar13) {
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)plVar14 * 8);
      unaff_x26 = plVar14;
      goto joined_r0x00302a28;
    }
    uVar10 = 0;
    if (plVar13 != (long *)0x0) {
      uVar10 = (ulong)plVar14 / (ulong)plVar13;
    }
    unaff_x26 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
    if (plVar7 == (long *)0x0) goto LAB_003029e4;
LAB_003028d8:
    *plVar12 = *plVar7;
LAB_00302a60:
    *plVar7 = (long)plVar12;
  }
  else {
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
joined_r0x00302a28:
    if (plVar7 != (long *)0x0) goto LAB_003028d8;
LAB_003029e4:
    lVar9 = *plVar1;
    *plVar1 = (long)plVar12;
    *plVar12 = lVar9;
    *(long **)(lVar6 + (long)unaff_x26 * 8) = plVar1;
    if (*plVar12 != 0) {
      plVar14 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar14) {
        uVar10 = 0;
        if (plVar13 != (long *)0x0) {
          uVar10 = (ulong)plVar14 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
      }
      plVar7 = (long *)(*param_1 + (long)plVar14 * 8);
      goto LAB_00302a60;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  lVar4 = *(long *)(lVar4 + 0x28);
joined_r0x00302870:
  if (lVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5,uVar16);
  }
  return plVar12;
LAB_00302860:
  uVar16 = 0;
  lVar4 = *(long *)(lVar4 + 0x28);
  plVar5 = param_1;
  goto joined_r0x00302870;
}


// ===== 00302acc  FUN_00302acc =====

void FUN_00302acc(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  if (((*(char *)(param_1 + 2) != '\0') &&
      (plVar2 = *(long **)((long)__ptr + 0x20), plVar2 != (long *)0x0)) &&
     (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00302b48  FUN_00302b48 =====

void FUN_00302b48(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_00302ccc:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_00302ccc;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 00302d20  FUN_00302d20 =====

long * FUN_00302d20(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x26;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  plVar13 = (long *)param_1[1];
  plVar14 = (long *)*param_2;
  if (plVar13 != (long *)0x0) {
    uVar16 = NEON_cnt(plVar13,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
    }
    else {
      unaff_x26 = plVar14;
      if (plVar13 <= plVar14) {
        uVar2 = 0;
        if (plVar13 != (long *)0x0) {
          uVar2 = (ulong)plVar14 / (ulong)plVar13;
        }
        unaff_x26 = (long *)((long)plVar14 - uVar2 * (long)plVar13);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar8, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((long *)plVar12[1] == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_00302e28;
          }
          else if ((long *)((ulong)plVar12[1] & (long)plVar13 - 1U) != unaff_x26) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          plVar5 = (long *)plVar12[1];
          if (plVar5 == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_00302e28;
          }
          else {
            if (plVar13 <= plVar5) {
              uVar10 = 0;
              if (plVar13 != (long *)0x0) {
                uVar10 = (ulong)plVar5 / (ulong)plVar13;
              }
              plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar13);
            }
            if (plVar5 != unaff_x26) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar12 = (long *)FUN_00759c3c(0x28);
  lVar9 = param_1[3];
  plVar5 = (long *)*param_4;
  *plVar12 = 0;
  plVar12[1] = (long)plVar14;
  fVar17 = *(float *)(param_1 + 4);
  lVar6 = *plVar5;
  plVar12[4] = 0;
  plVar12[2] = lVar6;
  plVar12[3] = 0;
  plVar5 = plVar12;
  if ((plVar13 == (long *)0x0) || (fVar17 * (float)plVar13 < (float)(lVar9 + 1))) {
    if (plVar13 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    plVar7 = (long *)(uVar10 | (long)plVar13 << 1);
    plVar11 = (long *)(long)((float)(lVar9 + 1) / fVar17);
    if (plVar7 <= plVar11) {
      plVar7 = plVar11;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
                    /* try { // try from 00302ef8 to 00302f7b has its CatchHandler @ 0030306c */
      plVar5 = (long *)FUN_00711ce0(plVar7);
      plVar13 = (long *)param_1[1];
      plVar7 = plVar5;
    }
    if (plVar13 < plVar7) {
LAB_00302f10:
      plVar5 = (long *)FUN_00303110(param_1,plVar7);
    }
    else if (plVar7 < plVar13) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar13 < (long *)0x3) {
LAB_00302f78:
        plVar5 = (long *)FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(plVar13,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_00302f78;
        if ((long *)0x1 < plVar5) {
          plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
        }
      }
      if (plVar7 <= plVar5) {
        plVar7 = plVar5;
      }
      if (plVar7 < plVar13) goto LAB_00302f10;
    }
    plVar13 = (long *)param_1[1];
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
      goto joined_r0x00302ff0;
    }
    if (plVar14 < plVar13) {
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)plVar14 * 8);
      unaff_x26 = plVar14;
      goto joined_r0x00302ff0;
    }
    uVar10 = 0;
    if (plVar13 != (long *)0x0) {
      uVar10 = (ulong)plVar14 / (ulong)plVar13;
    }
    unaff_x26 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
    if (plVar7 == (long *)0x0) goto LAB_00302fac;
LAB_00302ea0:
    *plVar12 = *plVar7;
LAB_00303028:
    *plVar7 = (long)plVar12;
  }
  else {
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
joined_r0x00302ff0:
    if (plVar7 != (long *)0x0) goto LAB_00302ea0;
LAB_00302fac:
    lVar9 = *plVar1;
    *plVar1 = (long)plVar12;
    *plVar12 = lVar9;
    *(long **)(lVar6 + (long)unaff_x26 * 8) = plVar1;
    if (*plVar12 != 0) {
      plVar14 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar14) {
        uVar10 = 0;
        if (plVar13 != (long *)0x0) {
          uVar10 = (ulong)plVar14 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
      }
      plVar7 = (long *)(*param_1 + (long)plVar14 * 8);
      goto LAB_00303028;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  lVar4 = *(long *)(lVar4 + 0x28);
joined_r0x00302e38:
  if (lVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5,uVar16);
  }
  return plVar12;
LAB_00302e28:
  uVar16 = 0;
  lVar4 = *(long *)(lVar4 + 0x28);
  plVar5 = param_1;
  goto joined_r0x00302e38;
}


// ===== 00303094  FUN_00303094 =====

void FUN_00303094(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  if (((*(char *)(param_1 + 2) != '\0') &&
      (plVar2 = *(long **)((long)__ptr + 0x20), plVar2 != (long *)0x0)) &&
     (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00303110  FUN_00303110 =====

void FUN_00303110(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_00303294:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_00303294;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 003032e8  FUN_003032e8 =====

void FUN_003032e8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar4 = *param_2;
    uVar10 = NEON_cnt(uVar5,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar7 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar6 = uVar4 - uVar6 * uVar5;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_00303400;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar6) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_00303400;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar1 * uVar5;
            }
            if (uVar7 != uVar6) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  uVar10 = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00303468:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
LAB_00303400:
  FUN_0030346c(local_50);
  __ptr = local_50[0];
  local_50[0] = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if (((local_40 != '\0') && (plVar8 = *(long **)((long)__ptr + 0x20), plVar8 != (long *)0x0)) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar3 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    free(__ptr);
  }
  uVar10 = 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
  goto LAB_00303468;
}


// ===== 0030346c  FUN_0030346c =====

void FUN_0030346c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00303538;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00303538;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00303538:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 003035a0  FUN_003035a0 =====

void FUN_003035a0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar4 = *param_2;
    uVar10 = NEON_cnt(uVar5,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar7 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar6 = uVar4 - uVar6 * uVar5;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_003036b8;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar6) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_003036b8;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar1 * uVar5;
            }
            if (uVar7 != uVar6) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  uVar10 = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00303720:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
LAB_003036b8:
  FUN_00303724(local_50);
  __ptr = local_50[0];
  local_50[0] = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if (((local_40 != '\0') && (plVar8 = *(long **)((long)__ptr + 0x20), plVar8 != (long *)0x0)) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar3 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    free(__ptr);
  }
  uVar10 = 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
  goto LAB_00303720;
}


// ===== 00303724  FUN_00303724 =====

void FUN_00303724(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_003037f0;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_003037f0;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_003037f0:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 00303858  FUN_00303858 =====

void FUN_00303858(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *local_70;
  byte *local_68;
  undefined1 uStack_51;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00303880 to 0030388b has its CatchHandler @ 00303954 */
  FUN_00303974(local_50,&uStack_51);
                    /* try { // try from 0030388c to 0030389b has its CatchHandler @ 0030393c */
  FUN_00303a84(&local_70,local_50,1);
  if ((local_50[0] & 1) != 0) {
    free(local_40);
  }
                    /* try { // try from 003038ac to 003038bb has its CatchHandler @ 0030392c */
  FUN_0030b424(param_1,param_2,&local_70);
  pbVar3 = local_70;
  if (local_70 != (byte *)0x0) {
    while (pbVar2 = local_68, pbVar2 != pbVar3) {
      local_68 = pbVar2 + -0x18;
      if ((*local_68 & 1) != 0) {
        free(*(void **)(pbVar2 + -8));
      }
    }
    local_68 = pbVar3;
    free(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00303974  FUN_00303974 =====

void FUN_00303974(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long local_160 [3];
  undefined **appuStack_148 [8];
  byte local_108;
  void *local_f8;
  undefined1 auStack_e0 [152];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00303c58(local_160);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 003039c4 to 003039d7 has its CatchHandler @ 00303a5c */
  FUN_00303e0c(local_160 + 2,pbVar2,uVar1);
  FUN_00718470(param_1,appuStack_148);
  puVar5 = PTR_PTR_007a10f0;
  local_160[0] = *(long *)PTR_PTR_007a10f0;
  uVar3 = *(undefined8 *)(PTR_PTR_007a10f0 + 0x48);
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
  appuStack_148[0] = &PTR_FUN_0079be30;
  local_160[2] = uVar3;
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  FUN_00716098(appuStack_148);
  FUN_00717d80(local_160,puVar5 + 8);
  thunk_FUN_00715e00(auStack_e0);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00303a84  FUN_00303a84 =====

void FUN_00303a84(long *param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *local_88;
  undefined8 *local_80;
  long *local_78;
  undefined1 local_70;
  long *local_68;
  undefined8 **ppuStack_60;
  undefined8 **local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_70 = 0;
  local_78 = param_1;
  if (param_3 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_3) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00303b98 to 00303b9f has its CatchHandler @ 00303ba0 */
        uVar3 = FUN_00304228(param_1);
                    /* catch() { ... } // from try @ 00303ae4 with catch @ 00303ba0
                       catch() { ... } // from try @ 00303b98 with catch @ 00303ba0 */
        FUN_0030419c(&local_78);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar3);
        }
      }
      goto LAB_00303bd8;
    }
    lVar4 = param_3 * 0x18;
                    /* try { // try from 00303ae4 to 00303aeb has its CatchHandler @ 00303ba0 */
    local_88 = (undefined8 *)FUN_00759c3c(lVar4);
    *param_1 = (long)local_88;
    param_1[1] = (long)local_88;
    param_1[2] = (long)(local_88 + param_3 * 3);
    ppuStack_60 = &local_88;
    local_58 = &local_80;
    local_50 = 0;
    local_80 = local_88;
    local_68 = param_1 + 2;
    do {
      while ((*param_2 & 1) != 0) {
                    /* try { // try from 00303b40 to 00303b43 has its CatchHandler @ 00303ba8 */
        FUN_002fb36c(local_80,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
        puVar2 = local_80 + 3;
        lVar4 = lVar4 + -0x18;
        param_2 = param_2 + 0x18;
        local_80 = puVar2;
        if (lVar4 == 0) goto LAB_00303b5c;
      }
      uVar5 = *(undefined8 *)(param_2 + 8);
      uVar3 = *(undefined8 *)param_2;
      local_80[2] = *(undefined8 *)(param_2 + 0x10);
      puVar2 = local_80 + 3;
      local_80[1] = uVar5;
      *local_80 = uVar3;
      lVar4 = lVar4 + -0x18;
      param_2 = param_2 + 0x18;
      local_80 = puVar2;
    } while (lVar4 != 0);
LAB_00303b5c:
    param_1[1] = (long)puVar2;
    local_80 = puVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00303bd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00303bdc  FUN_00303bdc =====

void FUN_00303bdc(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = (byte *)param_1[1];
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        free(*(void **)(pbVar1 + -8));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar2;
  free(pbVar3);
  return;
}


// ===== 00303c58  FUN_00303c58 =====

void FUN_00303c58(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_007a1100;
  param_1[0x16] = 0;
  puVar1 = PTR_PTR_007a10f0;
  lVar3 = *(long *)(PTR_PTR_007a10f0 + 0x10);
  param_1[0x10] = (long)(puVar2 + 0x68);
  param_1[2] = (long)(puVar2 + 0x40);
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *param_1 = lVar3;
  lVar3 = *(long *)(lVar3 + -0x18);
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + lVar3) = uVar4;
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00303cc4 to 00303ccf has its CatchHandler @ 00303d78 */
  FUN_00715fc0(lVar3,param_1 + 3);
  lVar5 = *(long *)(puVar1 + 0x20);
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined4 *)(lVar3 + 0x90) = 0xffffffff;
  lVar3 = *(long *)(puVar1 + 8);
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  param_1[2] = lVar5;
  *(undefined8 *)((long)(param_1 + 2) + *(long *)(lVar5 + -0x18)) = uVar4;
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *param_1 = lVar3;
  *(undefined8 *)((long)param_1 + *(long *)(lVar3 + -0x18)) = uVar4;
  *param_1 = (long)(puVar2 + 0x18);
  param_1[0x10] = (long)(puVar2 + 0x68);
  param_1[2] = (long)(puVar2 + 0x40);
                    /* try { // try from 00303d14 to 00303d1b has its CatchHandler @ 00303d58 */
  FUN_007160dc(param_1 + 3);
  param_1[3] = (long)(PTR_DAT_007a10f8 + 0x10);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x18;
  return;
}


// ===== 00303d8c  FUN_00303d8c =====

void FUN_00303d8c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_007a10f0;
  lVar5 = *(long *)PTR_PTR_007a10f0;
  uVar1 = *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
  lVar2 = *(long *)(PTR_PTR_007a10f0 + 0x48);
  *param_1 = lVar5;
  puVar4 = PTR_DAT_007a10f8;
  *(undefined8 *)((long)param_1 + *(long *)(lVar5 + -0x18)) = uVar1;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[2] = lVar2;
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    free((void *)param_1[0xd]);
  }
  FUN_00716098(param_1 + 3);
  FUN_00717d80(param_1,puVar3 + 8);
  thunk_FUN_00715e00(param_1 + 0x10);
  return;
}


// ===== 00303e0c  FUN_00303e0c =====

long * FUN_00303e0c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  char local_70 [16];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00303e40 to 00303e4b has its CatchHandler @ 00303f58 */
  FUN_00716f78(local_70,param_1);
  if (local_70[0] != '\0') {
    lVar6 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    uVar2 = *(uint *)(lVar6 + 8);
    if (*(int *)(lVar6 + 0x90) == -1) {
                    /* try { // try from 00303e74 to 00303e83 has its CatchHandler @ 00303f48 */
      FUN_00715df0(auStack_60,lVar6);
                    /* try { // try from 00303e84 to 00303ea3 has its CatchHandler @ 00303f38 */
      plVar5 = (long *)FUN_0073220c(auStack_60,PTR_DAT_007a1108);
      uVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      FUN_00732094(auStack_60);
      *(uint *)(lVar6 + 0x90) = uVar4 & 0xff;
    }
    lVar1 = param_2 + param_3;
    if ((uVar2 & 0xb0) != 0x20) {
      lVar1 = param_2;
    }
                    /* try { // try from 00303ed0 to 00303edb has its CatchHandler @ 00303f48 */
    lVar6 = FUN_00303fb0(uVar7,param_2,lVar1,param_2 + param_3,lVar6);
    if (lVar6 == 0) {
      lVar6 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00303ef4 to 00303efb has its CatchHandler @ 00303f34 */
      FUN_00715ee0(lVar6,*(uint *)(lVar6 + 0x20) | 5);
    }
  }
  FUN_00716fdc(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00303fb0  FUN_00303fb0 =====

long * FUN_00303fb0(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) {
LAB_00304138:
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return param_1;
    }
  }
  else {
    lVar4 = param_3 - param_2;
    __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
    if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
      __n = 0;
    }
    if ((lVar4 < 1) ||
       (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar2 == lVar4)) {
      if (0 < (long)__n) {
        if (__n < 0x17) {
          pvVar5 = (void *)((ulong)&local_80 | 1);
          local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
        }
        else {
          uVar3 = (__n & 0x7ffffffffffffff8) + 8;
          if ((__n | 7) != 0x17) {
            uVar3 = __n | 7;
          }
          pvVar5 = (void *)FUN_00759c3c(uVar3 + 1);
          local_80 = uVar3 + 1 | 1;
          local_78 = __n;
          local_70 = pvVar5;
        }
        memset(pvVar5,param_6,__n);
        *(undefined1 *)((long)pvVar5 + __n) = 0;
        pvVar5 = local_70;
        if ((local_80 & 1) == 0) {
          pvVar5 = (void *)((long)&local_80 + 1);
        }
                    /* try { // try from 003040b0 to 003040bb has its CatchHandler @ 0030416c */
        uVar3 = (**(code **)(*param_1 + 0x60))(param_1,pvVar5,__n);
        if ((local_80 & 1) != 0) {
          free(local_70);
        }
        if (uVar3 != __n) {
          param_1 = (long *)0x0;
          goto LAB_00304138;
        }
      }
      param_4 = param_4 - param_3;
      if ((param_4 < 1) ||
         (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar4 == param_4)) {
        *(undefined8 *)(param_5 + 0x18) = 0;
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return param_1;
        }
        goto LAB_00304198;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return (long *)0x0;
    }
  }
LAB_00304198:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030419c  FUN_0030419c =====

void FUN_0030419c(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar2 = (undefined8 *)*param_1;
    pbVar3 = (byte *)*puVar2;
    if (pbVar3 != (byte *)0x0) {
      pbVar1 = (byte *)puVar2[1];
      pbVar4 = pbVar3;
      if (pbVar1 != pbVar3) {
        do {
          pbVar4 = pbVar1 + -0x18;
          if ((*pbVar4 & 1) != 0) {
            free(*(void **)(pbVar1 + -8));
          }
          pbVar1 = pbVar4;
        } while (pbVar4 != pbVar3);
        pbVar4 = *(byte **)*param_1;
      }
      puVar2[1] = pbVar3;
      free(pbVar4);
      return;
    }
  }
  return;
}


// ===== 00304228  FUN_00304228 =====

void FUN_00304228(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0030423c  FUN_0030423c =====

void FUN_0030423c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 8);
    pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x10);
    while (pbVar1 = pbVar3, pbVar1 != pbVar2) {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        free(*(void **)(pbVar1 + -8));
      }
    }
    return;
  }
  return;
}


// ===== 0030429c  _INIT_6 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_6(void)

{
  DAT_007aac08 = 0x3f800000;
  DAT_007aabf0 = 0;
  DAT_007aabe8 = 0;
  uRam00000000007aac00 = 0;
  _DAT_007aabf8 = 0;
  __cxa_atexit(FUN_002ff7c4,&DAT_007aabe8,&PTR_LOOP_0075ec90);
  DAT_007aac18 = 0;
  DAT_007aac10 = 0;
  uRam00000000007aac28 = 0;
  _DAT_007aac20 = 0;
  DAT_007aac30 = 0x3f800000;
  __cxa_atexit(FUN_002ff854,&DAT_007aac10,&PTR_LOOP_0075ec90);
  __cxa_atexit(PTR_FUN_007a1110,&DAT_007aac38,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00304324  Krisp::AudioSdk::Vad<float>::create =====

/* Krisp::AudioSdk::Vad<float>::create(Krisp::AudioSdk::VadSessionConfig const&) */

void __thiscall Krisp::AudioSdk::Vad<float>::create(Vad<float> *this,VadSessionConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  KmsAdapter *pKVar7;
  VadSession<float> *pVVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *in_x8;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long local_90;
  long local_88;
  VadSession<float> *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)FUN_00759c3c(0x30);
  puVar4 = PTR_DAT_007a1118;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  puVar4 = PTR_DAT_007a1120;
  plVar6[4] = 0;
  plVar6[5] = 0;
  in_x8[1] = (long)plVar6;
  pKVar7 = (KmsAdapter *)(plVar6 + 3);
  *(undefined **)pKVar7 = puVar4 + 0x10;
  *in_x8 = (long)pKVar7;
                    /* try { // try from 0030438c to 00304393 has its CatchHandler @ 003048c0 */
  KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 003043a4 to 003043a7 has its CatchHandler @ 003048b0 */
  pKVar7 = (KmsAdapter *)(**(code **)(*local_68 + 0x28))(local_68,*(undefined4 *)this);
  if (((ulong)pKVar7 & 1) == 0) {
    uVar13 = 1;
  }
  else {
                    /* try { // try from 003043ac to 003043b3 has its CatchHandler @ 00304828 */
    KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 003043c4 to 003043c7 has its CatchHandler @ 00304818 */
    pKVar7 = (KmsAdapter *)(**(code **)(*local_78 + 0x30))(local_78,*(undefined4 *)(this + 4));
    plVar6 = local_70;
    uVar13 = (uint)pKVar7 ^ 1;
    if ((local_70 != (long *)0x0) &&
       (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_70 + 1),
       pKVar7 == (KmsAdapter *)0x0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
    }
  }
  plVar6 = local_60;
  if ((local_60 != (long *)0x0) &&
     (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_60 + 1),
     pKVar7 == (KmsAdapter *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
  }
  if ((uVar13 & 1) == 0) {
    if (*(long *)(this + 8) != 0) {
                    /* try { // try from 00304440 to 00304447 has its CatchHandler @ 003048a0 */
      KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 00304454 to 0030445b has its CatchHandler @ 00304890 */
      (**(code **)(*local_a0 + 0x20))(&local_90);
                    /* try { // try from 0030445c to 00304463 has its CatchHandler @ 0030487c */
      plVar6 = (long *)FUN_00759c3c(0x30);
      puVar4 = PTR_DAT_007a1128;
      plVar6[2] = 0;
      puVar5 = PTR_DAT_007a1130;
      *plVar6 = (long)(puVar4 + 0x10);
      plVar6[1] = 0;
      plVar14 = plVar6 + 3;
      *plVar14 = (long)(puVar5 + 0x10);
      plVar6[4] = local_90;
      plVar6[5] = local_88;
      if (local_88 != 0) {
        FUN_00755c20(1,local_88 + 0x10);
      }
      local_78 = plVar14;
      local_70 = plVar6;
                    /* try { // try from 003044ac to 003044b3 has its CatchHandler @ 0030486c */
      pVVar8 = (VadSession<float> *)FUN_00759c3c(0x30);
      local_78 = (long *)0x0;
      local_70 = (long *)0x0;
                    /* try { // try from 003044c0 to 003044c7 has its CatchHandler @ 00304854 */
      local_68 = plVar14;
      local_60 = plVar6;
      VadSession<float>::VadSession(pVVar8,(shared_ptr *)&local_68);
      plVar6 = local_60;
      local_80 = pVVar8;
      if (local_60 == (long *)0x0) {
        plVar6 = (long *)(*in_x8 + 8);
LAB_0030452c:
                    /* try { // try from 0030452c to 00304533 has its CatchHandler @ 0030482c */
        pVVar8 = local_80;
        plVar10 = (long *)FUN_00759c3c(0x20);
        puVar4 = PTR_DAT_007a1138;
        plVar10[2] = 0;
        plVar10[3] = (long)pVVar8;
        *plVar10 = (long)(puVar4 + 0x10);
        plVar10[1] = 0;
        plVar14 = (long *)plVar6[1];
        *plVar6 = (long)pVVar8;
        plVar6[1] = (long)plVar10;
      }
      else {
        lVar9 = FUN_00755c50(0xffffffffffffffff,local_60 + 1);
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
          lVar9 = *in_x8;
        }
        else {
          lVar9 = *in_x8;
        }
        plVar6 = (long *)(lVar9 + 8);
        if (local_80 != (VadSession<float> *)0x0) goto LAB_0030452c;
        plVar14 = (long *)plVar6[1];
        *plVar6 = 0;
        plVar6[1] = 0;
      }
      local_80 = (VadSession<float> *)0x0;
      if (plVar14 != (long *)0x0) {
        local_80 = (VadSession<float> *)0x0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar14 + 1);
        if (lVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FUN_0071245c(plVar14);
        }
      }
      pVVar8 = local_80;
      local_80 = (VadSession<float> *)0x0;
      if (pVVar8 != (VadSession<float> *)0x0) {
        plVar6 = *(long **)((long)pVVar8 + 0x18);
        if ((plVar6 != (long *)0x0) &&
           (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
        }
        plVar6 = *(long **)((long)pVVar8 + 8);
        if ((plVar6 != (long *)0x0) &&
           (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
        }
        free(pVVar8);
      }
      plVar6 = local_70;
      if ((local_70 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (local_88 != 0) {
        FUN_0071245c();
      }
      if ((local_98 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_98 + 1), lVar9 == 0)) {
        (**(code **)(*local_98 + 0x10))(local_98);
        FUN_0071245c(local_98);
      }
                    /* try { // try from 00304678 to 0030467f has its CatchHandler @ 0030484c */
      plVar6 = (long *)FUN_00759c3c(0x40);
      puVar4 = PTR_DAT_007a1140;
      uVar11 = *(undefined8 *)(this + 8);
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar6[7] = 0;
      *plVar6 = (long)(puVar4 + 0x10);
      plVar14 = plVar6 + 3;
      plVar6[4] = 0;
      *plVar14 = 0;
      plVar6[6] = 0;
      plVar6[5] = 0;
      local_68 = plVar14;
      local_60 = plVar6;
                    /* try { // try from 003046b4 to 003046bb has its CatchHandler @ 003048c8 */
      FUN_00714378(plVar14,uVar11);
      lVar9 = *(long *)(this + 8);
      uVar1 = *(undefined4 *)this;
      uVar2 = *(undefined4 *)(this + 4);
      plVar6[6] = *(long *)(lVar9 + 0x18);
      lVar12 = *in_x8;
      plVar6[7] = *(long *)(lVar9 + 0x20);
      pVVar8 = *(VadSession<float> **)(lVar12 + 8);
      local_b0 = plVar14;
      local_a8 = plVar6;
      FUN_00755c20(1,plVar6 + 1);
                    /* try { // try from 003046ec to 003046ff has its CatchHandler @ 0030483c */
      VadSession<float>::initSession(pVVar8,uVar1,uVar2,&local_b0);
      plVar6 = local_a8;
      if ((local_a8 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
                    /* try { // try from 00304738 to 0030473b has its CatchHandler @ 003048c8 */
      VadSession<float>::startSession(*(VadSession<float> **)(*in_x8 + 8));
      plVar6 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_003048f4;
    }
    plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 003047c0 to 003047cb has its CatchHandler @ 00304804 */
    FUN_00712630(plVar6,"Vad::create: Model info is empty!");
  }
  else {
    plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 003047a4 to 003047af has its CatchHandler @ 00304808 */
    FUN_00712630(plVar6,"Vad::create: Unsupported sampling rates or frame duration!");
  }
  *plVar6 = (long)(PTR_DAT_007a0fb0 + 0x10);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 003047ec to 00304803 has its CatchHandler @ 003048a8 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar6,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
  }
LAB_003048f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003048f8  FUN_003048f8 =====

void FUN_003048f8(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)__ptr + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = *(long **)((long)__ptr + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 0030499c  FUN_0030499c =====

void FUN_0030499c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 003049ec  FUN_003049ec =====

void FUN_003049ec(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00304a3c  FUN_00304a3c =====

void FUN_00304a3c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00304a8c  Krisp::AudioSdk::Vad<short>::create =====

/* Krisp::AudioSdk::Vad<short>::create(Krisp::AudioSdk::VadSessionConfig const&) */

void __thiscall Krisp::AudioSdk::Vad<short>::create(Vad<short> *this,VadSessionConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  KmsAdapter *pKVar7;
  VadSession<short> *pVVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *in_x8;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long local_90;
  long local_88;
  VadSession<short> *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)FUN_00759c3c(0x30);
  puVar4 = PTR_DAT_007a1148;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  puVar4 = PTR_DAT_007a1150;
  plVar6[4] = 0;
  plVar6[5] = 0;
  in_x8[1] = (long)plVar6;
  pKVar7 = (KmsAdapter *)(plVar6 + 3);
  *(undefined **)pKVar7 = puVar4 + 0x10;
  *in_x8 = (long)pKVar7;
                    /* try { // try from 00304af4 to 00304afb has its CatchHandler @ 00305028 */
  KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 00304b0c to 00304b0f has its CatchHandler @ 00305018 */
  pKVar7 = (KmsAdapter *)(**(code **)(*local_68 + 0x28))(local_68,*(undefined4 *)this);
  if (((ulong)pKVar7 & 1) == 0) {
    uVar13 = 1;
  }
  else {
                    /* try { // try from 00304b14 to 00304b1b has its CatchHandler @ 00304f90 */
    KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 00304b2c to 00304b2f has its CatchHandler @ 00304f80 */
    pKVar7 = (KmsAdapter *)(**(code **)(*local_78 + 0x30))(local_78,*(undefined4 *)(this + 4));
    plVar6 = local_70;
    uVar13 = (uint)pKVar7 ^ 1;
    if ((local_70 != (long *)0x0) &&
       (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_70 + 1),
       pKVar7 == (KmsAdapter *)0x0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
    }
  }
  plVar6 = local_60;
  if ((local_60 != (long *)0x0) &&
     (pKVar7 = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_60 + 1),
     pKVar7 == (KmsAdapter *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    pKVar7 = (KmsAdapter *)FUN_0071245c(plVar6);
  }
  if ((uVar13 & 1) == 0) {
    if (*(long *)(this + 8) != 0) {
                    /* try { // try from 00304ba8 to 00304baf has its CatchHandler @ 00305008 */
      KmsAdapter::getInstance(pKVar7);
                    /* try { // try from 00304bbc to 00304bc3 has its CatchHandler @ 00304ff8 */
      (**(code **)(*local_a0 + 0x20))(&local_90);
                    /* try { // try from 00304bc4 to 00304bcb has its CatchHandler @ 00304fe4 */
      plVar6 = (long *)FUN_00759c3c(0x30);
      puVar4 = PTR_DAT_007a1158;
      plVar6[2] = 0;
      puVar5 = PTR_DAT_007a1160;
      *plVar6 = (long)(puVar4 + 0x10);
      plVar6[1] = 0;
      plVar14 = plVar6 + 3;
      *plVar14 = (long)(puVar5 + 0x10);
      plVar6[4] = local_90;
      plVar6[5] = local_88;
      if (local_88 != 0) {
        FUN_00755c20(1,local_88 + 0x10);
      }
      local_78 = plVar14;
      local_70 = plVar6;
                    /* try { // try from 00304c14 to 00304c1b has its CatchHandler @ 00304fd4 */
      pVVar8 = (VadSession<short> *)FUN_00759c3c(0x30);
      local_78 = (long *)0x0;
      local_70 = (long *)0x0;
                    /* try { // try from 00304c28 to 00304c2f has its CatchHandler @ 00304fbc */
      local_68 = plVar14;
      local_60 = plVar6;
      VadSession<short>::VadSession(pVVar8,(shared_ptr *)&local_68);
      plVar6 = local_60;
      local_80 = pVVar8;
      if (local_60 == (long *)0x0) {
        plVar6 = (long *)(*in_x8 + 8);
LAB_00304c94:
                    /* try { // try from 00304c94 to 00304c9b has its CatchHandler @ 00304f94 */
        pVVar8 = local_80;
        plVar10 = (long *)FUN_00759c3c(0x20);
        puVar4 = PTR_DAT_007a1168;
        plVar10[2] = 0;
        plVar10[3] = (long)pVVar8;
        *plVar10 = (long)(puVar4 + 0x10);
        plVar10[1] = 0;
        plVar14 = (long *)plVar6[1];
        *plVar6 = (long)pVVar8;
        plVar6[1] = (long)plVar10;
      }
      else {
        lVar9 = FUN_00755c50(0xffffffffffffffff,local_60 + 1);
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
          lVar9 = *in_x8;
        }
        else {
          lVar9 = *in_x8;
        }
        plVar6 = (long *)(lVar9 + 8);
        if (local_80 != (VadSession<short> *)0x0) goto LAB_00304c94;
        plVar14 = (long *)plVar6[1];
        *plVar6 = 0;
        plVar6[1] = 0;
      }
      local_80 = (VadSession<short> *)0x0;
      if (plVar14 != (long *)0x0) {
        local_80 = (VadSession<short> *)0x0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar14 + 1);
        if (lVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FUN_0071245c(plVar14);
        }
      }
      pVVar8 = local_80;
      local_80 = (VadSession<short> *)0x0;
      if (pVVar8 != (VadSession<short> *)0x0) {
        plVar6 = *(long **)((long)pVVar8 + 0x18);
        if ((plVar6 != (long *)0x0) &&
           (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
        }
        plVar6 = *(long **)((long)pVVar8 + 8);
        if ((plVar6 != (long *)0x0) &&
           (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
        }
        free(pVVar8);
      }
      plVar6 = local_70;
      if ((local_70 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (local_88 != 0) {
        FUN_0071245c();
      }
      if ((local_98 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_98 + 1), lVar9 == 0)) {
        (**(code **)(*local_98 + 0x10))(local_98);
        FUN_0071245c(local_98);
      }
                    /* try { // try from 00304de0 to 00304de7 has its CatchHandler @ 00304fb4 */
      plVar6 = (long *)FUN_00759c3c(0x40);
      puVar4 = PTR_DAT_007a1140;
      uVar11 = *(undefined8 *)(this + 8);
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar6[7] = 0;
      *plVar6 = (long)(puVar4 + 0x10);
      plVar14 = plVar6 + 3;
      plVar6[4] = 0;
      *plVar14 = 0;
      plVar6[6] = 0;
      plVar6[5] = 0;
      local_68 = plVar14;
      local_60 = plVar6;
                    /* try { // try from 00304e1c to 00304e23 has its CatchHandler @ 00305030 */
      FUN_00714378(plVar14,uVar11);
      lVar9 = *(long *)(this + 8);
      uVar1 = *(undefined4 *)this;
      uVar2 = *(undefined4 *)(this + 4);
      plVar6[6] = *(long *)(lVar9 + 0x18);
      lVar12 = *in_x8;
      plVar6[7] = *(long *)(lVar9 + 0x20);
      pVVar8 = *(VadSession<short> **)(lVar12 + 8);
      local_b0 = plVar14;
      local_a8 = plVar6;
      FUN_00755c20(1,plVar6 + 1);
                    /* try { // try from 00304e54 to 00304e67 has its CatchHandler @ 00304fa4 */
      VadSession<short>::initSession(pVVar8,uVar1,uVar2,&local_b0);
      plVar6 = local_a8;
      if ((local_a8 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
                    /* try { // try from 00304ea0 to 00304ea3 has its CatchHandler @ 00305030 */
      VadSession<short>::startSession(*(VadSession<short> **)(*in_x8 + 8));
      plVar6 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar9 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0030505c;
    }
    plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 00304f28 to 00304f33 has its CatchHandler @ 00304f6c */
    FUN_00712630(plVar6,"Vad::create: Model info is empty!");
  }
  else {
    plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 00304f0c to 00304f17 has its CatchHandler @ 00304f70 */
    FUN_00712630(plVar6,"Vad::create: Unsupported sampling rates or frame duration!");
  }
  *plVar6 = (long)(PTR_DAT_007a0fb0 + 0x10);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00304f54 to 00304f6b has its CatchHandler @ 00305010 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar6,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
  }
LAB_0030505c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305060  FUN_00305060 =====

void FUN_00305060(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)__ptr + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = *(long **)((long)__ptr + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00305104  FUN_00305104 =====

void FUN_00305104(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00305154  FUN_00305154 =====

void FUN_00305154(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 003051a4  Krisp::AudioSdk::Vad<short>::process =====

/* Krisp::AudioSdk::Vad<short>::process(short const*, unsigned long, float*) */

void __thiscall
Krisp::AudioSdk::Vad<short>::process(Vad<short> *this,short *param_1,ulong param_2,float *param_3)

{
  VadSession<short>::process(*(VadSession<short> **)(this + 8),param_1,param_2,param_3);
  return;
}


// ===== 003051ac  Krisp::AudioSdk::Vad<float>::process =====

/* Krisp::AudioSdk::Vad<float>::process(float const*, unsigned long, float*) */

void __thiscall
Krisp::AudioSdk::Vad<float>::process(Vad<float> *this,float *param_1,ulong param_2,float *param_3)

{
  VadSession<float>::process(*(VadSession<float> **)(this + 8),param_1,param_2,param_3);
  return;
}


// ===== 003051b4  FUN_003051b4 =====

void FUN_003051b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f738;
  FUN_00712454();
  return;
}


// ===== 003051c8  FUN_003051c8 =====

void FUN_003051c8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1118 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003051fc  FUN_003051fc =====

void FUN_003051fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00305204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00305208  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0030520c  Krisp::AudioSdk::Vad<float>::~Vad =====

/* Krisp::AudioSdk::Vad<float>::~Vad() */

void __thiscall Krisp::AudioSdk::Vad<float>::~Vad(Vad<float> *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__Vad_0075f788;
  if (*(VadSession<float> **)(this + 8) != (VadSession<float> *)0x0) {
                    /* try { // try from 00305244 to 0030524f has its CatchHandler @ 003052a4 */
    VadSession<float>::stopSession(*(VadSession<float> **)(this + 8));
    VadSession<float>::destroySession(*(VadSession<float> **)(this + 8));
  }
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003052e0  Krisp::AudioSdk::Vad<float>::~Vad =====

/* Krisp::AudioSdk::Vad<float>::~Vad() */

void __thiscall Krisp::AudioSdk::Vad<float>::~Vad(Vad<float> *this)

{
  ~Vad(this);
  free(this);
  return;
}


// ===== 00305304  FUN_00305304 =====

void FUN_00305304(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_003054c4;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_003053b8;
    *__dest = 0;
    uVar2 = 0;
LAB_00305374:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_003053b8:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00305374;
                    /* try { // try from 003053d8 to 003053df has its CatchHandler @ 00305470 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 003053e8 to 003053f7 has its CatchHandler @ 00305478 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_003054c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003054c8  FUN_003054c8 =====

void FUN_003054c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f7b8;
  FUN_00712454();
  return;
}


// ===== 003054dc  FUN_003054dc =====

void FUN_003054dc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1128 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00305510  FUN_00305510 =====

void FUN_00305510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00305518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0030551c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00305520  Krisp::AudioSdk::KmsForVad<float>::~KmsForVad =====

/* Krisp::AudioSdk::KmsForVad<float>::~KmsForVad() */

void __thiscall Krisp::AudioSdk::KmsForVad<float>::~KmsForVad(KmsForVad<float> *this)

{
  *(undefined **)this = PTR_DAT_007a1130 + 0x10;
  if (*(long *)(this + 0x10) != 0) {
    FUN_0071245c();
    return;
  }
  return;
}


// ===== 00305544  Krisp::AudioSdk::KmsForVad<float>::~KmsForVad =====

/* Krisp::AudioSdk::KmsForVad<float>::~KmsForVad() */

void __thiscall Krisp::AudioSdk::KmsForVad<float>::~KmsForVad(KmsForVad<float> *this)

{
  *(undefined ***)this = &PTR__KmsForVad_0075f808;
  if (*(long *)(this + 0x10) != 0) {
    FUN_0071245c(*(long *)(this + 0x10));
  }
  free(this);
  return;
}


// ===== 00305584  Krisp::AudioSdk::KmsForVad<float>::createStream =====

/* Krisp::AudioSdk::KmsForVad<float>::createStream(KRISP::Audio::StreamDescriptor const&) */

undefined8 __thiscall
Krisp::AudioSdk::KmsForVad<float>::createStream(KmsForVad<float> *this,StreamDescriptor *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 003055d4 to 003055db has its CatchHandler @ 00305680 */
        uVar3 = FUN_0030c8bc(*(long *)(this + 8),param_1);
        lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == lVar5) {
          return uVar3;
        }
        goto LAB_003056a4;
      }
    }
  }
  uVar3 = FUN_00753a74(0x10);
                    /* try { // try from 0030563c to 00305647 has its CatchHandler @ 00305670 */
  FUN_00712630(uVar3,"KmsForVad::createStream: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 00305658 to 0030566f has its CatchHandler @ 00305680 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar3,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_003056a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003056a8  Krisp::AudioSdk::KmsForVad<float>::createProcessor =====

/* Krisp::AudioSdk::KmsForVad<float>::createProcessor(std::__ndk1::shared_ptr<KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor> > const&, KRISP::Audio::VadV2::Configuration const&,
   std::__ndk1::shared_ptr<KRISP::Audio::VadV2::ResultHandler> const&) */

undefined8 __thiscall
Krisp::AudioSdk::KmsForVad<float>::createProcessor
          (KmsForVad<float> *this,shared_ptr *param_1,Configuration *param_2,shared_ptr *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = (long *)0x0;
  if (*(long *)(this + 0x10) != 0) {
    local_50 = (long *)FUN_007124b4();
    if (local_50 != (long *)0x0) {
      lVar4 = *(long *)(this + 8);
      local_58 = lVar4;
      if (lVar4 != 0) {
        local_68 = *(undefined8 *)param_3;
        local_60 = *(long **)(param_3 + 8);
        uVar3 = **(undefined8 **)param_1;
        if (local_60 != (long *)0x0) {
          FUN_00755c20(1,local_60 + 1);
        }
                    /* try { // try from 00305720 to 00305733 has its CatchHandler @ 00305804 */
        uVar3 = FUN_00337c68(lVar4,uVar3,param_2,&local_68);
        plVar2 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar4 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_50;
        if ((local_50 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar4 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return uVar3;
        }
        goto LAB_00305848;
      }
    }
  }
  uVar3 = FUN_00753a74(0x10);
                    /* try { // try from 003057d0 to 003057db has its CatchHandler @ 0030581c */
  FUN_00712630(uVar3,"KmsForVad::createProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 003057ec to 00305803 has its CatchHandler @ 00305814 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar3,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_00305848:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030584c  Krisp::AudioSdk::KmsForVad<float>::enableProcessor =====

/* Krisp::AudioSdk::KmsForVad<float>::enableProcessor(KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForVad<float>::enableProcessor
          (KmsForVad<float> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 003058a4 to 003058af has its CatchHandler @ 00305974 */
        FUN_0030ca8c(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_00305998;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 00305930 to 0030593b has its CatchHandler @ 00305964 */
  FUN_00712630(uVar4,"KmsForVad::enableProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 0030594c to 00305963 has its CatchHandler @ 00305974 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_00305998:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030599c  Krisp::AudioSdk::KmsForVad<float>::disableProcessor =====

/* Krisp::AudioSdk::KmsForVad<float>::disableProcessor(KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForVad<float>::disableProcessor
          (KmsForVad<float> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 003059f4 to 003059ff has its CatchHandler @ 00305ac4 */
        FUN_0030cd34(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_00305ae8;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 00305a80 to 00305a8b has its CatchHandler @ 00305ab4 */
  FUN_00712630(uVar4,"KmsForVad::disableProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 00305a9c to 00305ab3 has its CatchHandler @ 00305ac4 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_00305ae8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305aec  Krisp::AudioSdk::KmsForVad<float>::destroyProcessor =====

/* Krisp::AudioSdk::KmsForVad<float>::destroyProcessor(KRISP::SDK::Stream<float,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForVad<float>::destroyProcessor
          (KmsForVad<float> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 00305b44 to 00305b4f has its CatchHandler @ 00305c14 */
        FUN_0030ce00(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_00305c38;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 00305bd0 to 00305bdb has its CatchHandler @ 00305c04 */
  FUN_00712630(uVar4,"KmsForVad::destroyProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 00305bec to 00305c03 has its CatchHandler @ 00305c14 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_00305c38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305c3c  FUN_00305c3c =====

void FUN_00305c3c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00305c8c  FUN_00305c8c =====

void FUN_00305c8c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00305cdc  FUN_00305cdc =====

void FUN_00305cdc(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00305d00  FUN_00305d00 =====

void FUN_00305d00(long param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)__ptr + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = *(long **)((long)__ptr + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00305da0  FUN_00305da0 =====

long FUN_00305da0(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk114default_deleteIN5Kri_007a1170) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00305dbc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00305dc0  FUN_00305dc0 =====

void FUN_00305dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f8c8;
  FUN_00712454();
  return;
}


// ===== 00305dd4  FUN_00305dd4 =====

void FUN_00305dd4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1140 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00305e08  FUN_00305e08 =====

void FUN_00305e08(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x28));
  return;
}


// ===== 00305e1c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00305e20  FUN_00305e20 =====

void FUN_00305e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f918;
  FUN_00712454();
  return;
}


// ===== 00305e34  FUN_00305e34 =====

void FUN_00305e34(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1148 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00305e68  FUN_00305e68 =====

void FUN_00305e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00305e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00305e74  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00305e78  Krisp::AudioSdk::Vad<short>::~Vad =====

/* Krisp::AudioSdk::Vad<short>::~Vad() */

void __thiscall Krisp::AudioSdk::Vad<short>::~Vad(Vad<short> *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__Vad_0075f968;
  if (*(VadSession<short> **)(this + 8) != (VadSession<short> *)0x0) {
                    /* try { // try from 00305eb0 to 00305ebb has its CatchHandler @ 00305f10 */
    VadSession<short>::stopSession(*(VadSession<short> **)(this + 8));
    VadSession<short>::destroySession(*(VadSession<short> **)(this + 8));
  }
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305f4c  Krisp::AudioSdk::Vad<short>::~Vad =====

/* Krisp::AudioSdk::Vad<short>::~Vad() */

void __thiscall Krisp::AudioSdk::Vad<short>::~Vad(Vad<short> *this)

{
  ~Vad(this);
  free(this);
  return;
}


// ===== 00305f70  FUN_00305f70 =====

void FUN_00305f70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0075f998;
  FUN_00712454();
  return;
}


// ===== 00305f84  FUN_00305f84 =====

void FUN_00305f84(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1158 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00305fb8  FUN_00305fb8 =====

void FUN_00305fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00305fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00305fc4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00305fc8  Krisp::AudioSdk::KmsForVad<short>::~KmsForVad =====

/* Krisp::AudioSdk::KmsForVad<short>::~KmsForVad() */

void __thiscall Krisp::AudioSdk::KmsForVad<short>::~KmsForVad(KmsForVad<short> *this)

{
  *(undefined **)this = PTR_DAT_007a1160 + 0x10;
  if (*(long *)(this + 0x10) != 0) {
    FUN_0071245c();
    return;
  }
  return;
}


// ===== 00305fec  Krisp::AudioSdk::KmsForVad<short>::~KmsForVad =====

/* Krisp::AudioSdk::KmsForVad<short>::~KmsForVad() */

void __thiscall Krisp::AudioSdk::KmsForVad<short>::~KmsForVad(KmsForVad<short> *this)

{
  *(undefined ***)this = &PTR__KmsForVad_0075f9e8;
  if (*(long *)(this + 0x10) != 0) {
    FUN_0071245c(*(long *)(this + 0x10));
  }
  free(this);
  return;
}


// ===== 0030602c  Krisp::AudioSdk::KmsForVad<short>::createStream =====

/* Krisp::AudioSdk::KmsForVad<short>::createStream(KRISP::Audio::StreamDescriptor const&) */

undefined8 __thiscall
Krisp::AudioSdk::KmsForVad<short>::createStream(KmsForVad<short> *this,StreamDescriptor *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 0030607c to 00306083 has its CatchHandler @ 00306128 */
        uVar3 = FUN_0030bfe8(*(long *)(this + 8),param_1);
        lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == lVar5) {
          return uVar3;
        }
        goto LAB_0030614c;
      }
    }
  }
  uVar3 = FUN_00753a74(0x10);
                    /* try { // try from 003060e4 to 003060ef has its CatchHandler @ 00306118 */
  FUN_00712630(uVar3,"KmsForVad::createStream: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 00306100 to 00306117 has its CatchHandler @ 00306128 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar3,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_0030614c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00306150  Krisp::AudioSdk::KmsForVad<short>::createProcessor =====

/* Krisp::AudioSdk::KmsForVad<short>::createProcessor(std::__ndk1::shared_ptr<KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor> > const&, KRISP::Audio::VadV2::Configuration const&,
   std::__ndk1::shared_ptr<KRISP::Audio::VadV2::ResultHandler> const&) */

undefined8 __thiscall
Krisp::AudioSdk::KmsForVad<short>::createProcessor
          (KmsForVad<short> *this,shared_ptr *param_1,Configuration *param_2,shared_ptr *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_50 = (long *)0x0;
  if (*(long *)(this + 0x10) != 0) {
    local_50 = (long *)FUN_007124b4();
    if (local_50 != (long *)0x0) {
      lVar4 = *(long *)(this + 8);
      local_58 = lVar4;
      if (lVar4 != 0) {
        local_68 = *(undefined8 *)param_3;
        local_60 = *(long **)(param_3 + 8);
        uVar3 = **(undefined8 **)param_1;
        if (local_60 != (long *)0x0) {
          FUN_00755c20(1,local_60 + 1);
        }
                    /* try { // try from 003061c8 to 003061db has its CatchHandler @ 003062ac */
        uVar3 = FUN_00337838(lVar4,uVar3,param_2,&local_68);
        plVar2 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar4 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        plVar2 = local_50;
        if ((local_50 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar4 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return uVar3;
        }
        goto LAB_003062f0;
      }
    }
  }
  uVar3 = FUN_00753a74(0x10);
                    /* try { // try from 00306278 to 00306283 has its CatchHandler @ 003062c4 */
  FUN_00712630(uVar3,"KmsForVad::createProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00306294 to 003062ab has its CatchHandler @ 003062bc */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar3,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_003062f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003062f4  Krisp::AudioSdk::KmsForVad<short>::enableProcessor =====

/* Krisp::AudioSdk::KmsForVad<short>::enableProcessor(KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForVad<short>::enableProcessor
          (KmsForVad<short> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 0030634c to 00306357 has its CatchHandler @ 0030641c */
        FUN_0030c1b8(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_00306440;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 003063d8 to 003063e3 has its CatchHandler @ 0030640c */
  FUN_00712630(uVar4,"KmsForVad::enableProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 003063f4 to 0030640b has its CatchHandler @ 0030641c */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_00306440:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00306444  Krisp::AudioSdk::KmsForVad<short>::disableProcessor =====

/* Krisp::AudioSdk::KmsForVad<short>::disableProcessor(KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForVad<short>::disableProcessor
          (KmsForVad<short> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 0030649c to 003064a7 has its CatchHandler @ 0030656c */
        FUN_0030c460(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_00306590;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 00306528 to 00306533 has its CatchHandler @ 0030655c */
  FUN_00712630(uVar4,"KmsForVad::disableProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 00306544 to 0030655b has its CatchHandler @ 0030656c */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_00306590:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00306594  Krisp::AudioSdk::KmsForVad<short>::destroyProcessor =====

/* Krisp::AudioSdk::KmsForVad<short>::destroyProcessor(KRISP::SDK::Stream<short,
   KRISP::Audio::StreamDescriptor>, long) */

void __thiscall
Krisp::AudioSdk::KmsForVad<short>::destroyProcessor
          (KmsForVad<short> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) != 0) {
    plVar2 = (long *)FUN_007124b4();
    if (plVar2 != (long *)0x0) {
      if (*(long *)(this + 8) != 0) {
                    /* try { // try from 003065ec to 003065f7 has its CatchHandler @ 003066bc */
        FUN_0030c52c(*(long *)(this + 8),param_2,param_3);
        lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1);
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(long *)(lVar1 + 0x28) == lVar5) {
            FUN_0071245c(plVar2);
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lVar5) {
          return;
        }
        goto LAB_003066e0;
      }
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 00306678 to 00306683 has its CatchHandler @ 003066ac */
  FUN_00712630(uVar4,"KmsForVad::destroyProcessor: SDK is not initialized");
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* try { // try from 00306694 to 003066ab has its CatchHandler @ 003066bc */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_003066e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003066e4  FUN_003066e4 =====

void FUN_003066e4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00306734  FUN_00306734 =====

void FUN_00306734(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00306758  FUN_00306758 =====

void FUN_00306758(long param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)__ptr + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = *(long **)((long)__ptr + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 003067f8  FUN_003067f8 =====

long FUN_003067f8(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk114default_deleteIN5Kri_007a1178) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00306814  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00306818  Krisp::AudioSdk::VadSession<float>::VadSession =====

/* Krisp::AudioSdk::VadSession<float>::VadSession(std::__ndk1::shared_ptr<Krisp::AudioSdk::IKmsForVad<float>
   > const&) */

void __thiscall
Krisp::AudioSdk::VadSession<float>::VadSession(VadSession<float> *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(long *)(this + 8) = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


// ===== 00306850  Krisp::AudioSdk::VadSession<float>::initSession =====

/* Krisp::AudioSdk::VadSession<float>::initSession(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration, std::__ndk1::shared_ptr<KRISP::Audio::VadV2::Configuration>) */

void __thiscall
Krisp::AudioSdk::VadSession<float>::initSession
          (VadSession<float> *this,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_4 == 0) {
    uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 003069c8 to 003069d3 has its CatchHandler @ 003069fc */
    FUN_002fd1a0(uVar5,"VadSession::initSession: Null config pointer received");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_70 = param_3;
    uStack_6c = param_2;
    lVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_70);
    plVar4 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1008;
    plVar4[3] = lVar3;
    *(long **)(this + 0x10) = plVar4 + 3;
    plVar6 = *(long **)(this + 0x18);
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    *(long **)(this + 0x18) = plVar4;
    if ((plVar6 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1180 + 0x10);
    plVar4[1] = (long)this;
    local_58 = plVar4;
                    /* try { // try from 00306920 to 00306927 has its CatchHandler @ 00306b20 */
    local_50 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1188;
    local_50[2] = 0;
    local_50[3] = (long)plVar4;
    lVar3 = *param_4;
    plVar4 = *(long **)this;
    *local_50 = (long)(puVar2 + 0x10);
    local_50[1] = 0;
                    /* try { // try from 00306950 to 0030695f has its CatchHandler @ 00306a0c */
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,this + 0x10,lVar3,&local_58);
    plVar4 = local_50;
    *(undefined8 *)(this + 0x20) = uVar5;
    if ((local_50 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00306b48  Krisp::AudioSdk::VadSession<float>::createStream =====

/* Krisp::AudioSdk::VadSession<float>::createStream(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration) */

void __thiscall
Krisp::AudioSdk::VadSession<float>::createStream
          (VadSession<float> *this,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_3;
  uStack_3c = param_2;
  uVar2 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_40);
  puVar3 = (undefined8 *)FUN_00759c3c(0x20);
  plVar5 = *(long **)(this + 0x18);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined8 **)(this + 0x18) = puVar3;
  *puVar3 = &PTR_FUN_0075f448;
  puVar3[3] = uVar2;
  *(undefined8 **)(this + 0x10) = puVar3 + 3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00306c08  Krisp::AudioSdk::VadSession<float>::destroySession =====

/* Krisp::AudioSdk::VadSession<float>::destroySession() */

void __thiscall Krisp::AudioSdk::VadSession<float>::destroySession(VadSession<float> *this)

{
  (**(code **)(**(long **)this + 0x28))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00306c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x30))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 00306c58  Krisp::AudioSdk::VadSession<float>::startSession =====

/* Krisp::AudioSdk::VadSession<float>::startSession() */

void __thiscall Krisp::AudioSdk::VadSession<float>::startSession(VadSession<float> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00306c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x20))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 00306c78  Krisp::AudioSdk::VadSession<float>::stopSession =====

/* Krisp::AudioSdk::VadSession<float>::stopSession() */

void __thiscall Krisp::AudioSdk::VadSession<float>::stopSession(VadSession<float> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00306c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x28))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 00306c98  Krisp::AudioSdk::VadSession<float>::process =====

/* Krisp::AudioSdk::VadSession<float>::process(float const*, unsigned long, float*) */

void __thiscall
Krisp::AudioSdk::VadSession<float>::process
          (VadSession<float> *this,float *param_1,ulong param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_1 == (float *)0x0) || (param_2 == 0)) || (param_3 == (float *)0x0)) {
    uVar2 = FUN_00753a74(0x10);
                    /* try { // try from 00306d40 to 00306d4b has its CatchHandler @ 00306d74 */
    FUN_002fd1a0(uVar2,"VadSession::process: Null buffer pointer received");
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_40 = 0;
                    /* try { // try from 00306ce0 to 00306cf7 has its CatchHandler @ 00306d84 */
    FUN_002fede8(&local_50,0,param_1,param_1 + param_2);
    FUN_0030c7bc(*(undefined8 *)(this + 0x10),&local_50);
    *param_3 = *(float *)(this + 0x28);
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      free(local_50);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00306db8  Krisp::AudioSdk::VadSession<short>::VadSession =====

/* Krisp::AudioSdk::VadSession<short>::VadSession(std::__ndk1::shared_ptr<Krisp::AudioSdk::IKmsForVad<short>
   > const&) */

void __thiscall
Krisp::AudioSdk::VadSession<short>::VadSession(VadSession<short> *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(long *)(this + 8) = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


// ===== 00306df0  Krisp::AudioSdk::VadSession<short>::initSession =====

/* Krisp::AudioSdk::VadSession<short>::initSession(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration, std::__ndk1::shared_ptr<KRISP::Audio::VadV2::Configuration>) */

void __thiscall
Krisp::AudioSdk::VadSession<short>::initSession
          (VadSession<short> *this,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_4 == 0) {
    uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 00306f68 to 00306f73 has its CatchHandler @ 00306f9c */
    FUN_002fd1a0(uVar5,"VadSession::initSession: Null config pointer received");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_70 = param_3;
    uStack_6c = param_2;
    lVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_70);
    plVar4 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1060;
    plVar4[3] = lVar3;
    *(long **)(this + 0x10) = plVar4 + 3;
    plVar6 = *(long **)(this + 0x18);
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    *(long **)(this + 0x18) = plVar4;
    if ((plVar6 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar4 = (long *)FUN_00759c3c(0x10);
    *plVar4 = (long)(PTR_DAT_007a1190 + 0x10);
    plVar4[1] = (long)this;
    local_58 = plVar4;
                    /* try { // try from 00306ec0 to 00306ec7 has its CatchHandler @ 003070c0 */
    local_50 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1198;
    local_50[2] = 0;
    local_50[3] = (long)plVar4;
    lVar3 = *param_4;
    plVar4 = *(long **)this;
    *local_50 = (long)(puVar2 + 0x10);
    local_50[1] = 0;
                    /* try { // try from 00306ef0 to 00306eff has its CatchHandler @ 00306fac */
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,this + 0x10,lVar3,&local_58);
    plVar4 = local_50;
    *(undefined8 *)(this + 0x20) = uVar5;
    if ((local_50 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003070e8  Krisp::AudioSdk::VadSession<short>::createStream =====

/* Krisp::AudioSdk::VadSession<short>::createStream(KRISP::Audio::SamplingRate,
   KRISP::Audio::FrameDuration) */

void __thiscall
Krisp::AudioSdk::VadSession<short>::createStream
          (VadSession<short> *this,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_3;
  uStack_3c = param_2;
  uVar2 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_40);
  puVar3 = (undefined8 *)FUN_00759c3c(0x20);
  plVar5 = *(long **)(this + 0x18);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined8 **)(this + 0x18) = puVar3;
  *puVar3 = &PTR_FUN_0075f6e8;
  puVar3[3] = uVar2;
  *(undefined8 **)(this + 0x10) = puVar3 + 3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003071a8  Krisp::AudioSdk::VadSession<short>::destroySession =====

/* Krisp::AudioSdk::VadSession<short>::destroySession() */

void __thiscall Krisp::AudioSdk::VadSession<short>::destroySession(VadSession<short> *this)

{
  (**(code **)(**(long **)this + 0x28))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
                    /* WARNING: Could not recover jumptable at 0x003071f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x30))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 003071f8  Krisp::AudioSdk::VadSession<short>::startSession =====

/* Krisp::AudioSdk::VadSession<short>::startSession() */

void __thiscall Krisp::AudioSdk::VadSession<short>::startSession(VadSession<short> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00307214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x20))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 00307218  Krisp::AudioSdk::VadSession<short>::stopSession =====

/* Krisp::AudioSdk::VadSession<short>::stopSession() */

void __thiscall Krisp::AudioSdk::VadSession<short>::stopSession(VadSession<short> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00307234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x28))
            (*(long **)this,**(undefined8 **)(this + 0x10),*(undefined8 *)(this + 0x20));
  return;
}


// ===== 00307238  Krisp::AudioSdk::VadSession<short>::process =====

/* Krisp::AudioSdk::VadSession<short>::process(short const*, unsigned long, float*) */

void __thiscall
Krisp::AudioSdk::VadSession<short>::process
          (VadSession<short> *this,short *param_1,ulong param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_1 == (short *)0x0) || (param_2 == 0)) || (param_3 == (float *)0x0)) {
    uVar2 = FUN_00753a74(0x10);
                    /* try { // try from 003072e0 to 003072eb has its CatchHandler @ 00307314 */
    FUN_002fd1a0(uVar2,"VadSession::process: Null buffer pointer received");
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    local_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_40 = 0;
                    /* try { // try from 00307280 to 00307297 has its CatchHandler @ 00307324 */
    FUN_002ff504(&local_50,0,param_1,param_1 + param_2);
    FUN_0030bee8(*(undefined8 *)(this + 0x10),&local_50);
    *param_3 = *(float *)(this + 0x28);
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      free(local_50);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00307358  FUN_00307358 =====

void FUN_00307358(undefined4 param_1,long param_2)

{
  *(undefined4 *)(*(long *)(param_2 + 8) + 0x28) = param_1;
  return;
}


// ===== 00307364  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00307368  FUN_00307368 =====

void FUN_00307368(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0030738c  FUN_0030738c =====

void FUN_0030738c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030739c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 003073a4  FUN_003073a4 =====

long FUN_003073a4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a11a0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 003073c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003073c4  FUN_003073c4 =====

void FUN_003073c4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(*(long *)(param_2 + 8) + 0x28) = param_1;
  return;
}


// ===== 003073d0  FUN_003073d0 =====

void FUN_003073d0(void)

{
  return;
}


// ===== 003073d4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003073d8  FUN_003073d8 =====

void FUN_003073d8(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003073fc  FUN_003073fc =====

void FUN_003073fc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


// ===== 00307414  FUN_00307414 =====

long FUN_00307414(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP5A_007a11a8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00307430  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00307434  FUN_00307434 =====

void FUN_00307434(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    plVar3 = (long *)__ptr[4];
    pvVar1 = (void *)*__ptr;
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 003074c4  FUN_003074c4 =====

void FUN_003074c4(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    plVar3 = (long *)__ptr[4];
    pvVar1 = (void *)*__ptr;
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 00307554  krispCreateVadInt16 =====

undefined8 krispCreateVadInt16(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  VadSessionConfig *extraout_x1;
  long *plVar3;
  undefined8 local_b0;
  long *local_a8;
  ulong local_a0;
  long *plStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  ulong *local_68;
  undefined8 local_60;
  undefined1 uStack_51;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    Krisp::AudioSdk::getLogger((AudioSdk *)0x0);
                    /* try { // try from 003076dc to 003076eb has its CatchHandler @ 00307770 */
    FUN_003078d4(local_a0,4,"createVad: Null input argument");
    plVar3 = plStack_98;
    if ((plStack_98 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), lVar2 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    local_60 = 0;
  }
  else {
    local_70 = *param_1;
    local_80 = 0;
    plStack_98 = (long *)0x0;
    local_a0 = 0;
    local_88 = 0;
    local_90 = (void *)0x0;
                    /* try { // try from 0030759c to 003075a7 has its CatchHandler @ 003077d0 */
    FUN_00714334(&local_a0,*(undefined8 *)param_1[1]);
    local_88 = *(undefined8 *)(param_1[1] + 8);
    local_80 = *(undefined8 *)(param_1[1] + 0x10);
                    /* try { // try from 003075c0 to 003075cb has its CatchHandler @ 003077cc */
    local_68 = &local_a0;
    Krisp::AudioSdk::Vad<short>::create((Vad<short> *)&local_70,extraout_x1);
    if (local_a8 != (long *)0x0) {
      FUN_00755c20(1,local_a8 + 1);
    }
                    /* try { // try from 003075e4 to 003075ef has its CatchHandler @ 003077b0 */
    FUN_00715bcc(&DAT_007aacb0);
    local_50 = &local_60;
    local_60 = local_b0;
                    /* try { // try from 003075fc to 0030761b has its CatchHandler @ 00307798 */
    lVar2 = FUN_00309230(&DAT_007aac60,&local_60,PTR_DAT_007a10e8,&local_50,&uStack_51);
    if (local_a8 != (long *)0x0) {
      FUN_00755c20(1,local_a8 + 1);
    }
    plVar3 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = local_b0;
    *(long **)(lVar2 + 0x20) = local_a8;
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    FUN_00715bf8(&DAT_007aacb0);
    if ((local_a8 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar2 == 0)) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      FUN_0071245c(local_a8);
    }
    if ((local_a8 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar2 == 0)) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      FUN_0071245c(local_a8);
    }
    if ((local_a0 & 1) != 0) {
      free(local_90);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_60;
}


// ===== 003078d4  FUN_003078d4 =====

void FUN_003078d4(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00307a94;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00307988;
    *__dest = 0;
    uVar2 = 0;
LAB_00307944:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_00307988:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00307944;
                    /* try { // try from 003079a8 to 003079af has its CatchHandler @ 00307a40 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 003079b8 to 003079c7 has its CatchHandler @ 00307a48 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_00307a94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00307a98  krispCreateVadFloat =====

undefined8 krispCreateVadFloat(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  VadSessionConfig *extraout_x1;
  long *plVar3;
  undefined8 local_b0;
  long *local_a8;
  ulong local_a0;
  long *plStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  ulong *local_68;
  undefined8 local_60;
  undefined1 uStack_51;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    Krisp::AudioSdk::getLogger((AudioSdk *)0x0);
                    /* try { // try from 00307c20 to 00307c2f has its CatchHandler @ 00307cb4 */
    FUN_003078d4(local_a0,4,"createVad: Null input argument");
    plVar3 = plStack_98;
    if ((plStack_98 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), lVar2 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    local_60 = 0;
  }
  else {
    local_70 = *param_1;
    local_80 = 0;
    plStack_98 = (long *)0x0;
    local_a0 = 0;
    local_88 = 0;
    local_90 = (void *)0x0;
                    /* try { // try from 00307ae0 to 00307aeb has its CatchHandler @ 00307d14 */
    FUN_00714334(&local_a0,*(undefined8 *)param_1[1]);
    local_88 = *(undefined8 *)(param_1[1] + 8);
    local_80 = *(undefined8 *)(param_1[1] + 0x10);
                    /* try { // try from 00307b04 to 00307b0f has its CatchHandler @ 00307d10 */
    local_68 = &local_a0;
    Krisp::AudioSdk::Vad<float>::create((Vad<float> *)&local_70,extraout_x1);
    if (local_a8 != (long *)0x0) {
      FUN_00755c20(1,local_a8 + 1);
    }
                    /* try { // try from 00307b28 to 00307b33 has its CatchHandler @ 00307cf4 */
    FUN_00715bcc(&DAT_007aacb0);
    local_50 = &local_60;
    local_60 = local_b0;
                    /* try { // try from 00307b40 to 00307b5f has its CatchHandler @ 00307cdc */
    lVar2 = FUN_003097f8(&DAT_007aac88,&local_60,PTR_DAT_007a10e8,&local_50,&uStack_51);
    if (local_a8 != (long *)0x0) {
      FUN_00755c20(1,local_a8 + 1);
    }
    plVar3 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = local_b0;
    *(long **)(lVar2 + 0x20) = local_a8;
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    FUN_00715bf8(&DAT_007aacb0);
    if ((local_a8 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar2 == 0)) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      FUN_0071245c(local_a8);
    }
    if ((local_a8 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar2 == 0)) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      FUN_0071245c(local_a8);
    }
    if ((local_a0 & 1) != 0) {
      free(local_90);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_60;
}


// ===== 00307e18  krispDestroyVad =====

void krispDestroyVad(long param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  AudioSdk *this;
  undefined8 uVar5;
  long local_70;
  long *local_68;
  long local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    Krisp::AudioSdk::getLogger((AudioSdk *)0x0);
                    /* try { // try from 00307f54 to 00307f63 has its CatchHandler @ 003080e4 */
    FUN_00308244(local_70,4,"krispDestroyVad: Null session handle");
    plVar2 = local_68;
    if ((local_68 != (long *)0x0) &&
       (lVar4 = FUN_00755c50(0xffffffffffffffff,local_68 + 1), lVar4 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    uVar5 = 3;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
                    /* try { // try from 00307e3c to 00307e4b has its CatchHandler @ 00308114 */
    FUN_00308408(&local_70,param_1);
    plVar2 = local_68;
    if (local_70 == 0) {
                    /* try { // try from 00307fac to 00307fb7 has its CatchHandler @ 003080bc */
      this = (AudioSdk *)FUN_0030854c(&local_50,param_1);
      plVar2 = local_48;
      bVar3 = local_50 == 0;
      if (local_50 != 0) {
        local_50 = 0;
        local_48 = (long *)0x0;
        if ((plVar2 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar4 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        local_40 = param_1;
                    /* try { // try from 00308000 to 0030800b has its CatchHandler @ 003080b0 */
        FUN_00715bcc(&DAT_007aacb0);
                    /* try { // try from 0030800c to 0030802b has its CatchHandler @ 003080c0 */
        FUN_00309dc0(&DAT_007aac60,&local_40);
        FUN_0030a078(&DAT_007aac88,&local_40);
        this = (AudioSdk *)FUN_00715bf8(&DAT_007aacb0);
      }
      plVar2 = local_48;
      if ((local_48 != (long *)0x0) &&
         (this = (AudioSdk *)FUN_00755c50(0xffffffffffffffff,local_48 + 1), this == (AudioSdk *)0x0)
         ) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        this = (AudioSdk *)FUN_0071245c(plVar2);
      }
    }
    else {
      local_70 = 0;
      local_68 = (long *)0x0;
      if ((plVar2 != (long *)0x0) &&
         (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar4 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0071245c(plVar2);
      }
      local_40 = param_1;
                    /* try { // try from 00307e8c to 00307e97 has its CatchHandler @ 00308108 */
      FUN_00715bcc(&DAT_007aacb0);
                    /* try { // try from 00307e98 to 00307eb7 has its CatchHandler @ 00308120 */
      FUN_00309dc0(&DAT_007aac60,&local_40);
      FUN_0030a078(&DAT_007aac88,&local_40);
      this = (AudioSdk *)FUN_00715bf8(&DAT_007aacb0);
      bVar3 = false;
    }
    plVar2 = local_68;
    if ((local_68 != (long *)0x0) &&
       (this = (AudioSdk *)FUN_00755c50(0xffffffffffffffff,local_68 + 1), this == (AudioSdk *)0x0))
    {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      this = (AudioSdk *)FUN_0071245c(plVar2);
    }
    if (bVar3) {
      Krisp::AudioSdk::getLogger(this);
                    /* try { // try from 00307ef0 to 00307eff has its CatchHandler @ 003080e0 */
      FUN_00308850(local_70,4,"krispDestroyVad: Invalid session handle");
      plVar2 = local_68;
      if ((local_68 != (long *)0x0) &&
         (lVar4 = FUN_00755c50(0xffffffffffffffff,local_68 + 1), lVar4 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0071245c(plVar2);
      }
      uVar5 = 2;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
    else {
      uVar5 = 0;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00308244  FUN_00308244 =====

void FUN_00308244(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00308404;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_003082f8;
    *__dest = 0;
    uVar2 = 0;
LAB_003082b4:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_003082f8:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_003082b4;
                    /* try { // try from 00308318 to 0030831f has its CatchHandler @ 003083b0 */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 00308328 to 00308337 has its CatchHandler @ 003083b8 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_00308404:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00308408  FUN_00308408 =====

void FUN_00308408(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  FUN_00715bcc(&DAT_007aacb0);
  if (DAT_007aac68 != 0) {
    uVar7 = NEON_cnt(DAT_007aac68,1);
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar5 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff;
    if (uVar5 < 2) {
      uVar3 = DAT_007aac68 - 1 & param_2;
    }
    else {
      uVar3 = param_2;
      if (DAT_007aac68 <= param_2) {
        uVar3 = 0;
        if (DAT_007aac68 != 0) {
          uVar3 = param_2 / DAT_007aac68;
        }
        uVar3 = param_2 - uVar3 * DAT_007aac68;
      }
    }
    plVar4 = *(long **)(DAT_007aac60 + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar4[1] == param_2) {
            if (plVar4[2] == param_2) goto LAB_0030851c;
          }
          else if ((plVar4[1] & DAT_007aac68 - 1) != uVar3) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == param_2) {
            if (plVar4[2] == param_2) goto LAB_0030851c;
          }
          else {
            if (DAT_007aac68 <= uVar5) {
              uVar2 = 0;
              if (DAT_007aac68 != 0) {
                uVar2 = uVar5 / DAT_007aac68;
              }
              uVar5 = uVar5 - uVar2 * DAT_007aac68;
            }
            if (uVar5 != uVar3) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00308504:
  FUN_00715bf8(&DAT_007aacb0);
  return;
LAB_0030851c:
  lVar1 = plVar4[4];
  *param_1 = plVar4[3];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
    FUN_00715bf8(&DAT_007aacb0);
    return;
  }
  goto LAB_00308504;
}


// ===== 0030854c  FUN_0030854c =====

void FUN_0030854c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  FUN_00715bcc(&DAT_007aacb0);
  if (DAT_007aac90 != 0) {
    uVar7 = NEON_cnt(DAT_007aac90,1);
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar5 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff;
    if (uVar5 < 2) {
      uVar3 = DAT_007aac90 - 1 & param_2;
    }
    else {
      uVar3 = param_2;
      if (DAT_007aac90 <= param_2) {
        uVar3 = 0;
        if (DAT_007aac90 != 0) {
          uVar3 = param_2 / DAT_007aac90;
        }
        uVar3 = param_2 - uVar3 * DAT_007aac90;
      }
    }
    plVar4 = *(long **)(DAT_007aac88 + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar4[1] == param_2) {
            if (plVar4[2] == param_2) goto LAB_00308660;
          }
          else if ((plVar4[1] & DAT_007aac90 - 1) != uVar3) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == param_2) {
            if (plVar4[2] == param_2) goto LAB_00308660;
          }
          else {
            if (DAT_007aac90 <= uVar5) {
              uVar2 = 0;
              if (DAT_007aac90 != 0) {
                uVar2 = uVar5 / DAT_007aac90;
              }
              uVar5 = uVar5 - uVar2 * DAT_007aac90;
            }
            if (uVar5 != uVar3) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00308648:
  FUN_00715bf8(&DAT_007aacb0);
  return;
LAB_00308660:
  lVar1 = plVar4[4];
  *param_1 = plVar4[3];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
    FUN_00715bf8(&DAT_007aacb0);
    return;
  }
  goto LAB_00308648;
}


// ===== 00308690  FUN_00308690 =====

void FUN_00308690(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_0030884c;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0030872c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_0030872c:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00308740 to 0030874f has its CatchHandler @ 00308828 */
  FUN_00303858(local_70,&local_88,param_4);
                    /* try { // try from 00308758 to 00308767 has its CatchHandler @ 003087e8 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_70);
  if ((local_70[0] & 1) != 0) {
    free(local_60);
  }
  if ((local_88 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_0030884c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00308850  FUN_00308850 =====

void FUN_00308850(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00308a10;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00308904;
    *__dest = 0;
    uVar2 = 0;
LAB_003088c0:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_00308904:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_003088c0;
                    /* try { // try from 00308924 to 0030892b has its CatchHandler @ 003089bc */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 00308934 to 00308943 has its CatchHandler @ 003089c4 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_00308a10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00308a14  krispProcessVadInt16 =====

void krispProcessVadInt16(AudioSdk *param_1,short *param_2,ulong param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Vad<short> *local_60;
  long *local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((((param_4 == (float *)0x0) || (param_1 == (AudioSdk *)0x0)) || (param_2 == (short *)0x0)) ||
     (param_3 == 0)) {
    Krisp::AudioSdk::getLogger(param_1);
                    /* try { // try from 00308ab8 to 00308ac7 has its CatchHandler @ 00308b34 */
    FUN_00308c60(local_60,4,"krispProcessVadInt16: Null input argument");
    if ((local_58 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_58 + 1), lVar2 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      FUN_0071245c(local_58);
    }
    uVar3 = 3;
  }
  else {
                    /* try { // try from 00308a50 to 00308a5b has its CatchHandler @ 00308b5c */
    FUN_00308408(&local_60,param_1);
    if (local_60 != (Vad<short> *)0x0) {
                    /* try { // try from 00308a64 to 00308a73 has its CatchHandler @ 00308b20 */
      Krisp::AudioSdk::Vad<short>::process(local_60,param_2,param_3,param_4);
    }
    if ((local_58 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_58 + 1), lVar2 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      FUN_0071245c(local_58);
    }
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00308c60  FUN_00308c60 =====

void FUN_00308c60(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *__dest;
  ulong local_88;
  size_t sStack_80;
  undefined1 *local_78;
  ulong local_70;
  size_t sStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00308e20;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00308d14;
    *__dest = 0;
    uVar2 = 0;
LAB_00308cd0:
    sStack_68 = sStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar2 + 1);
    local_88 = uVar2 + 1 | 1;
    sStack_80 = __n;
    local_78 = __dest;
LAB_00308d14:
    memcpy(__dest,param_3,__n);
    __dest[__n] = 0;
    uVar2 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00308cd0;
                    /* try { // try from 00308d34 to 00308d3b has its CatchHandler @ 00308dcc */
    FUN_002fb36c(&local_70,local_78,sStack_80);
  }
                    /* try { // try from 00308d44 to 00308d53 has its CatchHandler @ 00308dd4 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_00308e20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00308e24  FUN_00308e24 =====

void FUN_00308e24(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00308fe0;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00308ec0;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_00308ec0:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00308ed4 to 00308ee3 has its CatchHandler @ 00308fbc */
  FUN_00303858(local_70,&local_88,param_4);
                    /* try { // try from 00308eec to 00308efb has its CatchHandler @ 00308f7c */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_70);
  if ((local_70[0] & 1) != 0) {
    free(local_60);
  }
  if ((local_88 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_00308fe0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00308fe4  krispProcessVadFloat =====

void krispProcessVadFloat(AudioSdk *param_1,float *param_2,ulong param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Vad<float> *local_60;
  long *local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((((param_4 == (float *)0x0) || (param_1 == (AudioSdk *)0x0)) || (param_2 == (float *)0x0)) ||
     (param_3 == 0)) {
    Krisp::AudioSdk::getLogger(param_1);
                    /* try { // try from 00309088 to 00309097 has its CatchHandler @ 00309104 */
    FUN_00308c60(local_60,4,"krispProcessVadFloat: Null input argument");
    if ((local_58 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_58 + 1), lVar2 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      FUN_0071245c(local_58);
    }
    uVar3 = 3;
  }
  else {
                    /* try { // try from 00309020 to 0030902b has its CatchHandler @ 0030912c */
    FUN_0030854c(&local_60,param_1);
    if (local_60 != (Vad<float> *)0x0) {
                    /* try { // try from 00309034 to 00309043 has its CatchHandler @ 003090f0 */
      Krisp::AudioSdk::Vad<float>::process(local_60,param_2,param_3,param_4);
    }
    if ((local_58 != (long *)0x0) &&
       (lVar2 = FUN_00755c50(0xffffffffffffffff,local_58 + 1), lVar2 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      FUN_0071245c(local_58);
    }
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00309230  FUN_00309230 =====

long * FUN_00309230(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x26;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  plVar13 = (long *)param_1[1];
  plVar14 = (long *)*param_2;
  if (plVar13 != (long *)0x0) {
    uVar16 = NEON_cnt(plVar13,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
    }
    else {
      unaff_x26 = plVar14;
      if (plVar13 <= plVar14) {
        uVar2 = 0;
        if (plVar13 != (long *)0x0) {
          uVar2 = (ulong)plVar14 / (ulong)plVar13;
        }
        unaff_x26 = (long *)((long)plVar14 - uVar2 * (long)plVar13);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar8, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((long *)plVar12[1] == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_00309338;
          }
          else if ((long *)((ulong)plVar12[1] & (long)plVar13 - 1U) != unaff_x26) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          plVar5 = (long *)plVar12[1];
          if (plVar5 == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_00309338;
          }
          else {
            if (plVar13 <= plVar5) {
              uVar10 = 0;
              if (plVar13 != (long *)0x0) {
                uVar10 = (ulong)plVar5 / (ulong)plVar13;
              }
              plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar13);
            }
            if (plVar5 != unaff_x26) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar12 = (long *)FUN_00759c3c(0x28);
  lVar9 = param_1[3];
  plVar5 = (long *)*param_4;
  *plVar12 = 0;
  plVar12[1] = (long)plVar14;
  fVar17 = *(float *)(param_1 + 4);
  lVar6 = *plVar5;
  plVar12[4] = 0;
  plVar12[2] = lVar6;
  plVar12[3] = 0;
  plVar5 = plVar12;
  if ((plVar13 == (long *)0x0) || (fVar17 * (float)plVar13 < (float)(lVar9 + 1))) {
    if (plVar13 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    plVar7 = (long *)(uVar10 | (long)plVar13 << 1);
    plVar11 = (long *)(long)((float)(lVar9 + 1) / fVar17);
    if (plVar7 <= plVar11) {
      plVar7 = plVar11;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
                    /* try { // try from 00309408 to 0030948b has its CatchHandler @ 0030957c */
      plVar5 = (long *)FUN_00711ce0(plVar7);
      plVar13 = (long *)param_1[1];
      plVar7 = plVar5;
    }
    if (plVar13 < plVar7) {
LAB_00309420:
      plVar5 = (long *)FUN_00309620(param_1,plVar7);
    }
    else if (plVar7 < plVar13) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar13 < (long *)0x3) {
LAB_00309488:
        plVar5 = (long *)FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(plVar13,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_00309488;
        if ((long *)0x1 < plVar5) {
          plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
        }
      }
      if (plVar7 <= plVar5) {
        plVar7 = plVar5;
      }
      if (plVar7 < plVar13) goto LAB_00309420;
    }
    plVar13 = (long *)param_1[1];
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
      goto joined_r0x00309500;
    }
    if (plVar14 < plVar13) {
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)plVar14 * 8);
      unaff_x26 = plVar14;
      goto joined_r0x00309500;
    }
    uVar10 = 0;
    if (plVar13 != (long *)0x0) {
      uVar10 = (ulong)plVar14 / (ulong)plVar13;
    }
    unaff_x26 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
    if (plVar7 == (long *)0x0) goto LAB_003094bc;
LAB_003093b0:
    *plVar12 = *plVar7;
LAB_00309538:
    *plVar7 = (long)plVar12;
  }
  else {
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
joined_r0x00309500:
    if (plVar7 != (long *)0x0) goto LAB_003093b0;
LAB_003094bc:
    lVar9 = *plVar1;
    *plVar1 = (long)plVar12;
    *plVar12 = lVar9;
    *(long **)(lVar6 + (long)unaff_x26 * 8) = plVar1;
    if (*plVar12 != 0) {
      plVar14 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar14) {
        uVar10 = 0;
        if (plVar13 != (long *)0x0) {
          uVar10 = (ulong)plVar14 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
      }
      plVar7 = (long *)(*param_1 + (long)plVar14 * 8);
      goto LAB_00309538;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  lVar4 = *(long *)(lVar4 + 0x28);
joined_r0x00309348:
  if (lVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5,uVar16);
  }
  return plVar12;
LAB_00309338:
  uVar16 = 0;
  lVar4 = *(long *)(lVar4 + 0x28);
  plVar5 = param_1;
  goto joined_r0x00309348;
}


// ===== 003095a4  FUN_003095a4 =====

void FUN_003095a4(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  if (((*(char *)(param_1 + 2) != '\0') &&
      (plVar2 = *(long **)((long)__ptr + 0x20), plVar2 != (long *)0x0)) &&
     (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00309620  FUN_00309620 =====

void FUN_00309620(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_003097a4:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_003097a4;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 003097f8  FUN_003097f8 =====

long * FUN_003097f8(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x26;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  plVar13 = (long *)param_1[1];
  plVar14 = (long *)*param_2;
  if (plVar13 != (long *)0x0) {
    uVar16 = NEON_cnt(plVar13,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
    }
    else {
      unaff_x26 = plVar14;
      if (plVar13 <= plVar14) {
        uVar2 = 0;
        if (plVar13 != (long *)0x0) {
          uVar2 = (ulong)plVar14 / (ulong)plVar13;
        }
        unaff_x26 = (long *)((long)plVar14 - uVar2 * (long)plVar13);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar8, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((long *)plVar12[1] == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_00309900;
          }
          else if ((long *)((ulong)plVar12[1] & (long)plVar13 - 1U) != unaff_x26) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          plVar5 = (long *)plVar12[1];
          if (plVar5 == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_00309900;
          }
          else {
            if (plVar13 <= plVar5) {
              uVar10 = 0;
              if (plVar13 != (long *)0x0) {
                uVar10 = (ulong)plVar5 / (ulong)plVar13;
              }
              plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar13);
            }
            if (plVar5 != unaff_x26) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar12 = (long *)FUN_00759c3c(0x28);
  lVar9 = param_1[3];
  plVar5 = (long *)*param_4;
  *plVar12 = 0;
  plVar12[1] = (long)plVar14;
  fVar17 = *(float *)(param_1 + 4);
  lVar6 = *plVar5;
  plVar12[4] = 0;
  plVar12[2] = lVar6;
  plVar12[3] = 0;
  plVar5 = plVar12;
  if ((plVar13 == (long *)0x0) || (fVar17 * (float)plVar13 < (float)(lVar9 + 1))) {
    if (plVar13 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    plVar7 = (long *)(uVar10 | (long)plVar13 << 1);
    plVar11 = (long *)(long)((float)(lVar9 + 1) / fVar17);
    if (plVar7 <= plVar11) {
      plVar7 = plVar11;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
                    /* try { // try from 003099d0 to 00309a53 has its CatchHandler @ 00309b44 */
      plVar5 = (long *)FUN_00711ce0(plVar7);
      plVar13 = (long *)param_1[1];
      plVar7 = plVar5;
    }
    if (plVar13 < plVar7) {
LAB_003099e8:
      plVar5 = (long *)FUN_00309be8(param_1,plVar7);
    }
    else if (plVar7 < plVar13) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar13 < (long *)0x3) {
LAB_00309a50:
        plVar5 = (long *)FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(plVar13,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_00309a50;
        if ((long *)0x1 < plVar5) {
          plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
        }
      }
      if (plVar7 <= plVar5) {
        plVar7 = plVar5;
      }
      if (plVar7 < plVar13) goto LAB_003099e8;
    }
    plVar13 = (long *)param_1[1];
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
      goto joined_r0x00309ac8;
    }
    if (plVar14 < plVar13) {
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)plVar14 * 8);
      unaff_x26 = plVar14;
      goto joined_r0x00309ac8;
    }
    uVar10 = 0;
    if (plVar13 != (long *)0x0) {
      uVar10 = (ulong)plVar14 / (ulong)plVar13;
    }
    unaff_x26 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
    if (plVar7 == (long *)0x0) goto LAB_00309a84;
LAB_00309978:
    *plVar12 = *plVar7;
LAB_00309b00:
    *plVar7 = (long)plVar12;
  }
  else {
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
joined_r0x00309ac8:
    if (plVar7 != (long *)0x0) goto LAB_00309978;
LAB_00309a84:
    lVar9 = *plVar1;
    *plVar1 = (long)plVar12;
    *plVar12 = lVar9;
    *(long **)(lVar6 + (long)unaff_x26 * 8) = plVar1;
    if (*plVar12 != 0) {
      plVar14 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar14) {
        uVar10 = 0;
        if (plVar13 != (long *)0x0) {
          uVar10 = (ulong)plVar14 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
      }
      plVar7 = (long *)(*param_1 + (long)plVar14 * 8);
      goto LAB_00309b00;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  lVar4 = *(long *)(lVar4 + 0x28);
joined_r0x00309910:
  if (lVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5,uVar16);
  }
  return plVar12;
LAB_00309900:
  uVar16 = 0;
  lVar4 = *(long *)(lVar4 + 0x28);
  plVar5 = param_1;
  goto joined_r0x00309910;
}


// ===== 00309b6c  FUN_00309b6c =====

void FUN_00309b6c(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  if (((*(char *)(param_1 + 2) != '\0') &&
      (plVar2 = *(long **)((long)__ptr + 0x20), plVar2 != (long *)0x0)) &&
     (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00309be8  FUN_00309be8 =====

void FUN_00309be8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_00309d6c:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_00309d6c;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 00309dc0  FUN_00309dc0 =====

void FUN_00309dc0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar4 = *param_2;
    uVar10 = NEON_cnt(uVar5,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar7 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar6 = uVar4 - uVar6 * uVar5;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_00309ed8;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar6) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_00309ed8;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar1 * uVar5;
            }
            if (uVar7 != uVar6) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  uVar10 = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00309f40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
LAB_00309ed8:
  FUN_00309f44(local_50);
  __ptr = local_50[0];
  local_50[0] = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if (((local_40 != '\0') && (plVar8 = *(long **)((long)__ptr + 0x20), plVar8 != (long *)0x0)) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar3 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    free(__ptr);
  }
  uVar10 = 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
  goto LAB_00309f40;
}


// ===== 00309f44  FUN_00309f44 =====

void FUN_00309f44(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0030a010;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0030a010;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0030a010:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 0030a078  FUN_0030a078 =====

void FUN_0030a078(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar4 = *param_2;
    uVar10 = NEON_cnt(uVar5,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar7 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar6 = uVar4 - uVar6 * uVar5;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_0030a190;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar6) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_0030a190;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar1 * uVar5;
            }
            if (uVar7 != uVar6) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  uVar10 = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0030a1f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
LAB_0030a190:
  FUN_0030a1fc(local_50);
  __ptr = local_50[0];
  local_50[0] = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if (((local_40 != '\0') && (plVar8 = *(long **)((long)__ptr + 0x20), plVar8 != (long *)0x0)) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar3 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    free(__ptr);
  }
  uVar10 = 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
  goto LAB_0030a1f8;
}


// ===== 0030a1fc  FUN_0030a1fc =====

void FUN_0030a1fc(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0030a2c8;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0030a2c8;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0030a2c8:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 0030a330  _INIT_7 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_7(void)

{
  DAT_007aac80 = 0x3f800000;
  DAT_007aac68 = 0;
  DAT_007aac60 = 0;
  uRam00000000007aac78 = 0;
  _DAT_007aac70 = 0;
  __cxa_atexit(FUN_00307434,&DAT_007aac60,&PTR_LOOP_0075ec90);
  DAT_007aac90 = 0;
  DAT_007aac88 = 0;
  uRam00000000007aaca0 = 0;
  _DAT_007aac98 = 0;
  DAT_007aaca8 = 0x3f800000;
  __cxa_atexit(FUN_003074c4,&DAT_007aac88,&PTR_LOOP_0075ec90);
  __cxa_atexit(PTR_FUN_007a1110,&DAT_007aacb0,&PTR_LOOP_0075ec90);
  return;
}


// ===== 0030a3b8  Krisp::AudioSdk::globalInit =====

/* Krisp::AudioSdk::globalInit(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, Krisp::AudioSdk::LogLevel)> const&, Krisp::AudioSdk::LogLevel) */

void Krisp::AudioSdk::globalInit(AudioSdk *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  KmsAdapter *this;
  AudioSdk *this_00;
  long lVar3;
  undefined1 auStack_90 [8];
  long *local_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  long *plStack_68;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (KmsAdapter *)getLogger(param_1);
  if ((local_50 != (long *)0x0) &&
     (this = (KmsAdapter *)FUN_00755c50(0xffffffffffffffff,local_50 + 1), this == (KmsAdapter *)0x0)
     ) {
    (**(code **)(*local_50 + 0x10))(local_50);
    this = (KmsAdapter *)FUN_0071245c(local_50);
  }
  this_00 = (AudioSdk *)KmsAdapter::getInstance(this);
  plStack_68 = plStack_78;
  local_70 = local_80;
  local_80 = 0;
  plStack_78 = (long *)0x0;
                    /* try { // try from 0030a434 to 0030a43b has its CatchHandler @ 0030a51c */
  getLogger(this_00);
                    /* try { // try from 0030a43c to 0030a453 has its CatchHandler @ 0030a50c */
  globalInitImpl(param_1,&local_70,auStack_90,param_2,param_3);
  if ((local_88 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar3 == 0)) {
    (**(code **)(*local_88 + 0x10))(local_88);
    FUN_0071245c(local_88);
  }
  plVar2 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = plStack_78;
  if ((plStack_78 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_78 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030a54c  FUN_0030a54c =====

void FUN_0030a54c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0030a59c  Krisp::AudioSdk::getVersion =====

/* Krisp::AudioSdk::getVersion(Krisp::AudioSdk::VersionInfo&) */

void Krisp::AudioSdk::getVersion(VersionInfo *param_1)

{
  (*(code *)PTR_getVersionImpl_007a3d00)();
  return;
}


// ===== 0030a5a0  Krisp::AudioSdk::globalDestroy =====

/* WARNING: Removing unreachable block (ram,0x0030a610) */
/* WARNING: Removing unreachable block (ram,0x0030a620) */
/* Krisp::AudioSdk::globalDestroy() */

void __thiscall Krisp::AudioSdk::globalDestroy(AudioSdk *this)

{
  long lVar1;
  long lVar2;
  long *plStack_48;
  shared_ptr local_40 [8];
  long *plStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  KmsAdapter::getInstance((KmsAdapter *)this);
  plStack_38 = plStack_48;
                    /* try { // try from 0030a5d0 to 0030a5d7 has its CatchHandler @ 0030a658 */
  globalDestroyImpl(local_40);
  if ((plStack_38 != (long *)0x0) &&
     (lVar2 = FUN_00755c50(0xffffffffffffffff,plStack_38 + 1), lVar2 == 0)) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    FUN_0071245c(plStack_38);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0030a688  Krisp::AudioSdk::globalInitImpl =====

/* Krisp::AudioSdk::globalInitImpl(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&,
   std::__ndk1::shared_ptr<Krisp::AudioSdk::IKmsAdapter> const&,
   std::__ndk1::shared_ptr<Krisp::ILogger> const&, std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, Krisp::AudioSdk::LogLevel)> const&, Krisp::AudioSdk::LogLevel) */

void Krisp::AudioSdk::globalInitImpl
               (undefined8 param_1,long *param_2,long *param_3,long *param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long local_f0 [4];
  long *local_d0;
  long local_c0 [4];
  long *local_a0;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  plVar5 = local_f0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (DAT_007aacd8 == '\x01') {
    uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 0030a8e8 to 0030a8f3 has its CatchHandler @ 0030a980 */
    FUN_00712630(uVar6,"globalInitImpl: Already initialized");
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
    }
    goto LAB_0030aa5c;
  }
  if (*param_2 == 0) {
    uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 0030a928 to 0030a933 has its CatchHandler @ 0030a97c */
    FUN_002fd1a0(uVar6,"globalInitImpl: KMS adapter is not provided");
  }
  else {
    if (*param_3 != 0) {
      plVar2 = (long *)param_4[4];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)*param_3;
        local_70 = (long *)0x0;
        local_d0 = (long *)0x0;
      }
      else if (plVar2 == param_4) {
        local_70 = local_90;
        (**(code **)(*param_4 + 0x18))(param_4,local_90);
        plVar2 = (long *)*param_3;
        local_d0 = local_70;
        if (local_70 != (long *)0x0) goto LAB_0030a740;
      }
      else {
        local_70 = (long *)(**(code **)(*plVar2 + 0x10))();
        plVar2 = (long *)*param_3;
        if (local_70 == (long *)0x0) {
          local_d0 = (long *)0x0;
        }
        else {
LAB_0030a740:
          if (local_70 == local_90) {
                    /* try { // try from 0030a8cc to 0030a8d7 has its CatchHandler @ 0030aa10 */
            local_d0 = local_f0;
            (**(code **)(local_90[0] + 0x18))(local_90,local_f0);
          }
          else {
                    /* try { // try from 0030a754 to 0030a757 has its CatchHandler @ 0030aa10 */
            local_d0 = (long *)(**(code **)(*local_70 + 0x10))();
          }
        }
      }
      local_a0 = (long *)0x0;
                    /* try { // try from 0030a760 to 0030a767 has its CatchHandler @ 0030a9d8 */
      plVar3 = (long *)FUN_00759c3c(0x40);
      *plVar3 = (long)&PTR_FUN_0075fbd8;
      plVar4 = local_d0;
      if (local_d0 == (long *)0x0) {
LAB_0030a79c:
        plVar3[6] = (long)plVar4;
      }
      else {
        if (local_d0 != local_f0) {
                    /* try { // try from 0030a798 to 0030a7b7 has its CatchHandler @ 0030a990 */
          plVar4 = (long *)(**(code **)(*local_d0 + 0x10))();
          goto LAB_0030a79c;
        }
        plVar3[6] = (long)(plVar3 + 2);
        (**(code **)(local_f0[0] + 0x18))(local_f0);
      }
                    /* try { // try from 0030a7c4 to 0030a7d3 has its CatchHandler @ 0030a9a0 */
      local_a0 = plVar3;
      (**(code **)(*plVar2 + 0x10))(plVar2,local_c0);
      if (local_a0 == local_c0) {
        lVar7 = 0x20;
        plVar2 = local_c0;
LAB_0030a7f4:
        (**(code **)(*plVar2 + lVar7))();
      }
      else if (local_a0 != (long *)0x0) {
        lVar7 = 0x28;
        plVar2 = local_a0;
        goto LAB_0030a7f4;
      }
      if (local_d0 == local_f0) {
        lVar7 = 0x20;
LAB_0030a824:
        (**(code **)(*plVar5 + lVar7))();
      }
      else if (local_d0 != (long *)0x0) {
        lVar7 = 0x28;
        plVar5 = local_d0;
        goto LAB_0030a824;
      }
                    /* try { // try from 0030a83c to 0030a857 has its CatchHandler @ 0030aa10 */
      (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,param_5);
      (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_1);
      DAT_007aacd8 = '\x01';
      if (local_70 == local_90) {
        lVar7 = 0x20;
        plVar5 = local_90;
LAB_0030a884:
        (**(code **)(*plVar5 + lVar7))();
      }
      else if (local_70 != (long *)0x0) {
        lVar7 = 0x28;
        plVar5 = local_70;
        goto LAB_0030a884;
      }
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_0030aa5c;
    }
    uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 0030a944 to 0030a94f has its CatchHandler @ 0030a978 */
    FUN_002fd1a0(uVar6,"globalInit: Logger is not provided");
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar6,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
  }
LAB_0030aa5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030aa60  Krisp::AudioSdk::getVersionImpl =====

/* Krisp::AudioSdk::getVersionImpl(Krisp::AudioSdk::VersionInfo&) */

void Krisp::AudioSdk::getVersionImpl(VersionInfo *param_1)

{
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0x100009;
  *(undefined4 *)(param_1 + 8) = 0x45b;
  return;
}


// ===== 0030aa7c  Krisp::AudioSdk::globalDestroyImpl =====

/* Krisp::AudioSdk::globalDestroyImpl(std::__ndk1::shared_ptr<Krisp::AudioSdk::IKmsAdapter> const&)
    */

void Krisp::AudioSdk::globalDestroyImpl(shared_ptr *param_1)

{
  undefined8 uVar1;
  
  if ((DAT_007aacd8 & 1) != 0) {
    if (*(long **)param_1 != (long *)0x0) {
      (**(code **)(**(long **)param_1 + 0x18))();
    }
    DAT_007aacd8 = 0;
    return;
  }
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 0030aac4 to 0030aacf has its CatchHandler @ 0030aae8 */
  FUN_00712630(uVar1,"globalDestroyImpl: Not initialized");
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
}


// ===== 0030aafc  FUN_0030aafc =====

void FUN_0030aafc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[6];
  plVar1 = param_1 + 2;
  *param_1 = &PTR_FUN_0075fbd8;
  if (plVar2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x0030ab40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030ab2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 0030ab48  FUN_0030ab48 =====

void FUN_0030ab48(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0075fbd8;
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0030ab94;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0030ab94:
  free(param_1);
  return;
}


// ===== 0030aba4  FUN_0030aba4 =====

undefined8 * FUN_0030aba4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_0075fbd8;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0030abec to 0030ac13 has its CatchHandler @ 0030ac24 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 0030ac38  FUN_0030ac38 =====

void FUN_0030ac38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0075fbd8;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
    return;
  }
  if (plVar2 != (long *)(param_1 + 0x10)) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
    return;
  }
  param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0030acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  return;
}


// ===== 0030acb4  FUN_0030acb4 =====

void FUN_0030acb4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x10);
  if (plVar2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x0030acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030acd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 0030acf4  FUN_0030acf4 =====

void FUN_0030acf4(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0030ad34;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0030ad34:
  free(param_1);
  return;
}


// ===== 0030ad44  FUN_0030ad44 =====

void FUN_0030ad44(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    local_2c = *param_3;
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030ada4  FUN_0030ada4 =====

long FUN_0030ada4(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(char **)(param_2 + 8) !=
      "ZN5Krisp8AudioSdk14globalInitImplERKNSt6__ndk112basic_stringIwNS1_11char_traitsIwEENS1_9allocatorIwEEEERKNS1_10shared_ptrINS0_11IKmsAdapterEEERKNSA_INS_7ILoggerEEERKNS1_8functionIFvRKNS2_IcNS3_IcEENS5_IcEEEENS0_8LogLevelEEEESP_E3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0030adc0  FUN_0030adc0 =====

undefined ** FUN_0030adc0(void)

{
  return &PTR_PTR_thunk_FUN_0073a404_0075fc48;
}


// ===== 0030adcc  krispGlobalInit =====

void krispGlobalInit(wchar_t *param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  size_t sVar4;
  undefined ***pppuVar5;
  long lVar6;
  void *__dest;
  ulong local_a8;
  size_t local_a0;
  void *local_98;
  undefined **local_90;
  long *local_88;
  undefined ***local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (wchar_t *)0x0) {
    Krisp::AudioSdk::getLogger((AudioSdk *)0x0);
                    /* try { // try from 0030ae44 to 0030ae53 has its CatchHandler @ 0030afa4 */
    FUN_00308244(local_90,4,"krispGlobalInit: Null input argument");
    plVar3 = local_88;
    if ((local_88 != (long *)0x0) &&
       (lVar6 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar6 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    sVar4 = 3;
  }
  else {
    sVar4 = wcslen(param_1);
    if (0x3ffffffffffffff7 < sVar4) {
      if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_0030afc8;
      sVar4 = FUN_002f9e4c(&local_a8);
LAB_0030af90:
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_0030afc8;
    }
    if (sVar4 < 5) {
      __dest = (void *)((ulong)&local_a8 | 4);
      local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar4 << 1));
      if (sVar4 != 0) goto LAB_0030aec8;
    }
    else {
      uVar1 = (sVar4 & 0x3ffffffffffffffe) + 2;
      if ((sVar4 | 1) != 5) {
        uVar1 = sVar4 | 1;
      }
      if (0x3ffffffffffffffe < uVar1) goto LAB_0030af90;
      __dest = (void *)FUN_00759c3c((uVar1 + 1) * 4);
      local_a8 = uVar1 + 1 | 1;
      local_a0 = sVar4;
      local_98 = __dest;
LAB_0030aec8:
      memcpy(__dest,param_1,sVar4 << 2);
    }
    *(undefined4 *)((long)__dest + sVar4 * 4) = 0;
    local_90 = &PTR_FUN_0075fc68;
                    /* try { // try from 0030aef0 to 0030aeff has its CatchHandler @ 0030afcc */
    local_88 = param_2;
    local_70 = &local_90;
    Krisp::AudioSdk::globalInit(&local_a8,&local_90,param_3);
    if (local_70 == &local_90) {
      lVar6 = 0x20;
      pppuVar5 = &local_90;
LAB_0030af20:
      (**(code **)((long)*pppuVar5 + lVar6))();
    }
    else if (local_70 != (undefined ***)0x0) {
      lVar6 = 0x28;
      pppuVar5 = local_70;
      goto LAB_0030af20;
    }
    sVar4 = 0;
    if ((local_a8 & 1) != 0) {
      free(local_98);
      sVar4 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0030afc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar4);
}


// ===== 0030b11c  krispGlobalDestroy =====

void krispGlobalDestroy(AudioSdk *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0030b13c to 0030b13f has its CatchHandler @ 0030b168 */
  Krisp::AudioSdk::globalDestroy(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 0030b288  krispGetVersion =====

void krispGetVersion(undefined2 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 local_38;
  undefined4 uStack_36;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == (undefined2 *)0x0) {
    Krisp::AudioSdk::getLogger((AudioSdk *)0x0);
                    /* try { // try from 0030b2f0 to 0030b2ff has its CatchHandler @ 0030b354 */
    FUN_00308244(CONCAT26(uStack_32,CONCAT42(uStack_36,local_38)),4,
                 "krispGetVersion: Null input argument");
    plVar2 = (long *)CONCAT44(uStack_2c,local_30);
    if ((plVar2 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    uVar3 = 3;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else {
    Krisp::AudioSdk::getVersion((VersionInfo *)&local_38);
    uVar3 = 0;
    *param_1 = local_38;
    *(undefined4 *)(param_1 + 1) = uStack_36;
    *(undefined4 *)(param_1 + 4) = local_30;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0030b37c  FUN_0030b37c =====

void FUN_0030b37c(void)

{
  return;
}


// ===== 0030b380  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0030b384  FUN_0030b384 =====

void FUN_0030b384(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0075fc68;
  puVar1[1] = uVar2;
  return;
}


// ===== 0030b3b8  FUN_0030b3b8 =====

void FUN_0030b3b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0075fc68;
  param_2[1] = uVar1;
  return;
}


// ===== 0030b3cc  FUN_0030b3cc =====

void FUN_0030b3cc(void)

{
  return;
}


// ===== 0030b3d0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0030b3d4  FUN_0030b3d4 =====

void FUN_0030b3d4(long param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0030b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(pbVar1,*param_3);
    return;
  }
  return;
}


// ===== 0030b3fc  FUN_0030b3fc =====

long FUN_0030b3fc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z15krispGlobalInitE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0030b418  FUN_0030b418 =====

undefined ** FUN_0030b418(void)

{
  return &PTR_PTR_thunk_FUN_0073a404_0075fcd8;
}


// ===== 0030b424  FUN_0030b424 =====

void FUN_0030b424(undefined8 *param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  byte *__s2;
  int iVar8;
  byte *pbVar9;
  void *pvVar10;
  void *pvVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  size_t in_x17;
  ulong uVar15;
  ulong uVar16;
  undefined8 local_98;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  uVar14 = 0;
  local_68 = *(long *)(lVar7 + 0x28);
  pbVar13 = (byte *)*param_3;
  pbVar3 = (byte *)param_3[1];
  local_80 = 4;
  *param_1 = 0;
  param_1[1] = 0;
  local_7f = 0x7d7b;
  param_1[2] = 0;
  local_7d = 0;
  if (pbVar13 != pbVar3) {
    pvVar11 = (void *)((ulong)&local_98 | 1);
    uVar16 = 4;
    do {
      uVar6 = (ulong)(*param_2 >> 1);
      pbVar4 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        uVar6 = *(ulong *)(param_2 + 8);
        pbVar4 = *(byte **)(param_2 + 0x10);
      }
      sVar2 = uVar16 >> 1;
      __s2 = (byte *)((ulong)&local_80 | 1);
      if ((uVar16 & 1) != 0) {
        sVar2 = in_x17;
        __s2 = local_70;
      }
      if (uVar14 <= uVar6) {
        if (sVar2 == 0) {
          if (uVar14 != 0xffffffffffffffff) {
            uVar16 = 0;
            uVar15 = uVar14;
LAB_0030b57c:
            if (uVar16 < 0x17) {
              local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar16 << 1));
              pvVar10 = pvVar11;
              if (uVar16 != 0) goto LAB_0030b5d4;
            }
            else {
              uVar6 = (uVar16 & 0xfffffffffffffff8) + 8;
              if ((uVar16 | 7) != 0x17) {
                uVar6 = uVar16 | 7;
              }
                    /* try { // try from 0030b5b4 to 0030b5bb has its CatchHandler @ 0030b830 */
              pvVar10 = (void *)FUN_00759c3c(uVar6 + 1);
              local_98 = uVar6 + 1 | 1;
              local_90 = uVar16;
              local_88 = pvVar10;
LAB_0030b5d4:
              memmove(pvVar10,pbVar4 + uVar14,uVar16);
            }
            *(undefined1 *)((long)pvVar10 + uVar16) = 0;
            pvVar10 = pvVar11;
            uVar14 = local_98 >> 1 & 0x7f;
            if ((local_98 & 1) != 0) {
              pvVar10 = local_88;
              uVar14 = local_90;
            }
                    /* try { // try from 0030b604 to 0030b60b has its CatchHandler @ 0030b870 */
            FUN_0071302c(param_1,pvVar10,uVar14);
            if ((local_98 & 1) != 0) {
              free(local_88);
            }
            uVar14 = *(ulong *)(pbVar13 + 8);
            pbVar4 = *(byte **)(pbVar13 + 0x10);
            if ((*pbVar13 & 1) == 0) {
              pbVar4 = pbVar13 + 1;
              uVar14 = (ulong)(*pbVar13 >> 1);
            }
                    /* try { // try from 0030b634 to 0030b63b has its CatchHandler @ 0030b860 */
            FUN_0071302c(param_1,pbVar4,uVar14);
            uVar16 = (ulong)local_80;
            sVar2 = (ulong)(local_80 >> 1);
            if ((local_80 & 1) != 0) {
              sVar2 = local_78;
            }
            uVar14 = sVar2 + uVar15;
            in_x17 = local_78;
          }
        }
        else {
          pbVar9 = pbVar4 + uVar14;
          pbVar1 = pbVar4 + uVar6;
          lVar12 = (long)pbVar1 - (long)pbVar9;
          if ((long)sVar2 <= lVar12) {
            bVar5 = *__s2;
            do {
              if ((0xfffffffffffffffe < lVar12 - sVar2) ||
                 (pbVar9 = (byte *)memchr(pbVar9,(uint)bVar5,(lVar12 - sVar2) + 1),
                 pbVar9 == (byte *)0x0)) break;
              iVar8 = memcmp(pbVar9,__s2,sVar2);
              if (iVar8 == 0) {
                if ((pbVar9 != pbVar1) &&
                   (uVar15 = (long)pbVar9 - (long)pbVar4, uVar15 != 0xffffffffffffffff)) {
                  uVar16 = uVar6 - uVar14;
                  if (uVar15 - uVar14 <= uVar6 - uVar14) {
                    uVar16 = uVar15 - uVar14;
                  }
                  if (uVar16 < 0xfffffffffffffff8) goto LAB_0030b57c;
                  if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 0030b7ec to 0030b7f3 has its CatchHandler @ 0030b850 */
                    /* WARNING: Subroutine does not return */
                    FUN_002fb400(&local_98);
                  }
                  goto LAB_0030b8f0;
                }
                break;
              }
              pbVar9 = pbVar9 + 1;
              lVar12 = (long)pbVar1 - (long)pbVar9;
            } while ((long)sVar2 <= lVar12);
          }
        }
      }
      pbVar13 = pbVar13 + 0x18;
    } while (pbVar13 != pbVar3);
  }
  bVar5 = *param_2;
  uVar16 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar16 = *(ulong *)(param_2 + 8);
  }
  uVar6 = uVar16 - uVar14;
  if (uVar16 < uVar14) {
    if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 0030b808 to 0030b82b has its CatchHandler @ 0030b840 */
                    /* WARNING: Subroutine does not return */
      FUN_0030b8f4(&local_98);
    }
    goto LAB_0030b8f0;
  }
  pbVar13 = *(byte **)(param_2 + 0x10);
  if ((bVar5 & 1) == 0) {
    pbVar13 = param_2 + 1;
  }
  if (0xfffffffffffffff7 < uVar6) {
    if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_98);
    }
    goto LAB_0030b8f0;
  }
  if (uVar6 < 0x17) {
    pvVar11 = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar6 << 1));
    if (uVar16 != uVar14) goto LAB_0030b72c;
  }
  else {
    uVar16 = (uVar6 & 0xfffffffffffffff8) + 8;
    if ((uVar6 | 7) != 0x17) {
      uVar16 = uVar6 | 7;
    }
                    /* try { // try from 0030b710 to 0030b717 has its CatchHandler @ 0030b840 */
    pvVar11 = (void *)FUN_00759c3c(uVar16 + 1);
    local_98 = uVar16 + 1 | 1;
    local_90 = uVar6;
    local_88 = pvVar11;
LAB_0030b72c:
    memmove(pvVar11,pbVar13 + uVar14,uVar6);
  }
  *(undefined1 *)((long)pvVar11 + uVar6) = 0;
  uVar14 = local_90;
  pvVar11 = local_88;
  if ((local_98 & 1) == 0) {
    uVar14 = local_98 >> 1 & 0x7f;
    pvVar11 = (void *)((long)&local_98 + 1);
  }
                    /* try { // try from 0030b75c to 0030b763 has its CatchHandler @ 0030b82c */
  FUN_0071302c(param_1,pvVar11,uVar14);
  if ((local_98 & 1) != 0) {
    free(local_88);
  }
  if ((local_80 & 1) == 0) {
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
  else {
    free(local_70);
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
LAB_0030b8f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030b8f4  FUN_0030b8f4 =====

void FUN_0030b8f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0030b908("basic_string");
}


// ===== 0030b908  FUN_0030b908 =====

void FUN_0030b908(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 0030b924 to 0030b92b has its CatchHandler @ 0030b944 */
  FUN_0030b958(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a11b0,PTR_FUN_007a11b8);
}


// ===== 0030b958  FUN_0030b958 =====

void FUN_0030b958(undefined8 *param_1)

{
  FUN_00712630();
  *param_1 = &PTR_FUN_0079de58;
  return;
}


// ===== 0030b988  FUN_0030b988 =====

void FUN_0030b988(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_2[4];
  *param_1 = (long)(PTR_DAT_007a11c8 + 0x10);
  if (plVar1 == (long *)0x0) {
    param_1[6] = 0;
  }
  else if (plVar1 == param_2) {
    param_1[6] = (long)(param_1 + 2);
    (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1 + 2);
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    param_1[6] = lVar2;
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  return;
}


// ===== 0030ba14  FUN_0030ba14 =====

void FUN_0030ba14(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00715bcc(param_1 + 0x44);
  local_50 = (long *)param_2[4];
  if (local_50 != (long *)0x0) {
    if (local_50 == param_2) {
      local_50 = local_70;
      (**(code **)(*param_2 + 0x18))(param_2,local_70);
    }
    else {
                    /* try { // try from 0030ba5c to 0030ba83 has its CatchHandler @ 0030baec */
      local_50 = (long *)(**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_0030bcf0(local_70,param_1 + 0x10);
  if (local_50 == local_70) {
    lVar3 = 0x20;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0030bac0;
    lVar3 = 0x28;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0030bac0:
  FUN_00715bf8(param_1 + 0x44);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0030bb14  FUN_0030bb14 =====

void FUN_0030bb14(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}


// ===== 0030bb20  FUN_0030bb20 =====

bool FUN_0030bb20(long param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (param_2 != 6) {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x40);
    bVar3 = SBORROW4(iVar4,param_2);
    bVar1 = iVar4 - param_2 < 0;
    bVar2 = iVar4 == param_2;
  }
  return bVar2 || bVar1 != bVar3;
}


