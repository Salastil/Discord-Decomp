// ===== 0011a344  entry =====

void entry(void)

{
  __cxa_finalize(&PTR_LOOP_0013d990);
  return;
}


// ===== 0011a354  FUN_0011a354 =====

void FUN_0011a354(void)

{
  return;
}


// ===== 0011a35c  _FINI_0 =====

void _FINI_0(void)

{
  FUN_00134cc8();
  return;
}


// ===== 0011a364  FUN_0011a364 =====

void FUN_0011a364(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0011a370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0011a378  FUN_0011a378 =====

void FUN_0011a378(undefined8 param_1)

{
  __cxa_atexit(FUN_0011a364,param_1,&PTR_LOOP_0013d990);
  return;
}


// ===== 0011a398  Java_com_linkedin_android_litr_render_OboeAudioProcessor_initProcessor =====

void Java_com_linkedin_android_litr_render_OboeAudioProcessor_initProcessor
               (long *param_1,undefined8 param_2,uint param_3,undefined4 param_4,uint param_5,
               undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar2 = resampler::MultiChannelResampler::make(param_5,param_4,param_6,3);
  *(undefined8 *)PTR_oboeResampler_001411f0 = uVar2;
  if ((((param_3 != param_5) && (1 < (int)param_3)) && (1 < (int)param_5)) &&
     (lVar3 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/IllegalArgumentException"),
     lVar3 != 0)) {
    (**(code **)(*param_1 + 0x70))
              (param_1,lVar3,"Multiple channel to multiple channel mixing is not supported");
  }
  puVar1 = PTR_inputChannelCount_001411f8;
  uVar5 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
  *(uint *)PTR_outputChannelCount_00141200 = param_5;
  if ((ulong)(long)(int)param_5 >> 0x3e != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  *(uint *)puVar1 = param_3;
  pvVar4 = operator_new__(uVar5);
  *(void **)PTR_resamplerInputBuffer_00141208 = pvVar4;
  pvVar4 = operator_new__(uVar5);
  *(void **)PTR_resamplerOutputBuffer_00141210 = pvVar4;
  return;
}


// ===== 0011a484  Java_com_linkedin_android_litr_render_OboeAudioProcessor_processAudioFrame =====

int Java_com_linkedin_android_litr_render_OboeAudioProcessor_processAudioFrame
              (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
              int param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  signed *psVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  
  puVar4 = PTR_outputChannelCount_00141200;
  puVar3 = PTR_oboeResampler_001411f0;
  iVar13 = 0;
  if (((*(long *)PTR_oboeResampler_001411f0 != 0) && (0 < *(int *)PTR_inputChannelCount_001411f8))
     && (0 < *(int *)PTR_outputChannelCount_00141200)) {
    psVar7 = (signed *)(**(code **)(*param_1 + 0x730))(param_1,param_3);
    lVar8 = (**(code **)(*param_1 + 0x730))(param_1,param_5);
    puVar6 = PTR_resamplerOutputBuffer_00141210;
    puVar5 = PTR_resamplerInputBuffer_00141208;
    if (param_4 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar12 = param_4;
      do {
        while (plVar14 = *(long **)puVar3, (int)plVar14[0xb] < (int)plVar14[0xc]) {
          (**(code **)(*plVar14 + 0x18))(plVar14,*(undefined8 *)puVar6);
          *(int *)(plVar14 + 0xb) = (int)plVar14[0xb] + *(int *)((long)plVar14 + 0x5c);
          iVar9 = *(int *)puVar4;
          if (0 < iVar9) {
            lVar10 = 0;
            do {
              fVar16 = *(float *)(*(long *)puVar6 + lVar10 * 4);
              fVar15 = -32768.0;
              if ((-32768.0 <= fVar16) &&
                 (fVar15 = fVar16, fVar16 != 32767.0 && fVar16 < 32767.0 == NAN(fVar16))) {
                fVar15 = 32767.0;
              }
              uVar1 = (int)lVar10 + iVar13 * iVar9;
              uVar2 = (ulong)uVar1 << 1;
              uVar11 = (long)(int)uVar2 | 1;
              if ((int)uVar11 < param_6) {
                *(char *)(lVar8 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar2)) =
                     (char)(int)fVar15;
                *(char *)(lVar8 + uVar11) = (char)((uint)(int)fVar15 >> 8);
                iVar9 = *(int *)puVar4;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < iVar9);
          }
          iVar13 = iVar13 + 1;
          if (iVar12 < 1) {
            return iVar13;
          }
        }
        populateInputBuffer(psVar7,param_4 - iVar12,*(float **)puVar5,
                            *(int *)PTR_inputChannelCount_001411f8,*(int *)puVar4);
        plVar14 = *(long **)puVar3;
        (**(code **)(*plVar14 + 0x10))(plVar14,*(undefined8 *)puVar5);
        iVar12 = iVar12 + -1;
        *(int *)(plVar14 + 0xb) = (int)plVar14[0xb] - (int)plVar14[0xc];
      } while (0 < iVar12);
    }
  }
  return iVar13;
}


// ===== 0011a690  populateInputBuffer =====

/* populateInputBuffer(signed char const*, int, float*, int, int) */

void populateInputBuffer(signed *param_1,int param_2,float *param_3,int param_4,int param_5)

{
  signed *psVar1;
  signed sVar2;
  signed sVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  signed *psVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uVar15;
  
  uVar11 = param_4 * param_2;
  if (param_4 == param_5) {
    if (0 < param_4) {
      uVar4 = (ulong)(uint)param_4;
      if (((uint)param_4 < 4) ||
         ((param_3 < param_1 + (long)(int)(uVar11 * 2) + uVar4 * 2 &&
          (param_1 + (int)(uVar11 * 2) < (signed *)(param_3 + uVar4))))) {
        uVar10 = 0;
        iVar9 = 0;
      }
      else {
        uVar10 = uVar4 & 0xfffffffc;
        uVar11 = uVar11 * 2 | 1;
        uVar8 = uVar10;
        pfVar6 = param_3;
        do {
          lVar5 = (long)(int)uVar11;
          uVar8 = uVar8 - 4;
          uVar11 = uVar11 + 8;
          uVar15 = NEON_rev16(*(undefined8 *)(param_1 + lVar5 + -1),1);
          uVar15 = NEON_sli(*(undefined8 *)(param_1 + lVar5 + -1),uVar15,8,2);
          auVar12._0_4_ = (int)(short)uVar15;
          auVar12._4_4_ = (int)(short)((ulong)uVar15 >> 0x10);
          auVar12._8_4_ = (int)(short)((ulong)uVar15 >> 0x20);
          auVar12._12_4_ = (int)(short)((ulong)uVar15 >> 0x30);
          auVar13 = NEON_scvtf(auVar12,4);
          *(long *)(pfVar6 + 2) = auVar13._8_8_;
          *(long *)pfVar6 = auVar13._0_8_;
          pfVar6 = pfVar6 + 4;
        } while (uVar8 != 0);
        iVar9 = (int)uVar10;
        if (uVar10 == uVar4) {
          return;
        }
      }
      lVar5 = uVar4 - uVar10;
      psVar7 = param_1 + (long)((iVar9 + param_4 * param_2) * 2) + 1;
      pfVar6 = param_3 + uVar10;
      do {
        psVar1 = psVar7 + -1;
        lVar5 = lVar5 + -1;
        psVar7 = psVar7 + 2;
        *pfVar6 = (float)(int)*(short *)psVar1;
        pfVar6 = pfVar6 + 1;
      } while (lVar5 != 0);
    }
  }
  else if (param_4 == 1) {
    if (0 < param_5) {
      psVar7 = param_1 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar11 << 1);
      psVar1 = param_1 + ((long)(int)((ulong)uVar11 << 1) | 1);
      uVar4 = (ulong)(uint)param_5;
      if (((uint)param_5 < 8) || ((param_3 < psVar1 && (psVar7 < (signed *)(param_3 + uVar4))))) {
        uVar10 = 0;
      }
      else {
        sVar2 = *psVar1;
        sVar3 = *psVar7;
        uVar10 = uVar4 & 0xfffffff8;
        uVar15 = NEON_sli((ulong)CONCAT16(sVar3,(uint6)CONCAT14(sVar3,(uint)CONCAT12(sVar3,(ushort)(
                                                  byte)sVar3))),
                          (ulong)CONCAT16(sVar2,(uint6)CONCAT14(sVar2,(uint)CONCAT12(sVar2,(ushort)(
                                                  byte)sVar2))),8,2);
        auVar13._0_4_ = (int)(short)uVar15;
        auVar13._4_4_ = (int)(short)((ulong)uVar15 >> 0x10);
        auVar13._8_4_ = (int)(short)((ulong)uVar15 >> 0x20);
        auVar13._12_4_ = (int)(short)((ulong)uVar15 >> 0x30);
        auVar13 = NEON_scvtf(auVar13,4);
        pfVar6 = param_3 + 4;
        uVar8 = uVar10;
        do {
          *(long *)(pfVar6 + -2) = auVar13._8_8_;
          *(long *)(pfVar6 + -4) = auVar13._0_8_;
          *(long *)(pfVar6 + 2) = auVar13._8_8_;
          *(long *)pfVar6 = auVar13._0_8_;
          uVar8 = uVar8 - 8;
          pfVar6 = pfVar6 + 8;
        } while (uVar8 != 0);
        if (uVar10 == uVar4) {
          return;
        }
      }
      lVar5 = uVar4 - uVar10;
      pfVar6 = param_3 + uVar10;
      do {
        lVar5 = lVar5 + -1;
        *pfVar6 = (float)(int)CONCAT11(*psVar1,*psVar7);
        pfVar6 = pfVar6 + 1;
      } while (lVar5 != 0);
    }
  }
  else if (param_5 == 1) {
    if (0 < param_4) {
      uVar4 = (ulong)(uint)param_4;
      psVar7 = param_1 + (long)(int)(uVar11 * 2) + 1;
      fVar14 = 0.0;
      do {
        psVar1 = psVar7 + -1;
        uVar4 = uVar4 - 1;
        psVar7 = psVar7 + 2;
        fVar14 = fVar14 + (float)(int)*(short *)psVar1 / (float)param_4;
      } while (uVar4 != 0);
      *param_3 = fVar14;
      return;
    }
    *param_3 = 0.0;
    return;
  }
  return;
}


// ===== 0011a878  Java_com_linkedin_android_litr_render_OboeAudioProcessor_releaseProcessor =====

void Java_com_linkedin_android_litr_render_OboeAudioProcessor_releaseProcessor(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_oboeResampler_001411f0;
  if (*(long **)PTR_oboeResampler_001411f0 != (long *)0x0) {
    (**(code **)(**(long **)PTR_oboeResampler_001411f0 + 8))();
    *(undefined8 *)puVar1 = 0;
    puVar1 = PTR_outputChannelCount_00141200;
    *(undefined4 *)PTR_inputChannelCount_001411f8 = 0xffffffff;
    *(undefined4 *)puVar1 = 0xffffffff;
  }
  puVar1 = PTR_resamplerInputBuffer_00141208;
  if (*(void **)PTR_resamplerInputBuffer_00141208 != (void *)0x0) {
    operator_delete__(*(void **)PTR_resamplerInputBuffer_00141208);
    *(undefined8 *)puVar1 = 0;
  }
  puVar1 = PTR_resamplerOutputBuffer_00141210;
  if (*(void **)PTR_resamplerOutputBuffer_00141210 != (void *)0x0) {
    operator_delete__(*(void **)PTR_resamplerOutputBuffer_00141210);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


// ===== 0011a8fc  getSourceValue =====

/* getSourceValue(signed char const*, int) */

float getSourceValue(signed *param_1,int param_2)

{
  return (float)(int)CONCAT11(param_1[(long)(int)((ulong)(uint)param_2 << 1) | 1],
                              param_1[-(ulong)((uint)param_2 >> 0x1f) & 0xfffffffe00000000 |
                                      (ulong)(uint)param_2 << 1]);
}


// ===== 0011a920  resampler::MultiChannelResampler::MultiChannelResampler =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* resampler::MultiChannelResampler::MultiChannelResampler(resampler::MultiChannelResampler::Builder
   const&) */

void __thiscall
resampler::MultiChannelResampler::MultiChannelResampler
          (MultiChannelResampler *this,Builder *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(this + 0x20) = iVar1;
  *(undefined4 *)(this + 0x24) = 0;
  iVar2 = *(int *)param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  iVar2 = iVar2 * iVar1;
  if (iVar2 == 0) {
LAB_0011a9c4:
    iVar1 = *(int *)param_1;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    if (iVar1 != 0) {
      if (iVar1 < 0) goto LAB_0011aa7c;
      uVar6 = (long)iVar1 * 4;
                    /* try { // try from 0011a9e0 to 0011a9e7 has its CatchHandler @ 0011aa8c */
      pvVar5 = operator_new(uVar6);
      *(void **)(this + 0x40) = pvVar5;
      *(void **)(this + 0x50) = (void *)((long)pvVar5 + (long)iVar1 * 4);
      memset(pvVar5,0,uVar6);
      *(void **)(this + 0x48) = (void *)(uVar6 + (long)pvVar5);
    }
    uVar4 = _UNK_001130d8;
    uVar7 = _DAT_001130d0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x70) = uVar4;
    *(undefined8 *)(this + 0x68) = uVar7;
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    local_60 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 0011aa2c to 0011aa33 has its CatchHandler @ 0011aa88 */
    IntegerRatio::reduce((IntegerRatio *)&local_60);
    uVar7 = NEON_rev64(local_60,4);
    *(int *)(this + 0x60) = (int)((ulong)local_60 >> 0x20);
    *(undefined8 *)(this + 0x58) = uVar7;
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return;
    }
  }
  else {
    if (-1 < iVar2) {
      uVar6 = (long)(iVar2 * 2) * 4;
                    /* try { // try from 0011a99c to 0011a9a3 has its CatchHandler @ 0011aab4 */
      pvVar5 = operator_new(uVar6);
      *(void **)(this + 0x28) = pvVar5;
      *(void **)(this + 0x38) = (void *)((long)pvVar5 + (long)(iVar2 * 2) * 4);
      memset(pvVar5,0,uVar6);
      *(void **)(this + 0x30) = (void *)(uVar6 + (long)pvVar5);
      goto LAB_0011a9c4;
    }
                    /* try { // try from 0011aa74 to 0011aa7b has its CatchHandler @ 0011aab4 */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
LAB_0011aa7c:
                    /* try { // try from 0011aa7c to 0011aa83 has its CatchHandler @ 0011aa8c */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011aae4  resampler::MultiChannelResampler::make =====

/* resampler::MultiChannelResampler::make(int, int, int, resampler::MultiChannelResampler::Quality)
    */

void resampler::MultiChannelResampler::make
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_4 < 5) {
    local_3c = *(undefined4 *)(&DAT_00113114 + (long)(int)param_4 * 4);
  }
  else {
    local_3c = 8;
  }
  local_30 = 0x3f333333;
  local_40 = param_1;
  local_38 = param_2;
  local_34 = param_3;
  Builder::build((Builder *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011ab74  resampler::MultiChannelResampler::Builder::build =====

/* resampler::MultiChannelResampler::Builder::build() */

LinearResampler * __thiscall resampler::MultiChannelResampler::Builder::build(Builder *this)

{
  int iVar1;
  long lVar2;
  LinearResampler *this_00;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 4) == 2) {
    this_00 = (LinearResampler *)operator_new(0x90);
                    /* try { // try from 0011abb0 to 0011abb7 has its CatchHandler @ 0011aca0 */
    LinearResampler::LinearResampler(this_00,this);
  }
  else {
    local_40 = *(undefined8 *)(this + 8);
    IntegerRatio::reduce((IntegerRatio *)&local_40);
    iVar1 = *(int *)this;
    if (local_40._4_4_ * *(int *)(this + 4) < 0x2001) {
      if (iVar1 == 2) {
        this_00 = (LinearResampler *)operator_new(0x80);
                    /* try { // try from 0011ac68 to 0011ac6f has its CatchHandler @ 0011ac90 */
        PolyphaseResamplerStereo::PolyphaseResamplerStereo((PolyphaseResamplerStereo *)this_00,this)
        ;
      }
      else if (iVar1 == 1) {
        this_00 = (LinearResampler *)operator_new(0x80);
                    /* try { // try from 0011ac20 to 0011ac27 has its CatchHandler @ 0011ac94 */
        PolyphaseResamplerMono::PolyphaseResamplerMono((PolyphaseResamplerMono *)this_00,this);
      }
      else {
        this_00 = (LinearResampler *)operator_new(0x80);
                    /* try { // try from 0011ac7c to 0011ac83 has its CatchHandler @ 0011ac8c */
        PolyphaseResampler::PolyphaseResampler((PolyphaseResampler *)this_00,this);
      }
    }
    else {
      this_00 = (LinearResampler *)operator_new(0xa8);
      if (iVar1 == 2) {
                    /* try { // try from 0011ac40 to 0011ac4b has its CatchHandler @ 0011ac9c */
        SincResamplerStereo::SincResamplerStereo((SincResamplerStereo *)this_00,this);
      }
      else {
                    /* try { // try from 0011ac50 to 0011ac5b has its CatchHandler @ 0011ac98 */
        SincResampler::SincResampler((SincResampler *)this_00,this);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011acb4  resampler::MultiChannelResampler::writeFrame =====

/* resampler::MultiChannelResampler::writeFrame(float const*) */

void __thiscall
resampler::MultiChannelResampler::writeFrame(MultiChannelResampler *this,float *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  iVar3 = *(int *)(this + 0x24);
  iVar7 = iVar3 + -1;
  *(int *)(this + 0x24) = iVar7;
  if (iVar3 < 1) {
    iVar7 = *(int *)(this + 0x20) + -1;
    *(int *)(this + 0x24) = iVar7;
  }
  uVar4 = *(uint *)(this + 0x78);
  uVar5 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    lVar8 = *(long *)(this + 0x28);
    lVar10 = (long)(int)(uVar4 * iVar7);
    lVar13 = (long)(int)(*(int *)(this + 0x20) * uVar4);
    uVar12 = 0;
    if (7 < uVar4) {
      pfVar9 = (float *)(lVar8 + (long)(int)(uVar4 * iVar7) * 4);
      pfVar11 = (float *)(lVar8 + (lVar10 + lVar13) * 4);
      pfVar14 = (float *)(lVar8 + (lVar10 + uVar5) * 4);
      pfVar1 = (float *)(lVar8 + (lVar10 + lVar13 + uVar5) * 4);
      if (((pfVar14 <= pfVar11 || pfVar1 <= pfVar9) &&
          (param_1 + uVar5 <= pfVar11 || pfVar1 <= param_1)) &&
         (param_1 + uVar5 <= pfVar9 || pfVar14 <= param_1)) {
        uVar12 = uVar5 & 0xfffffff8;
        pfVar9 = param_1 + 4;
        puVar15 = (undefined8 *)(lVar8 + lVar10 * 4 + 0x10);
        uVar16 = uVar12;
        do {
          uVar19 = *(undefined8 *)(pfVar9 + -2);
          uVar18 = *(undefined8 *)(pfVar9 + -4);
          uVar21 = *(undefined8 *)(pfVar9 + 2);
          uVar20 = *(undefined8 *)pfVar9;
          puVar2 = (undefined8 *)((long)puVar15 + lVar13 * 4);
          uVar16 = uVar16 - 8;
          pfVar9 = pfVar9 + 8;
          puVar2[-1] = uVar19;
          puVar2[-2] = uVar18;
          puVar2[1] = uVar21;
          *puVar2 = uVar20;
          puVar15[-1] = uVar19;
          puVar15[-2] = uVar18;
          puVar15[1] = uVar21;
          *puVar15 = uVar20;
          puVar15 = puVar15 + 4;
        } while (uVar16 != 0);
        if (uVar12 == uVar5) {
          return;
        }
      }
    }
    lVar6 = uVar5 - uVar12;
    pfVar9 = (float *)(lVar8 + (uVar12 + lVar13 + lVar10) * 4);
    pfVar11 = (float *)(lVar8 + (uVar12 + lVar10) * 4);
    pfVar14 = param_1 + uVar12;
    do {
      fVar17 = *pfVar14;
      lVar6 = lVar6 + -1;
      *pfVar9 = fVar17;
      *pfVar11 = fVar17;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
      pfVar14 = pfVar14 + 1;
    } while (lVar6 != 0);
  }
  return;
}


// ===== 0011add8  resampler::MultiChannelResampler::sinc =====

/* resampler::MultiChannelResampler::sinc(float) */

float resampler::MultiChannelResampler::sinc(float param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (DAT_001130e8 <= (double)ABS(param_1)) {
    fVar1 = sinf(param_1);
    fVar1 = fVar1 / param_1;
  }
  return fVar1;
}


// ===== 0011ae1c  resampler::MultiChannelResampler::generateCoefficients =====

/* resampler::MultiChannelResampler::generateCoefficients(int, int, int, double, float) */

void __thiscall
resampler::MultiChannelResampler::generateCoefficients
          (MultiChannelResampler *this,int param_1,int param_2,int param_3,double param_4,
          float param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float __x;
  double dVar24;
  double dVar25;
  
  lVar8 = *(long *)(this + 8);
  uVar9 = (long)*(int *)(this + 0x20) * (long)param_3;
  uVar10 = *(long *)(this + 0x10) - lVar8 >> 2;
  if (uVar10 < uVar9) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 8),uVar9 - uVar10);
  }
  else if (uVar9 < uVar10) {
    *(ulong *)(this + 0x10) = lVar8 + uVar9 * 4;
  }
  dVar5 = DAT_001130e8;
  dVar4 = DAT_001130e0;
  uVar3 = *(uint *)(this + 0x20);
  iVar2 = param_1;
  if (param_1 <= param_2) {
    iVar2 = param_2;
    param_2 = param_1;
  }
  uVar1 = uVar3;
  if ((int)uVar3 < 0) {
    uVar1 = uVar3 + 1;
  }
  if (0 < param_3) {
    iVar14 = 0;
    dVar24 = 0.0;
    iVar15 = 0;
    do {
      iVar16 = iVar15;
      if ((int)uVar3 < 1) {
        fVar23 = 0.0;
      }
      else {
        lVar8 = *(long *)(this + 8);
        uVar11 = (ulong)iVar15;
        fVar23 = 0.0;
        uVar12 = *(long *)(this + 0x10) - lVar8;
        uVar9 = lVar8 - *(long *)(this + 0x10);
        uVar10 = uVar12;
        if ((long)uVar12 < 0) {
          uVar10 = 0xffffffffffffffff;
        }
        if (0 < (long)uVar10) {
          uVar10 = 1;
        }
        if ((long)uVar9 <= (long)uVar12) {
          uVar9 = uVar12;
        }
        uVar10 = uVar10 * (uVar9 >> 2);
        if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
          uVar10 = uVar11;
        }
        dVar21 = dVar24 - (double)((int)uVar1 >> 1);
        lVar18 = uVar10 - uVar11;
        pfVar17 = (float *)(lVar8 + (long)iVar15 * 4);
        uVar19 = uVar3;
        do {
          dVar22 = (double)((1.0 / (float)((int)uVar1 >> 1)) * (float)dVar21);
          dVar22 = dVar22 * dVar22;
          dVar25 = 0.0;
          if (dVar22 < 1.0 != NAN(dVar22)) {
            dVar25 = cosh(SQRT(1.0 - dVar22) * *(double *)(this + 0x68));
            dVar25 = dVar25 * *(double *)(this + 0x70);
          }
          dVar21 = (double)(float)dVar21;
          __x = ((float)param_2 / (float)iVar2) * param_5 * (float)(dVar21 * dVar4);
          fVar20 = 1.0;
          if (dVar5 <= (double)ABS(__x)) {
            fVar20 = sinf(__x);
            fVar20 = fVar20 / __x;
          }
          if (lVar18 == 0) goto LAB_0011b0c4;
          dVar21 = dVar21 + 1.0;
          lVar18 = lVar18 + -1;
          uVar19 = uVar19 - 1;
          *pfVar17 = fVar20 * (float)dVar25;
          fVar23 = fVar23 + fVar20 * (float)dVar25;
          iVar16 = iVar16 + 1;
          pfVar17 = pfVar17 + 1;
        } while (uVar19 != 0);
      }
      dVar24 = dVar24 + param_4;
      if (dVar24 < 1.0 == NAN(dVar24)) {
        do {
          dVar24 = dVar24 + -1.0;
        } while (dVar24 < 1.0 == NAN(dVar24));
      }
      if (0 < (int)uVar3) {
        lVar8 = *(long *)(this + 8);
        lVar18 = *(long *)(this + 0x10);
        uVar9 = (ulong)iVar15;
        uVar10 = (ulong)uVar3;
        do {
          if ((ulong)(lVar18 - lVar8 >> 2) <= uVar9) {
LAB_0011b0c4:
            plVar6 = (long *)std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
            pvVar7 = (void *)plVar6[8];
            *plVar6 = (long)(PTR_vtable_00141218 + 0x10);
            if (pvVar7 != (void *)0x0) {
              plVar6[9] = (long)pvVar7;
              operator_delete(pvVar7);
            }
            pvVar7 = (void *)plVar6[5];
            if (pvVar7 != (void *)0x0) {
              plVar6[6] = (long)pvVar7;
              operator_delete(pvVar7);
            }
            pvVar7 = (void *)plVar6[1];
            if (pvVar7 == (void *)0x0) {
              return;
            }
            plVar6[2] = (long)pvVar7;
            operator_delete(pvVar7);
            return;
          }
          lVar13 = uVar9 * 4;
          uVar10 = uVar10 - 1;
          uVar9 = uVar9 + 1;
          *(float *)(lVar8 + lVar13) = (1.0 / fVar23) * *(float *)(lVar8 + lVar13);
        } while (uVar10 != 0);
      }
      iVar14 = iVar14 + 1;
      iVar15 = iVar16;
    } while (iVar14 != param_3);
  }
  return;
}


// ===== 0011b0cc  resampler::MultiChannelResampler::~MultiChannelResampler =====

/* resampler::MultiChannelResampler::~MultiChannelResampler() */

void __thiscall
resampler::MultiChannelResampler::~MultiChannelResampler(MultiChannelResampler *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0011b130  resampler::MultiChannelResampler::~MultiChannelResampler =====

/* resampler::MultiChannelResampler::~MultiChannelResampler() */

void __thiscall
resampler::MultiChannelResampler::~MultiChannelResampler(MultiChannelResampler *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x11b134);
  (*pcVar1)();
}


// ===== 0011b134  FUN_0011b134 =====

void FUN_0011b134(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0011b150 to 0011b157 has its CatchHandler @ 0011b170 */
  FUN_0011b184(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_00141220,PTR__out_of_range_00141228);
}


// ===== 0011b184  FUN_0011b184 =====

void FUN_0011b184(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_00141230 + 0x10;
  return;
}


// ===== 0011b1b4  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append =====

/* std::__ndk1::vector<float, std::__ndk1::allocator<float> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
          (vector<float,std::__ndk1::allocator<float>> *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  size_t __n;
  
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)pvVar2 >> 2) < param_1) {
    pvVar5 = *(void **)this;
    __n = (long)pvVar2 - (long)pvVar5;
    uVar1 = ((long)__n >> 2) + param_1;
    if (uVar1 >> 0x3e != 0) {
      __vector_base_common<true>::__throw_length_error();
LAB_0011b2d8:
                    /* WARNING: Subroutine does not return */
      FUN_0011b134("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    lVar3 = *(long *)(this + 0x10) - (long)pvVar5;
    uVar4 = lVar3 >> 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x1ffffffffffffffe < (ulong)(lVar3 >> 2)) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_0011b2d8;
      pvVar2 = operator_new(uVar1 << 2);
    }
    __s = (void *)((long)pvVar2 + ((long)__n >> 2) * 4);
    memset(__s,0,param_1 * 4);
    if (0 < (long)__n) {
      memcpy(pvVar2,pvVar5,__n);
      pvVar5 = *(void **)this;
    }
    *(void **)this = pvVar2;
    *(void **)(this + 8) = (void *)(param_1 * 4 + (long)__s);
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 4);
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
      return;
    }
  }
  else {
    pvVar5 = pvVar2;
    if (param_1 != 0) {
      pvVar5 = (void *)(param_1 * 4 + (long)pvVar2);
      memset(pvVar2,0,param_1 * 4);
    }
    *(void **)(this + 8) = pvVar5;
  }
  return;
}


// ===== 0011b2e4  resampler::IntegerRatio::reduce =====

/* resampler::IntegerRatio::reduce() */

void __thiscall resampler::IntegerRatio::reduce(IntegerRatio *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)this;
  piVar3 = &DAT_00113128;
  do {
    iVar1 = *piVar3;
    if (iVar4 < iVar1) {
      return;
    }
    iVar5 = *(int *)(this + 4);
    if (*(int *)(this + 4) < iVar1) {
      return;
    }
    while( true ) {
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar5 / iVar1;
      }
      if (iVar2 * iVar1 != iVar5) break;
      iVar5 = 0;
      if (iVar1 != 0) {
        iVar5 = iVar4 / iVar1;
      }
      if (((iVar5 * iVar1 != iVar4) || (iVar5 < 1)) || (iVar2 < 1)) break;
      *(int *)this = iVar5;
      *(int *)(this + 4) = iVar2;
      iVar4 = iVar5;
      iVar5 = iVar2;
    }
    piVar3 = piVar3 + 1;
    if (piVar3 == (int *)"N9resampler15LinearResamplerE") {
      return;
    }
  } while( true );
}


// ===== 0011b364  resampler::LinearResampler::LinearResampler =====

/* resampler::LinearResampler::LinearResampler(resampler::MultiChannelResampler::Builder const&) */

void __thiscall resampler::LinearResampler::LinearResampler(LinearResampler *this,Builder *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  ulong __n;
  
  MultiChannelResampler::MultiChannelResampler((MultiChannelResampler *)this,param_1);
  puVar1 = PTR_vtable_00141238;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x80) = 0;
  __n = (long)*(int *)(this + 0x78) << 2;
  if ((ulong)(long)*(int *)(this + 0x78) >> 0x3e != 0) {
    __n = 0xffffffffffffffff;
  }
                    /* try { // try from 0011b3ac to 0011b3b3 has its CatchHandler @ 0011b40c */
  pvVar2 = operator_new__(__n);
  memset(pvVar2,0,__n);
  *(void **)(this + 0x80) = pvVar2;
                    /* try { // try from 0011b3c8 to 0011b3cf has its CatchHandler @ 0011b3f8 */
  pvVar2 = operator_new__(__n);
  memset(pvVar2,0,__n);
  *(void **)(this + 0x88) = pvVar2;
  return;
}


// ===== 0011b474  resampler::LinearResampler::writeFrame =====

/* resampler::LinearResampler::writeFrame(float const*) */

void __thiscall resampler::LinearResampler::writeFrame(LinearResampler *this,float *param_1)

{
  memcpy(*(void **)(this + 0x80),*(void **)(this + 0x88),(long)*(int *)(this + 0x78) << 2);
  memcpy(*(void **)(this + 0x88),param_1,(long)*(int *)(this + 0x78) << 2);
  return;
}


// ===== 0011b4bc  resampler::LinearResampler::readFrame =====

/* resampler::LinearResampler::readFrame(float*) */

void __thiscall resampler::LinearResampler::readFrame(LinearResampler *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  iVar5 = *(int *)(this + 0x78);
  uVar6 = (ulong)(iVar5 - 1U);
  if (0 < iVar5) {
    pfVar7 = *(float **)(this + 0x80);
    pfVar9 = *(float **)(this + 0x88);
    fVar14 = (float)*(int *)(this + 0x58) / (float)*(int *)(this + 0x60);
    uVar8 = 0;
    if (6 < iVar5 - 1U) {
      if ((pfVar7 + uVar6 + 1 <= param_1 || param_1 + uVar6 + 1 <= pfVar7) &&
         (pfVar9 + uVar6 + 1 <= param_1 || param_1 + uVar6 + 1 <= pfVar9)) {
        uVar8 = uVar6 + 1 & 0x1fffffff8;
        pfVar10 = pfVar9 + 4;
        pfVar11 = pfVar7 + 4;
        pfVar7 = pfVar7 + uVar8;
        pfVar9 = pfVar9 + uVar8;
        pfVar12 = param_1 + 4;
        uVar13 = uVar8;
        do {
          pfVar1 = pfVar11 + -4;
          pfVar2 = pfVar11 + -2;
          pfVar3 = pfVar11 + 2;
          uVar20 = *(undefined8 *)pfVar11;
          pfVar4 = pfVar10 + -2;
          uVar24 = *(undefined8 *)(pfVar10 + -4);
          uVar26 = *(undefined8 *)(pfVar10 + 2);
          uVar25 = *(undefined8 *)pfVar10;
          pfVar10 = pfVar10 + 8;
          pfVar11 = pfVar11 + 8;
          uVar13 = uVar13 - 8;
          fVar15 = (float)*(undefined8 *)pfVar1;
          fVar16 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
          fVar17 = (float)*(undefined8 *)pfVar2;
          fVar18 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
          fVar19 = (float)uVar20;
          fVar21 = (float)((ulong)uVar20 >> 0x20);
          fVar22 = (float)*(undefined8 *)pfVar3;
          fVar23 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
          *(ulong *)(pfVar12 + -2) =
               CONCAT44(fVar18 + fVar14 * ((float)((ulong)*(undefined8 *)pfVar4 >> 0x20) - fVar18),
                        fVar17 + fVar14 * ((float)*(undefined8 *)pfVar4 - fVar17));
          *(ulong *)(pfVar12 + -4) =
               CONCAT44(fVar16 + fVar14 * ((float)((ulong)uVar24 >> 0x20) - fVar16),
                        fVar15 + fVar14 * ((float)uVar24 - fVar15));
          *(ulong *)(pfVar12 + 2) =
               CONCAT44(fVar23 + fVar14 * ((float)((ulong)uVar26 >> 0x20) - fVar23),
                        fVar22 + fVar14 * ((float)uVar26 - fVar22));
          *(ulong *)pfVar12 =
               CONCAT44(fVar21 + fVar14 * ((float)((ulong)uVar25 >> 0x20) - fVar21),
                        fVar19 + fVar14 * ((float)uVar25 - fVar19));
          pfVar12 = pfVar12 + 8;
        } while (uVar13 != 0);
        param_1 = param_1 + uVar8;
        if (uVar6 + 1 == uVar8) {
          return;
        }
      }
    }
    iVar5 = iVar5 - (int)uVar8;
    do {
      iVar5 = iVar5 + -1;
      *param_1 = *pfVar7 + fVar14 * (*pfVar9 - *pfVar7);
      param_1 = param_1 + 1;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar5 != 0);
  }
  return;
}


// ===== 0011b5cc  resampler::LinearResampler::~LinearResampler =====

/* resampler::LinearResampler::~LinearResampler() */

void __thiscall resampler::LinearResampler::~LinearResampler(LinearResampler *this)

{
  undefined *puVar1;
  void *pvVar2;
  
  puVar1 = PTR_vtable_00141238;
  pvVar2 = *(void **)(this + 0x88);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)this = puVar1 + 0x10;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 0011b660  resampler::LinearResampler::~LinearResampler =====

/* resampler::LinearResampler::~LinearResampler() */

void __thiscall resampler::LinearResampler::~LinearResampler(LinearResampler *this)

{
  undefined *puVar1;
  void *pvVar2;
  
  puVar1 = PTR_vtable_00141238;
  pvVar2 = *(void **)(this + 0x88);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)this = puVar1 + 0x10;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
  }
  operator_delete(this);
  return;
}


// ===== 0011b6f0  resampler::PolyphaseResampler::PolyphaseResampler =====

/* resampler::PolyphaseResampler::PolyphaseResampler(resampler::MultiChannelResampler::Builder
   const&) */

void __thiscall
resampler::PolyphaseResampler::PolyphaseResampler(PolyphaseResampler *this,Builder *param_1)

{
  undefined *puVar1;
  
  MultiChannelResampler::MultiChannelResampler((MultiChannelResampler *)this,param_1);
  puVar1 = PTR_vtable_00141240;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined **)this = puVar1 + 0x10;
                    /* try { // try from 0011b734 to 0011b73b has its CatchHandler @ 0011b748 */
  MultiChannelResampler::generateCoefficients
            ((MultiChannelResampler *)this,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
             *(int *)(this + 0x60),(double)*(int *)(param_1 + 8) / (double)*(int *)(param_1 + 0xc),
             *(float *)(param_1 + 0x10));
  return;
}


// ===== 0011b7ac  resampler::PolyphaseResampler::readFrame =====

/* resampler::PolyphaseResampler::readFrame(float*) */

void __thiscall resampler::PolyphaseResampler::readFrame(PolyphaseResampler *this,float *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  ulong uVar14;
  float *pfVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  pfVar11 = *(float **)(this + 0x40);
  if (0 < *(long *)(this + 0x48) - (long)pfVar11) {
    uVar9 = (ulong)(*(long *)(this + 0x48) - (long)pfVar11) >> 2;
    memset(pfVar11,0,(uVar9 - (uVar9 != 0)) * 4 + 4);
  }
  iVar3 = *(int *)(this + 0x20);
  lVar10 = *(long *)(this + 8);
  uVar1 = *(uint *)(this + 0x78);
  uVar9 = (ulong)uVar1;
  iVar2 = *(int *)(this + 0x7c);
  if (0 < iVar3) {
    iVar13 = 0;
    uVar14 = uVar9 & 0xfffffff8;
    pfVar6 = (float *)(*(long *)(this + 0x28) + (long)(int)(uVar1 * *(int *)(this + 0x24)) * 4);
    pfVar12 = (float *)(lVar10 + (long)iVar2 * 4);
    do {
      fVar16 = *pfVar12;
      if (0 < (int)uVar1) {
        if ((uVar1 < 8) || ((pfVar11 < pfVar6 + uVar9 && (pfVar6 < pfVar11 + uVar9)))) {
          uVar7 = 0;
          pfVar15 = pfVar6;
        }
        else {
          pfVar15 = pfVar6 + uVar14;
          pfVar6 = pfVar6 + 4;
          uVar7 = uVar14;
          pfVar5 = pfVar11 + 4;
          do {
            pfVar4 = pfVar6 + -2;
            uVar17 = *(undefined8 *)(pfVar6 + -4);
            uVar19 = *(undefined8 *)(pfVar6 + 2);
            uVar18 = *(undefined8 *)pfVar6;
            pfVar6 = pfVar6 + 8;
            uVar7 = uVar7 - 8;
            *(ulong *)(pfVar5 + -2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20) +
                          fVar16 * (float)((ulong)*(undefined8 *)pfVar4 >> 0x20),
                          (float)*(undefined8 *)(pfVar5 + -2) +
                          fVar16 * (float)*(undefined8 *)pfVar4);
            *(ulong *)(pfVar5 + -4) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + -4) >> 0x20) +
                          fVar16 * (float)((ulong)uVar17 >> 0x20),
                          (float)*(undefined8 *)(pfVar5 + -4) + fVar16 * (float)uVar17);
            *(ulong *)(pfVar5 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20) +
                          fVar16 * (float)((ulong)uVar19 >> 0x20),
                          (float)*(undefined8 *)(pfVar5 + 2) + fVar16 * (float)uVar19);
            *(ulong *)pfVar5 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar5 >> 0x20) +
                          fVar16 * (float)((ulong)uVar18 >> 0x20),
                          (float)*(undefined8 *)pfVar5 + fVar16 * (float)uVar18);
            pfVar5 = pfVar5 + 8;
          } while (uVar7 != 0);
          uVar7 = uVar14;
          pfVar6 = pfVar15;
          if (uVar14 == uVar9) goto LAB_0011b83c;
        }
        lVar8 = uVar9 - uVar7;
        pfVar5 = pfVar11 + uVar7;
        do {
          pfVar6 = pfVar15 + 1;
          lVar8 = lVar8 + -1;
          *pfVar5 = *pfVar5 + fVar16 * *pfVar15;
          pfVar5 = pfVar5 + 1;
          pfVar15 = pfVar6;
        } while (lVar8 != 0);
      }
LAB_0011b83c:
      iVar13 = iVar13 + 1;
      pfVar12 = pfVar12 + 1;
    } while (iVar13 != iVar3);
  }
  iVar3 = iVar3 + iVar2;
  uVar14 = *(long *)(this + 0x10) - lVar10 >> 2;
  iVar2 = 0;
  if (uVar14 != 0) {
    iVar2 = (int)((ulong)(long)iVar3 / uVar14);
  }
  *(int *)(this + 0x7c) = iVar3 - iVar2 * (int)uVar14;
  if (0 < (int)uVar1) {
    if ((uVar1 < 8) || ((param_1 < pfVar11 + uVar9 && (pfVar11 < param_1 + uVar9)))) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar9 & 0xfffffff8;
      pfVar6 = pfVar11 + 4;
      pfVar12 = param_1 + 4;
      uVar7 = uVar14;
      do {
        pfVar15 = pfVar6 + -2;
        uVar17 = *(undefined8 *)(pfVar6 + -4);
        uVar19 = *(undefined8 *)(pfVar6 + 2);
        uVar18 = *(undefined8 *)pfVar6;
        pfVar6 = pfVar6 + 8;
        uVar7 = uVar7 - 8;
        *(undefined8 *)(pfVar12 + -2) = *(undefined8 *)pfVar15;
        *(undefined8 *)(pfVar12 + -4) = uVar17;
        *(undefined8 *)(pfVar12 + 2) = uVar19;
        *(undefined8 *)pfVar12 = uVar18;
        pfVar12 = pfVar12 + 8;
      } while (uVar7 != 0);
      if (uVar14 == uVar9) {
        return;
      }
    }
    lVar10 = uVar9 - uVar14;
    pfVar6 = param_1 + uVar14;
    pfVar11 = pfVar11 + uVar14;
    do {
      lVar10 = lVar10 + -1;
      *pfVar6 = *pfVar11;
      pfVar6 = pfVar6 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  return;
}


// ===== 0011b9a8  resampler::PolyphaseResampler::~PolyphaseResampler =====

/* resampler::PolyphaseResampler::~PolyphaseResampler() */

void __thiscall resampler::PolyphaseResampler::~PolyphaseResampler(PolyphaseResampler *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


// ===== 0011ba08  resampler::PolyphaseResamplerMono::PolyphaseResamplerMono =====

/* resampler::PolyphaseResamplerMono::PolyphaseResamplerMono(resampler::MultiChannelResampler::Builder
   const&) */

void __thiscall
resampler::PolyphaseResamplerMono::PolyphaseResamplerMono
          (PolyphaseResamplerMono *this,Builder *param_1)

{
  PolyphaseResampler::PolyphaseResampler((PolyphaseResampler *)this,param_1);
  *(undefined **)this = PTR_vtable_00141248 + 0x10;
  return;
}


// ===== 0011ba38  resampler::PolyphaseResamplerMono::writeFrame =====

/* resampler::PolyphaseResamplerMono::writeFrame(float const*) */

void __thiscall
resampler::PolyphaseResamplerMono::writeFrame(PolyphaseResamplerMono *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar2 = *(int *)(this + 0x20);
  iVar3 = *(int *)(this + 0x24);
  iVar4 = iVar3 + -1;
  *(int *)(this + 0x24) = iVar4;
  if (iVar3 < 1) {
    iVar4 = iVar2 + -1;
    *(int *)(this + 0x24) = iVar4;
  }
  fVar5 = *param_1;
  pfVar1 = (float *)(*(long *)(this + 0x28) + (long)iVar4 * 4);
  *pfVar1 = fVar5;
  pfVar1[iVar2] = fVar5;
  return;
}


// ===== 0011ba70  resampler::PolyphaseResamplerMono::readFrame =====

/* resampler::PolyphaseResamplerMono::readFrame(float*) */

void __thiscall
resampler::PolyphaseResamplerMono::readFrame(PolyphaseResamplerMono *this,float *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  
  iVar1 = *(int *)(this + 0x20);
  fVar6 = 0.0;
  if (3 < iVar1) {
    iVar3 = 0;
    fVar6 = 0.0;
    puVar4 = (undefined8 *)(*(long *)(this + 8) + (long)*(int *)(this + 0x7c) * 4);
    puVar5 = (undefined8 *)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x24) * 4);
    do {
      iVar3 = iVar3 + 1;
      fVar6 = fVar6 + (float)*puVar5 * (float)*puVar4 +
              (float)((ulong)*puVar5 >> 0x20) * (float)((ulong)*puVar4 >> 0x20) +
              (float)puVar5[1] * (float)puVar4[1] +
              (float)((ulong)puVar5[1] >> 0x20) * (float)((ulong)puVar4[1] >> 0x20);
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (iVar3 < iVar1 >> 2);
  }
  iVar1 = iVar1 + *(int *)(this + 0x7c);
  uVar2 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 2;
  iVar3 = 0;
  if (uVar2 != 0) {
    iVar3 = (int)((ulong)(long)iVar1 / uVar2);
  }
  *(int *)(this + 0x7c) = iVar1 - iVar3 * (int)uVar2;
  *param_1 = fVar6;
  return;
}


// ===== 0011bb00  resampler::PolyphaseResamplerMono::~PolyphaseResamplerMono =====

/* resampler::PolyphaseResamplerMono::~PolyphaseResamplerMono() */

void __thiscall
resampler::PolyphaseResamplerMono::~PolyphaseResamplerMono(PolyphaseResamplerMono *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


// ===== 0011bb60  resampler::PolyphaseResamplerStereo::PolyphaseResamplerStereo =====

/* resampler::PolyphaseResamplerStereo::PolyphaseResamplerStereo(resampler::MultiChannelResampler::Builder
   const&) */

void __thiscall
resampler::PolyphaseResamplerStereo::PolyphaseResamplerStereo
          (PolyphaseResamplerStereo *this,Builder *param_1)

{
  PolyphaseResampler::PolyphaseResampler((PolyphaseResampler *)this,param_1);
  *(undefined **)this = PTR_vtable_00141250 + 0x10;
  return;
}


// ===== 0011bb90  resampler::PolyphaseResamplerStereo::writeFrame =====

/* resampler::PolyphaseResamplerStereo::writeFrame(float const*) */

void __thiscall
resampler::PolyphaseResamplerStereo::writeFrame(PolyphaseResamplerStereo *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(this + 0x20);
  iVar3 = *(int *)(this + 0x24);
  iVar4 = iVar3 + -1;
  *(int *)(this + 0x24) = iVar4;
  if (iVar3 < 1) {
    iVar4 = iVar2 + -1;
    *(int *)(this + 0x24) = iVar4;
  }
  fVar5 = *param_1;
  fVar6 = param_1[1];
  pfVar1 = (float *)(*(long *)(this + 0x28) + (long)(iVar4 << 1) * 4);
  *pfVar1 = fVar5;
  pfVar1[1] = fVar6;
  pfVar1[(long)iVar2 * 2] = fVar5;
  pfVar1[(int)(iVar2 << 1 | 1)] = fVar6;
  return;
}


// ===== 0011bbdc  resampler::PolyphaseResamplerStereo::readFrame =====

/* resampler::PolyphaseResamplerStereo::readFrame(float*) */

void __thiscall
resampler::PolyphaseResamplerStereo::readFrame(PolyphaseResamplerStereo *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  ulong uVar6;
  int iVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  iVar2 = *(int *)(this + 0x20);
  uVar10 = 0;
  if (3 < iVar2) {
    iVar7 = 0;
    pfVar8 = (float *)(*(long *)(this + 8) + (long)*(int *)(this + 0x7c) * 4);
    puVar9 = (undefined8 *)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x24) * 8);
    uVar10 = 0;
    do {
      fVar4 = *pfVar8;
      pfVar5 = pfVar8 + 1;
      pfVar1 = pfVar8 + 2;
      pfVar3 = pfVar8 + 3;
      iVar7 = iVar7 + 1;
      pfVar8 = pfVar8 + 4;
      uVar10 = CONCAT44((float)((ulong)uVar10 >> 0x20) + fVar4 * (float)((ulong)*puVar9 >> 0x20) +
                        (float)((ulong)puVar9[1] >> 0x20) * *pfVar5 +
                        (float)((ulong)puVar9[2] >> 0x20) * *pfVar1 +
                        (float)((ulong)puVar9[3] >> 0x20) * *pfVar3,
                        (float)uVar10 + fVar4 * (float)*puVar9 + (float)puVar9[1] * *pfVar5 +
                        (float)puVar9[2] * *pfVar1 + (float)puVar9[3] * *pfVar3);
      puVar9 = puVar9 + 4;
    } while (iVar7 < iVar2 >> 2);
  }
  iVar2 = iVar2 + *(int *)(this + 0x7c);
  uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 2;
  iVar7 = 0;
  if (uVar6 != 0) {
    iVar7 = (int)((ulong)(long)iVar2 / uVar6);
  }
  *(int *)(this + 0x7c) = iVar2 - iVar7 * (int)uVar6;
  *(undefined8 *)param_1 = uVar10;
  return;
}


// ===== 0011bc84  resampler::PolyphaseResamplerStereo::~PolyphaseResamplerStereo =====

/* resampler::PolyphaseResamplerStereo::~PolyphaseResamplerStereo() */

void __thiscall
resampler::PolyphaseResamplerStereo::~PolyphaseResamplerStereo(PolyphaseResamplerStereo *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


// ===== 0011bce4  resampler::SincResampler::SincResampler =====

/* resampler::SincResampler::SincResampler(resampler::MultiChannelResampler::Builder const&) */

void __thiscall resampler::SincResampler::SincResampler(SincResampler *this,Builder *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong __n;
  
  MultiChannelResampler::MultiChannelResampler((MultiChannelResampler *)this,param_1);
  *(undefined **)this = PTR_vtable_00141258 + 0x10;
  iVar1 = *(int *)param_1;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  if (iVar1 != 0) {
    if (iVar1 < 0) {
                    /* try { // try from 0011bdac to 0011bdb3 has its CatchHandler @ 0011bdb8 */
      uVar3 = std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    /* catch() { ... } // from try @ 0011bd90 with catch @ 0011bdb4 */
                    /* catch() { ... } // from try @ 0011bd30 with catch @ 0011bdb8
                       catch() { ... } // from try @ 0011bdac with catch @ 0011bdb8 */
      pvVar2 = *(void **)(this + 0x80);
      if (pvVar2 != (void *)0x0) {
        *(void **)(this + 0x88) = pvVar2;
        operator_delete(pvVar2);
      }
      pvVar2 = *(void **)(this + 0x40);
      *(undefined **)this = PTR_vtable_00141218 + 0x10;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = *(void **)(this + 0x28);
      }
      else {
        *(void **)(this + 0x48) = pvVar2;
        operator_delete(pvVar2);
        pvVar2 = *(void **)(this + 0x28);
      }
      if (pvVar2 == (void *)0x0) {
        pvVar2 = *(void **)(this + 8);
      }
      else {
        *(void **)(this + 0x30) = pvVar2;
        operator_delete(pvVar2);
        pvVar2 = *(void **)(this + 8);
      }
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00134fc0(uVar3);
      }
      *(void **)(this + 0x10) = pvVar2;
      operator_delete(pvVar2);
                    /* WARNING: Subroutine does not return */
      FUN_00134fc0(uVar3);
    }
    __n = (long)iVar1 * 4;
                    /* try { // try from 0011bd30 to 0011bd37 has its CatchHandler @ 0011bdb8 */
    pvVar2 = operator_new(__n);
    *(void **)(this + 0x80) = pvVar2;
    *(void **)(this + 0x90) = (void *)((long)pvVar2 + (long)iVar1 * 4);
    memset(pvVar2,0,__n);
    *(void **)(this + 0x88) = (void *)(__n + (long)pvVar2);
  }
  iVar1 = 0;
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = 0x2000 / *(int *)(this + 0x20);
  }
  *(int *)(this + 0x98) = iVar1;
  *(double *)(this + 0xa0) = (double)iVar1 / (double)(long)*(int *)(this + 0x60);
                    /* try { // try from 0011bd90 to 0011bd97 has its CatchHandler @ 0011bdb4 */
  MultiChannelResampler::generateCoefficients
            ((MultiChannelResampler *)this,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),iVar1,
             1.0 / (double)iVar1,*(float *)(param_1 + 0x10));
  return;
}


// ===== 0011be30  resampler::SincResampler::readFrame =====

/* resampler::SincResampler::readFrame(float*) */

void __thiscall resampler::SincResampler::readFrame(SincResampler *this,float *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  pfVar17 = *(float **)(this + 0x40);
  if (0 < *(long *)(this + 0x48) - (long)pfVar17) {
    uVar12 = (ulong)(*(long *)(this + 0x48) - (long)pfVar17) >> 2;
    memset(pfVar17,0,(uVar12 - (uVar12 != 0)) * 4 + 4);
  }
  pfVar15 = *(float **)(this + 0x80);
  if (0 < *(long *)(this + 0x88) - (long)pfVar15) {
    uVar12 = (ulong)(*(long *)(this + 0x88) - (long)pfVar15) >> 2;
    memset(pfVar15,0,(uVar12 - (uVar12 != 0)) * 4 + 4);
  }
  iVar13 = *(int *)(this + 0x98);
  iVar2 = *(int *)(this + 0x20);
  dVar19 = *(double *)(this + 0xa0) * (double)(long)*(int *)(this + 0x58);
  uVar3 = *(uint *)(this + 0x78);
  uVar12 = (ulong)uVar3;
  dVar20 = dVar19;
  iVar4 = 0;
  if (iVar13 <= (int)dVar19) {
    dVar20 = dVar19 - (double)iVar13;
    iVar4 = iVar13;
  }
  iVar4 = (int)dVar19 - iVar4;
  if (0 < iVar2) {
    iVar1 = 0;
    if (iVar13 <= iVar4 + 1) {
      iVar1 = iVar13;
    }
    pfVar6 = (float *)(*(long *)(this + 0x28) + (long)(int)(uVar3 * *(int *)(this + 0x24)) * 4);
    iVar13 = 0;
    uVar18 = uVar12 & 0xfffffffc;
    pfVar14 = (float *)(*(long *)(this + 8) + (long)(iVar4 * iVar2) * 4);
    pfVar16 = (float *)(*(long *)(this + 8) + (long)(((iVar4 + 1) - iVar1) * iVar2) * 4);
    do {
      fVar21 = *pfVar14;
      fVar22 = *pfVar16;
      if (0 < (int)uVar3) {
        if (uVar3 < 4) {
LAB_0011bf84:
          pfVar7 = pfVar6;
          uVar9 = 0;
        }
        else {
          if ((pfVar17 < pfVar15 + uVar12 && pfVar15 < pfVar17 + uVar12 ||
               pfVar17 < pfVar6 + uVar12 && pfVar6 < pfVar17 + uVar12) ||
             (pfVar15 < pfVar6 + uVar12 && pfVar6 < pfVar15 + uVar12)) goto LAB_0011bf84;
          pfVar7 = pfVar6 + uVar18;
          uVar9 = uVar18;
          pfVar8 = pfVar15;
          pfVar11 = pfVar17;
          do {
            uVar9 = uVar9 - 4;
            fVar25 = (float)*(undefined8 *)pfVar6;
            fVar23 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
            fVar24 = (float)*(undefined8 *)(pfVar6 + 2);
            fVar26 = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
            *(ulong *)(pfVar11 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) + fVar21 * fVar26,
                          (float)*(undefined8 *)(pfVar11 + 2) + fVar21 * fVar24);
            *(ulong *)pfVar11 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) + fVar21 * fVar23,
                          (float)*(undefined8 *)pfVar11 + fVar21 * fVar25);
            *(ulong *)(pfVar8 + 2) =
                 CONCAT44(fVar22 * fVar26 + (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20),
                          fVar22 * fVar24 + (float)*(undefined8 *)(pfVar8 + 2));
            *(ulong *)pfVar8 =
                 CONCAT44(fVar22 * fVar23 + (float)((ulong)*(undefined8 *)pfVar8 >> 0x20),
                          fVar22 * fVar25 + (float)*(undefined8 *)pfVar8);
            pfVar6 = pfVar6 + 4;
            pfVar8 = pfVar8 + 4;
            pfVar11 = pfVar11 + 4;
          } while (uVar9 != 0);
          pfVar6 = pfVar7;
          uVar9 = uVar18;
          if (uVar18 == uVar12) goto LAB_0011bf58;
        }
        lVar10 = uVar12 - uVar9;
        pfVar8 = pfVar15 + uVar9;
        pfVar11 = pfVar17 + uVar9;
        do {
          pfVar6 = pfVar7 + 1;
          fVar25 = *pfVar7;
          lVar10 = lVar10 + -1;
          *pfVar11 = *pfVar11 + fVar21 * fVar25;
          *pfVar8 = fVar22 * fVar25 + *pfVar8;
          pfVar7 = pfVar6;
          pfVar8 = pfVar8 + 1;
          pfVar11 = pfVar11 + 1;
        } while (lVar10 != 0);
      }
LAB_0011bf58:
      iVar13 = iVar13 + 1;
      pfVar14 = pfVar14 + 1;
      pfVar16 = pfVar16 + 1;
    } while (iVar13 != iVar2);
  }
  if (0 < (int)uVar3) {
    fVar21 = (float)(dVar20 - (double)iVar4);
    uVar18 = 0;
    if (7 < uVar3) {
      if ((pfVar17 + uVar12 <= param_1 || param_1 + uVar12 <= pfVar17) &&
         (pfVar15 + uVar12 <= param_1 || param_1 + uVar12 <= pfVar15)) {
        uVar18 = uVar12 & 0xfffffff8;
        pfVar6 = pfVar17 + 4;
        pfVar14 = pfVar15 + 4;
        pfVar16 = param_1 + 4;
        uVar9 = uVar18;
        do {
          pfVar7 = pfVar6 + -4;
          pfVar8 = pfVar6 + -2;
          pfVar11 = pfVar6 + 2;
          uVar27 = *(undefined8 *)pfVar6;
          pfVar5 = pfVar14 + -2;
          uVar31 = *(undefined8 *)(pfVar14 + -4);
          uVar33 = *(undefined8 *)(pfVar14 + 2);
          uVar32 = *(undefined8 *)pfVar14;
          pfVar6 = pfVar6 + 8;
          pfVar14 = pfVar14 + 8;
          uVar9 = uVar9 - 8;
          fVar22 = (float)*(undefined8 *)pfVar7;
          fVar25 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
          fVar23 = (float)*(undefined8 *)pfVar8;
          fVar24 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
          fVar26 = (float)uVar27;
          fVar28 = (float)((ulong)uVar27 >> 0x20);
          fVar29 = (float)*(undefined8 *)pfVar11;
          fVar30 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
          *(ulong *)(pfVar16 + -2) =
               CONCAT44(fVar24 + ((float)((ulong)*(undefined8 *)pfVar5 >> 0x20) - fVar24) * fVar21,
                        fVar23 + ((float)*(undefined8 *)pfVar5 - fVar23) * fVar21);
          *(ulong *)(pfVar16 + -4) =
               CONCAT44(fVar25 + ((float)((ulong)uVar31 >> 0x20) - fVar25) * fVar21,
                        fVar22 + ((float)uVar31 - fVar22) * fVar21);
          *(ulong *)(pfVar16 + 2) =
               CONCAT44(fVar30 + ((float)((ulong)uVar33 >> 0x20) - fVar30) * fVar21,
                        fVar29 + ((float)uVar33 - fVar29) * fVar21);
          *(ulong *)pfVar16 =
               CONCAT44(fVar28 + ((float)((ulong)uVar32 >> 0x20) - fVar28) * fVar21,
                        fVar26 + ((float)uVar32 - fVar26) * fVar21);
          pfVar16 = pfVar16 + 8;
        } while (uVar9 != 0);
        if (uVar18 == uVar12) {
          return;
        }
      }
    }
    lVar10 = uVar12 - uVar18;
    pfVar6 = param_1 + uVar18;
    pfVar15 = pfVar15 + uVar18;
    pfVar17 = pfVar17 + uVar18;
    do {
      lVar10 = lVar10 + -1;
      *pfVar6 = *pfVar17 + (*pfVar15 - *pfVar17) * fVar21;
      pfVar6 = pfVar6 + 1;
      pfVar15 = pfVar15 + 1;
      pfVar17 = pfVar17 + 1;
    } while (lVar10 != 0);
  }
  return;
}


// ===== 0011c154  resampler::SincResampler::~SincResampler =====

/* resampler::SincResampler::~SincResampler() */

void __thiscall resampler::SincResampler::~SincResampler(SincResampler *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x80);
  *(undefined **)this = PTR_vtable_00141258 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0011c1d8  resampler::SincResampler::~SincResampler =====

/* resampler::SincResampler::~SincResampler() */

void __thiscall resampler::SincResampler::~SincResampler(SincResampler *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x80);
  *(undefined **)this = PTR_vtable_00141258 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


// ===== 0011c258  resampler::SincResamplerStereo::SincResamplerStereo =====

/* resampler::SincResamplerStereo::SincResamplerStereo(resampler::MultiChannelResampler::Builder
   const&) */

void __thiscall
resampler::SincResamplerStereo::SincResamplerStereo(SincResamplerStereo *this,Builder *param_1)

{
  SincResampler::SincResampler((SincResampler *)this,param_1);
  *(undefined **)this = PTR_vtable_00141260 + 0x10;
  return;
}


// ===== 0011c288  resampler::SincResamplerStereo::writeFrame =====

/* resampler::SincResamplerStereo::writeFrame(float const*) */

void __thiscall resampler::SincResamplerStereo::writeFrame(SincResamplerStereo *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(this + 0x20);
  iVar3 = *(int *)(this + 0x24);
  iVar4 = iVar3 + -1;
  *(int *)(this + 0x24) = iVar4;
  if (iVar3 < 1) {
    iVar4 = iVar2 + -1;
    *(int *)(this + 0x24) = iVar4;
  }
  fVar5 = *param_1;
  fVar6 = param_1[1];
  pfVar1 = (float *)(*(long *)(this + 0x28) + (long)(iVar4 << 1) * 4);
  *pfVar1 = fVar5;
  pfVar1[1] = fVar6;
  pfVar1[(long)iVar2 * 2] = fVar5;
  pfVar1[(int)(iVar2 << 1 | 1)] = fVar6;
  return;
}


// ===== 0011c2d4  resampler::SincResamplerStereo::readFrame =====

/* resampler::SincResamplerStereo::readFrame(float*) */

void __thiscall resampler::SincResamplerStereo::readFrame(SincResamplerStereo *this,float *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  ulong uVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  pfVar17 = *(float **)(this + 0x40);
  if (0 < *(long *)(this + 0x48) - (long)pfVar17) {
    uVar11 = (ulong)(*(long *)(this + 0x48) - (long)pfVar17) >> 2;
    memset(pfVar17,0,(uVar11 - (uVar11 != 0)) * 4 + 4);
  }
  pfVar15 = *(float **)(this + 0x80);
  if (0 < *(long *)(this + 0x88) - (long)pfVar15) {
    uVar11 = (ulong)(*(long *)(this + 0x88) - (long)pfVar15) >> 2;
    memset(pfVar15,0,(uVar11 - (uVar11 != 0)) * 4 + 4);
  }
  iVar19 = *(int *)(this + 0x58);
  dVar21 = *(double *)(this + 0xa0);
  iVar2 = *(int *)(this + 0x20);
  uVar3 = *(uint *)(this + 0x78);
  uVar11 = (ulong)uVar3;
  iVar12 = (int)(dVar21 * (double)(long)iVar19);
  if (0 < iVar2) {
    iVar1 = iVar12 + 1;
    if (*(int *)(this + 0x98) <= iVar1) {
      iVar1 = 0;
    }
    pfVar5 = (float *)(*(long *)(this + 0x28) + (long)(int)(uVar3 * *(int *)(this + 0x24)) * 4);
    iVar13 = 0;
    uVar18 = uVar11 & 0xfffffffc;
    pfVar14 = (float *)(*(long *)(this + 8) + (long)(iVar2 * iVar12) * 4);
    pfVar16 = (float *)(*(long *)(this + 8) + (long)(iVar1 * iVar2) * 4);
    do {
      fVar20 = *pfVar14;
      fVar22 = *pfVar16;
      if (0 < (int)uVar3) {
        if (uVar3 < 4) {
LAB_0011c40c:
          pfVar6 = pfVar5;
          uVar8 = 0;
        }
        else {
          if ((pfVar17 < pfVar15 + uVar11 && pfVar15 < pfVar17 + uVar11 ||
               pfVar17 < pfVar5 + uVar11 && pfVar5 < pfVar17 + uVar11) ||
             (pfVar15 < pfVar5 + uVar11 && pfVar5 < pfVar15 + uVar11)) goto LAB_0011c40c;
          pfVar6 = pfVar5 + uVar18;
          uVar8 = uVar18;
          pfVar7 = pfVar15;
          pfVar10 = pfVar17;
          do {
            uVar8 = uVar8 - 4;
            fVar25 = (float)*(undefined8 *)pfVar5;
            fVar23 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
            fVar24 = (float)*(undefined8 *)(pfVar5 + 2);
            fVar26 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
            *(ulong *)(pfVar10 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) + fVar20 * fVar26,
                          (float)*(undefined8 *)(pfVar10 + 2) + fVar20 * fVar24);
            *(ulong *)pfVar10 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar10 >> 0x20) + fVar20 * fVar23,
                          (float)*(undefined8 *)pfVar10 + fVar20 * fVar25);
            *(ulong *)(pfVar7 + 2) =
                 CONCAT44(fVar22 * fVar26 + (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20),
                          fVar22 * fVar24 + (float)*(undefined8 *)(pfVar7 + 2));
            *(ulong *)pfVar7 =
                 CONCAT44(fVar22 * fVar23 + (float)((ulong)*(undefined8 *)pfVar7 >> 0x20),
                          fVar22 * fVar25 + (float)*(undefined8 *)pfVar7);
            pfVar5 = pfVar5 + 4;
            pfVar7 = pfVar7 + 4;
            pfVar10 = pfVar10 + 4;
          } while (uVar8 != 0);
          pfVar5 = pfVar6;
          uVar8 = uVar18;
          if (uVar18 == uVar11) goto LAB_0011c3e0;
        }
        lVar9 = uVar11 - uVar8;
        pfVar7 = pfVar15 + uVar8;
        pfVar10 = pfVar17 + uVar8;
        do {
          pfVar5 = pfVar6 + 1;
          fVar25 = *pfVar6;
          lVar9 = lVar9 + -1;
          *pfVar10 = *pfVar10 + fVar20 * fVar25;
          *pfVar7 = fVar22 * fVar25 + *pfVar7;
          pfVar6 = pfVar5;
          pfVar7 = pfVar7 + 1;
          pfVar10 = pfVar10 + 1;
        } while (lVar9 != 0);
      }
LAB_0011c3e0:
      iVar13 = iVar13 + 1;
      pfVar14 = pfVar14 + 1;
      pfVar16 = pfVar16 + 1;
    } while (iVar13 != iVar2);
  }
  if (0 < (int)uVar3) {
    fVar20 = (float)(dVar21 * (double)(long)iVar19 - (double)iVar12);
    uVar18 = 0;
    if (7 < uVar3) {
      if ((pfVar17 + uVar11 <= param_1 || param_1 + uVar11 <= pfVar17) &&
         (pfVar15 + uVar11 <= param_1 || param_1 + uVar11 <= pfVar15)) {
        uVar18 = uVar11 & 0xfffffff8;
        pfVar5 = pfVar17 + 4;
        pfVar14 = pfVar15 + 4;
        pfVar16 = param_1 + 4;
        uVar8 = uVar18;
        do {
          pfVar6 = pfVar5 + -4;
          pfVar7 = pfVar5 + -2;
          pfVar10 = pfVar5 + 2;
          uVar27 = *(undefined8 *)pfVar5;
          pfVar4 = pfVar14 + -2;
          uVar31 = *(undefined8 *)(pfVar14 + -4);
          uVar33 = *(undefined8 *)(pfVar14 + 2);
          uVar32 = *(undefined8 *)pfVar14;
          pfVar5 = pfVar5 + 8;
          pfVar14 = pfVar14 + 8;
          uVar8 = uVar8 - 8;
          fVar22 = (float)*(undefined8 *)pfVar6;
          fVar25 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
          fVar23 = (float)*(undefined8 *)pfVar7;
          fVar24 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
          fVar26 = (float)uVar27;
          fVar28 = (float)((ulong)uVar27 >> 0x20);
          fVar29 = (float)*(undefined8 *)pfVar10;
          fVar30 = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20);
          *(ulong *)(pfVar16 + -2) =
               CONCAT44(fVar24 + ((float)((ulong)*(undefined8 *)pfVar4 >> 0x20) - fVar24) * fVar20,
                        fVar23 + ((float)*(undefined8 *)pfVar4 - fVar23) * fVar20);
          *(ulong *)(pfVar16 + -4) =
               CONCAT44(fVar25 + ((float)((ulong)uVar31 >> 0x20) - fVar25) * fVar20,
                        fVar22 + ((float)uVar31 - fVar22) * fVar20);
          *(ulong *)(pfVar16 + 2) =
               CONCAT44(fVar30 + ((float)((ulong)uVar33 >> 0x20) - fVar30) * fVar20,
                        fVar29 + ((float)uVar33 - fVar29) * fVar20);
          *(ulong *)pfVar16 =
               CONCAT44(fVar28 + ((float)((ulong)uVar32 >> 0x20) - fVar28) * fVar20,
                        fVar26 + ((float)uVar32 - fVar26) * fVar20);
          pfVar16 = pfVar16 + 8;
        } while (uVar8 != 0);
        if (uVar18 == uVar11) {
          return;
        }
      }
    }
    lVar9 = uVar11 - uVar18;
    pfVar5 = param_1 + uVar18;
    pfVar15 = pfVar15 + uVar18;
    pfVar17 = pfVar17 + uVar18;
    do {
      lVar9 = lVar9 + -1;
      *pfVar5 = *pfVar17 + (*pfVar15 - *pfVar17) * fVar20;
      pfVar5 = pfVar5 + 1;
      pfVar15 = pfVar15 + 1;
      pfVar17 = pfVar17 + 1;
    } while (lVar9 != 0);
  }
  return;
}


// ===== 0011c5dc  resampler::SincResamplerStereo::~SincResamplerStereo =====

/* resampler::SincResamplerStereo::~SincResamplerStereo() */

void __thiscall resampler::SincResamplerStereo::~SincResamplerStereo(SincResamplerStereo *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x80);
  *(undefined **)this = PTR_vtable_00141258 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_00141218 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


// ===== 0011c65c  std::__throw_bad_alloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_alloc() */

void std::__throw_bad_alloc(void)

{
  bad_alloc *this;
  
  this = (bad_alloc *)__cxa_allocate_exception(8);
  bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_00141268,PTR__bad_alloc_00141270);
}


// ===== 0011c694  operator.new =====

/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  bad_alloc *this;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    pvVar1 = malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)std::get_new_handler();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_00141268,PTR__bad_alloc_00141270);
}


// ===== 0011c700  operator.new =====

/* operator new(unsigned long, std::nothrow_t const&) */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 0011c70c to 0011c70f has its CatchHandler @ 0011c71c */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 0011c730  FUN_0011c730 =====

void FUN_0011c730(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0011c740  operator.new[] =====

/* operator new[](unsigned long) */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 0011c748  operator.new[] =====

/* operator new[](unsigned long, std::nothrow_t const&) */

void * operator_new__(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 0011c754 to 0011c757 has its CatchHandler @ 0011c764 */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}


// ===== 0011c778  operator.delete =====

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 0011c780  operator.delete =====

/* operator delete(void*, std::nothrow_t const&) */

void operator_delete(void *param_1,nothrow_t *param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 0011c788  operator.delete =====

/* operator delete(void*, unsigned long) */

void operator_delete(void *param_1,ulong param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 0011c790  operator.delete[] =====

/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0011c798  operator.delete[] =====

/* operator delete[](void*, std::nothrow_t const&) */

void operator_delete__(void *param_1,nothrow_t *param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 0011c7a0  operator.delete[] =====

/* operator delete[](void*, unsigned long) */

void operator_delete__(void *param_1,ulong param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 0011c7a8  operator.new =====

/* operator new(unsigned long, std::align_val_t) */

void * operator_new(size_t param_1,size_t param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  bad_alloc *this;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    param_1 = 1;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  while( true ) {
    iVar2 = posix_memalign(&local_40,param_2,param_1);
    if (iVar2 == 0) {
      if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_40;
    }
    pcVar3 = (code *)std::get_new_handler();
    if (pcVar3 == (code *)0x0) break;
    (*pcVar3)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_00141268,PTR__bad_alloc_00141270);
}


// ===== 0011c85c  operator.new =====

/* operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new(void)

{
  void *pvVar1;
  
                    /* try { // try from 0011c868 to 0011c86b has its CatchHandler @ 0011c878 */
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 0011c88c  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t) */

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 0011c894  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new__(void)

{
  void *pvVar1;
  
                    /* try { // try from 0011c8a0 to 0011c8a3 has its CatchHandler @ 0011c8b0 */
  pvVar1 = operator_new__();
  return pvVar1;
}


// ===== 0011c8c4  operator.delete =====

/* operator delete(void*, std::align_val_t) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 0011c8cc  operator.delete =====

/* operator delete(void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete(void)

{
  operator_delete();
  return;
}


// ===== 0011c8d4  operator.delete =====

/* operator delete(void*, unsigned long, std::align_val_t) */

void operator_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete(param_1,param_3);
  return;
}


// ===== 0011c8e0  operator.delete[] =====

/* operator delete[](void*, std::align_val_t) */

void operator_delete__(void)

{
  operator_delete();
  return;
}


// ===== 0011c8e8  operator.delete[] =====

/* operator delete[](void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete__(void)

{
  operator_delete__();
  return;
}


// ===== 0011c8f0  operator.delete[] =====

/* operator delete[](void*, unsigned long, std::align_val_t) */

void operator_delete__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete__(param_1,param_3);
  return;
}


// ===== 0011c8fc  std::logic_error::logic_error =====

/* std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  basic_string *__src;
  
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
  __src = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
  }
                    /* try { // try from 0011c934 to 0011c94b has its CatchHandler @ 0011c980 */
  lVar1 = __strlen_chk(__src,0xffffffffffffffff);
  plVar2 = (long *)operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,__src,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}


// ===== 0011c994  std::logic_error::logic_error =====

/* std::logic_error::logic_error(char const*) */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
                    /* try { // try from 0011c9c0 to 0011c9d7 has its CatchHandler @ 0011ca0c */
  lVar1 = __strlen_chk(param_1,0xffffffffffffffff);
  plVar2 = (long *)operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,param_1,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}


// ===== 0011ca20  std::logic_error::logic_error =====

/* std::logic_error::logic_error(std::logic_error const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,logic_error *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  
  *(undefined **)this = PTR_vtable_00141278 + 0x10;
  lVar3 = *(long *)(param_1 + 8);
  *(long *)(this + 8) = lVar3;
  piVar4 = (int *)(lVar3 + -8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 0011ca54  std::logic_error::operator= =====

/* std::logic_error::TEMPNAMEPLACEHOLDERVALUE(std::logic_error const&) */

logic_error * __thiscall std::logic_error::operator=(logic_error *this,logic_error *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar5;
  piVar6 = (int *)(lVar5 + -8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = *piVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar6 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  return this;
}


// ===== 0011cabc  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  basic_string *__src;
  
  *(undefined **)this = PTR_vtable_00141280 + 0x10;
  __src = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
  }
                    /* try { // try from 0011caf4 to 0011cb0b has its CatchHandler @ 0011cb40 */
  lVar1 = __strlen_chk(__src,0xffffffffffffffff);
  plVar2 = (long *)operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,__src,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}


// ===== 0011cb54  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(char const*) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_00141280 + 0x10;
                    /* try { // try from 0011cb80 to 0011cb97 has its CatchHandler @ 0011cbcc */
  lVar1 = __strlen_chk(param_1,0xffffffffffffffff);
  plVar2 = (long *)operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,param_1,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}


// ===== 0011cbe0  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(std::runtime_error const&) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  
  *(undefined **)this = PTR_vtable_00141280 + 0x10;
  lVar3 = *(long *)(param_1 + 8);
  *(long *)(this + 8) = lVar3;
  piVar4 = (int *)(lVar3 + -8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 0011cc14  std::runtime_error::operator= =====

/* std::runtime_error::TEMPNAMEPLACEHOLDERVALUE(std::runtime_error const&) */

runtime_error * __thiscall std::runtime_error::operator=(runtime_error *this,runtime_error *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar5;
  piVar6 = (int *)(lVar5 + -8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = *piVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar6 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  return this;
}


// ===== 0011cc7c  std::__ndk1::__vector_base_common<true>::__throw_length_error =====

/* std::__ndk1::__vector_base_common<true>::__throw_length_error() const */

void std::__ndk1::__vector_base_common<true>::__throw_length_error(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0011b134("vector");
}


// ===== 0011cc94  std::__ndk1::__vector_base_common<true>::__throw_out_of_range =====

/* std::__ndk1::__vector_base_common<true>::__throw_out_of_range() const */

void std::__ndk1::__vector_base_common<true>::__throw_out_of_range(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0011ccac("vector");
}


// ===== 0011ccac  FUN_0011ccac =====

void FUN_0011ccac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0011cccc to 0011ccd3 has its CatchHandler @ 0011ccec */
  FUN_0011cd00(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_00141288,PTR__out_of_range_00141290);
}


// ===== 0011cd00  FUN_0011cd00 =====

void FUN_0011cd00(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_00141298 + 0x10;
  return;
}


// ===== 0011cd38  FUN_0011cd38 =====

void FUN_0011cd38(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 0011cd44  FUN_0011cd44 =====

undefined8 FUN_0011cd44(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0011cd50  FUN_0011cd50 =====

bool FUN_0011cd50(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 0011cd74  __cxa_allocate_exception =====

long __cxa_allocate_exception(long param_1)

{
  void *__s;
  ulong __n;
  
  __n = param_1 + 0x8fU & 0xfffffffffffffff0;
                    /* try { // try from 0011cd8c to 0011cd93 has its CatchHandler @ 0011cdc4 */
  __s = (void *)FUN_001327ac(__n);
  if (__s != (void *)0x0) {
    memset(__s,0,__n);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0011cdc8  __cxa_free_exception =====

void __cxa_free_exception(long param_1)

{
                    /* try { // try from 0011cdd8 to 0011cddb has its CatchHandler @ 0011cde8 */
  FUN_00132978(param_1 + -0x80);
  return;
}


// ===== 0011cdec  __cxa_allocate_dependent_exception =====

void __cxa_allocate_dependent_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001327ac(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0011ce28  __cxa_free_dependent_exception =====

void __cxa_free_dependent_exception(void)

{
  FUN_00132978();
  return;
}


// ===== 0011ce30  __cxa_throw =====

void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = __cxa_get_globals();
  uVar2 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar2;
  uVar2 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x58) = uVar2;
  FUN_0011ceb0(param_1 + -0x20);
  *(undefined8 *)(param_1 + -0x78) = 1;
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(code **)(param_1 + -0x18) = FUN_0011cecc;
  FUN_00134dc4(param_1 + -0x20);
  puVar3 = (undefined8 *)FUN_0011cf38(param_1 + -0x80);
  *puVar3 = 0x434c4e47432b2b00;
  return;
}


// ===== 0011ceb0  FUN_0011ceb0 =====

void FUN_0011ceb0(undefined8 *param_1)

{
  *param_1 = 0x434c4e47432b2b00;
  return;
}


// ===== 0011cecc  FUN_0011cecc =====

void FUN_0011cecc(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 == 1) {
    plVar3 = (long *)(param_2 + -0x58);
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
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 0011cf0c to 0011cf0f has its CatchHandler @ 0011cf30 */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 0011cf10 to 0011cf17 has its CatchHandler @ 0011cf34 */
      FUN_00132978(param_2 + -0x60);
    }
    return;
  }
  FUN_0011d600(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0011cf0c with catch @ 0011cf30 */
  __cxa_call_unexpected();
}


// ===== 0011cf38  FUN_0011cf38 =====

undefined8 FUN_0011cf38(long param_1)

{
  long lVar1;
  
  __cxa_begin_catch(param_1 + 0x60);
  lVar1 = FUN_0011d600(*(undefined8 *)(param_1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


// ===== 0011cf5c  __cxa_get_exception_ptr =====

undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}


// ===== 0011cf68  __cxa_begin_catch =====

ulong * __cxa_begin_catch(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
                    /* try { // try from 0011cf80 to 0011cf83 has its CatchHandler @ 0011d000 */
  plVar3 = (long *)__cxa_get_globals();
  puVar4 = param_1 + -0xc;
  if (uVar5 >> 8 == 0x434c4e47432b2b) {
    iVar2 = (int)param_1[-5];
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + -5) = iVar1 + 1;
    if ((ulong *)*plVar3 != puVar4) {
      param_1[-6] = (ulong)*plVar3;
      *plVar3 = (long)puVar4;
    }
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    param_1 = (ulong *)param_1[-1];
  }
  else {
    if (*plVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *plVar3 = (long)puVar4;
    param_1 = param_1 + 4;
  }
  return param_1;
}


// ===== 0011d004  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)__cxa_get_globals_fast();
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    if (*(ulong *)(lVar5 + 0x60) >> 8 == 0x434c4e47432b2b) {
      iVar1 = *(int *)(lVar5 + 0x38);
      if (iVar1 < 0) {
        *(int *)(lVar5 + 0x38) = iVar1 + 1;
        if (iVar1 == -1) {
          *plVar4 = *(long *)(lVar5 + 0x30);
        }
      }
      else {
        *(int *)(lVar5 + 0x38) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          *plVar4 = *(long *)(lVar5 + 0x30);
          lVar6 = lVar5;
          if (*(char *)(lVar5 + 0x60) == '\x01') {
            lVar6 = *(long *)(lVar5 + 8) + -0x80;
            FUN_00132978(lVar5);
          }
          plVar4 = (long *)(lVar6 + 8);
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
                    /* try { // try from 0011d0a4 to 0011d0a7 has its CatchHandler @ 0011d0e4 */
              (**(code **)(lVar6 + 0x18))(lVar6 + 0x80);
            }
                    /* try { // try from 0011d0a8 to 0011d0af has its CatchHandler @ 0011d0e8 */
            FUN_00132978(lVar6);
          }
        }
      }
    }
    else {
      FUN_001351f8();
      *plVar4 = 0;
    }
  }
  return;
}


// ===== 0011d0ec  __cxa_decrement_exception_refcount =====

void __cxa_decrement_exception_refcount(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + -0x78);
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
      if (*(code **)(param_1 + -0x68) != (code *)0x0) {
                    /* try { // try from 0011d124 to 0011d127 has its CatchHandler @ 0011d140 */
        (**(code **)(param_1 + -0x68))();
      }
                    /* try { // try from 0011d128 to 0011d12f has its CatchHandler @ 0011d144 */
      FUN_00132978(param_1 + -0x80);
    }
  }
  return;
}


// ===== 0011d148  __cxa_current_exception_type =====

long * __cxa_current_exception_type(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if ((lVar2 == 0) || (*(ulong *)(lVar2 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = *(long **)(lVar2 + 0x10);
    }
  }
  return plVar1;
}


// ===== 0011d198  __cxa_rethrow =====

void __cxa_rethrow(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  plVar3 = (long *)__cxa_get_globals();
  lVar6 = *plVar3;
  if (lVar6 != 0) {
    puVar5 = (ulong *)(lVar6 + 0x60);
    uVar4 = *puVar5;
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      *(int *)(lVar6 + 0x38) = -*(int *)(lVar6 + 0x38);
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    else {
      *plVar3 = 0;
    }
    FUN_00134dc4(puVar5);
    uVar7 = *puVar5;
                    /* try { // try from 0011d210 to 0011d213 has its CatchHandler @ 0011d280 */
    plVar3 = (long *)__cxa_get_globals();
    if ((uVar7 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(lVar6 + 0x38);
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(lVar6 + 0x38) = iVar1 + 1;
      if (*plVar3 != lVar6) {
        *(long *)(lVar6 + 0x30) = *plVar3;
        *plVar3 = lVar6;
      }
      *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    }
    else {
      if (*plVar3 != 0) goto LAB_0011d1bc;
      *plVar3 = lVar6;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_0011d600(*(undefined8 *)(lVar6 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0011d210 with catch @ 0011d280 */
      __cxa_call_unexpected();
    }
  }
LAB_0011d1bc:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0011d284  __cxa_increment_exception_refcount =====

void __cxa_increment_exception_refcount(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + -0x78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


// ===== 0011d2a4  __cxa_current_primary_exception =====

long * __cxa_current_primary_exception(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 0011d2b0 to 0011d2b3 has its CatchHandler @ 0011d31c */
  plVar4 = (long *)__cxa_get_globals_fast();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    if ((lVar5 == 0) || (*(ulong *)(lVar5 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      plVar4 = (long *)0x0;
    }
    else {
      if ((*(ulong *)(lVar5 + 0x60) & 0xff) == 1) {
        lVar5 = *(long *)(lVar5 + 8) + -0x80;
      }
      plVar4 = (long *)(lVar5 + 0x80);
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return plVar4;
}


// ===== 0011d320  __cxa_rethrow_primary_exception =====

void __cxa_rethrow_primary_exception(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  
  if (param_1 != 0) {
    puVar5 = (undefined8 *)FUN_001327ac(0x80);
    if (puVar5 == (undefined8 *)0x0) {
LAB_0011d43c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    plVar8 = (long *)(param_1 + -0x78);
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = param_1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar5[2] = *(undefined8 *)(param_1 + -0x70);
    uVar6 = std::get_unexpected();
    puVar5[4] = uVar6;
    uVar6 = std::get_terminate();
    puVar9 = puVar5 + 0xc;
    *puVar9 = 0x434c4e47432b2b01;
    puVar5[5] = uVar6;
    lVar7 = __cxa_get_globals();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    puVar5[0xd] = FUN_0011d444;
    FUN_00134dc4(puVar9);
    uVar10 = *puVar9;
                    /* try { // try from 0011d3d4 to 0011d3d7 has its CatchHandler @ 0011d440 */
    plVar8 = (long *)__cxa_get_globals();
    if ((uVar10 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(puVar5 + 7);
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(puVar5 + 7) = iVar1 + 1;
      if ((undefined8 *)*plVar8 != puVar5) {
        puVar5[6] = (undefined8 *)*plVar8;
        *plVar8 = (long)puVar5;
      }
      *(int *)(plVar8 + 1) = (int)plVar8[1] + -1;
    }
    else {
      if (*plVar8 != 0) goto LAB_0011d43c;
      *plVar8 = (long)puVar5;
    }
  }
  return;
}


// ===== 0011d444  FUN_0011d444 =====

void FUN_0011d444(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 == 1) {
    lVar3 = *(long *)(param_2 + -0x58);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + -0x78);
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
        if (*(code **)(lVar3 + -0x68) != (code *)0x0) {
                    /* try { // try from 0011d48c to 0011d48f has its CatchHandler @ 0011d4b4 */
          (**(code **)(lVar3 + -0x68))();
        }
                    /* try { // try from 0011d490 to 0011d497 has its CatchHandler @ 0011d4b8 */
        FUN_00132978(lVar3 + -0x80);
      }
    }
    FUN_00132978(param_2 + -0x60);
    return;
  }
  FUN_0011d600(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0011d48c with catch @ 0011d4b4 */
  __cxa_call_unexpected();
}


// ===== 0011d4bc  __cxa_uncaught_exception =====

ulong __cxa_uncaught_exception(void)

{
  ulong uVar1;
  
                    /* try { // try from 0011d4c8 to 0011d4cb has its CatchHandler @ 0011d4e8 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) != 0);
  }
  return uVar1;
}


// ===== 0011d4ec  __cxa_uncaught_exceptions =====

ulong __cxa_uncaught_exceptions(void)

{
  ulong uVar1;
  
                    /* try { // try from 0011d4f8 to 0011d4fb has its CatchHandler @ 0011d510 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 0011d514  __cxa_get_globals =====

void __cxa_get_globals(void)

{
  __emutls_get_address(&DAT_00145620);
  return;
}


// ===== 0011d538  __cxa_get_globals_fast =====

void __cxa_get_globals_fast(void)

{
  __emutls_get_address(&DAT_00145620);
  return;
}


// ===== 0011d55c  std::get_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_unexpected() */

undefined8 std::get_unexpected(void)

{
  return *(undefined8 *)PTR___cxa_unexpected_handler_001412a0;
}


// ===== 0011d570  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  
                    /* try { // try from 0011d578 to 0011d57b has its CatchHandler @ 0011d5b0 */
  plVar1 = (long *)__cxa_get_globals_fast();
  if ((plVar1 != (long *)0x0) && (unaff_x19 = *plVar1, unaff_x19 != 0)) goto LAB_0011d598;
  do {
    FUN_0011d600(*(undefined8 *)PTR___cxa_terminate_handler_001412a8);
LAB_0011d598:
                    /* try { // try from 0011d59c to 0011d59f has its CatchHandler @ 0011d5ac */
    uVar2 = FUN_0011cd50(unaff_x19 + 0x60);
  } while ((uVar2 & 1) == 0);
  FUN_0011d600(*(undefined8 *)(unaff_x19 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0011d59c with catch @ 0011d5ac
                        */
  FUN_0011c730();
}


// ===== 0011d5b4  FUN_0011d5b4 =====

void FUN_0011d5b4(code *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_001319b8("unexpected_handler unexpectedly returned");
}


// ===== 0011d5d0  std::unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

undefined8 std::unexpected(void)

{
  FUN_0011d5b4(*(undefined8 *)PTR___cxa_unexpected_handler_001412a0);
  return *(undefined8 *)PTR___cxa_terminate_handler_001412a8;
}


// ===== 0011d5ec  std::get_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_terminate() */

undefined8 std::get_terminate(void)

{
  return *(undefined8 *)PTR___cxa_terminate_handler_001412a8;
}


// ===== 0011d600  FUN_0011d600 =====

void FUN_0011d600(code *param_1)

{
                    /* try { // try from 0011d610 to 0011d61f has its CatchHandler @ 0011d620 */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_001319b8("terminate_handler unexpectedly returned");
}


// ===== 0011d644  std::set_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

undefined8 std::set_new_handler(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR___cxa_new_handler_001412b0;
  do {
    uVar4 = *(undefined8 *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(_func_void **)puVar3 = param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return uVar4;
}


// ===== 0011d664  std::get_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_new_handler() */

undefined8 std::get_new_handler(void)

{
  return *(undefined8 *)PTR___cxa_new_handler_001412b0;
}


// ===== 0011d678  FUN_0011d678 =====

void FUN_0011d678(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_440;
  undefined1 auStack_434 [1024];
  int local_34;
  long *local_18;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  if ((plVar2 == (long *)0x0) || (lVar7 = *plVar2, lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_001319b8("terminating");
  }
  uVar3 = FUN_0011cd50(lVar7 + 0x60);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001319b8("terminating with %s foreign exception",PTR_s_uncaught_00145650);
  }
  lVar4 = FUN_0011cd44(lVar7 + 0x60);
  if (lVar4 == 0x434c4e47432b2b01) {
    local_18 = *(long **)(lVar7 + 8);
  }
  else {
    local_18 = (long *)(lVar7 + 0x80);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  local_440 = 0x400;
  uVar5 = __cxa_demangle(*(undefined8 *)(lVar7 + 8),auStack_434,&local_440,&local_34);
  if (local_34 != 0) {
    uVar5 = *(undefined8 *)(lVar7 + 8);
  }
  uVar3 = (**(code **)(*(long *)PTR_PTR_001412b8 + 0x20))(PTR_PTR_001412b8,lVar7,&local_18);
  puVar1 = PTR_s_uncaught_00145650;
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001319b8("terminating with %s exception of type %s",PTR_s_uncaught_00145650,uVar5);
  }
  uVar6 = (**(code **)(*local_18 + 0x10))();
                    /* WARNING: Subroutine does not return */
  FUN_001319b8("terminating with %s exception of type %s: %s",puVar1,uVar5,uVar6);
}


// ===== 0011d79c  FUN_0011d79c =====

void FUN_0011d79c(void)

{
  PTR_s_uncaught_00145650 = s_unexpected_001126e2;
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0011d7bc  std::set_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

undefined8 std::set_unexpected(_func_void *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR___cxa_unexpected_handler_001412a0;
  pcVar1 = FUN_0011d79c;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  do {
    uVar5 = *(undefined8 *)puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *(code **)puVar4 = pcVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar5;
}


// ===== 0011d7e8  std::set_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

undefined8 std::set_terminate(_func_void *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR___cxa_terminate_handler_001412a8;
  pcVar1 = FUN_0011d678;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  do {
    uVar5 = *(undefined8 *)puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *(code **)puVar4 = pcVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar5;
}


// ===== 0011d814  __cxa_demangle =====

void * __cxa_demangle(byte *param_1,void *param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  size_t sVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  ulong uVar17;
  void *local_13e0;
  ulong local_13d8;
  size_t local_13d0;
  undefined8 local_13c8;
  byte *local_13c0;
  byte *local_13b8;
  undefined8 *local_13b0;
  undefined8 *local_13a8;
  undefined8 **ppuStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 *local_1298;
  undefined8 *local_1290;
  undefined8 **ppuStack_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 local_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 local_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 *local_1180;
  undefined8 *local_1178;
  undefined8 **local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 *local_1128;
  undefined8 *local_1120;
  undefined8 **local_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 *local_10f0;
  undefined8 *local_10e8;
  undefined2 *local_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined2 local_10b8 [4];
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined4 local_10a0;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 *local_90;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((param_1 == (byte *)0x0) || ((param_2 != (void *)0x0 && (param_3 == (ulong *)0x0)))) {
    pvVar16 = (void *)0x0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffffd;
    }
    goto LAB_0011de70;
  }
  sVar3 = strlen((char *)param_1);
  local_13b8 = param_1 + sVar3;
  ppuStack_13a0 = &local_1298;
  uStack_12b0 = 0;
  local_12b8 = 0;
  local_1170 = &local_1128;
  ppuStack_1288 = &local_1180;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  local_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_12a0 = 0;
  local_12a8 = 0;
  uStack_1390 = 0;
  local_1398 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1278 = 0;
  local_1280 = 0;
  uStack_1268 = 0;
  uStack_1270 = 0;
  uStack_1258 = 0;
  local_1260 = 0;
  uStack_1248 = 0;
  uStack_1250 = 0;
  uStack_1238 = 0;
  local_1240 = 0;
  uStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  local_1220 = 0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  local_1200 = 0;
  uStack_11e8 = 0;
  uStack_11f0 = 0;
  uStack_11d8 = 0;
  local_11e0 = 0;
  uStack_11c8 = 0;
  uStack_11d0 = 0;
  uStack_11b8 = 0;
  local_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  uStack_1198 = 0;
  local_11a0 = 0;
  uStack_1188 = 0;
  uStack_1190 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  local_10e0 = local_10b8;
  uStack_1130 = 0;
  local_1138 = 0;
  uStack_1140 = 0;
  local_1148 = 0;
  local_1118 = &local_10f0;
  uStack_1160 = 0;
  local_1168 = 0;
  uStack_1108 = 0;
  local_1110 = 0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  local_10d8 = 0;
  local_10b8[0] = 1;
  uStack_1088 = 0;
  local_1090 = 0;
  local_13e0 = (void *)0x0;
  local_13d8 = 0;
  local_13d0 = 0;
  local_10b0 = 0xffffffffffffffff;
  local_10a0 = 0;
  local_10a8 = 0;
  local_13c8 = 0xffffffffffffffff;
  local_13b0 = &local_1398;
  local_13a8 = &local_1398;
  local_1298 = &local_1280;
  local_1290 = &local_1280;
  local_1180 = &local_1168;
  local_1178 = &local_1168;
  local_1128 = &local_1110;
  local_1120 = &local_1110;
  local_10f0 = &local_10d8;
  local_10e8 = &local_10d8;
  local_90 = &local_1090;
  if ((sVar3 < 2) || (*param_1 != 0x5f)) {
LAB_0011daac:
    local_13c0 = param_1;
    plVar4 = (long *)FUN_0011ec20(&local_13c0);
    pvVar16 = (void *)0x0;
    uVar7 = 0xfffffffe;
    if ((plVar4 != (long *)0x0) && (local_13b8 == local_13c0)) {
LAB_0011dad0:
      if (param_2 == (void *)0x0) {
LAB_0011dd2c:
        uVar17 = 0x400;
        param_2 = malloc(0x400);
        if (param_2 == (void *)0x0) {
          pvVar16 = (void *)0x0;
          uVar7 = 0xffffffff;
          goto LAB_0011ddd8;
        }
      }
      else {
LAB_0011dad4:
        uVar17 = *param_3;
      }
      local_13d8 = 0;
      local_13e0 = param_2;
      local_13d0 = uVar17;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_13e0);
      if (*(char *)((long)plVar4 + 9) != '\x01') {
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_13e0);
      }
      uVar17 = local_13d8 + 1;
      if (local_13d0 <= uVar17) {
        uVar11 = local_13d0 << 1;
        local_13d0 = uVar17;
        if (uVar17 <= uVar11) {
          local_13d0 = uVar11;
        }
        local_13e0 = realloc(local_13e0,local_13d0);
        if (local_13e0 == (void *)0x0) {
LAB_0011dec4:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        uVar17 = local_13d8 + 1;
      }
      *(undefined1 *)((long)local_13e0 + local_13d8) = 0;
      if (param_3 != (ulong *)0x0) {
        *param_3 = uVar17;
      }
      uVar7 = 0;
      pvVar16 = local_13e0;
      local_13d8 = uVar17;
    }
  }
  else if (param_1[1] == 0x5a) {
    lVar8 = 2;
LAB_0011d9e0:
    local_13c0 = param_1 + lVar8;
                    /* try { // try from 0011d9e8 to 0011dd7b has its CatchHandler @ 0011decc */
    plVar4 = (long *)FUN_0011df6c(&local_13c0);
    puVar6 = local_90;
    pbVar13 = local_13b8;
    pbVar12 = local_13c0;
    if (plVar4 != (long *)0x0) {
      if (local_13b8 == local_13c0) goto LAB_0011dad0;
      if (*local_13c0 != 0x2e) goto LAB_0011deac;
      lVar8 = local_90[1];
      if (0xfef < lVar8 + 0x30U) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_0011dec4;
        lVar8 = 0;
        *puVar5 = puVar6;
        puVar5[1] = 0;
        local_90 = puVar5;
      }
      local_90[1] = lVar8 + 0x30;
      plVar9 = (long *)((long)local_90 + lVar8 + 0x10);
      *plVar9 = (long)&PTR_FUN_0013f5e8;
      *(undefined4 *)((long)local_90 + lVar8 + 0x18) = 0x1010101;
      *(long **)((long)local_90 + lVar8 + 0x20) = plVar4;
      *(byte **)((long)local_90 + lVar8 + 0x28) = pbVar12;
      *(byte **)((long)local_90 + lVar8 + 0x30) = pbVar13;
      plVar4 = plVar9;
      local_13c0 = local_13b8;
joined_r0x0011dd28:
      if (param_2 != (void *)0x0) goto LAB_0011dad4;
      goto LAB_0011dd2c;
    }
LAB_0011deac:
    pvVar16 = (void *)0x0;
    uVar7 = 0xfffffffe;
  }
  else {
    if ((sVar3 < 3) || (param_1[1] != 0x5f)) goto LAB_0011daac;
    if (param_1[2] == 0x5a) {
      lVar8 = 3;
      goto LAB_0011d9e0;
    }
    if (sVar3 < 4) goto LAB_0011daac;
    if ((param_1[2] == 0x5f) && (param_1[3] == 0x5a)) {
      lVar8 = 4;
    }
    else {
      if ((sVar3 < 5) || (((param_1[2] != 0x5f || (param_1[3] != 0x5f)) || (param_1[4] != 0x5a))))
      goto LAB_0011daac;
      lVar8 = 5;
    }
    local_13c0 = param_1 + lVar8;
    lVar8 = FUN_0011df6c(&local_13c0);
    puVar6 = local_90;
    if (lVar8 != 0) {
      if (((((0xc < (ulong)((long)local_13b8 - (long)local_13c0)) && (*local_13c0 == 0x5f)) &&
           ((local_13c0[1] == 0x62 &&
            ((((local_13c0[2] == 0x6c && (local_13c0[3] == 0x6f)) && (local_13c0[4] == 99)) &&
             ((local_13c0[5] == 0x6b && (local_13c0[6] == 0x5f)))))))) && (local_13c0[7] == 0x69))
         && (((local_13c0[8] == 0x6e && (local_13c0[9] == 0x76)) &&
             ((local_13c0[10] == 0x6f && ((local_13c0[0xb] == 0x6b && (local_13c0[0xc] == 0x65))))))
            )) {
        pbVar12 = local_13c0 + 0xd;
        if (pbVar12 != local_13b8) {
          bVar1 = *pbVar12;
          if (bVar1 == 0x5f) {
            pbVar12 = local_13c0 + 0xe;
          }
          local_13c0 = pbVar12;
          if (local_13b8 == pbVar12) {
            pbVar13 = (byte *)0x0;
            pbVar14 = local_13b8;
            pbVar15 = (byte *)0x0;
          }
          else if (*pbVar12 - 0x30 < 10) {
            do {
              local_13c0 = local_13c0 + 1;
              pbVar13 = pbVar12;
              pbVar14 = local_13b8;
              pbVar15 = local_13b8;
              if (local_13b8 == local_13c0) break;
              pbVar14 = local_13c0;
              pbVar15 = local_13c0;
            } while (*local_13c0 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar14 = pbVar12;
            pbVar15 = (byte *)0x0;
          }
          if ((bVar1 == 0x5f) && (pbVar13 == pbVar15)) goto LAB_0011deac;
          pbVar12 = local_13c0;
          if (local_13b8 != pbVar14) {
            if (*pbVar14 != 0x2e) goto LAB_0011deac;
            local_13c0 = local_13b8;
            pbVar12 = local_13c0;
          }
        }
        local_13c0 = pbVar12;
        lVar10 = local_90[1];
        if (0xfef < lVar10 + 0x30U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_0011dec4;
          lVar10 = 0;
          *puVar5 = puVar6;
          puVar5[1] = 0;
          local_90 = puVar5;
        }
        local_90[1] = lVar10 + 0x30;
        plVar4 = (long *)((long)local_90 + lVar10 + 0x10);
        *plVar4 = (long)&PTR_FUN_0013db98;
        *(undefined4 *)((long)local_90 + lVar10 + 0x18) = 0x1010114;
        *(char **)((long)local_90 + lVar10 + 0x20) = "invocation function for block in ";
        *(char **)((long)local_90 + lVar10 + 0x28) = "";
        *(long *)((long)local_90 + lVar10 + 0x30) = lVar8;
        goto joined_r0x0011dd28;
      }
      goto LAB_0011deac;
    }
    uVar7 = 0xfffffffe;
    pvVar16 = (void *)0x0;
  }
LAB_0011ddd8:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar7;
  }
  while (puVar6 = local_90, local_90 != (undefined8 *)0x0) {
    while (local_90 = (undefined8 *)*puVar6, &local_1090 == puVar6) {
      puVar6 = local_90;
      if (local_90 == (undefined8 *)0x0) goto LAB_0011de10;
    }
    free(puVar6);
  }
LAB_0011de10:
  local_1090 = 0;
  uStack_1088 = 0;
  local_90 = &local_1090;
  if (local_10f0 != &local_10d8) {
    free(local_10f0);
  }
  if (local_1128 != &local_1110) {
    free(local_1128);
  }
  if (local_1180 != &local_1168) {
    free(local_1180);
  }
  if (local_1298 != &local_1280) {
    free(local_1298);
  }
  if (local_13b0 != &local_1398) {
    free(local_13b0);
  }
LAB_0011de70:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar16;
}


// ===== 0011df6c  FUN_0011df6c =====

undefined8 * FUN_0011df6c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  char *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  void *pvVar27;
  undefined8 *puVar28;
  undefined1 auVar29 [16];
  long local_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  ulong local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pcVar21 = (char *)*param_1;
  pcVar16 = (char *)param_1[1];
  if ((pcVar16 == pcVar21) || ((cVar4 = *pcVar21, cVar4 != 'T' && (cVar4 != 'G')))) {
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_70 = param_1[0x5b] - param_1[0x5a] >> 3;
    puVar28 = (undefined8 *)FUN_00120424(param_1,&local_80);
    puVar13 = puVar28;
    if (puVar28 == (undefined8 *)0x0) goto LAB_0011eb54;
    lVar12 = param_1[0x5a];
    uVar23 = param_1[0x5b] - lVar12;
    uVar11 = (long)uVar23 >> 3;
    if (local_70 < uVar11) {
      puVar20 = (undefined8 *)param_1[0x53];
      uVar25 = lVar12 - param_1[0x5b];
      uVar2 = uVar23;
      if ((long)uVar23 < 0) {
        uVar2 = 0xffffffffffffffff;
      }
      if (0 < (long)uVar2) {
        uVar2 = 1;
      }
      if ((long)uVar25 <= (long)uVar23) {
        uVar25 = uVar23;
      }
      if ((puVar20 != (undefined8 *)param_1[0x54]) &&
         (plVar24 = (long *)*puVar20, plVar24 != (long *)0x0)) {
        bVar10 = true;
        uVar23 = local_70;
        do {
          lVar15 = *(long *)(lVar12 + uVar23 * 8);
          uVar26 = *(ulong *)(lVar15 + 0x10);
          if ((ulong)(plVar24[1] - *plVar24 >> 3) <= uVar26) break;
          uVar1 = uVar23 + 1;
          bVar10 = uVar1 < uVar11;
          *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(*plVar24 + uVar26 * 8);
          if (uVar2 * (uVar25 >> 3) - 1 == uVar23) {
            param_1[0x5b] = lVar12 + local_70 * 8;
            if (uVar11 <= uVar1) goto LAB_0011e178;
            goto LAB_0011eb50;
          }
          plVar24 = (long *)*puVar20;
          uVar23 = uVar1;
        } while (plVar24 != (long *)0x0);
        if (!bVar10) goto LAB_0011e178;
      }
    }
    else {
      param_1[0x5b] = lVar12 + local_70 * 8;
LAB_0011e178:
      pbVar18 = (byte *)*param_1;
      pbVar3 = (byte *)param_1[1];
      if (pbVar3 == pbVar18) goto LAB_0011eb54;
      uVar6 = *pbVar18 - 0x2e;
      if ((uVar6 < 0x32) && ((1L << ((ulong)uVar6 & 0x3f) & 0x2000000800001U) != 0))
      goto LAB_0011eb54;
      puVar20 = (undefined8 *)0x0;
      if ((0xc < (ulong)((long)pbVar3 - (long)pbVar18)) && (*pbVar18 == 0x55)) {
        if (((((((pbVar18[1] == 0x61) && (pbVar18[2] == 0x39)) && (pbVar18[3] == 0x65)) &&
              ((pbVar18[4] == 0x6e && (pbVar18[5] == 0x61)))) && (pbVar18[6] == 0x62)) &&
            (((pbVar18[7] == 0x6c && (pbVar18[8] == 0x65)) && (pbVar18[9] == 0x5f)))) &&
           (((pbVar18[10] == 0x69 && (pbVar18[0xb] == 0x66)) && (pbVar18[0xc] == 0x49)))) {
          pbVar18 = pbVar18 + 0xd;
          *param_1 = (long)pbVar18;
          lVar12 = param_1[2];
          lVar15 = param_1[3];
          if (pbVar18 == pbVar3) goto LAB_0011e284;
          while (*pbVar18 != 0x45) {
LAB_0011e284:
            do {
              local_88 = FUN_00120f6c(param_1);
              if (local_88 == 0) goto LAB_0011eb50;
              FUN_0012115c(param_1 + 2,&local_88);
              pbVar18 = (byte *)*param_1;
            } while (pbVar18 == (byte *)param_1[1]);
          }
          lVar12 = (lVar15 - lVar12 >> 3) * 8;
          *param_1 = (long)(pbVar18 + 1);
          auVar29 = FUN_0012a5c8(param_1,param_1[2] + lVar12,param_1[3]);
          pvVar27 = (void *)param_1[0x266];
          param_1[3] = param_1[2] + lVar12;
          lVar12 = *(long *)((long)pvVar27 + 8);
          puVar13 = (undefined8 *)pvVar27;
          if (0xfef < lVar12 + 0x20U) {
            puVar13 = (undefined8 *)malloc(0x1000);
            if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
            lVar12 = 0;
            *puVar13 = pvVar27;
            puVar13[1] = 0;
            param_1[0x266] = (long)puVar13;
          }
          *(long *)((long)puVar13 + 8) = lVar12 + 0x20;
          puVar20 = (undefined8 *)((long)puVar13 + lVar12 + 0x10);
          *puVar20 = &PTR_FUN_0013f508;
          *(undefined4 *)((long)puVar13 + lVar12 + 0x18) = 0x1010109;
          *(undefined1 (*) [16])((long)puVar13 + lVar12 + 0x20) = auVar29;
        }
        else {
          puVar20 = (undefined8 *)0x0;
        }
      }
      lVar12 = 0;
      if ((((char)local_80 != '\0') || (local_80._1_1_ == '\0')) ||
         (lVar12 = FUN_0011ec20(param_1), lVar12 != 0)) {
        pcVar21 = (char *)*param_1;
        if ((pcVar21 == (char *)param_1[1]) || (*pcVar21 != 'v')) {
          lVar15 = param_1[2];
          lVar17 = param_1[3];
          do {
            local_88 = FUN_0011ec20(param_1);
            if (local_88 == 0) goto LAB_0011eb50;
            FUN_0012115c(param_1 + 2,&local_88);
          } while (((byte *)param_1[1] != (byte *)*param_1) &&
                  ((uVar6 = *(byte *)*param_1 - 0x2e, 0x31 < uVar6 ||
                   ((1L << ((ulong)uVar6 & 0x3f) & 0x2000000800001U) == 0))));
          lVar15 = (lVar17 - lVar15 >> 3) * 8;
          auVar29 = FUN_0012a5c8(param_1,param_1[2] + lVar15,param_1[3]);
          pvVar27 = (void *)param_1[0x266];
          param_1[3] = param_1[2] + lVar15;
          lVar15 = *(long *)((long)pvVar27 + 8);
          puVar14 = (undefined8 *)pvVar27;
          if (0xfef < lVar15 + 0x40U) {
            puVar14 = (undefined8 *)malloc(0x1000);
            if (puVar14 == (undefined8 *)0x0) goto LAB_0011ec18;
            lVar15 = 0;
            *puVar14 = pvVar27;
            puVar14[1] = 0;
            param_1[0x266] = (long)puVar14;
          }
          *(long *)((long)puVar14 + 8) = lVar15 + 0x40;
          puVar13 = (undefined8 *)((long)puVar14 + lVar15 + 0x10);
          *puVar13 = &PTR_FUN_0013f578;
          *(undefined4 *)((long)puVar14 + lVar15 + 0x18) = 0x10012;
          *(long *)((long)puVar14 + lVar15 + 0x20) = lVar12;
          *(undefined8 **)((long)puVar14 + lVar15 + 0x28) = puVar28;
          *(undefined1 (*) [16])((long)puVar14 + lVar15 + 0x30) = auVar29;
        }
        else {
          pvVar27 = (void *)param_1[0x266];
          *param_1 = (long)(pcVar21 + 1);
          lVar15 = *(long *)((long)pvVar27 + 8);
          puVar14 = (undefined8 *)pvVar27;
          if (0xfef < lVar15 + 0x40U) {
            puVar14 = (undefined8 *)malloc(0x1000);
            if (puVar14 == (undefined8 *)0x0) goto LAB_0011ec18;
            lVar15 = 0;
            *puVar14 = pvVar27;
            puVar14[1] = 0;
            param_1[0x266] = (long)puVar14;
          }
          *(long *)((long)puVar14 + 8) = lVar15 + 0x40;
          puVar13 = (undefined8 *)((long)puVar14 + lVar15 + 0x10);
          *puVar13 = &PTR_FUN_0013f578;
          *(undefined4 *)((long)puVar14 + lVar15 + 0x18) = 0x10012;
          *(long *)((long)puVar14 + lVar15 + 0x20) = lVar12;
          *(undefined8 **)((long)puVar14 + lVar15 + 0x28) = puVar28;
          *(undefined8 *)((long)puVar14 + lVar15 + 0x30) = 0;
          *(undefined8 *)((long)puVar14 + lVar15 + 0x38) = 0;
        }
        puVar13[6] = puVar20;
        *(undefined4 *)(puVar13 + 7) = local_7c;
        *(undefined1 *)((long)puVar13 + 0x3c) = local_78;
        goto LAB_0011eb54;
      }
    }
  }
  else if (pcVar16 != pcVar21) {
    if (cVar4 == 'G') {
      if (1 < (ulong)((long)pcVar16 - (long)pcVar21)) {
        if (pcVar21[1] == 'R') {
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_00120424(param_1,0);
          if (lVar12 != 0) {
            pbVar18 = (byte *)*param_1;
            pbVar3 = (byte *)param_1[1];
            if (pbVar3 != pbVar18) {
              bVar5 = *pbVar18;
              if ((bVar5 < 0x30) || ((0x39 < bVar5 && (0x19 < (byte)(bVar5 + 0xbf))))) {
                bVar10 = true;
              }
              else {
                pbVar19 = pbVar18 + 1;
                do {
                  if ((0x39 < bVar5) && (pbVar18 = pbVar19, 0x19 < (byte)(bVar5 + 0xbf))) break;
                  *param_1 = (long)pbVar19;
                  if (pbVar3 == pbVar19) goto LAB_0011eb50;
                  pbVar18 = pbVar19 + 1;
                  bVar5 = *pbVar19;
                  pbVar19 = pbVar18;
                } while (0x2f < bVar5);
                bVar10 = false;
                pbVar18 = pbVar18 + -1;
              }
              if ((pbVar18 == pbVar3) || (*pbVar18 != 0x5f)) {
                if (!bVar10) goto LAB_0011eb50;
              }
              else {
                *param_1 = (long)(pbVar18 + 1);
              }
            }
            pvVar27 = (void *)param_1[0x266];
            lVar15 = *(long *)((long)pvVar27 + 8);
            puVar13 = (undefined8 *)pvVar27;
            if (0xfef < lVar15 + 0x30U) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = pvVar27;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "reference temporary for ";
            *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
            goto LAB_0011eaa8;
          }
        }
        else if (pcVar21[1] == 'V') {
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_00120424(param_1,0);
          if (lVar12 != 0) {
            pvVar27 = (void *)param_1[0x266];
            lVar15 = *(long *)((long)pvVar27 + 8);
            puVar13 = (undefined8 *)pvVar27;
            if (0xfef < lVar15 + 0x30U) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = pvVar27;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "guard variable for ";
            *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
            goto LAB_0011eaa8;
          }
        }
      }
    }
    else if (cVar4 == 'T') {
      if ((ulong)((long)pcVar16 - (long)pcVar21) < 2) {
code_r0x0011e34c:
        pcVar21 = pcVar21 + 1;
        *param_1 = (long)pcVar21;
        if (pcVar16 == pcVar21) {
          bVar10 = false;
        }
        else {
          bVar10 = *pcVar21 == 'v';
        }
        uVar11 = FUN_00121220(param_1);
        if (((uVar11 & 1) == 0) && (lVar12 = FUN_0011df6c(param_1), lVar12 != 0)) {
          puVar28 = (undefined8 *)param_1[0x266];
          lVar15 = puVar28[1];
          bVar9 = 0xfef < lVar15 + 0x30U;
          if (bVar10) {
            puVar13 = puVar28;
            if (bVar9) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) {
LAB_0011ec18:
                    /* WARNING: Subroutine does not return */
                std::terminate();
              }
              lVar15 = 0;
              *puVar13 = puVar28;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "virtual thunk to ";
            puVar13[1] = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
          }
          else {
            puVar13 = puVar28;
            if (bVar9) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = puVar28;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "non-virtual thunk to ";
            puVar13[1] = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
          }
LAB_0011eaa8:
          *(undefined4 *)(puVar13 + 1) = 0x1010114;
          puVar13[2] = pcVar21;
          puVar13[3] = pcVar16;
          puVar13[4] = lVar12;
          goto LAB_0011eb54;
        }
      }
      else {
        switch(pcVar21[1]) {
        case 'C':
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_0011ec20(param_1);
          if (lVar12 != 0) {
            pbVar18 = (byte *)*param_1;
            pbVar3 = (byte *)param_1[1];
            if (pbVar18 != pbVar3) {
              pbVar19 = pbVar18;
              if (*pbVar18 == 0x6e) {
                pbVar19 = pbVar18 + 1;
                *param_1 = (long)pbVar19;
              }
              if ((pbVar3 != pbVar19) && (*pbVar19 - 0x30 < 10)) {
                do {
                  pbVar8 = pbVar19;
                  pbVar19 = pbVar8 + 1;
                  *param_1 = (long)pbVar19;
                  pbVar22 = pbVar3;
                  if (pbVar3 == pbVar19) break;
                  pbVar22 = pbVar19;
                } while (*pbVar19 - 0x30 < 10);
                puVar13 = (undefined8 *)0x0;
                if ((pbVar18 == pbVar22) || (pbVar3 == pbVar19)) goto LAB_0011eb54;
                if (*pbVar19 == 0x5f) {
                  *param_1 = (long)(pbVar8 + 2);
                  lVar15 = FUN_0011ec20(param_1);
                  if (lVar15 != 0) {
                    pvVar27 = (void *)param_1[0x266];
                    lVar17 = *(long *)((long)pvVar27 + 8);
                    puVar28 = (undefined8 *)pvVar27;
                    if (0xfef < lVar17 + 0x20U) {
                      puVar28 = (undefined8 *)malloc(0x1000);
                      if (puVar28 == (undefined8 *)0x0) goto LAB_0011ec18;
                      lVar17 = 0;
                      *puVar28 = pvVar27;
                      puVar28[1] = 0;
                      param_1[0x266] = (long)puVar28;
                    }
                    *(long *)((long)puVar28 + 8) = lVar17 + 0x20;
                    puVar13 = (undefined8 *)((long)puVar28 + lVar17 + 0x10);
                    *puVar13 = &PTR_FUN_0013dc18;
                    *(undefined4 *)((long)puVar28 + lVar17 + 0x18) = 0x1010115;
                    *(long *)((long)puVar28 + lVar17 + 0x20) = lVar15;
                    *(long *)((long)puVar28 + lVar17 + 0x28) = lVar12;
                    goto LAB_0011eb54;
                  }
                }
              }
            }
          }
          break;
        default:
          goto code_r0x0011e34c;
        case 'H':
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_00120424(param_1,0);
          if (lVar12 == 0) break;
          pvVar27 = (void *)param_1[0x266];
          lVar15 = *(long *)((long)pvVar27 + 8);
          puVar13 = (undefined8 *)pvVar27;
          if (0xfef < lVar15 + 0x30U) {
            puVar13 = (undefined8 *)malloc(0x1000);
            if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
            lVar15 = 0;
            *puVar13 = pvVar27;
            puVar13[1] = 0;
            param_1[0x266] = (long)puVar13;
          }
          pcVar21 = "thread-local initialization routine for ";
          *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
          puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
          *puVar13 = &PTR_FUN_0013db98;
          pcVar16 = "";
          goto LAB_0011eaa8;
        case 'I':
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_0011ec20(param_1);
          if (lVar12 != 0) {
            pvVar27 = (void *)param_1[0x266];
            lVar15 = *(long *)((long)pvVar27 + 8);
            puVar13 = (undefined8 *)pvVar27;
            if (0xfef < lVar15 + 0x30U) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = pvVar27;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "typeinfo for ";
            *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
            goto LAB_0011eaa8;
          }
          break;
        case 'S':
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_0011ec20(param_1);
          if (lVar12 != 0) {
            pvVar27 = (void *)param_1[0x266];
            lVar15 = *(long *)((long)pvVar27 + 8);
            puVar13 = (undefined8 *)pvVar27;
            if (0xfef < lVar15 + 0x30U) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = pvVar27;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "typeinfo name for ";
            *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
            goto LAB_0011eaa8;
          }
          break;
        case 'T':
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_0011ec20(param_1);
          if (lVar12 != 0) {
            pvVar27 = (void *)param_1[0x266];
            lVar15 = *(long *)((long)pvVar27 + 8);
            puVar13 = (undefined8 *)pvVar27;
            if (0xfef < lVar15 + 0x30U) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = pvVar27;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "VTT for ";
            *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
            goto LAB_0011eaa8;
          }
          break;
        case 'V':
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_0011ec20(param_1);
          if (lVar12 != 0) {
            pvVar27 = (void *)param_1[0x266];
            lVar15 = *(long *)((long)pvVar27 + 8);
            puVar13 = (undefined8 *)pvVar27;
            if (0xfef < lVar15 + 0x30U) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = pvVar27;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "vtable for ";
            *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
            goto LAB_0011eaa8;
          }
          break;
        case 'W':
          *param_1 = (long)(pcVar21 + 2);
          lVar12 = FUN_00120424(param_1,0);
          if (lVar12 != 0) {
            pvVar27 = (void *)param_1[0x266];
            lVar15 = *(long *)((long)pvVar27 + 8);
            puVar13 = (undefined8 *)pvVar27;
            if (0xfef < lVar15 + 0x30U) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = pvVar27;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "thread-local wrapper routine for ";
            *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
            goto LAB_0011eaa8;
          }
          break;
        case 'c':
          *param_1 = (long)(pcVar21 + 2);
          uVar11 = FUN_00121220(param_1);
          if ((((uVar11 & 1) == 0) && (uVar11 = FUN_00121220(param_1), (uVar11 & 1) == 0)) &&
             (lVar12 = FUN_0011df6c(param_1), lVar12 != 0)) {
            pvVar27 = (void *)param_1[0x266];
            lVar15 = *(long *)((long)pvVar27 + 8);
            puVar13 = (undefined8 *)pvVar27;
            if (0xfef < lVar15 + 0x30U) {
              puVar13 = (undefined8 *)malloc(0x1000);
              if (puVar13 == (undefined8 *)0x0) goto LAB_0011ec18;
              lVar15 = 0;
              *puVar13 = pvVar27;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            pcVar21 = "covariant return thunk to ";
            *(long *)((long)puVar13 + 8) = lVar15 + 0x30;
            puVar13 = (undefined8 *)((long)puVar13 + lVar15 + 0x10);
            *puVar13 = &PTR_FUN_0013db98;
            pcVar16 = "";
            goto LAB_0011eaa8;
          }
        }
      }
    }
  }
LAB_0011eb50:
  puVar13 = (undefined8 *)0x0;
LAB_0011eb54:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar13;
}


// ===== 0011ec20  FUN_0011ec20 =====

byte * FUN_0011ec20(long *param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined **ppuVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  char *pcVar16;
  byte *pbVar17;
  void *pvVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  byte *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = (byte *)0x0;
  pbVar6 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  uVar12 = (long)pbVar5 - (long)pbVar6;
  if (pbVar5 == pbVar6) {
code_r0x0011f6b4:
    pbVar6 = (byte *)FUN_0012fb8c(param_1);
    goto LAB_0011f6bc;
  }
  bVar1 = *pbVar6;
  switch(bVar1) {
  case 0x41:
    if (pbVar6 != pbVar5) {
      pbVar17 = pbVar6 + 1;
      *param_1 = (long)pbVar17;
      if (pbVar5 != pbVar17) {
        if (*pbVar17 - 0x30 < 10) {
          pbVar6 = pbVar6 + 2;
          do {
            pbVar11 = pbVar6;
            *param_1 = (long)pbVar11;
            pbVar20 = pbVar5;
            if (pbVar5 == pbVar11) break;
            pbVar6 = pbVar11 + 1;
            pbVar20 = pbVar11;
          } while (*pbVar11 - 0x30 < 10);
          pvVar18 = (void *)param_1[0x266];
          lVar8 = *(long *)((long)pvVar18 + 8);
          puVar4 = (undefined8 *)pvVar18;
          if (0xfef < lVar8 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
            lVar8 = 0;
            *puVar4 = pvVar18;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
          pbVar5 = (byte *)((long)puVar4 + lVar8 + 0x10);
          *(undefined ***)pbVar5 = &PTR_FUN_0013dc88;
          *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x1010107;
          *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar17;
          *(byte **)((long)puVar4 + lVar8 + 0x28) = pbVar20;
          pcVar16 = (char *)*param_1;
          if (pcVar16 == (char *)param_1[1]) goto LAB_001203a8;
          cVar2 = *pcVar16;
joined_r0x0011fb50:
          if (cVar2 != '_') goto LAB_001203a8;
          pbVar6 = (byte *)(pcVar16 + 1);
        }
        else {
          if (*pbVar17 != 0x5f) goto LAB_0011fa94;
          pbVar5 = (byte *)0x0;
          pbVar6 = pbVar6 + 2;
        }
        *param_1 = (long)pbVar6;
        pbVar6 = (byte *)FUN_0011ec20(param_1);
        if (pbVar6 != (byte *)0x0) {
          puVar19 = (undefined8 *)param_1[0x266];
          lVar8 = puVar19[1];
          puVar4 = puVar19;
          if (0xfef < lVar8 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) {
LAB_0012041c:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar8 = 0;
            *puVar4 = puVar19;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          lVar7 = (long)puVar4 + lVar8;
          ppuVar10 = &PTR_FUN_0013f9d8;
          uVar14 = 0x100000e;
LAB_0011fbb4:
          puVar4[1] = lVar8 + 0x20;
          *(undefined ***)(lVar7 + 0x10) = ppuVar10;
          *(undefined4 *)(lVar7 + 0x18) = uVar14;
          *(byte **)(lVar7 + 0x20) = pbVar6;
          *(byte **)(lVar7 + 0x28) = pbVar5;
          pbVar6 = (byte *)(lVar7 + 0x10);
        }
        goto LAB_0011f6bc;
      }
LAB_0011fa94:
      pbVar5 = (byte *)FUN_00122e5c(param_1);
      pbVar6 = pbVar5;
      if (pbVar5 == (byte *)0x0) goto LAB_0011f6bc;
      pcVar16 = (char *)*param_1;
      if (pcVar16 != (char *)param_1[1]) {
        cVar2 = *pcVar16;
        goto joined_r0x0011fb50;
      }
    }
    goto LAB_001203a8;
  default:
    goto code_r0x0011f6b4;
  case 0x43:
    *param_1 = (long)(pbVar6 + 1);
    pbVar17 = (byte *)FUN_0011ec20(param_1);
    if (pbVar17 == (byte *)0x0) goto code_r0x0011fcec;
    pvVar18 = (void *)param_1[0x266];
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x30U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar16 = " complex";
    *(long *)((long)puVar4 + 8) = lVar8 + 0x30;
    local_50 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0013fc08;
    pcVar9 = "";
    goto LAB_0011f0c0;
  case 0x44:
    if (uVar12 < 2) goto LAB_0011fce4;
    pbVar17 = (byte *)0x0;
    switch(pbVar6[1]) {
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto code_r0x0011f454;
    default:
      goto code_r0x0011fcec;
    case 0x54:
    case 0x74:
      pbVar6 = (byte *)FUN_00122284(param_1);
      goto LAB_0011f6bc;
    case 0x61:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar16 = "auto";
      goto LAB_0011fa7c;
    case 99:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar16 = "decltype(auto)";
      goto LAB_0011f8d8;
    case 100:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar16 = "decimal64";
      break;
    case 0x65:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = (long)puVar4 + lVar8;
      pcVar16 = "decimal128";
      goto LAB_0011f264;
    case 0x66:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar16 = "decimal32";
      break;
    case 0x68:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar16 = "decimal16";
      break;
    case 0x69:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar16 = "char32_t";
      goto LAB_0011eeb8;
    case 0x6e:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar16 = "std::nullptr_t";
LAB_0011f8d8:
      puVar4[1] = lVar7;
      pbVar17 = (byte *)(lVar8 + 0x10);
      *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
      pcVar9 = pcVar16 + 0xe;
      goto LAB_0011fa88;
    case 0x70:
      *param_1 = (long)(pbVar6 + 2);
      pbVar17 = (byte *)FUN_0011ec20(param_1);
      if (pbVar17 == (byte *)0x0) goto code_r0x0011fcec;
      pvVar18 = (void *)param_1[0x266];
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = (undefined8 *)pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      local_50 = (byte *)((long)puVar4 + lVar8 + 0x10);
      *(undefined ***)local_50 = &PTR_FUN_0013e548;
      *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x1010122;
      *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar17;
      goto LAB_0011f6c4;
    case 0x73:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar16 = "char16_t";
LAB_0011eeb8:
      puVar4[1] = lVar7;
      pbVar17 = (byte *)(lVar8 + 0x10);
      *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
      pcVar9 = pcVar16 + 8;
      goto LAB_0011fa88;
    case 0x75:
      puVar19 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar8 = puVar19[1];
      puVar4 = puVar19;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
        lVar8 = 0;
        *puVar4 = puVar19;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = (long)puVar4 + lVar8;
      pcVar16 = "char8_t";
      goto LAB_0011f408;
    case 0x76:
      pbVar17 = pbVar6 + 2;
      *param_1 = (long)pbVar17;
      if ((pbVar5 == pbVar17) || (bVar1 = *pbVar17, bVar1 < 0x31)) {
LAB_0012031c:
        pbVar5 = (byte *)FUN_00122e5c(param_1);
        pbVar6 = pbVar5;
        if (pbVar5 != (byte *)0x0) {
          pcVar16 = (char *)*param_1;
          if ((pcVar16 == (char *)param_1[1]) || (*pcVar16 != '_')) goto LAB_001203a8;
          *param_1 = (long)(pcVar16 + 1);
          pbVar6 = (byte *)FUN_0011ec20(param_1);
          if (pbVar6 == (byte *)0x0) goto LAB_0011f6bc;
          puVar19 = (undefined8 *)param_1[0x266];
          lVar8 = puVar19[1];
          puVar4 = puVar19;
          if (0xfef < lVar8 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
            lVar8 = 0;
            *puVar4 = puVar19;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          lVar7 = (long)puVar4 + lVar8;
          ppuVar10 = &PTR_FUN_0013f968;
          uVar14 = 0x1010119;
          goto LAB_0011fbb4;
        }
      }
      else if (bVar1 < 0x3a) {
        pbVar6 = pbVar6 + 3;
        do {
          pbVar11 = pbVar6;
          *param_1 = (long)pbVar11;
          pbVar20 = pbVar5;
          if (pbVar5 == pbVar11) break;
          pbVar6 = pbVar11 + 1;
          pbVar20 = pbVar11;
        } while (*pbVar11 - 0x30 < 10);
        pvVar18 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar18 + 8);
        puVar4 = (undefined8 *)pvVar18;
        if (0xfef < lVar8 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
          lVar8 = 0;
          *puVar4 = pvVar18;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
        puVar19 = (undefined8 *)((long)puVar4 + lVar8 + 0x10);
        *puVar19 = &PTR_FUN_0013dc88;
        *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x1010107;
        *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar17;
        *(byte **)((long)puVar4 + lVar8 + 0x28) = pbVar20;
        pcVar16 = (char *)*param_1;
        if ((pcVar16 == (char *)param_1[1]) || (*pcVar16 != '_')) goto LAB_001203a8;
        pcVar9 = pcVar16 + 1;
        *param_1 = (long)pcVar9;
        if ((pcVar9 == (char *)param_1[1]) || (*pcVar9 != 'p')) {
          pbVar6 = (byte *)FUN_0011ec20(param_1);
          if (pbVar6 != (byte *)0x0) {
            pvVar18 = (void *)param_1[0x266];
            lVar8 = *(long *)((long)pvVar18 + 8);
            puVar4 = (undefined8 *)pvVar18;
            if (0xfef < lVar8 + 0x20U) {
              puVar4 = (undefined8 *)malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
              lVar8 = 0;
              *puVar4 = pvVar18;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
            pbVar5 = (byte *)((long)puVar4 + lVar8 + 0x10);
            *(undefined ***)pbVar5 = &PTR_FUN_0013f968;
            *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x1010119;
            *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar6;
            *(undefined8 **)((long)puVar4 + lVar8 + 0x28) = puVar19;
            pbVar6 = pbVar5;
          }
        }
        else {
          pvVar18 = (void *)param_1[0x266];
          *param_1 = (long)(pcVar16 + 2);
          lVar8 = *(long *)((long)pvVar18 + 8);
          puVar4 = (undefined8 *)pvVar18;
          if (0xfef < lVar8 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
            lVar8 = 0;
            *puVar4 = pvVar18;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
          pbVar6 = (byte *)((long)puVar4 + lVar8 + 0x10);
          *(undefined ***)pbVar6 = &PTR_FUN_0013f8f8;
          *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x101011a;
          *(undefined8 **)((long)puVar4 + lVar8 + 0x20) = puVar19;
        }
      }
      else {
        if (bVar1 != 0x5f) goto LAB_0012031c;
        *param_1 = (long)(pbVar6 + 3);
        pbVar6 = (byte *)FUN_0011ec20(param_1);
        if (pbVar6 != (byte *)0x0) {
          pvVar18 = (void *)param_1[0x266];
          lVar8 = *(long *)((long)pvVar18 + 8);
          puVar4 = (undefined8 *)pvVar18;
          if (0xfef < lVar8 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
            lVar8 = 0;
            *puVar4 = pvVar18;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
          pbVar5 = (byte *)((long)puVar4 + lVar8 + 0x10);
          *(undefined ***)pbVar5 = &PTR_FUN_0013f968;
          *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x1010119;
          *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar6;
          *(undefined8 *)((long)puVar4 + lVar8 + 0x28) = 0;
          pbVar6 = pbVar5;
        }
      }
      goto LAB_0011f6bc;
    }
LAB_0011f9a4:
    puVar4[1] = lVar7;
    pbVar17 = (byte *)(lVar8 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar16 + 9;
    break;
  case 0x46:
    goto code_r0x0011f454;
  case 0x47:
    *param_1 = (long)(pbVar6 + 1);
    pbVar17 = (byte *)FUN_0011ec20(param_1);
    if (pbVar17 == (byte *)0x0) goto code_r0x0011fcec;
    pvVar18 = (void *)param_1[0x266];
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x30U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar16 = " imaginary";
    *(long *)((long)puVar4 + 8) = lVar8 + 0x30;
    local_50 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0013fc08;
    pcVar9 = "";
LAB_0011f0c0:
    local_50[8] = 5;
    local_50[9] = 1;
    local_50[10] = 1;
    local_50[0xb] = 1;
    *(byte **)(local_50 + 0x10) = pbVar17;
    *(char **)(local_50 + 0x18) = pcVar16;
    *(char **)(local_50 + 0x20) = pcVar9;
    goto LAB_0011f6c4;
  case 0x4b:
  case 0x56:
  case 0x72:
    uVar15 = (ulong)(bVar1 == 0x72);
    if (uVar15 < uVar12) {
      uVar13 = 1;
      if (bVar1 == 0x72) {
        uVar13 = 2;
      }
      if (pbVar6[uVar15] != 0x56) {
        uVar13 = (uint)(bVar1 == 0x72);
      }
      uVar15 = (ulong)uVar13;
    }
    if (uVar15 < uVar12) {
      uVar13 = (uint)uVar15;
      if (pbVar6[uVar15] == 0x4b) {
        uVar13 = uVar13 + 1;
      }
      uVar15 = (ulong)uVar13;
    }
    if ((uVar12 <= uVar15) ||
       ((pbVar6[uVar15] != 0x46 &&
        (((pbVar6[uVar15] != 0x44 || (uVar12 <= uVar15 + 1)) ||
         ((0x29 < pbVar6[uVar15 + 1] - 0x4f ||
          ((1L << ((ulong)(pbVar6[uVar15 + 1] - 0x4f) & 0x3f) & 0x30100000001U) == 0))))))))
    goto code_r0x0011ed24;
    goto code_r0x0011f454;
  case 0x4d:
    if (pbVar6 != pbVar5) {
      *param_1 = (long)(pbVar6 + 1);
      pbVar5 = (byte *)FUN_0011ec20(param_1);
      pbVar6 = pbVar5;
      if ((pbVar5 != (byte *)0x0) && (pbVar6 = (byte *)FUN_0011ec20(param_1), pbVar6 != (byte *)0x0)
         ) {
        pvVar18 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar18 + 8);
        puVar4 = (undefined8 *)pvVar18;
        if (0xfef < lVar8 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
          lVar8 = 0;
          *puVar4 = pvVar18;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
        bVar1 = pbVar6[9];
        pbVar17 = (byte *)((long)puVar4 + lVar8 + 0x10);
        *(undefined ***)pbVar17 = &PTR_FUN_0013fa48;
        *(undefined1 *)((long)puVar4 + lVar8 + 0x18) = 0xd;
        *(undefined2 *)((long)puVar4 + lVar8 + 0x1a) = 0x101;
        *(byte *)((long)puVar4 + lVar8 + 0x19) = bVar1;
        *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar5;
        *(byte **)((long)puVar4 + lVar8 + 0x28) = pbVar6;
        pbVar6 = pbVar17;
      }
      goto LAB_0011f6bc;
    }
LAB_001203a8:
    pbVar6 = (byte *)0x0;
LAB_0011f6bc:
    local_50 = pbVar6;
    if (pbVar6 == (byte *)0x0) {
LAB_0011fce4:
      pbVar17 = (byte *)0x0;
      goto code_r0x0011fcec;
    }
    goto LAB_0011f6c4;
  case 0x4f:
    *param_1 = (long)(pbVar6 + 1);
    pbVar17 = (byte *)FUN_0011ec20(param_1);
    if (pbVar17 == (byte *)0x0) goto code_r0x0011fcec;
    pvVar18 = (void *)param_1[0x266];
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    bVar1 = pbVar17[9];
    local_50 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0013fb98;
    *(undefined1 *)((long)puVar4 + lVar8 + 0x18) = 0xc;
    *(undefined2 *)((long)puVar4 + lVar8 + 0x1a) = 0x101;
    *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar17;
    *(undefined4 *)((long)puVar4 + lVar8 + 0x28) = 1;
    goto LAB_0011f688;
  case 0x50:
    *param_1 = (long)(pbVar6 + 1);
    pbVar17 = (byte *)FUN_0011ec20(param_1);
    if (pbVar17 == (byte *)0x0) goto code_r0x0011fcec;
    pvVar18 = (void *)param_1[0x266];
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    bVar1 = pbVar17[9];
    local_50 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0013fb28;
    *(undefined1 *)((long)puVar4 + lVar8 + 0x18) = 0xb;
    *(undefined2 *)((long)puVar4 + lVar8 + 0x1a) = 0x101;
    *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar17;
    *(byte *)((long)puVar4 + lVar8 + 0x19) = bVar1;
    goto LAB_0011f6c4;
  case 0x52:
    *param_1 = (long)(pbVar6 + 1);
    pbVar17 = (byte *)FUN_0011ec20(param_1);
    if (pbVar17 == (byte *)0x0) goto code_r0x0011fcec;
    pvVar18 = (void *)param_1[0x266];
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    bVar1 = pbVar17[9];
    local_50 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0013fb98;
    *(undefined1 *)((long)puVar4 + lVar8 + 0x18) = 0xc;
    *(undefined2 *)((long)puVar4 + lVar8 + 0x1a) = 0x101;
    *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar17;
    *(undefined4 *)((long)puVar4 + lVar8 + 0x28) = 0;
LAB_0011f688:
    local_50[0x1c] = 0;
    local_50[9] = bVar1;
    goto LAB_0011f6c4;
  case 0x53:
    if (((uVar12 < 2) || (pbVar6[1] == 0)) || (pbVar6[1] == 0x74)) goto code_r0x0011f6b4;
    pbVar17 = (byte *)FUN_001216d0(param_1);
    if ((((pbVar17 == (byte *)0x0) || ((char)param_1[0x61] == '\0')) ||
        ((char *)param_1[1] == (char *)*param_1)) || (*(char *)*param_1 != 'I'))
    goto code_r0x0011fcec;
LAB_0011fbf8:
    pbVar6 = (byte *)FUN_00121a6c(param_1,0);
    if (pbVar6 == (byte *)0x0) goto LAB_0011fce4;
    puVar19 = (undefined8 *)param_1[0x266];
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    uVar13 = 0x125;
    lVar7 = (long)puVar4 + lVar8;
    ppuVar10 = &PTR_FUN_0013f3b8;
LAB_0011fcb8:
    puVar4[1] = lVar8 + 0x20;
    local_50 = (byte *)(lVar7 + 0x10);
    *(undefined ***)local_50 = ppuVar10;
    *(uint *)(lVar7 + 0x18) = uVar13 | 0x1010000;
    *(byte **)(lVar7 + 0x20) = pbVar17;
    *(byte **)(lVar7 + 0x28) = pbVar6;
    goto LAB_0011f6c4;
  case 0x54:
    if (((1 < uVar12) && (pbVar6[1] - 0x65 < 0x11)) &&
       ((1 << (ulong)(pbVar6[1] - 0x65 & 0x1f) & 0x14001U) != 0)) goto code_r0x0011f6b4;
    pbVar17 = (byte *)FUN_00121edc(param_1);
    local_50 = pbVar17;
    if (pbVar17 == (byte *)0x0) goto code_r0x0011fcec;
    if ((((char)param_1[0x61] != '\0') && ((char *)param_1[1] != (char *)*param_1)) &&
       (*(char *)*param_1 == 'I')) goto LAB_0011fbf8;
LAB_0011f6c4:
    FUN_0012115c(param_1 + 0x25,&local_50);
    pbVar17 = local_50;
    goto code_r0x0011fcec;
  case 0x55:
code_r0x0011ed24:
    pbVar6 = (byte *)FUN_0012f7cc(param_1);
    goto LAB_0011f6bc;
  case 0x61:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "signed char";
    goto LAB_0011fa10;
  case 0x62:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar16 = "bool";
    goto LAB_0011fa7c;
  case 99:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar16 = "char";
    goto LAB_0011fa7c;
  case 100:
    pvVar18 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar16 = "double";
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    pbVar17 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = "";
    break;
  case 0x65:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "long double";
LAB_0011fa10:
    puVar4[1] = lVar8 + 0x20;
    pbVar17 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar16 + 0xb;
    break;
  case 0x66:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "float";
    goto LAB_0011f86c;
  case 0x67:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "__float128";
LAB_0011f264:
    puVar4[1] = lVar8 + 0x20;
    pbVar17 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar16 + 10;
    break;
  case 0x68:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "unsigned char";
    goto LAB_0011f794;
  case 0x69:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "int";
    goto LAB_0011f2d0;
  case 0x6a:
    pvVar18 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar16 = "unsigned int";
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    pbVar17 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = "";
    break;
  case 0x6c:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar16 = "long";
    goto LAB_0011fa7c;
  case 0x6d:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "unsigned long";
LAB_0011f794:
    puVar4[1] = lVar8 + 0x20;
    pbVar17 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar16 + 0xd;
    break;
  case 0x6e:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar16 = "__int128";
    goto LAB_0011eeb8;
  case 0x6f:
    pvVar18 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar16 = "unsigned __int128";
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    pbVar17 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = "";
    break;
  case 0x73:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "short";
LAB_0011f86c:
    puVar4[1] = lVar8 + 0x20;
    pbVar17 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar16 + 5;
    break;
  case 0x74:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar16 = "unsigned short";
    goto LAB_0011f8d8;
  case 0x75:
    pbVar17 = pbVar6 + 1;
    *param_1 = (long)pbVar17;
    if ((pbVar5 != pbVar17) && (*pbVar17 - 0x30 < 10)) {
      uVar12 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        pbVar20 = pbVar6;
        *param_1 = (long)pbVar20;
        uVar12 = ((ulong)pbVar20[-1] + uVar12 * 10) - 0x30;
        pbVar17 = pbVar5;
        if (pbVar5 == pbVar20) break;
        pbVar6 = pbVar20 + 1;
        pbVar17 = pbVar20;
      } while (*pbVar20 - 0x30 < 10);
      if (uVar12 <= (ulong)((long)pbVar5 - (long)pbVar17)) {
        pbVar6 = pbVar17 + uVar12;
        *param_1 = (long)pbVar6;
        if (pbVar17 != pbVar6) {
          puVar19 = (undefined8 *)param_1[0x266];
          lVar8 = puVar19[1];
          puVar4 = puVar19;
          if (0xfef < lVar8 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
            lVar8 = 0;
            *puVar4 = puVar19;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          uVar13 = 0x107;
          lVar7 = (long)puVar4 + lVar8;
          ppuVar10 = &PTR_FUN_0013dc88;
          goto LAB_0011fcb8;
        }
      }
    }
    goto LAB_0011fce4;
  case 0x76:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar16 = "void";
LAB_0011fa7c:
    puVar4[1] = lVar7;
    pbVar17 = (byte *)(lVar8 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar16 + 4;
    break;
  case 0x77:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "wchar_t";
LAB_0011f408:
    puVar4[1] = lVar8 + 0x20;
    pbVar17 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar16 + 7;
    break;
  case 0x78:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar16 = "long long";
    goto LAB_0011f9a4;
  case 0x79:
    pvVar18 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar16 = "unsigned long long";
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    pbVar17 = (byte *)((long)puVar4 + lVar8 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = "";
    break;
  case 0x7a:
    puVar19 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar8 = puVar19[1];
    puVar4 = puVar19;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0012041c;
      lVar8 = 0;
      *puVar4 = puVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar8;
    pcVar16 = "...";
LAB_0011f2d0:
    puVar4[1] = lVar8 + 0x20;
    pbVar17 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar17 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar16 + 3;
  }
LAB_0011fa88:
  pbVar17[8] = 7;
  pbVar17[9] = 1;
  pbVar17[10] = 1;
  pbVar17[0xb] = 1;
  *(char **)(pbVar17 + 0x10) = pcVar16;
  *(char **)(pbVar17 + 0x18) = pcVar9;
code_r0x0011fcec:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar17;
code_r0x0011f454:
  pbVar6 = (byte *)FUN_0012f2c4(param_1);
  goto LAB_0011f6bc;
}


// ===== 00120424  FUN_00120424 =====

undefined8 * FUN_00120424(long *param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  void *pvVar21;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar14 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if ((pcVar14 != pcVar1) && (*pcVar14 == 'L')) {
    pcVar14 = pcVar14 + 1;
    *param_1 = (long)pcVar14;
  }
  uVar5 = (long)pcVar1 - (long)pcVar14;
  if (pcVar1 == pcVar14) goto LAB_00120728;
  cVar4 = *pcVar14;
  if (cVar4 == 'Z') {
    if (pcVar14 != pcVar1) {
      *param_1 = (long)(pcVar14 + 1);
      lVar13 = FUN_0011df6c(param_1);
      if (lVar13 != 0) {
        pbVar19 = (byte *)*param_1;
        pbVar2 = (byte *)param_1[1];
        if ((pbVar19 != pbVar2) && (*pbVar19 == 0x45)) {
          pbVar18 = pbVar19 + 1;
          *param_1 = (long)pbVar18;
          if (pbVar18 == pbVar2) {
LAB_00120d58:
            puVar7 = (undefined8 *)FUN_00120424(param_1,param_2);
            if (puVar7 == (undefined8 *)0x0) goto LAB_00120dd4;
            pbVar19 = (byte *)*param_1;
            pbVar2 = (byte *)param_1[1];
            pbVar18 = pbVar19;
            if (pbVar19 != pbVar2) {
              uVar17 = (uint)*pbVar19;
              pbVar20 = pbVar19;
              if (uVar17 == 0x5f) {
                if (pbVar19 + 1 != pbVar2) {
                  uVar17 = (uint)pbVar19[1];
                  if (uVar17 - 0x30 < 10) {
                    pbVar18 = pbVar19 + 2;
                  }
                  else {
                    pbVar19 = pbVar19 + 2;
                    if ((pbVar19 != pbVar2) && (uVar17 == 0x5f)) {
                      do {
                        if (9 < *pbVar19 - 0x30) {
                          if (*pbVar19 == 0x5f) {
                            pbVar18 = pbVar19 + 1;
                          }
                          break;
                        }
                        pbVar19 = pbVar19 + 1;
                      } while (pbVar2 != pbVar19);
                    }
                  }
                }
              }
              else {
                while ((pbVar18 = pbVar19, uVar17 - 0x30 < 10 &&
                       (pbVar20 = pbVar20 + 1, pbVar18 = pbVar2, pbVar2 != pbVar20))) {
                  uVar17 = (uint)*pbVar20;
                }
              }
            }
            pvVar21 = (void *)param_1[0x266];
            *param_1 = (long)pbVar18;
          }
          else {
            if (*pbVar18 != 0x73) {
              if (*pbVar18 == 100) {
                pbVar18 = pbVar19 + 2;
                *param_1 = (long)pbVar18;
                if (pbVar18 != pbVar2) {
                  if (*pbVar18 == 0x6e) {
                    pbVar18 = pbVar19 + 3;
                    *param_1 = (long)pbVar18;
                  }
                  if (pbVar2 != pbVar18) {
                    bVar3 = *pbVar18;
                    while (bVar3 - 0x30 < 10) {
                      pbVar18 = pbVar18 + 1;
                      *param_1 = (long)pbVar18;
                      if (pbVar2 == pbVar18) break;
                      bVar3 = *pbVar18;
                    }
                    if ((pbVar18 != pbVar2) && (*pbVar18 == 0x5f)) {
                      *param_1 = (long)(pbVar18 + 1);
                      puVar7 = (undefined8 *)FUN_00120424(param_1,param_2);
                      if (puVar7 != (undefined8 *)0x0) goto LAB_00120ed0;
                    }
                  }
                }
                goto LAB_00120dd4;
              }
              goto LAB_00120d58;
            }
            pbVar18 = pbVar19 + 2;
            *param_1 = (long)pbVar18;
            pbVar20 = pbVar2;
            if (pbVar18 != pbVar2) {
              pbVar20 = pbVar18;
              if (*pbVar18 == 0x5f) {
                if (pbVar19 + 3 != pbVar2) {
                  uVar17 = (uint)pbVar19[3];
                  if (uVar17 - 0x30 < 10) {
                    pbVar20 = pbVar19 + 4;
                  }
                  else {
                    pbVar19 = pbVar19 + 4;
                    if ((pbVar19 != pbVar2) && (uVar17 == 0x5f)) {
                      do {
                        if (9 < *pbVar19 - 0x30) {
                          if (*pbVar19 == 0x5f) {
                            pbVar20 = pbVar19 + 1;
                          }
                          break;
                        }
                        pbVar19 = pbVar19 + 1;
                      } while (pbVar2 != pbVar19);
                    }
                  }
                }
              }
              else if (*pbVar18 - 0x30 < 10) {
                pbVar19 = pbVar19 + 3;
                do {
                  pbVar20 = pbVar2;
                  if (pbVar2 == pbVar19) break;
                  bVar3 = *pbVar19;
                  pbVar20 = pbVar18;
                  pbVar19 = pbVar19 + 1;
                } while (bVar3 - 0x30 < 10);
              }
            }
            pvVar21 = (void *)param_1[0x266];
            *param_1 = (long)pbVar20;
            lVar12 = *(long *)((long)pvVar21 + 8);
            puVar9 = (undefined8 *)pvVar21;
            if (0xfef < lVar12 + 0x20U) {
              puVar9 = (undefined8 *)malloc(0x1000);
              if (puVar9 == (undefined8 *)0x0) goto LAB_00120f64;
              lVar12 = 0;
              *puVar9 = pvVar21;
              puVar9[1] = 0;
              param_1[0x266] = (long)puVar9;
            }
            *(long *)((long)puVar9 + 8) = lVar12 + 0x20;
            puVar7 = (undefined8 *)((long)puVar9 + lVar12 + 0x10);
            *puVar7 = &PTR_FUN_0013dc88;
            *(undefined4 *)((long)puVar9 + lVar12 + 0x18) = 0x1010107;
            *(char **)((long)puVar9 + lVar12 + 0x20) = "string literal";
            *(char **)((long)puVar9 + lVar12 + 0x28) = "";
LAB_00120ed0:
            pvVar21 = (void *)param_1[0x266];
          }
          lVar12 = *(long *)((long)pvVar21 + 8);
          puVar9 = (undefined8 *)pvVar21;
          if (0xfef < lVar12 + 0x20U) {
            puVar9 = (undefined8 *)malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_00120f64;
            lVar12 = 0;
            *puVar9 = pvVar21;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          *(long *)((long)puVar9 + 8) = lVar12 + 0x20;
          puVar8 = (undefined8 *)((long)puVar9 + lVar12 + 0x10);
          *puVar8 = &PTR_FUN_0013f1f8;
          *(undefined4 *)((long)puVar9 + lVar12 + 0x18) = 0x1010118;
          *(long *)((long)puVar9 + lVar12 + 0x20) = lVar13;
          *(undefined8 **)((long)puVar9 + lVar12 + 0x28) = puVar7;
          goto LAB_00120dd8;
        }
      }
    }
  }
  else {
    if (cVar4 == 'S') {
      if ((uVar5 < 2) || (pcVar14[1] != 't')) {
        lVar13 = FUN_001216d0(param_1);
        if ((lVar13 != 0) &&
           ((((char *)param_1[1] != (char *)*param_1 && (*(char *)*param_1 == 'I')) &&
            (lVar12 = FUN_00121a6c(param_1,param_2 != 0), lVar12 != 0)))) {
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + 1) = 1;
          }
          pvVar21 = (void *)param_1[0x266];
          lVar11 = *(long *)((long)pvVar21 + 8);
          puVar7 = (undefined8 *)pvVar21;
          if (0xfef < lVar11 + 0x20U) {
            puVar7 = (undefined8 *)malloc(0x1000);
            if (puVar7 == (undefined8 *)0x0) goto LAB_00120f64;
            lVar11 = 0;
            *puVar7 = pvVar21;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar11 + 0x20;
          puVar8 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
          *puVar8 = &PTR_FUN_0013f3b8;
          *(undefined4 *)((long)puVar7 + lVar11 + 0x18) = 0x1010125;
          *(long *)((long)puVar7 + lVar11 + 0x20) = lVar13;
          *(long *)((long)puVar7 + lVar11 + 0x28) = lVar12;
          goto LAB_00120dd8;
        }
        goto LAB_00120dd4;
      }
    }
    else if (cVar4 == 'N') {
      if (pcVar14 == pcVar1) goto LAB_00120dd4;
      pcVar16 = pcVar14 + 1;
      *param_1 = (long)pcVar16;
      if (pcVar16 == pcVar1) {
        uVar17 = 0;
        pcVar16 = pcVar1;
      }
      else {
        if (*pcVar16 == 'r') {
          pcVar16 = pcVar14 + 2;
          uVar17 = 4;
          *param_1 = (long)pcVar16;
        }
        else {
          uVar17 = 0;
        }
        if (pcVar16 != pcVar1) {
          if (*pcVar16 == 'V') {
            pcVar16 = pcVar16 + 1;
            uVar17 = uVar17 | 2;
            *param_1 = (long)pcVar16;
          }
          if ((pcVar16 != pcVar1) && (*pcVar16 == 'K')) {
            uVar17 = uVar17 | 1;
            *param_1 = (long)(pcVar16 + 1);
            pcVar16 = pcVar16 + 1;
          }
        }
      }
      if (param_2 != 0) {
        *(uint *)(param_2 + 4) = uVar17;
      }
      if (pcVar16 == pcVar1) {
LAB_00120890:
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 0;
        }
      }
      else if (*pcVar16 == 'O') {
        pcVar16 = pcVar16 + 1;
        *param_1 = (long)pcVar16;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 2;
        }
      }
      else {
        if (*pcVar16 != 'R') goto LAB_00120890;
        pcVar16 = pcVar16 + 1;
        *param_1 = (long)pcVar16;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 1;
        }
      }
      local_70 = (undefined8 *)0x0;
      if (((1 < (ulong)((long)pcVar1 - (long)pcVar16)) && (*pcVar16 == 'S')) && (pcVar16[1] == 't'))
      {
        pvVar21 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar16 + 2);
        lVar13 = *(long *)((long)pvVar21 + 8);
        puVar7 = (undefined8 *)pvVar21;
        if (0xfef < lVar13 + 0x20U) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_00120f64;
          lVar13 = 0;
          *puVar7 = pvVar21;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
        local_70 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
        *local_70 = &PTR_FUN_0013dc88;
        *(undefined4 *)((long)puVar7 + lVar13 + 0x18) = 0x1010107;
        *(undefined **)((long)puVar7 + lVar13 + 0x20) = &DAT_00112093;
        *(undefined **)((long)puVar7 + lVar13 + 0x28) = &DAT_00112096;
      }
LAB_00120960:
      do {
        pcVar14 = (char *)*param_1;
        pcVar1 = (char *)param_1[1];
        if (pcVar14 != pcVar1) {
          if (*pcVar14 == 'E') {
            *param_1 = (long)(pcVar14 + 1);
            puVar8 = local_70;
            if (local_70 == (undefined8 *)0x0) goto LAB_00120dd8;
            if (param_1[0x25] != param_1[0x26]) {
              param_1[0x26] = param_1[0x26] + -8;
              goto LAB_00120dd8;
            }
            break;
          }
          if (*pcVar14 == 'L') {
            pcVar14 = pcVar14 + 1;
            *param_1 = (long)pcVar14;
          }
        }
        if ((pcVar14 == pcVar1) || (*pcVar14 != 'M')) {
          if (pcVar1 == pcVar14) {
code_r0x00120b5c:
            puVar8 = (undefined8 *)FUN_0012278c(param_1,param_2);
            if (puVar8 == (undefined8 *)0x0) goto LAB_00120dd8;
LAB_00120b70:
            puVar7 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              pvVar21 = (void *)param_1[0x266];
              lVar13 = *(long *)((long)pvVar21 + 8);
              puVar9 = (undefined8 *)pvVar21;
              if (0xfef < lVar13 + 0x20U) {
                puVar9 = (undefined8 *)malloc(0x1000);
                if (puVar9 == (undefined8 *)0x0) goto LAB_00120f64;
                lVar13 = 0;
                *puVar9 = pvVar21;
                puVar9[1] = 0;
                param_1[0x266] = (long)puVar9;
              }
              *(long *)((long)puVar9 + 8) = lVar13 + 0x20;
              puVar15 = (undefined8 *)((long)puVar9 + lVar13 + 0x10);
              *puVar15 = &PTR_FUN_0013dcf8;
              *(undefined4 *)((long)puVar9 + lVar13 + 0x18) = 0x1010117;
              *(undefined8 **)((long)puVar9 + lVar13 + 0x20) = puVar7;
              *(undefined8 **)((long)puVar9 + lVar13 + 0x28) = puVar8;
              puVar8 = puVar15;
            }
            local_70 = puVar8;
            if (param_2 != 0) {
              *(undefined1 *)(param_2 + 1) = 0;
            }
          }
          else {
            switch(*pcVar14) {
            case 'D':
              if (1 < (ulong)((long)pcVar1 - (long)pcVar14)) {
                if ((byte)(pcVar14[1] | 0x20U) == 0x74) {
                  puVar8 = (undefined8 *)FUN_00122284(param_1);
                  goto joined_r0x00120b34;
                }
                if (pcVar14[1] == 'C') goto code_r0x00120b5c;
              }
            case 'C':
              if (local_70 == (undefined8 *)0x0) goto LAB_00120dd4;
              puVar8 = (undefined8 *)FUN_001223ac(param_1,&local_70,param_2);
              puVar7 = local_70;
              if (puVar8 == (undefined8 *)0x0) goto LAB_00120dd8;
              puVar9 = puVar8;
              if (local_70 != (undefined8 *)0x0) {
                pvVar21 = (void *)param_1[0x266];
                lVar13 = *(long *)((long)pvVar21 + 8);
                puVar15 = (undefined8 *)pvVar21;
                if (0xfef < lVar13 + 0x20U) {
                  puVar15 = (undefined8 *)malloc(0x1000);
                  if (puVar15 == (undefined8 *)0x0) goto LAB_00120f64;
                  lVar13 = 0;
                  *puVar15 = pvVar21;
                  puVar15[1] = 0;
                  param_1[0x266] = (long)puVar15;
                }
                *(long *)((long)puVar15 + 8) = lVar13 + 0x20;
                puVar9 = (undefined8 *)((long)puVar15 + lVar13 + 0x10);
                *puVar9 = &PTR_FUN_0013dcf8;
                *(undefined8 **)((long)puVar15 + lVar13 + 0x20) = puVar7;
                *(undefined8 **)((long)puVar15 + lVar13 + 0x28) = puVar8;
                *(undefined4 *)((long)puVar15 + lVar13 + 0x18) = 0x1010117;
              }
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 0;
              }
              local_70 = (undefined8 *)FUN_00122614(param_1,puVar9);
              if (local_70 == (undefined8 *)0x0) goto LAB_00120dd4;
              break;
            default:
              goto code_r0x00120b5c;
            case 'I':
              lVar13 = FUN_00121a6c(param_1,param_2 != 0);
              puVar7 = local_70;
              puVar8 = (undefined8 *)0x0;
              if ((lVar13 == 0) || (local_70 == (undefined8 *)0x0)) goto LAB_00120dd8;
              pvVar21 = (void *)param_1[0x266];
              lVar12 = *(long *)((long)pvVar21 + 8);
              puVar9 = (undefined8 *)pvVar21;
              if (0xfef < lVar12 + 0x20U) {
                puVar9 = (undefined8 *)malloc(0x1000);
                if (puVar9 == (undefined8 *)0x0) goto LAB_00120f64;
                lVar12 = 0;
                *puVar9 = pvVar21;
                puVar9[1] = 0;
                param_1[0x266] = (long)puVar9;
              }
              *(long *)((long)puVar9 + 8) = lVar12 + 0x20;
              local_70 = (undefined8 *)((long)puVar9 + lVar12 + 0x10);
              *local_70 = &PTR_FUN_0013f3b8;
              *(undefined4 *)((long)puVar9 + lVar12 + 0x18) = 0x1010125;
              *(undefined8 **)((long)puVar9 + lVar12 + 0x20) = puVar7;
              *(long *)((long)puVar9 + lVar12 + 0x28) = lVar13;
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 1;
              }
              break;
            case 'S':
              if ((1 < (ulong)((long)pcVar1 - (long)pcVar14)) && (pcVar14[1] == 't'))
              goto code_r0x00120b5c;
              puVar8 = (undefined8 *)FUN_001216d0(param_1);
              puVar7 = local_70;
              local_78 = puVar8;
              if (puVar8 == (undefined8 *)0x0) goto LAB_00120dd8;
              puVar9 = puVar8;
              if (local_70 != (undefined8 *)0x0) {
                pvVar21 = (void *)param_1[0x266];
                lVar13 = *(long *)((long)pvVar21 + 8);
                puVar15 = (undefined8 *)pvVar21;
                if (0xfef < lVar13 + 0x20U) {
                  puVar15 = (undefined8 *)malloc(0x1000);
                  if (puVar15 == (undefined8 *)0x0) goto LAB_00120f64;
                  lVar13 = 0;
                  *puVar15 = pvVar21;
                  puVar15[1] = 0;
                  param_1[0x266] = (long)puVar15;
                }
                *(long *)((long)puVar15 + 8) = lVar13 + 0x20;
                puVar9 = (undefined8 *)((long)puVar15 + lVar13 + 0x10);
                *puVar9 = &PTR_FUN_0013dcf8;
                *(undefined4 *)((long)puVar15 + lVar13 + 0x18) = 0x1010117;
                *(undefined8 **)((long)puVar15 + lVar13 + 0x20) = puVar7;
                *(undefined8 **)((long)puVar15 + lVar13 + 0x28) = puVar8;
              }
              local_70 = puVar9;
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 0;
              }
              if (local_70 != puVar8) {
                ppuVar10 = &local_78;
                goto LAB_00120c74;
              }
              goto LAB_00120960;
            case 'T':
              puVar8 = (undefined8 *)FUN_00121edc(param_1);
joined_r0x00120b34:
              if (puVar8 != (undefined8 *)0x0) goto LAB_00120b70;
              goto LAB_00120dd8;
            }
          }
          ppuVar10 = &local_70;
LAB_00120c74:
          FUN_0012115c(param_1 + 0x25,ppuVar10);
          goto LAB_00120960;
        }
        *param_1 = (long)(pcVar14 + 1);
      } while (local_70 != (undefined8 *)0x0);
      goto LAB_00120dd4;
    }
    if (uVar5 < 3) {
      if (uVar5 == 2) {
LAB_00120690:
        if ((*pcVar14 == 'S') && (pcVar14[1] == 't')) {
          lVar13 = 2;
          goto LAB_001206ac;
        }
      }
LAB_00120728:
      puVar8 = (undefined8 *)FUN_0012278c(param_1,param_2);
      puVar9 = puVar8;
      local_70 = puVar8;
      if (puVar8 == (undefined8 *)0x0) goto LAB_00120dd8;
    }
    else {
      if (*pcVar14 != 'S') goto LAB_00120728;
      if ((pcVar14[1] != 't') || (pcVar14[2] != 'L')) goto LAB_00120690;
      lVar13 = 3;
LAB_001206ac:
      *param_1 = (long)(pcVar14 + lVar13);
      lVar13 = FUN_0012278c(param_1,param_2);
      if (lVar13 == 0) {
        puVar8 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        goto LAB_00120dd8;
      }
      pvVar21 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar21 + 8);
      puVar7 = (undefined8 *)pvVar21;
      if (0xfef < lVar12 + 0x20U) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_00120f64;
        lVar12 = 0;
        *puVar7 = pvVar21;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar12 + 0x20;
      puVar9 = (undefined8 *)((long)puVar7 + lVar12 + 0x10);
      *puVar9 = &PTR_FUN_0013f428;
      *(undefined4 *)((long)puVar7 + lVar12 + 0x18) = 0x1010127;
      *(long *)((long)puVar7 + lVar12 + 0x20) = lVar13;
    }
    puVar8 = puVar9;
    local_70 = puVar9;
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) goto LAB_00120dd8;
    FUN_0012115c(param_1 + 0x25,&local_70);
    lVar13 = FUN_00121a6c(param_1,param_2 != 0);
    if (lVar13 != 0) {
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      pvVar21 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar21 + 8);
      puVar7 = (undefined8 *)pvVar21;
      if (0xfef < lVar12 + 0x20U) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) {
LAB_00120f64:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar12 = 0;
        *puVar7 = pvVar21;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar12 + 0x20;
      puVar8 = (undefined8 *)((long)puVar7 + lVar12 + 0x10);
      *puVar8 = &PTR_FUN_0013f3b8;
      *(undefined8 **)((long)puVar7 + lVar12 + 0x20) = puVar9;
      *(long *)((long)puVar7 + lVar12 + 0x28) = lVar13;
      *(undefined4 *)((long)puVar7 + lVar12 + 0x18) = 0x1010125;
      goto LAB_00120dd8;
    }
  }
LAB_00120dd4:
  puVar8 = (undefined8 *)0x0;
LAB_00120dd8:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}


// ===== 00120f6c  FUN_00120f6c =====

void FUN_00120f6c(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  undefined8 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pcVar6 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if (pcVar1 == pcVar6) {
LAB_00120ff8:
    puVar4 = (undefined8 *)FUN_0011ec20(param_1);
  }
  else {
    cVar2 = *pcVar6;
    if (cVar2 == 'J') {
      pcVar6 = pcVar6 + 1;
      *param_1 = (long)pcVar6;
      lVar7 = param_1[2];
      lVar8 = param_1[3];
      if (pcVar6 == pcVar1) goto LAB_00121088;
      while (*pcVar6 != 'E') {
LAB_00121088:
        do {
          puVar4 = (undefined8 *)FUN_00120f6c(param_1);
          local_50 = puVar4;
          if (puVar4 == (undefined8 *)0x0) goto LAB_00121000;
          FUN_0012115c(param_1 + 2,&local_50);
          pcVar6 = (char *)*param_1;
        } while (pcVar6 == (char *)param_1[1]);
      }
      lVar7 = (lVar8 - lVar7 >> 3) * 8;
      *param_1 = (long)(pcVar6 + 1);
      auVar10 = FUN_0012a5c8(param_1,param_1[2] + lVar7,param_1[3]);
      pvVar9 = (void *)param_1[0x266];
      param_1[3] = param_1[2] + lVar7;
      lVar7 = *(long *)((long)pvVar9 + 8);
      puVar5 = (undefined8 *)pvVar9;
      if (0xfef < lVar7 + 0x20U) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar5 = pvVar9;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
      puVar4 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
      *puVar4 = &PTR_FUN_0013f498;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010121;
      *(undefined1 (*) [16])((long)puVar5 + lVar7 + 0x20) = auVar10;
      goto LAB_00121000;
    }
    if (cVar2 == 'L') {
      if (((ulong)((long)pcVar1 - (long)pcVar6) < 2) || (pcVar6[1] != 'Z')) {
        puVar4 = (undefined8 *)FUN_00124e2c(param_1);
        goto LAB_00121000;
      }
      *param_1 = (long)(pcVar6 + 2);
      puVar4 = (undefined8 *)FUN_0011df6c(param_1);
    }
    else {
      if (cVar2 != 'X') goto LAB_00120ff8;
      *param_1 = (long)(pcVar6 + 1);
      puVar4 = (undefined8 *)FUN_00122e5c(param_1);
    }
    if (puVar4 != (undefined8 *)0x0) {
      pcVar6 = (char *)*param_1;
      if ((pcVar6 == (char *)param_1[1]) || (*pcVar6 != 'E')) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        *param_1 = (long)(pcVar6 + 1);
      }
    }
  }
LAB_00121000:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 0012115c  FUN_0012115c =====

void FUN_0012115c(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 *__src;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar1 - (long)__src;
    if (__src == param_1 + 3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) goto LAB_0012121c;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
LAB_0012121c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    param_1[1] = puVar1;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar2 = *param_2;
  param_1[1] = puVar1 + 1;
  *puVar1 = uVar2;
  return;
}


// ===== 00121220  FUN_00121220 =====

undefined4 FUN_00121220(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar3 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar3 == pbVar1) {
    return 1;
  }
  if (*pbVar3 == 0x68) {
    pbVar5 = pbVar3 + 1;
    *param_1 = (long)pbVar5;
    if (pbVar5 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar5;
    if (*pbVar5 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (9 < *pbVar4 - 0x30) {
      return 1;
    }
    do {
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
      if (pbVar1 == pbVar4) break;
      pbVar3 = pbVar4;
    } while (*pbVar4 - 0x30 < 10);
    if (pbVar5 == pbVar3) {
      return 1;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    bVar2 = *pbVar4;
  }
  else {
    if (*pbVar3 != 0x76) {
      return 1;
    }
    pbVar4 = pbVar3 + 1;
    *param_1 = (long)pbVar4;
    if (pbVar4 == pbVar1) {
      return 1;
    }
    pbVar5 = pbVar4;
    if (*pbVar4 == 0x6e) {
      pbVar5 = pbVar3 + 2;
      *param_1 = (long)pbVar5;
    }
    if (pbVar1 == pbVar5) {
      return 1;
    }
    if (9 < *pbVar5 - 0x30) {
      return 1;
    }
    do {
      pbVar6 = pbVar5;
      pbVar5 = pbVar6 + 1;
      *param_1 = (long)pbVar5;
      pbVar3 = pbVar1;
      if (pbVar1 + -1 == pbVar6) break;
      pbVar3 = pbVar5;
    } while (*pbVar5 - 0x30 < 10);
    if (pbVar4 == pbVar3) {
      return 1;
    }
    if (pbVar1 + -1 == pbVar6) {
      return 1;
    }
    if (pbVar6[1] != 0x5f) {
      return 1;
    }
    pbVar4 = pbVar6 + 2;
    *param_1 = (long)pbVar4;
    if (pbVar1 + -2 == pbVar6) {
      return 1;
    }
    if (*pbVar4 == 0x6e) {
      pbVar4 = pbVar6 + 3;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (9 < *pbVar4 - 0x30) {
      return 1;
    }
    do {
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
      if (pbVar1 == pbVar4) break;
      pbVar3 = pbVar4;
    } while (*pbVar4 - 0x30 < 10);
    if (pbVar3 + -2 == pbVar6) {
      return 1;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    bVar2 = *pbVar4;
  }
  if (bVar2 != 0x5f) {
    return 1;
  }
  *param_1 = (long)(pbVar4 + 1);
  return 0;
}


// ===== 00121430  FUN_00121430 =====

undefined8 FUN_00121430(void)

{
  return 0;
}


// ===== 0012143c  FUN_0012143c =====

undefined8 FUN_0012143c(void)

{
  return 0;
}


// ===== 00121448  FUN_00121448 =====

undefined8 FUN_00121448(void)

{
  return 0;
}


// ===== 00121454  FUN_00121454 =====

void FUN_00121454(void)

{
  return;
}


// ===== 0012145c  FUN_0012145c =====

void FUN_0012145c(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  __src = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00121534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0012153c  FUN_0012153c =====

void FUN_0012153c(void)

{
  return;
}


// ===== 00121544  FUN_00121544 =====

undefined1  [16] FUN_00121544(void)

{
  return ZEXT816(0);
}


// ===== 00121554  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012155c  FUN_0012155c =====

void FUN_0012155c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = param_2[1];
  uVar1 = lVar7 + 0x18;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar5 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar5 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_001216c4;
    lVar7 = param_2[1];
  }
  uVar4 = s_construction_vtable_for_00112805._8_8_;
  uVar3 = s_construction_vtable_for_00112805._0_8_;
  pcVar2 = (char *)((long)pvVar5 + lVar7);
  *(undefined8 *)(pcVar2 + 0x10) = s_construction_vtable_for_00112805._16_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar4;
  *(undefined8 *)pcVar2 = uVar3;
  param_2[1] = param_2[1] + 0x18;
  plVar8 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
  if (*(char *)((long)plVar8 + 9) != '\x01') {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar7 = param_2[1];
  uVar1 = lVar7 + 4;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar5 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar5 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
LAB_001216c4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
  }
  *(undefined4 *)((long)pvVar5 + lVar7) = 0x2d6e692d;
  param_2[1] = param_2[1] + 4;
  plVar8 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
  if (*(char *)((long)plVar8 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001216c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  return;
}


// ===== 001216c8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001216d0  FUN_001216d0 =====

undefined8 * FUN_001216d0(long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar8 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar8 != pbVar2) && (*pbVar8 == 0x53)) {
    pbVar9 = pbVar8 + 1;
    *param_1 = (long)pbVar9;
    if (pbVar2 != pbVar9) {
      if (*pbVar9 - 0x61 < 0x1a) {
        puVar5 = (undefined8 *)0x0;
        switch((uint)*pbVar9) {
        case 0x61:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar8 + 2);
          lVar7 = puVar11[1];
          if (lVar7 + 0x10U < 0xff0) {
            uVar6 = 0;
          }
          else {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) {
LAB_00121a64:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            uVar6 = 0;
LAB_00121840:
            *puVar5 = puVar11;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
LAB_00121948:
            lVar7 = 0;
            puVar11 = puVar5;
          }
          break;
        case 0x62:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar8 + 2);
          lVar7 = puVar11[1];
          if (0xfef < lVar7 + 0x10U) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_00121a64;
            *puVar5 = puVar11;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
            uVar6 = 1;
            goto LAB_00121948;
          }
          uVar6 = 1;
          break;
        default:
          goto code_r0x001217e0;
        case 100:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar8 + 2);
          lVar7 = puVar11[1];
          if (0xfef < lVar7 + 0x10U) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_00121a64;
            uVar6 = 5;
            goto LAB_00121840;
          }
          uVar6 = 5;
          break;
        case 0x69:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar8 + 2);
          lVar7 = puVar11[1];
          if (0xfef < lVar7 + 0x10U) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_00121a64;
            *puVar5 = puVar11;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
            uVar6 = 3;
            goto LAB_00121948;
          }
          uVar6 = 3;
          break;
        case 0x6f:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar8 + 2);
          lVar7 = puVar11[1];
          if (0xfef < lVar7 + 0x10U) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_00121a64;
            *puVar5 = puVar11;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
            uVar6 = 4;
            goto LAB_00121948;
          }
          uVar6 = 4;
          break;
        case 0x73:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar8 + 2);
          lVar7 = puVar11[1];
          if (0xfef < lVar7 + 0x10U) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_00121a64;
            *puVar5 = puVar11;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
            uVar6 = 2;
            goto LAB_00121948;
          }
          uVar6 = 2;
        }
        puVar11[1] = lVar7 + 0x10;
        puVar5 = (undefined8 *)((long)puVar11 + lVar7 + 0x10);
        *puVar5 = &PTR_FUN_0013f268;
        *(undefined4 *)((long)puVar11 + lVar7 + 0x18) = 0x1010129;
        *(undefined4 *)((long)puVar11 + lVar7 + 0x1c) = uVar6;
        puVar11 = (undefined8 *)FUN_00122614(param_1,puVar5);
        local_40 = puVar11;
        if (puVar11 != puVar5) {
          FUN_0012115c(param_1 + 0x25,&local_40);
          puVar5 = puVar11;
        }
        goto code_r0x001217e0;
      }
      if (*pbVar9 == 0x5f) {
        *param_1 = (long)(pbVar8 + 2);
        if ((undefined8 *)param_1[0x25] != (undefined8 *)param_1[0x26]) {
          puVar5 = *(undefined8 **)param_1[0x25];
          goto code_r0x001217e0;
        }
      }
      else {
        bVar3 = *pbVar9;
        if ((0x2f < bVar3) && ((bVar3 < 0x3a || ((byte)(bVar3 + 0xbf) < 0x1a)))) {
          lVar7 = 0;
          pbVar8 = pbVar8 + 2;
          do {
            if (bVar3 < 0x3a) {
              lVar10 = -0x30;
            }
            else {
              if (0x19 < (byte)(bVar3 + 0xbf)) break;
              lVar10 = -0x37;
            }
            *param_1 = (long)pbVar8;
            if (pbVar2 == pbVar8) goto LAB_001217d8;
            uVar1 = (ulong)bVar3;
            pbVar9 = pbVar8 + 1;
            bVar3 = *pbVar8;
            lVar7 = lVar10 + uVar1 + lVar7 * 0x24;
            pbVar8 = pbVar9;
          } while (0x2f < bVar3);
          if ((pbVar8 + -1 != pbVar2) && (pbVar8[-1] == 0x5f)) {
            *param_1 = (long)pbVar8;
            if (lVar7 + 1U < (ulong)(param_1[0x26] - param_1[0x25] >> 3)) {
              puVar5 = *(undefined8 **)(param_1[0x25] + (lVar7 + 1U) * 8);
              goto code_r0x001217e0;
            }
          }
        }
      }
    }
  }
LAB_001217d8:
  puVar5 = (undefined8 *)0x0;
code_r0x001217e0:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00121a6c  FUN_00121a6c =====

void FUN_00121a6c(long *param_1,ulong param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  void *pvVar19;
  undefined1 auVar20 [16];
  undefined8 *local_b0;
  undefined8 *local_a8;
  long *local_a0;
  long *local_98;
  long *plStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'I')) {
    *param_1 = (long)(pcVar2 + 1);
    if ((param_2 & 1) != 0) {
      local_a0 = param_1 + 0x48;
      param_1[0x54] = param_1[0x53];
      FUN_00122b30(param_1 + 0x53,&local_a0);
      param_1[0x49] = param_1[0x48];
    }
    plVar18 = param_1 + 2;
    lVar14 = *plVar18;
    lVar16 = param_1[3];
    plVar1 = param_1 + 0x56;
LAB_00121b28:
    while ((pcVar2 = (char *)*param_1, pcVar2 == (char *)param_1[1] || (*pcVar2 != 'E'))) {
      if ((param_2 & 1) != 0) {
        uStack_80 = 0;
        local_88 = 0;
        uStack_70 = 0;
        uStack_78 = 0;
        local_a0 = (long *)param_1[0x53];
        plStack_90 = &local_68;
        if (local_a0 == plVar1) {
          if (param_1[0x54] - (long)plVar1 == 0) {
            lVar17 = 0;
            plVar10 = plVar1;
            local_a0 = &local_88;
          }
          else {
            local_a0 = &local_88;
            local_98 = &local_88;
            __memmove_chk(&local_88,plVar1,param_1[0x54] - (long)plVar1,0x20);
            lVar17 = param_1[0x54] - param_1[0x53] >> 3;
            plVar10 = (long *)param_1[0x53];
          }
          local_98 = local_a0 + lVar17;
          param_1[0x54] = (long)plVar10;
        }
        else {
          plStack_90 = (long *)param_1[0x55];
          local_98 = (long *)param_1[0x54];
          param_1[0x53] = (long)plVar1;
          param_1[0x54] = (long)plVar1;
          param_1[0x55] = (long)(param_1 + 0x5a);
        }
                    /* try { // try from 00121be8 to 00121bef has its CatchHandler @ 00121ebc */
        puVar9 = (undefined8 *)FUN_00120f6c(param_1);
        plVar10 = (long *)param_1[0x53];
        local_a8 = puVar9;
        if (local_a0 == &local_88) {
          plVar12 = &local_88;
          if (plVar10 != plVar1) {
            free(plVar10);
            param_1[0x53] = (long)plVar1;
            param_1[0x54] = (long)plVar1;
            param_1[0x55] = (long)(param_1 + 0x5a);
            plVar10 = plVar1;
            plVar12 = local_a0;
          }
          if ((long)local_98 - (long)plVar12 == 0) {
            lVar17 = 0;
            plVar10 = plVar1;
          }
          else {
            memmove(plVar10,plVar12,(long)local_98 - (long)plVar12);
            lVar17 = (long)local_98 - (long)local_a0 >> 3;
            plVar12 = local_a0;
            plVar10 = (long *)param_1[0x53];
          }
          param_1[0x54] = (long)(plVar10 + lVar17);
          plVar10 = plVar12;
joined_r0x00121cb4:
          local_98 = plVar10;
          if (puVar9 == (undefined8 *)0x0) goto LAB_00121dcc;
LAB_00121cb8:
          FUN_0012115c(plVar18,&local_a8);
          local_b0 = puVar9;
          if (*(char *)(puVar9 + 1) == '!') {
            pvVar19 = (void *)param_1[0x266];
            plVar10 = (long *)puVar9[2];
            lVar17 = puVar9[3];
            lVar13 = *(long *)((long)pvVar19 + 8);
            puVar11 = (undefined8 *)pvVar19;
            if (0xfef < lVar13 + 0x20U) {
              puVar11 = (undefined8 *)malloc(0x1000);
              if (puVar11 == (undefined8 *)0x0) {
LAB_00121eb4:
                    /* WARNING: Subroutine does not return */
                std::terminate();
              }
              lVar13 = 0;
              *puVar11 = pvVar19;
              puVar11[1] = 0;
              param_1[0x266] = (long)puVar11;
            }
            *(long *)((long)puVar11 + 8) = lVar13 + 0x20;
            local_b0 = (undefined8 *)((long)puVar11 + lVar13 + 0x10);
            *local_b0 = &PTR_FUN_0013f2d8;
            *(undefined4 *)((long)puVar11 + lVar13 + 0x18) = 0x2020220;
            lVar15 = lVar17 << 3;
            *(long **)((long)puVar11 + lVar13 + 0x20) = plVar10;
            *(long *)((long)puVar11 + lVar13 + 0x28) = lVar17;
            plVar12 = plVar10;
            lVar3 = lVar15;
            lVar7 = lVar17;
            while (plVar6 = plVar10, lVar4 = lVar15, lVar8 = lVar17, lVar7 != 0) {
              if (*(char *)(*plVar12 + 10) != '\x01') goto joined_r0x00121d64;
              lVar3 = lVar3 + -8;
              plVar12 = plVar12 + 1;
              lVar7 = lVar3;
            }
            *(undefined1 *)((long)puVar11 + lVar13 + 0x1a) = 1;
joined_r0x00121d64:
            do {
              if (lVar8 == 0) goto LAB_00121d88;
              if (*(char *)(*plVar6 + 0xb) != '\x01') goto joined_r0x00121d8c;
              lVar4 = lVar4 + -8;
              plVar6 = plVar6 + 1;
              lVar8 = lVar4;
            } while( true );
          }
          goto LAB_00121db8;
        }
        param_1[0x53] = (long)local_a0;
        if (plVar10 == plVar1) {
          param_1[0x55] = (long)plStack_90;
          param_1[0x54] = (long)local_98;
          plVar10 = &local_88;
          local_a0 = &local_88;
          plStack_90 = &local_68;
          goto joined_r0x00121cb4;
        }
        plVar12 = (long *)param_1[0x55];
        param_1[0x55] = (long)plStack_90;
        param_1[0x54] = (long)local_98;
        local_a0 = plVar10;
        local_98 = plVar10;
        plStack_90 = plVar12;
        if (puVar9 != (undefined8 *)0x0) goto LAB_00121cb8;
        goto LAB_00121dcc;
      }
      plVar10 = (long *)FUN_00120f6c(param_1);
      local_a0 = plVar10;
      if (plVar10 == (long *)0x0) goto LAB_00121e80;
      FUN_0012115c(plVar18,&local_a0);
    }
    *param_1 = (long)(pcVar2 + 1);
    lVar14 = (lVar16 - lVar14 >> 3) * 8;
    auVar20 = FUN_0012a5c8(param_1,param_1[2] + lVar14,param_1[3]);
    pvVar19 = (void *)param_1[0x266];
    param_1[3] = param_1[2] + lVar14;
    lVar14 = *(long *)((long)pvVar19 + 8);
    puVar9 = (undefined8 *)pvVar19;
    if (0xfef < lVar14 + 0x20U) {
      puVar9 = (undefined8 *)malloc(0x1000);
      if (puVar9 == (undefined8 *)0x0) goto LAB_00121eb4;
      lVar14 = 0;
      *puVar9 = pvVar19;
      puVar9[1] = 0;
      param_1[0x266] = (long)puVar9;
    }
    *(long *)((long)puVar9 + 8) = lVar14 + 0x20;
    plVar10 = (long *)((long)puVar9 + lVar14 + 0x10);
    *plVar10 = (long)&PTR_FUN_0013f348;
    *(undefined4 *)((long)puVar9 + lVar14 + 0x18) = 0x1010123;
    *(undefined1 (*) [16])((long)puVar9 + lVar14 + 0x20) = auVar20;
    goto LAB_00121e80;
  }
  plVar10 = (long *)0x0;
LAB_00121e80:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar10);
LAB_00121d88:
  *(undefined1 *)((long)puVar11 + lVar13 + 0x1b) = 1;
joined_r0x00121d8c:
  do {
    if (lVar17 == 0) break;
    if (*(char *)(*plVar10 + 9) != '\x01') goto LAB_00121db8;
    lVar15 = lVar15 + -8;
    plVar10 = plVar10 + 1;
    lVar17 = lVar15;
  } while( true );
  *(undefined1 *)((long)puVar11 + lVar13 + 0x19) = 1;
LAB_00121db8:
  FUN_0012858c(*(undefined8 *)(param_1[0x54] + -8),&local_b0);
  plVar10 = local_a0;
LAB_00121dcc:
  if (plVar10 != &local_88) {
    free(plVar10);
  }
  if (puVar9 == (undefined8 *)0x0) goto LAB_00121e78;
  goto LAB_00121b28;
LAB_00121e78:
  plVar10 = (long *)0x0;
  goto LAB_00121e80;
}


// ===== 00121edc  FUN_00121edc =====

undefined8 * FUN_00121edc(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  size_t __n;
  void *pvVar12;
  long *plVar13;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar6 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar6 != pbVar2) && (*pbVar6 == 0x54)) {
    pbVar9 = pbVar6 + 1;
    *param_1 = (long)pbVar9;
    if (pbVar9 != pbVar2) {
      if (*pbVar9 == 0x4c) {
        pbVar9 = pbVar6 + 2;
        *param_1 = (long)pbVar9;
        if ((pbVar2 != pbVar9) && (*pbVar9 - 0x30 < 10)) {
          lVar8 = 0;
          while (pbVar2 + -2 != pbVar6) {
            pbVar9 = pbVar6 + 3;
            *param_1 = (long)pbVar9;
            lVar8 = lVar8 * 10 + (ulong)pbVar6[2] + -0x30;
            if ((pbVar2 + -3 == pbVar6) ||
               (pbVar1 = pbVar6 + 3, pbVar6 = pbVar6 + 1, 9 < *pbVar1 - 0x30)) goto LAB_001221b0;
          }
          lVar8 = lVar8 * 10 + -0x30;
          pbVar9 = pbVar6 + 2;
LAB_001221b0:
          if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5f)) {
            uVar7 = lVar8 + 1;
            pbVar9 = pbVar9 + 1;
            *param_1 = (long)pbVar9;
            goto joined_r0x00121fb4;
          }
        }
      }
      else {
        uVar7 = 0;
joined_r0x00121fb4:
        if (pbVar9 != pbVar2) {
          if (*pbVar9 == 0x5f) {
            uVar11 = 0;
LAB_00121fc8:
            *param_1 = (long)(pbVar9 + 1);
            if ((uVar7 == 0) && (*(char *)((long)param_1 + 0x309) != '\0')) {
              pvVar12 = (void *)param_1[0x266];
              lVar8 = *(long *)((long)pvVar12 + 8);
              puVar4 = (undefined8 *)pvVar12;
              if (0xfef < lVar8 + 0x30U) {
                puVar4 = (undefined8 *)malloc(0x1000);
                if (puVar4 == (undefined8 *)0x0) goto LAB_0012227c;
                lVar8 = 0;
                *puVar4 = pvVar12;
                puVar4[1] = 0;
                param_1[0x266] = (long)puVar4;
              }
              *(long *)((long)puVar4 + 8) = lVar8 + 0x30;
              puVar10 = (undefined8 *)((long)puVar4 + lVar8 + 0x10);
              *puVar10 = &PTR_FUN_0013dd68;
              *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x2020224;
              *(ulong *)((long)puVar4 + lVar8 + 0x20) = uVar11;
              *(undefined8 *)((long)puVar4 + lVar8 + 0x28) = 0;
              *(undefined1 *)((long)puVar4 + lVar8 + 0x30) = 0;
              puVar4 = (undefined8 *)param_1[0x5b];
              if (puVar4 == (undefined8 *)param_1[0x5c]) {
                plVar13 = (long *)param_1[0x5a];
                __n = (long)puVar4 - (long)plVar13;
                if (plVar13 == param_1 + 0x5d) {
                  pvVar12 = malloc(__n * 2);
                  if (pvVar12 == (void *)0x0) goto LAB_0012227c;
                  if (__n != 0) {
                    memmove(pvVar12,plVar13,__n);
                  }
                  param_1[0x5a] = (long)pvVar12;
                }
                else {
                  pvVar12 = realloc(plVar13,__n * 2);
                  param_1[0x5a] = (long)pvVar12;
                  if (pvVar12 == (void *)0x0) {
LAB_0012227c:
                    /* WARNING: Subroutine does not return */
                    std::terminate();
                  }
                }
                puVar4 = (undefined8 *)((long)pvVar12 + ((long)__n >> 3) * 8);
                param_1[0x5c] = (long)((long)pvVar12 + ((long)__n >> 2) * 8);
              }
              param_1[0x5b] = (long)(puVar4 + 1);
              *puVar4 = puVar10;
            }
            else {
              uVar5 = param_1[0x54] - param_1[0x53] >> 3;
              if ((uVar7 < uVar5) &&
                 ((plVar13 = *(long **)(param_1[0x53] + uVar7 * 8), plVar13 != (long *)0x0 &&
                  (uVar11 < (ulong)(plVar13[1] - *plVar13 >> 3))))) {
                puVar10 = *(undefined8 **)(*plVar13 + uVar11 * 8);
              }
              else {
                puVar10 = (undefined8 *)0x0;
                if ((uVar7 <= uVar5) && (param_1[0x62] == uVar7)) {
                  if (uVar7 == uVar5) {
                    local_50 = 0;
                    FUN_00122b30(param_1 + 0x53,&local_50);
                  }
                  pvVar12 = (void *)param_1[0x266];
                  lVar8 = *(long *)((long)pvVar12 + 8);
                  puVar4 = (undefined8 *)pvVar12;
                  if (0xfef < lVar8 + 0x20U) {
                    puVar4 = (undefined8 *)malloc(0x1000);
                    if (puVar4 == (undefined8 *)0x0) goto LAB_0012227c;
                    lVar8 = 0;
                    *puVar4 = pvVar12;
                    puVar4[1] = 0;
                    param_1[0x266] = (long)puVar4;
                  }
                  *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
                  puVar10 = (undefined8 *)((long)puVar4 + lVar8 + 0x10);
                  *puVar10 = &PTR_FUN_0013dc88;
                  *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x1010107;
                  *(undefined **)((long)puVar4 + lVar8 + 0x20) = &DAT_001120ca;
                  *(undefined **)((long)puVar4 + lVar8 + 0x28) = &DAT_001120ce;
                }
              }
            }
            goto LAB_00122200;
          }
          if (*pbVar9 - 0x30 < 10) {
            lVar8 = 0;
            pbVar6 = pbVar9;
            while (pbVar2 != pbVar6) {
              pbVar9 = pbVar6 + 1;
              *param_1 = (long)pbVar9;
              lVar8 = lVar8 * 10 + (ulong)*pbVar6 + -0x30;
              if ((pbVar2 + -1 == pbVar6) || (pbVar6 = pbVar9, 9 < *pbVar9 - 0x30))
              goto LAB_001221e0;
            }
            lVar8 = lVar8 * 10 + -0x30;
            pbVar9 = pbVar6;
LAB_001221e0:
            if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5f)) {
              uVar11 = lVar8 + 1;
              goto LAB_00121fc8;
            }
          }
        }
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_00122200:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122284  FUN_00122284 =====

undefined8 * FUN_00122284(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'D')) {
    pcVar1 = pcVar2 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && ((*pcVar1 == 't' || (*pcVar1 == 'T')))) {
      *param_1 = (long)(pcVar2 + 2);
      lVar3 = FUN_00122e5c(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar2 = (char *)*param_1;
      if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
        pvVar7 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar2 + 1);
        lVar6 = *(long *)((long)pvVar7 + 8);
        puVar4 = (undefined8 *)pvVar7;
        if (0xfef < lVar6 + 0x40U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar6 = 0;
          *puVar4 = pvVar7;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar6 + 0x40;
        puVar5 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
        *puVar5 = &PTR_FUN_0013ed98;
        *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x1010134;
        *(char **)((long)puVar4 + lVar6 + 0x20) = "decltype(";
        *(char **)((long)puVar4 + lVar6 + 0x28) = "";
        *(long *)((long)puVar4 + lVar6 + 0x30) = lVar3;
        *(undefined **)((long)puVar4 + lVar6 + 0x38) = &DAT_00112e57;
        *(undefined **)((long)puVar4 + lVar6 + 0x40) = &DAT_00112e58;
        return puVar5;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 001223ac  FUN_001223ac =====

undefined8 * FUN_001223ac(long *param_1,long *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  void *pvVar11;
  
  if ((*(char *)(*param_2 + 8) == ')') && (iVar3 = *(int *)(*param_2 + 0xc), iVar3 - 2U < 4)) {
    pvVar11 = (void *)param_1[0x266];
    lVar6 = *(long *)((long)pvVar11 + 8);
    puVar5 = (undefined8 *)pvVar11;
    if (0xfef < lVar6 + 0x10U) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00122610;
      lVar6 = 0;
      *puVar5 = pvVar11;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar6 + 0x10;
    puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
    *puVar7 = &PTR_FUN_0013f038;
    *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010128;
    *(int *)((long)puVar5 + lVar6 + 0x1c) = iVar3;
    *param_2 = (long)puVar7;
  }
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 == pbVar2) || (*pbVar1 != 0x43)) {
    if (pbVar2 != pbVar1) {
      if ((long)pbVar2 - (long)pbVar1 == 1) {
        return (undefined8 *)0x0;
      }
      if (*pbVar1 != 0x44) {
        return (undefined8 *)0x0;
      }
      bVar4 = pbVar1[1];
      if (0x35 < bVar4) {
        return (undefined8 *)0x0;
      }
      if ((1L << ((ulong)bVar4 & 0x3f) & 0x37000000000000U) == 0) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar1 + 2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar11 + 8);
      puVar5 = (undefined8 *)pvVar11;
      if (0xfef < lVar6 + 0x20U) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) {
LAB_00122610:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar5 = pvVar11;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
      lVar8 = *param_2;
      uVar10 = (uint)bVar4;
      puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
      *puVar7 = &PTR_FUN_0013f0a8;
      *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x101012a;
      *(undefined1 *)((long)puVar5 + lVar6 + 0x28) = 1;
LAB_001225e8:
      puVar7[2] = lVar8;
      *(uint *)((long)puVar7 + 0x1c) = uVar10 - 0x30;
      return puVar7;
    }
  }
  else {
    pbVar9 = pbVar1 + 1;
    *param_1 = (long)pbVar9;
    if (pbVar9 != pbVar2) {
      bVar4 = *pbVar9;
      if (bVar4 == 0x49) {
        pbVar9 = pbVar1 + 2;
        *param_1 = (long)pbVar9;
      }
      if ((pbVar2 != pbVar9) && (uVar10 = (uint)*pbVar9, uVar10 - 0x31 < 5)) {
        *param_1 = (long)(pbVar9 + 1);
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        if ((bVar4 == 0x49) && (lVar6 = FUN_00120424(param_1,param_3), lVar6 == 0)) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar11 + 8);
        puVar5 = (undefined8 *)pvVar11;
        if (0xfef < lVar6 + 0x20U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00122610;
          lVar6 = 0;
          *puVar5 = pvVar11;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
        lVar8 = *param_2;
        puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
        *puVar7 = &PTR_FUN_0013f0a8;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x101012a;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x28) = 0;
        goto LAB_001225e8;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00122614  FUN_00122614 =====

undefined8 * FUN_00122614(long *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  void *pvVar11;
  
  pbVar6 = (byte *)*param_1;
  pbVar4 = (byte *)param_1[1];
  puVar9 = param_2;
  if (pbVar6 != pbVar4) {
    do {
      if (*pbVar6 != 0x42) {
        return puVar9;
      }
      pbVar10 = pbVar6 + 1;
      *param_1 = (long)pbVar10;
      if ((pbVar4 == pbVar10) || (9 < *pbVar10 - 0x30)) {
        return (undefined8 *)0x0;
      }
      uVar8 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        pbVar7 = pbVar6;
        *param_1 = (long)pbVar7;
        uVar8 = ((ulong)pbVar7[-1] + uVar8 * 10) - 0x30;
        pbVar10 = pbVar4;
        if (pbVar4 == pbVar7) break;
        pbVar6 = pbVar7 + 1;
        pbVar10 = pbVar7;
      } while (*pbVar7 - 0x30 < 10);
      if ((ulong)((long)pbVar4 - (long)pbVar10) < uVar8) {
        return (undefined8 *)0x0;
      }
      pbVar6 = pbVar10 + uVar8;
      *param_1 = (long)pbVar6;
      if (pbVar10 == pbVar6) {
        return (undefined8 *)0x0;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar5 = *(long *)((long)pvVar11 + 8);
      puVar3 = (undefined8 *)pvVar11;
      if (0xfef < lVar5 + 0x30U) {
        puVar3 = (undefined8 *)malloc(0x1000);
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar3 = pvVar11;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
      }
      *(long *)((long)puVar3 + 8) = lVar5 + 0x30;
      uVar2 = *(undefined2 *)((long)puVar9 + 9);
      uVar1 = *(undefined1 *)((long)puVar9 + 0xb);
      param_2 = (undefined8 *)((long)puVar3 + lVar5 + 0x10);
      *param_2 = &PTR_FUN_0013f118;
      *(undefined1 *)((long)puVar3 + lVar5 + 0x18) = 8;
      *(undefined8 **)((long)puVar3 + lVar5 + 0x20) = puVar9;
      *(byte **)((long)puVar3 + lVar5 + 0x28) = pbVar10;
      *(byte **)((long)puVar3 + lVar5 + 0x30) = pbVar6;
      *(undefined2 *)((long)puVar3 + lVar5 + 0x19) = uVar2;
      *(undefined1 *)((long)puVar3 + lVar5 + 0x1b) = uVar1;
      pbVar6 = (byte *)*param_1;
      pbVar4 = (byte *)param_1[1];
      puVar9 = param_2;
    } while (pbVar6 != pbVar4);
  }
  return param_2;
}


// ===== 0012278c  FUN_0012278c =====

undefined8 FUN_0012278c(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar1 = (byte *)*param_1;
  if ((byte *)param_1[1] == pbVar1) {
LAB_001227f4:
    if ((((ulong)(param_1[1] - (long)pbVar1) < 2) || (*pbVar1 != 0x44)) || (pbVar1[1] != 0x43)) {
      puVar4 = (undefined8 *)FUN_0012afec(param_1);
      goto LAB_0012290c;
    }
    *param_1 = (long)(pbVar1 + 2);
    lVar7 = param_1[2];
    lVar8 = param_1[3];
    local_50 = FUN_0012acd0(param_1);
    if (local_50 != 0) {
      do {
        FUN_0012115c(param_1 + 2,&local_50);
        pcVar2 = (char *)*param_1;
        if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
          lVar7 = (lVar8 - lVar7 >> 3) * 8;
          *param_1 = (long)(pcVar2 + 1);
          auVar10 = FUN_0012a5c8(param_1,param_1[2] + lVar7,param_1[3]);
          pvVar9 = (void *)param_1[0x266];
          param_1[3] = param_1[2] + lVar7;
          lVar7 = *(long *)((long)pvVar9 + 8);
          puVar5 = (undefined8 *)pvVar9;
          if (0xfef < lVar7 + 0x20U) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar7 = 0;
            *puVar5 = pvVar9;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
          }
          *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
          puVar4 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
          *puVar4 = &PTR_FUN_0013f188;
          *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x101012e;
          *(undefined1 (*) [16])((long)puVar5 + lVar7 + 0x20) = auVar10;
          goto LAB_00122914;
        }
        local_50 = FUN_0012acd0(param_1);
      } while (local_50 != 0);
    }
  }
  else {
    if (*pbVar1 == 0x55) {
      puVar4 = (undefined8 *)FUN_00126c68(param_1);
    }
    else {
      if (8 < *pbVar1 - 0x31) goto LAB_001227f4;
      puVar4 = (undefined8 *)FUN_0012acd0(param_1);
    }
LAB_0012290c:
    if (puVar4 != (undefined8 *)0x0) {
LAB_00122914:
      uVar6 = FUN_00122614(param_1,puVar4);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar6;
      }
      goto LAB_00122964;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 0;
  }
LAB_00122964:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122968  FUN_00122968 =====

void FUN_00122968(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  __src = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001229fc  FUN_001229fc =====

undefined1  [16] FUN_001229fc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 00122a0c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00122a14  FUN_00122a14 =====

void FUN_00122a14(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar3 = param_2[1];
  __size = lVar3 + 2;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x3a3a;
  param_2[1] = param_2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00122b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00122b14  FUN_00122b14 =====

void FUN_00122b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00122b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 00122b28  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00122b30  FUN_00122b30 =====

void FUN_00122b30(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 *__src;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar1 - (long)__src;
    if (__src == param_1 + 3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) goto LAB_00122bf0;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
LAB_00122bf0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    param_1[1] = puVar1;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar2 = *param_2;
  param_1[1] = puVar1 + 1;
  *puVar1 = uVar2;
  return;
}


// ===== 00122bf4  FUN_00122bf4 =====

byte FUN_00122bf4(long param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
    if (cVar1 == '\x02') {
                    /* try { // try from 00122c38 to 00122c3b has its CatchHandler @ 00122c64 */
      bVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    }
    else {
      bVar2 = cVar1 == '\0';
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


// ===== 00122c6c  FUN_00122c6c =====

byte FUN_00122c6c(long param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)*(long **)(param_1 + 0x18) + 10);
    if (cVar1 == '\x02') {
                    /* try { // try from 00122cb0 to 00122cb3 has its CatchHandler @ 00122cdc */
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
    else {
      bVar2 = cVar1 == '\0';
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


// ===== 00122ce4  FUN_00122ce4 =====

byte FUN_00122ce4(long param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)*(long **)(param_1 + 0x18) + 0xb);
    if (cVar1 == '\x02') {
                    /* try { // try from 00122d28 to 00122d2b has its CatchHandler @ 00122d54 */
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    }
    else {
      bVar2 = cVar1 == '\0';
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


// ===== 00122d5c  FUN_00122d5c =====

long FUN_00122d5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 00122d8c to 00122d8f has its CatchHandler @ 00122dac */
    lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return lVar1;
}


// ===== 00122db4  FUN_00122db4 =====

void FUN_00122db4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 00122de4 to 00122de7 has its CatchHandler @ 00122dfc */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 00122e04  FUN_00122e04 =====

void FUN_00122e04(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 00122e34 to 00122e37 has its CatchHandler @ 00122e4c */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 00122e54  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00122e5c  FUN_00122e5c =====

undefined8 * FUN_00122e5c(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined **ppuVar13;
  uint uVar14;
  char *pcVar15;
  undefined1 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  void *pvVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pcVar15 = (char *)*param_1;
  pcVar12 = (char *)param_1[1];
  uVar8 = (long)pcVar12 - (long)pcVar15;
  if (uVar8 < 2) goto LAB_00122e98;
  cVar2 = *pcVar15;
  if (cVar2 == 'g') {
    if (pcVar15[1] == 's') {
      pcVar15 = pcVar15 + 2;
      uVar8 = (long)pcVar12 - (long)pcVar15;
      *param_1 = (long)pcVar15;
      if (uVar8 < 2) goto LAB_00122e98;
      uVar16 = 1;
    }
    else {
      uVar16 = 0;
    }
    cVar2 = *pcVar15;
  }
  else {
    uVar16 = 0;
  }
  switch(cVar2) {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
code_r0x00122f28:
    puVar9 = (undefined8 *)FUN_0012628c(param_1);
    goto LAB_001247d4;
  default:
    puVar9 = (undefined8 *)0x0;
    if ((10 < uVar8) && (cVar2 == 'u')) {
      if (((pcVar15[1] == '8') &&
          ((((pcVar15[2] == '_' && (pcVar15[3] == '_')) && (pcVar15[4] == 'u')) &&
           ((pcVar15[5] == 'u' && (pcVar15[6] == 'i')))))) &&
         ((pcVar15[7] == 'd' &&
          (((pcVar15[8] == 'o' && (pcVar15[9] == 'f')) && (pcVar15[10] == 't')))))) {
        *param_1 = (long)(pcVar15 + 0xb);
        lVar5 = FUN_0011ec20(param_1);
      }
      else {
        if (((((pcVar15[1] != '8') || (pcVar15[2] != '_')) || (pcVar15[3] != '_')) ||
            ((pcVar15[4] != 'u' || (pcVar15[5] != 'u')))) ||
           ((((pcVar15[6] != 'i' || ((pcVar15[7] != 'd' || (pcVar15[8] != 'o')))) ||
             (pcVar15[9] != 'f')) || (pcVar15[10] != 'z')))) goto LAB_00122e98;
        *param_1 = (long)(pcVar15 + 0xb);
        lVar5 = FUN_00122e5c(param_1);
      }
      if (lVar5 == 0) goto LAB_00122e98;
      puVar17 = (undefined8 *)param_1[0x266];
      lVar10 = puVar17[1];
      puVar9 = puVar17;
      if (0xfef < lVar10 + 0x20U) {
        puVar9 = (undefined8 *)malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar10 = 0;
        *puVar9 = puVar17;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      uVar14 = 0x140;
      lVar4 = lVar10 + 0x20;
      lVar10 = (long)puVar9 + lVar10;
      ppuVar13 = &PTR_FUN_0013efc8;
LAB_0012433c:
      puVar9[1] = lVar4;
      puVar9 = (undefined8 *)(lVar10 + 0x10);
      *puVar9 = ppuVar13;
      *(uint *)(lVar10 + 0x18) = uVar14 | 0x1010000;
      *(long *)(lVar10 + 0x20) = lVar5;
    }
    break;
  case 'L':
    puVar9 = (undefined8 *)FUN_00124e2c(param_1);
    goto LAB_001247d4;
  case 'T':
    puVar9 = (undefined8 *)FUN_00121edc(param_1);
    goto LAB_001247d4;
  case 'a':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'N':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_0011246f;
      break;
    default:
      goto code_r0x00122ea0;
    case 'S':
      puVar6 = &DAT_0011281e;
      goto LAB_001247c4;
    case 'a':
      puVar6 = &DAT_00112cbe;
      *param_1 = (long)(pcVar15 + 2);
      break;
    case 'd':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00112d4e;
        goto LAB_001245f4;
      }
      goto LAB_00122e98;
    case 'n':
      puVar6 = &DAT_00112d4e;
LAB_001247c4:
      *param_1 = (long)(pcVar15 + 2);
      puVar7 = puVar6 + 1;
      goto LAB_001247cc;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_0011ec20(param_1);
      goto joined_r0x0012415c;
    case 'z':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
joined_r0x0012415c:
      if (lVar5 == 0) goto LAB_00122e98;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) {
LAB_00124e1c:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
      pcVar15 = "alignof (";
      puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar9 = &PTR_FUN_0013ed98;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
      pcVar12 = "";
LAB_001243f4:
      puVar9[2] = pcVar15;
      puVar9[3] = pcVar12;
      puVar9[4] = lVar5;
LAB_00124400:
      puVar9[5] = &DAT_00112e57;
      puVar9[6] = &DAT_00112e58;
      goto code_r0x00122ea0;
    }
    goto LAB_001240a0;
  case 'c':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_0011ec20(param_1);
      if ((lVar5 == 0) || (lVar10 = FUN_00122e5c(param_1), lVar10 == 0)) goto LAB_00122e98;
      pvVar19 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar19 + 8);
      puVar9 = (undefined8 *)pvVar19;
      if (0xfef < lVar4 + 0x30U) {
        puVar9 = (undefined8 *)malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar4 = 0;
        *puVar9 = pvVar19;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      pcVar15 = "const_cast";
      *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
      puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
      *puVar9 = &PTR_FUN_0013e698;
      pcVar12 = "";
LAB_00124578:
      *(undefined4 *)(puVar9 + 1) = 0x1010135;
      puVar9[2] = pcVar15;
      puVar9[3] = pcVar12;
      puVar9[4] = lVar5;
      puVar9[5] = lVar10;
      break;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        lVar10 = param_1[2];
        lVar4 = param_1[3];
        while( true ) {
          pcVar15 = (char *)*param_1;
          if ((pcVar15 != (char *)param_1[1]) && (*pcVar15 == 'E')) {
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar21 = FUN_0012a5c8(param_1,param_1[2] + lVar10,param_1[3]);
            puVar17 = (undefined8 *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar17[1];
            puVar9 = puVar17;
            if (0xfef < lVar10 + 0x30U) {
              puVar9 = (undefined8 *)malloc(0x1000);
              if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
              lVar10 = 0;
              *puVar9 = puVar17;
              puVar9[1] = 0;
              param_1[0x266] = (long)puVar9;
            }
            uVar14 = 0x137;
            lVar4 = lVar10 + 0x30;
            lVar10 = (long)puVar9 + lVar10;
            ppuVar13 = &PTR_FUN_0013e708;
            goto LAB_00124d60;
          }
          local_60 = FUN_00122e5c(param_1);
          if (local_60 == 0) break;
          FUN_0012115c(param_1 + 2,&local_60);
        }
      }
      goto LAB_00122e98;
    case 'm':
      puVar6 = &DAT_00112345;
      goto LAB_001247c4;
    case 'o':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00112d50;
        goto LAB_001245f4;
      }
      goto LAB_00122e98;
    case 'v':
      lVar10 = param_1[0x61];
      *param_1 = (long)(pcVar15 + 2);
      *(undefined1 *)(param_1 + 0x61) = 0;
                    /* try { // try from 00123a90 to 00123a97 has its CatchHandler @ 00124e24 */
      lVar5 = FUN_0011ec20(param_1);
      *(char *)(param_1 + 0x61) = (char)lVar10;
      if (lVar5 == 0) goto LAB_00122e98;
      pcVar15 = (char *)*param_1;
      if ((pcVar15 == (char *)param_1[1]) || (*pcVar15 != '_')) {
        local_60 = FUN_00122e5c(param_1);
        if (local_60 == 0) goto LAB_00122e98;
        pvVar19 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar19 + 8);
        puVar9 = (undefined8 *)pvVar19;
        if (0xfef < lVar10 + 0x10U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        *(long *)((long)puVar9 + 8) = lVar10 + 0x10;
        plVar18 = (long *)((long)puVar9 + lVar10 + 0x10);
        *plVar18 = local_60;
        pvVar19 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar19 + 8);
        puVar17 = (undefined8 *)pvVar19;
        if (0xfef < lVar10 + 0x30U) {
          puVar17 = (undefined8 *)malloc(0x1000);
          if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar17 = pvVar19;
          puVar17[1] = 0;
          param_1[0x266] = (long)puVar17;
        }
        *(long *)((long)puVar17 + 8) = lVar10 + 0x30;
        puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
        *puVar9 = &PTR_FUN_0013e778;
        *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x101013c;
        *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
        *(long **)((long)puVar17 + lVar10 + 0x28) = plVar18;
        *(undefined8 *)((long)puVar17 + lVar10 + 0x30) = 1;
      }
      else {
        pcVar15 = pcVar15 + 1;
        *param_1 = (long)pcVar15;
        lVar10 = param_1[2];
        lVar4 = param_1[3];
        if (pcVar15 == (char *)param_1[1]) goto LAB_00123aec;
        while (*pcVar15 != 'E') {
LAB_00123aec:
          do {
            local_60 = FUN_00122e5c(param_1);
            if (local_60 == 0) goto LAB_00122e98;
            FUN_0012115c(param_1 + 2,&local_60);
            pcVar15 = (char *)*param_1;
          } while (pcVar15 == (char *)param_1[1]);
        }
        lVar10 = (lVar4 - lVar10 >> 3) * 8;
        *param_1 = (long)(pcVar15 + 1);
        auVar21 = FUN_0012a5c8(param_1,param_1[2] + lVar10,param_1[3]);
        puVar17 = (undefined8 *)param_1[0x266];
        param_1[3] = param_1[2] + lVar10;
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        uVar14 = 0x13c;
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        ppuVar13 = &PTR_FUN_0013e778;
LAB_00124d60:
        puVar9[1] = lVar4;
        puVar9 = (undefined8 *)(lVar10 + 0x10);
        *puVar9 = ppuVar13;
        *(uint *)(lVar10 + 0x18) = uVar14 | 0x1010000;
        *(long *)(lVar10 + 0x20) = lVar5;
        *(undefined1 (*) [16])(lVar10 + 0x28) = auVar21;
      }
    }
    break;
  case 'd':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'V':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112097;
      goto LAB_001240a0;
    case 'a':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 == 0) goto LAB_00122e98;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x20U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x20;
      puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar9 = &PTR_FUN_0013e7e8;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010139;
      *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x28) = uVar16;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x29) = 1;
      break;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_0011ec20(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_00122e5c(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar9 = (undefined8 *)pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar4 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        pcVar15 = "dynamic_cast";
        *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
        puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
        *puVar9 = &PTR_FUN_0013e698;
        pcVar12 = "";
        goto LAB_00124578;
      }
      goto LAB_00122e98;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_001122b5;
        goto LAB_001245f4;
      }
      goto LAB_00122e98;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 == 0) goto LAB_00122e98;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x20U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x20;
      puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar9 = &PTR_FUN_0013e7e8;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010139;
      *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x28) = uVar16;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x29) = 0;
      break;
    case 'n':
      goto code_r0x00122f28;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if ((lVar5 == 0) || (lVar10 = FUN_00122e5c(param_1), lVar10 == 0)) goto LAB_00122e98;
      puVar17 = (undefined8 *)param_1[0x266];
      lVar4 = puVar17[1];
      puVar9 = puVar17;
      if (0xfef < lVar4 + 0x30U) {
        puVar9 = (undefined8 *)malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar4 = 0;
        *puVar9 = puVar17;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      lVar11 = (long)puVar9 + lVar4;
      puVar6 = &UNK_00112701;
LAB_0012470c:
      puVar9[1] = lVar4 + 0x30;
      puVar9 = (undefined8 *)(lVar11 + 0x10);
      *puVar9 = &PTR_FUN_0013ea88;
      puVar7 = puVar6 + 2;
LAB_001247a4:
      *(undefined4 *)(puVar9 + 1) = 0x1010133;
      puVar9[2] = lVar5;
      puVar9[3] = puVar6;
      puVar9[4] = puVar7;
      puVar9[5] = lVar10;
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_00122e5c(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar9 = (undefined8 *)pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar4 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        puVar6 = &DAT_00111df1;
        *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
        puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
        *puVar9 = &PTR_FUN_0013ea88;
        puVar7 = &DAT_00111df2;
        goto LAB_001247a4;
      }
      goto LAB_00122e98;
    case 'v':
      puVar6 = &DAT_00111df3;
      goto LAB_001247c4;
    }
    break;
  case 'e':
    cVar2 = pcVar15[1];
    if (cVar2 == 'O') {
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112642;
    }
    else {
      if (cVar2 != 'q') {
        if (cVar2 == 'o') {
          puVar6 = &DAT_001128dc;
          goto LAB_001247c4;
        }
        goto LAB_00122e98;
      }
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112645;
    }
    goto LAB_001240a0;
  case 'f':
    if ((pcVar15[1] == 'p') ||
       (((2 < uVar8 && (pcVar15[1] == 'L')) && ((byte)pcVar15[2] - 0x30 < 10)))) {
      puVar9 = (undefined8 *)FUN_0012590c(param_1);
    }
    else {
      puVar9 = (undefined8 *)FUN_00125bcc(param_1);
    }
    goto LAB_001247d4;
  case 'g':
    if (pcVar15[1] == 't') {
      puVar6 = &DAT_00112648;
      goto LAB_001247c4;
    }
    if (pcVar15[1] == 'e') {
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00111d33;
      goto LAB_001240a0;
    }
    goto LAB_00122e98;
  case 'i':
    if (pcVar15[1] != 'l') {
      if (pcVar15[1] == 'x') {
        *param_1 = (long)(pcVar15 + 2);
        lVar5 = FUN_00122e5c(param_1);
        if ((lVar5 != 0) && (lVar10 = FUN_00122e5c(param_1), lVar10 != 0)) {
          pvVar19 = (void *)param_1[0x266];
          lVar4 = *(long *)((long)pvVar19 + 8);
          puVar17 = (undefined8 *)pvVar19;
          if (0xfef < lVar4 + 0x20U) {
            puVar17 = (undefined8 *)malloc(0x1000);
            if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
            lVar4 = 0;
            *puVar17 = pvVar19;
            puVar17[1] = 0;
            param_1[0x266] = (long)puVar17;
          }
          *(long *)((long)puVar17 + 8) = lVar4 + 0x20;
          puVar9 = (undefined8 *)((long)puVar17 + lVar4 + 0x10);
          *puVar9 = &PTR_FUN_0013eaf8;
          *(undefined4 *)((long)puVar17 + lVar4 + 0x18) = 0x1010130;
          *(long *)((long)puVar17 + lVar4 + 0x20) = lVar5;
          *(long *)((long)puVar17 + lVar4 + 0x28) = lVar10;
          break;
        }
      }
      goto LAB_00122e98;
    }
    pcVar15 = pcVar15 + 2;
    *param_1 = (long)pcVar15;
    lVar5 = param_1[2];
    lVar10 = param_1[3];
    if (pcVar15 == pcVar12) goto LAB_00123708;
    while (*pcVar15 != 'E') {
LAB_00123708:
      do {
        local_60 = FUN_001268c8(param_1);
        if (local_60 == 0) goto LAB_00122e98;
        FUN_0012115c(param_1 + 2,&local_60);
        pcVar15 = (char *)*param_1;
      } while (pcVar15 == (char *)param_1[1]);
    }
    lVar5 = (lVar10 - lVar5 >> 3) * 8;
    *param_1 = (long)(pcVar15 + 1);
    auVar21 = FUN_0012a5c8(param_1,param_1[2] + lVar5,param_1[3]);
    pvVar19 = (void *)param_1[0x266];
    param_1[3] = param_1[2] + lVar5;
    lVar5 = *(long *)((long)pvVar19 + 8);
    puVar17 = (undefined8 *)pvVar19;
    if (0xfef < lVar5 + 0x30U) {
      puVar17 = (undefined8 *)malloc(0x1000);
      if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
      lVar5 = 0;
      *puVar17 = pvVar19;
      puVar17[1] = 0;
      param_1[0x266] = (long)puVar17;
    }
    *(long *)((long)puVar17 + 8) = lVar5 + 0x30;
    puVar9 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
    *puVar9 = &PTR_FUN_0013ec48;
    *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x101013d;
    *(undefined8 *)((long)puVar17 + lVar5 + 0x20) = 0;
    *(undefined1 (*) [16])((long)puVar17 + lVar5 + 0x28) = auVar21;
    break;
  case 'l':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'S':
      puVar6 = &UNK_0011291a;
LAB_00123e54:
      *param_1 = (long)(pcVar15 + 2);
      puVar7 = puVar6 + 3;
      goto LAB_001247cc;
    default:
      goto code_r0x00122ea0;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112b97;
      break;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112a83;
      break;
    case 't':
      puVar6 = &DAT_00111cbb;
      goto LAB_001247c4;
    }
    goto LAB_001240a0;
  case 'm':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'I':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_0011209a;
      goto LAB_001240a0;
    case 'L':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112347;
      goto LAB_001240a0;
    case 'i':
      puVar6 = &DAT_001120cf;
      goto LAB_001247c4;
    case 'l':
      puVar6 = &DAT_001122b5;
      goto LAB_001247c4;
    case 'm':
      pcVar1 = pcVar15 + 2;
      *param_1 = (long)pcVar1;
      if ((pcVar1 == pcVar12) || (*pcVar1 != '_')) {
        lVar5 = FUN_00122e5c(param_1);
        if (lVar5 == 0) goto LAB_00122e98;
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00112e59;
LAB_00124864:
        puVar9[1] = lVar10 + 0x30;
        puVar9 = (undefined8 *)(lVar4 + 0x10);
        *puVar9 = &PTR_FUN_0013ecb8;
        *(undefined4 *)(lVar4 + 0x18) = 0x1010131;
        *(long *)(lVar4 + 0x20) = lVar5;
        *(undefined **)(lVar4 + 0x28) = puVar6;
        *(undefined **)(lVar4 + 0x30) = puVar6 + 2;
      }
      else {
        *param_1 = (long)(pcVar15 + 3);
        lVar5 = FUN_00122e5c(param_1);
        if (lVar5 == 0) goto LAB_00122e98;
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00112e59;
LAB_00123ee8:
        puVar9[1] = lVar10 + 0x30;
        puVar9 = (undefined8 *)(lVar4 + 0x10);
        *puVar9 = &PTR_FUN_0013e628;
        puVar7 = puVar6 + 2;
LAB_00124600:
        *(undefined4 *)(puVar9 + 1) = 0x101013a;
        puVar9[2] = puVar6;
        puVar9[3] = puVar7;
        puVar9[4] = lVar5;
      }
    }
    break;
  case 'n':
    cVar2 = pcVar15[1];
    puVar9 = (undefined8 *)0x0;
    switch(cVar2) {
    case 'a':
    case 'w':
      if ((cVar2 == 'w') || (cVar2 == 'a')) {
        pcVar15 = pcVar15 + 2;
        *param_1 = (long)pcVar15;
        plVar18 = param_1 + 2;
        lVar5 = *plVar18;
        lVar10 = param_1[3];
        if (pcVar15 == pcVar12) goto LAB_001230d0;
        while (*pcVar15 != '_') {
LAB_001230d0:
          do {
            local_60 = FUN_00122e5c(param_1);
            if (local_60 == 0) goto LAB_00122e98;
            FUN_0012115c(plVar18,&local_60);
            pcVar15 = (char *)*param_1;
          } while (pcVar15 == (char *)param_1[1]);
        }
        lVar5 = (lVar10 - lVar5 >> 3) * 8;
        *param_1 = (long)(pcVar15 + 1);
        auVar21 = FUN_0012a5c8(param_1,param_1[2] + lVar5,param_1[3]);
        param_1[3] = param_1[2] + lVar5;
        lVar5 = FUN_0011ec20(param_1);
        if (lVar5 != 0) {
          pcVar15 = (char *)*param_1;
          pcVar12 = (char *)param_1[1];
          if ((((ulong)((long)pcVar12 - (long)pcVar15) < 2) || (*pcVar15 != 'p')) ||
             (pcVar15[1] != 'i')) {
            if ((pcVar15 == pcVar12) || (*pcVar15 != 'E')) break;
            pvVar19 = (void *)param_1[0x266];
            *param_1 = (long)(pcVar15 + 1);
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = (undefined8 *)pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = (undefined8 *)malloc(0x1000);
              if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar9 = &PTR_FUN_0013ed28;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010138;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x20) = auVar21;
            *(undefined8 *)((long)puVar17 + lVar10 + 0x38) = 0;
            *(undefined8 *)((long)puVar17 + lVar10 + 0x40) = 0;
            *(long *)((long)puVar17 + lVar10 + 0x30) = lVar5;
            *(undefined1 *)((long)puVar17 + lVar10 + 0x48) = 0;
            *(bool *)((long)puVar17 + lVar10 + 0x49) = cVar2 == 'a';
          }
          else {
            lVar10 = param_1[2];
            lVar4 = param_1[3];
            pcVar15 = pcVar15 + 2;
            *param_1 = (long)pcVar15;
            if (pcVar15 == pcVar12) goto LAB_00124914;
            while (*pcVar15 != 'E') {
LAB_00124914:
              do {
                local_60 = FUN_00122e5c(param_1);
                if (local_60 == 0) goto LAB_00122e98;
                FUN_0012115c(plVar18,&local_60);
                pcVar15 = (char *)*param_1;
              } while (pcVar15 == (char *)param_1[1]);
            }
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar22 = FUN_0012a5c8(param_1,param_1[2] + lVar10,param_1[3]);
            pvVar19 = (void *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = (undefined8 *)pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = (undefined8 *)malloc(0x1000);
              if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar9 = &PTR_FUN_0013ed28;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010138;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x20) = auVar21;
            *(long *)((long)puVar17 + lVar10 + 0x30) = lVar5;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x38) = auVar22;
            *(undefined1 *)((long)puVar17 + lVar10 + 0x48) = 0;
            *(bool *)((long)puVar17 + lVar10 + 0x49) = cVar2 == 'a';
          }
          goto code_r0x00122ea0;
        }
      }
      break;
    default:
      goto code_r0x00122ea0;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112af0;
      goto LAB_001240a0;
    case 'g':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_001120cf;
LAB_001245f4:
        puVar9[1] = lVar4;
        puVar9 = (undefined8 *)(lVar10 + 0x10);
        *puVar9 = &PTR_FUN_0013e628;
        puVar7 = puVar6 + 1;
        goto LAB_00124600;
      }
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_0011259c;
        goto LAB_001245f4;
      }
      break;
    case 'x':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 == 0) break;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
      pcVar15 = "noexcept (";
      puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar9 = &PTR_FUN_0013ed98;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
      pcVar12 = "";
      goto LAB_001243f4;
    }
    goto LAB_00122e98;
  case 'o':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'R':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_001128de;
      break;
    default:
      goto code_r0x00122ea0;
    case 'n':
      goto code_r0x00122f28;
    case 'o':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112820;
      break;
    case 'r':
      puVar6 = &DAT_00112cc1;
      goto LAB_001247c4;
    }
    goto LAB_001240a0;
  case 'p':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'L':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &DAT_00112755;
      goto LAB_001240a0;
    default:
      goto code_r0x00122ea0;
    case 'l':
      puVar6 = &DAT_001128e1;
      goto LAB_001247c4;
    case 'm':
      puVar6 = &DAT_00112472;
      goto LAB_00123e54;
    case 'p':
      pcVar1 = pcVar15 + 2;
      *param_1 = (long)pcVar1;
      if ((pcVar1 == pcVar12) || (*pcVar1 != '_')) {
        lVar5 = FUN_00122e5c(param_1);
        if (lVar5 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar9 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar9 = (undefined8 *)malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
            lVar10 = 0;
            *puVar9 = puVar17;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          lVar4 = (long)puVar9 + lVar10;
          puVar6 = &DAT_00111cbd;
          goto LAB_00124864;
        }
      }
      else {
        *param_1 = (long)(pcVar15 + 3);
        lVar5 = FUN_00122e5c(param_1);
        if (lVar5 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar9 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar9 = (undefined8 *)malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
            lVar10 = 0;
            *puVar9 = puVar17;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          lVar4 = (long)puVar9 + lVar10;
          puVar6 = &DAT_00111cbd;
          goto LAB_00123ee8;
        }
      }
      break;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_001128e1;
        goto LAB_001245f4;
      }
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_00122e5c(param_1), lVar10 != 0)) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar4 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar4 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar11 = (long)puVar9 + lVar4;
        puVar6 = &DAT_001129cf;
        goto LAB_0012470c;
      }
    }
    goto LAB_00122e98;
  case 'q':
    if (pcVar15[1] == 'u') {
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_00122e5c(param_1), lVar10 != 0)) {
        lVar4 = FUN_00122e5c(param_1);
        auVar21._8_8_ = lVar4;
        auVar21._0_8_ = lVar10;
        if (lVar4 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar9 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar9 = (undefined8 *)malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
            lVar10 = 0;
            *puVar9 = puVar17;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          uVar14 = 0x132;
          lVar4 = lVar10 + 0x30;
          lVar10 = (long)puVar9 + lVar10;
          ppuVar13 = &PTR_FUN_0013ee08;
          goto LAB_00124d60;
        }
      }
    }
    goto LAB_00122e98;
  case 'r':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'M':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00112b9a;
      break;
    default:
      goto code_r0x00122ea0;
    case 'S':
      puVar6 = &UNK_00112758;
      goto LAB_00123e54;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_0011ec20(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_00122e5c(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar9 = (undefined8 *)pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar4 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        pcVar15 = "reinterpret_cast";
        *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
        puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
        *puVar9 = &PTR_FUN_0013e698;
        pcVar12 = "";
        goto LAB_00124578;
      }
      goto LAB_00122e98;
    case 'm':
      puVar6 = &DAT_00113049;
      goto LAB_001247c4;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00111ea6;
    }
LAB_001240a0:
    puVar7 = puVar6 + 2;
LAB_001247cc:
    puVar9 = (undefined8 *)FUN_001261d4(param_1,puVar6,puVar7);
LAB_001247d4:
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return puVar9;
    }
    goto LAB_00124e20;
  case 's':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'P':
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      lVar5 = param_1[2];
      lVar10 = param_1[3];
      if (pcVar15 == pcVar12) goto LAB_00123490;
      while (*pcVar15 != 'E') {
LAB_00123490:
        do {
          local_60 = FUN_00120f6c(param_1);
          if (local_60 == 0) goto LAB_00122e98;
          FUN_0012115c(param_1 + 2,&local_60);
          pcVar15 = (char *)*param_1;
        } while (pcVar15 == (char *)param_1[1]);
      }
      lVar5 = (lVar10 - lVar5 >> 3) * 8;
      *param_1 = (long)(pcVar15 + 1);
      auVar21 = FUN_0012a5c8(param_1,param_1[2] + lVar5,param_1[3]);
      pvVar19 = (void *)param_1[0x266];
      param_1[3] = param_1[2] + lVar5;
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar9 = (undefined8 *)pvVar19;
      if (0xfef < lVar5 + 0x20U) {
        puVar9 = (undefined8 *)malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar5 = 0;
        *puVar9 = pvVar19;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar5 + 0x20;
      puVar20 = (undefined8 *)((long)puVar9 + lVar5 + 0x10);
      *puVar20 = &PTR_FUN_0013eee8;
      *(undefined4 *)((long)puVar9 + lVar5 + 0x18) = 0x1010100;
      *(undefined1 (*) [16])((long)puVar9 + lVar5 + 0x20) = auVar21;
      pvVar19 = (void *)param_1[0x266];
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar5 + 0x40U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar5 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar5 + 0x40;
      puVar9 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
      *puVar9 = &PTR_FUN_0013ed98;
      *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x1010134;
      *(char **)((long)puVar17 + lVar5 + 0x20) = "sizeof... (";
      *(char **)((long)puVar17 + lVar5 + 0x28) = "";
      *(undefined8 **)((long)puVar17 + lVar5 + 0x30) = puVar20;
      goto LAB_00124400;
    default:
      goto code_r0x00122ea0;
    case 'Z':
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if (pcVar12 != pcVar15) {
        if (*pcVar15 == 'f') {
          lVar5 = FUN_0012590c(param_1);
          if (lVar5 != 0) {
            pvVar19 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = (undefined8 *)pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = (undefined8 *)malloc(0x1000);
              if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            pcVar15 = "sizeof... (";
            puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar9 = &PTR_FUN_0013ed98;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
            pcVar12 = "";
            goto LAB_001243f4;
          }
        }
        else if ((*pcVar15 == 'T') && (lVar5 = FUN_00121edc(param_1), lVar5 != 0)) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar9 = puVar17;
          if (0xfef < lVar10 + 0x20U) {
            puVar9 = (undefined8 *)malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
            lVar10 = 0;
            *puVar9 = puVar17;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          uVar14 = 0x136;
          lVar4 = lVar10 + 0x20;
          lVar10 = (long)puVar9 + lVar10;
          ppuVar13 = &PTR_FUN_0013ee78;
          goto LAB_0012433c;
        }
      }
      break;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_0011ec20(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_00122e5c(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar9 = (undefined8 *)pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar4 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        pcVar15 = "static_cast";
        *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
        puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
        *puVar9 = &PTR_FUN_0013e698;
        pcVar12 = "";
        goto LAB_00124578;
      }
      break;
    case 'p':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x20U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        uVar14 = 0x122;
        lVar4 = lVar10 + 0x20;
        lVar10 = (long)puVar9 + lVar10;
        ppuVar13 = &PTR_FUN_0013e548;
        goto LAB_0012433c;
      }
      break;
    case 'r':
      goto code_r0x00122f28;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_0011ec20(param_1);
      goto joined_r0x00124384;
    case 'z':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
joined_r0x00124384:
      if (lVar5 == 0) break;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar9 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar9 = (undefined8 *)malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar10 = 0;
        *puVar9 = pvVar19;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar10 + 0x40;
      lVar10 = (long)puVar9 + lVar10;
      pcVar15 = "sizeof (";
LAB_001243e0:
      puVar9 = (undefined8 *)(lVar10 + 0x10);
      *puVar9 = &PTR_FUN_0013ed98;
      *(undefined4 *)(lVar10 + 0x18) = 0x1010134;
      pcVar12 = pcVar15 + 8;
      goto LAB_001243f4;
    }
LAB_00122e98:
    puVar9 = (undefined8 *)0x0;
    break;
  case 't':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      goto joined_r0x001237f0;
    case 'i':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_0011ec20(param_1);
joined_r0x001237f0:
      if (lVar5 == 0) goto LAB_00122e98;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar9 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar9 = (undefined8 *)malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar10 = 0;
        *puVar9 = pvVar19;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar10 + 0x40;
      lVar10 = (long)puVar9 + lVar10;
      pcVar15 = "typeid (";
      goto LAB_001243e0;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_0011ec20(param_1);
      if (lVar5 != 0) {
        lVar10 = param_1[2];
        lVar4 = param_1[3];
        while( true ) {
          pcVar15 = (char *)*param_1;
          if ((pcVar15 != (char *)param_1[1]) && (*pcVar15 == 'E')) {
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar21 = FUN_0012a5c8(param_1,param_1[2] + lVar10,param_1[3]);
            puVar17 = (undefined8 *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar17[1];
            puVar9 = puVar17;
            if (0xfef < lVar10 + 0x30U) {
              puVar9 = (undefined8 *)malloc(0x1000);
              if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
              lVar10 = 0;
              *puVar9 = puVar17;
              puVar9[1] = 0;
              param_1[0x266] = (long)puVar9;
            }
            uVar14 = 0x13d;
            lVar4 = lVar10 + 0x30;
            lVar10 = (long)puVar9 + lVar10;
            ppuVar13 = &PTR_FUN_0013ec48;
            goto LAB_00124d60;
          }
          local_60 = FUN_001268c8(param_1);
          if (local_60 == 0) break;
          FUN_0012115c(param_1 + 2,&local_60);
        }
      }
      goto LAB_00122e98;
    case 'r':
      pvVar19 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar5 + 0x20U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_00124e1c;
        lVar5 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar5 + 0x20;
      puVar9 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
      *puVar9 = &PTR_FUN_0013dc88;
      *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x1010107;
      *(char **)((long)puVar17 + lVar5 + 0x20) = "throw";
      *(char **)((long)puVar17 + lVar5 + 0x28) = "";
      break;
    case 'w':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_00122e5c(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x20U) {
          puVar9 = (undefined8 *)malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00124e1c;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        uVar14 = 0x13f;
        lVar4 = lVar10 + 0x20;
        lVar10 = (long)puVar9 + lVar10;
        ppuVar13 = &PTR_FUN_0013ef58;
        goto LAB_0012433c;
      }
      goto LAB_00122e98;
    }
  }
code_r0x00122ea0:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return puVar9;
  }
LAB_00124e20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00124e2c  FUN_00124e2c =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00124e2c(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  void *pvVar17;
  
  pcVar2 = (char *)*param_1;
  pcVar9 = (char *)param_1[1];
  if (pcVar2 == pcVar9) {
    return (undefined8 *)0x0;
  }
  if (*pcVar2 != 'L') {
    return (undefined8 *)0x0;
  }
  pcVar10 = pcVar2 + 1;
  uVar4 = (long)pcVar9 - (long)pcVar10;
  *param_1 = (long)pcVar10;
  if (pcVar9 == pcVar10) {
code_r0x00124f30:
    lVar6 = FUN_0011ec20(param_1);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    pbVar15 = (byte *)*param_1;
    pbVar3 = (byte *)param_1[1];
    pbVar14 = pbVar15;
    if ((pbVar3 == pbVar15) || (9 < *pbVar15 - 0x30)) {
      pbVar15 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      do {
        pbVar14 = pbVar14 + 1;
        *param_1 = (long)pbVar14;
        pbVar16 = pbVar3;
        if (pbVar3 == pbVar14) break;
        pbVar16 = pbVar14;
      } while (*pbVar14 - 0x30 < 10);
    }
    if (pbVar16 == pbVar15) {
      return (undefined8 *)0x0;
    }
    if (pbVar14 == pbVar3) {
      return (undefined8 *)0x0;
    }
    if (*pbVar14 != 0x45) {
      return (undefined8 *)0x0;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar11 = *(long *)((long)pvVar17 + 8);
    puVar7 = (undefined8 *)pvVar17;
    if (0xfef < lVar11 + 0x30U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) {
LAB_00125908:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar7 = pvVar17;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    *(long *)((long)puVar7 + 8) = lVar11 + 0x30;
    puVar8 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
    *puVar8 = &PTR_FUN_0013e3f8;
    *(undefined4 *)((long)puVar7 + lVar11 + 0x18) = 0x1010144;
    *(long *)((long)puVar7 + lVar11 + 0x20) = lVar6;
    *(byte **)((long)puVar7 + lVar11 + 0x28) = pbVar15;
    *(byte **)((long)puVar7 + lVar11 + 0x30) = pbVar16;
    return puVar8;
  }
  switch(*pcVar10) {
  case 'A':
    lVar6 = FUN_0011ec20(param_1);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar2 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar8 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 1);
    lVar11 = puVar8[1];
    puVar7 = puVar8;
    if (0xfef < lVar11 + 0x20U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00125908;
      lVar11 = 0;
      *puVar7 = puVar8;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    lVar5 = (long)puVar7 + lVar11;
    uVar13 = 0x142;
    ppuVar12 = &PTR_FUN_0013e008;
    goto LAB_00124f14;
  default:
    goto code_r0x00124f30;
  case 'D':
    if (uVar4 < 3) {
      return (undefined8 *)0x0;
    }
    if (pcVar2[2] != 'n') {
      return (undefined8 *)0x0;
    }
    if (pcVar2[3] != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 4);
    lVar6 = *(long *)((long)pvVar17 + 8);
    puVar7 = (undefined8 *)pvVar17;
    if (0xfef < lVar6 + 0x20U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00125908;
      lVar6 = 0;
      *puVar7 = pvVar17;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    *(long *)((long)puVar7 + 8) = lVar6 + 0x20;
    puVar8 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
    *puVar8 = &PTR_FUN_0013dc88;
    *(undefined4 *)((long)puVar7 + lVar6 + 0x18) = 0x1010107;
    *(undefined **)((long)puVar7 + lVar6 + 0x20) = &DAT_00112cc3;
    *(undefined **)((long)puVar7 + lVar6 + 0x28) = &DAT_00112cca;
    return puVar8;
  case 'T':
    return (undefined8 *)0x0;
  case 'U':
    if (uVar4 < 2) {
      return (undefined8 *)0x0;
    }
    if (pcVar2[2] != 'l') {
      return (undefined8 *)0x0;
    }
    lVar6 = FUN_00126c68(param_1,0);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar2 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar8 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 1);
    lVar11 = puVar8[1];
    puVar7 = puVar8;
    if (0xfef < lVar11 + 0x20U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00125908;
      lVar11 = 0;
      *puVar7 = puVar8;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    lVar5 = (long)puVar7 + lVar11;
    uVar13 = 0x143;
    ppuVar12 = &PTR_FUN_0013e388;
LAB_00124f14:
    puVar7[1] = lVar11 + 0x20;
    *(undefined8 *)(lVar5 + 0x10) = ppuVar12;
    *(uint *)(lVar5 + 0x18) = uVar13 | 0x1010000;
    *(long *)(lVar5 + 0x20) = lVar6;
    return (undefined8 *)(lVar5 + 0x10);
  case '_':
    if (uVar4 < 2) {
      return (undefined8 *)0x0;
    }
    if (pcVar2[2] != 'Z') {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pcVar2 + 3);
    puVar7 = (undefined8 *)FUN_0011df6c(param_1);
    if (puVar7 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      if (*pcVar2 == 'E') {
        *param_1 = (long)(pcVar2 + 1);
        return puVar7;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  case 'a':
    pcVar9 = "signed char";
    pcVar10 = "";
    break;
  case 'b':
    if (uVar4 < 3) {
      return (undefined8 *)0x0;
    }
    if ((pcVar2[2] != '0') || (pcVar2[3] != 'E')) {
      if (pcVar2[2] != '1') {
        return (undefined8 *)0x0;
      }
      if (pcVar2[3] != 'E') {
        return (undefined8 *)0x0;
      }
      pvVar17 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar2 + 4);
      lVar6 = *(long *)((long)pvVar17 + 8);
      puVar7 = (undefined8 *)pvVar17;
      if (0xfef < lVar6 + 0x10U) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_00125908;
        lVar6 = 0;
        *puVar7 = pvVar17;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar6 + 0x10;
      puVar8 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
      *puVar8 = &PTR_FUN_0013de48;
      *(undefined4 *)((long)puVar7 + lVar6 + 0x18) = 0x1010141;
      *(undefined1 *)((long)puVar7 + lVar6 + 0x1c) = 1;
      return puVar8;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 4);
    lVar6 = *(long *)((long)pvVar17 + 8);
    puVar7 = (undefined8 *)pvVar17;
    if (0xfef < lVar6 + 0x10U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00125908;
      lVar6 = 0;
      *puVar7 = pvVar17;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    *(long *)((long)puVar7 + 8) = lVar6 + 0x10;
    puVar8 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
    *puVar8 = &PTR_FUN_0013de48;
    *(undefined4 *)((long)puVar7 + lVar6 + 0x18) = 0x1010141;
    *(undefined1 *)((long)puVar7 + lVar6 + 0x1c) = 0;
    return puVar8;
  case 'c':
    pcVar9 = "char";
    pcVar10 = "";
    break;
  case 'd':
    *param_1 = (long)(pcVar2 + 2);
    if ((ulong)((long)pcVar9 - (long)(pcVar2 + 2)) < 0x11) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[2] - 0x30) && (5 < ((byte)pcVar2[2] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[3] - 0x30) && (5 < ((byte)pcVar2[3] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[4] - 0x30) && (5 < ((byte)pcVar2[4] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[5] - 0x30) && (5 < ((byte)pcVar2[5] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[6] - 0x30) && (5 < ((byte)pcVar2[6] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[7] - 0x30) && (5 < ((byte)pcVar2[7] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[8] - 0x30) && (5 < ((byte)pcVar2[8] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[9] - 0x30) && (5 < ((byte)pcVar2[9] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[10] - 0x30) && (5 < ((byte)pcVar2[10] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xb] - 0x30) && (5 < ((byte)pcVar2[0xb] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xc] - 0x30) && (5 < ((byte)pcVar2[0xc] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xd] - 0x30) && (5 < ((byte)pcVar2[0xd] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xe] - 0x30) && (5 < ((byte)pcVar2[0xe] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xf] - 0x30) && (5 < ((byte)pcVar2[0xf] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0x10] - 0x30) && (5 < ((byte)pcVar2[0x10] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0x11] - 0x30) && (5 < ((byte)pcVar2[0x11] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    pcVar10 = pcVar2 + 0x12;
    *param_1 = (long)pcVar10;
    if (pcVar10 == pcVar9) {
      return (undefined8 *)0x0;
    }
    if (*pcVar10 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar8 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 0x13);
    lVar6 = puVar8[1];
    puVar7 = puVar8;
    if (0xfef < lVar6 + 0x20U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00125908;
      lVar6 = 0;
      *puVar7 = puVar8;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    lVar11 = lVar6 + 0x20;
    lVar6 = (long)puVar7 + lVar6;
    uVar13 = 0x147;
    ppuVar12 = &PTR_FUN_0013df28;
    goto LAB_001258d0;
  case 'e':
    pcVar1 = pcVar2 + 2;
    *param_1 = (long)pcVar1;
    if ((ulong)((long)pcVar9 - (long)pcVar1) < 0x21) {
      return (undefined8 *)0x0;
    }
    lVar6 = 0;
    pcVar10 = pcVar2 + 0x22;
    do {
      if ((9 < (byte)pcVar1[lVar6] - 0x30) && (5 < ((byte)pcVar1[lVar6] & 0xffffffdf) - 0x41)) {
        return (undefined8 *)0x0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x20);
    *param_1 = (long)pcVar10;
    if (pcVar10 == pcVar9) {
      return (undefined8 *)0x0;
    }
    if (*pcVar10 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar8 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 0x23);
    lVar6 = puVar8[1];
    puVar7 = puVar8;
    if (0xfef < lVar6 + 0x20U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00125908;
      lVar6 = 0;
      *puVar7 = puVar8;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    lVar11 = lVar6 + 0x20;
    lVar6 = (long)puVar7 + lVar6;
    uVar13 = 0x148;
    ppuVar12 = &PTR_FUN_0013df98;
    goto LAB_001258d0;
  case 'f':
    *param_1 = (long)(pcVar2 + 2);
    if ((ulong)((long)pcVar9 - (long)(pcVar2 + 2)) < 9) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[2] - 0x30) && (5 < ((byte)pcVar2[2] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[3] - 0x30) && (5 < ((byte)pcVar2[3] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[4] - 0x30) && (5 < ((byte)pcVar2[4] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[5] - 0x30) && (5 < ((byte)pcVar2[5] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[6] - 0x30) && (5 < ((byte)pcVar2[6] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[7] - 0x30) && (5 < ((byte)pcVar2[7] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[8] - 0x30) && (5 < ((byte)pcVar2[8] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[9] - 0x30) && (5 < ((byte)pcVar2[9] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    pcVar10 = pcVar2 + 10;
    *param_1 = (long)pcVar10;
    if (pcVar10 == pcVar9) {
      return (undefined8 *)0x0;
    }
    if (*pcVar10 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar8 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 0xb);
    lVar6 = puVar8[1];
    puVar7 = puVar8;
    if (0xfef < lVar6 + 0x20U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00125908;
      lVar6 = 0;
      *puVar7 = puVar8;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    lVar11 = lVar6 + 0x20;
    lVar6 = (long)puVar7 + lVar6;
    uVar13 = 0x146;
    ppuVar12 = &PTR_FUN_0013deb8;
LAB_001258d0:
    puVar7[1] = lVar11;
    *(undefined8 *)(lVar6 + 0x10) = ppuVar12;
    *(uint *)(lVar6 + 0x18) = uVar13 | 0x1010000;
    *(char **)(lVar6 + 0x20) = pcVar2 + 2;
    *(char **)(lVar6 + 0x28) = pcVar10;
    return (undefined8 *)(lVar6 + 0x10);
  case 'h':
    pcVar9 = "unsigned char";
    pcVar10 = "";
    break;
  case 'i':
    pcVar9 = "";
    *param_1 = (long)(pcVar2 + 2);
    pcVar10 = pcVar9;
    goto LAB_001257d4;
  case 'j':
    pcVar9 = "u";
    goto LAB_00125710;
  case 'l':
    pcVar9 = "l";
LAB_00125710:
    pcVar10 = pcVar9 + 1;
    break;
  case 'm':
    pcVar9 = "ul";
    goto LAB_001257ac;
  case 'n':
    pcVar9 = "__int128";
    pcVar10 = "";
    break;
  case 'o':
    pcVar9 = "unsigned __int128";
    pcVar10 = "";
    break;
  case 's':
    pcVar9 = "short";
    pcVar10 = "";
    break;
  case 't':
    pcVar9 = "unsigned short";
    pcVar10 = "";
    break;
  case 'w':
    pcVar9 = "wchar_t";
    pcVar10 = "";
    break;
  case 'x':
    pcVar9 = "ll";
LAB_001257ac:
    pcVar10 = pcVar9 + 2;
    break;
  case 'y':
    pcVar9 = "ull";
    pcVar10 = "";
  }
  *param_1 = (long)(pcVar2 + 2);
LAB_001257d4:
  puVar7 = (undefined8 *)FUN_00126b00(param_1,pcVar9,pcVar10);
  return puVar7;
}


// ===== 0012590c  FUN_0012590c =====

undefined8 * FUN_0012590c(long *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *pvVar9;
  
  pbVar5 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if ((ulong)((long)pbVar1 - (long)pbVar5) < 2) {
    return (undefined8 *)0x0;
  }
  if (*pbVar5 != 0x66) {
    return (undefined8 *)0x0;
  }
  pbVar8 = pbVar1;
  if (pbVar5[1] == 0x70) {
    pbVar7 = pbVar5 + 2;
    *param_1 = (long)pbVar7;
    if (pbVar7 == pbVar1) {
      return (undefined8 *)0x0;
    }
    if (*pbVar7 == 0x72) {
      pbVar7 = pbVar5 + 3;
      *param_1 = (long)pbVar7;
    }
    if (pbVar7 != pbVar1) {
      if (*pbVar7 == 0x56) {
        pbVar7 = pbVar7 + 1;
        *param_1 = (long)pbVar7;
      }
      if ((pbVar7 != pbVar1) && (*pbVar7 == 0x4b)) {
        pbVar7 = pbVar7 + 1;
        *param_1 = (long)pbVar7;
      }
    }
    if (pbVar1 == pbVar7) {
      return (undefined8 *)0x0;
    }
    pbVar5 = pbVar7;
    if (9 < *pbVar7 - 0x30) {
LAB_001259c0:
      pbVar7 = (byte *)0x0;
      pbVar8 = (byte *)0x0;
      goto LAB_00125b38;
    }
    pbVar6 = pbVar7 + 1;
    do {
      pbVar5 = pbVar6;
      *param_1 = (long)pbVar5;
      if (pbVar1 == pbVar5) goto LAB_00125b38;
      pbVar6 = pbVar5 + 1;
    } while (*pbVar5 - 0x30 < 10);
  }
  else {
    if (*pbVar5 != 0x66) {
      return (undefined8 *)0x0;
    }
    if (pbVar5[1] != 0x4c) {
      return (undefined8 *)0x0;
    }
    pbVar7 = pbVar5 + 2;
    *param_1 = (long)pbVar7;
    if (pbVar1 == pbVar7) {
      return (undefined8 *)0x0;
    }
    if (9 < *pbVar7 - 0x30) {
      return (undefined8 *)0x0;
    }
    do {
      pbVar6 = pbVar5;
      *param_1 = (long)(pbVar6 + 3);
      pbVar5 = pbVar1;
      if (pbVar1 + -3 == pbVar6) goto LAB_00125a70;
      pbVar5 = pbVar6 + 1;
    } while (pbVar6[3] - 0x30 < 10);
    pbVar5 = pbVar6 + 3;
LAB_00125a70:
    if (pbVar7 == pbVar5) {
      return (undefined8 *)0x0;
    }
    if (pbVar1 + -3 == pbVar6) {
      return (undefined8 *)0x0;
    }
    if (pbVar6[3] != 0x70) {
      return (undefined8 *)0x0;
    }
    pbVar7 = pbVar6 + 4;
    *param_1 = (long)pbVar7;
    if (pbVar1 + -4 == pbVar6) {
      return (undefined8 *)0x0;
    }
    if (*pbVar7 == 0x72) {
      pbVar7 = pbVar6 + 5;
      *param_1 = (long)pbVar7;
    }
    if (pbVar7 != pbVar1) {
      if (*pbVar7 == 0x56) {
        pbVar7 = pbVar7 + 1;
        *param_1 = (long)pbVar7;
      }
      if ((pbVar7 != pbVar1) && (*pbVar7 == 0x4b)) {
        pbVar7 = pbVar7 + 1;
        *param_1 = (long)pbVar7;
      }
    }
    if (pbVar1 == pbVar7) {
      return (undefined8 *)0x0;
    }
    pbVar5 = pbVar7;
    if (9 < *pbVar7 - 0x30) goto LAB_001259c0;
    pbVar6 = pbVar7 + 1;
    do {
      pbVar5 = pbVar6;
      *param_1 = (long)pbVar5;
      if (pbVar1 == pbVar5) goto LAB_00125b38;
      pbVar6 = pbVar5 + 1;
    } while (*pbVar5 - 0x30 < 10);
  }
  pbVar8 = pbVar6 + -1;
LAB_00125b38:
  if ((pbVar5 != pbVar1) && (*pbVar5 == 0x5f)) {
    pvVar9 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar4 = *(long *)((long)pvVar9 + 8);
    puVar2 = (undefined8 *)pvVar9;
    if (0xfef < lVar4 + 0x20U) {
      puVar2 = (undefined8 *)malloc(0x1000);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar2 = pvVar9;
      puVar2[1] = 0;
      param_1[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
    puVar3 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
    *puVar3 = &PTR_FUN_0013e468;
    *(undefined4 *)((long)puVar2 + lVar4 + 0x18) = 0x101013b;
    *(byte **)((long)puVar2 + lVar4 + 0x20) = pbVar7;
    *(byte **)((long)puVar2 + lVar4 + 0x28) = pbVar8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}


// ===== 00125bcc  FUN_00125bcc =====

undefined8 * FUN_00125bcc(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  long lVar11;
  undefined1 uVar12;
  void *pvVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)param_1[1];
  if (pcVar2 == pcVar3) {
    return (undefined8 *)0x0;
  }
  if (*pcVar2 != 'f') {
    return (undefined8 *)0x0;
  }
  pcVar1 = pcVar2 + 1;
  *param_1 = (long)pcVar1;
  if (pcVar3 == pcVar1) {
    return (undefined8 *)0x0;
  }
  cVar4 = *pcVar1;
  bVar5 = false;
  uVar12 = 1;
  switch(cVar4) {
  case 'L':
  case 'l':
    break;
  default:
    return (undefined8 *)0x0;
  case 'R':
  case 'r':
    uVar12 = 0;
    bVar5 = true;
  }
  pcVar1 = pcVar2 + 2;
  *param_1 = (long)pcVar1;
  if ((ulong)((long)pcVar3 - (long)pcVar1) < 2) {
    return (undefined8 *)0x0;
  }
  cVar10 = *pcVar1;
  if (cVar10 == 'a') {
    if (pcVar2[3] != 'a') {
      cVar10 = *pcVar1;
      if (cVar10 == 'a') {
        if (pcVar2[3] == 'n') {
          puVar14 = &DAT_00112d4e;
          puVar15 = &DAT_00112d4f;
          goto LAB_001260d8;
        }
        cVar10 = *pcVar1;
        if (cVar10 == 'a') {
          if (pcVar2[3] == 'N') {
            puVar14 = &UNK_0011246f;
            goto LAB_001260d4;
          }
          cVar10 = *pcVar1;
          if (cVar10 == 'a') {
            if (pcVar2[3] == 'S') {
              puVar14 = &DAT_0011281e;
              puVar15 = &DAT_0011281f;
              goto LAB_001260d8;
            }
            cVar10 = *pcVar1;
          }
        }
      }
      goto LAB_00125d2c;
    }
    puVar14 = &DAT_00112cbe;
    goto LAB_001260d4;
  }
LAB_00125d2c:
  if ((cVar10 == 'c') && (pcVar2[3] == 'm')) {
    puVar14 = &DAT_00112345;
    puVar15 = &DAT_00112346;
    goto LAB_001260d8;
  }
  if (*pcVar1 == 'd') {
    if (pcVar2[3] == 's') {
      puVar14 = &UNK_00112701;
      goto LAB_001260d4;
    }
    if (*pcVar1 != 'd') goto LAB_00125dc0;
    if (pcVar2[3] == 'v') {
      puVar14 = &DAT_00111df3;
      puVar15 = &DAT_00111df4;
      goto LAB_001260d8;
    }
    cVar10 = *pcVar1;
    if (cVar10 == 'd') {
      if (pcVar2[3] == 'V') {
        puVar14 = &UNK_00112097;
        goto LAB_001260d4;
      }
      goto LAB_00125dc0;
    }
  }
  else {
LAB_00125dc0:
    cVar10 = *pcVar1;
  }
  if ((cVar10 == 'e') && (pcVar2[3] == 'o')) {
    puVar14 = &DAT_001128dc;
    puVar15 = &DAT_001128dd;
    goto LAB_001260d8;
  }
  cVar10 = *pcVar1;
  if (cVar10 == 'e') {
    if (pcVar2[3] != 'O') {
      cVar10 = *pcVar1;
      if (cVar10 == 'e') {
        if (pcVar2[3] == 'q') {
          puVar14 = &UNK_00112645;
          goto LAB_001260d4;
        }
        cVar10 = *pcVar1;
      }
      goto LAB_00125e34;
    }
    puVar14 = &UNK_00112642;
  }
  else {
LAB_00125e34:
    if ((cVar10 == 'g') && (pcVar2[3] == 'e')) {
      puVar14 = &UNK_00111d33;
    }
    else {
      cVar10 = *pcVar1;
      if (cVar10 == 'g') {
        if (pcVar2[3] == 't') {
          puVar14 = &DAT_00112648;
          puVar15 = &DAT_00112649;
          goto LAB_001260d8;
        }
        cVar10 = *pcVar1;
      }
      if ((cVar10 == 'l') && (pcVar2[3] == 'e')) {
        puVar14 = &UNK_00112b97;
      }
      else if (*pcVar1 == 'l') {
        if (pcVar2[3] != 's') {
          if (*pcVar1 != 'l') goto LAB_00125f14;
          if (pcVar2[3] != 'S') {
            cVar10 = *pcVar1;
            if (cVar10 == 'l') {
              if (pcVar2[3] == 't') {
                puVar14 = &DAT_00111cbb;
                puVar15 = &DAT_00111cbc;
                goto LAB_001260d8;
              }
              goto LAB_00125f14;
            }
            goto LAB_00125f18;
          }
          puVar14 = &UNK_0011291a;
LAB_00125ee4:
          puVar15 = puVar14 + 3;
          goto LAB_001260d8;
        }
        puVar14 = &UNK_00112a83;
      }
      else {
LAB_00125f14:
        cVar10 = *pcVar1;
LAB_00125f18:
        if ((cVar10 == 'm') && (pcVar2[3] == 'i')) {
          puVar14 = &DAT_001120cf;
          puVar15 = &DAT_001120d0;
          goto LAB_001260d8;
        }
        if (*pcVar1 == 'm') {
          if (pcVar2[3] == 'I') {
            puVar14 = &UNK_0011209a;
            goto LAB_001260d4;
          }
          if (*pcVar1 != 'm') goto LAB_00125fac;
          if (pcVar2[3] == 'l') {
            puVar14 = &DAT_001122b5;
            puVar15 = &DAT_001122b6;
            goto LAB_001260d8;
          }
          cVar10 = *pcVar1;
          if (cVar10 == 'm') {
            if (pcVar2[3] == 'L') {
              puVar14 = &UNK_00112347;
              goto LAB_001260d4;
            }
            goto LAB_00125fac;
          }
        }
        else {
LAB_00125fac:
          cVar10 = *pcVar1;
        }
        if ((cVar10 == 'n') && (pcVar2[3] == 'e')) {
          puVar14 = &UNK_00112af0;
        }
        else {
          if (*pcVar1 == 'o') {
            if (pcVar2[3] == 'o') {
              puVar14 = &UNK_00112820;
              goto LAB_001260d4;
            }
            if (*pcVar1 != 'o') goto LAB_00126040;
            if (pcVar2[3] == 'r') {
              puVar14 = &DAT_00112cc1;
              puVar15 = &DAT_00112cc2;
              goto LAB_001260d8;
            }
            cVar10 = *pcVar1;
            if (cVar10 == 'o') {
              if (pcVar2[3] == 'R') {
                puVar14 = &UNK_001128de;
                goto LAB_001260d4;
              }
              goto LAB_00126040;
            }
          }
          else {
LAB_00126040:
            cVar10 = *pcVar1;
          }
          if ((cVar10 == 'p') && (pcVar2[3] == 'l')) {
            puVar14 = &DAT_001128e1;
            puVar15 = &DAT_001128e2;
            goto LAB_001260d8;
          }
          cVar10 = *pcVar1;
          if (cVar10 == 'p') {
            if (pcVar2[3] == 'L') {
              puVar14 = &DAT_00112755;
              goto LAB_001260d4;
            }
            cVar10 = *pcVar1;
          }
          if ((cVar10 == 'r') && (pcVar2[3] == 'm')) {
            puVar14 = &DAT_00113049;
            puVar15 = &DAT_0011304a;
            goto LAB_001260d8;
          }
          if (*pcVar1 != 'r') {
            return (undefined8 *)0x0;
          }
          if (pcVar2[3] == 'M') {
            puVar14 = &UNK_00112b9a;
          }
          else {
            if (*pcVar1 != 'r') {
              return (undefined8 *)0x0;
            }
            if (pcVar2[3] != 's') {
              if (*pcVar1 != 'r') {
                return (undefined8 *)0x0;
              }
              if (pcVar2[3] != 'S') {
                return (undefined8 *)0x0;
              }
              puVar14 = &UNK_00112758;
              goto LAB_00125ee4;
            }
            puVar14 = &UNK_00111ea6;
          }
        }
      }
    }
  }
LAB_001260d4:
  puVar15 = puVar14 + 2;
LAB_001260d8:
  *param_1 = (long)(pcVar2 + 4);
  lVar6 = FUN_00122e5c(param_1);
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  lVar11 = lVar6;
  if ((cVar4 == 'R') || (cVar4 == 'L')) {
    lVar7 = FUN_00122e5c(param_1);
    if (lVar7 == 0) {
      return (undefined8 *)0x0;
    }
    if (!bVar5) {
      lVar11 = lVar7;
      lVar7 = lVar6;
    }
  }
  else {
    lVar7 = 0;
  }
  pvVar13 = (void *)param_1[0x266];
  lVar6 = *(long *)((long)pvVar13 + 8);
  puVar8 = (undefined8 *)pvVar13;
  if (0xfef < lVar6 + 0x40U) {
    puVar8 = (undefined8 *)malloc(0x1000);
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = 0;
    *puVar8 = pvVar13;
    puVar8[1] = 0;
    param_1[0x266] = (long)puVar8;
  }
  *(long *)((long)puVar8 + 8) = lVar6 + 0x40;
  puVar9 = (undefined8 *)((long)puVar8 + lVar6 + 0x10);
  *puVar9 = &PTR_FUN_0013e4d8;
  *(undefined4 *)((long)puVar8 + lVar6 + 0x18) = 0x101013e;
  *(long *)((long)puVar8 + lVar6 + 0x20) = lVar11;
  *(long *)((long)puVar8 + lVar6 + 0x28) = lVar7;
  *(undefined **)((long)puVar8 + lVar6 + 0x30) = puVar14;
  *(undefined **)((long)puVar8 + lVar6 + 0x38) = puVar15;
  *(undefined1 *)((long)puVar8 + lVar6 + 0x40) = uVar12;
  return puVar9;
}


// ===== 001261d4  FUN_001261d4 =====

void FUN_001261d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  
  lVar1 = FUN_00122e5c();
  if ((lVar1 != 0) && (lVar2 = FUN_00122e5c(param_1), lVar2 != 0)) {
    pvVar5 = *(void **)(param_1 + 0x1330);
    lVar4 = *(long *)((long)pvVar5 + 8);
    puVar3 = (undefined8 *)pvVar5;
    if (0xfef < lVar4 + 0x30U) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar3 = pvVar5;
      puVar3[1] = 0;
      *(undefined8 **)(param_1 + 0x1330) = puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar4 + 0x30;
    *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_0013e5b8;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x101012f;
    *(long *)((long)puVar3 + lVar4 + 0x20) = lVar1;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = param_2;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = param_3;
    *(long *)((long)puVar3 + lVar4 + 0x38) = lVar2;
  }
  return;
}


// ===== 0012628c  FUN_0012628c =====

undefined8 * FUN_0012628c(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  
  pcVar8 = (char *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)pcVar8) < 3) {
    if ((long)pbVar2 - (long)pcVar8 == 2) {
LAB_001263b0:
      cVar3 = *pcVar8;
      goto LAB_001263b4;
    }
    bVar4 = false;
  }
  else {
    cVar3 = *pcVar8;
    if (cVar3 == 's') {
      if ((pcVar8[1] == 'r') && (pcVar8[2] == 'N')) {
        *param_1 = (long)(pcVar8 + 3);
        puVar11 = (undefined8 *)FUN_0012a9a0(param_1);
        if (puVar11 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar5 = puVar11;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar10 = FUN_00121a6c(param_1,0);
          if (lVar10 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar9 = *(long *)((long)pvVar12 + 8);
          puVar6 = (undefined8 *)pvVar12;
          if (0xfef < lVar9 + 0x20U) {
            puVar6 = (undefined8 *)malloc(0x1000);
            if (puVar6 == (undefined8 *)0x0) goto LAB_001268c4;
            lVar9 = 0;
            *puVar6 = pvVar12;
            puVar6[1] = 0;
            param_1[0x266] = (long)puVar6;
          }
          *(long *)((long)puVar6 + 8) = lVar9 + 0x20;
          puVar5 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
          *puVar5 = &PTR_FUN_0013f3b8;
          *(undefined8 **)((long)puVar6 + lVar9 + 0x20) = puVar11;
          *(long *)((long)puVar6 + lVar9 + 0x28) = lVar10;
          *(undefined4 *)((long)puVar6 + lVar9 + 0x18) = 0x1010125;
        }
        while ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E'))) {
          puVar11 = (undefined8 *)FUN_0012acd0(param_1);
          if (puVar11 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar6 = puVar11;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar10 = FUN_00121a6c(param_1,0);
            if (lVar10 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar12 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar12 + 8);
            puVar7 = (undefined8 *)pvVar12;
            if (0xfef < lVar9 + 0x20U) {
              puVar7 = (undefined8 *)malloc(0x1000);
              if (puVar7 == (undefined8 *)0x0) goto LAB_001268c4;
              lVar9 = 0;
              *puVar7 = pvVar12;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
            puVar6 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
            *puVar6 = &PTR_FUN_0013f3b8;
            *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar11;
            *(long *)((long)puVar7 + lVar9 + 0x28) = lVar10;
            *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010125;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar12 + 8);
          puVar11 = (undefined8 *)pvVar12;
          if (0xfef < lVar10 + 0x20U) {
            puVar11 = (undefined8 *)malloc(0x1000);
            if (puVar11 == (undefined8 *)0x0) goto LAB_001268c4;
            lVar10 = 0;
            *puVar11 = pvVar12;
            puVar11[1] = 0;
            param_1[0x266] = (long)puVar11;
          }
          *(long *)((long)puVar11 + 8) = lVar10 + 0x20;
          puVar7 = (undefined8 *)((long)puVar11 + lVar10 + 0x10);
          *puVar7 = &PTR_FUN_0013e858;
          *(undefined4 *)((long)puVar11 + lVar10 + 0x18) = 0x1010116;
          *(undefined8 **)((long)puVar11 + lVar10 + 0x20) = puVar5;
          *(undefined8 **)((long)puVar11 + lVar10 + 0x28) = puVar6;
          puVar5 = puVar7;
        }
        *param_1 = (long)(pcVar8 + 1);
        lVar10 = FUN_0012aa60(param_1);
        if (lVar10 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar12 + 8);
        puVar11 = (undefined8 *)pvVar12;
        if (lVar9 + 0x20U < 0xff0) {
LAB_00126808:
          *(long *)((long)puVar11 + 8) = lVar9 + 0x20;
          puVar6 = (undefined8 *)((long)puVar11 + lVar9 + 0x10);
          *puVar6 = &PTR_FUN_0013e858;
          *(undefined4 *)((long)puVar11 + lVar9 + 0x18) = 0x1010116;
          goto LAB_00126894;
        }
        puVar11 = (undefined8 *)malloc(0x1000);
        if (puVar11 != (undefined8 *)0x0) {
          lVar9 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x266] = (long)puVar11;
          goto LAB_00126808;
        }
        goto LAB_001268c4;
      }
      goto LAB_001263b0;
    }
LAB_001263b4:
    if ((cVar3 == 'g') && (pcVar8[1] == 's')) {
      pcVar8 = pcVar8 + 2;
      bVar4 = true;
      *param_1 = (long)pcVar8;
      if ((ulong)((long)pbVar2 - (long)pcVar8) < 2) goto LAB_001264bc;
    }
    else {
      bVar4 = false;
    }
    if ((*pcVar8 == 's') && (pcVar8[1] == 'r')) {
      pbVar1 = (byte *)(pcVar8 + 2);
      *param_1 = (long)pbVar1;
      if ((pbVar2 != pbVar1) && (*pbVar1 - 0x30 < 10)) {
        puVar11 = (undefined8 *)FUN_0012acd0(param_1);
        if (puVar11 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar6 = (undefined8 *)0x0;
        do {
          puVar5 = puVar11;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar10 = FUN_00121a6c(param_1,0);
            if (lVar10 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar12 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar12 + 8);
            puVar7 = (undefined8 *)pvVar12;
            if (0xfef < lVar9 + 0x20U) {
              puVar7 = (undefined8 *)malloc(0x1000);
              if (puVar7 == (undefined8 *)0x0) goto LAB_001268c4;
              lVar9 = 0;
              *puVar7 = pvVar12;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
            puVar5 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
            *puVar5 = &PTR_FUN_0013f3b8;
            *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar11;
            *(long *)((long)puVar7 + lVar9 + 0x28) = lVar10;
            *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010125;
          }
          if (puVar6 == (undefined8 *)0x0) {
            if (bVar4) {
              pvVar12 = (void *)param_1[0x266];
              lVar10 = *(long *)((long)pvVar12 + 8);
              puVar11 = (undefined8 *)pvVar12;
              if (0xfef < lVar10 + 0x20U) {
                puVar11 = (undefined8 *)malloc(0x1000);
                if (puVar11 == (undefined8 *)0x0) goto LAB_001268c4;
                lVar10 = 0;
                *puVar11 = pvVar12;
                puVar11[1] = 0;
                param_1[0x266] = (long)puVar11;
              }
              *(long *)((long)puVar11 + 8) = lVar10 + 0x20;
              puVar7 = (undefined8 *)((long)puVar11 + lVar10 + 0x10);
              *puVar7 = &PTR_FUN_0013ea18;
              *(undefined4 *)((long)puVar11 + lVar10 + 0x18) = 0x1010126;
              puVar11 = (undefined8 *)((long)puVar11 + lVar10 + 0x20);
              goto LAB_00126794;
            }
          }
          else {
            pvVar12 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar12 + 8);
            puVar11 = (undefined8 *)pvVar12;
            if (0xfef < lVar10 + 0x20U) {
              puVar11 = (undefined8 *)malloc(0x1000);
              if (puVar11 == (undefined8 *)0x0) goto LAB_001268c4;
              lVar10 = 0;
              *puVar11 = pvVar12;
              puVar11[1] = 0;
              param_1[0x266] = (long)puVar11;
            }
            *(long *)((long)puVar11 + 8) = lVar10 + 0x20;
            puVar7 = (undefined8 *)((long)puVar11 + lVar10 + 0x10);
            *puVar7 = &PTR_FUN_0013e858;
            *(undefined4 *)((long)puVar11 + lVar10 + 0x18) = 0x1010116;
            *(undefined8 **)((long)puVar11 + lVar10 + 0x20) = puVar6;
            puVar11 = (undefined8 *)((long)puVar11 + lVar10 + 0x28);
LAB_00126794:
            *puVar11 = puVar5;
            puVar5 = puVar7;
          }
          pcVar8 = (char *)*param_1;
          if ((pcVar8 != (char *)param_1[1]) && (*pcVar8 == 'E')) {
            *param_1 = (long)(pcVar8 + 1);
            goto LAB_00126830;
          }
          puVar11 = (undefined8 *)FUN_0012acd0(param_1);
          puVar6 = puVar5;
          if (puVar11 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        } while( true );
      }
      puVar11 = (undefined8 *)FUN_0012a9a0(param_1);
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar5 = puVar11;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar10 = FUN_00121a6c(param_1,0);
        if (lVar10 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar12 + 8);
        puVar6 = (undefined8 *)pvVar12;
        if (0xfef < lVar9 + 0x20U) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_001268c4;
          lVar9 = 0;
          *puVar6 = pvVar12;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar9 + 0x20;
        puVar5 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
        *puVar5 = &PTR_FUN_0013f3b8;
        *(undefined8 **)((long)puVar6 + lVar9 + 0x20) = puVar11;
        *(long *)((long)puVar6 + lVar9 + 0x28) = lVar10;
        *(undefined4 *)((long)puVar6 + lVar9 + 0x18) = 0x1010125;
      }
LAB_00126830:
      lVar10 = FUN_0012aa60(param_1);
      if (lVar10 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar12 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar12 + 8);
      puVar11 = (undefined8 *)pvVar12;
      if (lVar9 + 0x20U < 0xff0) {
LAB_00126870:
        *(long *)((long)puVar11 + 8) = lVar9 + 0x20;
        puVar6 = (undefined8 *)((long)puVar11 + lVar9 + 0x10);
        *puVar6 = &PTR_FUN_0013e858;
        *(undefined4 *)((long)puVar11 + lVar9 + 0x18) = 0x1010116;
LAB_00126894:
        puVar6[2] = puVar5;
        puVar6[3] = lVar10;
        return puVar6;
      }
      puVar11 = (undefined8 *)malloc(0x1000);
      if (puVar11 != (undefined8 *)0x0) {
        lVar9 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x266] = (long)puVar11;
        goto LAB_00126870;
      }
      goto LAB_001268c4;
    }
  }
LAB_001264bc:
  puVar5 = (undefined8 *)FUN_0012aa60(param_1);
  puVar11 = puVar5;
  if ((puVar5 != (undefined8 *)0x0) && (bVar4)) {
    pvVar12 = (void *)param_1[0x266];
    lVar10 = *(long *)((long)pvVar12 + 8);
    puVar6 = (undefined8 *)pvVar12;
    if (0xfef < lVar10 + 0x20U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) {
LAB_001268c4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar10 = 0;
      *puVar6 = pvVar12;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
    puVar11 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
    *puVar11 = &PTR_FUN_0013ea18;
    *(undefined4 *)((long)puVar6 + lVar10 + 0x18) = 0x1010126;
    *(undefined8 **)((long)puVar6 + lVar10 + 0x20) = puVar5;
  }
  return puVar11;
}


// ===== 001268c8  FUN_001268c8 =====

void FUN_001268c8(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  pcVar1 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar1) && (param_1[1] - (long)pcVar1 != 1)) && (*pcVar1 == 'd')) {
    cVar2 = pcVar1[1];
    if (cVar2 == 'X') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_00122e5c(param_1);
      if (((lVar3 != 0) && (lVar4 = FUN_00122e5c(param_1), lVar4 != 0)) &&
         (lVar6 = FUN_001268c8(param_1), lVar6 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (0xfef < lVar7 + 0x30U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) {
LAB_00126afc:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar7 + 0x30;
        *(undefined ***)((long)puVar5 + lVar7 + 0x10) = &PTR_FUN_0013ebd8;
        *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x101014a;
        *(long *)((long)puVar5 + lVar7 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar7 + 0x28) = lVar4;
        *(long *)((long)puVar5 + lVar7 + 0x30) = lVar6;
      }
    }
    else if (cVar2 == 'x') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_00122e5c(param_1);
      if ((lVar3 != 0) && (lVar4 = FUN_001268c8(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (0xfef < lVar6 + 0x30U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00126afc;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_0013eb68;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010149;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 1;
      }
    }
    else {
      if (cVar2 != 'i') goto LAB_001269a8;
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0012acd0(param_1);
      if ((lVar3 != 0) && (lVar4 = FUN_001268c8(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (0xfef < lVar6 + 0x30U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00126afc;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_0013eb68;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010149;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 0;
      }
    }
    return;
  }
LAB_001269a8:
  FUN_00122e5c(param_1);
  return;
}


// ===== 00126b00  FUN_00126b00 =====

undefined8 * FUN_00126b00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  
  pbVar6 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  pbVar5 = pbVar6;
  if (pbVar6 == pbVar1) {
    pbVar6 = (byte *)0x0;
    pbVar7 = (byte *)0x0;
  }
  else {
    if (*pbVar6 == 0x6e) {
      pbVar5 = pbVar6 + 1;
      *param_1 = (long)pbVar5;
    }
    if (pbVar1 == pbVar5) {
      pbVar5 = pbVar1;
      pbVar6 = (byte *)0x0;
      pbVar7 = (byte *)0x0;
    }
    else if (*pbVar5 - 0x30 < 10) {
      do {
        pbVar5 = pbVar5 + 1;
        *param_1 = (long)pbVar5;
        pbVar7 = pbVar1;
        if (pbVar1 == pbVar5) break;
        pbVar7 = pbVar5;
      } while (*pbVar5 - 0x30 < 10);
    }
    else {
      pbVar6 = (byte *)0x0;
      pbVar7 = (byte *)0x0;
    }
  }
  puVar2 = (undefined8 *)0x0;
  if ((pbVar7 != pbVar6) && (pbVar5 != pbVar1)) {
    if (*pbVar5 == 0x45) {
      pvVar8 = (void *)param_1[0x266];
      *param_1 = (long)(pbVar5 + 1);
      lVar4 = *(long *)((long)pvVar8 + 8);
      puVar3 = (undefined8 *)pvVar8;
      if (0xfef < lVar4 + 0x30U) {
        puVar3 = (undefined8 *)malloc(0x1000);
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar4 = 0;
        *puVar3 = pvVar8;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
      }
      *(long *)((long)puVar3 + 8) = lVar4 + 0x30;
      puVar2 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
      *puVar2 = &PTR_FUN_0013ddd8;
      *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x1010145;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = param_2;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = param_3;
      *(byte **)((long)puVar3 + lVar4 + 0x30) = pbVar6;
      *(byte **)((long)puVar3 + lVar4 + 0x38) = pbVar7;
    }
    else {
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


// ===== 00126c68  FUN_00126c68 =====

undefined8 * FUN_00126c68(long *param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  size_t __n;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint __c;
  char *pcVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  char *pcVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  void *pvVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 **local_d8;
  long *local_d0;
  long lStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    param_1[0x54] = param_1[0x53];
  }
  pcVar6 = (char *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if ((1 < (ulong)((long)pbVar1 - (long)pcVar6)) && (*pcVar6 == 'U')) {
    if (pcVar6[1] == 't') {
      pbVar12 = (byte *)(pcVar6 + 2);
      *param_1 = (long)pbVar12;
      if (pbVar1 != pbVar12) {
        if (*pbVar12 - 0x30 < 10) {
          pbVar21 = (byte *)(pcVar6 + 3);
          do {
            pbVar9 = pbVar21;
            *param_1 = (long)pbVar9;
            pbVar15 = pbVar1;
            if (pbVar1 == pbVar9) break;
            pbVar21 = pbVar9 + 1;
            pbVar15 = pbVar9;
          } while (*pbVar9 - 0x30 < 10);
        }
        else {
          pbVar9 = pbVar12;
          pbVar12 = (byte *)0x0;
          pbVar15 = (byte *)0x0;
        }
        if ((pbVar9 != pbVar1) && (*pbVar9 == 0x5f)) {
          pvVar17 = (void *)param_1[0x266];
          *param_1 = (long)(pbVar9 + 1);
          lVar7 = *(long *)((long)pvVar17 + 8);
          puVar4 = (undefined8 *)pvVar17;
          if (0xfef < lVar7 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_00127200;
            lVar7 = 0;
            *puVar4 = pvVar17;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
          puVar19 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar19 = &PTR_FUN_0013e078;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x101012c;
          *(byte **)((long)puVar4 + lVar7 + 0x20) = pbVar12;
          *(byte **)((long)puVar4 + lVar7 + 0x28) = pbVar15;
          goto LAB_00126fb0;
        }
      }
    }
    else if (*pcVar6 == 'U') {
      if (pcVar6[1] == 'l') {
        lVar20 = param_1[0x62];
        *param_1 = (long)(pcVar6 + 2);
        local_d8 = &local_c0;
        lStack_c8 = param_1[0x54] - param_1[0x53] >> 3;
        local_b0 = &local_68;
        param_1[0x62] = lStack_c8;
        uStack_a0 = 0;
        local_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_80 = 0;
        local_88 = 0;
        uStack_70 = 0;
        local_78 = 0;
        local_d0 = param_1;
        local_c0 = &local_a8;
        puStack_b8 = &local_a8;
        FUN_00122b30(param_1 + 0x53,&local_d8);
        plVar16 = param_1 + 2;
        lVar14 = *plVar16;
        pcVar6 = (char *)*param_1;
        lVar18 = param_1[3];
        lVar7 = lVar18;
        lVar8 = lVar14;
        if ((char *)param_1[1] != pcVar6) {
          while (*pcVar6 == 'T') {
                    /* try { // try from 00126da4 to 00126daf has its CatchHandler @ 00127210 */
            __n = __strlen_chk(&DAT_00112a86,5);
            if ((ulong)(param_1[1] - *param_1) < 2) {
              __c = 0;
            }
            else {
              __c = (uint)*(byte *)(*param_1 + 1);
            }
            if (((__n == 0) ||
                (puVar3 = (undefined *)memchr(&DAT_00112a86,__c,__n), puVar3 == (undefined *)0x0))
               || (puVar3 == &UNK_00112a85)) break;
                    /* try { // try from 00126dec to 00126df3 has its CatchHandler @ 0012720c */
            local_d8 = (undefined8 **)FUN_00127eec(param_1);
            if (local_d8 == (undefined8 **)0x0) goto LAB_0012719c;
            FUN_0012115c(plVar16,&local_d8);
            pcVar6 = (char *)*param_1;
            if ((char *)param_1[1] == pcVar6) break;
          }
          lVar7 = param_1[3];
          lVar8 = param_1[2];
        }
        lVar14 = (lVar18 - lVar14 >> 3) * 8;
        auVar22 = FUN_0012a5c8(param_1,lVar8 + lVar14,lVar7);
        param_1[3] = param_1[2] + lVar14;
        if (auVar22._8_8_ == 0) {
          param_1[0x54] = param_1[0x54] + -8;
        }
                    /* try { // try from 0012702c to 0012703b has its CatchHandler @ 00127208 */
        uVar5 = __strlen_chk(&DAT_001128e3,3);
        pcVar6 = (char *)*param_1;
        if ((ulong)(param_1[1] - (long)pcVar6) < uVar5) {
LAB_0012704c:
          do {
                    /* try { // try from 0012704c to 00127053 has its CatchHandler @ 00127214 */
            local_d8 = (undefined8 **)FUN_0011ec20(param_1);
            if (local_d8 == (undefined8 **)0x0) goto LAB_0012719c;
            FUN_0012115c(plVar16,&local_d8);
            pcVar6 = (char *)*param_1;
          } while ((pcVar6 == (char *)param_1[1]) || (*pcVar6 != 'E'));
          pcVar6 = pcVar6 + 1;
        }
        else {
          if (uVar5 != 0) {
            pcVar10 = "vE";
            uVar11 = uVar5;
            pcVar13 = pcVar6;
            do {
              if (*pcVar10 != *pcVar13) goto LAB_0012704c;
              pcVar10 = pcVar10 + 1;
              uVar11 = uVar11 - 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar11 != 0);
          }
          pcVar6 = pcVar6 + uVar5;
        }
        *param_1 = (long)pcVar6;
        auVar23 = FUN_0012a5c8(param_1,param_1[2] + lVar14,param_1[3]);
        pbVar1 = (byte *)param_1[1];
        pbVar21 = (byte *)*param_1;
        param_1[3] = param_1[2] + lVar14;
        pbVar12 = pbVar21;
        if ((pbVar1 == pbVar21) || (9 < *pbVar21 - 0x30)) {
          pbVar9 = (byte *)0x0;
          pbVar21 = (byte *)0x0;
        }
        else {
          do {
            pbVar12 = pbVar12 + 1;
            *param_1 = (long)pbVar12;
            pbVar9 = pbVar1;
            if (pbVar1 == pbVar12) break;
            pbVar9 = pbVar12;
          } while (*pbVar12 - 0x30 < 10);
        }
        if ((pbVar12 == pbVar1) || (*pbVar12 != 0x5f)) {
LAB_0012719c:
          puVar19 = (undefined8 *)0x0;
        }
        else {
          pvVar17 = (void *)param_1[0x266];
          *param_1 = (long)(pbVar12 + 1);
          lVar7 = *(long *)((long)pvVar17 + 8);
          puVar4 = (undefined8 *)pvVar17;
          if (0xfef < lVar7 + 0x40U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) {
LAB_00127200:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar7 = 0;
            *puVar4 = pvVar17;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x40;
          puVar19 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar19 = &PTR_FUN_0013e318;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x101012d;
          *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x20) = auVar22;
          *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x30) = auVar23;
          *(byte **)((long)puVar4 + lVar7 + 0x40) = pbVar21;
          *(byte **)((long)puVar4 + lVar7 + 0x48) = pbVar9;
        }
        local_d0[0x54] = local_d0[0x53] + lStack_c8 * 8;
        if (local_c0 != &local_a8) {
          free(local_c0);
        }
        param_1[0x62] = lVar20;
        goto LAB_00126fb0;
      }
      if ((*pcVar6 == 'U') && (pcVar6[1] == 'b')) {
        pbVar12 = (byte *)(pcVar6 + 2);
        *param_1 = (long)pbVar12;
        if (pbVar1 != pbVar12) {
          if (*pbVar12 - 0x30 < 10) {
            pbVar21 = (byte *)(pcVar6 + 3);
            do {
              pbVar12 = pbVar21;
              *param_1 = (long)pbVar12;
              if (pbVar1 == pbVar12) break;
              pbVar21 = pbVar12 + 1;
            } while (*pbVar12 - 0x30 < 10);
          }
          if ((pbVar12 != pbVar1) && (*pbVar12 == 0x5f)) {
            pvVar17 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar12 + 1);
            lVar7 = *(long *)((long)pvVar17 + 8);
            puVar4 = (undefined8 *)pvVar17;
            if (0xfef < lVar7 + 0x20U) {
              puVar4 = (undefined8 *)malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) goto LAB_00127200;
              lVar7 = 0;
              *puVar4 = pvVar17;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
            puVar19 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
            *puVar19 = &PTR_FUN_0013dc88;
            *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x1010107;
            *(char **)((long)puVar4 + lVar7 + 0x20) = "\'block-literal\'";
            *(char **)((long)puVar4 + lVar7 + 0x28) = "";
            goto LAB_00126fb0;
          }
        }
      }
    }
  }
  puVar19 = (undefined8 *)0x0;
LAB_00126fb0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar19;
}


// ===== 00127244  FUN_00127244 =====

void FUN_00127244(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  char *__src;
  
  if (3 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) {
    lVar5 = param_2[1];
    uVar1 = lVar5 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00127524;
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar5) = 0x28;
    lVar5 = param_2[1] + 1;
    param_2[1] = lVar5;
    pvVar2 = *(void **)(param_1 + 0x10);
    sVar6 = *(long *)(param_1 + 0x18) - (long)pvVar2;
    if (sVar6 != 0) {
      uVar1 = lVar5 + sVar6;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar1 <= uVar4) {
          uVar1 = uVar4;
        }
        param_2[2] = uVar1;
        pvVar3 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_00127524;
        lVar5 = param_2[1];
      }
      memmove((void *)((long)pvVar3 + lVar5),pvVar2,sVar6);
      lVar5 = param_2[1] + sVar6;
      param_2[1] = lVar5;
    }
    uVar1 = lVar5 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00127524;
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar5) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  __src = *(char **)(param_1 + 0x20);
  if (*__src == 'n') {
    lVar5 = param_2[1];
    uVar1 = lVar5 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00127524;
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar5) = 0x2d;
    lVar5 = param_2[1] + 1;
    param_2[1] = lVar5;
    pvVar2 = *(void **)(param_1 + 0x20);
    if (*(void **)(param_1 + 0x28) != pvVar2) {
      pvVar2 = (void *)((long)pvVar2 + 1);
    }
    sVar6 = (long)*(void **)(param_1 + 0x28) - (long)pvVar2;
    if (sVar6 != 0) {
      uVar1 = lVar5 + sVar6;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar1 <= uVar4) {
          uVar1 = uVar4;
        }
        param_2[2] = uVar1;
        pvVar3 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_00127524;
        lVar5 = param_2[1];
      }
      memmove((void *)((long)pvVar3 + lVar5),pvVar2,sVar6);
      lVar5 = param_2[1] + sVar6;
LAB_001274a0:
      param_2[1] = lVar5;
    }
  }
  else {
    sVar6 = *(long *)(param_1 + 0x28) - (long)__src;
    if (sVar6 != 0) {
      lVar5 = param_2[1];
      uVar1 = lVar5 + sVar6;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar1 <= uVar4) {
          uVar1 = uVar4;
        }
        param_2[2] = uVar1;
        pvVar2 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_00127524;
        lVar5 = param_2[1];
      }
      memmove((void *)((long)pvVar2 + lVar5),__src,sVar6);
      lVar5 = param_2[1] + sVar6;
      goto LAB_001274a0;
    }
  }
  pvVar2 = *(void **)(param_1 + 0x10);
  sVar6 = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (sVar6 - 1 < 3) {
    lVar5 = param_2[1];
    uVar1 = lVar5 + sVar6;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_00127524:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,sVar6);
    param_2[1] = param_2[1] + sVar6;
  }
  return;
}


// ===== 00127528  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00127530  FUN_00127530 =====

void FUN_00127530(long param_1,undefined8 *param_2)

{
  ulong __size;
  char *pcVar1;
  size_t __n;
  char *__src;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  pcVar1 = "";
  __src = "false";
  if (*(char *)(param_1 + 0xc) != '\0') {
    pcVar1 = "";
    __src = "true";
  }
  __n = (long)pcVar1 - (long)__src;
  if (__n != 0) {
    lVar4 = param_2[1];
    __size = lVar4 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (__size <= uVar3) {
        __size = uVar3;
      }
      param_2[2] = __size;
      pvVar2 = realloc((void *)*param_2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001275e8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001275f0  FUN_001275f0 =====

void FUN_001275f0(long param_1,undefined8 *param_2)

{
  ulong __size;
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  undefined1 uVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  size_t __n;
  float local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  pbVar5 = *(byte **)(param_1 + 0x10);
  if (8 < (*(long *)(param_1 + 0x18) - (long)pbVar5) + 1U) {
    cVar15 = '\t';
    cVar1 = cVar15;
    if (*pbVar5 - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar17 = -0x57;
    cVar2 = -0x57;
    if (pbVar5[1] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    if (pbVar5[2] - 0x30 < 10) {
      cVar15 = '\0';
    }
    if (pbVar5[3] - 0x30 < 10) {
      cVar17 = -0x30;
    }
    cVar16 = '\t';
    cVar3 = cVar16;
    if (pbVar5[4] - 0x30 < 10) {
      cVar3 = '\0';
    }
    cVar18 = -0x57;
    cVar4 = cVar18;
    if (pbVar5[5] - 0x30 < 10) {
      cVar4 = -0x30;
    }
    puVar11 = (undefined1 *)((ulong)local_58 | 2);
    if (pbVar5[6] - 0x30 < 10) {
      cVar16 = '\0';
    }
    if (pbVar5[7] - 0x30 < 10) {
      cVar18 = -0x30;
    }
    local_58[0] = (float)CONCAT31(CONCAT12(cVar2 + pbVar5[1] + (cVar1 + *pbVar5) * '\x10',
                                           CONCAT11(cVar4 + pbVar5[5] + (cVar3 + pbVar5[4]) * '\x10'
                                                    ,cVar17 + pbVar5[3] +
                                                     (cVar15 + pbVar5[2]) * '\x10')),
                                  cVar18 + pbVar5[7] + (cVar16 + pbVar5[6]) * '\x10');
    puVar14 = puVar11;
    do {
      uVar6 = puVar11[-1];
      puVar11[-1] = *puVar14;
      *puVar14 = uVar6;
      bVar8 = puVar11 < puVar14 + -1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + -1;
    } while (bVar8);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    iVar9 = FUN_001277e4((double)local_58[0],&local_50,0x18,0x18,&DAT_0011275f);
    if (iVar9 != 0) {
      lVar13 = param_2[1];
      __n = (size_t)iVar9;
      __size = lVar13 + __n;
      if (__size < (ulong)param_2[2]) {
        pvVar10 = (void *)*param_2;
      }
      else {
        uVar12 = param_2[2] << 1;
        if (__size <= uVar12) {
          __size = uVar12;
        }
        param_2[2] = __size;
        pvVar10 = realloc((void *)*param_2,__size);
        *param_2 = pvVar10;
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar13 = param_2[1];
      }
      memmove((void *)((long)pvVar10 + lVar13),&local_50,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001277dc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001277e4  FUN_001277e4 =====

void FUN_001277e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_6;
  uStack_88 = param_7;
  local_80 = param_8;
  uStack_78 = param_9;
  local_70 = (undefined1 *)register0x00000008;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&local_70,param_8,param_9,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00127890  FUN_00127890 =====

void FUN_00127890(long param_1,undefined8 *param_2)

{
  ulong __size;
  char cVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  char cVar11;
  char cVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  size_t __n;
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (0x10 < (*(long *)(param_1 + 0x18) - (long)pbVar3) + 1U) {
    cVar11 = '\t';
    cVar1 = cVar11;
    if (*pbVar3 - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar12 = -0x57;
    cVar2 = -0x57;
    if (pbVar3[1] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_61 = cVar2 + pbVar3[1] + (cVar1 + *pbVar3) * '\x10';
    if (pbVar3[2] - 0x30 < 10) {
      cVar11 = '\0';
    }
    if (pbVar3[3] - 0x30 < 10) {
      cVar12 = -0x30;
    }
    cStack_67 = cVar12 + pbVar3[3] + (cVar11 + pbVar3[2]) * '\x10';
    cVar11 = '\t';
    cVar1 = cVar11;
    if (pbVar3[4] - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar12 = -0x57;
    cVar2 = cVar12;
    if (pbVar3[5] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_66 = cVar2 + pbVar3[5] + (cVar1 + pbVar3[4]) * '\x10';
    cVar1 = cVar11;
    if (pbVar3[6] - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar2 = cVar12;
    if (pbVar3[7] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_65 = cVar2 + pbVar3[7] + (cVar1 + pbVar3[6]) * '\x10';
    cVar1 = cVar11;
    if (pbVar3[8] - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar2 = -0x57;
    if (pbVar3[9] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_64 = cVar2 + pbVar3[9] + (cVar1 + pbVar3[8]) * '\x10';
    if (pbVar3[10] - 0x30 < 10) {
      cVar11 = '\0';
    }
    if (pbVar3[0xb] - 0x30 < 10) {
      cVar12 = -0x30;
    }
    cStack_63 = cVar12 + pbVar3[0xb] + (cVar11 + pbVar3[10]) * '\x10';
    cVar11 = '\t';
    cVar1 = cVar11;
    if (pbVar3[0xc] - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar12 = -0x57;
    cVar2 = cVar12;
    if (pbVar3[0xd] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_62 = cVar2 + pbVar3[0xd] + (cVar1 + pbVar3[0xc]) * '\x10';
    puVar13 = (undefined1 *)((ulong)&local_68 | 2);
    if (pbVar3[0xe] - 0x30 < 10) {
      cVar11 = '\0';
    }
    if (pbVar3[0xf] - 0x30 < 10) {
      cVar12 = -0x30;
    }
    local_68 = cVar12 + pbVar3[0xf] + (cVar11 + pbVar3[0xe]) * '\x10';
    puVar14 = (undefined1 *)((ulong)&local_68 | 6);
    do {
      uVar4 = puVar13[-1];
      puVar13[-1] = *puVar14;
      *puVar14 = uVar4;
      bVar6 = puVar13 < puVar14 + -1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + -1;
    } while (bVar6);
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    iVar7 = FUN_001277e4(CONCAT17(cStack_61,
                                  CONCAT16(cStack_62,
                                           CONCAT15(cStack_63,
                                                    CONCAT14(cStack_64,
                                                             CONCAT13(cStack_65,
                                                                      CONCAT12(cStack_66,
                                                                               CONCAT11(cStack_67,
                                                                                        local_68))))
                                                   ))),&local_60,0x20,0x20,&DAT_001122c3);
    if (iVar7 != 0) {
      lVar10 = param_2[1];
      __n = (size_t)iVar7;
      __size = lVar10 + __n;
      if (__size < (ulong)param_2[2]) {
        pvVar8 = (void *)*param_2;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (__size <= uVar9) {
          __size = uVar9;
        }
        param_2[2] = __size;
        pvVar8 = realloc((void *)*param_2,__size);
        *param_2 = pvVar8;
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar10 = param_2[1];
      }
      memmove((void *)((long)pvVar8 + lVar10),&local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00127b40  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00127b48  FUN_00127b48 =====

void FUN_00127b48(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  char cVar10;
  size_t __n;
  byte bVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar9 = *(byte **)(param_1 + 0x10);
  if (0x20 < (*(long *)(param_1 + 0x18) - (long)pbVar9) + 1U) {
    pbVar7 = local_60;
    if ((&local_70 < pbVar9 + 0x20) && (pbVar9 < pbVar7)) {
      lVar6 = 0;
      uVar1 = 0;
      do {
        uVar8 = uVar1;
        bVar11 = pbVar9[lVar6];
        bVar12 = (pbVar9 + lVar6)[1];
        lVar6 = lVar6 + 2;
        cVar13 = '\t';
        if (bVar11 - 0x30 < 10) {
          cVar13 = '\0';
        }
        cVar10 = -0x57;
        if (bVar12 - 0x30 < 10) {
          cVar10 = -0x30;
        }
        cVar13 = cVar10 + bVar12 + (cVar13 + bVar11) * '\x10';
        *(char *)((long)&local_70 + uVar8) = cVar13;
        uVar1 = uVar8 + 1;
      } while (lVar6 != 0x20);
      pbVar7 = (byte *)((long)&local_70 + uVar8 + 1);
    }
    else {
      bVar11 = pbVar9[2];
      bVar14 = pbVar9[3];
      bVar12 = pbVar9[0x12];
      bVar15 = pbVar9[0x13];
      uVar8 = 0xf;
      auVar24._0_4_ = (CONCAT12(bVar11,(ushort)*pbVar9) & 0xffff) - 0x30;
      auVar24._4_4_ = bVar11 - 0x30;
      auVar24._8_4_ = pbVar9[4] - 0x30;
      auVar24._12_4_ = pbVar9[6] - 0x30;
      auVar23._0_4_ = pbVar9[8] - 0x30;
      auVar23._4_4_ = pbVar9[10] - 0x30;
      auVar23._8_4_ = pbVar9[0xc] - 0x30;
      auVar23._12_4_ = pbVar9[0xe] - 0x30;
      auVar26._0_4_ = (CONCAT12(bVar12,(ushort)pbVar9[0x10]) & 0xffff) - 0x30;
      auVar26._4_4_ = bVar12 - 0x30;
      auVar26._8_4_ = pbVar9[0x14] - 0x30;
      auVar26._12_4_ = pbVar9[0x16] - 0x30;
      auVar17._0_4_ = pbVar9[0x18] - 0x30;
      auVar17._4_4_ = pbVar9[0x1a] - 0x30;
      auVar17._8_4_ = pbVar9[0x1c] - 0x30;
      auVar17._12_4_ = pbVar9[0x1e] - 0x30;
      auVar22._0_4_ = pbVar9[9] - 0x30;
      auVar22._4_4_ = pbVar9[0xb] - 0x30;
      auVar22._8_4_ = pbVar9[0xd] - 0x30;
      auVar22._12_4_ = pbVar9[0xf] - 0x30;
      auVar27._0_4_ = (CONCAT12(bVar15,(ushort)pbVar9[0x11]) & 0xffff) - 0x30;
      auVar27._4_4_ = bVar15 - 0x30;
      auVar27._8_4_ = pbVar9[0x15] - 0x30;
      auVar27._12_4_ = pbVar9[0x17] - 0x30;
      auVar16._0_4_ = pbVar9[0x19] - 0x30;
      auVar16._4_4_ = pbVar9[0x1b] - 0x30;
      auVar16._8_4_ = pbVar9[0x1d] - 0x30;
      auVar16._12_4_ = pbVar9[0x1f] - 0x30;
      auVar20._8_4_ = 9;
      auVar20._0_8_ = 0x900000009;
      auVar20._12_4_ = 9;
      auVar26 = NEON_cmhi(auVar26,auVar20,4);
      auVar17 = NEON_cmhi(auVar17,auVar20,4);
      auVar24 = NEON_cmhi(auVar24,auVar20,4);
      auVar18 = NEON_cmhi(auVar23,auVar20,4);
      auVar16 = NEON_cmhi(auVar16,auVar20,4);
      auVar27 = NEON_cmhi(auVar27,auVar20,4);
      auVar23 = NEON_cmhi(auVar22,auVar20,4);
      auVar21._4_4_ = bVar14 - 0x30;
      auVar21._0_4_ = (CONCAT12(bVar14,(ushort)pbVar9[1]) & 0xffff) - 0x30;
      auVar21._8_4_ = pbVar9[5] - 0x30;
      auVar21._12_4_ = pbVar9[7] - 0x30;
      auVar21 = NEON_cmhi(auVar21,auVar20,4);
      uVar1 = (ulong)CONCAT15(auVar18[0xc],
                              CONCAT14(auVar18[8],
                                       CONCAT13(auVar18[4],
                                                CONCAT12(auVar18[0],
                                                         CONCAT11(auVar24[0xc],auVar24[8]))))) &
              0x90909090909;
      auVar19[1] = auVar21[4];
      auVar19[0] = auVar21[0];
      auVar19[2] = auVar21[8];
      auVar19[3] = auVar21[0xc];
      auVar19[4] = auVar23[0];
      auVar19[5] = auVar23[4];
      auVar19[6] = auVar23[8];
      auVar19[7] = auVar23[0xc];
      auVar25[8] = 0xd0;
      auVar25._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar25[9] = 0xd0;
      auVar25[10] = 0xd0;
      auVar25[0xb] = 0xd0;
      auVar25[0xc] = 0xd0;
      auVar25[0xd] = 0xd0;
      auVar25[0xe] = 0xd0;
      auVar25[0xf] = 0xd0;
      auVar18[8] = 0xa9;
      auVar18._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar18[9] = 0xa9;
      auVar18[10] = 0xa9;
      auVar18[0xb] = 0xa9;
      auVar18[0xc] = 0xa9;
      auVar18[0xd] = 0xa9;
      auVar18[0xe] = 0xa9;
      auVar18[0xf] = 0xa9;
      auVar19[8] = auVar27[0];
      auVar19[9] = auVar27[4];
      auVar19[10] = auVar27[8];
      auVar19[0xb] = auVar27[0xc];
      auVar19[0xc] = auVar16[0];
      auVar19[0xd] = auVar16[4];
      auVar19[0xe] = auVar16[8];
      auVar19[0xf] = auVar16[0xc];
      auVar21 = NEON_bif(auVar18,auVar25,auVar19,1);
      local_70 = CONCAT17(auVar21[7] + pbVar9[0xf] + ((char)(uVar1 >> 0x28) + pbVar9[0xe]) * '\x10',
                          CONCAT16(auVar21[6] + pbVar9[0xd] +
                                   ((char)(uVar1 >> 0x20) + pbVar9[0xc]) * '\x10',
                                   CONCAT15(auVar21[5] + pbVar9[0xb] +
                                            ((char)(uVar1 >> 0x18) + pbVar9[10]) * '\x10',
                                            CONCAT14(auVar21[4] + pbVar9[9] +
                                                     ((char)(uVar1 >> 0x10) + pbVar9[8]) * '\x10',
                                                     CONCAT13(auVar21[3] + pbVar9[7] +
                                                              ((char)(uVar1 >> 8) + pbVar9[6]) *
                                                              '\x10',CONCAT12(auVar21[2] + pbVar9[5]
                                                                              + ((char)uVar1 +
                                                                                pbVar9[4]) * '\x10',
                                                                              CONCAT11(auVar21[1] +
                                                                                       bVar14 + ((
                                                  auVar24[4] & 9) + bVar11) * '\x10',
                                                  auVar21[0] + pbVar9[1] +
                                                  ((auVar24[0] & 9) + *pbVar9) * '\x10')))))));
      cVar13 = auVar21[0xf] + pbVar9[0x1f] + ((auVar17[0xc] & 9) + pbVar9[0x1e]) * '\x10';
      uStack_68 = CONCAT17(cVar13,CONCAT16(auVar21[0xe] + pbVar9[0x1d] +
                                           ((auVar17[8] & 9) + pbVar9[0x1c]) * '\x10',
                                           CONCAT15(auVar21[0xd] + pbVar9[0x1b] +
                                                    ((auVar17[4] & 9) + pbVar9[0x1a]) * '\x10',
                                                    CONCAT14(auVar21[0xc] + pbVar9[0x19] +
                                                             ((auVar17[0] & 9) + pbVar9[0x18]) *
                                                             '\x10',CONCAT13(auVar21[0xb] +
                                                                             pbVar9[0x17] +
                                                                             ((auVar26[0xc] & 9) +
                                                                             pbVar9[0x16]) * '\x10',
                                                                             CONCAT12(auVar21[10] +
                                                                                      pbVar9[0x15] +
                                                                                      ((auVar26[8] &
                                                                                       9) + pbVar9[
                                                  0x14]) * '\x10',
                                                  CONCAT11(auVar21[9] + bVar15 +
                                                           ((auVar26[4] & 9) + bVar12) * '\x10',
                                                           auVar21[8] + pbVar9[0x11] +
                                                           ((auVar26[0] & 9) + pbVar9[0x10]) *
                                                           '\x10')))))));
    }
    if ((pbVar7 != (byte *)&local_70) && (&local_70 < (undefined1 *)((long)&local_70 + uVar8))) {
      bVar11 = (byte)local_70;
      local_70 = CONCAT71(local_70._1_7_,cVar13);
      *(byte *)((long)&local_70 + uVar8) = bVar11;
      if (2 < uVar8) {
        pbVar9 = (byte *)((ulong)&local_70 | 2);
        pbVar7 = &local_71 + uVar8;
        do {
          bVar11 = pbVar9[-1];
          pbVar9[-1] = *pbVar7;
          *pbVar7 = bVar11;
          bVar3 = pbVar9 < pbVar7 + -1;
          pbVar9 = pbVar9 + 1;
          pbVar7 = pbVar7 + -1;
        } while (bVar3);
      }
    }
    local_60[0x20] = 0;
    local_60[0x21] = 0;
    local_60[0x22] = 0;
    local_60[0x23] = 0;
    local_60[0x24] = 0;
    local_60[0x25] = 0;
    local_60[0x26] = 0;
    local_60[0x27] = 0;
    local_60[8] = 0;
    local_60[9] = 0;
    local_60[10] = 0;
    local_60[0xb] = 0;
    local_60[0xc] = 0;
    local_60[0xd] = 0;
    local_60[0xe] = 0;
    local_60[0xf] = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 0;
    local_60[0x18] = 0;
    local_60[0x19] = 0;
    local_60[0x1a] = 0;
    local_60[0x1b] = 0;
    local_60[0x1c] = 0;
    local_60[0x1d] = 0;
    local_60[0x1e] = 0;
    local_60[0x1f] = 0;
    local_60[0x10] = 0;
    local_60[0x11] = 0;
    local_60[0x12] = 0;
    local_60[0x13] = 0;
    local_60[0x14] = 0;
    local_60[0x15] = 0;
    local_60[0x16] = 0;
    local_60[0x17] = 0;
    iVar4 = FUN_001277e4(local_70,local_60,0x28,0x28,&DAT_001120e6);
    if (iVar4 != 0) {
      lVar6 = param_2[1];
      __n = (size_t)iVar4;
      uVar1 = lVar6 + __n;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar8 = param_2[2] << 1;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        param_2[2] = uVar1;
        pvVar5 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = param_2[1];
      }
      memmove((void *)((long)pvVar5 + lVar6),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00127dd8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00127de0  FUN_00127de0 =====

void FUN_00127de0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00127ee0;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x3c22;
  param_2[1] = param_2[1] + 2;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_00127ee0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x223e;
  param_2[1] = param_2[1] + 2;
  return;
}


// ===== 00127ee4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00127eec  FUN_00127eec =====

undefined8 * FUN_00127eec(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  void *pvVar15;
  undefined1 auVar16 [16];
  undefined8 **local_c8;
  long *local_c0;
  long lStack_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pcVar1 = (char *)*param_1;
  if ((1 < (ulong)(param_1[1] - (long)pcVar1)) && (*pcVar1 == 'T')) {
    if (pcVar1[1] == 'y') {
      lVar10 = param_1[99];
      pvVar15 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar1 + 2);
      *(int *)(param_1 + 99) = (int)lVar10 + 1;
      lVar9 = *(long *)((long)pvVar15 + 8);
      puVar7 = (undefined8 *)pvVar15;
      if (0xfef < lVar9 + 0x20U) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_00128408;
        lVar9 = 0;
        *puVar7 = pvVar15;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
      plVar13 = (long *)((long)puVar7 + lVar9 + 0x10);
      *plVar13 = (long)&PTR_FUN_0013e0e8;
      *(undefined8 *)((long)puVar7 + lVar9 + 0x18) = 0x101011b;
      *(int *)((long)puVar7 + lVar9 + 0x20) = (int)lVar10;
      local_c0 = plVar13;
      FUN_0012858c(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
      puVar14 = (undefined8 *)param_1[0x266];
      lVar10 = puVar14[1];
      puVar7 = puVar14;
      if (0xfef < lVar10 + 0x20U) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) {
LAB_00128408:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar10 = 0;
        *puVar7 = puVar14;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      lVar9 = (long)puVar7 + lVar10;
      uVar12 = 0x1c;
      ppuVar11 = &PTR_FUN_0013e158;
LAB_00128008:
      puVar7[1] = lVar10 + 0x20;
      puVar14 = (undefined8 *)(lVar9 + 0x10);
      *puVar14 = ppuVar11;
      *(uint *)(lVar9 + 0x18) = uVar12 | 0x1010000;
      *(long **)(lVar9 + 0x20) = plVar13;
      goto LAB_001283cc;
    }
    if (*pcVar1 == 'T') {
      if (pcVar1[1] == 'n') {
        iVar2 = *(int *)((long)param_1 + 0x31c);
        pvVar15 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar1 + 2);
        *(int *)((long)param_1 + 0x31c) = iVar2 + 1;
        lVar10 = *(long *)((long)pvVar15 + 8);
        puVar7 = (undefined8 *)pvVar15;
        if (0xfef < lVar10 + 0x20U) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_00128408;
          lVar10 = 0;
          *puVar7 = pvVar15;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar10 + 0x20;
        plVar13 = (long *)((long)puVar7 + lVar10 + 0x10);
        *plVar13 = (long)&PTR_FUN_0013e0e8;
        *(undefined8 *)((long)puVar7 + lVar10 + 0x18) = 0x10101011b;
        *(int *)((long)puVar7 + lVar10 + 0x20) = iVar2;
        local_c0 = plVar13;
        FUN_0012858c(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
        lVar10 = FUN_0011ec20(param_1);
        if (lVar10 != 0) {
          pvVar15 = (void *)param_1[0x266];
          lVar9 = *(long *)((long)pvVar15 + 8);
          puVar7 = (undefined8 *)pvVar15;
          if (0xfef < lVar9 + 0x20U) {
            puVar7 = (undefined8 *)malloc(0x1000);
            if (puVar7 == (undefined8 *)0x0) goto LAB_00128408;
            lVar9 = 0;
            *puVar7 = pvVar15;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
          puVar14 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
          *puVar14 = &PTR_FUN_0013e1c8;
          *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x101001d;
          *(long **)((long)puVar7 + lVar9 + 0x20) = plVar13;
          *(long *)((long)puVar7 + lVar9 + 0x28) = lVar10;
          goto LAB_001283cc;
        }
      }
      else if (*pcVar1 == 'T') {
        if (pcVar1[1] == 't') {
          lVar10 = param_1[100];
          pvVar15 = (void *)param_1[0x266];
          *param_1 = (long)(pcVar1 + 2);
          *(int *)(param_1 + 100) = (int)lVar10 + 1;
          lVar9 = *(long *)((long)pvVar15 + 8);
          puVar7 = (undefined8 *)pvVar15;
          if (0xfef < lVar9 + 0x20U) {
            puVar7 = (undefined8 *)malloc(0x1000);
            if (puVar7 == (undefined8 *)0x0) goto LAB_00128408;
            lVar9 = 0;
            *puVar7 = pvVar15;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
          plVar13 = (long *)((long)puVar7 + lVar9 + 0x10);
          *plVar13 = (long)&PTR_FUN_0013e0e8;
          *(undefined8 *)((long)puVar7 + lVar9 + 0x18) = 0x20101011b;
          *(int *)((long)puVar7 + lVar9 + 0x20) = (int)lVar10;
          local_c0 = plVar13;
          FUN_0012858c(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
          lVar10 = param_1[2];
          lVar9 = param_1[3];
          plStack_a0 = &local_58;
          local_c8 = &local_b0;
          lStack_b8 = param_1[0x54] - param_1[0x53] >> 3;
          uStack_90 = 0;
          local_98 = 0;
          uStack_80 = 0;
          local_88 = 0;
          uStack_70 = 0;
          local_78 = 0;
          uStack_60 = 0;
          local_68 = 0;
          local_c0 = param_1;
          local_b0 = &local_98;
          local_a8 = &local_98;
          FUN_00122b30(param_1 + 0x53,&local_c8);
          while( true ) {
                    /* try { // try from 00128234 to 0012823f has its CatchHandler @ 00128414 */
            uVar8 = __strlen_chk(&DAT_00112e5c,2);
            pcVar1 = (char *)*param_1;
            pcVar4 = "E";
            pcVar5 = pcVar1;
            uVar6 = uVar8;
            if (uVar8 <= (ulong)(param_1[1] - (long)pcVar1)) {
              while( true ) {
                if (uVar6 == 0) {
                  lVar10 = (lVar9 - lVar10 >> 3) * 8;
                  *param_1 = (long)(pcVar1 + uVar8);
                  auVar16 = FUN_0012a5c8(param_1,param_1[2] + lVar10,param_1[3]);
                  pvVar15 = (void *)param_1[0x266];
                  param_1[3] = param_1[2] + lVar10;
                  lVar10 = *(long *)((long)pvVar15 + 8);
                  puVar7 = (undefined8 *)pvVar15;
                  if (0xfef < lVar10 + 0x30U) {
                    puVar7 = (undefined8 *)malloc(0x1000);
                    if (puVar7 == (undefined8 *)0x0) goto LAB_00128408;
                    lVar10 = 0;
                    *puVar7 = pvVar15;
                    puVar7[1] = 0;
                    param_1[0x266] = (long)puVar7;
                  }
                  *(long *)((long)puVar7 + 8) = lVar10 + 0x30;
                  puVar14 = (undefined8 *)((long)puVar7 + lVar10 + 0x10);
                  *puVar14 = &PTR_FUN_0013e238;
                  *(undefined4 *)((long)puVar7 + lVar10 + 0x18) = 0x101001e;
                  *(long **)((long)puVar7 + lVar10 + 0x20) = plVar13;
                  *(undefined1 (*) [16])((long)puVar7 + lVar10 + 0x28) = auVar16;
                  goto LAB_0012832c;
                }
                if (*pcVar4 != *pcVar5) break;
                pcVar4 = pcVar4 + 1;
                pcVar5 = pcVar5 + 1;
                uVar6 = uVar6 - 1;
              }
            }
                    /* try { // try from 00128250 to 00128257 has its CatchHandler @ 00128410 */
            local_c8 = (undefined8 **)FUN_00127eec(param_1);
            if (local_c8 == (undefined8 **)0x0) break;
            FUN_0012115c(param_1 + 2,&local_c8);
          }
          puVar14 = (undefined8 *)0x0;
LAB_0012832c:
          local_c0[0x54] = local_c0[0x53] + lStack_b8 * 8;
          if (local_b0 != &local_98) {
            free(local_b0);
          }
          goto LAB_001283cc;
        }
        if ((*pcVar1 == 'T') && (pcVar1[1] == 'p')) {
          *param_1 = (long)(pcVar1 + 2);
          plVar13 = (long *)FUN_00127eec(param_1);
          if (plVar13 != (long *)0x0) {
            puVar14 = (undefined8 *)param_1[0x266];
            lVar10 = puVar14[1];
            puVar7 = puVar14;
            if (0xfef < lVar10 + 0x20U) {
              puVar7 = (undefined8 *)malloc(0x1000);
              if (puVar7 == (undefined8 *)0x0) goto LAB_00128408;
              lVar10 = 0;
              *puVar7 = puVar14;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            lVar9 = (long)puVar7 + lVar10;
            uVar12 = 0x1f;
            ppuVar11 = &PTR_FUN_0013e2a8;
            goto LAB_00128008;
          }
        }
      }
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_001283cc:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar14;
}


// ===== 00128440  FUN_00128440 =====

void FUN_00128440(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 8;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00128580;
    lVar5 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar5) = 0x64656d616e6e7527;
  lVar5 = param_2[1] + 8;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00128580;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_00128580:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x27;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00128584  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012858c  FUN_0012858c =====

void FUN_0012858c(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 *__src;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar1 - (long)__src;
    if (__src == param_1 + 3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) goto LAB_0012864c;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
LAB_0012864c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    param_1[1] = puVar1;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar2 = *param_2;
  param_1[1] = puVar1 + 1;
  *puVar1 = uVar2;
  return;
}


// ===== 00128650  FUN_00128650 =====

void FUN_00128650(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  size_t __size;
  long lVar11;
  byte local_3c [4];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 2) {
    lVar6 = param_2[1];
    uVar7 = lVar6 + 3;
    if (uVar7 < (ulong)param_2[2]) {
      pvVar5 = (void *)*param_2;
    }
    else {
      uVar9 = param_2[2] << 1;
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      param_2[2] = uVar7;
      pvVar5 = realloc((void *)*param_2,uVar7);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_001288cc;
      lVar6 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar5 + lVar6) + 1) = 0x54;
    *(undefined2 *)((long)pvVar5 + lVar6) = 0x5424;
    lVar6 = 3;
LAB_00128794:
    param_2[1] = param_2[1] + lVar6;
  }
  else {
    if (iVar2 == 1) {
      lVar6 = param_2[1];
      uVar7 = lVar6 + 2;
      if (uVar7 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
        uVar10 = 0x4e24;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (uVar7 <= uVar9) {
          uVar7 = uVar9;
        }
        param_2[2] = uVar7;
        pvVar5 = realloc((void *)*param_2,uVar7);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001288cc;
        lVar6 = param_2[1];
        uVar10 = 0x4e24;
      }
LAB_0012874c:
      *(undefined2 *)((long)pvVar5 + lVar6) = uVar10;
      lVar6 = 2;
      goto LAB_00128794;
    }
    if (iVar2 == 0) {
      lVar6 = param_2[1];
      uVar7 = lVar6 + 2;
      if (uVar7 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (uVar7 <= uVar9) {
          uVar7 = uVar9;
        }
        param_2[2] = uVar7;
        pvVar5 = realloc((void *)*param_2,uVar7);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001288cc;
        lVar6 = param_2[1];
      }
      uVar10 = 0x5424;
      goto LAB_0012874c;
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = *(int *)(param_1 + 0x10) - 1;
    if (uVar3 == 0) {
      lVar6 = param_2[1];
      uVar7 = lVar6 + 1;
      if (uVar7 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (uVar7 <= uVar9) {
          uVar7 = uVar9;
        }
        param_2[2] = uVar7;
        pvVar5 = realloc((void *)*param_2,uVar7);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) {
LAB_001288cc:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = param_2[1];
        uVar7 = lVar6 + 1;
      }
      param_2[1] = uVar7;
      *(undefined1 *)((long)pvVar5 + lVar6) = 0x30;
    }
    else {
      uVar7 = (ulong)uVar3;
      lVar6 = 0;
      do {
        lVar11 = lVar6;
        local_3c[lVar11] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        lVar6 = lVar11 + -1;
        bVar1 = 9 < uVar7;
        uVar7 = uVar7 / 10;
      } while (bVar1);
      if (lVar6 != 0) {
        lVar8 = param_2[1];
        __size = lVar8 - lVar6;
        if (__size < (ulong)param_2[2]) {
          pvVar5 = (void *)*param_2;
        }
        else {
          uVar7 = param_2[2] << 1;
          if (__size <= uVar7) {
            __size = uVar7;
          }
          param_2[2] = __size;
          pvVar5 = realloc((void *)*param_2,__size);
          *param_2 = pvVar5;
          if (pvVar5 == (void *)0x0) goto LAB_001288cc;
          lVar8 = param_2[1];
        }
        memmove((void *)((long)pvVar5 + lVar8),local_3c + lVar11,-lVar6);
        param_2[1] = param_2[1] - lVar6;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001288d4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001288dc  FUN_001288dc =====

void FUN_001288dc(undefined8 param_1,undefined8 *param_2)

{
  ulong __size;
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  __size = lVar4 + 9;
  if (__size < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar2 = realloc((void *)*param_2,__size);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  uVar1 = s_typename_00112476._0_8_;
  ((char *)((long)pvVar2 + lVar4))[8] = ' ';
  *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
  param_2[1] = param_2[1] + 9;
  return;
}


// ===== 00128968  FUN_00128968 =====

void FUN_00128968(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001289c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001289cc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001289d4  FUN_001289d4 =====

void FUN_001289d4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if ((*(char *)((long)puVar1 + 9) != '\0') &&
     ((*(char *)((long)puVar1 + 9) != '\x02' ||
      (uVar2 = (**(code **)*puVar1)(puVar1,param_2), (uVar2 & 1) == 0)))) {
    lVar5 = param_2[1];
    uVar2 = lVar5 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar5) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  return;
}


// ===== 00128a88  FUN_00128a88 =====

void FUN_00128a88(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00128af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 00128afc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00128b04  FUN_00128b04 =====

void FUN_00128b04(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = param_2[1];
  uVar1 = lVar6 + 9;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar4 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_00128c04;
    lVar6 = param_2[1];
  }
  uVar3 = s_template<_0011282c._0_8_;
  ((char *)((long)pvVar4 + lVar6))[8] = '<';
  *(undefined8 *)((long)pvVar4 + lVar6) = uVar3;
  param_2[1] = param_2[1] + 9;
  FUN_00128c74(param_1 + 0x18,param_2);
  lVar6 = param_2[1];
  uVar1 = lVar6 + 0xb;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar4 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_00128c04:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = param_2[1];
  }
  pcVar2 = (char *)((long)pvVar4 + lVar6);
  *(undefined8 *)pcVar2 = s_>_typename_00112525._0_8_;
  pcVar2[7] = 'a';
  pcVar2[8] = 'm';
  pcVar2[9] = 'e';
  pcVar2[10] = ' ';
  param_2[1] = param_2[1] + 0xb;
  return;
}


// ===== 00128c08  FUN_00128c08 =====

void FUN_00128c08(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00128c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 00128c6c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00128c74  FUN_00128c74 =====

void FUN_00128c74(long *param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  
  if (param_1[1] != 0) {
    lVar7 = param_2[1];
    lVar5 = 0;
    bVar6 = true;
    do {
      lVar2 = lVar7;
      if (!bVar6) {
        __size = lVar7 + 2;
        if (__size < (ulong)param_2[2]) {
          pvVar1 = (void *)*param_2;
        }
        else {
          uVar3 = param_2[2] << 1;
          if (__size <= uVar3) {
            __size = uVar3;
          }
          param_2[2] = __size;
          pvVar1 = realloc((void *)*param_2,__size);
          *param_2 = pvVar1;
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar2 = param_2[1];
        }
        *(undefined2 *)((long)pvVar1 + lVar2) = 0x202c;
        lVar2 = param_2[1] + 2;
        param_2[1] = lVar2;
      }
      plVar4 = *(long **)(*param_1 + lVar5 * 8);
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      if (*(char *)((long)plVar4 + 9) != '\x01') {
        (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      }
      if (lVar2 == param_2[1]) {
        param_2[1] = lVar7;
      }
      else {
        bVar6 = false;
        lVar7 = param_2[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_1[1]);
  }
  return;
}


// ===== 00128d94  FUN_00128d94 =====

void FUN_00128d94(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar3 = param_2[1];
  __size = lVar3 + 3;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar3) + 1) = 0x2e;
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x2e2e;
  param_2[1] = param_2[1] + 3;
  return;
}


// ===== 00128e28  FUN_00128e28 =====

void FUN_00128e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00128e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 00128e3c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00128e44  FUN_00128e44 =====

void FUN_00128e44(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 7;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00128f94;
    lVar5 = param_2[1];
  }
  *(undefined4 *)((long)pvVar2 + lVar5 + 3) = 0x6164626d;
  *(undefined4 *)((long)pvVar2 + lVar5) = 0x6d616c27;
  lVar5 = param_2[1] + 7;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x30);
  __n = *(long *)(param_1 + 0x38) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00128f94;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_00128f94:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x27;
  param_2[1] = param_2[1] + 1;
  FUN_00128fa0(param_1,param_2);
  return;
}


// ===== 00128f98  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00128fa0  FUN_00128fa0 =====

void FUN_00128fa0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = lVar3 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012912c;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x3c;
    param_2[1] = param_2[1] + 1;
    FUN_00128c74(param_1 + 0x10,param_2);
    lVar3 = param_2[1];
    uVar1 = lVar3 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012912c;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x3e;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
  }
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012912c;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_00128c74(param_1 + 0x20,param_2);
  lVar3 = param_2[1];
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0012912c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00129130  FUN_00129130 =====

void FUN_00129130(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar1 = lVar3 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00129224;
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
  lVar3 = param_2[1] + 2;
  param_2[1] = lVar3;
  if (*(char *)(*(long *)(param_1 + 0x10) + 8) == '-') {
    FUN_00128fa0(*(long *)(param_1 + 0x10),param_2);
    lVar3 = param_2[1];
  }
  uVar1 = lVar3 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_00129224:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x7d;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x2e2e2e7b;
  param_2[1] = param_2[1] + 5;
  return;
}


// ===== 00129228  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00129230  FUN_00129230 =====

void FUN_00129230(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012939c;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012939c;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x29;
  lVar5 = param_2[1] + 1;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_0012939c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001293a0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001293a8  FUN_001293a8 =====

void FUN_001293a8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012948c;
    lVar5 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar5) = 0x7066;
  lVar5 = param_2[1] + 2;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_0012948c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 00129490  FUN_00129490 =====

void FUN_00129490(void)

{
  return;
}


// ===== 00129498  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001294a0  FUN_001294a0 =====

void FUN_001294a0(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  undefined **local_60;
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar8 = param_2 + 1;
  uVar5 = *puVar8;
  uVar6 = uVar5 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    param_2[2] = uVar6;
    pvVar3 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
    uVar5 = *puVar8;
    uVar6 = uVar5 + 1;
  }
  *puVar8 = uVar6;
  *(undefined1 *)((long)pvVar3 + uVar5) = 0x28;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x28;
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_58 = 0x1010122;
    local_60 = &PTR_FUN_0013e548;
    FUN_00129c08(&local_60,param_2);
    if (local_58._1_1_ != '\x01') {
      (*(code *)local_60[5])(&local_60,param_2);
    }
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x29;
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    *puVar8 = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x20;
    pvVar3 = *(void **)(param_1 + 0x20);
    uVar6 = *puVar8;
    sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
    if (sVar1 != 0) {
      uVar5 = uVar6 + sVar1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar4 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_00129bf8;
        uVar6 = *puVar8;
      }
      memmove((void *)((long)pvVar4 + uVar6),pvVar3,sVar1);
      uVar6 = *puVar8 + sVar1;
      *puVar8 = uVar6;
    }
    uVar5 = uVar6 + 4;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
      uVar6 = *puVar8;
    }
    *(undefined4 *)((long)pvVar3 + uVar6) = 0x2e2e2e20;
    uVar5 = *puVar8;
    uVar6 = uVar5 + 4;
    *puVar8 = uVar6;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar5 = uVar5 + 5;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar3 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
        uVar6 = *puVar8;
        uVar5 = uVar6 + 1;
      }
      *puVar8 = uVar5;
      *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
      pvVar3 = *(void **)(param_1 + 0x20);
      uVar6 = *puVar8;
      sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
      if (sVar1 != 0) {
        uVar5 = uVar6 + sVar1;
        if (uVar5 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar6 = param_2[2] << 1;
          if (uVar5 <= uVar6) {
            uVar5 = uVar6;
          }
          param_2[2] = uVar5;
          pvVar4 = realloc((void *)*param_2,uVar5);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_00129bf8;
          uVar6 = *puVar8;
        }
        memmove((void *)((long)pvVar4 + uVar6),pvVar3,sVar1);
        uVar6 = *puVar8 + sVar1;
        *puVar8 = uVar6;
      }
      uVar5 = uVar6 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar3 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
        uVar6 = *puVar8;
        uVar5 = uVar6 + 1;
      }
      param_2[1] = uVar5;
      *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
      plVar7 = *(long **)(param_1 + 0x18);
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if (*(char *)((long)plVar7 + 9) != '\x01') {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if (*(char *)((long)plVar7 + 9) != '\x01') {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      uVar5 = param_2[1];
      uVar6 = uVar5 + 1;
      if (uVar6 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        param_2[2] = uVar6;
        pvVar3 = realloc((void *)*param_2,uVar6);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
        uVar5 = *puVar8;
        uVar6 = uVar5 + 1;
      }
      *puVar8 = uVar6;
      *(undefined1 *)((long)pvVar3 + uVar5) = 0x20;
      pvVar3 = *(void **)(param_1 + 0x20);
      uVar6 = *puVar8;
      sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
      if (sVar1 != 0) {
        uVar5 = uVar6 + sVar1;
        if (uVar5 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar6 = param_2[2] << 1;
          if (uVar5 <= uVar6) {
            uVar5 = uVar6;
          }
          param_2[2] = uVar5;
          pvVar4 = realloc((void *)*param_2,uVar5);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_00129bf8;
          uVar6 = *puVar8;
        }
        memmove((void *)((long)pvVar4 + uVar6),pvVar3,sVar1);
        uVar6 = *puVar8 + sVar1;
        *puVar8 = uVar6;
      }
      uVar5 = uVar6 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar3 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
        uVar6 = *puVar8;
        uVar5 = uVar6 + 1;
      }
      *puVar8 = uVar5;
      *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
    }
    uVar5 = param_2[1];
    uVar6 = uVar5 + 4;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
      uVar5 = *puVar8;
    }
    *(undefined4 *)((long)pvVar3 + uVar5) = 0x202e2e2e;
    uVar6 = *puVar8 + 4;
    *puVar8 = uVar6;
    pvVar3 = *(void **)(param_1 + 0x20);
    sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
    if (sVar1 != 0) {
      uVar5 = uVar6 + sVar1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar4 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_00129bf8;
        uVar6 = *puVar8;
      }
      memmove((void *)((long)pvVar4 + uVar6),pvVar3,sVar1);
      uVar6 = *puVar8 + sVar1;
      *puVar8 = uVar6;
    }
    uVar5 = uVar6 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
      uVar6 = *puVar8;
      uVar5 = uVar6 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x28;
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_58 = 0x1010122;
    local_60 = &PTR_FUN_0013e548;
    FUN_00129c08(&local_60,param_2);
    if (local_58._1_1_ != '\x01') {
      (*(code *)local_60[5])(&local_60,param_2);
    }
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00129bf8;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    *puVar8 = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x29;
  }
  uVar5 = param_2[1];
  uVar6 = uVar5 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    param_2[2] = uVar6;
    pvVar3 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_00129bf8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    uVar5 = *puVar8;
    uVar6 = uVar5 + 1;
  }
  *puVar8 = uVar6;
  *(undefined1 *)((long)pvVar3 + uVar5) = 0x29;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129c00  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00129c08  FUN_00129c08 =====

void FUN_00129c08(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[3] = 0xffffffffffffffff;
  plVar9 = *(long **)(param_1 + 0x10);
  uVar10 = param_2[1];
                    /* try { // try from 00129c48 to 00129c97 has its CatchHandler @ 00129df0 */
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (*(char *)((long)plVar9 + 9) != '\x01') {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  uVar4 = *(uint *)((long)param_2 + 0x1c);
  if (uVar4 == 0xffffffff) {
    sVar5 = __strlen_chk(&DAT_001129d2,4);
    if (sVar5 != 0) {
      lVar8 = param_2[1];
      uVar1 = lVar8 + sVar5;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar6 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar1 <= uVar7) {
          uVar1 = uVar7;
        }
        param_2[2] = uVar1;
        pvVar6 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar6;
        if (pvVar6 == (void *)0x0) {
LAB_00129dec:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar8 = param_2[1];
      }
      memcpy((void *)((long)pvVar6 + lVar8),&DAT_001129d2,sVar5);
      param_2[1] = param_2[1] + sVar5;
    }
  }
  else if (uVar4 == 0) {
    param_2[1] = uVar10;
  }
  else if (1 < uVar4) {
    uVar11 = 1;
    do {
                    /* try { // try from 00129cdc to 00129ce7 has its CatchHandler @ 00129df4 */
      sVar5 = __strlen_chk(&DAT_00112d65,3);
      if (sVar5 != 0) {
        lVar8 = param_2[1];
        uVar1 = lVar8 + sVar5;
        if (uVar1 < (ulong)param_2[2]) {
          pvVar6 = (void *)*param_2;
        }
        else {
          uVar7 = param_2[2] << 1;
          if (uVar1 <= uVar7) {
            uVar1 = uVar7;
          }
          param_2[2] = uVar1;
          pvVar6 = realloc((void *)*param_2,uVar1);
          *param_2 = pvVar6;
          if (pvVar6 == (void *)0x0) goto LAB_00129dec;
          lVar8 = param_2[1];
        }
        memcpy((void *)((long)pvVar6 + lVar8),&DAT_00112d65,sVar5);
        param_2[1] = param_2[1] + sVar5;
      }
      *(uint *)(param_2 + 3) = uVar11;
      plVar9 = *(long **)(param_1 + 0x10);
                    /* try { // try from 00129d58 to 00129d83 has its CatchHandler @ 00129df4 */
      (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
      if (*(char *)((long)plVar9 + 9) != '\x01') {
        (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
  }
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  return;
}


// ===== 00129dfc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00129e04  FUN_00129e04 =====

void FUN_00129e04(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  size_t __n;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  pcVar2 = *(char **)(param_1 + 0x20);
  if ((long)pcVar2 - (long)pcVar7 == 1) {
    if (pcVar7 != pcVar2) {
      pcVar9 = ">";
      do {
        if (*pcVar7 != *pcVar9) goto LAB_00129eb0;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      } while (pcVar2 != pcVar7);
    }
    lVar6 = param_2[1];
    uVar1 = lVar6 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012a168;
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
LAB_00129eb0:
  lVar6 = param_2[1];
  uVar1 = lVar6 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012a168;
    lVar6 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar10 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
  if (*(char *)((long)plVar10 + 9) != '\x01') {
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2);
  }
  lVar6 = param_2[1];
  uVar1 = lVar6 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012a168;
    lVar6 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x2029;
  lVar6 = param_2[1] + 2;
  param_2[1] = lVar6;
  pvVar3 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar6 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0012a168;
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar3,__n);
    lVar6 = param_2[1] + __n;
    param_2[1] = lVar6;
  }
  uVar1 = lVar6 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012a168;
    lVar6 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x2820;
  param_2[1] = param_2[1] + 2;
  plVar10 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
  if (*(char *)((long)plVar10 + 9) != '\x01') {
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2);
  }
  lVar6 = param_2[1];
  uVar1 = lVar6 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012a168;
    lVar6 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
  lVar8 = param_2[1];
  lVar6 = lVar8 + 1;
  param_2[1] = lVar6;
  pcVar7 = *(char **)(param_1 + 0x18);
  pcVar2 = *(char **)(param_1 + 0x20);
  if ((long)pcVar2 - (long)pcVar7 == 1) {
    if (pcVar7 != pcVar2) {
      pcVar9 = ">";
      do {
        if (*pcVar7 != *pcVar9) {
          return;
        }
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      } while (pcVar2 != pcVar7);
    }
    uVar1 = lVar8 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_0012a168:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  return;
}


// ===== 0012a16c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012a174  FUN_0012a174 =====

void FUN_0012a174(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  pvVar3 = *(void **)(param_1 + 0x10);
  lVar4 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar4 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012a2e4;
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),pvVar3,__n);
    lVar4 = param_2[1] + __n;
    param_2[1] = lVar4;
  }
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012a2e4;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_0012a2e4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012a2e8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012a2f0  FUN_0012a2f0 =====

void FUN_0012a2f0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x10);
  lVar4 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar4 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012a4a0;
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),pvVar3,__n);
    lVar4 = param_2[1] + __n;
    param_2[1] = lVar4;
  }
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012a4a0;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3c;
  param_2[1] = param_2[1] + 1;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012a4a0;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar4) = 0x283e;
  param_2[1] = param_2[1] + 2;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))(*(long **)(param_1 + 0x28),param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_0012a4a0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012a4a4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012a4ac  FUN_0012a4ac =====

void FUN_0012a4ac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012a5bc;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_00128c74(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0012a5bc:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012a5c0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012a5c8  FUN_0012a5c8 =====

undefined1  [16] FUN_0012a5c8(long param_1,void *param_2,long param_3)

{
  undefined8 *__dest;
  undefined8 *puVar1;
  long lVar2;
  size_t __n;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = *(undefined8 **)(param_1 + 0x1330);
  __n = param_3 - (long)param_2;
  uVar4 = (ulong)((int)__n + 0xf) & 0xfffffff0;
  lVar2 = puVar3[1];
  puVar1 = puVar3;
  if (0xfef < lVar2 + uVar4) {
    if (0xff0 < uVar4) {
      puVar1 = (undefined8 *)malloc(uVar4 + 0x10);
      if (puVar1 == (undefined8 *)0x0) {
LAB_0012a694:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __dest = puVar1 + 2;
      *puVar1 = *puVar3;
      puVar1[1] = 0;
      *puVar3 = puVar1;
      goto joined_r0x0012a660;
    }
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) goto LAB_0012a694;
    lVar2 = 0;
    *puVar1 = puVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  __dest = (undefined8 *)((long)puVar1 + lVar2 + 0x10);
  puVar1[1] = lVar2 + uVar4;
joined_r0x0012a660:
  if (__n != 0) {
    memmove(__dest,param_2,__n);
  }
  auVar5._8_8_ = (long)__n >> 3;
  auVar5._0_8_ = __dest;
  return auVar5;
}


// ===== 0012a698  FUN_0012a698 =====

void FUN_0012a698(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012a7fc;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012a7fc;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x2829;
  param_2[1] = param_2[1] + 2;
  FUN_00128c74(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0012a7fc:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012a800  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012a808  FUN_0012a808 =====

void FUN_0012a808(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar1 = lVar3 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012a994;
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3a3a;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  uVar1 = lVar3 + 6;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012a994;
    lVar3 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x6574;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x656c6564;
  lVar5 = param_2[1];
  lVar3 = lVar5 + 6;
  param_2[1] = lVar3;
  if (*(char *)(param_1 + 0x19) != '\0') {
    uVar1 = lVar5 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_0012a994:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    param_2[1] = param_2[1] + 3;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}


// ===== 0012a998  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012a9a0  FUN_0012a9a0 =====

long FUN_0012a9a0(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_0012a9f4:
    lVar3 = FUN_001216d0(param_1);
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_0012aa5c;
  }
  else {
    cVar1 = *(char *)*param_1;
    if (cVar1 == 'D') {
      lVar3 = FUN_00122284(param_1);
    }
    else {
      if (cVar1 != 'T') goto LAB_0012a9f4;
      lVar3 = FUN_00121edc(param_1);
    }
    local_40 = lVar3;
    if (lVar3 != 0) {
      FUN_0012115c(param_1 + 0x25,&local_40);
    }
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_0012aa5c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return lVar3;
}


// ===== 0012aa60  FUN_0012aa60 =====

undefined8 * FUN_0012aa60(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 == pbVar1) || (9 < *pbVar1 - 0x30)) {
    if (1 < (ulong)((long)pbVar2 - (long)pbVar1)) {
      bVar3 = *pbVar1;
      if (bVar3 == 100) {
        if (pbVar1[1] == 0x6e) {
          pbVar1 = pbVar1 + 2;
          *param_1 = (long)pbVar1;
          if ((pbVar2 == pbVar1) || (9 < *pbVar1 - 0x30)) {
            puVar4 = (undefined8 *)FUN_0012a9a0(param_1);
            if (puVar4 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
          }
          else {
            puVar5 = (undefined8 *)FUN_0012acd0(param_1);
            if (puVar5 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            puVar4 = puVar5;
            if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
              lVar6 = FUN_00121a6c(param_1,0);
              if (lVar6 == 0) {
                return (undefined8 *)0x0;
              }
              pvVar9 = (void *)param_1[0x266];
              lVar7 = *(long *)((long)pvVar9 + 8);
              puVar8 = (undefined8 *)pvVar9;
              if (0xfef < lVar7 + 0x20U) {
                puVar8 = (undefined8 *)malloc(0x1000);
                if (puVar8 == (undefined8 *)0x0) goto LAB_0012accc;
                lVar7 = 0;
                *puVar8 = pvVar9;
                puVar8[1] = 0;
                param_1[0x266] = (long)puVar8;
              }
              *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
              puVar4 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
              *puVar4 = &PTR_FUN_0013f3b8;
              *(undefined8 **)((long)puVar8 + lVar7 + 0x20) = puVar5;
              *(long *)((long)puVar8 + lVar7 + 0x28) = lVar6;
              *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010125;
            }
          }
          pvVar9 = (void *)param_1[0x266];
          lVar6 = *(long *)((long)pvVar9 + 8);
          puVar5 = (undefined8 *)pvVar9;
          if (lVar6 + 0x20U < 0xff0) {
LAB_0012ab14:
            *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
            puVar8 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
            *puVar8 = &PTR_FUN_0013e8c8;
            *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x101012b;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
            return puVar8;
          }
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 != (undefined8 *)0x0) {
            lVar6 = 0;
            *puVar5 = pvVar9;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
            goto LAB_0012ab14;
          }
          goto LAB_0012accc;
        }
        bVar3 = *pbVar1;
      }
      if ((bVar3 == 0x6f) && (pbVar1[1] == 0x6e)) {
        *param_1 = (long)(pbVar1 + 2);
      }
    }
    puVar4 = (undefined8 *)FUN_0012afec(param_1,0);
  }
  else {
    puVar4 = (undefined8 *)FUN_0012acd0(param_1);
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((char *)param_1[1] == (char *)*param_1) {
    return puVar4;
  }
  if (*(char *)*param_1 != 'I') {
    return puVar4;
  }
  lVar6 = FUN_00121a6c(param_1,0);
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar9 = (void *)param_1[0x266];
  lVar7 = *(long *)((long)pvVar9 + 8);
  puVar5 = (undefined8 *)pvVar9;
  if (0xfef < lVar7 + 0x20U) {
    puVar5 = (undefined8 *)malloc(0x1000);
    if (puVar5 == (undefined8 *)0x0) {
LAB_0012accc:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = 0;
    *puVar5 = pvVar9;
    puVar5[1] = 0;
    param_1[0x266] = (long)puVar5;
  }
  *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
  puVar8 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
  *puVar8 = &PTR_FUN_0013f3b8;
  *(undefined8 **)((long)puVar5 + lVar7 + 0x20) = puVar4;
  *(long *)((long)puVar5 + lVar7 + 0x28) = lVar6;
  *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010125;
  return puVar8;
}


// ===== 0012acd0  FUN_0012acd0 =====

undefined8 * FUN_0012acd0(long *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  
  pbVar6 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if ((pbVar1 != pbVar6) && (*pbVar6 - 0x30 < 10)) {
    uVar5 = 0;
    while (pbVar1 != pbVar6) {
      pbVar7 = pbVar6 + 1;
      *param_1 = (long)pbVar7;
      uVar5 = (uVar5 * 10 + (ulong)*pbVar6) - 0x30;
      if ((pbVar1 + -1 == pbVar6) || (pbVar6 = pbVar7, 9 < *pbVar7 - 0x30)) goto LAB_0012ad58;
    }
    uVar5 = uVar5 * 10 - 0x30;
    pbVar7 = pbVar6;
LAB_0012ad58:
    if (uVar5 - 1 < (ulong)((long)pbVar1 - (long)pbVar7)) {
      *param_1 = (long)(pbVar7 + uVar5);
      if ((((((9 < uVar5) && (*pbVar7 == 0x5f)) && (pbVar7[1] == 0x47)) &&
           ((pbVar7[2] == 0x4c && (pbVar7[3] == 0x4f)))) &&
          ((pbVar7[4] == 0x42 && ((pbVar7[5] == 0x41 && (pbVar7[6] == 0x4c)))))) &&
         ((pbVar7[7] == 0x5f && ((pbVar7[8] == 0x5f && (pbVar7[9] == 0x4e)))))) {
        pvVar8 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar8 + 8);
        puVar2 = (undefined8 *)pvVar8;
        if (0xfef < lVar4 + 0x20U) {
          puVar2 = (undefined8 *)malloc(0x1000);
          if (puVar2 == (undefined8 *)0x0) {
LAB_0012aecc:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar4 = 0;
          *puVar2 = pvVar8;
          puVar2[1] = 0;
          param_1[0x266] = (long)puVar2;
        }
        *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
        puVar3 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
        *puVar3 = &PTR_FUN_0013dc88;
        *(undefined4 *)((long)puVar2 + lVar4 + 0x18) = 0x1010107;
        *(char **)((long)puVar2 + lVar4 + 0x20) = "(anonymous namespace)";
        *(char **)((long)puVar2 + lVar4 + 0x28) = "";
        return puVar3;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar8 + 8);
      puVar2 = (undefined8 *)pvVar8;
      if (0xfef < lVar4 + 0x20U) {
        puVar2 = (undefined8 *)malloc(0x1000);
        if (puVar2 == (undefined8 *)0x0) goto LAB_0012aecc;
        lVar4 = 0;
        *puVar2 = pvVar8;
        puVar2[1] = 0;
        param_1[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
      puVar3 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
      *puVar3 = &PTR_FUN_0013dc88;
      *(undefined4 *)((long)puVar2 + lVar4 + 0x18) = 0x1010107;
      *(byte **)((long)puVar2 + lVar4 + 0x20) = pbVar7;
      *(byte **)((long)puVar2 + lVar4 + 0x28) = pbVar7 + uVar5;
      return puVar3;
    }
  }
  return (undefined8 *)0x0;
}


// ===== 0012aed0  FUN_0012aed0 =====

void FUN_0012aed0(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar3 = param_2[1];
  __size = lVar3 + 2;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x3a3a;
  param_2[1] = param_2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012afc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0012afd0  FUN_0012afd0 =====

void FUN_0012afd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0012afe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0012afe4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012afec  FUN_0012afec =====

undefined8 * FUN_0012afec(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  void *pvVar12;
  undefined8 *puVar13;
  
  puVar1 = (undefined1 *)*param_1;
  uVar3 = param_1[1] - (long)puVar1;
  if ((undefined1 *)param_1[1] == puVar1) goto LAB_0012b808;
  puVar4 = (undefined8 *)0x0;
  switch(*puVar1) {
  case 0x61:
    if (uVar3 < 2) break;
    switch(puVar1[1]) {
    case 0x4e:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator&=";
      break;
    default:
      return (undefined8 *)0x0;
    case 0x53:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator=";
      goto LAB_0012c2f4;
    case 0x61:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator&&";
      break;
    case 100:
    case 0x6e:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator&";
LAB_0012c2f4:
      puVar4[1] = lVar6;
      puVar4 = (undefined8 *)(lVar5 + 0x10);
      *puVar4 = &PTR_FUN_0013dc88;
      pcVar9 = pcVar11 + 9;
      goto LAB_0012c504;
    }
LAB_0012c4f8:
    puVar4[1] = lVar6;
    puVar4 = (undefined8 *)(lVar5 + 0x10);
    *puVar4 = &PTR_FUN_0013dc88;
    pcVar9 = pcVar11 + 10;
LAB_0012c504:
    *(undefined4 *)(puVar4 + 1) = 0x1010107;
    puVar4[2] = pcVar11;
    puVar4[3] = pcVar9;
    return puVar4;
  default:
    goto code_r0x0012c510;
  case 99:
    if (uVar3 < 2) break;
    puVar4 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x6c:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator()";
      goto LAB_0012c4f8;
    case 0x6d:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator,";
      break;
    default:
      goto code_r0x0012c510;
    case 0x6f:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator~";
      break;
    case 0x76:
      cVar2 = *(char *)((long)param_1 + 0x309);
      lVar5 = param_1[0x61];
      *param_1 = (long)(puVar1 + 2);
      *(undefined1 *)(param_1 + 0x61) = 0;
      *(bool *)((long)param_1 + 0x309) = param_2 != (undefined1 *)0x0 || cVar2 != '\0';
                    /* try { // try from 0012bd10 to 0012bd17 has its CatchHandler @ 0012c53c */
      lVar6 = FUN_0011ec20(param_1);
      if (lVar6 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar12 + 8);
        puVar13 = (undefined8 *)pvVar12;
        if (0xfef < lVar7 + 0x20U) {
          puVar13 = (undefined8 *)malloc(0x1000);
          if (puVar13 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar7 = 0;
          *puVar13 = pvVar12;
          puVar13[1] = 0;
          param_1[0x266] = (long)puVar13;
        }
        *(long *)((long)puVar13 + 8) = lVar7 + 0x20;
        puVar4 = (undefined8 *)((long)puVar13 + lVar7 + 0x10);
        *puVar4 = &PTR_FUN_0013e938;
        *(undefined4 *)((long)puVar13 + lVar7 + 0x18) = 0x1010104;
        *(long *)((long)puVar13 + lVar7 + 0x20) = lVar6;
      }
      *(char *)((long)param_1 + 0x309) = cVar2;
      *(char *)(param_1 + 0x61) = (char)lVar5;
      goto code_r0x0012c510;
    }
    goto LAB_0012c2f4;
  case 100:
    if (uVar3 < 2) break;
    puVar4 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x56:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator/=";
      goto LAB_0012c4f8;
    default:
      goto code_r0x0012c510;
    case 0x61:
      pvVar12 = (void *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = *(long *)((long)pvVar12 + 8);
      puVar4 = (undefined8 *)pvVar12;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = pvVar12;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      pcVar11 = "operator delete[]";
      *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar4 = &PTR_FUN_0013dc88;
      pcVar9 = "";
      goto LAB_0012c504;
    case 0x65:
code_r0x0012b8d0:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) {
LAB_0012c538:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator*";
      break;
    case 0x6c:
      pvVar12 = (void *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = *(long *)((long)pvVar12 + 8);
      puVar4 = (undefined8 *)pvVar12;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = pvVar12;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      pcVar11 = "operator delete";
      *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar4 = &PTR_FUN_0013dc88;
      pcVar9 = "";
      goto LAB_0012c504;
    case 0x76:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator/";
    }
    goto LAB_0012c2f4;
  case 0x65:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'O') {
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator^=";
      }
      else {
        if (cVar2 != 'q') {
          if (cVar2 == 'o') {
            puVar13 = (undefined8 *)param_1[0x266];
            *param_1 = (long)(puVar1 + 2);
            lVar5 = puVar13[1];
            puVar4 = puVar13;
            if (0xfef < lVar5 + 0x20U) {
              puVar4 = (undefined8 *)malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
              lVar5 = 0;
              *puVar4 = puVar13;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            lVar6 = lVar5 + 0x20;
            lVar5 = (long)puVar4 + lVar5;
            pcVar11 = "operator^";
            goto LAB_0012c2f4;
          }
          break;
        }
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator==";
      }
      goto LAB_0012c4f8;
    }
    break;
  case 0x67:
    if (1 < uVar3) {
      if (puVar1[1] == 't') {
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator>";
        goto LAB_0012c2f4;
      }
      if (puVar1[1] == 'e') {
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator>=";
        goto LAB_0012c4f8;
      }
    }
    break;
  case 0x69:
    if ((1 < uVar3) && (puVar1[1] == 'x')) {
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator[]";
      goto LAB_0012c4f8;
    }
    break;
  case 0x6c:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x53:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator<<=";
        goto LAB_0012c42c;
      default:
        goto code_r0x0012c510;
      case 0x65:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator<=";
        break;
      case 0x69:
        *param_1 = (long)(puVar1 + 2);
        lVar5 = FUN_0012acd0(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        puVar13 = (undefined8 *)param_1[0x266];
        lVar6 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar6 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar6 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar7 = (long)puVar4 + lVar6;
        uVar10 = 0x113;
        ppuVar8 = &PTR_FUN_0013e9a8;
        goto LAB_0012c0a0;
      case 0x73:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator<<";
        break;
      case 0x74:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator<";
        goto LAB_0012c2f4;
      }
      goto LAB_0012c4f8;
    }
    break;
  case 0x6d:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x49:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator-=";
        break;
      default:
        goto code_r0x0012c510;
      case 0x4c:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator*=";
        break;
      case 0x69:
code_r0x0012b930:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator-";
        goto LAB_0012c2f4;
      case 0x6c:
        goto code_r0x0012b8d0;
      case 0x6d:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator--";
      }
      goto LAB_0012c4f8;
    }
    break;
  case 0x6e:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x61:
        pvVar12 = (void *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = *(long *)((long)pvVar12 + 8);
        puVar4 = (undefined8 *)pvVar12;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = pvVar12;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        pcVar11 = "operator new[]";
        *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
        puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar4 = &PTR_FUN_0013dc88;
        pcVar9 = "";
        break;
      default:
        goto code_r0x0012c510;
      case 0x65:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator!=";
        goto LAB_0012c4f8;
      case 0x67:
        goto code_r0x0012b930;
      case 0x74:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator!";
        goto LAB_0012c2f4;
      case 0x77:
        pvVar12 = (void *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = *(long *)((long)pvVar12 + 8);
        puVar4 = (undefined8 *)pvVar12;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = pvVar12;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        pcVar11 = "operator new";
        *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
        puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar4 = &PTR_FUN_0013dc88;
        pcVar9 = "";
      }
      goto LAB_0012c504;
    }
    break;
  case 0x6f:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'R') {
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator|=";
      }
      else {
        if (cVar2 == 'r') {
          puVar13 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(puVar1 + 2);
          lVar5 = puVar13[1];
          puVar4 = puVar13;
          if (0xfef < lVar5 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
            lVar5 = 0;
            *puVar4 = puVar13;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          lVar6 = lVar5 + 0x20;
          lVar5 = (long)puVar4 + lVar5;
          pcVar11 = "operator|";
          goto LAB_0012c2f4;
        }
        if (cVar2 != 'o') break;
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator||";
      }
      goto LAB_0012c4f8;
    }
    break;
  case 0x70:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4c:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator+=";
        break;
      default:
        goto code_r0x0012c510;
      case 0x6c:
      case 0x73:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator+";
        goto LAB_0012c2f4;
      case 0x6d:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator->*";
        goto LAB_0012c42c;
      case 0x70:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator++";
        break;
      case 0x74:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator->";
      }
      goto LAB_0012c4f8;
    }
    break;
  case 0x71:
    if ((1 < uVar3) && (puVar1[1] == 'u')) {
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator?";
      goto LAB_0012c2f4;
    }
    break;
  case 0x72:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4d:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator%=";
        break;
      default:
        goto code_r0x0012c510;
      case 0x53:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator>>=";
        goto LAB_0012c42c;
      case 0x6d:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator%";
        goto LAB_0012c2f4;
      case 0x73:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator>>";
      }
      goto LAB_0012c4f8;
    }
    break;
  case 0x73:
    if ((1 < uVar3) && (puVar1[1] == 's')) {
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator<=>";
LAB_0012c42c:
      puVar4[1] = lVar6;
      puVar4 = (undefined8 *)(lVar5 + 0x10);
      *puVar4 = &PTR_FUN_0013dc88;
      pcVar9 = pcVar11 + 0xb;
      goto LAB_0012c504;
    }
    break;
  case 0x76:
    if ((1 < uVar3) && ((byte)puVar1[1] - 0x30 < 10)) {
      *param_1 = (long)(puVar1 + 2);
      lVar5 = FUN_0012acd0(param_1);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      puVar13 = (undefined8 *)param_1[0x266];
      lVar6 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar6 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0012c538;
        lVar6 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = (long)puVar4 + lVar6;
      uVar10 = 0x104;
      ppuVar8 = &PTR_FUN_0013e938;
LAB_0012c0a0:
      puVar4[1] = lVar6 + 0x20;
      *(undefined8 *)(lVar7 + 0x10) = ppuVar8;
      *(uint *)(lVar7 + 0x18) = uVar10 | 0x1010000;
      *(long *)(lVar7 + 0x20) = lVar5;
      return (undefined8 *)(lVar7 + 0x10);
    }
  }
LAB_0012b808:
  puVar4 = (undefined8 *)0x0;
code_r0x0012c510:
  return puVar4;
}


// ===== 0012c548  FUN_0012c548 =====

void FUN_0012c548(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_2[1];
  __size = lVar3 + 1;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x7e;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x0012c5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 0012c5d4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012c5dc  FUN_0012c5dc =====

void FUN_0012c5dc(long param_1,undefined8 *param_2)

{
  ulong __size;
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  __size = lVar4 + 9;
  if (__size < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar2 = realloc((void *)*param_2,__size);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  uVar1 = s_operator_00112dba._0_8_;
  ((char *)((long)pvVar2 + lVar4))[8] = ' ';
  *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
  param_2[1] = param_2[1] + 9;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012c6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 0012c6b0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012c6b8  FUN_0012c6b8 =====

void FUN_0012c6b8(long param_1,undefined8 *param_2)

{
  ulong __size;
  char *pcVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  __size = lVar4 + 0xb;
  if (__size < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar2 = realloc((void *)*param_2,__size);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  pcVar1 = (char *)((long)pvVar2 + lVar4);
  *(undefined8 *)pcVar1 = s_operator___00111e15._0_8_;
  pcVar1[7] = 'r';
  pcVar1[8] = '\"';
  pcVar1[9] = '\"';
  pcVar1[10] = ' ';
  param_2[1] = param_2[1] + 0xb;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012c788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 0012c790  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012c798  FUN_0012c798 =====

void FUN_0012c798(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2[1];
  __size = lVar3 + 2;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x3a3a;
  param_2[1] = param_2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0012c858  FUN_0012c858 =====

void FUN_0012c858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0012c868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0012c86c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012c874  FUN_0012c874 =====

void FUN_0012c874(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  __src = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012c980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0012c988  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012c990  FUN_0012c990 =====

void FUN_0012c990(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012cb20;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012cb20;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x5b29;
  param_2[1] = param_2[1] + 2;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0012cb20:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012cb24  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012cb2c  FUN_0012cb2c =====

void FUN_0012cb2c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = lVar3 + 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (uVar2 <= uVar4) {
      if (uVar4 <= uVar2 << 1) {
        uVar4 = uVar2 << 1;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0012cd68;
      lVar3 = param_2[1];
      uVar4 = lVar3 + 1;
    }
    else {
      pvVar1 = (void *)*param_2;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar3) = 0x2e;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if (*(char *)((long)plVar5 + 9) != '\x01') {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
  }
  else {
    if (uVar2 <= uVar4) {
      if (uVar4 <= uVar2 << 1) {
        uVar4 = uVar2 << 1;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0012cd68;
      lVar3 = param_2[1];
      uVar4 = lVar3 + 1;
    }
    else {
      pvVar1 = (void *)*param_2;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar3) = 0x5b;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if (*(char *)((long)plVar5 + 9) != '\x01') {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
    if (uVar4 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0012cd68;
      lVar3 = param_2[1];
      uVar4 = lVar3 + 1;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar3) = 0x5d;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (1 < *(byte *)(plVar5 + 1) - 0x49) {
    lVar3 = param_2[1];
    uVar4 = lVar3 + 3;
    if (uVar4 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
LAB_0012cd68:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar3) = 0x3d20;
    param_2[1] = param_2[1] + 3;
    plVar5 = *(long **)(param_1 + 0x18);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012cd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 0012cd6c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012cd74  FUN_0012cd74 =====

void FUN_0012cd74(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0012cfc4;
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5b;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  uVar4 = lVar3 + 5;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0012cfc4;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x20;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x2e2e2e20;
  param_2[1] = param_2[1] + 5;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0012cfc4;
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5d;
  plVar5 = *(long **)(param_1 + 0x20);
  if (1 < *(byte *)(plVar5 + 1) - 0x49) {
    lVar3 = param_2[1];
    uVar4 = lVar3 + 3;
    if (uVar4 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
LAB_0012cfc4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar3) = 0x3d20;
    param_2[1] = param_2[1] + 3;
    plVar5 = *(long **)(param_1 + 0x20);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012cfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 0012cfc8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012cfd0  FUN_0012cfd0 =====

void FUN_0012cfd0(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), *(char *)((long)plVar5 + 9) != '\x01')) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0012d0e0;
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x7b;
  FUN_00128c74(param_1 + 0x18,param_2);
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_0012d0e0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x7d;
  return;
}


// ===== 0012d0e4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012d0ec  FUN_0012d0ec =====

void FUN_0012d0ec(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012d258;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012d258;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x29;
  lVar5 = param_2[1] + 1;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_0012d258:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 0012d25c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012d264  FUN_0012d264 =====

void FUN_0012d264(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar6 = lVar3 + 0xb;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012d5a8;
      lVar3 = param_2[1];
    }
    pcVar1 = (char *)((long)pvVar2 + lVar3);
    *(undefined8 *)pcVar1 = s___operator_00112cd7._0_8_;
    pcVar1[7] = 't';
    pcVar1[8] = 'o';
    pcVar1[9] = 'r';
    pcVar1[10] = ' ';
    lVar3 = param_2[1] + 0xb;
    param_2[1] = lVar3;
  }
  uVar6 = lVar3 + 3;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012d5a8;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x77;
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x656e;
  lVar5 = param_2[1];
  lVar3 = lVar5 + 3;
  param_2[1] = lVar3;
  if (*(char *)(param_1 + 0x39) != '\0') {
    uVar6 = lVar5 + 5;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012d5a8;
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  uVar6 = lVar3 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012d5a8;
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012d5a8;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    param_2[1] = param_2[1] + 1;
    FUN_00128c74(param_1 + 0x10,param_2);
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012d5a8;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 9) != '\x01') {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012d5a8;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    param_2[1] = param_2[1] + 1;
    FUN_00128c74(param_1 + 0x28,param_2);
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_0012d5a8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  return;
}


// ===== 0012d5ac  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012d5b4  FUN_0012d5b4 =====

void FUN_0012d5b4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  sVar3 = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (sVar3 != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + sVar3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0012d6e4;
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar2,sVar3);
    param_2[1] = param_2[1] + sVar3;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 9) != '\x01') {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  pvVar2 = *(void **)(param_1 + 0x28);
  sVar3 = *(long *)(param_1 + 0x30) - (long)pvVar2;
  if (sVar3 != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + sVar3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
LAB_0012d6e4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar2,sVar3);
    param_2[1] = param_2[1] + sVar3;
  }
  return;
}


// ===== 0012d6e8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012d6f0  FUN_0012d6f0 =====

void FUN_0012d6f0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012d928;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012d928;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x28;
  *(undefined4 *)((long)pvVar2 + lVar4) = 0x203f2029;
  param_2[1] = param_2[1] + 5;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012d928;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x28;
  *(undefined4 *)((long)pvVar2 + lVar4) = 0x203a2029;
  param_2[1] = param_2[1] + 5;
  plVar5 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0012d928:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012d92c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012d934  FUN_0012d934 =====

void FUN_0012d934(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  undefined **local_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar7 = param_2[1];
  uVar1 = lVar7 + 10;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar5 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar5 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_0012da68;
    lVar7 = param_2[1];
  }
  uVar4 = s_sizeof_____001122c6._0_8_;
  pcVar2 = (char *)((long)pvVar5 + lVar7);
  pcVar2[8] = '.';
  pcVar2[9] = '(';
  *(undefined8 *)pcVar2 = uVar4;
  param_2[1] = param_2[1] + 10;
  local_40 = *(undefined8 *)(param_1 + 0x10);
  local_48 = 0x1010122;
  local_50 = &PTR_FUN_0013e548;
  FUN_00129c08(&local_50,param_2);
  lVar7 = param_2[1];
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar5 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar5 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
LAB_0012da68:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar5 + lVar7) = 0x29;
  param_2[1] = param_2[1] + 1;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012da70  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012da78  FUN_0012da78 =====

void FUN_0012da78(long param_1)

{
  FUN_00128c74(param_1 + 0x10);
  return;
}


// ===== 0012da84  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012da8c  FUN_0012da8c =====

void FUN_0012da8c(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2[1];
  __size = lVar3 + 6;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x2077;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x6f726874;
  param_2[1] = param_2[1] + 6;
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012db54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0012db5c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012db64  FUN_0012db64 =====

void FUN_0012db64(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 9;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012dc78;
    lVar5 = param_2[1];
  }
  uVar2 = s___uuidof__00112eed._0_8_;
  ((char *)((long)pvVar3 + lVar5))[8] = '(';
  *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
  param_2[1] = param_2[1] + 9;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_0012dc78:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012dc7c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012dc84  FUN_0012dc84 =====

void FUN_0012dc84(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0xe;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
LAB_0012df60:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    uVar9 = CONCAT26(s_std__allocator_00112ef7._6_2_,s_std__allocator_00112ef7._0_6_);
    *(ulong *)((long)pvVar4 + lVar5 + 6) =
         CONCAT62(s_std__allocator_00112ef7._8_6_,s_std__allocator_00112ef7._6_2_);
    *(undefined8 *)((long)pvVar4 + lVar5) = uVar9;
    lVar5 = 0xe;
    break;
  case 1:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x11;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0012df60;
      lVar5 = param_2[1];
    }
    uVar10 = s_std__basic_string_00111e21._8_8_;
    uVar9 = s_std__basic_string_00111e21._0_8_;
    pcVar8 = (char *)((long)pvVar4 + lVar5);
    pcVar8[0x10] = 'g';
    *(undefined8 *)(pcVar8 + 8) = uVar10;
    *(undefined8 *)pcVar8 = uVar9;
    lVar5 = 0x11;
    break;
  case 2:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x46;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0012df60;
      lVar5 = param_2[1];
    }
    uVar3 = s_std__basic_string<char,_std::cha_0011202f._48_8_;
    uVar2 = s_std__basic_string<char,_std::cha_0011202f._40_8_;
    uVar14 = s_std__basic_string<char,_std::cha_0011202f._32_8_;
    uVar13 = s_std__basic_string<char,_std::cha_0011202f._24_8_;
    uVar12 = s_std__basic_string<char,_std::cha_0011202f._16_8_;
    uVar11 = s_std__basic_string<char,_std::cha_0011202f._8_8_;
    uVar10 = s_std__basic_string<char,_std::cha_0011202f._0_8_;
    uVar9 = CONCAT26(s_std__basic_string<char,_std::cha_0011202f._62_2_,
                     s_std__basic_string<char,_std::cha_0011202f._56_6_);
    pcVar8 = (char *)((long)pvVar4 + lVar5);
    *(ulong *)(pcVar8 + 0x3e) =
         CONCAT62(s_std__basic_string<char,_std::cha_0011202f._64_6_,
                  s_std__basic_string<char,_std::cha_0011202f._62_2_);
    *(undefined8 *)(pcVar8 + 0x28) = uVar2;
    *(undefined8 *)(pcVar8 + 0x20) = uVar14;
    *(undefined8 *)(pcVar8 + 0x38) = uVar9;
    *(undefined8 *)(pcVar8 + 0x30) = uVar3;
    *(undefined8 *)(pcVar8 + 8) = uVar11;
    *(undefined8 *)pcVar8 = uVar10;
    *(undefined8 *)(pcVar8 + 0x18) = uVar13;
    *(undefined8 *)(pcVar8 + 0x10) = uVar12;
    lVar5 = 0x46;
    break;
  case 3:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x31;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0012df60;
      lVar5 = param_2[1];
    }
    puVar6 = (undefined8 *)((long)pvVar4 + lVar5);
    pcVar8 = "std::basic_istream<char, std::char_traits<char> >";
    goto LAB_0012ded8;
  case 4:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x31;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0012df60;
      lVar5 = param_2[1];
    }
    puVar6 = (undefined8 *)((long)pvVar4 + lVar5);
    pcVar8 = "std::basic_ostream<char, std::char_traits<char> >";
LAB_0012ded8:
    uVar14 = *(undefined8 *)(pcVar8 + 0x18);
    uVar13 = *(undefined8 *)(pcVar8 + 0x10);
    uVar10 = *(undefined8 *)(pcVar8 + 0x28);
    uVar9 = *(undefined8 *)(pcVar8 + 0x20);
    uVar12 = *(undefined8 *)(pcVar8 + 8);
    uVar11 = *(undefined8 *)pcVar8;
    *(undefined1 *)(puVar6 + 6) = 0x3e;
    puVar6[3] = uVar14;
    puVar6[2] = uVar13;
    puVar6[5] = uVar10;
    puVar6[4] = uVar9;
    puVar6[1] = uVar12;
    *puVar6 = uVar11;
    lVar5 = 0x31;
    break;
  case 5:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x32;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0012df60;
      lVar5 = param_2[1];
    }
    uVar14 = s_std__basic_iostream<char,_std::c_00112b09._40_8_;
    uVar13 = s_std__basic_iostream<char,_std::c_00112b09._32_8_;
    uVar12 = s_std__basic_iostream<char,_std::c_00112b09._24_8_;
    uVar11 = s_std__basic_iostream<char,_std::c_00112b09._16_8_;
    uVar10 = s_std__basic_iostream<char,_std::c_00112b09._8_8_;
    uVar9 = s_std__basic_iostream<char,_std::c_00112b09._0_8_;
    pcVar8 = (char *)((long)pvVar4 + lVar5);
    pcVar8[0x30] = ' ';
    pcVar8[0x31] = '>';
    *(undefined8 *)(pcVar8 + 0x18) = uVar12;
    *(undefined8 *)(pcVar8 + 0x10) = uVar11;
    *(undefined8 *)(pcVar8 + 0x28) = uVar14;
    *(undefined8 *)(pcVar8 + 0x20) = uVar13;
    *(undefined8 *)(pcVar8 + 8) = uVar10;
    *(undefined8 *)pcVar8 = uVar9;
    lVar5 = 0x32;
    break;
  default:
    goto switchD_0012dcb8_default;
  }
  param_2[1] = param_2[1] + lVar5;
switchD_0012dcb8_default:
  return;
}


// ===== 0012df64  FUN_0012df64 =====

undefined1  [16] FUN_0012df64(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (&PTR_s__0013fc68)[*(int *)(param_1 + 0xc)];
  auVar1._0_8_ = (&PTR_s_allocator_0013fc98)[*(int *)(param_1 + 0xc)];
  return auVar1;
}


// ===== 0012df8c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012df94  FUN_0012df94 =====

void FUN_0012df94(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar4 = param_2[1];
    uVar1 = lVar4 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012e090;
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x7e;
    param_2[1] = param_2[1] + 1;
  }
  auVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  __n = auVar5._8_8_ - (long)auVar5._0_8_;
  if (__n != 0) {
    lVar4 = param_2[1];
    uVar1 = lVar4 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_0012e090:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),auVar5._0_8_,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 0012e094  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e09c  FUN_0012e09c =====

void FUN_0012e09c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar5 = param_2[1];
  uVar1 = lVar5 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012e1f0;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar5) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar2 + lVar5) = 0x6962615b;
  lVar5 = param_2[1] + 5;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012e1f0;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0012e1f0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012e1f4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e1fc  FUN_0012e1fc =====

void FUN_0012e1fc(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0012e2c8;
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5b;
  FUN_00128c74(param_1 + 0x10,param_2);
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_0012e2c8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5d;
  return;
}


// ===== 0012e2cc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e2d4  FUN_0012e2d4 =====

void FUN_0012e2d4(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar3 = param_2[1];
  __size = lVar3 + 2;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x3a3a;
  param_2[1] = param_2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012e3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0012e3d4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e3dc  FUN_0012e3dc =====

void FUN_0012e3dc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xe;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_0012e6a4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
    }
    uVar6 = CONCAT26(s_std__allocator_00112ef7._6_2_,s_std__allocator_00112ef7._0_6_);
    *(ulong *)((long)pvVar3 + lVar4 + 6) =
         CONCAT62(s_std__allocator_00112ef7._8_6_,s_std__allocator_00112ef7._6_2_);
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar6;
    lVar4 = 0xe;
    break;
  case 1:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0x11;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012e6a4;
      lVar4 = param_2[1];
    }
    uVar2 = s_std__basic_string_00111e21._8_8_;
    uVar6 = s_std__basic_string_00111e21._0_8_;
    pcVar7 = (char *)((long)pvVar3 + lVar4);
    pcVar7[0x10] = 'g';
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar6;
    lVar4 = 0x11;
    break;
  case 2:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xb;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012e6a4;
      lVar4 = param_2[1];
    }
    pcVar7 = (char *)((long)pvVar3 + lVar4);
    *(undefined8 *)pcVar7 = s_std__string_001120b7._0_8_;
    pcVar7[7] = 'r';
    pcVar7[8] = 'i';
    pcVar7[9] = 'n';
    pcVar7[10] = 'g';
    lVar4 = 0xb;
    break;
  case 3:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xc;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012e6a4;
      lVar4 = param_2[1];
    }
    pcVar7 = "std::istream";
    goto LAB_0012e624;
  case 4:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xc;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012e6a4;
      lVar4 = param_2[1];
    }
    pcVar7 = "std::ostream";
LAB_0012e624:
    uVar6 = *(undefined8 *)pcVar7;
    *(undefined4 *)((undefined8 *)((long)pvVar3 + lVar4) + 1) = 0x6d616572;
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar6;
    lVar4 = 0xc;
    break;
  case 5:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xd;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012e6a4;
      lVar4 = param_2[1];
    }
    uVar6 = CONCAT35(s_std__iostream_001122ec._5_3_,s_std__iostream_001122ec._0_5_);
    *(ulong *)((long)pvVar3 + lVar4 + 5) =
         CONCAT53(s_std__iostream_001122ec._8_5_,s_std__iostream_001122ec._5_3_);
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar6;
    lVar4 = 0xd;
    break;
  default:
    goto switchD_0012e410_default;
  }
  param_2[1] = param_2[1] + lVar4;
switchD_0012e410_default:
  return;
}


// ===== 0012e6a8  FUN_0012e6a8 =====

undefined1  [16] FUN_0012e6a8(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (&PTR_s__0013fcc8)[*(int *)(param_1 + 0xc)];
  auVar1._0_8_ = (&PTR_s_allocator_0013fcf8)[*(int *)(param_1 + 0xc)];
  return auVar1;
}


// ===== 0012e6d0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e6d8  FUN_0012e6d8 =====

ulong FUN_0012e6d8(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  cVar1 = *(char *)((long)puVar2 + 9);
  if (cVar1 != '\x02') {
    return (ulong)(cVar1 == '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x0012e714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)*puVar2)();
  return uVar3;
}


// ===== 0012e740  FUN_0012e740 =====

ulong FUN_0012e740(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  cVar1 = *(char *)((long)plVar2 + 10);
  if (cVar1 != '\x02') {
    return (ulong)(cVar1 == '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x0012e77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 8))();
  return uVar3;
}


// ===== 0012e7a8  FUN_0012e7a8 =====

ulong FUN_0012e7a8(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  cVar1 = *(char *)((long)plVar2 + 0xb);
  if (cVar1 != '\x02') {
    return (ulong)(cVar1 == '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x0012e7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  return uVar3;
}


// ===== 0012e810  FUN_0012e810 =====

void FUN_0012e810(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0012e840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x18))();
  return;
}


// ===== 0012e85c  FUN_0012e85c =====

void FUN_0012e85c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0012e88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x20))();
  return;
}


// ===== 0012e8a8  FUN_0012e8a8 =====

void FUN_0012e8a8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0012e8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x28))();
  return;
}


// ===== 0012e8f4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e8fc  FUN_0012e8fc =====

void FUN_0012e8fc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012ea30;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3c;
  param_2[1] = param_2[1] + 1;
  FUN_00128c74(param_1 + 0x10,param_2);
  lVar3 = param_2[1];
  if ((lVar3 != 0) && (pvVar2 = (void *)*param_2, *(char *)((long)pvVar2 + lVar3 + -1) == '>')) {
    uVar1 = lVar3 + 1;
    if ((ulong)param_2[2] <= uVar1) {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc(pvVar2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0012ea30;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
  }
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0012ea30:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012ea34  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012ea3c  FUN_0012ea3c =====

void FUN_0012ea3c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012eae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0012eae8  FUN_0012eae8 =====

void FUN_0012eae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0012eaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0012eafc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012eb04  FUN_0012eb04 =====

void FUN_0012eb04(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2[1];
  __size = lVar3 + 5;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x3a647473;
  param_2[1] = param_2[1] + 5;
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012ebcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0012ebd4  FUN_0012ebd4 =====

void FUN_0012ebd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0012ebe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0012ebe8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012ebf0  FUN_0012ebf0 =====

void FUN_0012ebf0(long param_1)

{
  FUN_00128c74(param_1 + 0x10);
  return;
}


// ===== 0012ebfc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012ec04  FUN_0012ec04 =====

void FUN_0012ec04(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_2[1];
  uVar6 = lVar5 + 0xc;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar3 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012ecec;
    lVar5 = param_2[1];
  }
  uVar2 = s__enable_if__00111f88._0_8_;
  pcVar1 = (char *)((long)pvVar3 + lVar5);
  pcVar1[8] = '_';
  pcVar1[9] = 'i';
  pcVar1[10] = 'f';
  pcVar1[0xb] = ':';
  *(undefined8 *)pcVar1 = uVar2;
  param_2[1] = param_2[1] + 0xc;
  FUN_00128c74(param_1 + 0x10,param_2);
  lVar5 = param_2[1];
  uVar6 = lVar5 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar3 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_0012ecec:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
    uVar6 = lVar5 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x5d;
  return;
}


// ===== 0012ecf0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012ecf8  FUN_0012ecf8 =====

undefined8 FUN_0012ecf8(void)

{
  return 1;
}


// ===== 0012ed04  FUN_0012ed04 =====

undefined8 FUN_0012ed04(void)

{
  return 1;
}


// ===== 0012ed10  FUN_0012ed10 =====

void FUN_0012ed10(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((*(char *)((long)puVar2 + 9) != '\0') &&
       ((*(char *)((long)puVar2 + 9) != '\x02' ||
        (uVar3 = (**(code **)*puVar2)(puVar2,param_2), (uVar3 & 1) == 0)))) {
      lVar6 = param_2[1];
      uVar3 = lVar6 + 1;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar3 <= uVar5) {
          uVar3 = uVar5;
        }
        param_2[2] = uVar3;
        pvVar4 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = param_2[1];
      }
      *(undefined1 *)((long)pvVar4 + lVar6) = 0x20;
      param_2[1] = param_2[1] + 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012ee08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0012ee10  FUN_0012ee10 =====

void FUN_0012ee10(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = param_2[1];
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012f144;
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar7) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_00128c74(param_1 + 0x20,param_2);
  lVar7 = param_2[1];
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012f144;
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar7) = 0x29;
  param_2[1] = param_2[1] + 1;
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  uVar5 = *(uint *)(param_1 + 0x38);
  if ((uVar5 & 1) != 0) {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 6;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012f144;
      lVar7 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar7) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar3 + lVar7) = 0x6e6f6320;
    param_2[1] = param_2[1] + 6;
    uVar5 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar5 >> 1 & 1) != 0) {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012f144;
      lVar7 = param_2[1];
    }
    uVar2 = s_volatile_00113060._0_8_;
    ((char *)((long)pvVar3 + lVar7))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar7) = uVar2;
    param_2[1] = param_2[1] + 9;
    uVar5 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar5 >> 2 & 1) != 0) {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012f144;
      lVar7 = param_2[1];
    }
    uVar2 = s_restrict_00112928._0_8_;
    ((char *)((long)pvVar3 + lVar7))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar7) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x3c) == '\x02') {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_0012f144:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar7) + 1) = 0x26;
    *(undefined2 *)((long)pvVar3 + lVar7) = 0x2620;
    lVar7 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x3c) != '\x01') goto LAB_0012f0ec;
    lVar7 = param_2[1];
    uVar1 = lVar7 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012f144;
      lVar7 = param_2[1];
    }
    *(undefined2 *)((long)pvVar3 + lVar7) = 0x2620;
    lVar7 = 2;
  }
  param_2[1] = param_2[1] + lVar7;
LAB_0012f0ec:
  plVar4 = *(long **)(param_1 + 0x30);
  if ((plVar4 != (long *)0x0) &&
     ((**(code **)(*plVar4 + 0x20))(plVar4,param_2), *(char *)((long)plVar4 + 9) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x0012f140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
    return;
  }
  return;
}


// ===== 0012f148  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012f150  FUN_0012f150 =====

void FUN_0012f150(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0012f2b8;
    lVar5 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar5) = 0x2820;
  lVar5 = param_2[1] + 2;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0012f2b8;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0012f2b8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012f2bc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012f2c4  FUN_0012f2c4 =====

void FUN_0012f2c4(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 uVar15;
  undefined1 auVar16 [16];
  undefined8 *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar8 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if ((pcVar8 == pcVar1) || (*pcVar8 != 'r')) {
    uVar12 = 0;
  }
  else {
    pcVar8 = pcVar8 + 1;
    uVar12 = 4;
    *param_1 = (long)pcVar8;
  }
  pcVar9 = pcVar1;
  if (pcVar8 != pcVar1) {
    if (*pcVar8 == 'V') {
      pcVar8 = pcVar8 + 1;
      uVar12 = uVar12 | 2;
      *param_1 = (long)pcVar8;
    }
    if ((pcVar8 != pcVar1) && (pcVar9 = pcVar8, *pcVar8 == 'K')) {
      uVar12 = uVar12 | 1;
      *param_1 = (long)(pcVar8 + 1);
      pcVar9 = pcVar8 + 1;
    }
  }
  if (((ulong)((long)pcVar1 - (long)pcVar9) < 2) || (*pcVar9 != 'D')) goto LAB_0012f528;
  if (pcVar9[1] == 'o') {
    pvVar11 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar9 + 2);
    lVar7 = *(long *)((long)pvVar11 + 8);
    puVar4 = (undefined8 *)pvVar11;
    if (0xfef < lVar7 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
LAB_0012f7c4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = 0;
      *puVar4 = pvVar11;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
    puVar13 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
    *puVar13 = &PTR_FUN_0013dc88;
    *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x1010107;
    *(char **)((long)puVar4 + lVar7 + 0x20) = "noexcept";
    *(char **)((long)puVar4 + lVar7 + 0x28) = "";
LAB_0012f52c:
    pcVar8 = (char *)*param_1;
    pcVar1 = (char *)param_1[1];
    if (((1 < (ulong)((long)pcVar1 - (long)pcVar8)) && (*pcVar8 == 'D')) && (pcVar8[1] == 'x')) {
      pcVar8 = pcVar8 + 2;
      *param_1 = (long)pcVar8;
    }
    if ((pcVar8 != pcVar1) && (*pcVar8 == 'F')) {
      pcVar9 = pcVar8 + 1;
      *param_1 = (long)pcVar9;
      if ((pcVar9 != pcVar1) && (*pcVar9 == 'Y')) {
        *param_1 = (long)(pcVar8 + 2);
      }
      puVar5 = (undefined8 *)FUN_0011ec20(param_1);
      puVar4 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        lVar7 = param_1[2];
        lVar14 = 1;
        lVar10 = param_1[3];
        do {
          while( true ) {
            pcVar8 = (char *)*param_1;
            if (pcVar8 != (char *)param_1[1]) break;
LAB_0012f5ec:
            if (1 < (ulong)(param_1[1] - (long)pcVar8)) {
              cVar2 = *pcVar8;
              if (cVar2 == 'R') {
                if (pcVar8[1] == 'E') {
                  uVar15 = 1;
                  lVar14 = 2;
                  goto LAB_0012f69c;
                }
                cVar2 = *pcVar8;
              }
              if ((cVar2 == 'O') && (pcVar8[1] == 'E')) {
                lVar14 = 2;
                uVar15 = 2;
                goto LAB_0012f69c;
              }
            }
            puVar4 = (undefined8 *)FUN_0011ec20(param_1);
            local_70 = puVar4;
            if (puVar4 == (undefined8 *)0x0) goto LAB_0012f64c;
            FUN_0012115c(param_1 + 2,&local_70);
          }
          if (*pcVar8 == 'E') {
            uVar15 = 0;
LAB_0012f69c:
            lVar7 = (lVar10 - lVar7 >> 3) * 8;
            *param_1 = (long)(pcVar8 + lVar14);
            auVar16 = FUN_0012a5c8(param_1,param_1[2] + lVar7,param_1[3]);
            pvVar11 = (void *)param_1[0x266];
            param_1[3] = param_1[2] + lVar7;
            lVar7 = *(long *)((long)pvVar11 + 8);
            puVar6 = (undefined8 *)pvVar11;
            if (0xfef < lVar7 + 0x40U) {
              puVar6 = (undefined8 *)malloc(0x1000);
              if (puVar6 == (undefined8 *)0x0) goto LAB_0012f7c4;
              lVar7 = 0;
              *puVar6 = pvVar11;
              puVar6[1] = 0;
              param_1[0x266] = (long)puVar6;
            }
            *(long *)((long)puVar6 + 8) = lVar7 + 0x40;
            puVar4 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
            *puVar4 = &PTR_FUN_0013f738;
            *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x1000f;
            *(undefined8 **)((long)puVar6 + lVar7 + 0x20) = puVar5;
            *(undefined1 (*) [16])((long)puVar6 + lVar7 + 0x28) = auVar16;
            *(uint *)((long)puVar6 + lVar7 + 0x38) = uVar12;
            *(undefined1 *)((long)puVar6 + lVar7 + 0x3c) = uVar15;
            *(undefined8 **)((long)puVar6 + lVar7 + 0x40) = puVar13;
            break;
          }
          if (*pcVar8 != 'v') goto LAB_0012f5ec;
          *param_1 = (long)(pcVar8 + 1);
        } while( true );
      }
      goto LAB_0012f64c;
    }
  }
  else {
    if (*pcVar9 != 'D') {
LAB_0012f528:
      puVar13 = (undefined8 *)0x0;
      goto LAB_0012f52c;
    }
    if (pcVar9[1] != 'O') {
      if ((*pcVar9 == 'D') && (pcVar9[1] == 'w')) {
        pcVar9 = pcVar9 + 2;
        *param_1 = (long)pcVar9;
        lVar7 = param_1[2];
        lVar10 = param_1[3];
        if (pcVar9 == pcVar1) goto LAB_0012f4fc;
        while (*pcVar9 != 'E') {
LAB_0012f4fc:
          do {
            puVar4 = (undefined8 *)FUN_0011ec20(param_1);
            local_70 = puVar4;
            if (puVar4 == (undefined8 *)0x0) goto LAB_0012f64c;
            FUN_0012115c(param_1 + 2,&local_70);
            pcVar9 = (char *)*param_1;
          } while (pcVar9 == (char *)param_1[1]);
        }
        lVar7 = (lVar10 - lVar7 >> 3) * 8;
        *param_1 = (long)(pcVar9 + 1);
        auVar16 = FUN_0012a5c8(param_1,param_1[2] + lVar7,param_1[3]);
        pvVar11 = (void *)param_1[0x266];
        param_1[3] = param_1[2] + lVar7;
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = (undefined8 *)pvVar11;
        if (0xfef < lVar7 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0012f7c4;
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
        puVar13 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar13 = &PTR_FUN_0013f6c8;
        *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x1010111;
        *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x20) = auVar16;
        goto LAB_0012f52c;
      }
      goto LAB_0012f528;
    }
    *param_1 = (long)(pcVar9 + 2);
    puVar4 = (undefined8 *)FUN_00122e5c(param_1);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0012f64c;
    pcVar8 = (char *)*param_1;
    if ((pcVar8 != (char *)param_1[1]) && (*pcVar8 == 'E')) {
      pvVar11 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar8 + 1);
      lVar7 = *(long *)((long)pvVar11 + 8);
      puVar5 = (undefined8 *)pvVar11;
      if (0xfef < lVar7 + 0x20U) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_0012f7c4;
        lVar7 = 0;
        *puVar5 = pvVar11;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
      puVar13 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
      *puVar13 = &PTR_FUN_0013f658;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010110;
      *(undefined8 **)((long)puVar5 + lVar7 + 0x20) = puVar4;
      goto LAB_0012f52c;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_0012f64c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 0012f7cc  FUN_0012f7cc =====

undefined8 * FUN_0012f7cc(long *param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  void *pvVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  
  pbVar9 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar9 == pbVar1) {
LAB_0012f888:
    uVar13 = 0;
  }
  else {
    if (*pbVar9 == 0x55) {
      pbVar16 = pbVar9 + 1;
      *param_1 = (long)pbVar16;
      if (pbVar1 == pbVar16) {
        return (undefined8 *)0x0;
      }
      if (9 < *pbVar16 - 0x30) {
        return (undefined8 *)0x0;
      }
      uVar10 = 0;
      pbVar9 = pbVar9 + 2;
      do {
        pbVar15 = pbVar9;
        *param_1 = (long)pbVar15;
        uVar10 = ((ulong)pbVar15[-1] + uVar10 * 10) - 0x30;
        pbVar16 = pbVar1;
        if (pbVar1 == pbVar15) break;
        pbVar9 = pbVar15 + 1;
        pbVar16 = pbVar15;
      } while (*pbVar15 - 0x30 < 10);
      if ((ulong)((long)pbVar1 - (long)pbVar16) < uVar10) {
        return (undefined8 *)0x0;
      }
      pbVar9 = pbVar16 + uVar10;
      *param_1 = (long)pbVar9;
      if (pbVar16 == pbVar9) {
        return (undefined8 *)0x0;
      }
      if (((((((ulong)((long)pbVar9 - (long)pbVar16) < 9) || (*pbVar16 != 0x6f)) ||
            (pbVar16[1] != 0x62)) || ((pbVar16[2] != 0x6a || (pbVar16[3] != 99)))) ||
          ((pbVar16[4] != 0x70 || ((pbVar16[5] != 0x72 || (pbVar16[6] != 0x6f)))))) ||
         ((pbVar16[7] != 0x74 || (pbVar16[8] != 0x6f)))) {
        lVar5 = FUN_0012f7cc(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        puVar17 = (undefined8 *)param_1[0x266];
        lVar8 = puVar17[1];
        puVar6 = puVar17;
        if (0xfef < lVar8 + 0x30U) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_0012fb88;
          lVar8 = 0;
          *puVar6 = puVar17;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        lVar12 = (long)puVar6 + lVar8;
        uVar13 = 0x102;
        ppuVar7 = &PTR_FUN_0013f818;
        goto LAB_0012fac8;
      }
      pbVar15 = pbVar16 + 9;
      *param_1 = (long)pbVar15;
      param_1[1] = (long)pbVar9;
      if ((pbVar15 == pbVar9) || (9 < *pbVar15 - 0x30)) {
LAB_0012faf4:
        pbVar15 = (byte *)0x0;
        pbVar16 = (byte *)0x0;
      }
      else {
        uVar10 = 0;
        pbVar15 = pbVar16 + 10;
        do {
          pbVar11 = pbVar15;
          *param_1 = (long)pbVar11;
          uVar10 = ((ulong)pbVar11[-1] + uVar10 * 10) - 0x30;
          pbVar16 = pbVar9;
          if (pbVar9 == pbVar11) break;
          pbVar15 = pbVar11 + 1;
          pbVar16 = pbVar11;
        } while (*pbVar11 - 0x30 < 10);
        if ((ulong)((long)pbVar9 - (long)pbVar16) < uVar10) goto LAB_0012faf4;
        pbVar15 = pbVar16 + uVar10;
      }
      *param_1 = (long)pbVar9;
      param_1[1] = (long)pbVar1;
      if ((pbVar16 == pbVar15) || (lVar5 = FUN_0012f7cc(param_1), lVar5 == 0)) {
        return (undefined8 *)0x0;
      }
      puVar17 = (undefined8 *)param_1[0x266];
      lVar8 = puVar17[1];
      puVar6 = puVar17;
      if (0xfef < lVar8 + 0x30U) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) goto LAB_0012fb88;
        lVar8 = 0;
        *puVar6 = puVar17;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      lVar12 = (long)puVar6 + lVar8;
      uVar13 = 0x10a;
      ppuVar7 = &PTR_FUN_0013f7a8;
      pbVar9 = pbVar15;
LAB_0012fac8:
      puVar6[1] = lVar8 + 0x30;
      *(undefined8 *)(lVar12 + 0x10) = ppuVar7;
      *(uint *)(lVar12 + 0x18) = uVar13 | 0x1010000;
      *(long *)(lVar12 + 0x20) = lVar5;
      *(byte **)(lVar12 + 0x28) = pbVar16;
      *(byte **)(lVar12 + 0x30) = pbVar9;
      return (undefined8 *)(lVar12 + 0x10);
    }
    if (*pbVar9 != 0x72) goto LAB_0012f888;
    pbVar9 = pbVar9 + 1;
    uVar13 = 4;
    *param_1 = (long)pbVar9;
  }
  if (pbVar9 != pbVar1) {
    if (*pbVar9 == 0x56) {
      pbVar9 = pbVar9 + 1;
      uVar13 = uVar13 | 2;
      *param_1 = (long)pbVar9;
    }
    if ((pbVar9 != pbVar1) && (*pbVar9 == 0x4b)) {
      uVar13 = uVar13 | 1;
      *param_1 = (long)(pbVar9 + 1);
    }
  }
  puVar17 = (undefined8 *)FUN_0011ec20(param_1);
  puVar6 = puVar17;
  if ((puVar17 != (undefined8 *)0x0) && (uVar13 != 0)) {
    pvVar14 = (void *)param_1[0x266];
    lVar5 = *(long *)((long)pvVar14 + 8);
    puVar4 = (undefined8 *)pvVar14;
    if (0xfef < lVar5 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
LAB_0012fb88:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar4 = pvVar14;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
    uVar3 = *(undefined2 *)((long)puVar17 + 9);
    uVar2 = *(undefined1 *)((long)puVar17 + 0xb);
    puVar6 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
    *puVar6 = &PTR_FUN_0013f888;
    *(undefined8 **)((long)puVar4 + lVar5 + 0x20) = puVar17;
    *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 3;
    *(uint *)((long)puVar4 + lVar5 + 0x1c) = uVar13;
    *(undefined2 *)((long)puVar4 + lVar5 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar4 + lVar5 + 0x1b) = uVar2;
  }
  return puVar6;
}


// ===== 0012fb8c  FUN_0012fb8c =====

undefined8 * FUN_0012fb8c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  
  pcVar5 = (char *)*param_1;
  if ((1 < (ulong)(param_1[1] - (long)pcVar5)) && (*pcVar5 == 'T')) {
    if (pcVar5[1] == 's') {
      pcVar6 = "struct";
      *param_1 = (long)(pcVar5 + 2);
      pcVar5 = "";
      goto LAB_0012fc50;
    }
    if (*pcVar5 == 'T') {
      if (pcVar5[1] == 'u') {
        pcVar6 = "union";
        *param_1 = (long)(pcVar5 + 2);
        pcVar5 = "";
        goto LAB_0012fc50;
      }
      if ((*pcVar5 == 'T') && (pcVar5[1] == 'e')) {
        pcVar6 = "enum";
        *param_1 = (long)(pcVar5 + 2);
        pcVar5 = "";
        goto LAB_0012fc50;
      }
    }
  }
  pcVar5 = (char *)0x0;
  pcVar6 = (char *)0x0;
LAB_0012fc50:
  puVar1 = (undefined8 *)FUN_00120424(param_1,0);
  puVar4 = puVar1;
  if ((puVar1 != (undefined8 *)0x0) && (pcVar6 != pcVar5)) {
    pvVar7 = (void *)param_1[0x266];
    lVar3 = *(long *)((long)pvVar7 + 8);
    puVar2 = (undefined8 *)pvVar7;
    if (0xfef < lVar3 + 0x30U) {
      puVar2 = (undefined8 *)malloc(0x1000);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = 0;
      *puVar2 = pvVar7;
      puVar2[1] = 0;
      param_1[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
    puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
    *puVar4 = &PTR_FUN_0013fab8;
    *(undefined8 **)((long)puVar2 + lVar3 + 0x30) = puVar1;
    *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x1010106;
    *(char **)((long)puVar2 + lVar3 + 0x20) = pcVar6;
    *(char **)((long)puVar2 + lVar3 + 0x28) = pcVar5;
  }
  return puVar4;
}


// ===== 0012fcec  FUN_0012fcec =====

void FUN_0012fcec(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 9;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0012fe00;
    lVar5 = param_2[1];
  }
  uVar2 = s_noexcept__00112304._0_8_;
  ((char *)((long)pvVar3 + lVar5))[8] = '(';
  *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
  param_2[1] = param_2[1] + 9;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_0012fe00:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012fe04  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012fe0c  FUN_0012fe0c =====

void FUN_0012fe0c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar4 = lVar3 + 6;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0012feec;
    lVar3 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x2877;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x6f726874;
  param_2[1] = param_2[1] + 6;
  FUN_00128c74(param_1 + 0x10,param_2);
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_0012feec:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x29;
  return;
}


// ===== 0012fef0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012fef8  FUN_0012fef8 =====

undefined8 FUN_0012fef8(void)

{
  return 1;
}


// ===== 0012ff04  FUN_0012ff04 =====

undefined8 FUN_0012ff04(void)

{
  return 1;
}


// ===== 0012ff10  FUN_0012ff10 =====

void FUN_0012ff10(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar3 = param_2[1];
  __size = lVar3 + 1;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x20;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0012ff98  FUN_0012ff98 =====

void FUN_0012ff98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar4 = param_2[1];
  uVar6 = lVar4 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00130318;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_00128c74(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  uVar6 = lVar4 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00130318;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 6;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00130318;
      lVar4 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar2 + lVar4) = 0x6e6f6320;
    param_2[1] = param_2[1] + 6;
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 9;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00130318;
      lVar4 = param_2[1];
    }
    uVar1 = s_volatile_00113060._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 'e';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    param_2[1] = param_2[1] + 9;
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 9;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00130318;
      lVar4 = param_2[1];
    }
    uVar1 = s_restrict_00112928._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 't';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 3;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00130318;
      lVar4 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar4) + 1) = 0x26;
    *(undefined2 *)((long)pvVar2 + lVar4) = 0x2620;
    lVar4 = 3;
LAB_00130264:
    param_2[1] = param_2[1] + lVar4;
  }
  else if (*(char *)(param_1 + 0x2c) == '\x01') {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 2;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00130318;
      lVar4 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar4) = 0x2620;
    lVar4 = 2;
    goto LAB_00130264;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_00130318:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x20;
    plVar7 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
    if (*(char *)((long)plVar7 + 9) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00130314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      return;
    }
  }
  return;
}


// ===== 0013031c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00130324  FUN_00130324 =====

void FUN_00130324(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0013048c;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x3c;
  lVar5 = param_2[1] + 1;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0013048c;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0013048c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00130490  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00130498  FUN_00130498 =====

void FUN_00130498(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001305b0;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x20;
  lVar5 = param_2[1] + 1;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001305b0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001305b4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001305bc  FUN_001305bc =====

ulong FUN_001305bc(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x001305d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 001305e8  FUN_001305e8 =====

ulong FUN_001305e8(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(long **)(param_1 + 0x10) + 10);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00130604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 00130614  FUN_00130614 =====

ulong FUN_00130614(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(long **)(param_1 + 0x10) + 0xb);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00130630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 00130640  FUN_00130640 =====

void FUN_00130640(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((uVar4 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 6;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001307b8;
      lVar6 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar6) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar3 + lVar6) = 0x6e6f6320;
    param_2[1] = param_2[1] + 6;
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar4 >> 1 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001307b8;
      lVar6 = param_2[1];
    }
    uVar2 = s_volatile_00113060._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    param_2[1] = param_2[1] + 9;
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001307b8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_restrict_00112928._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  return;
}


// ===== 001307bc  FUN_001307bc =====

void FUN_001307bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001307cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 001307d0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001307d8  FUN_001307d8 =====

void FUN_001307d8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 0xd;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001308ec;
    lVar5 = param_2[1];
  }
  uVar2 = CONCAT35(s_pixel_vector__00112a11._5_3_,s_pixel_vector__00112a11._0_5_);
  *(ulong *)((long)pvVar3 + lVar5 + 5) =
       CONCAT53(s_pixel_vector__00112a11._8_5_,s_pixel_vector__00112a11._5_3_);
  *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
  param_2[1] = param_2[1] + 0xd;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001308ec:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001308f0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001308f8  FUN_001308f8 =====

void FUN_001308f8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 8;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00130a44;
    lVar4 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar4) = 0x5b726f7463657620;
  param_2[1] = param_2[1] + 8;
  plVar5 = *(long **)(param_1 + 0x18);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), *(char *)((long)plVar5 + 9) != '\x01')) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_00130a44:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00130a48  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00130a50  FUN_00130a50 =====

undefined8 FUN_00130a50(void)

{
  return 1;
}


// ===== 00130a5c  FUN_00130a5c =====

undefined8 FUN_00130a5c(void)

{
  return 1;
}


// ===== 00130a68  FUN_00130a68 =====

void FUN_00130a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00130a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 00130a7c  FUN_00130a7c =====

void FUN_00130a7c(long param_1,long *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  if ((lVar3 == 0) || (*(char *)(lVar3 + *param_2 + -1) != ']')) {
    uVar1 = lVar3 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = (long)pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00130c04;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
  }
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = (long)pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00130c04;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5b;
  param_2[1] = param_2[1] + 1;
  plVar5 = *(long **)(param_1 + 0x18);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), *(char *)((long)plVar5 + 9) != '\x01')) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = (long)pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_00130c04:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x00130c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 00130c08  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00130c10  FUN_00130c10 =====

ulong FUN_00130c10(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00130c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 00130c3c  FUN_00130c3c =====

void FUN_00130c3c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)((long)plVar1 + 10) == '\0') {
LAB_00130cb4:
    lVar6 = param_2[1];
    uVar2 = lVar6 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00130df4;
      lVar6 = param_2[1];
    }
    puVar4 = (undefined1 *)((long)pvVar3 + lVar6);
    uVar7 = 0x28;
  }
  else {
    if (*(char *)((long)plVar1 + 10) == '\x02') {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_00130cb4;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) == '\0') ||
       ((*(char *)((long)plVar1 + 0xb) == '\x02' &&
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) != 0))))
    goto LAB_00130cb4;
    lVar6 = param_2[1];
    uVar2 = lVar6 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00130df4;
      lVar6 = param_2[1];
    }
    puVar4 = (undefined1 *)((long)pvVar3 + lVar6);
    uVar7 = 0x20;
  }
  *puVar4 = uVar7;
  param_2[1] = param_2[1] + 1;
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  lVar6 = param_2[1];
  uVar2 = lVar6 + 3;
  if (uVar2 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    param_2[2] = uVar2;
    pvVar3 = realloc((void *)*param_2,uVar2);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_00130df4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar6) + 1) = 0x2a;
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x3a3a;
  param_2[1] = param_2[1] + 3;
  return;
}


// ===== 00130df8  FUN_00130df8 =====

void FUN_00130df8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)((long)plVar1 + 10) != '\0') {
    if (*(char *)((long)plVar1 + 10) == '\x02') {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_00130e60;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) != '\0') &&
       ((*(char *)((long)plVar1 + 0xb) != '\x02' ||
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) == 0))))
    goto LAB_00130eb0;
  }
LAB_00130e60:
  lVar5 = param_2[1];
  uVar2 = lVar5 + 1;
  if (uVar2 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    param_2[2] = uVar2;
    pvVar3 = realloc((void *)*param_2,uVar2);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
LAB_00130eb0:
                    /* WARNING: Could not recover jumptable at 0x00130ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 00130ed4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00130edc  FUN_00130edc =====

void FUN_00130edc(long param_1,undefined8 *param_2)

{
  size_t __n;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  lVar3 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (__n != 0) {
    uVar5 = lVar3 + __n;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_00131008;
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),pvVar2,__n);
    lVar3 = param_2[1] + __n;
    param_2[1] = lVar3;
  }
  uVar5 = lVar3 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    param_2[2] = uVar5;
    pvVar2 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_00131008:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00131004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}


// ===== 0013100c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00131014  FUN_00131014 =====

ulong FUN_00131014(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00131030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 00131040  FUN_00131040 =====

void FUN_00131040(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = *(long **)(param_1 + 0x10);
  if (((char)plVar11[1] == '\n') && (lVar9 = plVar11[2], *(char *)(lVar9 + 8) == '\a')) {
    pcVar5 = *(char **)(lVar9 + 0x10);
    pcVar1 = *(char **)(lVar9 + 0x18);
    if ((long)pcVar1 - (long)pcVar5 == 0xb) {
      if (pcVar5 != pcVar1) {
        pcVar10 = "objc_object";
        do {
          if (*pcVar5 != *pcVar10) goto LAB_001310e0;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        } while (pcVar1 != pcVar5);
      }
      plVar12 = param_2 + 1;
      lVar9 = *plVar12;
      uVar3 = lVar9 + 3;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar3 <= uVar7) {
          uVar3 = uVar7;
        }
        param_2[2] = uVar3;
        pvVar2 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_00131370;
        lVar9 = *plVar12;
      }
      *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar9) + 1) = 0x3c;
      *(undefined2 *)((long)pvVar2 + lVar9) = 0x6469;
      lVar9 = *plVar12 + 3;
      *plVar12 = lVar9;
      pvVar2 = (void *)plVar11[3];
      __n = plVar11[4] - (long)pvVar2;
      if (__n != 0) {
        uVar3 = lVar9 + __n;
        if (uVar3 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar7 = param_2[2] << 1;
          if (uVar3 <= uVar7) {
            uVar3 = uVar7;
          }
          param_2[2] = uVar3;
          pvVar4 = realloc((void *)*param_2,uVar3);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_00131370;
          lVar9 = *plVar12;
        }
        memmove((void *)((long)pvVar4 + lVar9),pvVar2,__n);
        lVar9 = *plVar12 + __n;
        *plVar12 = lVar9;
      }
      uVar3 = lVar9 + 1;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar3 <= uVar7) {
          uVar3 = uVar7;
        }
        param_2[2] = uVar3;
        pvVar2 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_00131370;
        lVar9 = *plVar12;
      }
      puVar6 = (undefined1 *)((long)pvVar2 + lVar9);
      uVar8 = 0x3e;
      goto LAB_00131258;
    }
  }
LAB_001310e0:
  (**(code **)(*plVar11 + 0x20))(plVar11,param_2);
  plVar11 = *(long **)(param_1 + 0x10);
  if ((*(char *)((long)plVar11 + 10) == '\0') ||
     ((*(char *)((long)plVar11 + 10) == '\x02' &&
      (uVar3 = (**(code **)(*plVar11 + 8))(plVar11,param_2), (uVar3 & 1) != 0)))) {
    lVar9 = param_2[1];
    uVar3 = lVar9 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      param_2[2] = uVar3;
      pvVar2 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00131370;
      lVar9 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar9) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  plVar11 = *(long **)(param_1 + 0x10);
  if (*(char *)((long)plVar11 + 10) == '\0') {
LAB_001311bc:
    lVar9 = param_2[1];
    uVar3 = lVar9 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      param_2[2] = uVar3;
      pvVar2 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00131370;
      lVar9 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar9) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (*(char *)((long)plVar11 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar11 + 8))(plVar11,param_2);
      if ((uVar3 & 1) != 0) goto LAB_001311bc;
      plVar11 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar11 + 0xb) == '\0') ||
       ((*(char *)((long)plVar11 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2), (uVar3 & 1) != 0))))
    goto LAB_001311bc;
  }
  lVar9 = param_2[1];
  uVar3 = lVar9 + 1;
  if (uVar3 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar7 = param_2[2] << 1;
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    param_2[2] = uVar3;
    pvVar2 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_00131370:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar9 = param_2[1];
  }
  puVar6 = (undefined1 *)((long)pvVar2 + lVar9);
  uVar8 = 0x2a;
LAB_00131258:
  *puVar6 = uVar8;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00131374  FUN_00131374 =====

void FUN_00131374(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (((char)plVar2[1] == '\n') && (lVar7 = plVar2[2], *(char *)(lVar7 + 8) == '\a')) {
    pcVar5 = *(char **)(lVar7 + 0x10);
    pcVar1 = *(char **)(lVar7 + 0x18);
    if ((long)pcVar1 - (long)pcVar5 == 0xb) {
      if (pcVar5 != pcVar1) {
        pcVar8 = "objc_object";
        do {
          if (*pcVar5 != *pcVar8) goto LAB_001313fc;
          pcVar5 = pcVar5 + 1;
          pcVar8 = pcVar8 + 1;
        } while (pcVar1 != pcVar5);
      }
      return;
    }
  }
LAB_001313fc:
  if (*(char *)((long)plVar2 + 10) != '\0') {
    if (*(char *)((long)plVar2 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if ((uVar3 & 1) != 0) goto LAB_00131448;
      plVar2 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar2 + 0xb) != '\0') &&
       ((*(char *)((long)plVar2 + 0xb) != '\x02' ||
        (uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), (uVar3 & 1) == 0))))
    goto LAB_00131498;
  }
LAB_00131448:
  lVar7 = param_2[1];
  uVar3 = lVar7 + 1;
  if (uVar3 < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    param_2[2] = uVar3;
    pvVar4 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar4 + lVar7) = 0x29;
  param_2[1] = param_2[1] + 1;
LAB_00131498:
                    /* WARNING: Could not recover jumptable at 0x001314b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 001314bc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001314c4  FUN_001314c4 =====

ulong FUN_001314c4(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x001314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 001314f0  FUN_001314f0 =====

void FUN_001314f0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *__src;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar8 = *(int *)(param_1 + 0x18);
                    /* try { // try from 00131530 to 00131537 has its CatchHandler @ 00131784 */
  lVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
  while (*(char *)(lVar2 + 8) == '\f') {
    plVar7 = *(long **)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar8 <= *(int *)(lVar2 + 0x18)) {
      iVar1 = iVar8;
    }
                    /* try { // try from 0013155c to 00131567 has its CatchHandler @ 0013178c */
    lVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
    iVar8 = iVar1;
  }
                    /* try { // try from 00131574 to 001315b7 has its CatchHandler @ 00131784 */
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 10) == '\0') {
LAB_001315a8:
    sVar4 = __strlen_chk(&DAT_00112017,2);
    if (sVar4 != 0) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + sVar4;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        param_2[2] = uVar3;
        pvVar5 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_00131780;
        lVar2 = param_2[1];
      }
      memcpy((void *)((long)pvVar5 + lVar2),&DAT_00112017,sVar4);
      param_2[1] = param_2[1] + sVar4;
    }
LAB_0013161c:
                    /* try { // try from 00131634 to 0013167b has its CatchHandler @ 00131784 */
    if ((*(char *)((long)plVar7 + 10) != '\0') &&
       ((*(char *)((long)plVar7 + 10) != '\x02' ||
        (uVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_2), (uVar3 & 1) == 0)))) goto LAB_00131644;
LAB_0013166c:
    sVar4 = __strlen_chk(&DAT_00112c1a,2);
    if (sVar4 != 0) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + sVar4;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        param_2[2] = uVar3;
        pvVar5 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_00131780;
        lVar2 = param_2[1];
      }
      memcpy((void *)((long)pvVar5 + lVar2),&DAT_00112c1a,sVar4);
      param_2[1] = param_2[1] + sVar4;
    }
  }
  else {
    if (*(char *)((long)plVar7 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_2);
      if ((uVar3 & 1) != 0) goto LAB_001315a8;
      goto LAB_0013161c;
    }
LAB_00131644:
    if ((*(char *)((long)plVar7 + 0xb) == '\0') ||
       ((*(char *)((long)plVar7 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2), (uVar3 & 1) != 0))))
    goto LAB_0013166c;
  }
  __src = &DAT_00112d4e;
  if (iVar8 != 0) {
    __src = &DAT_00112cbe;
  }
                    /* try { // try from 001316f8 to 00131703 has its CatchHandler @ 00131784 */
  sVar4 = __strlen_chk(__src,3);
  if (sVar4 != 0) {
    lVar2 = param_2[1];
    uVar3 = lVar2 + sVar4;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar5 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      param_2[2] = uVar3;
      pvVar5 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
LAB_00131780:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar2 = param_2[1];
    }
    memmove((void *)((long)pvVar5 + lVar2),__src,sVar4);
    param_2[1] = param_2[1] + sVar4;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 00131794  FUN_00131794 =====

void FUN_00131794(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    plVar5 = *(long **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x1c) = 1;
                    /* try { // try from 001317cc to 001317d3 has its CatchHandler @ 001318f0 */
    lVar1 = (**(code **)(*plVar5 + 0x18))(plVar5);
    while (*(char *)(lVar1 + 8) == '\f') {
      plVar5 = *(long **)(lVar1 + 0x10);
                    /* try { // try from 001317ec to 001317f7 has its CatchHandler @ 001318f8 */
      lVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    }
                    /* try { // try from 00131814 to 0013185b has its CatchHandler @ 001318f0 */
    if ((((*(char *)((long)plVar5 + 10) == '\0') ||
         (((*(char *)((long)plVar5 + 10) == '\x02' &&
           (uVar2 = (**(code **)(*plVar5 + 8))(plVar5,param_2), (uVar2 & 1) != 0)) ||
          (*(char *)((long)plVar5 + 0xb) == '\0')))) ||
        ((*(char *)((long)plVar5 + 0xb) == '\x02' &&
         (uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2), (uVar2 & 1) != 0)))) &&
       (__n = __strlen_chk(&DAT_00112e57,2), __n != 0)) {
      lVar1 = param_2[1];
      uVar2 = lVar1 + __n;
      if (uVar2 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar2 <= uVar4) {
          uVar2 = uVar4;
        }
        param_2[2] = uVar2;
        pvVar3 = realloc((void *)*param_2,uVar2);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar1 = param_2[1];
      }
      memcpy((void *)((long)pvVar3 + lVar1),&DAT_00112e57,__n);
      param_2[1] = param_2[1] + __n;
    }
                    /* try { // try from 001318c8 to 001318d3 has its CatchHandler @ 001318f0 */
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// ===== 00131900  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00131908  FUN_00131908 =====

void FUN_00131908(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  __src = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001319b0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001319b8  FUN_001319b8 =====

void FUN_001319b8(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FILE *__s;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  char *local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0xffffff80ffffffc8;
  __s = (FILE *)(PTR___sF_001412c0 + 0x130);
  local_118 = param_2;
  uStack_110 = param_3;
  local_108 = param_4;
  uStack_100 = param_5;
  local_f8 = param_6;
  uStack_f0 = param_7;
  local_e8 = param_8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_e0;
  puStack_80 = auStack_120;
  vfprintf(__s,param_1,&local_90);
  fputc(10,__s);
  uStack_c8 = 0xffffff80ffffffc8;
  local_e0 = (undefined1 *)register0x00000008;
  ppuStack_d8 = &local_e0;
  puStack_d0 = auStack_120;
  vasprintf(&local_98,param_1,&local_e0);
  android_set_abort_message(local_98);
  openlog("libc++abi",0,0);
  syslog(2,"%s",local_98);
  closelog();
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00131aac  __gxx_personality_v0 =====

void __gxx_personality_v0(int param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = 3;
  if (((param_1 == 1) && (param_4 != 0)) && (param_5 != 0)) {
    param_3 = param_3 & 0xffffffffffffff00;
    if ((param_2 & 1) == 0) {
      if (((uint)param_2 >> 1 & 1) == 0) {
        uVar3 = 3;
      }
      else {
        if (((uint)param_2 >> 2 & 1) == 0) {
          FUN_00131c7c(&local_78,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
          uVar3 = (ulong)local_50;
          if (local_50 != 6) goto LAB_00131c40;
          thunk_FUN_0013539c(param_5,0,param_4);
          thunk_FUN_0013539c(param_5,1,local_78);
          uVar4 = local_60;
        }
        else {
          if (param_3 == 0x434c4e47432b2b00) {
            local_78 = (long)*(int *)(param_4 + -0x24);
            uStack_68 = *(undefined8 *)(param_4 + -0x18);
            local_70 = *(undefined8 *)(param_4 + -0x20);
            local_60 = *(undefined8 *)(param_4 + -0x10);
            local_58 = *(undefined8 *)(param_4 + -8);
          }
          else {
            FUN_00131c7c(&local_78,param_2,0,param_4,param_5);
            if (local_50 != 6) {
              uVar3 = FUN_00132264(0,param_4);
              goto LAB_00131c78;
            }
          }
          uVar4 = local_60;
          lVar2 = local_78;
          thunk_FUN_0013539c(param_5,0,param_4);
          thunk_FUN_0013539c(param_5,1,lVar2);
        }
        FUN_00135278(param_5,uVar4);
        uVar3 = 7;
      }
    }
    else {
      FUN_00131c7c(&local_78,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
      uVar3 = (ulong)local_50;
      if ((local_50 == 6) && (param_3 == 0x434c4e47432b2b00)) {
        uVar3 = 6;
        *(int *)(param_4 + -0x24) = (int)local_78;
        *(undefined8 *)(param_4 + -0x18) = uStack_68;
        *(undefined8 *)(param_4 + -0x20) = local_70;
        *(undefined8 *)(param_4 + -0x10) = local_60;
        *(undefined8 *)(param_4 + -8) = local_58;
      }
    }
  }
LAB_00131c40:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00131c78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00131c7c  FUN_00131c7c =====

void FUN_00131c7c(ulong *param_1,uint param_2,uint param_3,byte *param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *local_a8;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pbVar20 = (byte *)(ulong)param_3;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) {
LAB_00131cf0:
      uVar13 = 3;
    }
    else {
      if ((~param_2 & 0xc) != 0) goto LAB_00131d2c;
      uVar13 = 2;
    }
  }
  else {
    if ((param_2 & 0xe) != 0) goto LAB_00131cf0;
LAB_00131d2c:
    puVar6 = (undefined1 *)FUN_00135190(param_5);
    if (puVar6 != (undefined1 *)0x0) {
      param_1[2] = (ulong)puVar6;
      lVar7 = FUN_00135248(param_5);
      uVar8 = FUN_001351c4(param_5);
      local_78 = puVar6 + 1;
      uVar9 = FUN_00132604(&local_78,*puVar6);
      uVar1 = uVar8;
      if (uVar9 != 0) {
        uVar1 = uVar9;
      }
      pbVar14 = local_78 + 1;
      uVar9 = (ulong)*local_78;
      if (uVar9 == 0xff) {
        pbVar22 = (byte *)0x0;
      }
      else {
        uVar17 = 0;
        uVar16 = 0;
        pbVar22 = pbVar14;
        do {
          pbVar14 = pbVar22 + 1;
          bVar3 = *pbVar22;
          uVar16 = ((ulong)bVar3 & 0x7f) << (uVar17 & 0x3f) | uVar16;
          uVar17 = uVar17 + 7;
          pbVar22 = pbVar14;
        } while ((char)bVar3 < '\0');
        pbVar22 = pbVar14 + uVar16;
      }
      bVar3 = *pbVar14;
      uVar17 = 0;
      uVar16 = 0;
      uVar8 = lVar7 + ~uVar8;
      pbVar14 = pbVar14 + 1;
      do {
        pbVar19 = pbVar14 + 1;
        bVar4 = *pbVar14;
        uVar16 = ((ulong)bVar4 & 0x7f) << (uVar17 & 0x3f) | uVar16;
        uVar17 = uVar17 + 7;
        pbVar14 = pbVar19;
      } while ((char)bVar4 < '\0');
      local_80 = pbVar19;
      local_78 = pbVar19;
      do {
        if (pbVar19 + (uVar16 & 0xffffffff) <= local_80) break;
        uVar10 = FUN_00132604(&local_80,bVar3);
        lVar7 = FUN_00132604(&local_80,bVar3);
        lVar11 = FUN_00132604(&local_80,bVar3);
        uVar17 = 0;
        uVar15 = 0;
        pbVar14 = local_80;
        do {
          local_80 = pbVar14 + 1;
          bVar4 = *pbVar14;
          uVar15 = ((ulong)bVar4 & 0x7f) << (uVar17 & 0x3f) | uVar15;
          uVar17 = uVar17 + 7;
          pbVar14 = local_80;
        } while ((char)bVar4 < '\0');
        if ((uVar10 <= uVar8) && (uVar8 < lVar7 + uVar10)) {
          if (lVar11 == 0) goto LAB_00132134;
          uVar1 = lVar11 + uVar1;
          if (uVar15 != 0) {
            local_a8 = param_4 + 0x20;
            uVar8 = uVar9 & 0xf;
            pbVar19 = pbVar19 + uVar15 + (uVar16 & 0xffffffff) + -1;
            uVar2 = 0x1c1dU >> uVar8 & 1;
            goto LAB_00131ee8;
          }
          if ((param_2 & 6) != 2) goto LAB_00132160;
          *param_1 = 0;
          param_1[3] = uVar1;
          uVar13 = 6;
          goto LAB_00131cf4;
        }
      } while (uVar10 <= uVar8);
LAB_0013222c:
      FUN_00132264(param_3 & 1,param_4);
LAB_0013223c:
      FUN_00132264(1,param_4);
LAB_00132248:
      FUN_00132264(1,pbVar20);
LAB_00132254:
      FUN_00132264(0,param_4);
      goto LAB_00132260;
    }
LAB_00132160:
    uVar13 = 8;
  }
  goto LAB_00131cf4;
LAB_00131ee8:
  uVar17 = 0;
  uVar16 = 0;
  pbVar14 = pbVar19;
  do {
    pbVar18 = pbVar14 + 1;
    bVar3 = *pbVar14;
    uVar16 = ((ulong)bVar3 & 0x7f) << (uVar17 & 0x3f) | uVar16;
    uVar17 = uVar17 + 7;
    pbVar14 = pbVar18;
  } while ((char)bVar3 < '\0');
  uVar10 = -1L << (uVar17 & 0x3f);
  if (((uint)(uVar17 < 0x40) & (bVar3 & 0x40) >> 6) == 0) {
    uVar10 = 0;
  }
  uVar16 = uVar16 | uVar10;
  if ((long)uVar16 < 1) {
    if ((long)uVar16 < 0) {
      if ((param_3 & 1) == 0) {
        if ((param_2 & 5) != 0) goto LAB_00132168;
        if ((param_2 >> 3 & 1) == 0) goto LAB_00132254;
      }
      else {
        lVar7 = FUN_0011cd44(param_4);
        pbVar14 = local_a8;
        if (lVar7 == 0x434c4e47432b2b01) {
          pbVar14 = *(byte **)(param_4 + -0x58);
        }
        pbVar20 = param_4;
        if ((pbVar14 == (byte *)0x0) || (lVar7 = *(long *)(param_4 + -0x50), lVar7 == 0))
        goto LAB_00132248;
        if (pbVar22 == (byte *)0x0) goto LAB_00132254;
        uVar17 = 0;
        uVar10 = 0;
        pbVar21 = pbVar22 + ~uVar16;
        do {
          do {
            pbVar20 = pbVar21 + 1;
            bVar3 = *pbVar21;
            uVar10 = ((ulong)bVar3 & 0x7f) << (uVar17 & 0x3f) | uVar10;
            uVar17 = uVar17 + 7;
            pbVar21 = pbVar20;
          } while ((char)bVar3 < '\0');
          if (uVar10 == 0) {
            if ((param_2 & 1) == 0) goto LAB_001320e0;
            *param_1 = uVar16;
            param_1[1] = (ulong)pbVar19;
            param_1[3] = uVar1;
            param_1[4] = (ulong)pbVar14;
            uVar13 = 6;
            goto LAB_00131cf4;
          }
          if ((0xc < (uint)uVar8) || (uVar2 == 0)) goto LAB_0013223c;
          local_70 = pbVar22 + uVar10 * *(long *)(&DAT_00114958 + uVar8 * 8);
          plVar12 = (long *)FUN_00132604(&local_70,uVar9);
          local_70 = pbVar14;
          uVar15 = (**(code **)(*plVar12 + 0x20))(plVar12,lVar7,&local_70);
          uVar17 = 0;
          uVar10 = 0;
        } while ((uVar15 & 1) == 0);
      }
    }
    else if ((param_2 & 6) == 2) {
      *param_1 = 0;
      param_1[1] = (ulong)pbVar19;
      param_1[3] = uVar1;
      lVar7 = FUN_0011cd44(param_4);
      if (lVar7 == 0x434c4e47432b2b01) {
        local_a8 = *(byte **)(param_4 + -0x58);
      }
      param_1[4] = (ulong)local_a8;
      uVar13 = 6;
      goto LAB_00131cf4;
    }
  }
  else {
    if (((pbVar22 == (byte *)0x0) || (0xc < (uint)uVar8)) || (uVar2 == 0)) goto LAB_0013222c;
    local_70 = pbVar22 + uVar16 * *(long *)(&DAT_00114958 + uVar8 * 8);
    plVar12 = (long *)FUN_00132604(&local_70,uVar9);
    if (plVar12 == (long *)0x0) {
      if ((param_2 & 5) != 0) {
LAB_00132168:
        *param_1 = uVar16;
        param_1[1] = (ulong)pbVar19;
        param_1[3] = uVar1;
        lVar7 = FUN_0011cd44(param_4);
        if (lVar7 == 0x434c4e47432b2b01) {
          local_a8 = *(byte **)(param_4 + -0x58);
        }
        param_1[4] = (ulong)local_a8;
        uVar13 = 6;
        goto LAB_00131cf4;
      }
      if ((param_2 >> 3 & 1) == 0) goto LAB_0013222c;
    }
    else if ((param_3 & 1) != 0) {
      lVar7 = FUN_0011cd44(param_4);
      local_70 = local_a8;
      if (lVar7 == 0x434c4e47432b2b01) {
        local_70 = *(byte **)(param_4 + -0x58);
      }
      pbVar20 = param_4;
      if ((local_70 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) goto LAB_00132248;
      uVar17 = (**(code **)(*plVar12 + 0x20))(plVar12,*(long *)(param_4 + -0x50),&local_70);
      if ((uVar17 & 1) != 0) {
        if ((param_2 & 1) != 0) {
          *param_1 = uVar16;
          param_1[1] = (ulong)pbVar19;
          *(undefined4 *)(param_1 + 5) = 6;
          param_1[3] = uVar1;
          param_1[4] = (ulong)local_70;
          goto LAB_00131cf8;
        }
LAB_001320e0:
        if ((param_2 >> 3 & 1) == 0) goto LAB_0013223c;
      }
    }
  }
  uVar17 = 0;
  uVar16 = 0;
  pbVar14 = pbVar18;
  do {
    bVar3 = *pbVar14;
    uVar16 = ((ulong)bVar3 & 0x7f) << (uVar17 & 0x3f) | uVar16;
    uVar17 = uVar17 + 7;
    pbVar14 = pbVar14 + 1;
  } while ((char)bVar3 < '\0');
  uVar10 = -1L << (uVar17 & 0x3f);
  if (((uint)(uVar17 < 0x40) & (bVar3 & 0x40) >> 6) == 0) {
    uVar10 = 0;
  }
  if ((uVar16 | uVar10) == 0) goto LAB_00132134;
  pbVar19 = pbVar18 + (uVar16 | uVar10);
  goto LAB_00131ee8;
LAB_00132134:
  uVar13 = 8;
LAB_00131cf4:
  *(undefined4 *)(param_1 + 5) = uVar13;
LAB_00131cf8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00132260:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132264  FUN_00132264 =====

void FUN_00132264(ulong param_1,long param_2)

{
  __cxa_begin_catch(param_2);
  if ((param_1 & 1) != 0) {
    FUN_0011d600(*(undefined8 *)(param_2 + -0x38));
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00132294  __cxa_call_unexpected =====

void __cxa_call_unexpected(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  byte *extraout_x9;
  undefined1 *unaff_x19;
  ulong uVar12;
  undefined **unaff_x23;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  byte *pbVar17;
  long lVar19;
  ulong uVar20;
  undefined *local_78;
  byte *local_70;
  undefined **local_68;
  byte *pbVar18;
  
  if (param_1 == 0) {
    param_1 = FUN_00132264(0,0);
  }
  __cxa_begin_catch();
  uVar6 = FUN_0011cd50(param_1);
  if ((uVar6 & 1) == 0) {
    uVar7 = std::get_terminate();
    uVar15 = std::get_unexpected();
    lVar14 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + -0x40);
    uVar7 = *(undefined8 *)(param_1 + -0x38);
    unaff_x19 = *(undefined1 **)(param_1 + -0x18);
    lVar14 = param_1 + -0x60;
    unaff_x23 = (undefined **)(long)(int)~*(uint *)(param_1 + -0x24);
  }
                    /* try { // try from 00132308 to 0013230b has its CatchHandler @ 0013230c */
  FUN_0011d5b4(uVar15);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00132308 with catch @ 0013230c
                        */
  __cxa_begin_catch();
  ppuVar13 = unaff_x23;
  if ((uVar6 & 1) != 0) {
    local_70 = unaff_x19 + 1;
                    /* try { // try from 00132320 to 00132327 has its CatchHandler @ 001325f0 */
    FUN_00132604(&local_70,*unaff_x19);
    bVar3 = *local_70;
    uVar6 = (ulong)bVar3;
    if (uVar6 != 0xff) goto LAB_00132340;
    do {
      FUN_0011d600(uVar7);
      local_70 = extraout_x9;
LAB_00132340:
      uVar10 = 0;
      uVar20 = 0;
      pbVar18 = local_70 + 1;
      do {
        pbVar17 = pbVar18 + 1;
        bVar2 = *pbVar18;
        uVar20 = ((ulong)bVar2 & 0x7f) << (uVar10 & 0x3f) | uVar20;
        uVar10 = uVar10 + 7;
        pbVar18 = pbVar17;
      } while ((char)bVar2 < '\0');
      local_70 = pbVar17;
                    /* try { // try from 00132368 to 0013236b has its CatchHandler @ 001325ec */
      plVar8 = (long *)__cxa_get_globals_fast();
      lVar19 = *plVar8;
    } while (lVar19 == 0);
    lVar1 = lVar19 + 0x60;
                    /* try { // try from 0013237c to 00132383 has its CatchHandler @ 001325e8 */
    uVar5 = FUN_0011cd50(lVar1);
    if ((lVar19 != lVar14) && (((uVar5 ^ 1) & 1) == 0)) {
      uVar15 = *(undefined8 *)(lVar19 + 0x10);
                    /* try { // try from 001323b4 to 001323b7 has its CatchHandler @ 001325e4 */
      lVar14 = FUN_0011cd44(lVar1);
      if (lVar14 == 0x434c4e47432b2b01) {
        ppuVar13 = *(undefined ***)(lVar19 + 8);
      }
      else {
        ppuVar13 = (undefined **)(lVar19 + 0x80);
      }
      uVar12 = uVar6 & 0xf;
      uVar10 = 0;
      uVar11 = 0;
      puVar16 = (undefined *)((long)unaff_x23 + uVar20);
      while( true ) {
        for (; uVar11 = ((ulong)pbVar17[(long)puVar16] & 0x7f) << (uVar10 & 0x3f) | uVar11,
            (char)pbVar17[(long)puVar16] < '\0'; puVar16 = puVar16 + 1) {
          uVar10 = uVar10 + 7;
        }
        if (uVar11 == 0) break;
        if ((0xc < (uint)uVar12) || ((0x1c1dU >> uVar12 & 1) == 0)) goto LAB_00132544;
        local_68 = (undefined **)(pbVar17 + uVar11 * *(long *)(&DAT_00114958 + uVar12 * 8) + uVar20)
        ;
                    /* try { // try from 0013244c to 0013246f has its CatchHandler @ 001325cc */
        plVar9 = (long *)FUN_00132604(&local_68,uVar6);
        local_68 = ppuVar13;
        uVar10 = (**(code **)(*plVar9 + 0x20))(plVar9,uVar15,&local_68);
        if ((uVar10 & 1) != 0) {
          *(int *)(lVar19 + 0x38) = -*(int *)(lVar19 + 0x38);
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                    /* try { // try from 001325b4 to 001325cb has its CatchHandler @ 001325e4 */
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar1);
          uVar15 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0013244c with catch @ 001325cc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00132320 with catch @ 001325f0
                        */
                    /* try { // try from 001325f4 to 001325f7 has its CatchHandler @ 00132600 */
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_00134fc0(uVar15);
        }
        uVar10 = 0;
        uVar11 = 0;
        puVar16 = puVar16 + 1;
      }
    }
    puVar4 = PTR_PTR_001412d0;
    ppuVar13 = (undefined **)PTR_vtable_001412c8;
    puVar16 = (undefined *)((long)unaff_x23 + uVar20);
    local_78 = PTR_vtable_001412c8 + 0x10;
    uVar11 = (ulong)(bVar3 + 6) & 0xf;
    uVar6 = 0;
    uVar10 = 0;
    while( true ) {
      for (; uVar10 = ((ulong)pbVar17[(long)puVar16] & 0x7f) << (uVar6 & 0x3f) | uVar10,
          (char)pbVar17[(long)puVar16] < '\0'; puVar16 = puVar16 + 1) {
        uVar6 = uVar6 + 7;
      }
      if (uVar10 == 0) goto LAB_00132550;
      if ((10 < (uint)uVar11) || ((0x747U >> uVar11 & 1) == 0)) goto LAB_00132544;
      local_68 = (undefined **)(pbVar17 + uVar10 * *(long *)(&DAT_001149c0 + uVar11 * 8) + uVar20);
                    /* try { // try from 0013250c to 0013252f has its CatchHandler @ 001325d4 */
      plVar8 = (long *)FUN_00132604(&local_68,(uint)bVar3);
      local_68 = &local_78;
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,puVar4,&local_68);
      if ((uVar6 & 1) != 0) break;
      uVar6 = 0;
      uVar10 = 0;
      puVar16 = puVar16 + 1;
    }
    goto LAB_00132568;
  }
  goto LAB_0013255c;
LAB_00132544:
  FUN_00132264(1,param_1);
LAB_00132550:
  std::bad_alloc::~bad_alloc((bad_alloc *)&local_78);
LAB_0013255c:
  __cxa_end_catch();
  FUN_0011d600(uVar7);
LAB_00132568:
                    /* try { // try from 00132568 to 0013256b has its CatchHandler @ 001325d0 */
  __cxa_end_catch();
  plVar8 = (long *)__cxa_allocate_exception(8);
  *plVar8 = (long)(ppuVar13 + 2);
                    /* try { // try from 0013257c to 0013258f has its CatchHandler @ 001325d0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar8,PTR_PTR_001412d0,PTR__bad_alloc_001412d8);
}


// ===== 00132604  FUN_00132604 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_00132604(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 == 0xff) {
    return (long *)0x0;
  }
  if (0xc < (param_2 & 0xf)) {
code_r0x00132778:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (uint *)*param_1;
  switch(param_2 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    puVar6 = puVar8 + 2;
    plVar4 = *(long **)puVar8;
    break;
  case 1:
    uVar9 = 0;
    plVar4 = (long *)0x0;
    puVar7 = puVar8;
    do {
      puVar6 = (uint *)((long)puVar7 + 1);
      uVar3 = *puVar7;
      plVar4 = (long *)(((ulong)(byte)uVar3 & 0x7f) << (uVar9 & 0x3f) | (ulong)plVar4);
      uVar9 = uVar9 + 7;
      puVar7 = puVar6;
    } while ((char)(byte)uVar3 < '\0');
    break;
  case 2:
    puVar6 = (uint *)((long)puVar8 + 2);
    plVar4 = (long *)(ulong)(ushort)*puVar8;
    break;
  case 3:
    puVar6 = puVar8 + 1;
    plVar4 = (long *)(ulong)*puVar8;
    break;
  default:
    goto code_r0x00132778;
  case 9:
    uVar9 = 0;
    uVar5 = 0;
    puVar7 = puVar8;
    do {
      puVar6 = (uint *)((long)puVar7 + 1);
      bVar2 = (byte)*puVar7;
      uVar5 = ((ulong)bVar2 & 0x7f) << (uVar9 & 0x3f) | uVar5;
      uVar9 = uVar9 + 7;
      puVar7 = puVar6;
    } while ((char)bVar2 < '\0');
    uVar10 = -1L << (uVar9 & 0x3f);
    if (((uint)(uVar9 < 0x40) & (bVar2 & 0x40) >> 6) == 0) {
      uVar10 = 0;
    }
    plVar4 = (long *)(uVar5 | uVar10);
    break;
  case 10:
    puVar6 = (uint *)((long)puVar8 + 2);
    plVar4 = (long *)(long)(short)*puVar8;
    break;
  case 0xb:
    puVar6 = puVar8 + 1;
    plVar4 = (long *)(long)(int)*puVar8;
  }
  uVar3 = uVar1 >> 4 & 7;
  if (uVar3 != 0) {
    if (uVar3 != 1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (plVar4 == (long *)0x0) goto LAB_00132708;
    plVar4 = (long *)((long)plVar4 + (long)puVar8);
  }
  if ((plVar4 != (long *)0x0) && (uVar1 >> 7 != 0)) {
    plVar4 = (long *)*plVar4;
  }
LAB_00132708:
  *param_1 = puVar6;
  return plVar4;
}


// ===== 0013277c  __cxa_pure_virtual =====

void __cxa_pure_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001319b8("Pure virtual function called!");
}


// ===== 00132794  __cxa_deleted_virtual =====

void __cxa_deleted_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001319b8("Deleted virtual function called!");
}


// ===== 001327ac  FUN_001327ac =====

void FUN_001327ac(size_t param_1)

{
  long lVar1;
  int iVar2;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    param_1 = 1;
  }
  iVar2 = posix_memalign(&local_30,0x10,param_1);
  if (iVar2 != 0) {
    local_30 = (void *)FUN_00132820(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_30);
  }
  return;
}


// ===== 00132820  FUN_00132820 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_00132820(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001456a0);
  if (DAT_001456c8 == (ushort *)0x0) {
    DAT_001456c8 = &DAT_001456d0;
    _DAT_001456d0 = 0x800080;
  }
  if (DAT_001456c8 != (ushort *)&DAT_001458d0) {
    uVar1 = (param_1 + 3U >> 2) + 1;
    puVar4 = (ushort *)0x0;
    puVar3 = DAT_001456c8;
    do {
      uVar2 = puVar3[1];
      if (uVar1 < uVar2) {
        uVar2 = uVar2 - (ushort)uVar1;
        puVar3[1] = uVar2;
        puVar3 = puVar3 + (ulong)uVar2 * 2;
        *puVar3 = 0;
        puVar3[1] = (ushort)uVar1;
        puVar4 = puVar3 + 2;
        goto LAB_001328f0;
      }
      if (uVar1 == uVar2) {
        if (puVar4 == (ushort *)0x0) {
          DAT_001456c8 = &DAT_001456d0 + (ulong)*puVar3 * 2;
        }
        else {
          *puVar4 = *puVar3;
        }
        puVar4 = puVar3 + 2;
        *puVar3 = 0;
        goto LAB_001328f0;
      }
      uVar2 = *puVar3;
      puVar4 = puVar3;
      puVar3 = &DAT_001456d0 + (ulong)uVar2 * 2;
    } while ((ulong)uVar2 != 0x80);
  }
  puVar4 = (ushort *)0x0;
LAB_001328f0:
                    /* try { // try from 001328f0 to 001328fb has its CatchHandler @ 00132910 */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_001456a0);
  return puVar4;
}


// ===== 00132914  FUN_00132914 =====

void * FUN_00132914(size_t param_1,size_t param_2)

{
  void *__s;
  
  __s = calloc(param_1,param_2);
  if (__s == (void *)0x0) {
    __s = (void *)FUN_00132820(param_2 * param_1);
    if (__s != (void *)0x0) {
      memset(__s,0,param_2 * param_1);
    }
  }
  return __s;
}


// ===== 00132978  FUN_00132978 =====

void FUN_00132978(undefined1 *param_1)

{
  if (((undefined1 *)((long)&DAT_001456c8 + 7) < param_1) && (param_1 < &DAT_001458d0)) {
    FUN_001329a4();
    return;
  }
  free(param_1);
  return;
}


// ===== 001329a4  FUN_001329a4 =====

int FUN_001329a4(long param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001456a0);
  if ((DAT_001456c8 != (ushort *)0x0) && (DAT_001456c8 != (ushort *)&DAT_001458d0)) {
    puVar3 = (ushort *)0x0;
    puVar4 = DAT_001456c8;
    do {
      uVar1 = puVar4[1];
      if (puVar4 + (ulong)uVar1 * 2 == puVar5) {
        puVar4[1] = *(short *)(param_1 + -2) + uVar1;
        goto LAB_00132a8c;
      }
      if (puVar5 + (ulong)*(ushort *)(param_1 + -2) * 2 == puVar4) {
        *(ushort *)(param_1 + -2) = *(ushort *)(param_1 + -2) + uVar1;
        if (puVar3 == (ushort *)0x0) {
          DAT_001456c8 = puVar5;
          *puVar5 = *puVar4;
        }
        else {
          *puVar3 = (ushort)((int)puVar5 - 0x1456d0U >> 2);
        }
        goto LAB_00132a8c;
      }
      uVar1 = *puVar4;
      puVar3 = puVar4;
      puVar4 = &DAT_001456d0 + (ulong)uVar1 * 2;
    } while ((ulong)uVar1 != 0x80);
  }
  *puVar5 = (ushort)((int)DAT_001456c8 - 0x1456d0U >> 2);
  DAT_001456c8 = puVar5;
LAB_00132a8c:
                    /* try { // try from 00132a8c to 00132a97 has its CatchHandler @ 00132aa8 */
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001456a0);
  return iVar2;
}


// ===== 00132aac  FUN_00132aac =====

void FUN_00132aac(undefined1 *param_1)

{
  if (((undefined1 *)((long)&DAT_001456c8 + 7) < param_1) && (param_1 < &DAT_001458d0)) {
    FUN_001329a4();
    return;
  }
  free(param_1);
  return;
}


// ===== 00132ad8  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  return;
}


// ===== 00132ae0  FUN_00132ae0 =====

void FUN_00132ae0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x132ae8);
  (*pcVar1)();
}


// ===== 00132ae8  FUN_00132ae8 =====

void FUN_00132ae8(void)

{
  return;
}


// ===== 00132af0  FUN_00132af0 =====

void FUN_00132af0(void)

{
  return;
}


// ===== 00132af8  FUN_00132af8 =====

void FUN_00132af8(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132b24  FUN_00132b24 =====

void FUN_00132b24(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132b50  FUN_00132b50 =====

void FUN_00132b50(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132b7c  FUN_00132b7c =====

void FUN_00132b7c(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132ba8  FUN_00132ba8 =====

void FUN_00132ba8(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132bd4  FUN_00132bd4 =====

void FUN_00132bd4(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132c00  FUN_00132c00 =====

void FUN_00132c00(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132c2c  FUN_00132c2c =====

void FUN_00132c2c(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132c58  FUN_00132c58 =====

void FUN_00132c58(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132c84  FUN_00132c84 =====

void FUN_00132c84(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00132cb0  FUN_00132cb0 =====

bool FUN_00132cb0(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00132cc8  FUN_00132cc8 =====

undefined8 FUN_00132cc8(void)

{
  return 0;
}


// ===== 00132cd4  FUN_00132cd4 =====

undefined8 FUN_00132cd4(void)

{
  return 0;
}


// ===== 00132ce0  FUN_00132ce0 =====

bool FUN_00132ce0(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00132cf8  FUN_00132cf8 =====

void FUN_00132cf8(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined8 uStack_41;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
    plVar2 = (long *)0x1;
  }
  else {
    plVar2 = (long *)__dynamic_cast(param_2,PTR_PTR_001412e0,PTR_PTR_001412e8,0);
    if (plVar2 != (long *)0x0) {
      uStack_80 = 0;
      uStack_70 = 0xffffffffffffffff;
      uStack_48 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_50 = 0;
      local_49 = 0;
      local_58 = 0;
      uStack_41 = 0x100;
      local_88 = plVar2;
      local_78 = param_1;
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_88,*param_3,1);
      plVar2 = (long *)(ulong)((int)local_58 == 1);
      if ((int)local_58 == 1) {
        *param_3 = local_68;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}


// ===== 00132de0  FUN_00132de0 =====

void FUN_00132de0(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(undefined4 *)(param_2 + 0x30) = param_4;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    return;
  }
  if (*(long *)(param_2 + 0x20) == param_3) {
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = 2;
    *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}


// ===== 00132e3c  FUN_00132e3c =====

void FUN_00132e3c(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}


// ===== 00132eb0  FUN_00132eb0 =====

void FUN_00132eb0(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) != *(long *)(*(long *)(param_2 + 0x10) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00132ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    if (*(long *)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
    return;
  }
  *(long *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x3c) = 1;
  return;
}


// ===== 00132f30  FUN_00132f30 =====

void FUN_00132f30(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[1];
  if (param_3 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)uVar2 >> 8;
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(*param_3 + lVar3);
    }
  }
  uVar1 = 2;
  if ((uVar2 & 2) != 0) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00132f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,param_2,(long)param_3 + lVar3,uVar1);
  return;
}


// ===== 00132f74  FUN_00132f74 =====

void FUN_00132f74(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
    }
    else if (*(long **)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (param_3 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (long)uVar3 >> 8;
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(*param_3 + lVar5);
      }
    }
    uVar1 = 2;
    if ((uVar3 & 2) != 0) {
      uVar1 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar5,uVar1);
    if (1 < uVar2) {
      uVar3 = param_1 + 0x38;
      do {
        uVar4 = *(ulong *)(uVar3 - 8);
        if (param_3 == (long *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (long)uVar4 >> 8;
          if ((uVar4 & 1) != 0) {
            lVar5 = *(long *)(*param_3 + lVar5);
          }
        }
        uVar1 = 2;
        if ((uVar4 & 2) != 0) {
          uVar1 = param_4;
        }
        (**(code **)(**(long **)(uVar3 - 0x10) + 0x38))
                  (*(long **)(uVar3 - 0x10),param_2,(long)param_3 + lVar5,uVar1);
      } while ((uVar3 < param_1 + (ulong)uVar2 * 0x10 + 0x18) &&
              (uVar3 = uVar3 + 0x10, *(char *)(param_2 + 0x4e) == '\0'));
    }
  }
  return;
}


// ===== 001330d0  FUN_001330d0 =====

bool FUN_001330d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
    if (param_2 == 0) {
      return false;
    }
    lVar2 = __dynamic_cast(param_2,PTR_PTR_001412e0,PTR_PTR_001412f0,0);
    if (lVar2 == 0) {
      return false;
    }
    if ((*(byte *)(lVar2 + 0x10) & 0x18) == 0) {
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    }
  }
  if (param_1 != param_2) {
    iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
    return iVar1 == 0;
  }
  return true;
}


// ===== 00133170  FUN_00133170 =====

long * FUN_00133170(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined8 uStack_51;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(undefined **)(param_2 + 8) == PTR_typeinfo_name_001412f8) {
    *param_3 = 0;
    plVar5 = (long *)0x1;
  }
  else if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
    lVar4 = __dynamic_cast(param_2,PTR_PTR_001412e0,PTR_PTR_001412f0,0);
    if (lVar4 != 0) {
      if ((*(byte *)(lVar4 + 0x10) & 0x18) != 0) goto LAB_001331c4;
      if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) goto LAB_0013323c;
      goto LAB_001331dc;
    }
LAB_0013323c:
    plVar3 = (long *)__dynamic_cast(param_2,PTR_PTR_001412e0,PTR_PTR_00141300,0);
    plVar5 = plVar3;
    if (plVar3 != (long *)0x0) {
      if ((long *)*param_3 != (long *)0x0) {
        *param_3 = *(long *)*param_3;
      }
      if (((*(uint *)(plVar3 + 2) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 7) != 0) ||
         ((*(uint *)(param_1 + 0x10) & (*(uint *)(plVar3 + 2) ^ 0xffffffff) & 0x60) != 0))
      goto LAB_00133290;
      puVar7 = *(undefined **)(*(long *)(param_1 + 0x18) + 8);
      if (puVar7 == *(undefined **)(plVar3[3] + 8)) goto LAB_00133304;
      if (puVar7 == PTR_typeinfo_name_00141308) {
        lVar4 = __dynamic_cast(plVar3[3],PTR_PTR_001412e0,PTR_PTR_00141310,0);
        plVar5 = (long *)(ulong)(lVar4 == 0);
      }
      else {
        lVar4 = __dynamic_cast(*(long *)(param_1 + 0x18),PTR_PTR_001412e0,PTR_PTR_00141300,0);
        if (lVar4 != 0) {
          if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
            plVar5 = (long *)FUN_001334a0(lVar4,plVar3[3]);
            if (*(long *)(lVar1 + 0x28) == local_48) {
              return (long *)(ulong)((uint)plVar5 & 1);
            }
            goto LAB_0013349c;
          }
          goto LAB_00133290;
        }
        plVar5 = *(long **)(param_1 + 0x18);
        if (plVar5 != (long *)0x0) {
          lVar4 = __dynamic_cast(plVar5,PTR_PTR_001412e0,PTR_PTR_00141318,0);
          if (lVar4 == 0) {
            plVar5 = *(long **)(param_1 + 0x18);
            if ((((plVar5 != (long *)0x0) &&
                 (plVar6 = (long *)__dynamic_cast(plVar5,PTR_PTR_001412e0,PTR_PTR_001412e8,0),
                 plVar5 = plVar6, plVar6 != (long *)0x0)) &&
                (plVar5 = (long *)plVar3[3], plVar5 != (long *)0x0)) &&
               (plVar5 = (long *)__dynamic_cast(plVar5,PTR_PTR_001412e0,PTR_PTR_001412e8,0),
               plVar5 != (long *)0x0)) {
              uStack_90 = 0;
              uStack_80 = 0xffffffffffffffff;
              uStack_58 = 0;
              uStack_70 = 0;
              local_78 = 0;
              uStack_60 = 0;
              local_59 = 0;
              local_68 = 0;
              uStack_51 = 0x100;
              local_98 = plVar5;
              local_88 = plVar6;
              (**(code **)(*plVar5 + 0x38))(plVar5,&local_98,*param_3,1);
              plVar5 = (long *)(ulong)((int)local_68 == 1);
              if ((*param_3 != 0) && ((int)local_68 == 1)) {
                *param_3 = local_78;
              }
            }
          }
          else if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
LAB_00133290:
            plVar5 = (long *)0x0;
          }
          else {
            plVar5 = (long *)plVar3[3];
            if ((plVar5 != (long *)0x0) &&
               (plVar5 = (long *)__dynamic_cast(plVar5,PTR_PTR_001412e0,PTR_PTR_00141318,0),
               plVar5 != (long *)0x0)) {
              if (((*(uint *)(plVar5 + 2) & (*(uint *)(lVar4 + 0x10) ^ 0xffffffff)) != 0) ||
                 (*(long *)(*(long *)(lVar4 + 0x18) + 8) != *(long *)(plVar5[3] + 8)))
              goto LAB_00133290;
              plVar5 = (long *)(ulong)(*(long *)(*(long *)(lVar4 + 0x20) + 8) ==
                                      *(long *)(plVar5[4] + 8));
            }
          }
        }
      }
    }
  }
  else {
LAB_001331c4:
    if ((param_1 != param_2) &&
       (iVar2 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8)), iVar2 != 0))
    goto LAB_0013323c;
LAB_001331dc:
    if ((long *)*param_3 != (long *)0x0) {
      *param_3 = *(long *)*param_3;
      plVar5 = (long *)0x1;
      goto LAB_00133308;
    }
LAB_00133304:
    plVar5 = (long *)0x1;
  }
LAB_00133308:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar5;
  }
LAB_0013349c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


// ===== 001334a0  FUN_001334a0 =====

bool FUN_001334a0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_00141300;
  puVar1 = PTR_PTR_001412e0;
  if (param_2 != 0) {
    do {
      lVar3 = __dynamic_cast(param_2,puVar1,puVar2,0);
      if (lVar3 == 0) {
        return false;
      }
      if ((*(uint *)(lVar3 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) != 0) {
        return false;
      }
      if (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar3 + 0x18) + 8)) {
        return true;
      }
      if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
        return false;
      }
      lVar4 = __dynamic_cast(*(long *)(param_1 + 0x18),puVar1,puVar2,0);
      if (lVar4 == 0) {
        if (*(long *)(param_1 + 0x18) == 0) {
          return false;
        }
        lVar4 = __dynamic_cast(*(long *)(param_1 + 0x18),PTR_PTR_001412e0,PTR_PTR_00141318,0);
        if (lVar4 == 0) {
          return false;
        }
        if (*(long *)(lVar3 + 0x18) == 0) {
          return false;
        }
        lVar3 = __dynamic_cast(*(long *)(lVar3 + 0x18),PTR_PTR_001412e0,PTR_PTR_00141318,0);
        if (lVar3 != 0) {
          if ((*(uint *)(lVar3 + 0x10) & (*(uint *)(lVar4 + 0x10) ^ 0xffffffff)) != 0) {
            return false;
          }
          if (*(long *)(*(long *)(lVar4 + 0x18) + 8) != *(long *)(*(long *)(lVar3 + 0x18) + 8)) {
            return false;
          }
          return *(long *)(*(long *)(lVar4 + 0x20) + 8) == *(long *)(*(long *)(lVar3 + 0x20) + 8);
        }
        return false;
      }
      param_2 = *(long *)(lVar3 + 0x18);
      param_1 = lVar4;
    } while (param_2 != 0);
  }
  return false;
}


// ===== 001335e4  FUN_001335e4 =====

bool FUN_001335e4(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((((param_2 == 0) ||
       (lVar2 = __dynamic_cast(param_2,PTR_PTR_001412e0,PTR_PTR_00141318,0), lVar2 == 0)) ||
      ((*(uint *)(lVar2 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) != 0)) ||
     (*(long *)(*(long *)(param_1 + 0x18) + 8) != *(long *)(*(long *)(lVar2 + 0x18) + 8))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8) == *(long *)(*(long *)(lVar2 + 0x20) + 8);
  }
  return bVar1;
}


// ===== 00133678  FUN_00133678 =====

ulong FUN_00133678(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (*(undefined **)(param_2 + 8) == PTR_typeinfo_name_001412f8) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = __dynamic_cast(*(long *)(param_1 + 0x18),PTR_PTR_001412e0,PTR_PTR_00141310,0),
       lVar2 == 0)) {
      puVar4 = &DAT_00114b08;
    }
    else {
      puVar4 = &DAT_00114af8;
    }
    *param_3 = puVar4;
LAB_001337ac:
    uVar3 = 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
      lVar2 = __dynamic_cast(param_2,PTR_PTR_001412e0,PTR_PTR_001412f0,0);
      if (lVar2 != 0) {
        if ((*(byte *)(lVar2 + 0x10) & 0x18) != 0) goto LAB_001336b4;
        if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) goto LAB_001337ac;
      }
    }
    else {
LAB_001336b4:
      if ((param_1 == param_2) ||
         (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8)), iVar1 == 0))
      goto LAB_001337ac;
    }
    uVar3 = __dynamic_cast(param_2,PTR_PTR_001412e0,PTR_PTR_00141318,0);
    if (uVar3 != 0) {
      if ((((*(uint *)(uVar3 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 7) == 0) &&
          ((*(uint *)(param_1 + 0x10) & (*(uint *)(uVar3 + 0x10) ^ 0xffffffff) & 0x60) == 0)) &&
         (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(uVar3 + 0x18) + 8))) {
        uVar3 = (ulong)(*(long *)(*(long *)(param_1 + 0x20) + 8) ==
                       *(long *)(*(long *)(uVar3 + 0x20) + 8));
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


// ===== 001337e0  __dynamic_cast =====

void __dynamic_cast(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined3 uStack_34;
  undefined8 uStack_31;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(*param_1 + -8);
  lStack_50 = 0;
  local_58 = 0;
  iStack_40 = 0;
  local_48 = 0;
  uStack_31 = 0;
  iStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x10);
  local_78 = param_3;
  plStack_70 = param_1;
  local_68 = param_2;
  uStack_60 = param_4;
  if (plVar1[1] == *(long *)(param_3 + 8)) {
    uStack_31 = 0x100;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_78,lVar3,lVar3,1,0);
    if ((int)local_48 != 1) {
      lVar3 = 0;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_78,lVar3,1,0);
    if (iStack_3c == 1) {
      if (((int)local_48 == 1) ||
         (((lVar3 = 0, local_38 == 0 && (local_48._4_4_ == 1)) && (iStack_40 == 1)))) {
        lVar3 = local_58;
      }
    }
    else if (iStack_3c == 0) {
      lVar3 = lStack_50;
      if ((iStack_40 != 1 || local_48._4_4_ != 1) || local_38 != 1) {
        lVar3 = 0;
      }
    }
    else {
      lVar3 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 00133920  FUN_00133920 =====

void FUN_00133920(undefined8 param_1,long param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x30) = param_5;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      if ((param_5 == 1) && (*(int *)(param_2 + 0x48) == 1)) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        return;
      }
    }
    else {
      if (*(long *)(param_2 + 0x20) != param_3) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        return;
      }
      iVar1 = *(int *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x30) == 2) {
        *(int *)(param_2 + 0x30) = param_5;
        iVar1 = param_5;
      }
      if ((*(int *)(param_2 + 0x48) == 1) && (iVar1 == 1)) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        return;
      }
    }
  }
  return;
}


// ===== 001339c4  FUN_001339c4 =====

void FUN_001339c4(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  if ((*(long *)(param_2 + 8) == param_3) && (*(int *)(param_2 + 0x34) != 1)) {
    *(undefined4 *)(param_2 + 0x34) = param_4;
    return;
  }
  return;
}


// ===== 001339ec  FUN_001339ec =====

void FUN_001339ec(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *__s1;
  undefined8 *puVar10;
  undefined4 uVar11;
  
  lVar6 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar6 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_00133acc:
        uVar7 = *(ulong *)(param_1 + 0x20);
        uVar1 = *(uint *)(param_1 + 0x14);
        lVar6 = (long)uVar7 >> 8;
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)(*param_3 + lVar6);
        }
        iVar5 = 2;
        if ((uVar7 & 2) != 0) {
          iVar5 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                  (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
        if (uVar1 < 2) {
          return;
        }
        puVar10 = (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18);
        puVar9 = (undefined8 *)(param_1 + 0x28);
        if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int *)((long)param_2 + 0x3c) == 1)) {
          do {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            uVar7 = puVar9[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            puVar8 = puVar9 + 2;
            iVar5 = 2;
            if ((uVar7 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar9 + 0x30))
                      ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
            puVar9 = puVar8;
          } while (puVar8 < puVar10);
          return;
        }
        if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            if (*(int *)((long)param_2 + 0x3c) == 1) break;
            uVar7 = puVar9[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            puVar8 = puVar9 + 2;
            iVar5 = 2;
            if ((uVar7 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar9 + 0x30))
                      ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
            puVar9 = puVar8;
            if (puVar10 <= puVar8) {
              return;
            }
          }
          return;
        }
        while( true ) {
          if (*(char *)((long)param_2 + 0x4e) != '\0') {
            return;
          }
          if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 1)) break;
          uVar7 = puVar9[1];
          lVar6 = (long)uVar7 >> 8;
          if ((uVar7 & 1) != 0) {
            lVar6 = *(long *)(*param_3 + lVar6);
          }
          puVar8 = puVar9 + 2;
          iVar5 = 2;
          if ((uVar7 & 2) != 0) {
            iVar5 = param_4;
          }
          (**(code **)(*(long *)*puVar9 + 0x30))
                    ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
          puVar9 = puVar8;
          if (puVar10 <= puVar8) {
            return;
          }
        }
        return;
      }
LAB_00133a60:
      if (((long *)param_2[4] == param_3) || ((long *)param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        uVar1 = *(uint *)(param_1 + 0x14);
        if (uVar1 == 0) {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          bVar3 = false;
          bVar2 = false;
          puVar10 = (undefined8 *)(param_1 + 0x18);
          do {
            *(undefined2 *)((long)param_2 + 0x4c) = 0;
            uVar7 = puVar10[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            uVar11 = 1;
            if ((uVar7 & 2) == 0) {
              uVar11 = 2;
            }
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,param_2,param_3,(long)param_3 + lVar6,uVar11,param_5 & 1);
            if (*(char *)((long)param_2 + 0x4e) != '\0') break;
            bVar4 = bVar3;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_00133d3c;
                bVar2 = true;
              }
              else {
                if ((int)param_2[6] == 1) {
                  bVar3 = true;
                  goto LAB_00133d3c;
                }
                bVar2 = true;
                bVar3 = bVar2;
                bVar4 = true;
                if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) goto LAB_00133d3c;
              }
            }
            bVar3 = bVar4;
            puVar10 = puVar10 + 2;
          } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
          if (bVar2) {
LAB_00133d3c:
            uVar11 = 3;
          }
          else {
            uVar11 = 4;
          }
          *(undefined4 *)((long)param_2 + 0x44) = uVar11;
          if (bVar3) {
            return;
          }
        }
      }
      param_2[5] = (long)param_3;
      *(int *)(param_2 + 8) = (int)param_2[8] + 1;
      if (*(int *)((long)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int)param_2[6] != 2) {
        return;
      }
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
      return;
    }
  }
  else if (param_1 != lVar6) {
    __s1 = *(char **)(param_1 + 8);
    iVar5 = strcmp(__s1,*(char **)(lVar6 + 8));
    if (iVar5 != 0) {
      if ((param_1 != *param_2) && (iVar5 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar5 != 0))
      goto LAB_00133acc;
      goto LAB_00133a60;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 00133d98  FUN_00133d98 =====

void FUN_00133d98(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00133dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x28))();
  return;
}


