// ===== 003df978  FUN_003df978 =====

void FUN_003df978(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003df980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}


// ===== 003df984  FUN_003df984 =====

undefined1 FUN_003df984(long param_1)

{
  return *(undefined1 *)(param_1 + 0x8c);
}


// ===== 003df98c  FUN_003df98c =====

void FUN_003df98c(long *param_1,undefined1 param_2)

{
  (**(code **)(*param_1 + 0xd8))();
  *(undefined1 *)(param_1 + 0x13) = param_2;
  return;
}


// ===== 003df9bc  FUN_003df9bc =====

void FUN_003df9bc(long param_1)

{
  *(undefined1 *)(param_1 + 0x8c) = 0;
  return;
}


// ===== 003df9c4  FUN_003df9c4 =====

void FUN_003df9c4(void)

{
  return;
}


// ===== 003df9c8  FUN_003df9c8 =====

undefined1  [16] FUN_003df9c8(void)

{
  return ZEXT816(0);
}


// ===== 003df9d0  FUN_003df9d0 =====

undefined1  [16] FUN_003df9d0(void)

{
  return ZEXT816(0);
}


// ===== 003df9d8  FUN_003df9d8 =====

undefined8 FUN_003df9d8(void)

{
  return 0;
}


// ===== 003df9e0  FUN_003df9e0 =====

undefined8 FUN_003df9e0(void)

{
  return 0;
}


// ===== 003df9e8  rive::ScrollPhysics::accumulate =====

/* rive::ScrollPhysics::accumulate(rive::Vec2D, float) */

void rive::ScrollPhysics::accumulate(float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*PTR_deterministicMode_0067cef8 == '\0') {
    lVar1 = std::__ndk1::chrono::steady_clock::now();
    lVar1 = lVar1 / 1000;
    param_3 = (float)(lVar1 - *(long *)(param_4 + 0x90)) / 1e+06;
  }
  else {
    lVar1 = (long)param_3;
    param_3 = param_3 - (float)*(long *)(param_4 + 0x90);
  }
  *(long *)(param_4 + 0x90) = lVar1;
  if (param_3 != 0.0 && param_3 < 0.0 == NAN(param_3)) {
    uVar2 = *(undefined8 *)(param_4 + 0x9c);
    *(ulong *)(param_4 + 0x9c) = CONCAT44(param_2 / param_3,param_1 / param_3);
    *(ulong *)(param_4 + 0xa4) =
         CONCAT44((param_2 / param_3 + (float)((ulong)uVar2 >> 0x20)) / param_3,
                  (param_1 / param_3 + (float)uVar2) / param_3);
  }
  return;
}


// ===== 003dfaa0  rive::ScrollPhysics::reset =====

/* rive::ScrollPhysics::reset() */

void __thiscall rive::ScrollPhysics::reset(ScrollPhysics *this)

{
  long lVar1;
  
  if (*PTR_deterministicMode_0067cef8 == '\0') {
    lVar1 = std::__ndk1::chrono::steady_clock::now();
    lVar1 = lVar1 / 1000;
  }
  else {
    lVar1 = 0;
  }
  *(long *)(this + 0x90) = lVar1;
  *(undefined8 *)(this + 0xa4) = 0;
                    /* WARNING: Could not recover jumptable at 0x003dfb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xd0))();
  return;
}


// ===== 003dfb0c  rive::ScrollPhysics::import =====

/* rive::ScrollPhysics::import(rive::ImportStack&) */

undefined8 __thiscall rive::ScrollPhysics::import(ScrollPhysics *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar9 = NEON_cnt(uVar4,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
  if ((uVar10 & 0xffffffff) < 2) {
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x17;
  }
  else {
    uVar5 = 0x17;
    if (uVar4 < 0x18) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar2 = 0x17 / uVar1;
      }
      uVar5 = (ulong)(0x17 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == 0x17) {
        if ((short)plVar6[2] == 0x17) {
          if ((BackboardImporter *)plVar6[3] == (BackboardImporter *)0x0) {
            return 1;
          }
          BackboardImporter::addPhysics((BackboardImporter *)plVar6[3],this);
          return 0;
        }
      }
      else {
        if ((uVar10 & 0xffffffff) < 2) {
          uVar7 = uVar7 & uVar4 - 1;
        }
        else if (uVar4 <= uVar7) {
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = uVar7 / uVar4;
          }
          uVar7 = uVar7 - uVar3 * uVar4;
        }
        if (uVar7 != uVar5) {
          return 1;
        }
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return 1;
}


// ===== 003dfbf8  FUN_003dfbf8 =====

void FUN_003dfbf8(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003dfc64  FUN_003dfc64 =====

undefined8 FUN_003dfc64(void)

{
  return 0x20b;
}


// ===== 003dfc6c  FUN_003dfc6c =====

bool FUN_003dfc6c(undefined8 param_1,short param_2)

{
  return param_2 == 0x20b || param_2 == 10;
}


// ===== 003dfc80  FUN_003dfc80 =====

undefined1  [16] FUN_003dfc80(void)

{
  return ZEXT816(0);
}


// ===== 003dfc8c  FUN_003dfc8c =====

undefined1  [16] FUN_003dfc8c(void)

{
  return ZEXT816(0);
}


// ===== 003dfc98  FUN_003dfc98 =====

void FUN_003dfc98(long param_1)

{
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return;
}


// ===== 003dfca4  rive::ElasticScrollPhysics::advance =====

/* rive::ElasticScrollPhysics::advance(float) */

float __thiscall rive::ElasticScrollPhysics::advance(ElasticScrollPhysics *this,float param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  pfVar1 = *(float **)(this + 0xb8);
  if (pfVar1 == (float *)0x0) {
LAB_003dfdac:
    pfVar2 = *(float **)(this + 0xc0);
  }
  else {
    fVar4 = pfVar1[5];
    if (fVar4 == 0.0) {
      fVar9 = pfVar1[3];
      fVar4 = pfVar1[4];
      if (DAT_0024e750 <= (double)ABS(fVar9 - fVar4)) {
        uVar6 = NEON_fminnm(param_1 * 15.0,0x3f800000);
        fVar9 = (float)NEON_fmadd(fVar9 - fVar4,uVar6,fVar4);
        pfVar1[4] = fVar9;
        goto LAB_003dfdac;
      }
      *(undefined1 *)(pfVar1 + 9) = 0;
      if (!NAN(pfVar1[6])) {
        fVar9 = pfVar1[6];
      }
      pfVar1[4] = fVar9;
      pfVar2 = *(float **)(this + 0xc0);
    }
    else {
      fVar9 = (float)NEON_fmadd(fVar4,param_1,pfVar1[4]);
      fVar3 = pfVar1[7];
      pfVar1[4] = fVar9;
      if (fVar3 <= fVar9) {
        fVar8 = pfVar1[8];
        fVar5 = *pfVar1;
        if (fVar9 != fVar8 && fVar9 < fVar8 == (NAN(fVar9) || NAN(fVar8))) goto LAB_003dfd38;
      }
      else {
        fVar5 = *pfVar1;
LAB_003dfd38:
        fVar5 = fVar5 * 4.0;
        *pfVar1 = fVar5;
      }
      uVar6 = NEON_fminnm(fVar5 * param_1,0x3f800000);
      fVar4 = (float)NEON_fmsub(fVar4,uVar6,fVar4);
      pfVar1[5] = fVar4;
      if (5.0 <= ABS(fVar4)) goto LAB_003dfdac;
      pfVar1[5] = 0.0;
      if ((fVar9 < fVar3) ||
         (fVar3 = pfVar1[8], fVar9 != fVar3 && fVar9 < fVar3 == (NAN(fVar9) || NAN(fVar3)))) {
        pfVar1[3] = fVar3;
        pfVar2 = *(float **)(this + 0xc0);
      }
      else {
        pfVar1[3] = fVar9;
        pfVar2 = *(float **)(this + 0xc0);
      }
    }
  }
  if (pfVar2 == (float *)0x0) goto LAB_003dfeb0;
  fVar4 = pfVar2[5];
  if (fVar4 == 0.0) {
    fVar4 = pfVar2[3];
    fVar3 = pfVar2[4];
    if (DAT_0024e750 <= (double)ABS(fVar4 - fVar3)) {
      uVar6 = NEON_fminnm(param_1 * 15.0,0x3f800000);
      fVar4 = (float)NEON_fmadd(fVar4 - fVar3,uVar6,fVar3);
      pfVar2[4] = fVar4;
    }
    else {
      *(undefined1 *)(pfVar2 + 9) = 0;
      if (!NAN(pfVar2[6])) {
        fVar4 = pfVar2[6];
      }
      pfVar2[4] = fVar4;
    }
    goto LAB_003dfeb0;
  }
  fVar8 = (float)NEON_fmadd(fVar4,param_1,pfVar2[4]);
  fVar3 = pfVar2[7];
  pfVar2[4] = fVar8;
  if (fVar3 <= fVar8) {
    fVar5 = pfVar2[8];
    fVar7 = *pfVar2;
    if (fVar8 != fVar5 && fVar8 < fVar5 == (NAN(fVar8) || NAN(fVar5))) goto LAB_003dfe24;
  }
  else {
    fVar7 = *pfVar2;
LAB_003dfe24:
    fVar7 = fVar7 * 4.0;
    *pfVar2 = fVar7;
  }
  uVar6 = NEON_fminnm(fVar7 * param_1,0x3f800000);
  fVar4 = (float)NEON_fmsub(fVar4,uVar6,fVar4);
  pfVar2[5] = fVar4;
  if (ABS(fVar4) < 5.0) {
    pfVar2[5] = 0.0;
    if (fVar3 <= fVar8) {
      fVar4 = pfVar2[8];
      if (fVar8 == fVar4 || fVar8 < fVar4 != (NAN(fVar8) || NAN(fVar4))) {
        pfVar2[3] = fVar8;
      }
      else {
        pfVar2[3] = fVar4;
      }
    }
    else {
      pfVar2[3] = fVar3;
    }
  }
LAB_003dfeb0:
  if (pfVar1 != (float *)0x0) {
    pfVar1 = (float *)(ulong)(*(char *)(pfVar1 + 9) != '\0');
  }
  if (pfVar2 != (float *)0x0) {
    pfVar2 = (float *)(ulong)(*(char *)(pfVar2 + 9) != '\0');
  }
  if ((((uint)pfVar1 | (uint)pfVar2) & 1) == 0) {
    (**(code **)(*(long *)this + 0xd8))();
  }
  return fVar9;
}


// ===== 003dfef8  rive::ElasticScrollPhysicsHelper::advance =====

/* rive::ElasticScrollPhysicsHelper::advance(float) */

void __thiscall
rive::ElasticScrollPhysicsHelper::advance(ElasticScrollPhysicsHelper *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(this + 0x14);
  if (fVar4 == 0.0) {
    fVar4 = *(float *)(this + 0xc);
    fVar1 = *(float *)(this + 0x10);
    if (DAT_0024e750 <= (double)ABS(fVar4 - fVar1)) {
      uVar2 = NEON_fminnm(param_1 * 15.0,0x3f800000);
      uVar2 = NEON_fmadd(fVar4 - fVar1,uVar2,fVar1);
      *(undefined4 *)(this + 0x10) = uVar2;
      return;
    }
    this[0x24] = (ElasticScrollPhysicsHelper)0x0;
    if (!NAN(*(float *)(this + 0x18))) {
      fVar4 = *(float *)(this + 0x18);
    }
    *(float *)(this + 0x10) = fVar4;
    return;
  }
  fVar3 = *(float *)(this + 0x1c);
  fVar1 = (float)NEON_fmadd(fVar4,param_1,*(undefined4 *)(this + 0x10));
  *(float *)(this + 0x10) = fVar1;
  if (fVar3 <= fVar1) {
    fVar6 = *(float *)(this + 0x20);
    fVar5 = *(float *)this;
    if (fVar1 == fVar6 || fVar1 < fVar6 != (NAN(fVar1) || NAN(fVar6))) goto LAB_003dff78;
  }
  else {
    fVar5 = *(float *)this;
  }
  fVar5 = fVar5 * 4.0;
  *(float *)this = fVar5;
LAB_003dff78:
  uVar2 = NEON_fminnm(fVar5 * param_1,0x3f800000);
  fVar4 = (float)NEON_fmsub(fVar4,uVar2,fVar4);
  *(float *)(this + 0x14) = fVar4;
  if (ABS(fVar4) < 5.0) {
    *(undefined4 *)(this + 0x14) = 0;
    if (fVar1 < fVar3) {
      *(float *)(this + 0xc) = fVar3;
      return;
    }
    fVar4 = *(float *)(this + 0x20);
    if (fVar1 != fVar4 && fVar1 < fVar4 == (NAN(fVar1) || NAN(fVar4))) {
      *(float *)(this + 0xc) = fVar4;
      return;
    }
    *(float *)(this + 0xc) = fVar1;
  }
  return;
}


// ===== 003dffec  rive::ElasticScrollPhysics::clamp =====

/* rive::ElasticScrollPhysics::clamp(rive::Vec2D, rive::Vec2D, rive::Vec2D) */

float rive::ElasticScrollPhysics::clamp
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,long param_7)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_7 + 0xb8);
  fVar2 = 0.0;
  if (lVar1 != 0) {
    if (param_1 <= param_5) {
      fVar2 = param_5;
      if (param_5 != param_3 && param_5 < param_3 == (NAN(param_5) || NAN(param_3))) {
        fVar2 = powf(param_3 + param_5,*(float *)(lVar1 + 8));
        fVar2 = param_3 + fVar2;
      }
    }
    else {
      fVar2 = powf(-(param_5 - param_1),*(float *)(lVar1 + 8));
      fVar2 = param_1 - fVar2;
    }
  }
  lVar1 = *(long *)(param_7 + 0xc0);
  if (lVar1 != 0) {
    if (param_2 <= param_6) {
      if (param_6 != param_4 && param_6 < param_4 == (NAN(param_6) || NAN(param_4))) {
        powf(param_4 + param_6,*(float *)(lVar1 + 8));
      }
    }
    else {
      powf(-(param_6 - param_2),*(float *)(lVar1 + 8));
    }
  }
  return fVar2;
}


// ===== 003e00d0  rive::ElasticScrollPhysicsHelper::clamp =====

/* rive::ElasticScrollPhysicsHelper::clamp(float, float, float) */

float __thiscall
rive::ElasticScrollPhysicsHelper::clamp
          (ElasticScrollPhysicsHelper *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (param_1 <= param_3) {
    if (param_3 != param_2 && param_3 < param_2 == (NAN(param_3) || NAN(param_2))) {
      fVar1 = powf(param_2 + param_3,*(float *)(this + 8));
      param_3 = fVar1 + param_2;
    }
  }
  else {
    fVar1 = powf(-(param_3 - param_1),*(float *)(this + 8));
    param_3 = param_1 - fVar1;
  }
  return param_3;
}


// ===== 003e0134  rive::ElasticScrollPhysics::run =====

/* rive::ElasticScrollPhysics::run(rive::Vec2D, rive::Vec2D, rive::Vec2D,
   std::__ndk1::vector<rive::Vec2D, std::__ndk1::allocator<rive::Vec2D> >, float, float) */

void rive::ElasticScrollPhysics::run
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,long *param_10)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 *__src;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  ElasticScrollPhysicsHelper *pEVar25;
  undefined4 uVar24;
  void *local_110;
  long local_108;
  long local_100;
  void *local_f8;
  long local_f0;
  long local_e8;
  undefined4 *local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  puVar16 = (undefined4 *)*param_10;
  puVar1 = (undefined4 *)param_10[1];
  if (puVar1 == puVar16) {
    __src = (undefined4 *)0x0;
    puVar14 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)0x0;
    *(undefined1 *)(param_9 + 0x8c) = 1;
    local_c8 = (undefined4 *)0x0;
    local_c0 = (undefined4 *)0x0;
    local_b8 = (undefined4 *)0x0;
    local_e0 = (undefined4 *)0x0;
    local_d8 = (undefined4 *)0x0;
    local_d0 = (undefined4 *)0x0;
  }
  else {
    if ((long)puVar1 - (long)puVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00371ef8();
    }
    local_c8 = (undefined4 *)0x0;
    local_c0 = (undefined4 *)0x0;
    *(undefined1 *)(param_9 + 0x8c) = 1;
    local_b8 = (undefined4 *)0x0;
    local_e0 = (undefined4 *)0x0;
    local_d8 = (undefined4 *)0x0;
    local_d0 = (undefined4 *)0x0;
    if (puVar16 == puVar1) {
      __src = (undefined4 *)0x0;
      puVar14 = (undefined4 *)0x0;
      puVar19 = (undefined4 *)0x0;
    }
    else {
      puVar19 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      puVar18 = (undefined4 *)0x0;
      puVar12 = (undefined4 *)0x0;
      puVar13 = (undefined4 *)0x0;
      do {
        puVar6 = local_d8;
        uVar24 = *puVar16;
        uVar23 = puVar16[1];
        if (puVar19 < puVar18) {
          *puVar19 = uVar24;
          __src = puVar12;
          puVar14 = puVar19;
        }
        else {
          lVar17 = (long)puVar19 - (long)puVar12;
          uVar5 = (lVar17 >> 2) + 1;
          if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0033dc4c(&local_c8);
          }
          uVar7 = (long)puVar18 - (long)puVar12 >> 1;
          if (uVar7 <= uVar5) {
            uVar7 = uVar5;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar18 - (long)puVar12)) {
            uVar7 = 0x3fffffffffffffff;
          }
          if (uVar7 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            if (uVar7 >> 0x3e != 0) goto LAB_003e06b8;
            pvVar4 = operator_new(uVar7 << 2);
          }
          puVar14 = (undefined4 *)((long)pvVar4 + (lVar17 >> 2) * 4);
          *puVar14 = uVar24;
          __src = puVar14;
          if ((long)puVar19 - (long)puVar12 != 0) {
            uVar5 = ((long)puVar19 - (long)puVar12) - 4;
            if ((((0xab < uVar5) &&
                 (uVar8 = (long)pvVar4 + lVar17 + -4, uVar8 - (uVar5 & 0xfffffffffffffffc) <= uVar8)
                 ) && ((undefined4 *)((long)(puVar19 + -1) - (uVar5 & 0xfffffffffffffffc)) <=
                       puVar19 + -1)) && (0x1f < (ulong)((long)puVar19 + (-lVar17 - (long)pvVar4))))
            {
              puVar10 = (undefined8 *)(puVar14 + -4);
              puVar11 = (undefined8 *)(puVar19 + -4);
              uVar5 = (uVar5 >> 2) + 1;
              uVar9 = uVar5 & 0x7ffffffffffffff8;
              puVar19 = puVar19 + -uVar9;
              uVar8 = uVar9;
              do {
                puVar3 = puVar11 + -1;
                uVar22 = puVar11[-2];
                uVar21 = puVar11[1];
                uVar20 = *puVar11;
                uVar8 = uVar8 - 8;
                puVar11 = puVar11 + -4;
                puVar10[-1] = *puVar3;
                puVar10[-2] = uVar22;
                puVar10[1] = uVar21;
                *puVar10 = uVar20;
                puVar10 = puVar10 + -4;
              } while (uVar8 != 0);
              __src = puVar14 + -uVar9;
              if (uVar5 == uVar9) goto LAB_003e029c;
            }
            do {
              puVar19 = puVar19 + -1;
              __src = __src + -1;
              *__src = *puVar19;
            } while (puVar19 != puVar12);
          }
LAB_003e029c:
          puVar18 = (undefined4 *)((long)pvVar4 + uVar7 * 4);
          local_c8 = __src;
          local_b8 = puVar18;
          if (puVar12 != (undefined4 *)0x0) {
            operator_delete(puVar12);
          }
        }
        puVar19 = puVar14 + 1;
        local_c0 = puVar19;
        if (puVar6 < puVar15) {
          *puVar6 = uVar23;
          puVar14 = puVar13;
          puVar12 = puVar6;
        }
        else {
          lVar17 = (long)puVar6 - (long)puVar13;
          uVar5 = (lVar17 >> 2) + 1;
          if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0033dc4c(&local_e0);
          }
          uVar7 = (long)puVar15 - (long)puVar13 >> 1;
          if (uVar7 <= uVar5) {
            uVar7 = uVar5;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar15 - (long)puVar13)) {
            uVar7 = 0x3fffffffffffffff;
          }
          if (uVar7 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            if (uVar7 >> 0x3e != 0) {
LAB_003e06b8:
                    /* WARNING: Subroutine does not return */
              FUN_00324008();
            }
            pvVar4 = operator_new(uVar7 << 2);
          }
          puVar12 = (undefined4 *)((long)pvVar4 + (lVar17 >> 2) * 4);
          *puVar12 = uVar23;
          puVar14 = puVar12;
          if ((long)puVar6 - (long)puVar13 != 0) {
            uVar5 = ((long)puVar6 - (long)puVar13) - 4;
            if (((0xab < uVar5) &&
                (uVar8 = (long)pvVar4 + lVar17 + -4, uVar8 - (uVar5 & 0xfffffffffffffffc) <= uVar8))
               && (((undefined4 *)((long)(puVar6 + -1) - (uVar5 & 0xfffffffffffffffc)) <=
                    puVar6 + -1 && (0x1f < (ulong)((long)puVar6 + (-lVar17 - (long)pvVar4)))))) {
              puVar10 = (undefined8 *)(puVar12 + -4);
              puVar11 = (undefined8 *)(puVar6 + -4);
              uVar5 = (uVar5 >> 2) + 1;
              uVar9 = uVar5 & 0x7ffffffffffffff8;
              puVar6 = puVar6 + -uVar9;
              uVar8 = uVar9;
              do {
                puVar3 = puVar11 + -1;
                uVar22 = puVar11[-2];
                uVar21 = puVar11[1];
                uVar20 = *puVar11;
                uVar8 = uVar8 - 8;
                puVar11 = puVar11 + -4;
                puVar10[-1] = *puVar3;
                puVar10[-2] = uVar22;
                puVar10[1] = uVar21;
                *puVar10 = uVar20;
                puVar10 = puVar10 + -4;
              } while (uVar8 != 0);
              puVar14 = puVar12 + -uVar9;
              if (uVar5 == uVar9) goto LAB_003e034c;
            }
            do {
              puVar6 = puVar6 + -1;
              puVar14 = puVar14 + -1;
              *puVar14 = *puVar6;
            } while (puVar6 != puVar13);
          }
LAB_003e034c:
          puVar15 = (undefined4 *)((long)pvVar4 + uVar7 * 4);
          local_e0 = puVar14;
          local_d0 = puVar15;
          if (puVar13 != (undefined4 *)0x0) {
            operator_delete(puVar13);
          }
        }
        local_d8 = puVar12 + 1;
        puVar16 = puVar16 + 2;
        puVar12 = __src;
        puVar13 = puVar14;
      } while (puVar16 != puVar1);
    }
  }
  puVar16 = local_d8;
  lVar17 = *(long *)(param_9 + 0xb8);
  if (lVar17 != 0) {
                    /* WARNING: Load size is inaccurate */
    pEVar25._0_4_ = *(ElasticScrollPhysicsHelper **)(param_9 + 0xa4);
    uVar5 = (long)puVar19 - (long)__src;
    local_f0 = 0;
    local_e8 = 0;
    local_f8 = (void *)0x0;
    if (uVar5 == 0) {
      ElasticScrollPhysicsHelper::run
                (pEVar25._0_4_,param_1,param_3,param_5,param_7,param_8,lVar17,&local_f8);
      lVar17 = *(long *)(param_9 + 0xc0);
      goto joined_r0x003e055c;
    }
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0033dc4c(&local_f8);
    }
    pvVar4 = operator_new(uVar5);
    local_f8 = pvVar4;
    local_e8 = (long)pvVar4 + uVar5;
    memcpy(pvVar4,__src,uVar5);
    local_f0 = (long)pvVar4 + uVar5;
    ElasticScrollPhysicsHelper::run
              (pEVar25._0_4_,param_1,param_3,param_5,param_7,param_8,lVar17,&local_f8);
    operator_delete(pvVar4);
  }
  lVar17 = *(long *)(param_9 + 0xc0);
joined_r0x003e055c:
  if (lVar17 != 0) {
                    /* WARNING: Load size is inaccurate */
    pEVar25._0_4_ = *(ElasticScrollPhysicsHelper **)(param_9 + 0xa8);
    uVar5 = (long)puVar16 - (long)puVar14;
    local_108 = 0;
    local_100 = 0;
    local_110 = (void *)0x0;
    if (uVar5 == 0) {
      ElasticScrollPhysicsHelper::run
                (pEVar25._0_4_,param_2,param_4,param_6,param_7,param_8,lVar17,&local_110);
    }
    else {
      if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0033dc4c(&local_110);
      }
      pvVar4 = operator_new(uVar5);
      local_110 = pvVar4;
      local_100 = (long)pvVar4 + uVar5;
      memcpy(pvVar4,puVar14,uVar5);
      local_108 = (long)pvVar4 + uVar5;
      ElasticScrollPhysicsHelper::run
                (pEVar25._0_4_,param_2,param_4,param_6,param_7,param_8,lVar17,&local_110);
      operator_delete(pvVar4);
    }
  }
  if (puVar14 != (undefined4 *)0x0) {
    operator_delete(puVar14);
  }
  if (__src == (undefined4 *)0x0) {
    if (*(long *)(lVar2 + 0x28) == local_b0) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_b0) {
    operator_delete(__src);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e06e4  rive::ElasticScrollPhysicsHelper::run =====

/* rive::ElasticScrollPhysicsHelper::run(float, float, float, float, std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >, float, float) */

void __thiscall
rive::ElasticScrollPhysicsHelper::run
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          ElasticScrollPhysicsHelper *this,long *param_8)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar4;
  
  fVar8 = ABS(param_1);
  fVar5 = 0.0;
  *(float *)(this + 0x1c) = param_2;
  *(float *)(this + 0x20) = param_3;
  this[0x24] = (ElasticScrollPhysicsHelper)0x1;
  if (fVar8 != 100.0 && fVar8 < 100.0 == NAN(fVar8)) {
    fVar5 = param_1 * 0.16 * 0.16 * 0.1 * *(float *)(this + 4);
  }
  *(float *)(this + 0x14) = fVar5;
  if (param_2 <= param_4) {
    if (param_4 == param_3 || param_4 < param_3 != (NAN(param_4) || NAN(param_3))) {
      *(float *)(this + 0xc) = param_4;
    }
    else {
      *(float *)(this + 0xc) = param_3;
    }
  }
  else {
    *(float *)(this + 0xc) = param_2;
  }
  pfVar3 = (float *)*param_8;
  pfVar1 = (float *)param_8[1];
  *(float *)(this + 0x10) = param_4;
  if (pfVar3 == pfVar1) {
    fVar5 = NAN;
  }
  else {
    fVar8 = *(float *)this;
    if (param_5 == 0.0) {
      param_5 = 1.0;
    }
    fVar5 = -(fVar5 / fVar8 + param_4);
    if (param_3 == INFINITY) {
      fVar9 = -param_5;
      if (0.0 <= param_5) {
        fVar9 = param_5;
      }
      fVar10 = (float)(int)(float)(int)(fVar5 / param_5);
      fVar5 = fmodf(fVar5,fVar9);
      if (0.0 <= fVar5) {
        fVar9 = -0.0;
      }
      fVar5 = fVar5 + fVar9;
      param_6 = INFINITY;
    }
    else {
      fVar10 = 0.0;
      if (param_6 == 0.0) {
        param_6 = 1.0;
      }
      param_6 = param_5 - param_6;
    }
    fVar9 = 0.0;
    fVar2 = 3.4028235e+38;
    do {
      pfVar4 = pfVar3 + 1;
      fVar7 = ABS(*pfVar3 - fVar5);
      fVar6 = (float)NEON_fmadd(fVar10,param_5,*pfVar3);
      if (fVar2 <= fVar7) {
        fVar7 = fVar2;
        fVar6 = fVar9;
      }
      fVar9 = fVar6;
      fVar2 = fVar7;
      pfVar3 = pfVar4;
    } while (pfVar4 != pfVar1);
    if (fVar9 <= param_6) {
      param_6 = fVar9;
    }
    fVar5 = -param_6;
    *(float *)(this + 0x14) = -((param_6 + param_4) * fVar8);
  }
  *(float *)(this + 0x18) = fVar5;
  return;
}


// ===== 003e087c  rive::ElasticScrollPhysics::prepare =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ElasticScrollPhysics::prepare(rive::DraggableConstraintDirection) */

void __thiscall
rive::ElasticScrollPhysics::prepare(ElasticScrollPhysics *this,ElasticScrollPhysics param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  (**(code **)(*(long *)this + 0xd8))();
  this[0x98] = param_2;
  if (((byte)param_2 & 0xfd) == 0) {
    uVar6 = *(undefined4 *)(this + 0xb4);
    puVar3 = (undefined8 *)operator_new(0x28);
    uVar5 = *(undefined8 *)(this + 0xac);
    *(undefined8 *)((long)puVar3 + 0x1c) = 0;
    uVar2 = _UNK_0024e128;
    uVar1 = _DAT_0024e120;
    *(undefined1 *)((long)puVar3 + 0x24) = 0;
    *puVar3 = uVar5;
    pvVar4 = *(void **)(this + 0xb8);
    *(undefined8 *)((long)puVar3 + 0x14) = uVar2;
    *(undefined8 *)((long)puVar3 + 0xc) = uVar1;
    *(undefined4 *)(puVar3 + 1) = uVar6;
    *(undefined8 **)(this + 0xb8) = puVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  if ((byte)param_2 - 1 < 2) {
    uVar6 = *(undefined4 *)(this + 0xb4);
    puVar3 = (undefined8 *)operator_new(0x28);
    uVar5 = *(undefined8 *)(this + 0xac);
    *(undefined8 *)((long)puVar3 + 0x1c) = 0;
    uVar2 = _UNK_0024e128;
    uVar1 = _DAT_0024e120;
    *(undefined1 *)((long)puVar3 + 0x24) = 0;
    *puVar3 = uVar5;
    pvVar4 = *(void **)(this + 0xc0);
    *(undefined8 *)((long)puVar3 + 0x14) = uVar2;
    *(undefined8 *)((long)puVar3 + 0xc) = uVar1;
    *(undefined4 *)(puVar3 + 1) = uVar6;
    *(undefined8 **)(this + 0xc0) = puVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
      return;
    }
  }
  return;
}


// ===== 003e0968  rive::ElasticScrollPhysics::reset =====

/* rive::ElasticScrollPhysics::reset() */

void __thiscall rive::ElasticScrollPhysics::reset(ElasticScrollPhysics *this)

{
  void *pvVar1;
  long lVar2;
  
  if (*PTR_deterministicMode_0067cef8 == '\0') {
    lVar2 = std::__ndk1::chrono::steady_clock::now();
    lVar2 = lVar2 / 1000;
  }
  else {
    lVar2 = 0;
  }
  *(long *)(this + 0x90) = lVar2;
  *(undefined8 *)(this + 0xa4) = 0;
  (**(code **)(*(long *)this + 0xd0))(this);
  pvVar1 = *(void **)(this + 0xb8);
  *(undefined8 *)(this + 0xb8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xc0);
  *(undefined8 *)(this + 0xc0) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 003e09fc  rive::ElasticScrollPhysicsHelper::scrollTo =====

/* rive::ElasticScrollPhysicsHelper::scrollTo(float, float, float, float) */

void __thiscall
rive::ElasticScrollPhysicsHelper::scrollTo
          (ElasticScrollPhysicsHelper *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  
  *(float *)(this + 0x1c) = param_3;
  *(float *)(this + 0x20) = param_4;
  this[0x24] = (ElasticScrollPhysicsHelper)0x1;
  uVar1 = DAT_0024e6d0;
  *(float *)(this + 0xc) = param_2;
  *(float *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x14) = uVar1;
  return;
}


// ===== 003e0a1c  rive::ElasticScrollPhysics::scrollToPosition =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ElasticScrollPhysics::scrollToPosition(rive::Vec2D, rive::Vec2D, rive::Vec2D, rive::Vec2D,
   bool, bool) */

void rive::ElasticScrollPhysics::scrollToPosition
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,uint param_10,uint param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (((param_10 & 1) != 0) && (*(long *)(param_9 + 0xb8) == 0)) {
    uVar5 = *(undefined4 *)(param_9 + 0xb4);
    puVar3 = (undefined8 *)operator_new(0x28);
    uVar6 = *(undefined8 *)(param_9 + 0xac);
    *(undefined8 *)((long)puVar3 + 0x1c) = 0;
    uVar2 = _UNK_0024e128;
    uVar1 = _DAT_0024e120;
    *(undefined1 *)((long)puVar3 + 0x24) = 0;
    *puVar3 = uVar6;
    *(undefined8 *)((long)puVar3 + 0x14) = uVar2;
    *(undefined8 *)((long)puVar3 + 0xc) = uVar1;
    *(undefined4 *)(puVar3 + 1) = uVar5;
    *(undefined8 **)(param_9 + 0xb8) = puVar3;
  }
  if (((param_11 & 1) != 0) && (*(long *)(param_9 + 0xc0) == 0)) {
    uVar5 = *(undefined4 *)(param_9 + 0xb4);
    puVar3 = (undefined8 *)operator_new(0x28);
    uVar6 = *(undefined8 *)(param_9 + 0xac);
    *(undefined8 *)((long)puVar3 + 0x1c) = 0;
    uVar2 = _UNK_0024e128;
    uVar1 = _DAT_0024e120;
    *(undefined1 *)((long)puVar3 + 0x24) = 0;
    *puVar3 = uVar6;
    *(undefined8 *)((long)puVar3 + 0x14) = uVar2;
    *(undefined8 *)((long)puVar3 + 0xc) = uVar1;
    *(undefined4 *)(puVar3 + 1) = uVar5;
    *(undefined8 **)(param_9 + 0xc0) = puVar3;
  }
  lVar4 = *(long *)(param_9 + 0xb8);
  if ((lVar4 != 0) && ((param_10 & 1) != 0)) {
    *(undefined4 *)(lVar4 + 0x1c) = param_5;
    *(undefined4 *)(lVar4 + 0x20) = param_7;
    *(undefined1 *)(lVar4 + 0x24) = 1;
    uVar1 = DAT_0024e6d0;
    *(undefined4 *)(lVar4 + 0xc) = param_3;
    *(undefined4 *)(lVar4 + 0x10) = param_1;
    *(undefined8 *)(lVar4 + 0x14) = uVar1;
  }
  lVar4 = *(long *)(param_9 + 0xc0);
  if ((lVar4 != 0) && ((param_11 & 1) != 0)) {
    *(undefined4 *)(lVar4 + 0x1c) = param_6;
    *(undefined4 *)(lVar4 + 0x20) = param_8;
    *(undefined1 *)(lVar4 + 0x24) = 1;
    uVar1 = DAT_0024e6d0;
    *(undefined4 *)(lVar4 + 0xc) = param_4;
    *(undefined4 *)(lVar4 + 0x10) = param_2;
    *(undefined8 *)(lVar4 + 0x14) = uVar1;
  }
  return;
}


// ===== 003e0b68  FUN_003e0b68 =====

void FUN_003e0b68(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  puVar1 = PTR_vtable_0067d0e8;
  pvVar2 = (void *)param_1[0x18];
  param_1[0x18] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x17];
  param_1[0x17] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0xe] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[9];
  if (pvVar2 != (void *)0x0) {
    param_1[10] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 003e0c08  FUN_003e0c08 =====

void FUN_003e0c08(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  puVar1 = PTR_vtable_0067d0e8;
  pvVar2 = (void *)param_1[0x18];
  param_1[0x18] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x17];
  param_1[0x17] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0xe] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[9];
  if (pvVar2 != (void *)0x0) {
    param_1[10] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003e0ca4  FUN_003e0ca4 =====

undefined8 FUN_003e0ca4(void)

{
  return 0x20d;
}


// ===== 003e0cac  FUN_003e0cac =====

undefined8 FUN_003e0cac(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x20b)) && (param_2 != 0x20d)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003e0cd4  FUN_003e0cd4 =====

undefined8 FUN_003e0cd4(long param_1,ushort param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x2d9) {
    if (param_2 == 4) {
      pcVar11 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar11) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e0eb0;
        }
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 < '\0');
      param_3[2] = (long)pcVar12;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_003e0eb0:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) {
        if (param_2 == 0x2d8) {
          puVar8 = (undefined4 *)param_3[2];
          puVar7 = (undefined4 *)(*param_3 + param_3[1]);
          if ((long)puVar7 - (long)puVar8 < 4) {
            uVar15 = 0;
            *(undefined1 *)(param_3 + 3) = 1;
          }
          else {
            puVar7 = puVar8 + 1;
            uVar15 = *puVar8;
          }
          param_3[2] = (long)puVar7;
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0xac) = uVar15;
        }
        goto LAB_003e0f58;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e0f00;
        }
        pbVar13 = pbVar10 + 1;
        bVar2 = *pbVar10;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar6 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar6;
        pbVar10 = pbVar13;
      } while ((char)bVar2 < '\0');
      param_3[2] = (long)pbVar13;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e0f00:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 == 0x2d9) {
      puVar8 = (undefined4 *)param_3[2];
      puVar7 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar7 - (long)puVar8 < 4) {
        uVar15 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar7 = puVar8 + 1;
        uVar15 = *puVar8;
      }
      param_3[2] = (long)puVar7;
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0xb0) = uVar15;
      goto LAB_003e0f58;
    }
    if (param_2 == 0x2da) {
      puVar8 = (undefined4 *)param_3[2];
      puVar7 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar7 - (long)puVar8 < 4) {
        uVar15 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar7 = puVar8 + 1;
        uVar15 = *puVar8;
      }
      param_3[2] = (long)puVar7;
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0xb4) = uVar15;
      goto LAB_003e0f58;
    }
    if (param_2 != 0x2db) goto LAB_003e0f58;
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e0ee8;
      }
      pbVar13 = pbVar10 + 1;
      bVar2 = *pbVar10;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar6 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar6;
      pbVar10 = pbVar13;
    } while ((char)bVar2 < '\0');
    param_3[2] = (long)pbVar13;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e0ee8:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003e0f58:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e0f80  FUN_003e0f80 =====

bool FUN_003e0f80(long param_1)

{
  return *(long *)(param_1 + 0xb8) != 0 || *(long *)(param_1 + 0xc0) != 0;
}


// ===== 003e0f94  FUN_003e0f94 =====

bool FUN_003e0f94(long param_1)

{
  if ((*(long *)(param_1 + 0xb8) != 0) && (*(char *)(*(long *)(param_1 + 0xb8) + 0x24) != '\0')) {
    return true;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    return *(char *)(*(long *)(param_1 + 0xc0) + 0x24) != '\0';
  }
  return false;
}


// ===== 003e0fcc  FUN_003e0fcc =====

undefined4 FUN_003e0fcc(long param_1)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0xc);
  }
  return 0;
}


// ===== 003e0fe4  FUN_003e0fe4 =====

undefined4 FUN_003e0fe4(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0xc);
  }
  return 0;
}


// ===== 003e0ffc  FUN_003e0ffc =====

bool FUN_003e0ffc(long param_1)

{
  return *(long *)(param_1 + 0xb8) != 0;
}


// ===== 003e100c  FUN_003e100c =====

bool FUN_003e100c(long param_1)

{
  return *(long *)(param_1 + 0xc0) != 0;
}


// ===== 003e101c  FUN_003e101c =====

void FUN_003e101c(void)

{
  return;
}


// ===== 003e1020  FUN_003e1020 =====

void FUN_003e1020(void)

{
  return;
}


// ===== 003e1024  FUN_003e1024 =====

void FUN_003e1024(void)

{
  return;
}


// ===== 003e1028  rive::ScrollBarConstraint::computedThumbWidth =====

/* rive::ScrollBarConstraint::computedThumbWidth() */

float __thiscall rive::ScrollBarConstraint::computedThumbWidth(ScrollBarConstraint *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((this[0x9c] == (ScrollBarConstraint)0x0) || (lVar2 = *(long *)(this + 0xd0), lVar2 == 0)) {
    fVar5 = *(float *)(*(long *)(this + 0x30) + 0x200);
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0x30) + 0x30);
    fVar3 = *(float *)(lVar1 + 0x200);
    fVar6 = *(float *)(lVar1 + 0x208);
    fVar7 = *(float *)(lVar1 + 0x210);
    fVar4 = (float)ScrollConstraint::contentWidth();
    fVar5 = 1.0;
    if (fVar4 != 0.0) {
      fVar5 = *(float *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x30) + 0x200);
      if ((*(char *)(lVar2 + 0x8c) != '\x01') &&
         (fVar5 = fVar5 - *(float *)(*(long *)(lVar2 + 0x30) + 0x1f8), fVar5 <= 0.0)) {
        fVar5 = 0.0;
      }
      fVar4 = (float)ScrollConstraint::contentWidth();
      fVar5 = (float)NEON_fminnm(fVar5 / fVar4,0x3f800000);
    }
    fVar5 = ((fVar3 - fVar6) - fVar7) * fVar5;
  }
  return fVar5;
}


// ===== 003e10d4  rive::ScrollBarConstraint::computedThumbHeight =====

/* rive::ScrollBarConstraint::computedThumbHeight() */

float __thiscall rive::ScrollBarConstraint::computedThumbHeight(ScrollBarConstraint *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((this[0x9c] == (ScrollBarConstraint)0x0) || (lVar2 = *(long *)(this + 0xd0), lVar2 == 0)) {
    fVar5 = *(float *)(*(long *)(this + 0x30) + 0x204);
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0x30) + 0x30);
    fVar3 = *(float *)(lVar1 + 0x204);
    fVar6 = *(float *)(lVar1 + 0x20c);
    fVar7 = *(float *)(lVar1 + 0x214);
    fVar4 = (float)ScrollConstraint::contentHeight();
    fVar5 = 1.0;
    if (fVar4 != 0.0) {
      fVar5 = *(float *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x30) + 0x204);
      if ((*(char *)(lVar2 + 0x8c) != '\0') &&
         (fVar5 = fVar5 - *(float *)(*(long *)(lVar2 + 0x30) + 0x1fc), fVar5 <= 0.0)) {
        fVar5 = 0.0;
      }
      fVar4 = (float)ScrollConstraint::contentHeight();
      fVar5 = (float)NEON_fminnm(fVar5 / fVar4,0x3f800000);
    }
    fVar5 = ((fVar3 - fVar6) - fVar7) * fVar5;
  }
  return fVar5;
}


// ===== 003e117c  rive::ScrollBarConstraint::draggables =====

/* rive::ScrollBarConstraint::draggables() */

void rive::ScrollBarConstraint::draggables(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long in_x0;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *in_x8;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  plVar3 = *(long **)(in_x0 + 0x30);
  *in_x8 = 0;
  in_x8[1] = 0;
  lVar7 = *plVar3;
  in_x8[2] = 0;
  uVar4 = (**(code **)(lVar7 + 0x18))(plVar3,0x199);
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)0x0;
    plVar3 = *(long **)(*(long *)(in_x0 + 0x30) + 0x30);
  }
  else {
    plVar3 = (long *)operator_new(0x20);
    lVar7 = *(long *)(in_x0 + 0x30);
    *plVar3 = (long)(PTR_vtable_0067d0f8 + 0x10);
    plVar3[1] = lVar7 + 0x7e0;
    plVar3[2] = in_x0;
    puVar5 = (undefined8 *)operator_new(8);
    *in_x8 = puVar5;
    puVar13 = puVar5 + 1;
    *puVar5 = plVar3;
    in_x8[1] = puVar13;
    in_x8[2] = puVar13;
    plVar3 = *(long **)(lVar7 + 0x30);
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x199);
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar3 = (long *)operator_new(0x18);
  uVar14 = (long)puVar13 - (long)puVar5;
  lVar7 = *(long *)(*(long *)(in_x0 + 0x30) + 0x30);
  uVar4 = ((long)uVar14 >> 3) + 1;
  *plVar3 = (long)(PTR_vtable_0067d100 + 0x10);
  plVar3[1] = lVar7 + 0x7e0;
  plVar3[2] = in_x0;
  if (uVar4 >> 0x3d != 0) {
    FUN_003e1384();
LAB_003e1380:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar1 = (long)uVar14 >> 2;
  if ((ulong)((long)uVar14 >> 2) <= uVar4) {
    uVar1 = uVar4;
  }
  if (0x7ffffffffffffff7 < uVar14) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) goto LAB_003e1380;
    pvVar6 = operator_new(uVar1 << 3);
  }
  puVar8 = (undefined8 *)((long)pvVar6 + ((long)uVar14 >> 3) * 8);
  puVar12 = puVar8 + 1;
  *puVar8 = plVar3;
  if ((long)puVar13 - (long)puVar5 != 0) {
    uVar4 = ((long)puVar13 - (long)puVar5) - 8;
    if ((0x37 < uVar4) && (0x1f < (long)puVar13 + (-uVar14 - (long)pvVar6))) {
      puVar10 = puVar8 + -2;
      puVar11 = puVar13 + -2;
      uVar4 = (uVar4 >> 3) + 1;
      uVar9 = uVar4 & 0x3ffffffffffffffc;
      puVar13 = puVar13 + -uVar9;
      uVar14 = uVar9;
      do {
        puVar2 = puVar11 + -1;
        uVar17 = puVar11[-2];
        uVar16 = puVar11[1];
        uVar15 = *puVar11;
        uVar14 = uVar14 - 4;
        puVar11 = puVar11 + -4;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar17;
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10 = puVar10 + -4;
      } while (uVar14 != 0);
      puVar8 = puVar8 + -uVar9;
      if (uVar4 == uVar9) goto LAB_003e134c;
    }
    do {
      puVar13 = puVar13 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar13;
    } while (puVar13 != puVar5);
    puVar5 = (undefined8 *)*in_x8;
  }
LAB_003e134c:
  *in_x8 = puVar8;
  in_x8[2] = (void *)((long)pvVar6 + uVar1 * 8);
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  in_x8[1] = puVar12;
  return;
}


// ===== 003e1384  FUN_003e1384 =====

void FUN_003e1384(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003e1398  rive::ScrollBarConstraint::constrain =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ScrollBarConstraint::constrain(rive::TransformComponent*) */

void __thiscall
rive::ScrollBarConstraint::constrain(ScrollBarConstraint *this,TransformComponent *param_1)

{
  uint uVar1;
  ScrollBarConstraint SVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  ScrollConstraint *pSVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  pSVar6 = *(ScrollConstraint **)(this + 0xd0);
  if (pSVar6 == (ScrollConstraint *)0x0) goto LAB_003e1958;
  lVar5 = *(long *)(*(long *)(this + 0x30) + 0x30);
  if (lVar5 == 0) goto LAB_003e1958;
  fVar10 = 0.0;
  fVar12 = 0.0;
  if (((byte)this[0x8c] & 0xfd) == 0) {
    fVar14 = (*(float *)(lVar5 + 0x200) - *(float *)(lVar5 + 0x208)) - *(float *)(lVar5 + 0x210);
    if (this[0x9c] == (ScrollBarConstraint)0x0) {
      fVar11 = *(float *)(*(long *)(this + 0x30) + 0x200);
    }
    else {
      fVar12 = (float)ScrollConstraint::contentWidth();
      fVar11 = 1.0;
      if (fVar12 != 0.0) {
        fVar12 = *(float *)(*(long *)(*(long *)(pSVar6 + 0x30) + 0x30) + 0x200);
        if ((pSVar6[0x8c] != (ScrollConstraint)0x1) &&
           (fVar12 = fVar12 - *(float *)(*(long *)(pSVar6 + 0x30) + 0x1f8), fVar12 <= 0.0)) {
          fVar12 = 0.0;
        }
        fVar11 = (float)ScrollConstraint::contentWidth();
        fVar11 = (float)NEON_fminnm(fVar12 / fVar11,0x3f800000);
      }
      pSVar6 = *(ScrollConstraint **)(this + 0xd0);
      fVar11 = fVar14 * fVar11;
    }
    fVar14 = fVar14 - fVar11;
    lVar5 = *(long *)(pSVar6 + 0x30);
    if ((pSVar6[0xad] == (ScrollConstraint)0x0) ||
       (((lVar5 != 0 && (*(long *)(lVar5 + 0x1e8) != 0)) &&
        (*(uint *)(*(long *)(lVar5 + 0x1e8) + 0x11c) < 2)))) {
      fVar15 = *(float *)(*(long *)(lVar5 + 0x30) + 0x200);
      if ((pSVar6[0x8c] != (ScrollConstraint)0x1) &&
         (fVar15 = fVar15 - *(float *)(lVar5 + 0x1f8), fVar15 <= 0.0)) {
        fVar15 = 0.0;
      }
      fVar13 = (float)ScrollConstraint::contentWidth();
      fVar12 = 0.0;
      if ((fVar15 - fVar13) - *(float *)(*(long *)(*(long *)(pSVar6 + 0x30) + 0x30) + 0x210) < 0.0)
      {
        pSVar6 = *(ScrollConstraint **)(this + 0xd0);
        goto LAB_003e174c;
      }
LAB_003e17f0:
      if (fVar12 == fVar14 || fVar12 < fVar14 != (NAN(fVar12) || NAN(fVar14))) goto LAB_003e1810;
      fVar15 = fVar12 - fVar14;
      SVar2 = this[0x9c];
      if (SVar2 != (ScrollBarConstraint)0x0) {
        fVar14 = fVar12;
      }
      fVar12 = fVar14;
      fVar11 = fVar11 - fVar15;
    }
    else {
LAB_003e174c:
      fVar12 = (float)ScrollConstraint::clampedOffsetX(pSVar6);
      lVar7 = *(long *)(this + 0xd0);
      lVar5 = *(long *)(lVar7 + 0x30);
      if ((*(char *)(lVar7 + 0xad) == '\0') ||
         (((lVar5 != 0 && (*(long *)(lVar5 + 0x1e8) != 0)) &&
          (*(uint *)(*(long *)(lVar5 + 0x1e8) + 0x11c) < 2)))) {
        fVar15 = *(float *)(*(long *)(lVar5 + 0x30) + 0x200);
        if ((*(char *)(lVar7 + 0x8c) != '\x01') &&
           (fVar15 = fVar15 - *(float *)(lVar5 + 0x1f8), fVar15 <= 0.0)) {
          fVar15 = 0.0;
        }
        fVar13 = (float)ScrollConstraint::contentWidth();
        fVar15 = (float)NEON_fminnm((fVar15 - fVar13) -
                                    *(float *)(*(long *)(*(long *)(lVar7 + 0x30) + 0x30) + 0x210),0)
        ;
      }
      else {
        fVar15 = -INFINITY;
      }
      fVar12 = fVar14 * (fVar12 / fVar15);
      if (0.0 <= fVar12) goto LAB_003e17f0;
      fVar11 = fVar11 + fVar12;
      fVar12 = 0.0;
LAB_003e1810:
      SVar2 = this[0x9c];
    }
    if ((SVar2 != (ScrollBarConstraint)0x0) &&
       (plVar8 = *(long **)(this + 0x30), *(float *)(plVar8 + 0x12f) != fVar11)) {
      *(float *)(plVar8 + 0x12f) = fVar11;
      plVar9 = plVar8;
      do {
        *(undefined1 *)(plVar9 + 0x4e) = 0;
        plVar9[0x4d] = 0;
        *(undefined4 *)((long)plVar9 + 0x274) = 0;
        if ((*(ushort *)(plVar9 + 0xc) >> 0xb & 1) == 0) {
          *(ushort *)(plVar9 + 0xc) = *(ushort *)(plVar9 + 0xc) | 0x800;
          (**(code **)(*plVar9 + 0x70))(plVar9);
          lVar5 = plVar9[0x10];
          uVar1 = *(uint *)(plVar9 + 7);
          *(undefined1 *)(lVar5 + 0xc32) = 1;
          *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
          if (uVar1 < *(uint *)(lVar5 + 0xbd4)) {
            *(uint *)(lVar5 + 0xbd4) = uVar1;
          }
        }
        bVar4 = (long *)plVar9[8] != plVar9;
        plVar9 = (long *)plVar9[8];
      } while (bVar4);
      (**(code **)(*plVar8 + 0x2e0))(plVar8,0);
    }
  }
  if ((byte)this[0x8c] - 1 < 2) {
    lVar5 = *(long *)(*(long *)(this + 0x30) + 0x30);
    fVar14 = (*(float *)(lVar5 + 0x204) - *(float *)(lVar5 + 0x20c)) - *(float *)(lVar5 + 0x214);
    if ((this[0x9c] == (ScrollBarConstraint)0x0) || (lVar5 = *(long *)(this + 0xd0), lVar5 == 0)) {
      fVar11 = *(float *)(*(long *)(this + 0x30) + 0x204);
    }
    else {
      fVar10 = (float)ScrollConstraint::contentHeight();
      fVar11 = 1.0;
      if (fVar10 != 0.0) {
        fVar10 = *(float *)(*(long *)(*(long *)(lVar5 + 0x30) + 0x30) + 0x204);
        if ((*(char *)(lVar5 + 0x8c) != '\0') &&
           (fVar10 = fVar10 - *(float *)(*(long *)(lVar5 + 0x30) + 0x1fc), fVar10 <= 0.0)) {
          fVar10 = 0.0;
        }
        fVar11 = (float)ScrollConstraint::contentHeight();
        fVar11 = (float)NEON_fminnm(fVar10 / fVar11,0x3f800000);
      }
      fVar11 = fVar14 * fVar11;
    }
    pSVar6 = *(ScrollConstraint **)(this + 0xd0);
    fVar14 = fVar14 - fVar11;
    lVar5 = *(long *)(pSVar6 + 0x30);
    if (((pSVar6[0xad] == (ScrollConstraint)0x0) || (*(long *)(lVar5 + 0x1e8) == 0)) ||
       (1 < *(uint *)(*(long *)(lVar5 + 0x1e8) + 0x11c))) {
      fVar15 = *(float *)(*(long *)(lVar5 + 0x30) + 0x204);
      if ((pSVar6[0x8c] != (ScrollConstraint)0x0) &&
         (fVar15 = fVar15 - *(float *)(lVar5 + 0x1fc), fVar15 <= 0.0)) {
        fVar15 = 0.0;
      }
      fVar13 = (float)ScrollConstraint::contentHeight();
      fVar10 = 0.0;
      fVar15 = (float)NEON_fminnm((fVar15 - fVar13) -
                                  *(float *)(*(long *)(*(long *)(pSVar6 + 0x30) + 0x30) + 0x214),0);
      if (fVar15 != 0.0) {
        pSVar6 = *(ScrollConstraint **)(this + 0xd0);
        goto LAB_003e1580;
      }
LAB_003e161c:
      if (fVar10 == fVar14 || fVar10 < fVar14 != (NAN(fVar10) || NAN(fVar14))) goto LAB_003e1640;
      SVar2 = this[0x9c];
      fVar15 = fVar14;
      if (SVar2 != (ScrollBarConstraint)0x0) {
        fVar15 = fVar10;
      }
      fVar11 = fVar11 - (fVar10 - fVar14);
      fVar10 = fVar15;
    }
    else {
LAB_003e1580:
      fVar10 = (float)ScrollConstraint::clampedOffsetY(pSVar6);
      lVar7 = *(long *)(this + 0xd0);
      lVar5 = *(long *)(lVar7 + 0x30);
      if (((*(char *)(lVar7 + 0xad) == '\0') || (*(long *)(lVar5 + 0x1e8) == 0)) ||
         (1 < *(uint *)(*(long *)(lVar5 + 0x1e8) + 0x11c))) {
        fVar15 = *(float *)(*(long *)(lVar5 + 0x30) + 0x204);
        if ((*(char *)(lVar7 + 0x8c) != '\0') &&
           (fVar15 = fVar15 - *(float *)(lVar5 + 0x1fc), fVar15 <= 0.0)) {
          fVar15 = 0.0;
        }
        fVar13 = (float)ScrollConstraint::contentHeight();
        fVar15 = (float)NEON_fminnm((fVar15 - fVar13) -
                                    *(float *)(*(long *)(*(long *)(lVar7 + 0x30) + 0x30) + 0x214),0)
        ;
      }
      else {
        fVar15 = -INFINITY;
      }
      fVar10 = fVar14 * (fVar10 / fVar15);
      if (0.0 <= fVar10) goto LAB_003e161c;
      fVar11 = fVar11 + fVar10;
      fVar10 = 0.0;
LAB_003e1640:
      SVar2 = this[0x9c];
    }
    if ((SVar2 != (ScrollBarConstraint)0x0) &&
       (plVar8 = *(long **)(this + 0x30), *(float *)((long)plVar8 + 0x97c) != fVar11)) {
      *(float *)((long)plVar8 + 0x97c) = fVar11;
      plVar9 = plVar8;
      do {
        *(undefined1 *)(plVar9 + 0x4e) = 0;
        plVar9[0x4d] = 0;
        *(undefined4 *)((long)plVar9 + 0x274) = 0;
        if ((*(ushort *)(plVar9 + 0xc) >> 0xb & 1) == 0) {
          *(ushort *)(plVar9 + 0xc) = *(ushort *)(plVar9 + 0xc) | 0x800;
          (**(code **)(*plVar9 + 0x70))(plVar9);
          lVar5 = plVar9[0x10];
          uVar1 = *(uint *)(plVar9 + 7);
          *(undefined1 *)(lVar5 + 0xc32) = 1;
          *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
          if (uVar1 < *(uint *)(lVar5 + 0xbd4)) {
            *(uint *)(lVar5 + 0xbd4) = uVar1;
          }
        }
        bVar4 = (long *)plVar9[8] != plVar9;
        plVar9 = (long *)plVar9[8];
      } while (bVar4);
      (**(code **)(*plVar8 + 0x2e0))(plVar8,0);
    }
  }
  uStack_a8 = *(undefined8 *)(param_1 + 0xac);
  local_b0 = *(undefined8 *)(param_1 + 0xa4);
  local_a0 = *(undefined8 *)(param_1 + 0xb4);
  fStack_88 = (float)_UNK_0024e5b8;
  fStack_84 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
  local_90 = (undefined4)_DAT_0024e5b0;
  fStack_8c = (float)((ulong)_DAT_0024e5b0 >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_1 + 0xac);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20);
  local_e0 = *(undefined8 *)(this + 0xb0);
  fVar15 = (float)*(undefined8 *)(param_1 + 0xa4);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0xa4) >> 0x20);
  uStack_e8 = *(undefined8 *)(this + 0xa8);
  local_f0 = *(undefined8 *)(this + 0xa0);
  local_c0 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20) +
                      fVar11 * fVar10 + fVar13 * fVar12,
                      (float)*(undefined8 *)(param_1 + 0xb4) + fVar14 * fVar10 + fVar15 * fVar12);
  uStack_108 = *(undefined8 *)(this + 0xc0);
  local_110 = *(undefined8 *)(this + 0xb8);
  local_d0 = CONCAT44(fVar11 * fStack_8c + fVar13 * 1.0,fVar14 * fStack_8c + fVar15 * 1.0);
  uStack_c8 = CONCAT44(fVar11 * fStack_84 + fStack_88 * fVar13,
                       fVar14 * fStack_84 + fStack_88 * fVar15);
  local_100 = *(undefined8 *)(this + 200);
  local_80 = fVar12;
  fStack_7c = fVar10;
  TransformConstraint::constrainWorld
            (*(undefined4 *)(this + 0x88),param_1,&local_b0,&local_f0,&local_d0,&local_110);
LAB_003e1958:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e19ac  rive::ScrollBarConstraint::buildDependencies =====

/* rive::ScrollBarConstraint::buildDependencies() */

void __thiscall rive::ScrollBarConstraint::buildDependencies(ScrollBarConstraint *this)

{
  Component::addDependent(*(Component **)(this + 0xd0),(Component *)this);
  Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
  return;
}


// ===== 003e19dc  rive::ScrollBarConstraint::onAddedDirty =====

/* rive::ScrollBarConstraint::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::ScrollBarConstraint::onAddedDirty(ScrollBarConstraint *this,CoreContext *param_1)

{
  ScrollBarConstraint *pSVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pSVar1 = (ScrollBarConstraint *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pSVar1 = (ScrollBarConstraint *)(param_1 + -0x998);
  }
  *(ScrollBarConstraint **)(this + 0x40) = pSVar1;
  *(ScrollBarConstraint **)(this + 0x80) = pSVar1;
  if (pSVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x26);
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    TransformComponent::addConstraint(*(TransformComponent **)(this + 0x30),(Constraint *)this);
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x98));
    if ((plVar2 == (long *)0x0) ||
       (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x209), (uVar3 & 1) == 0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      *(long **)(this + 0xd0) = plVar2;
    }
  }
  return uVar4;
}


// ===== 003e1aac  rive::ScrollBarConstraint::hitTrack =====

/* rive::ScrollBarConstraint::hitTrack(rive::Vec2D) */

void rive::ScrollBarConstraint::hitTrack(float param_1,float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  plVar3 = *(long **)(param_3 + 0xd0);
  if (plVar3 != (long *)0x0) {
    lVar2 = *(long *)(*(long *)(param_3 + 0x30) + 0x30);
    if (lVar2 != 0) {
      fVar11 = *(float *)(lVar2 + 0xa4);
      fVar9 = *(float *)(lVar2 + 0xb0);
      fVar8 = (float)*(undefined8 *)(lVar2 + 0xa8);
      fVar12 = -fVar8;
      fVar10 = (float)((ulong)*(undefined8 *)(lVar2 + 0xa8) >> 0x20);
      fVar14 = (float)NEON_fmadd(fVar11,fVar9,fVar12 * fVar10);
      if (fVar14 != 0.0) {
        fVar14 = 1.0 / fVar14;
        fVar17 = (float)*(undefined8 *)(lVar2 + 0xb4);
        fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0xb4) >> 0x20);
        uVar13 = NEON_rev64(CONCAT44(fVar7 * -fVar11,fVar17 * -fVar9),4);
        if ((*(byte *)(param_3 + 0x8c) & 0xfd) == 0) {
          fVar15 = *(float *)(lVar2 + 0x208);
          fVar9 = (float)NEON_fmadd(fVar9 * fVar14,param_1,param_2 * -fVar10 * fVar14);
          fVar16 = (*(float *)(lVar2 + 0x200) - fVar15) - *(float *)(lVar2 + 0x210);
          if (*(char *)(param_3 + 0x9c) == '\0') {
            fVar5 = *(float *)(*(long *)(param_3 + 0x30) + 0x200);
          }
          else {
            fVar4 = (float)ScrollConstraint::contentWidth();
            fVar5 = 1.0;
            if (fVar4 != 0.0) {
              fVar5 = *(float *)(*(long *)(plVar3[6] + 0x30) + 0x200);
              if ((*(char *)((long)plVar3 + 0x8c) != '\x01') &&
                 (fVar5 = fVar5 - *(float *)(plVar3[6] + 0x1f8), fVar5 <= 0.0)) {
                fVar5 = 0.0;
              }
              fVar4 = (float)ScrollConstraint::contentWidth();
              fVar5 = (float)NEON_fminnm(fVar5 / fVar4,0x3f800000);
            }
            plVar3 = *(long **)(param_3 + 0xd0);
            fVar5 = fVar16 * fVar5;
          }
          lVar2 = plVar3[6];
          if ((*(char *)((long)plVar3 + 0xad) == '\0') ||
             (((lVar2 != 0 && (*(long *)(lVar2 + 0x1e8) != 0)) &&
              (*(uint *)(*(long *)(lVar2 + 0x1e8) + 0x11c) < 2)))) {
            fVar4 = *(float *)(*(long *)(lVar2 + 0x30) + 0x200);
            if ((*(char *)((long)plVar3 + 0x8c) != '\x01') &&
               (fVar4 = fVar4 - *(float *)(lVar2 + 0x1f8), fVar4 <= 0.0)) {
              fVar4 = 0.0;
            }
            fVar6 = (float)ScrollConstraint::contentWidth();
            plVar1 = plVar3 + 6;
            plVar3 = *(long **)(param_3 + 0xd0);
            fVar4 = (float)NEON_fminnm((fVar4 - fVar6) -
                                       *(float *)(*(long *)(*plVar1 + 0x30) + 0x210),0);
          }
          else {
            fVar4 = -INFINITY;
          }
          fVar10 = (((fVar14 * ((float)((ulong)uVar13 >> 0x20) + fVar7 * fVar10) + fVar9) - fVar15)
                   / (fVar16 - fVar5)) * fVar4;
          if (fVar4 <= fVar10) {
            fVar4 = fVar10;
          }
          fVar10 = (float)NEON_fminnm(fVar4,0);
          if (*(float *)(plVar3 + 0x13) != fVar10) {
            *(float *)(plVar3 + 0x13) = fVar10;
            (**(code **)(*plVar3 + 0xf8))(plVar3);
          }
        }
        if (*(byte *)(param_3 + 0x8c) - 1 < 2) {
          lVar2 = *(long *)(*(long *)(param_3 + 0x30) + 0x30);
          fVar10 = *(float *)(lVar2 + 0x20c);
          fVar9 = (*(float *)(lVar2 + 0x204) - fVar10) - *(float *)(lVar2 + 0x214);
          if ((*(char *)(param_3 + 0x9c) == '\0') || (lVar2 = *(long *)(param_3 + 0xd0), lVar2 == 0)
             ) {
            fVar7 = *(float *)(*(long *)(param_3 + 0x30) + 0x204);
          }
          else {
            fVar15 = (float)ScrollConstraint::contentHeight();
            fVar7 = 1.0;
            if (fVar15 != 0.0) {
              fVar7 = *(float *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x30) + 0x204);
              if ((*(char *)(lVar2 + 0x8c) != '\0') &&
                 (fVar7 = fVar7 - *(float *)(*(long *)(lVar2 + 0x30) + 0x1fc), fVar7 <= 0.0)) {
                fVar7 = 0.0;
              }
              fVar15 = (float)ScrollConstraint::contentHeight();
              fVar7 = (float)NEON_fminnm(fVar7 / fVar15,0x3f800000);
            }
            fVar7 = fVar9 * fVar7;
          }
          plVar3 = *(long **)(param_3 + 0xd0);
          lVar2 = plVar3[6];
          if (((*(char *)((long)plVar3 + 0xad) == '\0') || (*(long *)(lVar2 + 0x1e8) == 0)) ||
             (1 < *(uint *)(*(long *)(lVar2 + 0x1e8) + 0x11c))) {
            fVar15 = *(float *)(*(long *)(lVar2 + 0x30) + 0x204);
            if ((*(char *)((long)plVar3 + 0x8c) != '\0') &&
               (fVar15 = fVar15 - *(float *)(lVar2 + 0x1fc), fVar15 <= 0.0)) {
              fVar15 = 0.0;
            }
            fVar16 = (float)ScrollConstraint::contentHeight();
            plVar1 = plVar3 + 6;
            plVar3 = *(long **)(param_3 + 0xd0);
            fVar15 = (float)NEON_fminnm((fVar15 - fVar16) -
                                        *(float *)(*(long *)(*plVar1 + 0x30) + 0x214),0);
          }
          else {
            fVar15 = -INFINITY;
          }
          fVar8 = (((fVar14 * ((float)uVar13 + fVar17 * fVar8) +
                    param_2 * fVar11 * fVar14 + param_1 * fVar12 * fVar14) - fVar10) /
                  (fVar9 - fVar7)) * fVar15;
          if (fVar15 <= fVar8) {
            fVar15 = fVar8;
          }
          fVar8 = (float)NEON_fminnm(fVar15,0);
          if (*(float *)((long)plVar3 + 0x9c) != fVar8) {
            *(float *)((long)plVar3 + 0x9c) = fVar8;
                    /* WARNING: Could not recover jumptable at 0x003e1e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x100))(plVar3);
            return;
          }
        }
      }
    }
  }
  return;
}


// ===== 003e1e58  rive::ScrollBarConstraint::dragThumb =====

/* rive::ScrollBarConstraint::dragThumb(rive::Vec2D) */

void rive::ScrollBarConstraint::dragThumb(undefined4 param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  lVar6 = *(long *)(param_3 + 0xd0);
  if (((lVar6 != 0) && (lVar4 = *(long *)(param_3 + 0x30), lVar4 != 0)) &&
     (lVar5 = *(long *)(lVar4 + 0x30), lVar5 != 0)) {
    if ((*(byte *)(param_3 + 0x8c) & 0xfd) == 0) {
      fVar13 = (*(float *)(lVar5 + 0x200) - *(float *)(lVar5 + 0x208)) - *(float *)(lVar5 + 0x210);
      if (*(char *)(param_3 + 0x9c) == '\0') {
        fVar10 = *(float *)(lVar4 + 0x200);
      }
      else {
        fVar9 = (float)ScrollConstraint::contentWidth();
        fVar10 = 1.0;
        if (fVar9 != 0.0) {
          fVar10 = *(float *)(*(long *)(*(long *)(lVar6 + 0x30) + 0x30) + 0x200);
          if ((*(char *)(lVar6 + 0x8c) != '\x01') &&
             (fVar10 = fVar10 - *(float *)(*(long *)(lVar6 + 0x30) + 0x1f8), fVar10 <= 0.0)) {
            fVar10 = 0.0;
          }
          fVar9 = (float)ScrollConstraint::contentWidth();
          fVar10 = (float)NEON_fminnm(fVar10 / fVar9,0x3f800000);
        }
        fVar10 = fVar13 * fVar10;
        if ((*(char *)(param_3 + 0x9c) != '\0') &&
           (plVar7 = *(long **)(param_3 + 0x30), *(float *)(plVar7 + 0x12f) != fVar10)) {
          *(float *)(plVar7 + 0x12f) = fVar10;
          plVar8 = plVar7;
          uVar11 = param_1;
          do {
            *(undefined1 *)(plVar8 + 0x4e) = 0;
            plVar8[0x4d] = 0;
            *(undefined4 *)((long)plVar8 + 0x274) = 0;
            if ((*(ushort *)(plVar8 + 0xc) >> 0xb & 1) == 0) {
              *(ushort *)(plVar8 + 0xc) = *(ushort *)(plVar8 + 0xc) | 0x800;
              uVar11 = (**(code **)(*plVar8 + 0x70))(uVar11,plVar8);
              lVar6 = plVar8[0x10];
              uVar1 = *(uint *)(plVar8 + 7);
              *(undefined1 *)(lVar6 + 0xc32) = 1;
              *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 4;
              if (uVar1 < *(uint *)(lVar6 + 0xbd4)) {
                *(uint *)(lVar6 + 0xbd4) = uVar1;
              }
            }
            bVar3 = (long *)plVar8[8] != plVar8;
            plVar8 = (long *)plVar8[8];
          } while (bVar3);
          (**(code **)(*plVar7 + 0x2e0))(plVar7,0);
        }
      }
      plVar7 = *(long **)(param_3 + 0xd0);
      lVar6 = plVar7[6];
      if ((*(char *)((long)plVar7 + 0xad) == '\0') ||
         (((lVar6 != 0 && (*(long *)(lVar6 + 0x1e8) != 0)) &&
          (*(uint *)(*(long *)(lVar6 + 0x1e8) + 0x11c) < 2)))) {
        fVar9 = *(float *)(*(long *)(lVar6 + 0x30) + 0x200);
        if ((*(char *)((long)plVar7 + 0x8c) != '\x01') &&
           (fVar9 = fVar9 - *(float *)(lVar6 + 0x1f8), fVar9 <= 0.0)) {
          fVar9 = 0.0;
        }
        fVar12 = (float)ScrollConstraint::contentWidth();
        plVar8 = plVar7 + 6;
        plVar7 = *(long **)(param_3 + 0xd0);
        fVar9 = (float)NEON_fminnm((fVar9 - fVar12) - *(float *)(*(long *)(*plVar8 + 0x30) + 0x210),
                                   0);
      }
      else {
        fVar9 = -INFINITY;
      }
      NEON_fmadd(*(float *)(plVar7 + 0x1f) / fVar9,fVar13 - fVar10,param_1);
      fVar13 = (float)NEON_fminnm(fVar9,0);
      if (*(float *)(plVar7 + 0x13) != fVar13) {
        *(float *)(plVar7 + 0x13) = fVar13;
        (**(code **)(*plVar7 + 0xf8))(plVar7);
      }
    }
    if (*(byte *)(param_3 + 0x8c) - 1 < 2) {
      lVar6 = *(long *)(*(long *)(param_3 + 0x30) + 0x30);
      cVar2 = *(char *)(param_3 + 0x9c);
      fVar13 = (*(float *)(lVar6 + 0x204) - *(float *)(lVar6 + 0x20c)) - *(float *)(lVar6 + 0x214);
      if ((cVar2 == '\0') || (lVar6 = *(long *)(param_3 + 0xd0), lVar6 == 0)) {
        fVar10 = *(float *)(*(long *)(param_3 + 0x30) + 0x204);
      }
      else {
        fVar9 = (float)ScrollConstraint::contentHeight();
        fVar10 = 1.0;
        if (fVar9 != 0.0) {
          fVar10 = *(float *)(*(long *)(*(long *)(lVar6 + 0x30) + 0x30) + 0x204);
          if ((*(char *)(lVar6 + 0x8c) != '\0') &&
             (fVar10 = fVar10 - *(float *)(*(long *)(lVar6 + 0x30) + 0x1fc), fVar10 <= 0.0)) {
            fVar10 = 0.0;
          }
          fVar9 = (float)ScrollConstraint::contentHeight();
          fVar10 = (float)NEON_fminnm(fVar10 / fVar9,0x3f800000);
        }
        cVar2 = *(char *)(param_3 + 0x9c);
        fVar10 = fVar13 * fVar10;
      }
      if ((cVar2 != '\0') &&
         (plVar7 = *(long **)(param_3 + 0x30), *(float *)((long)plVar7 + 0x97c) != fVar10)) {
        *(float *)((long)plVar7 + 0x97c) = fVar10;
        plVar8 = plVar7;
        do {
          *(undefined1 *)(plVar8 + 0x4e) = 0;
          plVar8[0x4d] = 0;
          *(undefined4 *)((long)plVar8 + 0x274) = 0;
          if ((*(ushort *)(plVar8 + 0xc) >> 0xb & 1) == 0) {
            *(ushort *)(plVar8 + 0xc) = *(ushort *)(plVar8 + 0xc) | 0x800;
            (**(code **)(*plVar8 + 0x70))(plVar8);
            lVar6 = plVar8[0x10];
            uVar1 = *(uint *)(plVar8 + 7);
            *(undefined1 *)(lVar6 + 0xc32) = 1;
            *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 4;
            if (uVar1 < *(uint *)(lVar6 + 0xbd4)) {
              *(uint *)(lVar6 + 0xbd4) = uVar1;
            }
          }
          bVar3 = (long *)plVar8[8] != plVar8;
          plVar8 = (long *)plVar8[8];
        } while (bVar3);
        (**(code **)(*plVar7 + 0x2e0))(plVar7,0);
      }
      plVar7 = *(long **)(param_3 + 0xd0);
      fVar13 = fVar13 - fVar10;
      lVar6 = plVar7[6];
      if (((*(char *)((long)plVar7 + 0xad) == '\0') || (*(long *)(lVar6 + 0x1e8) == 0)) ||
         (1 < *(uint *)(*(long *)(lVar6 + 0x1e8) + 0x11c))) {
        fVar10 = *(float *)(*(long *)(lVar6 + 0x30) + 0x204);
        if ((*(char *)((long)plVar7 + 0x8c) != '\0') &&
           (fVar10 = fVar10 - *(float *)(lVar6 + 0x1fc), fVar10 <= 0.0)) {
          fVar10 = 0.0;
        }
        fVar9 = (float)ScrollConstraint::contentHeight();
        plVar8 = plVar7 + 6;
        plVar7 = *(long **)(param_3 + 0xd0);
        fVar10 = (float)NEON_fminnm((fVar10 - fVar9) - *(float *)(*(long *)(*plVar8 + 0x30) + 0x214)
                                    ,0);
      }
      else {
        fVar10 = -INFINITY;
      }
      fVar9 = (float)NEON_fmadd(*(float *)((long)plVar7 + 0xfc) / fVar10,fVar13,param_2);
      fVar13 = fVar10 * (fVar9 / fVar13);
      if (fVar10 <= fVar13) {
        fVar10 = fVar13;
      }
      fVar13 = (float)NEON_fminnm(fVar10,0);
      if (*(float *)((long)plVar7 + 0x9c) != fVar13) {
        *(float *)((long)plVar7 + 0x9c) = fVar13;
                    /* WARNING: Could not recover jumptable at 0x003e22e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x100))(plVar7);
        return;
      }
    }
  }
  return;
}


// ===== 003e22e4  rive::ScrollBarConstraint::validate =====

/* rive::ScrollBarConstraint::validate(rive::CoreContext*) */

void __thiscall rive::ScrollBarConstraint::validate(ScrollBarConstraint *this,CoreContext *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x98));
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e2318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,0x209);
    return;
  }
  return;
}


// ===== 003e2324  FUN_003e2324 =====

void FUN_003e2324(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003e2390  FUN_003e2390 =====

undefined8 FUN_003e2390(void)

{
  return 0x20a;
}


// ===== 003e2398  FUN_003e2398 =====

undefined8 FUN_003e2398(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0x208) {
    if ((param_2 != 10) && (param_2 != 0x4f)) {
      return 0;
    }
  }
  else if ((param_2 != 0x208) && (param_2 != 0x20a)) {
    return 0;
  }
  return 1;
}


// ===== 003e23d4  FUN_003e23d4 =====

undefined8 FUN_003e23d4(long param_1,short param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  
  if (param_2 == 0x2de) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    pcVar7 = (char *)param_3[2];
    if (0 < (lVar1 + lVar2) - (long)pcVar7) {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0x9c) = *pcVar7 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0x9c) = 0;
    param_3[2] = lVar1 + lVar2;
    *(undefined1 *)(param_3 + 3) = 1;
    return 1;
  }
  if (param_2 != 0x2d5) {
    uVar5 = FUN_003affe0();
    return uVar5;
  }
  uVar10 = 0;
  uVar6 = 0;
  pbVar8 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e247c;
    }
    pbVar9 = pbVar8 + 1;
    bVar3 = *pbVar8;
    uVar4 = uVar10 & 0x3f;
    uVar10 = (ulong)(((uint)uVar10 & 0xff) + 7);
    uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
    pbVar8 = pbVar9;
  } while ((char)bVar3 < '\0');
  param_3[2] = (long)pbVar9;
  if (uVar6 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e247c:
    uVar6 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x98) = (int)uVar6;
  return 1;
}


// ===== 003e24a8  FUN_003e24a8 =====

void FUN_003e24a8(void)

{
  return;
}


// ===== 003e24ac  FUN_003e24ac =====

void FUN_003e24ac(void)

{
  return;
}


// ===== 003e24b0  rive::ThumbDraggableProxy::drag =====

/* rive::ThumbDraggableProxy::drag(rive::Vec2D, float) */

undefined8 __thiscall
rive::ThumbDraggableProxy::drag(float param_1,float param_2,ThumbDraggableProxy *this)

{
  ScrollBarConstraint::dragThumb
            (param_1 - *(float *)(this + 0x18),param_2 - *(float *)(this + 0x1c),
             *(undefined8 *)(this + 0x10));
  *(float *)(this + 0x18) = param_1;
  *(float *)(this + 0x1c) = param_2;
  return 1;
}


// ===== 003e24f8  rive::ThumbDraggableProxy::startDrag =====

/* rive::ThumbDraggableProxy::startDrag(rive::Vec2D, float) */

undefined8 __thiscall
rive::ThumbDraggableProxy::startDrag
          (undefined4 param_1,undefined4 param_2,ThumbDraggableProxy *this)

{
  *(undefined4 *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x1c) = param_2;
  return 1;
}


// ===== 003e250c  rive::TrackDraggableProxy::startDrag =====

/* rive::TrackDraggableProxy::startDrag(rive::Vec2D, float) */

undefined8 rive::TrackDraggableProxy::startDrag(long param_1)

{
  ScrollBarConstraint::hitTrack(*(undefined8 *)(param_1 + 0x10));
  return 1;
}


// ===== 003e2528  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e252c  FUN_003e252c =====

undefined8 FUN_003e252c(void)

{
  return 1;
}


// ===== 003e2534  FUN_003e2534 =====

undefined8 FUN_003e2534(void)

{
  return 1;
}


// ===== 003e253c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e2540  FUN_003e2540 =====

undefined8 FUN_003e2540(void)

{
  return 0;
}


// ===== 003e2548  FUN_003e2548 =====

undefined8 FUN_003e2548(void)

{
  return 1;
}


// ===== 003e2550  FUN_003e2550 =====

undefined8 FUN_003e2550(void)

{
  return 1;
}


// ===== 003e2558  rive::ScaleConstraint::constrain =====

/* rive::ScaleConstraint::constrain(rive::TransformComponent*) */

void __thiscall rive::ScaleConstraint::constrain(ScaleConstraint *this,TransformComponent *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float __x;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(long **)(this + 0x90) != (long *)0x0) &&
     (uVar9 = (**(code **)(**(long **)(this + 0x90) + 0x80))(), (uVar9 & 1) != 0))
  goto LAB_003e2d6c;
  fVar20 = *(float *)(param_1 + 0xa4);
  fVar24 = *(float *)(param_1 + 0xa8);
  fVar25 = *(float *)(param_1 + 0xac);
  fVar26 = *(float *)(param_1 + 0xb0);
  fVar23 = (float)NEON_fmadd(fVar20,fVar20,fVar24 * fVar24);
  fVar12 = 0.0;
  if (SQRT(fVar23) != 0.0) {
    fVar12 = (float)NEON_fmadd(fVar20,fVar26,-(fVar25 * fVar24));
    fVar12 = fVar12 / SQRT(fVar23);
  }
  fVar13 = atan2f(fVar24,fVar20);
  fVar20 = (float)NEON_fmadd(fVar20,fVar25,fVar24 * fVar26);
  fVar20 = atan2f(fVar20,fVar23);
  uVar14 = *(undefined8 *)(param_1 + 0xb4);
  lVar11 = *(long *)(this + 0x90);
  *(float *)(this + 0xcc) = extraout_var;
  *(float *)(this + 0xd0) = fVar12;
  *(undefined8 *)(this + 0xc4) = uVar14;
  *(float *)(this + 0xd4) = fVar13;
  *(float *)(this + 0xd8) = fVar20;
  if (lVar11 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xac);
    uVar22 = *(undefined8 *)(param_1 + 0xa4);
    local_70 = *(undefined8 *)(param_1 + 0xb4);
    *(undefined8 *)(this + 0xdc) = uVar14;
    *(float *)(this + 0xe4) = extraout_var;
    *(float *)(this + 0xe8) = fVar12;
    fStack_78 = (float)uVar5;
    fStack_74 = (float)((ulong)uVar5 >> 0x20);
    local_80 = (float)uVar22;
    fStack_7c = (float)((ulong)uVar22 >> 0x20);
    *(float *)(this + 0xec) = fVar13;
    *(float *)(this + 0xf0) = fVar20;
    fVar23 = extraout_var;
  }
  else {
    auVar15 = *(undefined1 (*) [16])(lVar11 + 0xa4);
    local_70 = *(undefined8 *)(lVar11 + 0xb4);
    fStack_78 = auVar15._8_4_;
    fStack_74 = auVar15._12_4_;
    local_80 = auVar15._0_4_;
    fStack_7c = auVar15._4_4_;
    if (*(int *)(this + 0x98) == 1) {
      plVar10 = *(long **)(lVar11 + 0x30);
      uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,0x5b);
      pfVar1 = (float *)((long)plVar10 + 0xa4);
      if ((uVar9 & 1) == 0) {
        pfVar1 = (float *)0x686140;
      }
      fVar24 = *pfVar1;
      fVar23 = pfVar1[3];
      fVar12 = (float)*(undefined8 *)(pfVar1 + 1);
      fVar25 = -fVar12;
      fVar20 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
      fVar26 = (float)NEON_fmadd(fVar24,fVar23,fVar25 * fVar20);
      if (fVar26 == 0.0) goto LAB_003e2d6c;
      fVar26 = 1.0 / fVar26;
      fVar16 = (float)((ulong)local_70 >> 0x20);
      fVar13 = (float)*(undefined8 *)(pfVar1 + 4);
      fVar21 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      fVar27 = fVar23 * fVar26;
      fVar25 = fVar25 * fVar26;
      fVar28 = -fVar20 * fVar26;
      fVar29 = fVar24 * fVar26;
      uVar14 = NEON_rev64(CONCAT44(fVar21 * -fVar24,fVar13 * -fVar23),4);
      auVar15._4_4_ = fVar25;
      auVar15._0_4_ = fVar27;
      auVar15._8_4_ = fVar28;
      auVar15._12_4_ = fVar29;
      auVar8._4_4_ = fVar25;
      auVar8._0_4_ = fVar27;
      auVar8._8_4_ = fVar28;
      auVar8._12_4_ = fVar29;
      auVar15 = NEON_ext(auVar15,auVar8,8,1);
      uVar14 = NEON_rev64(CONCAT44(fVar26 * ((float)((ulong)uVar14 >> 0x20) + fVar21 * fVar20),
                                   fVar26 * ((float)uVar14 + fVar13 * fVar12)),4);
      fVar12 = local_80 * fVar25;
      fVar20 = fStack_78 * fVar25;
      local_80 = fVar28 * fStack_7c + local_80 * fVar27;
      fStack_7c = fVar29 * fStack_7c + fVar12;
      fStack_78 = fVar28 * fStack_74 + fStack_78 * fVar27;
      fStack_74 = fVar29 * fStack_74 + fVar20;
      local_70 = CONCAT44((float)((ulong)uVar14 >> 0x20) +
                          auVar15._4_4_ * fVar16 + fVar25 * (float)local_70,
                          (float)uVar14 + auVar15._0_4_ * fVar16 + fVar27 * (float)local_70);
    }
    fVar26 = fStack_74;
    fVar25 = fStack_78;
    fVar24 = fStack_7c;
    fVar20 = local_80;
    fVar12 = 0.0;
    fVar21 = (float)NEON_fmadd(local_80,local_80,fStack_7c * fStack_7c);
    fVar23 = SQRT(fVar21);
    if (fVar23 != 0.0) {
      fVar12 = (-(fStack_78 * fStack_7c) + local_80 * fStack_74) / fVar23;
    }
    fVar13 = atan2f(fStack_7c,local_80);
    fVar20 = atan2f(fVar24 * fVar26 + fVar20 * fVar25,fVar21);
    uVar14 = local_70;
    *(undefined8 *)(this + 0xdc) = local_70;
    *(ulong *)(this + 0xec) = CONCAT44(fVar20,fVar13);
    if (this[0xb1] == (ScaleConstraint)0x0) {
      fVar23 = 1.0;
      if (*(int *)(this + 0x9c) != 1) {
        fVar23 = *(float *)(this + 0xcc);
      }
LAB_003e27e8:
      *(float *)(this + 0xe4) = fVar23;
    }
    else {
      fVar23 = fVar23 * *(float *)(this + 0xa4);
      *(float *)(this + 0xe4) = fVar23;
      if (this[0xb0] != (ScaleConstraint)0x0) {
        fVar23 = fVar23 * *(float *)(param_1 + 0xc0);
        goto LAB_003e27e8;
      }
    }
    if (this[0xc0] == (ScaleConstraint)0x0) {
      fVar12 = 1.0;
      if (*(int *)(this + 0x9c) != 1) {
        fVar12 = *(float *)(this + 0xd0);
      }
LAB_003e2828:
      *(float *)(this + 0xe8) = fVar12;
    }
    else {
      fVar12 = fVar12 * *(float *)(this + 0xb4);
      *(float *)(this + 0xe8) = fVar12;
      if (this[0xb0] != (ScaleConstraint)0x0) {
        fVar12 = fVar12 * *(float *)(param_1 + 0xc4);
        goto LAB_003e2828;
      }
    }
    if (*(int *)(this + 0x9c) == 1) {
      if (fVar13 == 0.0) {
        fStack_84 = 0.0;
        local_88 = 1.0;
      }
      else {
        sincosf(fVar13,&fStack_84,&local_88);
      }
      local_80 = local_88 * fVar23;
      fStack_7c = fStack_84 * fVar23;
      plVar10 = *(long **)(param_1 + 0x30);
      fStack_78 = (float)NEON_fmadd(local_80,fVar20,-(fStack_84 * fVar12));
      fStack_74 = (float)NEON_fmadd(fStack_7c,fVar20,local_88 * fVar12);
      if (fVar20 == 0.0) {
        fStack_74 = local_88 * fVar12;
        fStack_78 = -(fStack_84 * fVar12);
      }
      local_70 = uVar14;
      uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,0x5b);
      puVar2 = (undefined8 *)((long)plVar10 + 0xa4);
      if ((uVar9 & 1) == 0) {
        puVar2 = (undefined8 *)0x686140;
      }
      fVar26 = (float)*puVar2;
      fVar21 = (float)((ulong)*puVar2 >> 0x20);
      fVar16 = (float)puVar2[1];
      fVar27 = (float)((ulong)puVar2[1] >> 0x20);
      fVar28 = (float)((ulong)uVar14 >> 0x20);
      fVar20 = fVar16 * fStack_7c + local_80 * fVar26;
      fVar23 = fVar27 * fStack_7c + local_80 * fVar21;
      fVar24 = fVar16 * fStack_74 + fStack_78 * fVar26;
      fVar25 = fVar27 * fStack_74 + fStack_78 * fVar21;
      uVar22 = puVar2[2];
      fVar29 = (float)NEON_fmadd(fVar20,fVar20,fVar23 * fVar23);
      fVar12 = 0.0;
      if (SQRT(fVar29) != 0.0) {
        fVar12 = (float)NEON_fmadd(fVar20,fVar25,-(fVar24 * fVar23));
        fVar12 = fVar12 / SQRT(fVar29);
      }
      local_80 = fVar20;
      fStack_7c = fVar23;
      fStack_78 = fVar24;
      fStack_74 = fVar25;
      fVar13 = atan2f(fVar23,fVar20);
      fVar20 = (float)NEON_fmadd(fVar20,fVar24,fVar23 * fVar25);
      fVar20 = atan2f(fVar20,fVar29);
      *(ulong *)(this + 0xec) = CONCAT44(fVar20,fVar13);
      *(ulong *)(this + 0xe4) = CONCAT44(fVar12,extraout_var_00);
      *(ulong *)(this + 0xdc) =
           CONCAT44((float)((ulong)uVar22 >> 0x20) + fVar27 * fVar28 + fVar21 * (float)uVar14,
                    (float)uVar22 + fVar16 * fVar28 + fVar26 * (float)uVar14);
      fVar23 = extraout_var_00;
    }
  }
  iVar3 = *(int *)(this + 0xa0);
  if (iVar3 == 1) {
    if (fVar13 == 0.0) {
      fStack_8c = 0.0;
      local_90 = 1.0;
    }
    else {
      sincosf(fVar13,&fStack_8c,&local_90);
    }
    local_80 = local_90 * fVar23;
    fStack_7c = fStack_8c * fVar23;
    plVar10 = *(long **)(param_1 + 0x30);
    fStack_78 = (float)NEON_fmadd(local_80,fVar20,-(fStack_8c * fVar12));
    fStack_74 = (float)NEON_fmadd(fStack_7c,fVar20,local_90 * fVar12);
    uVar14 = *(undefined8 *)(this + 0xdc);
    if (fVar20 == 0.0) {
      fStack_74 = local_90 * fVar12;
      fStack_78 = -(fStack_8c * fVar12);
    }
    local_70 = uVar14;
    uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,0x5b);
    pfVar1 = (float *)((long)plVar10 + 0xa4);
    if ((uVar9 & 1) == 0) {
      pfVar1 = (float *)0x686140;
    }
    fVar26 = *pfVar1;
    fVar24 = pfVar1[3];
    fVar12 = (float)*(undefined8 *)(pfVar1 + 1);
    fVar25 = -fVar12;
    fVar20 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
    fVar23 = (float)NEON_fmadd(fVar26,fVar24,fVar25 * fVar20);
    if (fVar23 == 0.0) goto LAB_003e2d6c;
    fVar23 = 1.0 / fVar23;
    fVar29 = fVar24 * fVar23;
    fVar25 = fVar25 * fVar23;
    fVar13 = -fVar20 * fVar23;
    fVar17 = fVar26 * fVar23;
    fVar21 = fVar13 * fStack_7c + local_80 * fVar29;
    fVar16 = fVar17 * fStack_7c + local_80 * fVar25;
    fVar27 = fVar13 * fStack_74 + fStack_78 * fVar29;
    fVar28 = fVar17 * fStack_74 + fStack_78 * fVar25;
    __x = (float)NEON_fmadd(fVar21,fVar21,fVar16 * fVar16);
    fVar18 = (float)*(undefined8 *)(pfVar1 + 4);
    fVar19 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
    uVar22 = NEON_rev64(CONCAT44(fVar19 * -fVar26,fVar18 * -fVar24),4);
    auVar6._4_4_ = fVar25;
    auVar6._0_4_ = fVar29;
    auVar6._8_4_ = fVar13;
    auVar6._12_4_ = fVar17;
    auVar7._4_4_ = fVar25;
    auVar7._0_4_ = fVar29;
    auVar7._8_4_ = fVar13;
    auVar7._12_4_ = fVar17;
    auVar15 = NEON_ext(auVar6,auVar7,8,1);
    fVar24 = (float)((ulong)uVar14 >> 0x20);
    uVar22 = NEON_rev64(CONCAT44(fVar23 * ((float)((ulong)uVar22 >> 0x20) + fVar19 * fVar20),
                                 fVar23 * ((float)uVar22 + fVar18 * fVar12)),4);
    fVar12 = 0.0;
    if (SQRT(__x) != 0.0) {
      fVar12 = (float)NEON_fmadd(fVar21,fVar28,-(fVar27 * fVar16));
      fVar12 = fVar12 / SQRT(__x);
    }
    local_80 = fVar21;
    fStack_7c = fVar16;
    fStack_78 = fVar27;
    fStack_74 = fVar28;
    fVar13 = atan2f(fVar16,fVar21);
    fVar20 = (float)NEON_fmadd(fVar21,fVar27,fVar16 * fVar28);
    fVar20 = atan2f(fVar20,__x);
    *(ulong *)(this + 0xec) = CONCAT44(fVar20,fVar13);
    *(ulong *)(this + 0xe4) = CONCAT44(fVar12,extraout_var_01);
    *(ulong *)(this + 0xdc) =
         CONCAT44((float)((ulong)uVar22 >> 0x20) + auVar15._4_4_ * fVar24 + fVar25 * (float)uVar14,
                  (float)uVar22 + auVar15._0_4_ * fVar24 + fVar29 * (float)uVar14);
    fVar23 = extraout_var_01;
  }
  if ((this[0xb3] != (ScaleConstraint)0x0) &&
     (fVar24 = *(float *)(this + 0xac),
     fVar23 != fVar24 && fVar23 < fVar24 == (NAN(fVar23) || NAN(fVar24)))) {
    *(float *)(this + 0xe4) = fVar24;
    fVar23 = fVar24;
  }
  if ((this[0xb2] != (ScaleConstraint)0x0) && (fVar24 = *(float *)(this + 0xa8), fVar23 < fVar24)) {
    *(float *)(this + 0xe4) = fVar24;
    fVar23 = fVar24;
  }
  if ((this[0xc2] != (ScaleConstraint)0x0) &&
     (fVar24 = *(float *)(this + 0xbc),
     fVar12 != fVar24 && fVar12 < fVar24 == (NAN(fVar12) || NAN(fVar24)))) {
    *(float *)(this + 0xe8) = fVar24;
    fVar12 = fVar24;
  }
  if ((this[0xc1] != (ScaleConstraint)0x0) && (fVar24 = *(float *)(this + 0xb8), fVar12 < fVar24)) {
    *(float *)(this + 0xe8) = fVar24;
    fVar12 = fVar24;
  }
  if (iVar3 == 1) {
    if (fVar13 == 0.0) {
      fStack_94 = 0.0;
      local_98 = 1.0;
    }
    else {
      sincosf(fVar13,&fStack_94,&local_98);
    }
    local_80 = local_98 * fVar23;
    fStack_7c = fStack_94 * fVar23;
    plVar10 = *(long **)(param_1 + 0x30);
    fStack_78 = (float)NEON_fmadd(local_80,fVar20,-(fStack_94 * fVar12));
    fStack_74 = (float)NEON_fmadd(fStack_7c,fVar20,local_98 * fVar12);
    local_70 = *(undefined8 *)(this + 0xdc);
    if (fVar20 == 0.0) {
      fStack_74 = local_98 * fVar12;
      fStack_78 = -(fStack_94 * fVar12);
    }
    uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,0x5b);
    puVar2 = (undefined8 *)((long)plVar10 + 0xa4);
    if ((uVar9 & 1) == 0) {
      puVar2 = (undefined8 *)0x686140;
    }
    fVar13 = (float)*puVar2;
    fVar21 = (float)((ulong)*puVar2 >> 0x20);
    fVar25 = (float)puVar2[1];
    fVar26 = (float)((ulong)puVar2[1] >> 0x20);
    fVar20 = fVar25 * fStack_7c + local_80 * fVar13;
    fVar24 = fVar26 * fStack_7c + local_80 * fVar21;
    fVar23 = (float)NEON_fmadd(fVar20,fVar20,fVar24 * fVar24);
    fVar23 = SQRT(fVar23);
    fVar12 = 0.0;
    if (fVar23 != 0.0) {
      fVar12 = (-((fVar25 * fStack_74 + fStack_78 * fVar13) * fVar24) +
               fVar20 * (fVar26 * fStack_74 + fStack_78 * fVar21)) / fVar23;
    }
  }
  fVar20 = 1.0;
  fVar24 = *(float *)(this + 0x88);
  uVar22 = *(undefined8 *)(this + 0xc4);
  *(undefined8 *)(this + 0xdc) = uVar22;
  fVar23 = fVar23 * fVar24 + (float)*(undefined8 *)(this + 0xcc) * (1.0 - fVar24);
  fVar24 = fVar12 * fVar24 + (float)((ulong)*(undefined8 *)(this + 0xcc) >> 0x20) * (1.0 - fVar24);
  uVar14 = *(undefined8 *)(this + 0xd4);
  fVar12 = (float)((ulong)uVar14 >> 0x20);
  *(undefined8 *)(this + 0xec) = uVar14;
  *(ulong *)(this + 0xe4) = CONCAT44(fVar24,fVar23);
  if ((float)uVar14 == 0.0) {
    fStack_9c = 0.0;
  }
  else {
    sincosf((float)uVar14,&fStack_9c,&local_a0);
    fVar20 = local_a0;
  }
  *(undefined8 *)(param_1 + 0xb4) = uVar22;
  fVar25 = (float)NEON_fmadd(fVar20 * fVar23,fVar12,-(fStack_9c * fVar24));
  fVar26 = (float)NEON_fmadd(fStack_9c * fVar23,fVar12,fVar20 * fVar24);
  *(float *)(param_1 + 0xa4) = fVar20 * fVar23;
  *(float *)(param_1 + 0xa8) = fStack_9c * fVar23;
  if (fVar12 == 0.0) {
    fVar26 = fVar20 * fVar24;
    fVar25 = -(fStack_9c * fVar24);
  }
  *(float *)(param_1 + 0xac) = fVar25;
  *(float *)(param_1 + 0xb0) = fVar26;
LAB_003e2d6c:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e2da4  FUN_003e2da4 =====

void FUN_003e2da4(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003e2e10  FUN_003e2e10 =====

undefined8 FUN_003e2e10(void)

{
  return 0x58;
}


// ===== 003e2e18  FUN_003e2e18 =====

bool FUN_003e2e18(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x4f;
  if ((uVar1 < 0xc) && ((1 << (ulong)(uVar1 & 0x1f) & 0xac3U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 10;
}


// ===== 003e2e4c  FUN_003e2e4c =====

undefined8 FUN_003e2e4c(void)

{
  return 0;
}


// ===== 003e2e54  rive::RotationConstraint::constrain =====

/* rive::RotationConstraint::constrain(rive::TransformComponent*) */

void __thiscall
rive::RotationConstraint::constrain(RotationConstraint *this,TransformComponent *param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  float extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  undefined1 auVar14 [16];
  undefined4 extraout_var_02;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float __x;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_c0;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(long **)(this + 0x90) != (long *)0x0) &&
     (uVar9 = (**(code **)(**(long **)(this + 0x90) + 0x80))(), (uVar9 & 1) != 0))
  goto LAB_003e3640;
  fVar26 = *(float *)(param_1 + 0xa4);
  fVar28 = *(float *)(param_1 + 0xa8);
  fVar29 = *(float *)(param_1 + 0xac);
  fVar30 = *(float *)(param_1 + 0xb0);
  fVar27 = (float)NEON_fmadd(fVar26,fVar26,fVar28 * fVar28);
  fVar19 = SQRT(fVar27);
  if (fVar19 != 0.0) {
    NEON_fmadd(fVar26,fVar30,-(fVar29 * fVar28));
  }
  fVar12 = atan2f(fVar28,fVar26);
  fVar26 = (float)NEON_fmadd(fVar26,fVar29,fVar28 * fVar30);
  fVar26 = atan2f(fVar26,fVar27);
  uVar13 = *(undefined8 *)(param_1 + 0xb4);
  lVar11 = *(long *)(this + 0x90);
  *(float *)(this + 0xbc) = fVar19;
  *(float *)(this + 0xc0) = extraout_var;
  *(undefined8 *)(this + 0xb4) = uVar13;
  *(float *)(this + 0xc4) = fVar12;
  *(float *)(this + 200) = fVar26;
  if (lVar11 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xac);
    uVar25 = *(undefined8 *)(param_1 + 0xa4);
    local_70 = *(undefined8 *)(param_1 + 0xb4);
    *(undefined8 *)(this + 0xcc) = uVar13;
    *(float *)(this + 0xd4) = fVar19;
    *(float *)(this + 0xd8) = extraout_var;
    fStack_78 = (float)uVar6;
    fStack_74 = (float)((ulong)uVar6 >> 0x20);
    local_80 = (float)uVar25;
    fStack_7c = (float)((ulong)uVar25 >> 0x20);
    *(float *)(this + 0xdc) = fVar12;
    *(float *)(this + 0xe0) = fVar26;
    fVar27 = extraout_var;
  }
  else {
    auVar14 = *(undefined1 (*) [16])(lVar11 + 0xa4);
    local_70 = *(undefined8 *)(lVar11 + 0xb4);
    fStack_78 = auVar14._8_4_;
    fStack_74 = auVar14._12_4_;
    local_80 = auVar14._0_4_;
    fStack_7c = auVar14._4_4_;
    if (*(int *)(this + 0x98) == 1) {
      plVar10 = *(long **)(lVar11 + 0x30);
      uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,0x5b);
      pfVar2 = (float *)((long)plVar10 + 0xa4);
      if ((uVar9 & 1) == 0) {
        pfVar2 = (float *)0x686140;
      }
      fVar29 = *pfVar2;
      fVar27 = pfVar2[3];
      fVar19 = (float)*(undefined8 *)(pfVar2 + 1);
      fVar28 = -fVar19;
      fVar26 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
      fVar30 = (float)NEON_fmadd(fVar29,fVar27,fVar28 * fVar26);
      if (fVar30 == 0.0) goto LAB_003e3640;
      fVar30 = 1.0 / fVar30;
      fVar16 = (float)*(undefined8 *)(pfVar2 + 4);
      fVar18 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
      fVar12 = fVar27 * fVar30;
      fVar28 = fVar28 * fVar30;
      fVar15 = -fVar26 * fVar30;
      fVar17 = fVar29 * fVar30;
      uVar13 = NEON_rev64(CONCAT44(fVar18 * -fVar29,fVar16 * -fVar27),4);
      auVar14._4_4_ = fVar28;
      auVar14._0_4_ = fVar12;
      auVar14._8_4_ = fVar15;
      auVar14._12_4_ = fVar17;
      auVar5._4_4_ = fVar28;
      auVar5._0_4_ = fVar12;
      auVar5._8_4_ = fVar15;
      auVar5._12_4_ = fVar17;
      auVar14 = NEON_ext(auVar14,auVar5,8,1);
      fVar27 = (float)((ulong)local_70 >> 0x20);
      uVar13 = NEON_rev64(CONCAT44(fVar30 * ((float)((ulong)uVar13 >> 0x20) + fVar18 * fVar26),
                                   fVar30 * ((float)uVar13 + fVar16 * fVar19)),4);
      fVar19 = local_80 * fVar28;
      fVar26 = fStack_78 * fVar28;
      local_80 = fVar15 * fStack_7c + local_80 * fVar12;
      fStack_7c = fVar17 * fStack_7c + fVar19;
      fStack_78 = fVar15 * fStack_74 + fStack_78 * fVar12;
      fStack_74 = fVar17 * fStack_74 + fVar26;
      local_70 = CONCAT44((float)((ulong)uVar13 >> 0x20) +
                          auVar14._4_4_ * fVar27 + fVar28 * (float)local_70,
                          (float)uVar13 + auVar14._0_4_ * fVar27 + fVar12 * (float)local_70);
    }
    fVar29 = fStack_7c;
    fVar28 = local_80;
    fVar26 = (float)NEON_fmadd(local_80,local_80,fStack_7c * fStack_7c);
    fVar27 = 0.0;
    fVar19 = SQRT(fVar26);
    if (fVar19 != 0.0) {
      fVar27 = (-(fStack_78 * fStack_7c) + local_80 * fStack_74) / fVar19;
    }
    fVar26 = atan2f(fStack_7c * fStack_74 + local_80 * fStack_78,fVar26);
    uVar13 = local_70;
    *(float *)(this + 0xe0) = fVar26;
    *(float *)(this + 0xdc) = fVar19;
    *(float *)(this + 0xe0) = fVar27;
    *(undefined4 *)(this + 0xcc) = (undefined4)local_70;
    *(undefined4 *)(this + 0xd0) = local_70._4_4_;
    if (this[0xb1] == (RotationConstraint)0x0) {
      fVar12 = 0.0;
      if (*(int *)(this + 0x9c) != 1) {
        fVar12 = *(float *)(this + 0xc4);
      }
LAB_003e30e4:
      *(float *)(this + 0xdc) = fVar12;
    }
    else {
      fVar12 = atan2f(fVar29,fVar28);
      fVar12 = fVar12 * *(float *)(this + 0xa4);
      *(float *)(this + 0xdc) = fVar12;
      if (this[0xb0] != (RotationConstraint)0x0) {
        fVar12 = fVar12 + *(float *)(param_1 + 0xbc);
        goto LAB_003e30e4;
      }
    }
    if (*(int *)(this + 0x9c) == 1) {
      if (fVar12 == 0.0) {
        fStack_84 = 0.0;
        local_88 = 1.0;
      }
      else {
        sincosf(fVar12,&fStack_84,&local_88);
      }
      local_80 = local_88 * fVar19;
      fStack_7c = fStack_84 * fVar19;
      plVar10 = *(long **)(param_1 + 0x30);
      fStack_78 = (float)NEON_fmadd(local_80,fVar26,-(fStack_84 * fVar27));
      fStack_74 = (float)NEON_fmadd(fStack_7c,fVar26,local_88 * fVar27);
      if (fVar26 == 0.0) {
        fStack_74 = local_88 * fVar27;
        fStack_78 = -(fStack_84 * fVar27);
      }
      local_70 = uVar13;
      uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,0x5b);
      puVar1 = (undefined8 *)((long)plVar10 + 0xa4);
      if ((uVar9 & 1) == 0) {
        puVar1 = (undefined8 *)0x686140;
      }
      fVar19 = (float)*puVar1;
      fVar26 = (float)((ulong)*puVar1 >> 0x20);
      fVar27 = (float)puVar1[1];
      fVar28 = (float)((ulong)puVar1[1] >> 0x20);
      fVar29 = fVar27 * fStack_7c + local_80 * fVar19;
      fVar30 = fVar28 * fStack_7c + local_80 * fVar26;
      fVar15 = fVar27 * fStack_74 + fStack_78 * fVar19;
      fVar26 = fVar28 * fStack_74 + fStack_78 * fVar26;
      fVar28 = (float)NEON_fmadd(fVar29,fVar29,fVar30 * fVar30);
      fVar19 = SQRT(fVar28);
      fVar27 = 0.0;
      if (fVar19 != 0.0) {
        fVar27 = (float)NEON_fmadd(fVar29,fVar26,-(fVar15 * fVar30));
        fVar27 = fVar27 / fVar19;
      }
      local_80 = fVar29;
      fStack_7c = fVar30;
      fStack_78 = fVar15;
      fStack_74 = fVar26;
      fVar12 = atan2f(fVar30,fVar29);
      local_c0 = CONCAT44(extraout_var_02,extraout_var_00);
      fVar26 = (float)NEON_fmadd(fVar29,fVar15,fVar30 * fVar26);
      fVar26 = atan2f(fVar26,fVar28);
      *(ulong *)(this + 0xdc) = CONCAT44(fVar26,fVar12);
      *(ulong *)(this + 0xd4) = CONCAT44(fVar27,fVar19);
      *(undefined8 *)(this + 0xcc) = local_c0;
    }
  }
  iVar3 = *(int *)(this + 0xa0);
  if (iVar3 == 1) {
    if (fVar12 == 0.0) {
      fStack_8c = 0.0;
      local_90 = 1.0;
    }
    else {
      sincosf(fVar12,&fStack_8c,&local_90);
    }
    local_80 = local_90 * fVar19;
    fStack_7c = fStack_8c * fVar19;
    plVar10 = *(long **)(param_1 + 0x30);
    fStack_78 = (float)NEON_fmadd(local_80,fVar26,-(fStack_8c * fVar27));
    fStack_74 = (float)NEON_fmadd(fStack_7c,fVar26,local_90 * fVar27);
    uVar13 = *(undefined8 *)(this + 0xcc);
    if (fVar26 == 0.0) {
      fStack_74 = local_90 * fVar27;
      fStack_78 = -(fStack_8c * fVar27);
    }
    local_70 = uVar13;
    uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,0x5b);
    pfVar2 = (float *)((long)plVar10 + 0xa4);
    if ((uVar9 & 1) == 0) {
      pfVar2 = (float *)0x686140;
    }
    fVar12 = *pfVar2;
    fVar29 = pfVar2[3];
    fVar26 = (float)*(undefined8 *)(pfVar2 + 1);
    fVar30 = -fVar26;
    fVar27 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
    fVar28 = (float)NEON_fmadd(fVar12,fVar29,fVar30 * fVar27);
    if (fVar28 == 0.0) goto LAB_003e3640;
    fVar28 = 1.0 / fVar28;
    fVar20 = fVar29 * fVar28;
    fVar30 = fVar30 * fVar28;
    fVar21 = -fVar27 * fVar28;
    fVar22 = fVar12 * fVar28;
    fVar15 = fVar21 * fStack_7c + local_80 * fVar20;
    fVar17 = fVar22 * fStack_7c + local_80 * fVar30;
    fVar16 = fVar21 * fStack_74 + fStack_78 * fVar20;
    fVar18 = fVar22 * fStack_74 + fStack_78 * fVar30;
    __x = (float)NEON_fmadd(fVar15,fVar15,fVar17 * fVar17);
    fVar23 = (float)*(undefined8 *)(pfVar2 + 4);
    fVar24 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
    fVar19 = SQRT(__x);
    uVar25 = NEON_rev64(CONCAT44(fVar24 * -fVar12,fVar23 * -fVar29),4);
    auVar7._4_4_ = fVar30;
    auVar7._0_4_ = fVar20;
    auVar7._8_4_ = fVar21;
    auVar7._12_4_ = fVar22;
    auVar8._4_4_ = fVar30;
    auVar8._0_4_ = fVar20;
    auVar8._8_4_ = fVar21;
    auVar8._12_4_ = fVar22;
    auVar14 = NEON_ext(auVar7,auVar8,8,1);
    fVar29 = (float)((ulong)uVar13 >> 0x20);
    uVar25 = NEON_rev64(CONCAT44(fVar28 * ((float)((ulong)uVar25 >> 0x20) + fVar24 * fVar27),
                                 fVar28 * ((float)uVar25 + fVar23 * fVar26)),4);
    if (fVar19 != 0.0) {
      NEON_fmadd(fVar15,fVar18,-(fVar16 * fVar17));
    }
    fVar12 = atan2f(fVar17,fVar15);
    fVar26 = (float)NEON_fmadd(fVar15,fVar16,fVar17 * fVar18);
    fVar26 = atan2f(fVar26,__x);
    *(ulong *)(this + 0xdc) = CONCAT44(fVar26,fVar12);
    *(ulong *)(this + 0xd4) = CONCAT44(extraout_var_01,fVar19);
    *(ulong *)(this + 0xcc) =
         CONCAT44((float)((ulong)uVar25 >> 0x20) + auVar14._4_4_ * fVar29 + fVar30 * (float)uVar13,
                  (float)uVar25 + auVar14._0_4_ * fVar29 + fVar20 * (float)uVar13);
    fVar27 = extraout_var_01;
  }
  if ((this[0xb3] != (RotationConstraint)0x0) &&
     (fVar28 = *(float *)(this + 0xac),
     fVar12 != fVar28 && fVar12 < fVar28 == (NAN(fVar12) || NAN(fVar28)))) {
    *(float *)(this + 0xdc) = fVar28;
    fVar12 = fVar28;
  }
  if ((this[0xb2] != (RotationConstraint)0x0) && (fVar28 = *(float *)(this + 0xa8), fVar12 < fVar28)
     ) {
    *(float *)(this + 0xdc) = fVar28;
    fVar12 = fVar28;
  }
  if (iVar3 == 1) {
    if (fVar12 == 0.0) {
      fStack_94 = 0.0;
      local_98 = 1.0;
    }
    else {
      sincosf(fVar12,&fStack_94,&local_98);
    }
    local_80 = local_98 * fVar19;
    fStack_7c = fStack_94 * fVar19;
    plVar10 = *(long **)(param_1 + 0x30);
    fStack_78 = (float)NEON_fmadd(local_80,fVar26,-(fStack_94 * fVar27));
    fStack_74 = (float)NEON_fmadd(fStack_7c,fVar26,local_98 * fVar27);
    local_70 = *(undefined8 *)(this + 0xcc);
    if (fVar26 == 0.0) {
      fStack_74 = local_98 * fVar27;
      fStack_78 = -(fStack_94 * fVar27);
    }
    uVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,0x5b);
    puVar1 = (undefined8 *)((long)plVar10 + 0xa4);
    if ((uVar9 & 1) == 0) {
      puVar1 = (undefined8 *)0x686140;
    }
    fVar12 = atan2f((float)((ulong)puVar1[1] >> 0x20) * fStack_7c +
                    local_80 * (float)((ulong)*puVar1 >> 0x20),
                    (float)puVar1[1] * fStack_7c + local_80 * (float)*puVar1);
  }
  fVar27 = *(float *)(this + 0xc4);
  fVar19 = fmodf(fVar27,6.2831855);
  fVar26 = fmodf(fVar12,6.2831855);
  fVar26 = fVar26 - fVar19;
  if (fVar26 == 3.1415927 || fVar26 < 3.1415927 != NAN(fVar26)) {
    if (fVar26 < -3.1415927) {
      fVar19 = 6.2831855;
      goto LAB_003e35c0;
    }
  }
  else {
    fVar19 = -6.2831855;
LAB_003e35c0:
    fVar26 = fVar26 + fVar19;
  }
  fVar19 = (float)NEON_fmadd(fVar26,*(undefined4 *)(this + 0x88),fVar27);
  uVar25 = *(undefined8 *)(this + 0xbc);
  fVar26 = (float)((ulong)uVar25 >> 0x20);
  uVar13 = *(undefined8 *)(this + 0xb4);
  fVar27 = *(float *)(this + 200);
  *(undefined8 *)(this + 0xd4) = uVar25;
  *(undefined8 *)(this + 0xcc) = uVar13;
  *(float *)(this + 0xdc) = fVar19;
  *(float *)(this + 0xe0) = fVar27;
  if (fVar19 == 0.0) {
    fStack_9c = 0.0;
    local_a0 = 1.0;
  }
  else {
    sincosf(fVar19,&fStack_9c,&local_a0);
  }
  fVar28 = local_a0 * (float)uVar25;
  fVar29 = -(fStack_9c * fVar26);
  fStack_9c = fStack_9c * (float)uVar25;
  local_a0 = local_a0 * fVar26;
  *(undefined8 *)(param_1 + 0xb4) = uVar13;
  fVar19 = (float)NEON_fmadd(fVar28,fVar27,fVar29);
  fVar26 = (float)NEON_fmadd(fStack_9c,fVar27,local_a0);
  *(float *)(param_1 + 0xa4) = fVar28;
  *(float *)(param_1 + 0xa8) = fStack_9c;
  if (fVar27 == 0.0) {
    fVar26 = local_a0;
    fVar19 = fVar29;
  }
  *(float *)(param_1 + 0xac) = fVar19;
  *(float *)(param_1 + 0xb0) = fVar26;
LAB_003e3640:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e3678  FUN_003e3678 =====

void FUN_003e3678(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003e36e4  FUN_003e36e4 =====

undefined8 FUN_003e36e4(void)

{
  return 0x59;
}


// ===== 003e36ec  FUN_003e36ec =====

bool FUN_003e36ec(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x4f;
  if ((uVar1 < 0xc) && ((1 << (ulong)(uVar1 & 0x1f) & 0xc43U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 10;
}


// ===== 003e3720  FUN_003e3720 =====

undefined8 FUN_003e3720(void)

{
  return 0;
}


// ===== 003e3728  rive::ListenerFireEvent::perform =====

/* rive::ListenerFireEvent::perform(rive::StateMachineInstance*, rive::ListenerInvocation const&)
   const */

void rive::ListenerFireEvent::perform(StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_2 + 0x10) + 0x348))
                             (*(long **)(param_2 + 0x10),*(undefined4 *)(param_1 + 0x10));
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x80), (uVar2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003e3788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 0xa0))(0,param_2,plVar1);
    return;
  }
  return;
}


// ===== 003e3798  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e379c  FUN_003e379c =====

undefined8 FUN_003e379c(void)

{
  return 0xa8;
}


// ===== 003e37a4  FUN_003e37a4 =====

bool FUN_003e37a4(undefined8 param_1,short param_2)

{
  return param_2 == 0xa8 || param_2 == 0x7d;
}


// ===== 003e37bc  FUN_003e37bc =====

undefined8 FUN_003e37bc(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3d4) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e389c;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e389c:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x185) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e3880;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar5;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e3880:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return 1;
}


// ===== 003e38b0  FUN_003e38b0 =====

void FUN_003e38b0(void)

{
  return;
}


// ===== 003e38b4  FUN_003e38b4 =====

void FUN_003e38b4(void)

{
  return;
}


// ===== 003e38b8  rive::ListenerAction::import =====

/* rive::ListenerAction::import(rive::ImportStack&) */

undefined8 __thiscall rive::ListenerAction::import(ListenerAction *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ListenerAction *pLVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  ListenerAction *local_38;
  ListenerAction *local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(this + 0xc) >> 1 & 3;
  uVar1 = 0;
  if (uVar2 != 3) {
    uVar1 = uVar2;
  }
  if (uVar1 - 1 < 2) {
    uVar6 = *(ulong *)(param_1 + 8);
    if (uVar6 != 0) {
      uVar12 = NEON_cnt(uVar6,1);
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar7 < 2) {
        uVar8 = (ulong)((uint)uVar6 - 1) & 0x42;
      }
      else {
        uVar8 = 0x42;
        if (uVar6 < 0x43) {
          uVar1 = (uint)uVar6 & 0xff;
          uVar2 = 0;
          if ((uVar6 & 0xff) != 0) {
            uVar2 = 0x42 / uVar1;
          }
          uVar8 = (ulong)(0x42 - uVar2 * uVar1);
        }
      }
      plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == 0x42) {
            if ((short)plVar9[2] == 0x42) {
              if ((StateMachineLayerComponentImporter *)plVar9[3] !=
                  (StateMachineLayerComponentImporter *)0x0) {
                local_38 = this;
                StateMachineLayerComponentImporter::addListenerAction
                          ((StateMachineLayerComponentImporter *)plVar9[3],&local_38);
                pLVar5 = local_38;
                if (local_38 != (ListenerAction *)0x0) {
LAB_003e3a78:
                  (**(code **)(*(long *)pLVar5 + 8))();
                }
LAB_003e3a84:
                uVar12 = 0;
                goto LAB_003e3ab4;
              }
              break;
            }
          }
          else {
            if (uVar7 < 2) {
              uVar10 = uVar10 & uVar6 - 1;
            }
            else if (uVar6 <= uVar10) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar10 / uVar6;
              }
              uVar10 = uVar10 - uVar3 * uVar6;
            }
            if (uVar10 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  else if ((uVar1 == 0) && (uVar6 = *(ulong *)(param_1 + 8), uVar6 != 0)) {
    uVar12 = NEON_cnt(uVar6,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = (ulong)((uint)uVar6 - 1) & 0x28e;
    }
    else {
      uVar8 = 0x28e;
      if (uVar6 < 0x28f) {
        uVar1 = (uint)uVar6 & 0xffff;
        uVar2 = 0;
        if ((uVar6 & 0xffff) != 0) {
          uVar2 = 0x28e / uVar1;
        }
        uVar8 = (ulong)(0x28e - uVar2 * uVar1);
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x28e) {
          if ((short)plVar9[2] == 0x28e) {
            if ((StateMachineListenerImporter *)plVar9[3] == (StateMachineListenerImporter *)0x0)
            goto LAB_003e3ab0;
            local_30 = this;
            StateMachineListenerImporter::addAction
                      ((StateMachineListenerImporter *)plVar9[3],&local_30);
            pLVar5 = local_30;
            if (local_30 == (ListenerAction *)0x0) goto LAB_003e3a84;
            goto LAB_003e3a78;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar3 * uVar6;
          }
          if (uVar10 != uVar8) goto LAB_003e3ab0;
        }
        plVar9 = (long *)*plVar9;
        uVar12 = 1;
      } while (plVar9 != (long *)0x0);
      goto LAB_003e3ab4;
    }
  }
LAB_003e3ab0:
  uVar12 = 1;
LAB_003e3ab4:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


// ===== 003e3adc  FUN_003e3adc =====

void FUN_003e3adc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3e3ae0);
  (*pcVar1)();
}


// ===== 003e3ae0  FUN_003e3ae0 =====

undefined8 FUN_003e3ae0(void)

{
  return 0x7d;
}


// ===== 003e3ae8  FUN_003e3ae8 =====

bool FUN_003e3ae8(undefined8 param_1,short param_2)

{
  return param_2 == 0x7d;
}


// ===== 003e3af8  FUN_003e3af8 =====

bool FUN_003e3af8(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3d4) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e3b5c;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e3b5c:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x3d4;
}


// ===== 003e3b74  rive::StateMachineFireTrigger::perform =====

/* rive::StateMachineFireTrigger::perform(rive::StateMachineInstance*) const */

void __thiscall
rive::StateMachineFireTrigger::perform(StateMachineFireTrigger *this,StateMachineInstance *param_1)

{
  long *plVar1;
  ulong uVar2;
  DataContext *this_00;
  
  this_00 = *(DataContext **)(param_1 + 0xe8);
  if (this_00 != (DataContext *)0x0) {
    FUN_00340fb0(1,this_00);
    if (((*(DataBindPath **)(this + 0x10) != (DataBindPath *)0x0) &&
        (plVar1 = (long *)DataContext::getViewModelProperty(this_00,*(DataBindPath **)(this + 0x10))
        , plVar1 != (long *)0x0)) &&
       (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x1f5), (uVar2 & 1) != 0)) {
      *(int *)(plVar1 + 0x22) = (int)plVar1[0x22] + 1;
      (**(code **)(*plVar1 + 0xb0))(plVar1);
    }
    FUN_003462d8(this_00);
    return;
  }
  return;
}


// ===== 003e3bfc  rive::StateMachineFireTrigger::import =====

/* rive::StateMachineFireTrigger::import(rive::ImportStack&) */

undefined8 __thiscall
rive::StateMachineFireTrigger::import(StateMachineFireTrigger *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar12 = NEON_cnt(uVar4,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  uVar3 = (uint)uVar4;
  if (uVar5 < 2) {
    uVar7 = (ulong)(uVar3 - 1) & 0x283;
  }
  else {
    uVar7 = 0x283;
    if (uVar4 < 0x284) {
      uVar1 = 0;
      if ((uVar4 & 0xffff) != 0) {
        uVar1 = 0x283 / (uVar3 & 0xffff);
      }
      uVar7 = (ulong)(0x283 - uVar1 * (uVar3 & 0xffff));
    }
  }
  plVar9 = *(long **)(*(long *)param_1 + uVar7 * 8);
  if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
    do {
      uVar10 = plVar9[1];
      if (uVar10 == 0x283) {
        if ((short)plVar9[2] == 0x283) {
          lVar6 = plVar9[3];
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + 8);
            *(undefined8 *)(lVar6 + 8) = 0;
            if (lVar8 != 0) {
              *(long *)(this + 0x10) = lVar8;
            }
          }
          break;
        }
      }
      else {
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar4 - 1;
        }
        else if (uVar4 <= uVar10) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar10 / uVar4;
          }
          uVar10 = uVar10 - uVar2 * uVar4;
        }
        if (uVar10 != uVar7) break;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    if (uVar4 == 0) {
      return 1;
    }
  }
  uVar12 = NEON_cnt(uVar4,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  if (uVar5 < 2) {
    uVar7 = (ulong)(uVar3 - 1) & 0x42;
  }
  else {
    uVar7 = 0x42;
    if (uVar4 < 0x43) {
      uVar1 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar1 = 0x42 / (uVar3 & 0xff);
      }
      uVar7 = (ulong)(0x42 - uVar1 * (uVar3 & 0xff));
    }
  }
  plVar9 = *(long **)(*(long *)param_1 + uVar7 * 8);
  if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
    do {
      uVar10 = plVar9[1];
      if (uVar10 == 0x42) {
        if ((short)plVar9[2] == 0x42) {
          if ((StateMachineLayerComponentImporter *)plVar9[3] ==
              (StateMachineLayerComponentImporter *)0x0) {
            return 1;
          }
          StateMachineLayerComponentImporter::addFireEvent
                    ((StateMachineLayerComponentImporter *)plVar9[3],(StateMachineFireAction *)this)
          ;
          return 0;
        }
      }
      else {
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar4 - 1;
        }
        else if (uVar4 <= uVar10) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar10 / uVar4;
          }
          uVar10 = uVar10 - uVar2 * uVar4;
        }
        if (uVar10 != uVar7) {
          return 1;
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return 1;
}


// ===== 003e3dac  rive::StateMachineFireTrigger::decodeViewModelPathIds =====

/* rive::StateMachineFireTrigger::decodeViewModelPathIds(rive::Span<unsigned char const>) */

void rive::StateMachineFireTrigger::decodeViewModelPathIds
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x38);
  plVar2[6] = 0;
  plVar2[1] = 0;
  *plVar2 = 0;
  puVar1 = PTR_vtable_0067d250;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined1 *)(plVar2 + 6) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar2;
  DataBindPath::decodePath(plVar2,param_2,param_3);
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x30) = 1;
  return;
}


// ===== 003e3e28  rive::StateMachineFireTrigger::copyViewModelPathIds =====

/* rive::StateMachineFireTrigger::copyViewModelPathIds(rive::StateMachineFireTriggerBase const&) */

void __thiscall
rive::StateMachineFireTrigger::copyViewModelPathIds
          (StateMachineFireTrigger *this,StateMachineFireTriggerBase *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    lVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    lVar2 = plVar3[5];
    *(long *)(this + 0x10) = lVar1;
    *(long *)(lVar1 + 0x28) = lVar2;
  }
  return;
}


// ===== 003e3e68  FUN_003e3e68 =====

void FUN_003e3e68(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e3e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return;
  }
  return;
}


// ===== 003e3e80  FUN_003e3e80 =====

void FUN_003e3e80(void *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)((long)param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 003e3eb8  FUN_003e3eb8 =====

undefined8 FUN_003e3eb8(void)

{
  return 0x266;
}


// ===== 003e3ec0  FUN_003e3ec0 =====

bool FUN_003e3ec0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffe) == 0x266;
}


// ===== 003e3ed0  FUN_003e3ed0 =====

undefined8 FUN_003e3ed0(long *param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  
  if (param_2 == 0x189) {
    uVar7 = 0;
    uVar4 = 0;
    pbVar3 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar3) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e3fc8;
      }
      pbVar8 = pbVar3 + 1;
      bVar1 = *pbVar3;
      uVar2 = uVar7 & 0x3f;
      uVar7 = (ulong)(((uint)uVar7 & 0xff) + 7);
      uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
      pbVar3 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar4 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e3fc8:
      uVar4 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)((long)param_1 + 0xc) = (int)uVar4;
  }
  else {
    if (param_2 != 0x367) {
      return 0;
    }
    uVar7 = 0;
    uVar4 = 0;
    pbVar3 = (byte *)(*param_3 + param_3[1]);
    pbVar8 = (byte *)param_3[2];
    do {
      if (pbVar3 <= pbVar8) {
        uVar4 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
        pbVar8 = pbVar3;
        goto LAB_003e3fa8;
      }
      pbVar5 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar2 = uVar7 & 0x3f;
      uVar7 = (ulong)(((uint)uVar7 & 0xff) + 7);
      uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
      pbVar8 = pbVar5;
    } while ((char)bVar1 < '\0');
    if ((char)param_3[3] != '\0') {
      uVar4 = 0;
    }
    pbVar3 = pbVar5;
    pbVar8 = pbVar5 + uVar4;
LAB_003e3fa8:
    lVar6 = *param_1;
    param_3[2] = (long)pbVar8;
    (**(code **)(lVar6 + 0x60))(param_1,pbVar3,uVar4);
  }
  return 1;
}


// ===== 003e3fe0  FUN_003e3fe0 =====

void FUN_003e3fe0(void)

{
  return;
}


// ===== 003e3fe4  FUN_003e3fe4 =====

void FUN_003e3fe4(void)

{
  return;
}


// ===== 003e3fe8  rive::StateMachineFireAction::import =====

/* rive::StateMachineFireAction::import(rive::ImportStack&) */

undefined8 __thiscall
rive::StateMachineFireAction::import(StateMachineFireAction *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar9 = NEON_cnt(uVar4,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
  if ((uVar10 & 0xffffffff) < 2) {
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x42;
  }
  else {
    uVar5 = 0x42;
    if (uVar4 < 0x43) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar2 = 0x42 / uVar1;
      }
      uVar5 = (ulong)(0x42 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == 0x42) {
        if ((short)plVar6[2] == 0x42) {
          if ((StateMachineLayerComponentImporter *)plVar6[3] ==
              (StateMachineLayerComponentImporter *)0x0) {
            return 1;
          }
          StateMachineLayerComponentImporter::addFireEvent
                    ((StateMachineLayerComponentImporter *)plVar6[3],this);
          return 0;
        }
      }
      else {
        if ((uVar10 & 0xffffffff) < 2) {
          uVar7 = uVar7 & uVar4 - 1;
        }
        else if (uVar4 <= uVar7) {
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = uVar7 / uVar4;
          }
          uVar7 = uVar7 - uVar3 * uVar4;
        }
        if (uVar7 != uVar5) {
          return 1;
        }
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return 1;
}


// ===== 003e40d4  FUN_003e40d4 =====

void FUN_003e40d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3e40d8);
  (*pcVar1)();
}


// ===== 003e40d8  FUN_003e40d8 =====

undefined8 FUN_003e40d8(void)

{
  return 0x267;
}


// ===== 003e40e0  FUN_003e40e0 =====

bool FUN_003e40e0(undefined8 param_1,short param_2)

{
  return param_2 == 0x267;
}


// ===== 003e40f0  FUN_003e40f0 =====

bool FUN_003e40f0(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x189) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e4154;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4154:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x189;
}


// ===== 003e416c  rive::KeyFrameUint::apply =====

/* rive::KeyFrameUint::apply(rive::Core*, int, float) */

void rive::KeyFrameUint::apply(Core *param_1,int param_2,float param_3)

{
  undefined4 in_w2;
  
  FUN_00376dfc(param_2,in_w2,*(undefined4 *)(param_1 + 0x28));
  return;
}


// ===== 003e4180  rive::KeyFrameUint::applyInterpolation =====

/* rive::KeyFrameUint::applyInterpolation(rive::Core*, int, float, rive::KeyFrame const*, float,
   rive::LinearAnimationInstance const*) */

void rive::KeyFrameUint::applyInterpolation
               (Core *param_1,int param_2,float param_3,KeyFrame *param_4,float param_5,
               LinearAnimationInstance *param_6)

{
  FUN_00376dfc(param_2,(ulong)param_4 & 0xffffffff,*(undefined4 *)(param_1 + 0x28));
  return;
}


// ===== 003e4194  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e4198  FUN_003e4198 =====

undefined8 FUN_003e4198(void)

{
  return 0x1c2;
}


// ===== 003e41a0  FUN_003e41a0 =====

undefined8 FUN_003e41a0(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 0x1d) && (param_2 != 0xaa)) && (param_2 != 0x1c2)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003e41c8  FUN_003e41c8 =====

undefined4 FUN_003e41c8(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 < 0x45) {
    if (param_2 == 0x43) {
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e4370;
        }
        pbVar4 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar2 = uVar6 & 0x3f;
        uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar5 = pbVar4;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar4;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4370:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xc) = (int)uVar3;
    }
    else {
      if (param_2 != 0x44) {
        return 0;
      }
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e4340;
        }
        pbVar4 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar2 = uVar6 & 0x3f;
        uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar5 = pbVar4;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar4;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4340:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x14) = (int)uVar3;
    }
  }
  else if (param_2 == 0x45) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e4388;
      }
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar5 = pbVar4;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar4;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4388:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x18) = (int)uVar3;
  }
  else {
    if (param_2 != 0x277) {
      return 0;
    }
    uVar6 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e4358;
      }
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar5 = pbVar4;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar4;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4358:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar3;
  }
  return 1;
}


// ===== 003e43a0  FUN_003e43a0 =====

void FUN_003e43a0(void)

{
  return;
}


// ===== 003e43a4  FUN_003e43a4 =====

void FUN_003e43a4(void)

{
  return;
}


// ===== 003e43a8  FUN_003e43a8 =====

void FUN_003e43a8(void)

{
  return;
}


// ===== 003e43ac  rive::InterpolatingKeyFrame::onAddedDirty =====

/* rive::InterpolatingKeyFrame::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::InterpolatingKeyFrame::onAddedDirty(InterpolatingKeyFrame *this,CoreContext *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(this + 0x18) != -1) {
    plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(int *)(this + 0x18));
    if ((plVar1 == (long *)0x0) ||
       (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0xaf), (uVar2 & 1) == 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      *(long **)(this + 0x20) = plVar1;
    }
    return uVar3;
  }
  return 0;
}


// ===== 003e441c  rive::InterpolatingKeyFrame::effectiveInterpolator =====

/* rive::InterpolatingKeyFrame::effectiveInterpolator(rive::LinearAnimationInstance const*) const */

ScriptedInterpolator * __thiscall
rive::InterpolatingKeyFrame::effectiveInterpolator
          (InterpolatingKeyFrame *this,LinearAnimationInstance *param_1)

{
  ulong uVar1;
  ScriptedInterpolator *pSVar2;
  ScriptedInterpolator *pSVar3;
  
  pSVar3 = *(ScriptedInterpolator **)(this + 0x20);
  if ((((param_1 != (LinearAnimationInstance *)0x0) && (pSVar3 != (ScriptedInterpolator *)0x0)) &&
      (uVar1 = (**(code **)(*(long *)pSVar3 + 0x18))(pSVar3,0x3cc), (uVar1 & 1) != 0)) &&
     (pSVar2 = (ScriptedInterpolator *)
               LinearAnimationInstance::statefulInterpolator(param_1,this,pSVar3),
     pSVar2 != (ScriptedInterpolator *)0x0)) {
    pSVar3 = pSVar2;
  }
  return pSVar3;
}


// ===== 003e4484  FUN_003e4484 =====

void FUN_003e4484(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3e4488);
  (*pcVar1)();
}


// ===== 003e4488  FUN_003e4488 =====

undefined8 FUN_003e4488(void)

{
  return 0xaa;
}


// ===== 003e4490  FUN_003e4490 =====

bool FUN_003e4490(undefined8 param_1,short param_2)

{
  return param_2 == 0xaa || param_2 == 0x1d;
}


// ===== 003e44a4  FUN_003e44a4 =====

undefined8 FUN_003e44a4(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x43) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e45dc;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e45dc:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 == 0x45) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e45c0;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e45c0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x18) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x44) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e45f8;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar5;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e45f8:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return 1;
}


// ===== 003e460c  rive::NestedSimpleAnimation::advance =====

/* rive::NestedSimpleAnimation::advance(float, bool) */

uint rive::NestedSimpleAnimation::advance(float param_1,bool param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  LinearAnimationInstance *pLVar7;
  Core *pCVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = (ulong)param_2;
  pLVar7 = *(LinearAnimationInstance **)(uVar6 + 0xa8);
  if (pLVar7 == (LinearAnimationInstance *)0x0) {
    uVar5 = 0;
  }
  else {
    if (*(char *)(uVar6 + 0xb4) == '\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = LinearAnimationInstance::advance
                        (pLVar7,*(float *)(uVar6 + 0xb0) * param_1,(KeyedCallbackReporter *)pLVar7);
    }
    fVar13 = *(float *)(uVar6 + 0xa4);
    if (fVar13 != 0.0) {
      pLVar7 = *(LinearAnimationInstance **)(uVar6 + 0xa8);
      lVar9 = *(long *)(pLVar7 + 0x38);
      fVar14 = *(float *)(pLVar7 + 0x40);
      if (*(char *)(lVar9 + 0x41) != '\0') {
        fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x28));
        fVar14 = (float)(int)(fVar14 * fVar12) / fVar12;
      }
      plVar11 = *(long **)(lVar9 + 0x48);
      plVar2 = *(long **)(lVar9 + 0x50);
      if (plVar11 != plVar2) {
        plVar10 = *(long **)(pLVar7 + 0x10);
        do {
          lVar9 = *plVar11;
          pCVar8 = (Core *)(**(code **)(*plVar10 + 0x348))(plVar10,*(undefined4 *)(lVar9 + 0xc));
          if (pCVar8 != (Core *)0x0) {
            puVar3 = *(undefined8 **)(lVar9 + 0x18);
            for (puVar1 = *(undefined8 **)(lVar9 + 0x10); puVar1 != puVar3; puVar1 = puVar1 + 1) {
              iVar4 = *(int *)((KeyedProperty *)*puVar1 + 0xc);
              if (iVar4 < 0x365) {
                if ((iVar4 != 0x18b) && (iVar4 != 0x191)) {
LAB_003e46e4:
                  KeyedProperty::apply((KeyedProperty *)*puVar1,pCVar8,fVar14,fVar13,pLVar7);
                }
              }
              else if ((iVar4 != 0x365) && (iVar4 != 0x3f8)) goto LAB_003e46e4;
            }
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar2);
      }
    }
  }
  return uVar5 & 1;
}


// ===== 003e475c  FUN_003e475c =====

void FUN_003e475c(NestedLinearAnimation *param_1)

{
  rive::NestedLinearAnimation::~NestedLinearAnimation(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003e4780  FUN_003e4780 =====

undefined8 FUN_003e4780(void)

{
  return 0x60;
}


// ===== 003e4788  FUN_003e4788 =====

bool FUN_003e4788(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x5d;
  if ((uVar1 < 5) && ((1 << (ulong)(uVar1 & 0x1f) & 0x19U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) - 10 < 2;
}


// ===== 003e47c0  FUN_003e47c0 =====

undefined8 FUN_003e47c0(long param_1,short param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (param_2 == 0xc9) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    pcVar4 = (char *)param_3[2];
    if (0 < (lVar1 + lVar2) - (long)pcVar4) {
      param_3[2] = (long)(pcVar4 + 1);
      *(bool *)(param_1 + 0xb4) = *pcVar4 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0xb4) = 0;
    param_3[2] = lVar1 + lVar2;
    *(undefined1 *)(param_3 + 3) = 1;
    return 1;
  }
  if (param_2 == 199) {
    puVar6 = (undefined4 *)param_3[2];
    puVar5 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar5 - (long)puVar6 < 4) {
      uVar7 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar5 = puVar6 + 1;
      uVar7 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar7;
    param_3[2] = (long)puVar5;
    return 1;
  }
  uVar3 = FUN_003d65fc();
  return uVar3;
}


// ===== 003e4868  FUN_003e4868 =====

void FUN_003e4868(void)

{
  return;
}


// ===== 003e486c  FUN_003e486c =====

void FUN_003e486c(void)

{
  return;
}


// ===== 003e4870  rive::AnimationState::makeInstance =====

/* rive::AnimationState::makeInstance(rive::ArtboardInstance*) const */

void rive::AnimationState::makeInstance(ArtboardInstance *param_1)

{
  AnimationStateInstance *this;
  ArtboardInstance *in_x1;
  undefined8 *in_x8;
  
  this = (AnimationStateInstance *)operator_new(0x98);
  AnimationStateInstance::AnimationStateInstance(this,(AnimationState *)param_1,in_x1);
  *in_x8 = this;
  return;
}


// ===== 003e48b8  FUN_003e48b8 =====

void FUN_003e48b8(LayerState *param_1)

{
  rive::LayerState::~LayerState(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003e48dc  FUN_003e48dc =====

undefined8 FUN_003e48dc(void)

{
  return 0x3d;
}


// ===== 003e48e4  FUN_003e48e4 =====

bool FUN_003e48e4(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x3c;
  if ((uVar1 < 7) && ((1 << (ulong)(uVar1 & 0x1f) & 0x43U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x91;
}


// ===== 003e4918  FUN_003e4918 =====

undefined8 FUN_003e4918(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  if (param_2 == 0x218) {
    uVar8 = 0;
    uVar3 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e4a0c;
      }
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar6 = pbVar7;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar7;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4a0c:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x40) = (int)uVar3;
    return 1;
  }
  if (param_2 == 0x124) {
    puVar5 = (undefined4 *)param_3[2];
    puVar4 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar4 - (long)puVar5 < 4) {
      uVar9 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar4 = puVar5 + 1;
      uVar9 = *puVar5;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar9;
    param_3[2] = (long)puVar4;
    return 1;
  }
  if (param_2 != 0x95) {
    return 0;
  }
  uVar8 = 0;
  uVar3 = 0;
  pbVar6 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e4a28;
    }
    pbVar7 = pbVar6 + 1;
    bVar1 = *pbVar6;
    uVar2 = uVar8 & 0x3f;
    uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar6 = pbVar7;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar7;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4a28:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 100) = (int)uVar3;
  return 1;
}


// ===== 003e4a54  FUN_003e4a54 =====

void FUN_003e4a54(void)

{
  return;
}


// ===== 003e4a58  FUN_003e4a58 =====

void FUN_003e4a58(void)

{
  return;
}


// ===== 003e4a5c  rive::AnimationStateInstance::AnimationStateInstance =====

/* rive::AnimationStateInstance::AnimationStateInstance(rive::AnimationState const*,
   rive::ArtboardInstance*) */

void __thiscall
rive::AnimationStateInstance::AnimationStateInstance
          (AnimationStateInstance *this,AnimationState *param_1,ArtboardInstance *param_2)

{
  LinearAnimation *pLVar1;
  LinearAnimation *pLVar2;
  float fVar3;
  
  pLVar2 = *(LinearAnimation **)(param_1 + 0x68);
  fVar3 = *(float *)(param_1 + 0x60);
  *(undefined **)this = PTR_vtable_0067ccf8 + 0x10;
  *(AnimationState **)(this + 8) = param_1;
  pLVar1 = (LinearAnimation *)&DAT_00686ea8;
  if (pLVar2 != (LinearAnimation *)0x0) {
    pLVar1 = pLVar2;
  }
  LinearAnimationInstance::LinearAnimationInstance
            ((LinearAnimationInstance *)(this + 0x10),pLVar1,param_2,fVar3);
  this[0x90] = (AnimationStateInstance)0x1;
  return;
}


// ===== 003e4aac  FUN_003e4aac =====

void FUN_003e4aac(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067ccf8 + 0x10);
  rive::LinearAnimationInstance::~LinearAnimationInstance((LinearAnimationInstance *)(param_1 + 2));
  return;
}


// ===== 003e4ac0  FUN_003e4ac0 =====

void FUN_003e4ac0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067ccf8 + 0x10);
  rive::LinearAnimationInstance::~LinearAnimationInstance((LinearAnimationInstance *)(param_1 + 2));
  operator_delete(param_1);
  return;
}


// ===== 003e4af4  rive::AnimationStateInstance::advance =====

/* rive::AnimationStateInstance::advance(float, rive::StateMachineInstance*) */

void __thiscall
rive::AnimationStateInstance::advance
          (AnimationStateInstance *this,float param_1,StateMachineInstance *param_2)

{
  byte bVar1;
  
  bVar1 = LinearAnimationInstance::advance
                    ((LinearAnimationInstance *)(this + 0x10),
                     *(float *)(*(long *)(this + 8) + 0x60) * param_1,
                     (KeyedCallbackReporter *)param_2);
  this[0x90] = (AnimationStateInstance)(bVar1 & 1);
  return;
}


// ===== 003e4b2c  rive::AnimationStateInstance::apply =====

/* rive::AnimationStateInstance::apply(rive::ArtboardInstance*, float) */

void rive::AnimationStateInstance::apply(ArtboardInstance *param_1,float param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  Core *pCVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = *(long *)(param_1 + 0x48);
  fVar10 = *(float *)(param_1 + 0x50);
  if (*(char *)(lVar6 + 0x41) != '\0') {
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x28));
    fVar10 = (float)(int)(fVar10 * fVar9) / fVar9;
  }
  plVar8 = *(long **)(lVar6 + 0x48);
  plVar2 = *(long **)(lVar6 + 0x50);
  if (plVar8 != plVar2) {
    plVar7 = *(long **)(param_1 + 0x20);
    do {
      lVar6 = *plVar8;
      pCVar5 = (Core *)(**(code **)(*plVar7 + 0x348))(plVar7,*(undefined4 *)(lVar6 + 0xc));
      if (pCVar5 != (Core *)0x0) {
        puVar3 = *(undefined8 **)(lVar6 + 0x18);
        for (puVar1 = *(undefined8 **)(lVar6 + 0x10); puVar1 != puVar3; puVar1 = puVar1 + 1) {
          iVar4 = *(int *)((KeyedProperty *)*puVar1 + 0xc);
          if (iVar4 < 0x365) {
            if ((iVar4 != 0x18b) && (iVar4 != 0x191)) {
LAB_003e4bc4:
              KeyedProperty::apply
                        ((KeyedProperty *)*puVar1,pCVar5,fVar10,param_2,
                         (LinearAnimationInstance *)(param_1 + 0x10));
            }
          }
          else if ((iVar4 != 0x365) && (iVar4 != 0x3f8)) goto LAB_003e4bc4;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
  }
  return;
}


// ===== 003e4c38  rive::AnimationStateInstance::keepGoing =====

/* rive::AnimationStateInstance::keepGoing() const */

AnimationStateInstance __thiscall
rive::AnimationStateInstance::keepGoing(AnimationStateInstance *this)

{
  return this[0x90];
}


// ===== 003e4c40  rive::AnimationStateInstance::clearSpilledTime =====

/* rive::AnimationStateInstance::clearSpilledTime() */

void __thiscall rive::AnimationStateInstance::clearSpilledTime(AnimationStateInstance *this)

{
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


// ===== 003e4c48  rive::NestedTrigger::fire =====

/* rive::NestedTrigger::fire(rive::CallbackData const&) */

void rive::NestedTrigger::fire(CallbackData *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003e4c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x98))();
  return;
}


// ===== 003e4c54  rive::NestedTrigger::applyValue =====

/* rive::NestedTrigger::applyValue() */

void __thiscall rive::NestedTrigger::applyValue(NestedTrigger *this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((((plVar3 != (long *)0x0) &&
       (uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0x5f), (uVar1 & 1) != 0)) &&
      (plVar3 = (long *)plVar3[0x15], plVar3 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(this + 0x88)), lVar2 != 0 &&
      (*(char *)(lVar2 + 0x30) == '\0')))) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined1 *)(*(long *)(lVar2 + 8) + 0x128) = 1;
  }
  return;
}


// ===== 003e4cc4  FUN_003e4cc4 =====

void FUN_003e4cc4(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003e4d30  FUN_003e4d30 =====

undefined8 FUN_003e4d30(void)

{
  return 0x7a;
}


// ===== 003e4d38  FUN_003e4d38 =====

bool FUN_003e4d38(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x79 < 2 || (param_2 & 0xffff) == 10;
}


// ===== 003e4d58  FUN_003e4d58 =====

void FUN_003e4d58(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 == 4) {
    pcVar10 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e4eb8;
      }
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 < '\0');
    param_3[2] = (long)pcVar11;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_003e4eb8:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *(undefined8 *)(param_1 + 0x10) = local_40;
    *(undefined8 *)(param_1 + 0x20) = local_30;
  }
  else if (param_2 == 5) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e4e9c;
      }
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar8 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4e9c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0xed) {
      uVar5 = 0;
      goto LAB_003e4f00;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e4ef0;
      }
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar8 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e4ef0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_003e4f00:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 003e4f24  FUN_003e4f24 =====

undefined8 FUN_003e4f24(NestedInput *param_1,long *param_2)

{
  NestedInput *pNVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  NestedStateMachine *this;
  
  pNVar1 = (NestedInput *)0x0;
  if (param_2 != (long *)0x0) {
    pNVar1 = (NestedInput *)(param_2 + -0x133);
  }
  *(NestedInput **)(param_1 + 0x40) = pNVar1;
  *(NestedInput **)(param_1 + 0x80) = pNVar1;
  if (pNVar1 != param_1) {
    plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x28));
    lVar4 = *plVar2;
    *(long **)(param_1 + 0x30) = plVar2;
    (**(code **)(lVar4 + 0x90))(plVar2,param_1);
  }
  this = *(NestedStateMachine **)(param_1 + 0x30);
  if ((this != (NestedStateMachine *)0x0) &&
     (uVar3 = (**(code **)(*(long *)this + 0x18))(this,0x5f), (uVar3 & 1) != 0)) {
    rive::NestedStateMachine::addNestedInput(this,param_1);
  }
  return 0;
}


// ===== 003e4fb8  FUN_003e4fb8 =====

void FUN_003e4fb8(void)

{
  return;
}


// ===== 003e4fbc  rive::ScriptedListenerAction::~ScriptedListenerAction =====

/* rive::ScriptedListenerAction::~ScriptedListenerAction() */

void __thiscall rive::ScriptedListenerAction::~ScriptedListenerAction(ScriptedListenerAction *this)

{
  undefined *puVar1;
  undefined *puVar2;
  size_t __n;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  ScriptedObject *this_00;
  long *plVar6;
  long *__dest;
  
  puVar1 = PTR_vtable_0067ce70 + 0xc0;
  puVar2 = PTR_vtable_0067ce70 + 0x140;
  *(undefined **)this = PTR_vtable_0067ce70 + 0x10;
  this_00 = (ScriptedObject *)(this + 0x18);
  *(undefined **)this_00 = puVar1;
  *(undefined **)(this + 0x28) = puVar2;
  disposeScriptInputs(this);
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)this_00 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(this + 0x28) = puVar1;
  ScriptedObject::scriptDispose(this_00);
  pvVar4 = *(void **)(this + 0x70);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar4;
    operator_delete(pvVar4);
  }
  if (*(long *)(this + 0x68) != 0) {
    FUN_003462d8();
  }
  pvVar4 = *(void **)(this + 0x30);
  *(undefined **)(this + 0x28) = PTR_vtable_0067d068 + 0x10;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar4;
    operator_delete(pvVar4);
  }
  plVar6 = *(long **)(this + 0x20);
  *(undefined **)(this + 0x18) = PTR_vtable_0067d008 + 0x10;
  if (plVar6 != (long *)0x0) {
    __dest = (long *)plVar6[0xd];
    plVar5 = (long *)plVar6[0xe];
    if (__dest != plVar5) {
      do {
        while ((ScriptedObject *)*__dest == this_00) {
          __n = (long)plVar5 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          plVar5 = (long *)((long)__dest + __n);
          plVar6[0xe] = (long)plVar5;
          if (__dest == plVar5) goto LAB_003e50c0;
        }
        __dest = __dest + 1;
      } while (__dest != plVar5);
LAB_003e50c0:
      plVar6 = *(long **)(this + 0x20);
      if (plVar6 == (long *)0x0) {
        return;
      }
    }
    iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 9);
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x003e50f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  return;
}


// ===== 003e5110  rive::ScriptedListenerAction::disposeScriptInputs =====

/* rive::ScriptedListenerAction::disposeScriptInputs() */

void __thiscall rive::ScriptedListenerAction::disposeScriptInputs(ScriptedListenerAction *this)

{
  undefined8 *puVar1;
  ulong __n;
  ushort uVar2;
  void *__dest;
  long lVar3;
  undefined8 *__src;
  ulong uVar4;
  long *plVar5;
  
  __src = *(undefined8 **)(this + 0x30);
  puVar1 = *(undefined8 **)(this + 0x38);
  __n = (long)puVar1 - (long)__src;
  if (__n == 0) {
    *(undefined8 **)(this + 0x38) = __src;
    return;
  }
  if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003b5c68();
  }
  __dest = operator_new(__n);
  memcpy(__dest,__src,__n);
  do {
    plVar5 = (long *)*__src;
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (uVar2 < 0x26d) {
      lVar3 = 0x90;
      if (uVar2 != 0x263) {
        if (uVar2 == 0x264) {
          lVar3 = 0x88;
        }
        else {
          if (uVar2 != 0x26a) goto LAB_003e5160;
          lVar3 = 0x98;
        }
      }
LAB_003e5158:
      *(undefined8 *)((long)plVar5 + lVar3 + 8) = 0;
    }
    else {
      if (0x272 < uVar2) {
        lVar3 = 0x90;
        if (uVar2 != 0x277) {
          if (uVar2 != 0x273) goto LAB_003e5160;
          lVar3 = 0xa0;
        }
        goto LAB_003e5158;
      }
      if (uVar2 == 0x26d) {
        lVar3 = 0x90;
        goto LAB_003e5158;
      }
      lVar3 = 0x90;
      if (uVar2 == 0x272) goto LAB_003e5158;
    }
LAB_003e5160:
    __src = __src + 1;
  } while (__src != puVar1);
  uVar4 = 0;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x30);
  do {
    plVar5 = *(long **)((long)__dest + uVar4);
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (uVar2 < 0x26d) {
      lVar3 = 0x90;
      if (uVar2 != 0x263) {
        if (uVar2 == 0x264) {
          lVar3 = 0x88;
        }
        else {
          if (uVar2 != 0x26a) goto LAB_003e5218;
          lVar3 = 0x98;
        }
      }
LAB_003e5208:
      (**(code **)(*(long *)((long)plVar5 + lVar3) + 8))((long)plVar5 + lVar3);
    }
    else {
      if (0x272 < uVar2) {
        lVar3 = 0x90;
        if (uVar2 != 0x277) {
          if (uVar2 != 0x273) goto LAB_003e5218;
          lVar3 = 0xa0;
        }
        goto LAB_003e5208;
      }
      if (uVar2 == 0x26d) {
        lVar3 = 0x90;
        goto LAB_003e5208;
      }
      lVar3 = 0x90;
      if (uVar2 == 0x272) goto LAB_003e5208;
    }
LAB_003e5218:
    uVar4 = uVar4 + 8;
    if (__n == uVar4) {
      operator_delete(__dest);
      return;
    }
  } while( true );
}


// ===== 003e52e0  rive::ScriptedListenerAction::~ScriptedListenerAction =====

/* rive::ScriptedListenerAction::~ScriptedListenerAction() */

void __thiscall rive::ScriptedListenerAction::~ScriptedListenerAction(ScriptedListenerAction *this)

{
  ~ScriptedListenerAction(this);
  operator_delete(this);
  return;
}


// ===== 003e5304  FUN_003e5304 =====

undefined8 FUN_003e5304(void)

{
  return 0x286;
}


// ===== 003e530c  FUN_003e530c =====

bool FUN_003e530c(undefined8 param_1,short param_2)

{
  return param_2 == 0x286 || param_2 == 0x7d;
}


// ===== 003e5324  FUN_003e5324 =====

undefined8 FUN_003e5324(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3d4) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e5404;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e5404:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x3a2) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e53e8;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar5;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e53e8:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return 1;
}


// ===== 003e5418  rive::ScriptedListenerAction::clone =====

/* rive::ScriptedListenerAction::clone() const */

long * __thiscall rive::ScriptedListenerAction::clone(ScriptedListenerAction *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)operator_new(0x90);
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  puVar2 = PTR_vtable_0067ce70;
  plVar4[3] = 0;
  plVar4[2] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  uVar6 = *(undefined8 *)(this + 0xc);
  plVar5 = *(long **)(this + 0x20);
  *(undefined **)(plVar4 + 3) = puVar2 + 0xc0;
  *(undefined2 *)(plVar4 + 0x11) = 0;
  *(undefined4 *)(plVar4 + 10) = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[5] = (long)(puVar2 + 0x140);
  *(undefined8 *)((long)plVar4 + 0xc) = uVar6;
  if (plVar5 != (long *)0x0) {
    FUN_00340fb0(1,plVar5 + 9);
    local_40 = plVar5;
    ScriptedObject::setAsset((ScriptedObject *)(plVar4 + 3),&local_40);
    iVar3 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e5518  rive::ScriptedListenerAction::import =====

/* rive::ScriptedListenerAction::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptedListenerAction::import(ScriptedListenerAction *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar9 = NEON_cnt(uVar4,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
  if ((uVar10 & 0xffffffff) < 2) {
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x17;
  }
  else {
    uVar5 = 0x17;
    if (uVar4 < 0x18) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar2 = 0x17 / uVar1;
      }
      uVar5 = (ulong)(0x17 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if (plVar6 == (long *)0x0) {
    return 1;
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    return 1;
  }
  do {
    uVar7 = plVar6[1];
    if (uVar7 == 0x17) {
      if ((short)plVar6[2] == 0x17) {
        if ((BackboardImporter *)plVar6[3] == (BackboardImporter *)0x0) {
          return 1;
        }
        BackboardImporter::addFileAssetReferencer
                  ((BackboardImporter *)plVar6[3],(FileAssetReferencer *)(this + 0x18));
        uVar4 = *(ulong *)(param_1 + 8);
        if (uVar4 == 0) {
          return 1;
        }
        uVar9 = NEON_cnt(uVar4,1);
        uVar8 = NEON_uaddlv(uVar9,1);
        uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
        if ((uVar10 & 0xffffffff) < 2) {
          uVar5 = (ulong)((uint)uVar4 - 1) & 0x35;
        }
        else {
          uVar5 = 0x35;
          if (uVar4 < 0x36) {
            uVar1 = (uint)uVar4 & 0xff;
            uVar2 = 0;
            if ((uVar4 & 0xff) != 0) {
              uVar2 = 0x35 / uVar1;
            }
            uVar5 = (ulong)(0x35 - uVar2 * uVar1);
          }
        }
        plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
        if (plVar6 == (long *)0x0) {
          return 1;
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 1;
        }
        do {
          uVar7 = plVar6[1];
          if (uVar7 == 0x35) {
            if ((short)plVar6[2] == 0x35) {
              if (plVar6[3] == 0) {
                return 1;
              }
              StateMachine::addScriptedObject
                        (*(StateMachine **)(plVar6[3] + 8),(ScriptedObject *)(this + 0x18));
              uVar9 = ListenerAction::import((ListenerAction *)this,param_1);
              return uVar9;
            }
          }
          else {
            if ((uVar10 & 0xffffffff) < 2) {
              uVar7 = uVar7 & uVar4 - 1;
            }
            else if (uVar4 <= uVar7) {
              uVar3 = 0;
              if (uVar4 != 0) {
                uVar3 = uVar7 / uVar4;
              }
              uVar7 = uVar7 - uVar3 * uVar4;
            }
            if (uVar7 != uVar5) {
              return 1;
            }
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 1;
          }
        } while( true );
      }
    }
    else {
      if ((uVar10 & 0xffffffff) < 2) {
        uVar7 = uVar7 & uVar4 - 1;
      }
      else if (uVar4 <= uVar7) {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar7 / uVar4;
        }
        uVar7 = uVar7 - uVar3 * uVar4;
      }
      if (uVar7 != uVar5) {
        return 1;
      }
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return 1;
    }
  } while( true );
}


// ===== 003e56d8  rive::ScriptedListenerAction::perform =====

/* rive::ScriptedListenerAction::perform(rive::StateMachineInstance*, rive::ListenerInvocation
   const&) const */

void __thiscall
rive::ScriptedListenerAction::perform
          (ScriptedListenerAction *this,StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  ScriptedListenerAction *pSVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(ulong *)(param_1 + 0x228);
  if (uVar3 != 0) {
    pSVar1 = this + 0x18;
    uVar10 = NEON_cnt(uVar3,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = (((((ulong)pSVar1 & 0xffffffff) >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)pSVar1 >> 0x20) *
            -0x622015f714c7d297;
    uVar4 = ((ulong)pSVar1 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x220) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if ((ScriptedListenerAction *)plVar7[2] == pSVar1) {
            if (plVar7[3] == 0) {
              return;
            }
            performStateful((ScriptedListenerAction *)(plVar7[3] + -0x18),param_1,param_2);
            return;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar2 * uVar3;
          }
          if (uVar8 != uVar6) {
            return;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


// ===== 003e57d8  FUN_003e57d8 =====

void FUN_003e57d8(void)

{
  return;
}


// ===== 003e57dc  FUN_003e57dc =====

undefined4 FUN_003e57dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 003e57e4  FUN_003e57e4 =====

undefined8 FUN_003e57e4(void)

{
  return 0;
}


// ===== 003e57ec  FUN_003e57ec =====

undefined8 FUN_003e57ec(void)

{
  return 5;
}


// ===== 003e57f4  FUN_003e57f4 =====

undefined8 FUN_003e57f4(void)

{
  return 0;
}


// ===== 003e57fc  rive::ScriptedListenerAction::cloneScriptedObject =====

/* rive::ScriptedListenerAction::cloneScriptedObject(rive::DataBindContainer*) const */

ScriptedObject * __thiscall
rive::ScriptedListenerAction::cloneScriptedObject
          (ScriptedListenerAction *this,DataBindContainer *param_1)

{
  CustomPropertyContainer *pCVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  
  lVar2 = (**(code **)(*(long *)this + 0x28))();
  pCVar1 = (CustomPropertyContainer *)0x0;
  if (lVar2 != 0) {
    pCVar1 = (CustomPropertyContainer *)(lVar2 + 0x28);
  }
  ScriptedObject::cloneProperties((ScriptedObject *)(this + 0x18),pCVar1,param_1);
  pSVar3 = *(ScriptedObject **)(lVar2 + 0x20);
  if (pSVar3 != (ScriptedObject *)0x0) {
    if ((*(long *)(pSVar3 + 0xd8) != 0) && (*(long *)(*(long *)(pSVar3 + 0xd8) + 0x110) != 0)) {
      ScriptAsset::initScriptedObjectWith(pSVar3);
    }
    ScriptedObject::hydrateScriptInputs((ScriptedObject *)(lVar2 + 0x18));
  }
  pSVar3 = (ScriptedObject *)0x0;
  if (lVar2 != 0) {
    pSVar3 = (ScriptedObject *)(lVar2 + 0x18);
  }
  return pSVar3;
}


// ===== 003e5880  rive::ScriptedListenerAction::addProperty =====

/* rive::ScriptedListenerAction::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedListenerAction::addProperty(ScriptedListenerAction *this,CustomProperty *param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  lVar2 = 0x90;
  if (uVar1 < 0x26d) {
    if (uVar1 != 0x263) {
      if (uVar1 == 0x264) {
        lVar2 = 0x88;
      }
      else {
        if (uVar1 != 0x26a) goto LAB_003e5918;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_003e5918;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_003e5918;
    lVar2 = 0xa0;
  }
  *(ScriptedListenerAction **)(param_1 + lVar2 + 8) = this + 0x18;
LAB_003e5918:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)(this + 0x28),param_1);
  return;
}


// ===== 003e592c  rive::ScriptedListenerAction::~ScriptedListenerAction =====

/* non-virtual thunk to rive::ScriptedListenerAction::~ScriptedListenerAction() */

void __thiscall rive::ScriptedListenerAction::~ScriptedListenerAction(ScriptedListenerAction *this)

{
  ~ScriptedListenerAction(this + -0x18);
  return;
}


// ===== 003e5934  rive::ScriptedListenerAction::~ScriptedListenerAction =====

/* non-virtual thunk to rive::ScriptedListenerAction::~ScriptedListenerAction() */

void __thiscall rive::ScriptedListenerAction::~ScriptedListenerAction(ScriptedListenerAction *this)

{
  ~ScriptedListenerAction(this + -0x18);
  operator_delete(this + -0x18);
  return;
}


// ===== 003e595c  FUN_003e595c =====

undefined4 FUN_003e595c(long param_1)

{
  return *(undefined4 *)(param_1 + -8);
}


// ===== 003e5964  rive::ScriptedListenerAction::disposeScriptInputs =====

/* non-virtual thunk to rive::ScriptedListenerAction::disposeScriptInputs() */

void __thiscall rive::ScriptedListenerAction::disposeScriptInputs(ScriptedListenerAction *this)

{
  disposeScriptInputs(this + -0x18);
  return;
}


// ===== 003e596c  FUN_003e596c =====

void FUN_003e596c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x50);
  if (lVar1 != 0) {
    FUN_00340fb0(1,lVar1);
  }
  *param_1 = lVar1;
  return;
}


// ===== 003e59a0  FUN_003e59a0 =====

undefined8 FUN_003e59a0(void)

{
  return 0;
}


// ===== 003e59a8  FUN_003e59a8 =====

undefined8 FUN_003e59a8(void)

{
  return 5;
}


// ===== 003e59b0  FUN_003e59b0 =====

undefined8 FUN_003e59b0(void)

{
  return 0;
}


// ===== 003e59b8  rive::ScriptedListenerAction::cloneScriptedObject =====

/* non-virtual thunk to rive::ScriptedListenerAction::cloneScriptedObject(rive::DataBindContainer*)
   const */

ScriptedObject * __thiscall
rive::ScriptedListenerAction::cloneScriptedObject
          (ScriptedListenerAction *this,DataBindContainer *param_1)

{
  CustomPropertyContainer *pCVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  
  lVar2 = (**(code **)(*(long *)(this + -0x18) + 0x28))();
  pCVar1 = (CustomPropertyContainer *)0x0;
  if (lVar2 != 0) {
    pCVar1 = (CustomPropertyContainer *)(lVar2 + 0x28);
  }
  ScriptedObject::cloneProperties((ScriptedObject *)this,pCVar1,param_1);
  pSVar3 = *(ScriptedObject **)(lVar2 + 0x20);
  if (pSVar3 != (ScriptedObject *)0x0) {
    if ((*(long *)(pSVar3 + 0xd8) != 0) && (*(long *)(*(long *)(pSVar3 + 0xd8) + 0x110) != 0)) {
      ScriptAsset::initScriptedObjectWith(pSVar3);
    }
    ScriptedObject::hydrateScriptInputs((ScriptedObject *)(lVar2 + 0x18));
  }
  pSVar3 = (ScriptedObject *)0x0;
  if (lVar2 != 0) {
    pSVar3 = (ScriptedObject *)(lVar2 + 0x18);
  }
  return pSVar3;
}


// ===== 003e5a3c  FUN_003e5a3c =====

undefined8 FUN_003e5a3c(void)

{
  return 0;
}


// ===== 003e5a44  FUN_003e5a44 =====

void FUN_003e5a44(void)

{
  return;
}


// ===== 003e5a48  rive::ScriptedListenerAction::addProperty =====

/* non-virtual thunk to rive::ScriptedListenerAction::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedListenerAction::addProperty(ScriptedListenerAction *this,CustomProperty *param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  lVar2 = 0x90;
  if (uVar1 < 0x26d) {
    if (uVar1 != 0x263) {
      if (uVar1 == 0x264) {
        lVar2 = 0x88;
      }
      else {
        if (uVar1 != 0x26a) goto LAB_003e5ae0;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_003e5ae0;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_003e5ae0;
    lVar2 = 0xa0;
  }
  *(ScriptedListenerAction **)(param_1 + lVar2 + 8) = this + -0x10;
LAB_003e5ae0:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)this,param_1);
  return;
}


// ===== 003e5af4  rive::ScriptedListenerAction::performStateful =====

/* rive::ScriptedListenerAction::performStateful(rive::StateMachineInstance*,
   rive::ListenerInvocation const&) const */

void __thiscall
rive::ScriptedListenerAction::performStateful
          (ScriptedListenerAction *this,StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  lua_State *extraout_x1;
  ListenerInvocation *pLVar4;
  long lVar5;
  rive *this_00;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = this;
  auVar7._8_8_ = param_1;
  auVar7._0_8_ = this;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x60) == 0) ||
     (this_00 = *(rive **)(*(long *)(this + 0x60) + 8), auVar7 = auVar2, this_00 == (rive *)0x0))
  goto LAB_003e5d04;
  auVar7 = rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x4c),(int)param_2);
  if ((*(uint *)(this + 0x48) >> 0xe & 1) == 0) {
    if ((*(uint *)(this + 0x48) >> 0xd & 1) != 0) {
      if (((byte)this_00[1] >> 2 & 1) != 0) {
        this_00[1] = (rive)((byte)this_00[1] & 0xfb);
        *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
        *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
      }
      lVar5 = *(long *)(this_00 + 8);
      local_58 = FUN_0062b178(this_00,"perform",7);
      pLVar4 = (ListenerInvocation *)&local_58;
      local_4c = 6;
      FUN_00642c8c(this_00,lVar5 + -0x10,pLVar4,*(undefined8 *)(this_00 + 8));
      lVar5 = *(long *)(this_00 + 8);
      *(undefined8 **)(this_00 + 8) = (undefined8 *)(lVar5 + 0x10);
      if (((byte)this_00[1] >> 2 & 1) != 0) {
        this_00[1] = (rive)((byte)this_00[1] & 0xfb);
        *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
        *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
      }
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar5 + -8);
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + -0x10);
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
      rive_lua_push_pointer_arg_for_perform(this_00,(lua_State *)param_2,pLVar4);
      plVar6 = *(long **)(this_00 + 0x78);
      if (plVar6 != (long *)0x0) goto LAB_003e5cb4;
LAB_003e5bfc:
      lVar5 = 0;
      goto LAB_003e5cbc;
    }
  }
  else {
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    lVar5 = *(long *)(this_00 + 8);
    local_58 = FUN_0062b178(this_00,"performAction",0xd);
    pLVar4 = (ListenerInvocation *)&local_58;
    local_4c = 6;
    FUN_00642c8c(this_00,lVar5 + -0x10,pLVar4,*(undefined8 *)(this_00 + 8));
    lVar5 = *(long *)(this_00 + 8);
    *(undefined8 **)(this_00 + 8) = (undefined8 *)(lVar5 + 0x10);
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar5 + -8);
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + -0x10);
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x10;
    rive_lua_push_scripted_invocation(this_00,(lua_State *)param_2,pLVar4);
    plVar6 = *(long **)(this_00 + 0x78);
    if (plVar6 == (long *)0x0) goto LAB_003e5bfc;
LAB_003e5cb4:
    lVar5 = plVar6[7];
    plVar6[7] = (long)(this + 0x18);
LAB_003e5cbc:
    iVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,this_00,2,0);
    auVar7 = rive_lua_closeOrphanRenderPass(this_00,extraout_x1);
    plVar6[7] = lVar5;
    if (iVar3 != 0) {
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x10;
    }
  }
  *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + -0x10;
LAB_003e5d04:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar7._0_8_,auVar7._8_8_);
}


// ===== 003e5d30  rive::BlendAnimationDirect::~BlendAnimationDirect =====

/* rive::BlendAnimationDirect::~BlendAnimationDirect() */

void __thiscall rive::BlendAnimationDirect::~BlendAnimationDirect(BlendAnimationDirect *this)

{
  *(undefined **)this = PTR_vtable_0067cd10 + 0x10;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}


// ===== 003e5d74  rive::BlendAnimationDirect::~BlendAnimationDirect =====

/* rive::BlendAnimationDirect::~BlendAnimationDirect() */

void __thiscall rive::BlendAnimationDirect::~BlendAnimationDirect(BlendAnimationDirect *this)

{
  ~BlendAnimationDirect(this);
  operator_delete(this);
  return;
}


// ===== 003e5d98  FUN_003e5d98 =====

undefined8 FUN_003e5d98(void)

{
  return 0x4d;
}


// ===== 003e5da0  FUN_003e5da0 =====

bool FUN_003e5da0(undefined8 param_1,short param_2)

{
  return param_2 == 0x4d || param_2 == 0x4a;
}


// ===== 003e5db8  FUN_003e5db8 =====

undefined4 FUN_003e5db8(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  if (param_2 < 0x129) {
    if (param_2 == 0xa5) {
      uVar8 = 0;
      uVar3 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e5f38;
        }
        pbVar6 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar2 = uVar8 & 0x3f;
        uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar7 = pbVar6;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar6;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e5f38:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xc) = (int)uVar3;
    }
    else {
      if (param_2 != 0xa8) {
        return 0;
      }
      uVar8 = 0;
      uVar3 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e5f08;
        }
        pbVar6 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar2 = uVar8 & 0x3f;
        uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar7 = pbVar6;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar6;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e5f08:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x18) = (int)uVar3;
    }
  }
  else {
    if (param_2 == 0x129) {
      puVar5 = (undefined4 *)param_3[2];
      puVar4 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar4 - (long)puVar5 < 4) {
        uVar9 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar4 = puVar5 + 1;
        uVar9 = *puVar5;
      }
      param_3[2] = (long)puVar4;
      *(undefined4 *)(param_1 + 0x1c) = uVar9;
      return 1;
    }
    if (param_2 != 0x12a) {
      return 0;
    }
    uVar8 = 0;
    uVar3 = 0;
    pbVar7 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e5f20;
      }
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar7 = pbVar6;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar6;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e5f20:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x20) = (int)uVar3;
  }
  return 1;
}


// ===== 003e5f6c  rive::BlendAnimationDirect::onAddedDirty =====

/* rive::BlendAnimationDirect::onAddedDirty(rive::CoreContext*) */

undefined8 rive::BlendAnimationDirect::onAddedDirty(CoreContext *param_1)

{
  return 0;
}


// ===== 003e5f74  rive::BlendAnimationDirect::onAddedClean =====

/* rive::BlendAnimationDirect::onAddedClean(rive::CoreContext*) */

undefined8 rive::BlendAnimationDirect::onAddedClean(CoreContext *param_1)

{
  return 0;
}


// ===== 003e5f7c  rive::BlendAnimationDirect::import =====

/* rive::BlendAnimationDirect::import(rive::ImportStack&) */

undefined8 __thiscall
rive::BlendAnimationDirect::import(BlendAnimationDirect *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    uVar12 = NEON_cnt(uVar6,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar5 = (uint)uVar6;
    if (uVar7 < 2) {
      uVar9 = (ulong)(uVar5 - 1) & 0x35;
    }
    else {
      uVar9 = 0x35;
      if (uVar6 < 0x36) {
        uVar1 = 0;
        if ((uVar6 & 0xff) != 0) {
          uVar1 = 0x35 / (uVar5 & 0xff);
        }
        uVar9 = (ulong)(0x35 - uVar1 * (uVar5 & 0xff));
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar10 = plVar8[1];
        if (uVar10 == 0x35) {
          if ((short)plVar8[2] == 0x35) {
            if (plVar8[3] == 0) {
              return 1;
            }
            if (*(int *)(this + 0x20) == 2) {
              if (uVar7 < 2) {
                uVar9 = (ulong)(uVar5 - 1) & 9;
              }
              else {
                uVar9 = 9;
                if (uVar6 < 10) {
                  uVar1 = 0;
                  if ((uVar6 & 0xff) != 0) {
                    uVar1 = 9 / (uVar5 & 0xff);
                  }
                  uVar9 = (ulong)(9 - uVar1 * (uVar5 & 0xff));
                }
              }
              plVar8 = *(long **)(*(long *)param_1 + uVar9 * 8);
              if (plVar8 == (long *)0x0) {
                return 1;
              }
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) {
                return 1;
              }
              do {
                uVar10 = plVar8[1];
                if (uVar10 == 9) {
                  if ((short)plVar8[2] == 9) {
                    lVar4 = plVar8[3];
                    if (lVar4 == 0) {
                      return 1;
                    }
                    uVar12 = *(undefined8 *)(lVar4 + 8);
                    *(undefined8 *)(lVar4 + 8) = 0;
                    *(undefined8 *)(this + 0x28) = uVar12;
LAB_003e614c:
                    uVar12 = BlendAnimation::import((BlendAnimation *)this,param_1);
                    return uVar12;
                  }
                }
                else {
                  if (uVar7 < 2) {
                    uVar10 = uVar10 & uVar6 - 1;
                  }
                  else if (uVar6 <= uVar10) {
                    uVar2 = 0;
                    if (uVar6 != 0) {
                      uVar2 = uVar10 / uVar6;
                    }
                    uVar10 = uVar10 - uVar2 * uVar6;
                  }
                  if (uVar10 != uVar9) {
                    return 1;
                  }
                }
                plVar8 = (long *)*plVar8;
                if (plVar8 == (long *)0x0) {
                  return 1;
                }
              } while( true );
            }
            if (*(int *)(this + 0x20) == 0) {
              lVar3 = *(long *)(plVar8[3] + 8);
              lVar4 = *(long *)(lVar3 + 0x40);
              if ((((ulong)(*(long *)(lVar3 + 0x48) - lVar4 >> 3) <= (ulong)*(uint *)(this + 0x18))
                  || (plVar8 = *(long **)(lVar4 + (ulong)*(uint *)(this + 0x18) * 8),
                     plVar8 == (long *)0x0)) ||
                 (uVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,0x38), (uVar6 & 1) == 0)) {
                return 2;
              }
            }
            goto LAB_003e614c;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar2 * uVar6;
          }
          if (uVar10 != uVar9) {
            return 1;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 003e616c  FUN_003e616c =====

void FUN_003e616c(void)

{
  return;
}


// ===== 003e6170  FUN_003e6170 =====

void FUN_003e6170(void)

{
  return;
}


// ===== 003e6174  FUN_003e6174 =====

void FUN_003e6174(void)

{
  return;
}


// ===== 003e6178  rive::TransitionTriggerCondition::validateInputType =====

/* rive::TransitionTriggerCondition::validateInputType(rive::StateMachineInput const*) const */

undefined8 __thiscall
rive::TransitionTriggerCondition::validateInputType
          (TransitionTriggerCondition *this,StateMachineInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (StateMachineInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3a);
    return uVar1;
  }
  return 1;
}


// ===== 003e6198  rive::TransitionTriggerCondition::evaluate =====

/* rive::TransitionTriggerCondition::evaluate(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

undefined8 __thiscall
rive::TransitionTriggerCondition::evaluate
          (TransitionTriggerCondition *this,StateMachineInstance *param_1,
          StateMachineLayerInstance *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1,*(undefined4 *)(this + 0xc));
  if (lVar3 == 0) {
LAB_003e6204:
    uVar4 = 1;
  }
  else {
    if (*(char *)(lVar3 + 0x30) != '\0') {
      puVar2 = *(undefined8 **)(lVar3 + 0x20);
      puVar1 = *(undefined8 **)(lVar3 + 0x18);
      puVar5 = puVar1;
      for (; (puVar1 != puVar2 && (puVar5 = puVar1, (StateMachineLayerInstance *)*puVar1 != param_2)
             ); puVar1 = puVar1 + 1) {
        puVar5 = puVar2;
      }
      if (puVar5 == puVar2) goto LAB_003e6204;
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 003e6214  rive::TransitionTriggerCondition::useInLayer =====

/* rive::TransitionTriggerCondition::useInLayer(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

void __thiscall
rive::TransitionTriggerCondition::useInLayer
          (TransitionTriggerCondition *this,StateMachineInstance *param_1,
          StateMachineLayerInstance *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x70))(param_1,*(undefined4 *)(this + 0xc));
  if (lVar1 != 0) {
    FUN_003e6260(lVar1 + 0x18,param_2);
    return;
  }
  return;
}


// ===== 003e6260  FUN_003e6260 =====

void FUN_003e6260(ulong *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  plVar12 = (long *)param_1[1];
  plVar11 = (long *)*param_1;
  plVar4 = plVar11;
  for (plVar7 = plVar11; (plVar7 != plVar12 && (plVar4 = plVar7, *plVar7 != param_2));
      plVar7 = plVar7 + 1) {
    plVar4 = plVar12;
  }
  if (plVar4 != plVar12) {
    return;
  }
  if (plVar12 < (long *)param_1[2]) {
    plVar4 = plVar12 + 1;
    *plVar12 = param_2;
    goto LAB_003e63d8;
  }
  lVar13 = (long)plVar12 - (long)plVar11;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_003e63fc();
LAB_003e63f8:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)param_1[2] - (long)plVar11;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_003e63f8;
    pvVar3 = operator_new(uVar6 << 3);
  }
  plVar7 = (long *)((long)pvVar3 + (lVar13 >> 3) * 8);
  plVar4 = plVar7 + 1;
  *plVar7 = param_2;
  if (plVar11 != plVar12) {
    if ((0x37 < lVar13 - 8U) && (0x1f < (ulong)((long)plVar12 + (-lVar13 - (long)pvVar3)))) {
      plVar10 = plVar12 + -2;
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar8 = uVar1 & 0x3ffffffffffffffc;
      plVar12 = plVar12 + -uVar8;
      plVar9 = plVar7 + -2;
      uVar5 = uVar8;
      do {
        plVar2 = plVar10 + -1;
        lVar15 = plVar10[-2];
        lVar14 = plVar10[1];
        lVar13 = *plVar10;
        uVar5 = uVar5 - 4;
        plVar10 = plVar10 + -4;
        plVar9[-1] = *plVar2;
        plVar9[-2] = lVar15;
        plVar9[1] = lVar14;
        *plVar9 = lVar13;
        plVar9 = plVar9 + -4;
      } while (uVar5 != 0);
      plVar7 = plVar7 + -uVar8;
      if (uVar1 == uVar8) goto LAB_003e63bc;
    }
    do {
      plVar12 = plVar12 + -1;
      plVar7 = plVar7 + -1;
      *plVar7 = *plVar12;
    } while (plVar12 != plVar11);
    plVar11 = (long *)*param_1;
  }
LAB_003e63bc:
  *param_1 = (ulong)plVar7;
  param_1[1] = (ulong)plVar4;
  param_1[2] = (ulong)((long)pvVar3 + uVar6 * 8);
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
LAB_003e63d8:
  param_1[1] = (ulong)plVar4;
  return;
}


// ===== 003e63fc  FUN_003e63fc =====

void FUN_003e63fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003e6410  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e6414  FUN_003e6414 =====

undefined8 FUN_003e6414(void)

{
  return 0x44;
}


// ===== 003e641c  FUN_003e641c =====

bool FUN_003e641c(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x43 < 2 || (param_2 & 0xffff) == 0x1dc;
}


// ===== 003e643c  FUN_003e643c =====

bool FUN_003e643c(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x9b) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e64a0;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e64a0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x9b;
}


// ===== 003e64b8  FUN_003e64b8 =====

void FUN_003e64b8(void)

{
  return;
}


// ===== 003e64bc  rive::TransitionInputCondition::import =====

/* rive::TransitionInputCondition::import(rive::ImportStack&) */

undefined8 __thiscall
rive::TransitionInputCondition::import(TransitionInputCondition *this,ImportStack *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = (ulong)((uint)uVar5 - 1) & 0x35;
    }
    else {
      uVar8 = 0x35;
      if (uVar5 < 0x36) {
        uVar1 = (uint)uVar5 & 0xff;
        uVar3 = 0;
        if ((uVar5 & 0xff) != 0) {
          uVar3 = 0x35 / uVar1;
        }
        uVar8 = (ulong)(0x35 - uVar3 * uVar1);
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x35) {
          if ((short)plVar9[2] == 0x35) {
            if (plVar9[3] == 0) {
              return 1;
            }
            lVar6 = *(long *)(plVar9[3] + 8);
            lVar2 = *(long *)(lVar6 + 0x40);
            if (((ulong)*(uint *)(this + 0xc) < (ulong)(*(long *)(lVar6 + 0x48) - lVar2 >> 3)) &&
               (uVar5 = (**(code **)(*(long *)this + 0x60))
                                  (this,*(undefined8 *)(lVar2 + (ulong)*(uint *)(this + 0xc) * 8)),
               (uVar5 & 1) != 0)) {
              uVar12 = TransitionCondition::import((TransitionCondition *)this,param_1);
              return uVar12;
            }
            return 2;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar4 = 0;
            if (uVar5 != 0) {
              uVar4 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar4 * uVar5;
          }
          if (uVar10 != uVar8) {
            return 1;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 003e65e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e65e4  FUN_003e65e4 =====

undefined8 FUN_003e65e4(void)

{
  return 0x43;
}


// ===== 003e65ec  FUN_003e65ec =====

bool FUN_003e65ec(undefined8 param_1,short param_2)

{
  return param_2 == 0x43 || param_2 == 0x1dc;
}


// ===== 003e6604  rive::TransitionPropertyViewModelComparator::~TransitionPropertyViewModelComparator =====

/* rive::TransitionPropertyViewModelComparator::~TransitionPropertyViewModelComparator() */

void __thiscall
rive::TransitionPropertyViewModelComparator::~TransitionPropertyViewModelComparator
          (TransitionPropertyViewModelComparator *this)

{
  *(undefined **)this = PTR_vtable_0067cf48 + 0x10;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}


// ===== 003e6648  rive::TransitionPropertyViewModelComparator::~TransitionPropertyViewModelComparator =====

/* rive::TransitionPropertyViewModelComparator::~TransitionPropertyViewModelComparator() */

void __thiscall
rive::TransitionPropertyViewModelComparator::~TransitionPropertyViewModelComparator
          (TransitionPropertyViewModelComparator *this)

{
  ~TransitionPropertyViewModelComparator(this);
  operator_delete(this);
  return;
}


// ===== 003e666c  FUN_003e666c =====

undefined8 FUN_003e666c(void)

{
  return 0x1df;
}


// ===== 003e6674  FUN_003e6674 =====

bool FUN_003e6674(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x1dd < 3;
}


// ===== 003e6688  rive::TransitionPropertyViewModelComparator::import =====

/* rive::TransitionPropertyViewModelComparator::import(rive::ImportStack&) */

undefined8 __thiscall
rive::TransitionPropertyViewModelComparator::import
          (TransitionPropertyViewModelComparator *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    uVar12 = NEON_cnt(uVar6,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar5 = (uint)uVar6;
    if (uVar8 < 2) {
      uVar3 = (ulong)(uVar5 - 1) & 9;
    }
    else {
      uVar3 = 9;
      if (uVar6 < 10) {
        uVar1 = 0;
        if ((uVar6 & 0xff) != 0) {
          uVar1 = 9 / (uVar5 & 0xff);
        }
        uVar3 = (ulong)(9 - uVar1 * (uVar5 & 0xff));
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar3 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 9) {
          if ((short)plVar9[2] == 9) {
            lVar4 = plVar9[3];
            if (lVar4 == 0) {
              return 1;
            }
            uVar12 = *(undefined8 *)(lVar4 + 8);
            *(undefined8 *)(lVar4 + 8) = 0;
            *(undefined8 *)(this + 0x10) = uVar12;
            if (uVar8 < 2) {
              uVar3 = (ulong)(uVar5 - 1) & 0x1e2;
            }
            else {
              uVar3 = 0x1e2;
              if (uVar6 < 0x1e3) {
                uVar1 = 0;
                if ((uVar6 & 0xffff) != 0) {
                  uVar1 = 0x1e2 / (uVar5 & 0xffff);
                }
                uVar3 = (ulong)(0x1e2 - uVar1 * (uVar5 & 0xffff));
              }
            }
            plVar9 = *(long **)(*(long *)param_1 + uVar3 * 8);
            if (plVar9 == (long *)0x0) {
              return 1;
            }
            plVar9 = (long *)*plVar9;
            do {
              if (plVar9 == (long *)0x0) {
                return 1;
              }
              uVar10 = plVar9[1];
              if (uVar10 == 0x1e2) {
                if (*(short *)(plVar9 + 2) == 0x1e2) {
                  if (plVar9[3] == 0) {
                    return 1;
                  }
                  lVar7 = *(long *)(plVar9[3] + 8);
                  lVar4 = 0x10;
                  if (*(long *)(lVar7 + 0x10) != 0) {
                    lVar4 = 0x18;
                  }
                  *(TransitionPropertyViewModelComparator **)(lVar7 + lVar4) = this;
                  return 0;
                }
              }
              else {
                if (uVar8 < 2) {
                  uVar10 = uVar10 & uVar6 - 1;
                }
                else if (uVar6 <= uVar10) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar10 / uVar6;
                  }
                  uVar10 = uVar10 - uVar2 * uVar6;
                }
                if (uVar10 != uVar3) {
                  return 1;
                }
              }
              plVar9 = (long *)*plVar9;
            } while( true );
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar2 * uVar6;
          }
          if (uVar10 != uVar3) {
            return 1;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 003e6820  rive::TransitionPropertyViewModelComparator::useInLayer =====

/* rive::TransitionPropertyViewModelComparator::useInLayer(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

void __thiscall
rive::TransitionPropertyViewModelComparator::useInLayer
          (TransitionPropertyViewModelComparator *this,StateMachineInstance *param_1,
          StateMachineLayerInstance *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar2 = *(ulong *)(param_1 + 0x200);
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(this + 0x10);
    uVar10 = NEON_cnt(uVar2,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (uVar3 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if (uVar4 < 2) {
      uVar6 = uVar2 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar2 <= uVar5) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar5 / uVar2;
        }
        uVar6 = uVar5 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x1f8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar5 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            uVar2 = plVar7[3];
            if (uVar2 == 0) {
              return;
            }
            uVar3 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
            uVar5 = *(ulong *)(param_1 + 0x250);
            uVar10 = NEON_cnt(uVar5,1);
            uVar3 = (uVar2 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
            uVar9 = NEON_uaddlv(uVar10,1);
            uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
            if ((uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) < 2) {
              uVar4 = uVar5 - 1 & uVar3;
            }
            else {
              uVar4 = uVar3;
              if (uVar5 <= uVar3) {
                uVar4 = 0;
                if (uVar5 != 0) {
                  uVar4 = uVar3 / uVar5;
                }
                uVar4 = uVar3 - uVar4 * uVar5;
              }
            }
            plVar7 = *(long **)(*(long *)(param_1 + 0x248) + uVar4 * 8);
            do {
              do {
                plVar7 = (long *)*plVar7;
              } while (uVar3 - plVar7[1] != 0);
            } while (plVar7[2] != uVar2);
            if (*(long *)(plVar7[3] + 0x38) == 0) {
              return;
            }
            FUN_003e6260(*(long *)(plVar7[3] + 0x38) + 0x90,param_2);
            return;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar2 - 1;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


// ===== 003e69b0  rive::KeyFrameId::apply =====

/* rive::KeyFrameId::apply(rive::Core*, int, float) */

void rive::KeyFrameId::apply(Core *param_1,int param_2,float param_3)

{
  undefined4 in_w2;
  
  FUN_00376dfc(param_2,in_w2,*(undefined4 *)(param_1 + 0x28));
  return;
}


// ===== 003e69c4  rive::KeyFrameId::applyInterpolation =====

/* rive::KeyFrameId::applyInterpolation(rive::Core*, int, float, rive::KeyFrame const*, float,
   rive::LinearAnimationInstance const*) */

void rive::KeyFrameId::applyInterpolation
               (Core *param_1,int param_2,float param_3,KeyFrame *param_4,float param_5,
               LinearAnimationInstance *param_6)

{
  FUN_00376dfc(param_2,(ulong)param_4 & 0xffffffff,*(undefined4 *)(param_1 + 0x28));
  return;
}


// ===== 003e69d8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e69dc  FUN_003e69dc =====

undefined8 FUN_003e69dc(void)

{
  return 0x32;
}


// ===== 003e69e4  FUN_003e69e4 =====

undefined8 FUN_003e69e4(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 0x1d) && (param_2 != 0x32)) && (param_2 != 0xaa)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003e6a0c  FUN_003e6a0c =====

undefined4 FUN_003e6a0c(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 < 0x45) {
    if (param_2 == 0x43) {
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e6bb4;
        }
        pbVar4 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar2 = uVar6 & 0x3f;
        uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar5 = pbVar4;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar4;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e6bb4:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xc) = (int)uVar3;
    }
    else {
      if (param_2 != 0x44) {
        return 0;
      }
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e6b84;
        }
        pbVar4 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar2 = uVar6 & 0x3f;
        uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar5 = pbVar4;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar4;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e6b84:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x14) = (int)uVar3;
    }
  }
  else if (param_2 == 0x45) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e6bcc;
      }
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar5 = pbVar4;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar4;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e6bcc:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x18) = (int)uVar3;
  }
  else {
    if (param_2 != 0x7a) {
      return 0;
    }
    uVar6 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e6b9c;
      }
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar5 = pbVar4;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar4;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e6b9c:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar3;
  }
  return 1;
}


// ===== 003e6be4  FUN_003e6be4 =====

void FUN_003e6be4(void)

{
  return;
}


// ===== 003e6be8  rive::KeyFrameBool::apply =====

/* rive::KeyFrameBool::apply(rive::Core*, int, float) */

void rive::KeyFrameBool::apply(Core *param_1,int param_2,float param_3)

{
  undefined4 in_w2;
  
  FUN_00379548(param_2,in_w2,param_1[0x28]);
  return;
}


// ===== 003e6bfc  rive::KeyFrameBool::applyInterpolation =====

/* rive::KeyFrameBool::applyInterpolation(rive::Core*, int, float, rive::KeyFrame const*, float,
   rive::LinearAnimationInstance const*) */

void rive::KeyFrameBool::applyInterpolation
               (Core *param_1,int param_2,float param_3,KeyFrame *param_4,float param_5,
               LinearAnimationInstance *param_6)

{
  FUN_00379548(param_2,(ulong)param_4 & 0xffffffff,param_1[0x28]);
  return;
}


// ===== 003e6c10  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e6c14  FUN_003e6c14 =====

undefined8 FUN_003e6c14(void)

{
  return 0x54;
}


// ===== 003e6c1c  FUN_003e6c1c =====

undefined8 FUN_003e6c1c(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 0x1d) && (param_2 != 0x54)) && (param_2 != 0xaa)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003e6c44  FUN_003e6c44 =====

undefined4 FUN_003e6c44(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (param_2 < 0x45) {
    if (param_2 == 0x43) {
      uVar7 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e6db8;
        }
        pbVar6 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar2 = uVar7 & 0x3f;
        uVar7 = (ulong)(((uint)uVar7 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar5 = pbVar6;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar6;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e6db8:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xc) = (int)uVar3;
    }
    else {
      if (param_2 != 0x44) {
        return 0;
      }
      uVar7 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e6da0;
        }
        pbVar6 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar2 = uVar7 & 0x3f;
        uVar7 = (ulong)(((uint)uVar7 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar5 = pbVar6;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar6;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e6da0:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x14) = (int)uVar3;
    }
  }
  else if (param_2 == 0x45) {
    uVar7 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e6dd0;
      }
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar7 & 0x3f;
      uVar7 = (ulong)(((uint)uVar7 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar5 = pbVar6;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar6;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e6dd0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x18) = (int)uVar3;
  }
  else {
    if (param_2 != 0xb5) {
      return 0;
    }
    pcVar4 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar4 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    else {
      param_3[2] = (long)(pcVar4 + 1);
      *(bool *)(param_1 + 0x28) = *pcVar4 == '\x01';
    }
  }
  return 1;
}


// ===== 003e6e00  FUN_003e6e00 =====

void FUN_003e6e00(void)

{
  return;
}


// ===== 003e6e04  rive::ListenerBoolChange::validateInputType =====

/* rive::ListenerBoolChange::validateInputType(rive::StateMachineInput const*) const */

undefined8 __thiscall
rive::ListenerBoolChange::validateInputType(ListenerBoolChange *this,StateMachineInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (StateMachineInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e6e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3b);
    return uVar1;
  }
  return 1;
}


// ===== 003e6e24  rive::ListenerBoolChange::validateNestedInputType =====

/* rive::ListenerBoolChange::validateNestedInputType(rive::NestedInput const*) const */

undefined8 __thiscall
rive::ListenerBoolChange::validateNestedInputType(ListenerBoolChange *this,NestedInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (NestedInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e6e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x7b);
    return uVar1;
  }
  return 1;
}


// ===== 003e6e44  rive::ListenerBoolChange::perform =====

/* rive::ListenerBoolChange::perform(rive::StateMachineInstance*, rive::ListenerInvocation const&)
   const */

void rive::ListenerBoolChange::perform(StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 8)) {
    lVar3 = (**(code **)(*(long *)param_2 + 0x70))(param_2,*(undefined4 *)(param_1 + 0x10));
    if (lVar3 != 0) {
      bVar1 = *(byte *)(lVar3 + 0x18);
      if (*(int *)(param_1 + 0x18) == 1) {
        if (bVar1 != 0) {
          return;
        }
        lVar5 = *(long *)(lVar3 + 8);
        *(undefined1 *)(lVar3 + 0x18) = 1;
      }
      else {
        if (*(int *)(param_1 + 0x18) == 0) {
          if (bVar1 == 0) {
            return;
          }
          *(undefined1 *)(lVar3 + 0x18) = 0;
          *(undefined1 *)(*(long *)(lVar3 + 8) + 0x128) = 1;
          return;
        }
        lVar5 = *(long *)(lVar3 + 8);
        *(byte *)(lVar3 + 0x18) = bVar1 ^ 1;
      }
      *(undefined1 *)(lVar5 + 0x128) = 1;
    }
  }
  else {
    plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x10) + 0x348))
                               (*(long **)(param_2 + 0x10),*(int *)(param_1 + 0x14));
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      if (*(int *)(param_1 + 0x18) == 1) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xa8);
        uVar2 = 1;
      }
      else if (*(int *)(param_1 + 0x18) == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xa8);
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(lVar3 + 0xa0))();
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0xa8);
        uVar2 = (uVar2 ^ 0xffffffff) & 1;
      }
                    /* WARNING: Could not recover jumptable at 0x003e6f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar4,uVar2);
      return;
    }
  }
  return;
}


// ===== 003e6f50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e6f54  FUN_003e6f54 =====

undefined8 FUN_003e6f54(void)

{
  return 0x75;
}


// ===== 003e6f5c  FUN_003e6f5c =====

uint FUN_003e6f5c(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x74U & 0xffff) < 10) & 0x203U >> (ulong)(param_2 - 0x74U & 0x1f);
}


// ===== 003e6f7c  FUN_003e6f7c =====

undefined4 FUN_003e6f7c(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 < 400) {
    if (param_2 == 0xe3) {
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e7124;
        }
        pbVar4 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar2 = uVar6 & 0x3f;
        uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar5 = pbVar4;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar4;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e7124:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x10) = (int)uVar3;
    }
    else {
      if (param_2 != 0xe4) {
        return 0;
      }
      uVar6 = 0;
      uVar3 = 0;
      pbVar5 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003e70f4;
        }
        pbVar4 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar2 = uVar6 & 0x3f;
        uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar5 = pbVar4;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar4;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e70f4:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x18) = (int)uVar3;
    }
  }
  else if (param_2 == 400) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e713c;
      }
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar5 = pbVar4;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar4;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e713c:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  else {
    if (param_2 != 0x3d4) {
      return 0;
    }
    uVar6 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e710c;
      }
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar5 = pbVar4;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar4;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e710c:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return 1;
}


// ===== 003e7154  FUN_003e7154 =====

void FUN_003e7154(void)

{
  return;
}


// ===== 003e7158  FUN_003e7158 =====

void FUN_003e7158(void)

{
  return;
}


// ===== 003e715c  FUN_003e715c =====

void FUN_003e715c(void)

{
  return;
}


// ===== 003e7160  rive::ListenerInputChange::import =====

/* rive::ListenerInputChange::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ListenerInputChange::import(ListenerInputChange *this,ImportStack *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 != 0) {
    uVar13 = NEON_cnt(uVar7,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar6 = (uint)uVar7;
    if (uVar8 < 2) {
      uVar4 = (ulong)(uVar6 - 1) & 0x35;
    }
    else {
      uVar4 = 0x35;
      if (uVar7 < 0x36) {
        uVar1 = 0;
        if ((uVar7 & 0xff) != 0) {
          uVar1 = 0x35 / (uVar6 & 0xff);
        }
        uVar4 = (ulong)(0x35 - uVar1 * (uVar6 & 0xff));
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + uVar4 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == 0x35) {
          if ((short)plVar9[2] == 0x35) {
            lVar11 = plVar9[3];
            if (lVar11 == 0) {
              return 1;
            }
            uVar4 = (ulong)~uVar6 & 1;
            if (1 < uVar8) {
              uVar4 = (ulong)(uVar7 != 1);
            }
            plVar9 = *(long **)(*(long *)param_1 + uVar4 * 8);
            if (plVar9 == (long *)0x0) {
              return 1;
            }
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) {
              return 1;
            }
            do {
              uVar10 = plVar9[1];
              if (uVar10 == 1) {
                if ((short)plVar9[2] == 1) {
                  if (plVar9[3] == 0) {
                    return 1;
                  }
                  plVar9 = *(long **)(plVar9[3] + 8);
                  lVar3 = (**(code **)(*plVar9 + 0x348))(plVar9,*(undefined4 *)(this + 0x14));
                  if (lVar3 == 0) {
                    lVar3 = *(long *)(lVar11 + 8);
                    lVar11 = *(long *)(lVar3 + 0x40);
                    if ((ulong)*(uint *)(this + 0x10) <
                        (ulong)(*(long *)(lVar3 + 0x48) - lVar11 >> 3)) {
                      lVar3 = *(long *)(lVar11 + (ulong)*(uint *)(this + 0x10) * 8);
                    }
                    else {
                      lVar3 = 0;
                    }
                    pcVar5 = *(code **)(*(long *)this + 0x70);
                  }
                  else {
                    pcVar5 = *(code **)(*(long *)this + 0x78);
                  }
                  uVar7 = (*pcVar5)(this,lVar3);
                  if ((uVar7 & 1) != 0) {
                    uVar13 = ListenerAction::import((ListenerAction *)this,param_1);
                    return uVar13;
                  }
                  return 2;
                }
              }
              else {
                if (uVar8 < 2) {
                  uVar10 = uVar10 & uVar7 - 1;
                }
                else if (uVar7 <= uVar10) {
                  uVar2 = 0;
                  if (uVar7 != 0) {
                    uVar2 = uVar10 / uVar7;
                  }
                  uVar10 = uVar10 - uVar2 * uVar7;
                }
                if (uVar10 != uVar4) {
                  return 1;
                }
              }
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) {
                return 1;
              }
            } while( true );
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar7 - 1;
          }
          else if (uVar7 <= uVar10) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar10 / uVar7;
            }
            uVar10 = uVar10 - uVar2 * uVar7;
          }
          if (uVar10 != uVar4) {
            return 1;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 003e7354  FUN_003e7354 =====

void FUN_003e7354(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3e7358);
  (*pcVar1)();
}


// ===== 003e7358  FUN_003e7358 =====

undefined8 FUN_003e7358(void)

{
  return 0x74;
}


// ===== 003e7360  FUN_003e7360 =====

bool FUN_003e7360(undefined8 param_1,short param_2)

{
  return param_2 == 0x74 || param_2 == 0x7d;
}


// ===== 003e7378  FUN_003e7378 =====

undefined8 FUN_003e7378(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3d4) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e74b0;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e74b0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 == 400) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e7494;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e7494:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x14) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0xe3) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e74cc;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar5;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e74cc:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return 1;
}


// ===== 003e74e0  FUN_003e74e0 =====

undefined8 FUN_003e74e0(void)

{
  return 1;
}


// ===== 003e74e8  FUN_003e74e8 =====

undefined8 FUN_003e74e8(void)

{
  return 1;
}


// ===== 003e74f0  rive::ListenerAlignTarget::perform =====

/* rive::ListenerAlignTarget::perform(rive::StateMachineInstance*, rive::ListenerInvocation const&)
   const */

void __thiscall
rive::ListenerAlignTarget::perform
          (ListenerAlignTarget *this,StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  float *pfVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar14 = 0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  if (*(int *)(param_2 + 0x20) == 0) {
    fVar16 = *(float *)param_2;
    fVar17 = *(float *)(param_2 + 4);
    uVar14 = *(undefined4 *)(param_2 + 8);
    fVar15 = *(float *)(param_2 + 0xc);
  }
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x348))
                             (*(long **)(param_1 + 0x10),*(undefined4 *)(this + 0x10));
  if ((plVar2 != (long *)0x0) && (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,2), (uVar3 & 1) != 0)
     ) {
    plVar4 = (long *)plVar2[6];
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,0x5b);
    pfVar1 = (float *)((long)plVar4 + 0xa4);
    if ((uVar3 & 1) == 0) {
      pfVar1 = (float *)0x686140;
    }
    fVar8 = *pfVar1;
    fVar7 = pfVar1[3];
    fVar5 = (float)*(undefined8 *)(pfVar1 + 1);
    fVar10 = -fVar5;
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
    fVar12 = (float)NEON_fmadd(fVar8,fVar7,fVar10 * fVar11);
    if (fVar12 != 0.0) {
      fVar12 = 1.0 / fVar12;
      fVar6 = (float)*(undefined8 *)(pfVar1 + 4);
      fVar13 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      uVar9 = NEON_rev64(CONCAT44(fVar13 * -fVar8,fVar6 * -fVar7),4);
      fVar10 = fVar10 * fVar12;
      fVar5 = fVar12 * ((float)uVar9 + fVar6 * fVar5);
      fVar6 = fVar12 * ((float)((ulong)uVar9 >> 0x20) + fVar13 * fVar11);
      fVar13 = (float)NEON_fmadd(fVar7 * fVar12,fVar16,fVar17 * -fVar11 * fVar12);
      fVar16 = fVar5 + fVar17 * fVar8 * fVar12 + fVar16 * fVar10;
      fVar13 = fVar6 + fVar13;
      if (this[0x14] == (ListenerAlignTarget)0x0) {
        if (*(float *)(plVar2 + 0x22) != fVar13) {
          *(float *)(plVar2 + 0x22) = fVar13;
          (**(code **)(*plVar2 + 0x178))(plVar2);
        }
        if (*(float *)((long)plVar2 + 0x114) != fVar16) {
          *(float *)((long)plVar2 + 0x114) = fVar16;
          goto LAB_003e76dc;
        }
      }
      else {
        fVar17 = (float)NEON_fmadd(fVar7 * fVar12,uVar14,fVar15 * -fVar11 * fVar12);
        fVar11 = (float)NEON_fmadd(fVar10,uVar14,fVar15 * fVar8 * fVar12);
        fVar15 = (float)(**(code **)(*plVar2 + 0xd8))(plVar2);
        fVar15 = (fVar13 + fVar15) - (fVar6 + fVar17);
        if (*(float *)(plVar2 + 0x22) != fVar15) {
          *(float *)(plVar2 + 0x22) = fVar15;
          (**(code **)(*plVar2 + 0x178))(plVar2);
        }
        fVar15 = (float)(**(code **)(*plVar2 + 0xe0))(plVar2);
        fVar15 = (fVar16 + fVar15) - (fVar5 + fVar11);
        if (*(float *)((long)plVar2 + 0x114) != fVar15) {
          *(float *)((long)plVar2 + 0x114) = fVar15;
LAB_003e76dc:
                    /* WARNING: Could not recover jumptable at 0x003e76fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x180))(plVar2);
          return;
        }
      }
    }
  }
  return;
}


// ===== 003e7700  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e7704  FUN_003e7704 =====

undefined8 FUN_003e7704(void)

{
  return 0x7e;
}


// ===== 003e770c  FUN_003e770c =====

bool FUN_003e770c(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x7d < 2;
}


// ===== 003e7720  FUN_003e7720 =====

undefined8 FUN_003e7720(long param_1,short param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  
  if (param_2 == 0x3d4) {
    uVar9 = 0;
    uVar5 = 0;
    pbVar7 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e7824;
      }
      pbVar8 = pbVar7 + 1;
      bVar3 = *pbVar7;
      uVar4 = uVar9 & 0x3f;
      uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
      uVar5 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar5;
      pbVar7 = pbVar8;
    } while ((char)bVar3 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar5 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e7824:
      uVar5 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    return 1;
  }
  if (param_2 == 0x21d) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    pcVar6 = (char *)param_3[2];
    if (0 < (lVar1 + lVar2) - (long)pcVar6) {
      param_3[2] = (long)(pcVar6 + 1);
      *(bool *)(param_1 + 0x14) = *pcVar6 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_3 + 3) = 1;
    param_3[2] = lVar1 + lVar2;
    return 1;
  }
  if (param_2 != 0xf0) {
    return 0;
  }
  uVar9 = 0;
  uVar5 = 0;
  pbVar7 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e7840;
    }
    pbVar8 = pbVar7 + 1;
    bVar3 = *pbVar7;
    uVar4 = uVar9 & 0x3f;
    uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
    uVar5 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar5;
    pbVar7 = pbVar8;
  } while ((char)bVar3 < '\0');
  param_3[2] = (long)pbVar8;
  if (uVar5 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e7840:
    uVar5 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar5;
  return 1;
}


// ===== 003e786c  FUN_003e786c =====

void FUN_003e786c(void)

{
  return;
}


// ===== 003e7870  FUN_003e7870 =====

void FUN_003e7870(void)

{
  return;
}


// ===== 003e7874  rive::ScriptedTransitionCondition::~ScriptedTransitionCondition =====

/* rive::ScriptedTransitionCondition::~ScriptedTransitionCondition() */

void __thiscall
rive::ScriptedTransitionCondition::~ScriptedTransitionCondition(ScriptedTransitionCondition *this)

{
  undefined *puVar1;
  undefined *puVar2;
  size_t __n;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  ScriptedObject *this_00;
  long *plVar6;
  long *__dest;
  
  puVar1 = PTR_vtable_0067ce88 + 200;
  puVar2 = PTR_vtable_0067ce88 + 0x148;
  *(undefined **)this = PTR_vtable_0067ce88 + 0x10;
  this_00 = (ScriptedObject *)(this + 0x10);
  *(undefined **)this_00 = puVar1;
  *(undefined **)(this + 0x20) = puVar2;
  disposeScriptInputs(this);
  puVar1 = PTR_vtable_0067d358 + 0x90;
  *(undefined **)this_00 = PTR_vtable_0067d358 + 0x10;
  *(undefined **)(this + 0x20) = puVar1;
  ScriptedObject::scriptDispose(this_00);
  pvVar4 = *(void **)(this + 0x68);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar4;
    operator_delete(pvVar4);
  }
  if (*(long *)(this + 0x60) != 0) {
    FUN_003462d8();
  }
  pvVar4 = *(void **)(this + 0x28);
  *(undefined **)(this + 0x20) = PTR_vtable_0067d068 + 0x10;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar4;
    operator_delete(pvVar4);
  }
  plVar6 = *(long **)(this + 0x18);
  *(undefined **)(this + 0x10) = PTR_vtable_0067d008 + 0x10;
  if (plVar6 != (long *)0x0) {
    __dest = (long *)plVar6[0xd];
    plVar5 = (long *)plVar6[0xe];
    if (__dest != plVar5) {
      do {
        while ((ScriptedObject *)*__dest == this_00) {
          __n = (long)plVar5 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          plVar5 = (long *)((long)__dest + __n);
          plVar6[0xe] = (long)plVar5;
          if (__dest == plVar5) goto LAB_003e7978;
        }
        __dest = __dest + 1;
      } while (__dest != plVar5);
LAB_003e7978:
      plVar6 = *(long **)(this + 0x18);
      if (plVar6 == (long *)0x0) {
        return;
      }
    }
    iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 9);
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x003e79b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  return;
}


// ===== 003e79c8  rive::ScriptedTransitionCondition::disposeScriptInputs =====

/* rive::ScriptedTransitionCondition::disposeScriptInputs() */

void __thiscall
rive::ScriptedTransitionCondition::disposeScriptInputs(ScriptedTransitionCondition *this)

{
  undefined8 *puVar1;
  ulong __n;
  ushort uVar2;
  void *__dest;
  long lVar3;
  undefined8 *__src;
  ulong uVar4;
  long *plVar5;
  
  __src = *(undefined8 **)(this + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  __n = (long)puVar1 - (long)__src;
  if (__n == 0) {
    *(undefined8 **)(this + 0x30) = __src;
    return;
  }
  if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003b5c68();
  }
  __dest = operator_new(__n);
  memcpy(__dest,__src,__n);
  do {
    plVar5 = (long *)*__src;
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (uVar2 < 0x26d) {
      lVar3 = 0x90;
      if (uVar2 != 0x263) {
        if (uVar2 == 0x264) {
          lVar3 = 0x88;
        }
        else {
          if (uVar2 != 0x26a) goto LAB_003e7a18;
          lVar3 = 0x98;
        }
      }
LAB_003e7a10:
      *(undefined8 *)((long)plVar5 + lVar3 + 8) = 0;
    }
    else {
      if (0x272 < uVar2) {
        lVar3 = 0x90;
        if (uVar2 != 0x277) {
          if (uVar2 != 0x273) goto LAB_003e7a18;
          lVar3 = 0xa0;
        }
        goto LAB_003e7a10;
      }
      if (uVar2 == 0x26d) {
        lVar3 = 0x90;
        goto LAB_003e7a10;
      }
      lVar3 = 0x90;
      if (uVar2 == 0x272) goto LAB_003e7a10;
    }
LAB_003e7a18:
    __src = __src + 1;
  } while (__src != puVar1);
  uVar4 = 0;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  do {
    plVar5 = *(long **)((long)__dest + uVar4);
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (uVar2 < 0x26d) {
      lVar3 = 0x90;
      if (uVar2 != 0x263) {
        if (uVar2 == 0x264) {
          lVar3 = 0x88;
        }
        else {
          if (uVar2 != 0x26a) goto LAB_003e7ad0;
          lVar3 = 0x98;
        }
      }
LAB_003e7ac0:
      (**(code **)(*(long *)((long)plVar5 + lVar3) + 8))((long)plVar5 + lVar3);
    }
    else {
      if (0x272 < uVar2) {
        lVar3 = 0x90;
        if (uVar2 != 0x277) {
          if (uVar2 != 0x273) goto LAB_003e7ad0;
          lVar3 = 0xa0;
        }
        goto LAB_003e7ac0;
      }
      if (uVar2 == 0x26d) {
        lVar3 = 0x90;
        goto LAB_003e7ac0;
      }
      lVar3 = 0x90;
      if (uVar2 == 0x272) goto LAB_003e7ac0;
    }
LAB_003e7ad0:
    uVar4 = uVar4 + 8;
    if (__n == uVar4) {
      operator_delete(__dest);
      return;
    }
  } while( true );
}


// ===== 003e7b98  rive::ScriptedTransitionCondition::~ScriptedTransitionCondition =====

/* rive::ScriptedTransitionCondition::~ScriptedTransitionCondition() */

void __thiscall
rive::ScriptedTransitionCondition::~ScriptedTransitionCondition(ScriptedTransitionCondition *this)

{
  ~ScriptedTransitionCondition(this);
  operator_delete(this);
  return;
}


// ===== 003e7bbc  FUN_003e7bbc =====

undefined8 FUN_003e7bbc(void)

{
  return 0x287;
}


// ===== 003e7bc4  FUN_003e7bc4 =====

bool FUN_003e7bc4(undefined8 param_1,short param_2)

{
  return param_2 == 0x287 || param_2 == 0x1dc;
}


// ===== 003e7bdc  FUN_003e7bdc =====

bool FUN_003e7bdc(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3a3) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e7c40;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e7c40:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x3a3;
}


// ===== 003e7c58  rive::ScriptedTransitionCondition::clone =====

/* rive::ScriptedTransitionCondition::clone() const */

long * __thiscall rive::ScriptedTransitionCondition::clone(ScriptedTransitionCondition *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)operator_new(0x88);
  puVar3 = PTR_vtable_0067ce88;
  plVar5[0x10] = 0;
  *(undefined2 *)(plVar5 + 0x10) = 0;
  *(undefined **)(plVar5 + 2) = puVar3 + 200;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[3] = 0;
  plVar5[4] = (long)(puVar3 + 0x148);
  uVar1 = *(undefined4 *)(this + 0xc);
  plVar6 = *(long **)(this + 0x18);
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  *(undefined4 *)(plVar5 + 9) = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar5 + 0xc) = uVar1;
  if (plVar6 != (long *)0x0) {
    FUN_00340fb0(1,plVar6 + 9);
    local_40 = plVar6;
    ScriptedObject::setAsset((ScriptedObject *)(plVar5 + 2),&local_40);
    iVar4 = FUN_00340fe0(0xffffffff,plVar6 + 9);
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e7d4c  rive::ScriptedTransitionCondition::import =====

/* rive::ScriptedTransitionCondition::import(rive::ImportStack&) */

undefined8 __thiscall
rive::ScriptedTransitionCondition::import(ScriptedTransitionCondition *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 == 0) {
    return 1;
  }
  uVar9 = NEON_cnt(uVar4,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
  if ((uVar10 & 0xffffffff) < 2) {
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x17;
  }
  else {
    uVar5 = 0x17;
    if (uVar4 < 0x18) {
      uVar1 = (uint)uVar4 & 0xff;
      uVar2 = 0;
      if ((uVar4 & 0xff) != 0) {
        uVar2 = 0x17 / uVar1;
      }
      uVar5 = (ulong)(0x17 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if (plVar6 == (long *)0x0) {
    return 1;
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    return 1;
  }
  do {
    uVar7 = plVar6[1];
    if (uVar7 == 0x17) {
      if ((short)plVar6[2] == 0x17) {
        if ((BackboardImporter *)plVar6[3] == (BackboardImporter *)0x0) {
          return 1;
        }
        BackboardImporter::addFileAssetReferencer
                  ((BackboardImporter *)plVar6[3],(FileAssetReferencer *)(this + 0x10));
        uVar4 = *(ulong *)(param_1 + 8);
        if (uVar4 == 0) {
          return 1;
        }
        uVar9 = NEON_cnt(uVar4,1);
        uVar8 = NEON_uaddlv(uVar9,1);
        uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
        if ((uVar10 & 0xffffffff) < 2) {
          uVar5 = (ulong)((uint)uVar4 - 1) & 0x35;
        }
        else {
          uVar5 = 0x35;
          if (uVar4 < 0x36) {
            uVar1 = (uint)uVar4 & 0xff;
            uVar2 = 0;
            if ((uVar4 & 0xff) != 0) {
              uVar2 = 0x35 / uVar1;
            }
            uVar5 = (ulong)(0x35 - uVar2 * uVar1);
          }
        }
        plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
        if (plVar6 == (long *)0x0) {
          return 1;
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 1;
        }
        do {
          uVar7 = plVar6[1];
          if (uVar7 == 0x35) {
            if ((short)plVar6[2] == 0x35) {
              if (plVar6[3] == 0) {
                return 1;
              }
              StateMachine::addScriptedObject
                        (*(StateMachine **)(plVar6[3] + 8),(ScriptedObject *)(this + 0x10));
              uVar9 = TransitionCondition::import((TransitionCondition *)this,param_1);
              return uVar9;
            }
          }
          else {
            if ((uVar10 & 0xffffffff) < 2) {
              uVar7 = uVar7 & uVar4 - 1;
            }
            else if (uVar4 <= uVar7) {
              uVar3 = 0;
              if (uVar4 != 0) {
                uVar3 = uVar7 / uVar4;
              }
              uVar7 = uVar7 - uVar3 * uVar4;
            }
            if (uVar7 != uVar5) {
              return 1;
            }
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 1;
          }
        } while( true );
      }
    }
    else {
      if ((uVar10 & 0xffffffff) < 2) {
        uVar7 = uVar7 & uVar4 - 1;
      }
      else if (uVar4 <= uVar7) {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar7 / uVar4;
        }
        uVar7 = uVar7 - uVar3 * uVar4;
      }
      if (uVar7 != uVar5) {
        return 1;
      }
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return 1;
    }
  } while( true );
}


// ===== 003e7f0c  rive::ScriptedTransitionCondition::evaluate =====

/* rive::ScriptedTransitionCondition::evaluate(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

undefined8 __thiscall
rive::ScriptedTransitionCondition::evaluate
          (ScriptedTransitionCondition *this,StateMachineInstance *param_1,
          StateMachineLayerInstance *param_2)

{
  ScriptedTransitionCondition *pSVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(ulong *)(param_1 + 0x228);
  if (uVar3 != 0) {
    pSVar1 = this + 0x10;
    uVar10 = NEON_cnt(uVar3,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = (((((ulong)pSVar1 & 0xffffffff) >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)pSVar1 >> 0x20) *
            -0x622015f714c7d297;
    uVar4 = ((ulong)pSVar1 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x220) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if ((ScriptedTransitionCondition *)plVar7[2] == pSVar1) {
            if (plVar7[3] == 0) {
              return 0;
            }
            uVar10 = evaluateStateful((ScriptedTransitionCondition *)(plVar7[3] + -0x10),param_1,
                                      param_2);
            return uVar10;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar2 * uVar3;
          }
          if (uVar8 != uVar6) {
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 003e8010  FUN_003e8010 =====

void FUN_003e8010(void)

{
  return;
}


// ===== 003e8014  FUN_003e8014 =====

undefined4 FUN_003e8014(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 003e801c  FUN_003e801c =====

undefined8 FUN_003e801c(void)

{
  return 0;
}


// ===== 003e8024  FUN_003e8024 =====

undefined8 FUN_003e8024(void)

{
  return 6;
}


// ===== 003e802c  FUN_003e802c =====

undefined8 FUN_003e802c(void)

{
  return 0;
}


// ===== 003e8034  rive::ScriptedTransitionCondition::cloneScriptedObject =====

/* rive::ScriptedTransitionCondition::cloneScriptedObject(rive::DataBindContainer*) const */

ScriptedObject * __thiscall
rive::ScriptedTransitionCondition::cloneScriptedObject
          (ScriptedTransitionCondition *this,DataBindContainer *param_1)

{
  CustomPropertyContainer *pCVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  
  lVar2 = (**(code **)(*(long *)this + 0x28))();
  pCVar1 = (CustomPropertyContainer *)0x0;
  if (lVar2 != 0) {
    pCVar1 = (CustomPropertyContainer *)(lVar2 + 0x20);
  }
  ScriptedObject::cloneProperties((ScriptedObject *)(this + 0x10),pCVar1,param_1);
  pSVar3 = *(ScriptedObject **)(lVar2 + 0x18);
  if (pSVar3 != (ScriptedObject *)0x0) {
    if ((*(long *)(pSVar3 + 0xd8) != 0) && (*(long *)(*(long *)(pSVar3 + 0xd8) + 0x110) != 0)) {
      ScriptAsset::initScriptedObjectWith(pSVar3);
    }
    ScriptedObject::hydrateScriptInputs((ScriptedObject *)(lVar2 + 0x10));
  }
  pSVar3 = (ScriptedObject *)0x0;
  if (lVar2 != 0) {
    pSVar3 = (ScriptedObject *)(lVar2 + 0x10);
  }
  return pSVar3;
}


// ===== 003e80b8  rive::ScriptedTransitionCondition::addProperty =====

/* rive::ScriptedTransitionCondition::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedTransitionCondition::addProperty
          (ScriptedTransitionCondition *this,CustomProperty *param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  lVar2 = 0x90;
  if (uVar1 < 0x26d) {
    if (uVar1 != 0x263) {
      if (uVar1 == 0x264) {
        lVar2 = 0x88;
      }
      else {
        if (uVar1 != 0x26a) goto LAB_003e8150;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_003e8150;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_003e8150;
    lVar2 = 0xa0;
  }
  *(ScriptedTransitionCondition **)(param_1 + lVar2 + 8) = this + 0x10;
LAB_003e8150:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)(this + 0x20),param_1);
  return;
}


// ===== 003e8164  rive::ScriptedTransitionCondition::~ScriptedTransitionCondition =====

/* non-virtual thunk to rive::ScriptedTransitionCondition::~ScriptedTransitionCondition() */

void __thiscall
rive::ScriptedTransitionCondition::~ScriptedTransitionCondition(ScriptedTransitionCondition *this)

{
  ~ScriptedTransitionCondition(this + -0x10);
  return;
}


// ===== 003e816c  rive::ScriptedTransitionCondition::~ScriptedTransitionCondition =====

/* non-virtual thunk to rive::ScriptedTransitionCondition::~ScriptedTransitionCondition() */

void __thiscall
rive::ScriptedTransitionCondition::~ScriptedTransitionCondition(ScriptedTransitionCondition *this)

{
  ~ScriptedTransitionCondition(this + -0x10);
  operator_delete(this + -0x10);
  return;
}


// ===== 003e8194  FUN_003e8194 =====

undefined4 FUN_003e8194(long param_1)

{
  return *(undefined4 *)(param_1 + -4);
}


// ===== 003e819c  rive::ScriptedTransitionCondition::disposeScriptInputs =====

/* non-virtual thunk to rive::ScriptedTransitionCondition::disposeScriptInputs() */

void __thiscall
rive::ScriptedTransitionCondition::disposeScriptInputs(ScriptedTransitionCondition *this)

{
  disposeScriptInputs(this + -0x10);
  return;
}


// ===== 003e81a4  FUN_003e81a4 =====

undefined8 FUN_003e81a4(void)

{
  return 0;
}


// ===== 003e81ac  FUN_003e81ac =====

undefined8 FUN_003e81ac(void)

{
  return 6;
}


// ===== 003e81b4  FUN_003e81b4 =====

undefined8 FUN_003e81b4(void)

{
  return 0;
}


// ===== 003e81bc  rive::ScriptedTransitionCondition::cloneScriptedObject =====

/* non-virtual thunk to
   rive::ScriptedTransitionCondition::cloneScriptedObject(rive::DataBindContainer*) const */

ScriptedObject * __thiscall
rive::ScriptedTransitionCondition::cloneScriptedObject
          (ScriptedTransitionCondition *this,DataBindContainer *param_1)

{
  CustomPropertyContainer *pCVar1;
  long lVar2;
  ScriptedObject *pSVar3;
  
  lVar2 = (**(code **)(*(long *)(this + -0x10) + 0x28))();
  pCVar1 = (CustomPropertyContainer *)0x0;
  if (lVar2 != 0) {
    pCVar1 = (CustomPropertyContainer *)(lVar2 + 0x20);
  }
  ScriptedObject::cloneProperties((ScriptedObject *)this,pCVar1,param_1);
  pSVar3 = *(ScriptedObject **)(lVar2 + 0x18);
  if (pSVar3 != (ScriptedObject *)0x0) {
    if ((*(long *)(pSVar3 + 0xd8) != 0) && (*(long *)(*(long *)(pSVar3 + 0xd8) + 0x110) != 0)) {
      ScriptAsset::initScriptedObjectWith(pSVar3);
    }
    ScriptedObject::hydrateScriptInputs((ScriptedObject *)(lVar2 + 0x10));
  }
  pSVar3 = (ScriptedObject *)0x0;
  if (lVar2 != 0) {
    pSVar3 = (ScriptedObject *)(lVar2 + 0x10);
  }
  return pSVar3;
}


// ===== 003e8240  rive::ScriptedTransitionCondition::addProperty =====

/* non-virtual thunk to rive::ScriptedTransitionCondition::addProperty(rive::CustomProperty*) */

void __thiscall
rive::ScriptedTransitionCondition::addProperty
          (ScriptedTransitionCondition *this,CustomProperty *param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  lVar2 = 0x90;
  if (uVar1 < 0x26d) {
    if (uVar1 != 0x263) {
      if (uVar1 == 0x264) {
        lVar2 = 0x88;
      }
      else {
        if (uVar1 != 0x26a) goto LAB_003e82d8;
        lVar2 = 0x98;
      }
    }
  }
  else if (uVar1 < 0x273) {
    if ((uVar1 != 0x26d) && (uVar1 != 0x272)) goto LAB_003e82d8;
  }
  else if (uVar1 != 0x277) {
    if (uVar1 != 0x273) goto LAB_003e82d8;
    lVar2 = 0xa0;
  }
  *(ScriptedTransitionCondition **)(param_1 + lVar2 + 8) = this + -0x10;
LAB_003e82d8:
  CustomPropertyContainer::addProperty((CustomPropertyContainer *)this,param_1);
  return;
}


// ===== 003e82ec  rive::ScriptedTransitionCondition::evaluateStateful =====

/* rive::ScriptedTransitionCondition::evaluateStateful(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

void __thiscall
rive::ScriptedTransitionCondition::evaluateStateful
          (ScriptedTransitionCondition *this,StateMachineInstance *param_1,
          StateMachineLayerInstance *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  lua_State *extraout_x1;
  StateMachineInstance *extraout_x1_00;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  rive *this_00;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x58) == 0) {
    bVar2 = false;
  }
  else {
    this_00 = *(rive **)(*(long *)(this + 0x58) + 8);
    rive_lua_pushRef(this_00,(lua_State *)(ulong)*(uint *)(this + 0x44),(int)param_2);
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    lVar4 = *(long *)(this_00 + 8);
    local_58 = FUN_0062b178(this_00,"evaluate",8);
    local_4c = 6;
    FUN_00642c8c(this_00,lVar4 + -0x10,&local_58,*(undefined8 *)(this_00 + 8));
    puVar5 = *(undefined8 **)(this_00 + 8);
    *(undefined8 **)(this_00 + 8) = puVar5 + 2;
    if (((byte)this_00[1] >> 2 & 1) != 0) {
      this_00[1] = (rive)((byte)this_00[1] & 0xfb);
      *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x30);
      *(rive **)(*(long *)(this_00 + 0x18) + 0x30) = this_00;
    }
    puVar5[3] = puVar5[1];
    puVar5[2] = *puVar5;
    puVar5[1] = puVar5[-1];
    *puVar5 = puVar5[-2];
    uVar8 = **(undefined8 **)(this_00 + 8);
    puVar5[-1] = (*(undefined8 **)(this_00 + 8))[1];
    puVar5[-2] = uVar8;
    plVar7 = *(long **)(this_00 + 0x78);
    if (plVar7 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = plVar7[7];
      plVar7[7] = (long)(this + 0x10);
    }
    iVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,this_00,1,1);
    rive_lua_closeOrphanRenderPass(this_00,extraout_x1);
    lVar6 = *(long *)(this_00 + 8);
    plVar7[7] = lVar4;
    if (((iVar3 == 0) && ((int *)(lVar6 + -0x10) != (int *)&DAT_00285948)) &&
       (*(int *)(lVar6 + -4) == 1)) {
      bVar2 = *(int *)(lVar6 + -0x10) != 0;
    }
    else {
      bVar2 = false;
    }
    *(long *)(this_00 + 8) = lVar6 + -0x10;
    param_1 = extraout_x1_00;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2,param_1);
}


// ===== 003e848c  rive::TransitionNumberCondition::validateInputType =====

/* rive::TransitionNumberCondition::validateInputType(rive::StateMachineInput const*) const */

undefined8 __thiscall
rive::TransitionNumberCondition::validateInputType
          (TransitionNumberCondition *this,StateMachineInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (StateMachineInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e84a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x38);
    return uVar1;
  }
  return 1;
}


// ===== 003e84ac  rive::TransitionNumberCondition::evaluate =====

/* rive::TransitionNumberCondition::evaluate(rive::StateMachineInstance const*,
   rive::StateMachineLayerInstance*) const */

bool rive::TransitionNumberCondition::evaluate
               (StateMachineInstance *param_1,StateMachineLayerInstance *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = (**(code **)(*(long *)param_2 + 0x70))(param_2,*(undefined4 *)(param_1 + 0xc));
  if (lVar3 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    bVar2 = false;
    if (iVar1 < 3) {
      if (iVar1 == 0) {
        bVar2 = *(float *)(lVar3 + 0x18) == *(float *)(param_1 + 0x14);
      }
      else if (iVar1 == 1) {
        bVar2 = *(float *)(lVar3 + 0x18) != *(float *)(param_1 + 0x14);
      }
      else if (iVar1 == 2) {
        bVar2 = *(float *)(lVar3 + 0x18) <= *(float *)(param_1 + 0x14);
      }
    }
    else if (iVar1 == 3) {
      bVar2 = *(float *)(lVar3 + 0x18) < *(float *)(param_1 + 0x14) ==
              (NAN(*(float *)(lVar3 + 0x18)) || NAN(*(float *)(param_1 + 0x14)));
    }
    else if (iVar1 == 4) {
      bVar2 = *(float *)(lVar3 + 0x18) < *(float *)(param_1 + 0x14);
    }
    else if (iVar1 == 5) {
      fVar4 = *(float *)(lVar3 + 0x18);
      fVar5 = *(float *)(param_1 + 0x14);
      bVar2 = fVar4 != fVar5 && fVar4 < fVar5 == (NAN(fVar4) || NAN(fVar5));
    }
  }
  return bVar2;
}


// ===== 003e85a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003e85a4  FUN_003e85a4 =====

undefined8 FUN_003e85a4(void)

{
  return 0x46;
}


// ===== 003e85ac  FUN_003e85ac =====

bool FUN_003e85ac(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x43;
  if ((uVar1 < 4) && (uVar1 != 1)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x1dc;
}


// ===== 003e85d8  FUN_003e85d8 =====

undefined8 FUN_003e85d8(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  if (param_2 == 0x9b) {
    uVar8 = 0;
    uVar3 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e86e8;
      }
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar6 = pbVar7;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar7;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e86e8:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x9c) {
    if (param_2 == 0x9d) {
      puVar5 = (undefined4 *)param_3[2];
      puVar4 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar4 - (long)puVar5 < 4) {
        uVar9 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar4 = puVar5 + 1;
        uVar9 = *puVar5;
      }
      *(undefined4 *)(param_1 + 0x14) = uVar9;
      param_3[2] = (long)puVar4;
      return 1;
    }
    return 0;
  }
  uVar8 = 0;
  uVar3 = 0;
  pbVar6 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e86cc;
    }
    pbVar7 = pbVar6 + 1;
    bVar1 = *pbVar6;
    uVar2 = uVar8 & 0x3f;
    uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar6 = pbVar7;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar7;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e86cc:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return 1;
}


// ===== 003e8714  FUN_003e8714 =====

void FUN_003e8714(void)

{
  return;
}


// ===== 003e8718  FUN_003e8718 =====

void FUN_003e8718(void)

{
  return;
}


// ===== 003e871c  rive::BlendState1DInput::import =====

/* rive::BlendState1DInput::import(rive::ImportStack&) */

undefined4 __thiscall rive::BlendState1DInput::import(BlendState1DInput *this,ImportStack *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 == 0) {
    return 1;
  }
  uVar12 = NEON_cnt(uVar6,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  if (uVar5 < 2) {
    uVar8 = (ulong)((uint)uVar6 - 1) & 0x35;
  }
  else {
    uVar8 = 0x35;
    if (uVar6 < 0x36) {
      uVar2 = (uint)uVar6 & 0xff;
      uVar3 = 0;
      if ((uVar6 & 0xff) != 0) {
        uVar3 = 0x35 / uVar2;
      }
      uVar8 = (ulong)(0x35 - uVar3 * uVar2);
    }
  }
  plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
  if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
    do {
      uVar10 = plVar9[1];
      if (uVar10 == 0x35) {
        if ((short)plVar9[2] == 0x35) {
          if (plVar9[3] == 0) {
            return 1;
          }
          uVar2 = *(uint *)(this + 0x78);
          if (uVar2 != *(uint *)(this + 8)) {
            lVar7 = *(long *)(plVar9[3] + 8);
            lVar1 = *(long *)(lVar7 + 0x40);
            if ((((ulong)(*(long *)(lVar7 + 0x48) - lVar1 >> 3) <= (ulong)uVar2) ||
                (plVar9 = *(long **)(lVar1 + (ulong)uVar2 * 8), plVar9 == (long *)0x0)) ||
               (uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,0x38), (uVar6 & 1) == 0)) {
              return 2;
            }
            uVar6 = *(ulong *)(param_1 + 8);
          }
          if (uVar6 == 0) {
            return 1;
          }
          uVar12 = NEON_cnt(uVar6,1);
          uVar11 = NEON_uaddlv(uVar12,1);
          uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
          if (uVar5 < 2) {
            uVar8 = (ulong)((uint)uVar6 - 1) & 0x39;
          }
          else {
            uVar8 = 0x39;
            if (uVar6 < 0x3a) {
              uVar2 = (uint)uVar6 & 0xff;
              uVar3 = 0;
              if ((uVar6 & 0xff) != 0) {
                uVar3 = 0x39 / uVar2;
              }
              uVar8 = (ulong)(0x39 - uVar3 * uVar2);
            }
          }
          plVar9 = *(long **)(*(long *)param_1 + uVar8 * 8);
          if (plVar9 == (long *)0x0) {
            return 1;
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) {
            return 1;
          }
          do {
            uVar10 = plVar9[1];
            if (uVar10 == 0x39) {
              if ((short)plVar9[2] == 0x39) {
                if (plVar9[3] == 0) {
                  return 1;
                }
                StateMachineLayer::addState
                          (*(StateMachineLayer **)(plVar9[3] + 8),(LayerState *)this);
                return 0;
              }
            }
            else {
              if (uVar5 < 2) {
                uVar10 = uVar10 & uVar6 - 1;
              }
              else if (uVar6 <= uVar10) {
                uVar4 = 0;
                if (uVar6 != 0) {
                  uVar4 = uVar10 / uVar6;
                }
                uVar10 = uVar10 - uVar4 * uVar6;
              }
              if (uVar10 != uVar8) {
                return 1;
              }
            }
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) {
              return 1;
            }
          } while( true );
        }
      }
      else {
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar6 - 1;
        }
        else if (uVar6 <= uVar10) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar4 * uVar6;
        }
        if (uVar10 != uVar8) {
          return 1;
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return 1;
}


// ===== 003e8934  FUN_003e8934 =====

void FUN_003e8934(LayerState *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x60);
  plVar1 = *(long **)(param_1 + 0x68);
  *(undefined **)param_1 = PTR_vtable_0067cd18 + 0x10;
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(param_1 + 0x60);
  }
  if (plVar2 != (long *)0x0) {
    *(long **)(param_1 + 0x68) = plVar2;
    operator_delete(plVar2);
  }
  rive::LayerState::~LayerState(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003e89c0  FUN_003e89c0 =====

undefined8 FUN_003e89c0(void)

{
  return 0x4c;
}


// ===== 003e89c8  FUN_003e89c8 =====

bool FUN_003e89c8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x3c;
  if ((uVar1 < 0x11) && ((1 << (ulong)(uVar1 & 0x1f) & 0x11041U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x20f;
}


// ===== 003e8a00  FUN_003e8a00 =====

undefined8 FUN_003e8a00(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x218) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003e8ae0;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e8ae0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x40) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0xa7) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003e8ac4;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar5;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003e8ac4:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x78) = (int)uVar3;
  return 1;
}


// ===== 003e8af4  FUN_003e8af4 =====

void FUN_003e8af4(void)

{
  return;
}


// ===== 003e8af8  rive::BlendState::~BlendState =====

/* rive::BlendState::~BlendState() */

void __thiscall rive::BlendState::~BlendState(BlendState *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x60);
  plVar1 = *(long **)(this + 0x68);
  *(undefined **)this = PTR_vtable_0067cd18 + 0x10;
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x60);
  }
  if (plVar2 != (long *)0x0) {
    *(long **)(this + 0x68) = plVar2;
    operator_delete(plVar2);
  }
  LayerState::~LayerState((LayerState *)this);
  return;
}


// ===== 003e8b7c  rive::BlendState::~BlendState =====

/* rive::BlendState::~BlendState() */

void __thiscall rive::BlendState::~BlendState(BlendState *this)

{
  ~BlendState(this);
  operator_delete(this);
  return;
}


// ===== 003e8ba0  FUN_003e8ba0 =====

undefined8 FUN_003e8ba0(void)

{
  return 0x48;
}


// ===== 003e8ba8  FUN_003e8ba8 =====

uint FUN_003e8ba8(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x3cU & 0xffff) < 0xd) & 0x1041U >> (ulong)(param_2 - 0x3cU & 0x1f);
}


// ===== 003e8bc8  rive::BlendState::addAnimation =====

/* rive::BlendState::addAnimation(rive::BlendAnimation*) */

void __thiscall rive::BlendState::addAnimation(BlendState *this,BlendAnimation *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = *(undefined8 **)(this + 0x68);
  if (puVar10 < *(undefined8 **)(this + 0x70)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003e8d08;
  }
  puVar9 = *(undefined8 **)(this + 0x60);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003e8d2c();
LAB_003e8d28:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x70) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_003e8d28;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
  puVar13 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar10 - (long)puVar9) - 8;
    puVar11 = puVar10;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar10 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar11 = puVar10 + -uVar7;
      puVar10 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar16;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar10 = puVar9;
      if (uVar6 == uVar7) goto LAB_003e8cf4;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x60);
  }
LAB_003e8cf4:
  *(undefined8 **)(this + 0x60) = puVar4;
  *(undefined8 **)(this + 0x68) = puVar13;
  *(void **)(this + 0x70) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003e8d08:
  *(undefined8 **)(this + 0x68) = puVar13;
  return;
}


// ===== 003e8d2c  FUN_003e8d2c =====

void FUN_003e8d2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003e8d40  rive::BlendState1D::makeInstance =====

/* rive::BlendState1D::makeInstance(rive::ArtboardInstance*) const */

void rive::BlendState1D::makeInstance(ArtboardInstance *param_1)

{
  BlendState1DInstance *this;
  ArtboardInstance *in_x1;
  undefined8 *in_x8;
  
  this = (BlendState1DInstance *)operator_new(0x48);
  BlendState1DInstance::BlendState1DInstance(this,(BlendState1D *)param_1,in_x1);
  *in_x8 = this;
  return;
}


// ===== 003e8d88  FUN_003e8d88 =====

void FUN_003e8d88(LayerState *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x60);
  plVar1 = *(long **)(param_1 + 0x68);
  *(undefined **)param_1 = PTR_vtable_0067cd18 + 0x10;
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(param_1 + 0x60);
  }
  if (plVar2 != (long *)0x0) {
    *(long **)(param_1 + 0x68) = plVar2;
    operator_delete(plVar2);
  }
  rive::LayerState::~LayerState(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003e8e14  FUN_003e8e14 =====

undefined8 FUN_003e8e14(void)

{
  return 0x20f;
}


// ===== 003e8e1c  FUN_003e8e1c =====

bool FUN_003e8e1c(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xffff) - 0x3c;
  if ((uVar1 < 0xd) && ((1 << (ulong)(uVar1 & 0x1f) & 0x1041U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x20f;
}


// ===== 003e8e50  rive::BlendState1DInstance::BlendState1DInstance =====

/* rive::BlendState1DInstance::BlendState1DInstance(rive::BlendState1D const*,
   rive::ArtboardInstance*) */

void __thiscall
rive::BlendState1DInstance::BlendState1DInstance
          (BlendState1DInstance *this,BlendState1D *param_1,ArtboardInstance *param_2)

{
  undefined *puVar1;
  LinearAnimation *pLVar2;
  undefined *puVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined1 in_w3;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  void *pvVar20;
  LinearAnimation *pLVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  *(undefined ***)this = &PTR_FUN_00655ea0;
  *(BlendState1D **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (BlendState1DInstance)0x1;
  puVar22 = *(undefined8 **)(param_1 + 0x60);
  puVar12 = *(undefined8 **)(param_1 + 0x68);
  pLVar21 = (LinearAnimation *)PTR_m_EmptyAnimation_0067cd00;
  puVar1 = PTR_m_EmptyAnimation_0067cd00;
  if ((long)puVar12 - (long)puVar22 != 0) {
    uVar9 = (long)puVar12 - (long)puVar22 >> 3;
    if (0x1c71c71c71c71c7 < uVar9) {
LAB_003e9520:
      FUN_003e9e74();
LAB_003e9524:
      FUN_00355e68();
      goto LAB_003e9528;
    }
    uVar9 = uVar9 * 0x90;
    pvVar8 = operator_new(uVar9);
    *(void **)(this + 0x10) = pvVar8;
    *(void **)(this + 0x18) = pvVar8;
    *(void **)(this + 0x20) = (void *)((long)pvVar8 + uVar9);
    puVar22 = *(undefined8 **)(param_1 + 0x60);
    puVar12 = *(undefined8 **)(param_1 + 0x68);
    pLVar21 = (LinearAnimation *)PTR_m_EmptyAnimation_0067cd00;
    puVar1 = PTR_m_EmptyAnimation_0067cd00;
  }
  for (; PTR_m_EmptyAnimation_0067cd00 = puVar1, puVar22 != puVar12; puVar22 = puVar22 + 1) {
    local_100 = (undefined8 *)*puVar22;
    pLVar2 = pLVar21;
    if ((LinearAnimation *)local_100[2] != (LinearAnimation *)0x0) {
      pLVar2 = (LinearAnimation *)local_100[2];
    }
    LinearAnimationInstance::LinearAnimationInstance
              ((LinearAnimationInstance *)&local_f8,pLVar2,param_2,1.0);
    puVar19 = *(undefined8 **)(this + 0x18);
    local_78 = 0;
    if (puVar19 < *(undefined8 **)(this + 0x20)) {
      *puVar19 = local_100;
      LinearAnimationInstance::LinearAnimationInstance
                ((LinearAnimationInstance *)(puVar19 + 1),(LinearAnimationInstance *)&local_f8);
      puVar10 = puVar19 + 0x12;
      *(undefined4 *)(puVar19 + 0x11) = local_78;
    }
    else {
      lVar13 = *(long *)(this + 0x10);
      lVar11 = (long)puVar19 - lVar13 >> 4;
      uVar9 = lVar11 * -0x71c71c71c71c71c7 + 1;
      if (0x1c71c71c71c71c7 < uVar9) goto LAB_003e9520;
      lVar13 = (long)*(undefined8 **)(this + 0x20) - lVar13 >> 4;
      uVar14 = lVar13 * 0x1c71c71c71c71c72;
      if (uVar14 < uVar9 || uVar14 - uVar9 == 0) {
        uVar14 = uVar9;
      }
      if (0xe38e38e38e38e2 < (ulong)(lVar13 * -0x71c71c71c71c71c7)) {
        uVar14 = 0x1c71c71c71c71c7;
      }
      if (uVar14 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (0x1c71c71c71c71c7 < uVar14) goto LAB_003e951c;
        pvVar8 = operator_new(uVar14 * 0x90);
      }
      puVar19 = (undefined8 *)((long)pvVar8 + lVar11 * 0x10);
      pvVar8 = (void *)((long)pvVar8 + uVar14 * 0x90);
      *puVar19 = local_100;
      LinearAnimationInstance::LinearAnimationInstance
                ((LinearAnimationInstance *)(puVar19 + 1),(LinearAnimationInstance *)&local_f8);
      pvVar20 = *(void **)(this + 0x10);
      pvVar4 = *(void **)(this + 0x18);
      puVar10 = puVar19 + 0x12;
      *(undefined4 *)(puVar19 + 0x11) = local_78;
      if (pvVar4 == pvVar20) {
        *(undefined8 **)(this + 0x10) = puVar19;
        *(undefined8 **)(this + 0x18) = puVar10;
        *(void **)(this + 0x20) = pvVar8;
      }
      else {
        lVar11 = 0;
        do {
          *(undefined8 *)((long)puVar19 + lVar11 + -0x90) =
               *(undefined8 *)((long)pvVar4 + lVar11 + -0x90);
          LinearAnimationInstance::LinearAnimationInstance
                    ((LinearAnimationInstance *)((long)puVar19 + lVar11 + -0x88),
                     (LinearAnimationInstance *)((long)pvVar4 + lVar11 + -0x88));
          lVar13 = lVar11 + -0x90;
          *(undefined4 *)((long)puVar19 + lVar11 + -8) = *(undefined4 *)((long)pvVar4 + lVar11 + -8)
          ;
          lVar11 = lVar13;
        } while ((void *)((long)pvVar4 + lVar13) != pvVar20);
        pvVar4 = *(void **)(this + 0x10);
        pvVar20 = *(void **)(this + 0x18);
        *(long *)(this + 0x10) = (long)puVar19 + lVar13;
        *(undefined8 **)(this + 0x18) = puVar10;
        *(void **)(this + 0x20) = pvVar8;
        for (; pvVar20 != pvVar4; pvVar20 = (void *)((long)pvVar20 + -0x90)) {
          LinearAnimationInstance::~LinearAnimationInstance
                    ((LinearAnimationInstance *)((long)pvVar20 + -0x88));
        }
      }
      pLVar21 = (LinearAnimation *)PTR_m_EmptyAnimation_0067cd00;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
        pLVar21 = (LinearAnimation *)PTR_m_EmptyAnimation_0067cd00;
      }
    }
    *(undefined8 **)(this + 0x18) = puVar10;
    LinearAnimationInstance::~LinearAnimationInstance((LinearAnimationInstance *)&local_f8);
    puVar1 = PTR_m_EmptyAnimation_0067cd00;
  }
  if (((byte)param_1[0x40] >> 1 & 1) != 0) {
    plVar23 = *(long **)(param_1 + 0x60);
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar23 != plVar5) {
      puVar22 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)0x0;
      puVar12 = (undefined8 *)0x0;
      do {
        puVar3 = puVar1;
        if (*(undefined **)(*plVar23 + 0x10) != (undefined *)0x0) {
          puVar3 = *(undefined **)(*plVar23 + 0x10);
        }
        if (puVar19 < puVar22) {
          *puVar19 = puVar3;
          puVar17 = puVar12;
          puVar10 = puVar19;
        }
        else {
          lVar11 = (long)puVar19 - (long)puVar12;
          uVar9 = (lVar11 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) goto LAB_003e9524;
          uVar14 = (long)puVar22 - (long)puVar12 >> 2;
          if (uVar14 <= uVar9) {
            uVar14 = uVar9;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar22 - (long)puVar12)) {
            uVar14 = 0x1fffffffffffffff;
          }
          if (uVar14 == 0) {
            pvVar8 = (void *)0x0;
          }
          else {
            if (uVar14 >> 0x3d != 0) goto LAB_003e951c;
            pvVar8 = operator_new(uVar14 << 3);
          }
          puVar10 = (undefined8 *)((long)pvVar8 + (lVar11 >> 3) * 8);
          *puVar10 = puVar3;
          puVar17 = puVar10;
          if ((long)puVar19 - (long)puVar12 != 0) {
            uVar9 = ((long)puVar19 - (long)puVar12) - 8;
            if ((((0x147 < uVar9) &&
                 (uVar15 = (long)pvVar8 + lVar11 + -8,
                 uVar15 - (uVar9 & 0xfffffffffffffff8) <= uVar15)) &&
                ((undefined8 *)((long)(puVar19 + -1) - (uVar9 & 0xfffffffffffffff8)) <= puVar19 + -1
                )) && (0x1f < (ulong)((long)puVar19 + (-lVar11 - (long)pvVar8)))) {
              puVar22 = puVar10 + -2;
              puVar17 = puVar19 + -2;
              uVar9 = (uVar9 >> 3) + 1;
              uVar16 = uVar9 & 0x3ffffffffffffffc;
              puVar19 = puVar19 + -uVar16;
              uVar15 = uVar16;
              do {
                puVar18 = puVar17 + -1;
                uVar26 = puVar17[-2];
                uVar25 = puVar17[1];
                uVar24 = *puVar17;
                uVar15 = uVar15 - 4;
                puVar17 = puVar17 + -4;
                puVar22[-1] = *puVar18;
                puVar22[-2] = uVar26;
                puVar22[1] = uVar25;
                *puVar22 = uVar24;
                puVar22 = puVar22 + -4;
              } while (uVar15 != 0);
              puVar17 = puVar10 + -uVar16;
              if (uVar9 == uVar16) goto LAB_003e91fc;
            }
            do {
              puVar19 = puVar19 + -1;
              puVar17 = puVar17 + -1;
              *puVar17 = *puVar19;
            } while (puVar19 != puVar12);
          }
LAB_003e91fc:
          puVar22 = (undefined8 *)((long)pvVar8 + uVar14 * 8);
          if (puVar12 != (undefined8 *)0x0) {
            operator_delete(puVar12);
          }
        }
        puVar19 = puVar10 + 1;
        plVar23 = plVar23 + 1;
        puVar12 = puVar17;
      } while (plVar23 != plVar5);
      if (puVar17 != (undefined8 *)0x0) {
        operator_delete(puVar17);
      }
    }
  }
  puVar1 = PTR_vtable_0067cd28 + 0x10;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x30) = 0;
  puVar1 = PTR_m_EmptyAnimation_0067cd00;
  if (((byte)param_1[0x40] >> 1 & 1) != 0) {
    plVar23 = *(long **)(param_1 + 0x60);
    plVar5 = *(long **)(param_1 + 0x68);
    local_100 = (undefined8 *)0x0;
    local_f8 = (undefined8 *)0x0;
    local_f0 = (undefined8 *)0x0;
    puVar22 = local_100;
    puVar12 = local_f8;
    for (; local_100 = puVar22, local_f8 = puVar12, plVar23 != plVar5; plVar23 = plVar23 + 1) {
      puVar3 = puVar1;
      if (*(undefined **)(*plVar23 + 0x10) != (undefined *)0x0) {
        puVar3 = *(undefined **)(*plVar23 + 0x10);
      }
      if (puVar12 < local_f0) {
        puVar19 = puVar12 + 1;
        *puVar12 = puVar3;
      }
      else {
        lVar11 = (long)puVar12 - (long)puVar22;
        uVar9 = (lVar11 >> 3) + 1;
        if (uVar9 >> 0x3d != 0) goto LAB_003e9524;
        uVar14 = (long)local_f0 - (long)puVar22 >> 2;
        if (uVar14 <= uVar9) {
          uVar14 = uVar9;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_f0 - (long)puVar22)) {
          uVar14 = 0x1fffffffffffffff;
        }
        if (uVar14 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (uVar14 >> 0x3d != 0) {
LAB_003e951c:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar8 = operator_new(uVar14 << 3);
        }
        puVar10 = (undefined8 *)((long)pvVar8 + (lVar11 >> 3) * 8);
        puVar19 = puVar10 + 1;
        *puVar10 = puVar3;
        puVar17 = puVar12;
        if ((long)puVar12 - (long)puVar22 != 0) {
          uVar9 = ((long)puVar12 - (long)puVar22) - 8;
          if (((0x147 < uVar9) &&
              (uVar15 = (long)pvVar8 + lVar11 + -8, uVar15 - (uVar9 & 0xfffffffffffffff8) <= uVar15)
              ) && (((undefined8 *)((long)(puVar12 + -1) - (uVar9 & 0xfffffffffffffff8)) <=
                     puVar12 + -1 && (0x1f < (ulong)((long)puVar12 + (-lVar11 - (long)pvVar8)))))) {
            puVar17 = puVar10 + -2;
            puVar18 = puVar12 + -2;
            uVar9 = (uVar9 >> 3) + 1;
            uVar16 = uVar9 & 0x3ffffffffffffffc;
            puVar12 = puVar12 + -uVar16;
            uVar15 = uVar16;
            do {
              puVar7 = puVar18 + -1;
              uVar26 = puVar18[-2];
              uVar25 = puVar18[1];
              uVar24 = *puVar18;
              uVar15 = uVar15 - 4;
              puVar18 = puVar18 + -4;
              puVar17[-1] = *puVar7;
              puVar17[-2] = uVar26;
              puVar17[1] = uVar25;
              *puVar17 = uVar24;
              puVar17 = puVar17 + -4;
            } while (uVar15 != 0);
            puVar10 = puVar10 + -uVar16;
            puVar17 = puVar22;
            if (uVar9 == uVar16) goto LAB_003e93d4;
          }
          do {
            puVar12 = puVar12 + -1;
            puVar10 = puVar10 + -1;
            *puVar10 = *puVar12;
            puVar17 = local_100;
          } while (puVar12 != puVar22);
        }
LAB_003e93d4:
        local_f0 = (undefined8 *)((long)pvVar8 + uVar14 * 8);
        local_100 = puVar10;
        if (puVar17 != (undefined8 *)0x0) {
          operator_delete(puVar17);
        }
      }
      puVar22 = local_100;
      puVar12 = puVar19;
    }
    AnimationResetFactory::fromAnimations
              ((AnimationResetFactory *)&local_100,param_2,(ArtboardInstance *)0x1,(bool)in_w3);
    pvVar8 = *(void **)(this + 0x40);
    *(undefined8 *)(this + 0x40) = local_108;
    if (pvVar8 != (void *)0x0) {
      pvVar20 = *(void **)((long)pvVar8 + 0x48);
      if (pvVar20 != (void *)0x0) {
        *(void **)((long)pvVar8 + 0x50) = pvVar20;
        operator_delete(pvVar20);
      }
      (**(code **)(**(long **)((long)pvVar8 + 8) + 8))();
      operator_delete(pvVar8);
    }
    if (local_100 != (undefined8 *)0x0) {
      operator_delete(local_100);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
LAB_003e9528:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e952c  rive::BlendState1DInstance::~BlendState1DInstance =====

/* rive::BlendState1DInstance::~BlendState1DInstance() */

void __thiscall rive::BlendState1DInstance::~BlendState1DInstance(BlendState1DInstance *this)

{
  ~BlendState1DInstance(this);
  operator_delete(this);
  return;
}


// ===== 003e9550  rive::BlendState1DInstance::advance =====

/* rive::BlendState1DInstance::advance(float, rive::StateMachineInstance*) */

void __thiscall
rive::BlendState1DInstance::advance
          (BlendState1DInstance *this,float param_1,StateMachineInstance *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  undefined2 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar3 = *(long *)(this + 0x18);
  for (lVar8 = *(long *)(this + 0x10); lVar8 != lVar3; lVar8 = lVar8 + 0x90) {
    if (*(int *)(lVar8 + 100) == -1) {
      if (*(int *)(*(long *)(lVar8 + 0x40) + 0x34) == 0) goto LAB_003e95c0;
LAB_003e9584:
      LinearAnimationInstance::advance
                ((LinearAnimationInstance *)(lVar8 + 8),param_1,(KeyedCallbackReporter *)param_2);
    }
    else {
      if (*(int *)(lVar8 + 100) != 0) goto LAB_003e9584;
LAB_003e95c0:
      lVar9 = *(long *)(lVar8 + 0x40);
      fVar18 = *(float *)(lVar8 + 0x5c) * *(float *)(lVar9 + 0x30);
      if (fVar18 != 0.0 && fVar18 < 0.0 == NAN(fVar18)) {
        puVar1 = (undefined4 *)(lVar9 + 0x2c);
        if (*(char *)(lVar9 + 0x40) != '\0') {
          puVar1 = (undefined4 *)(lVar9 + 0x3c);
        }
        fVar21 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x28));
        fVar20 = (float)NEON_ucvtf(*puVar1);
        if (*(float *)(lVar8 + 0x48) < fVar20 / fVar21) goto LAB_003e9584;
      }
      if (fVar18 < 0.0) {
        fVar20 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x38));
        fVar21 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x28));
        fVar18 = 0.0;
        if (*(char *)(lVar9 + 0x40) != '\0') {
          fVar18 = fVar20;
        }
        fVar18 = fVar18 / fVar21;
        fVar20 = *(float *)(lVar8 + 0x48);
        if (fVar20 != fVar18 && fVar20 < fVar18 == (NAN(fVar20) || NAN(fVar18))) goto LAB_003e9584;
      }
    }
  }
  uVar6 = (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),0x4c);
  plVar7 = *(long **)(this + 8);
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7,0x210);
    fVar18 = 0.0;
    if ((uVar6 & 1) != 0) {
      uVar12 = *(ulong *)(param_2 + 0x200);
      uVar6 = *(ulong *)(*(long *)(this + 8) + 0x78);
      uVar19 = NEON_cnt(uVar12,1);
      uVar10 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar17 = NEON_uaddlv(uVar19,1);
      uVar10 = (uVar6 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      if ((uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar17) < 2) {
        uVar13 = uVar12 - 1 & uVar10;
      }
      else {
        uVar13 = uVar10;
        if (uVar12 <= uVar10) {
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar10 / uVar12;
          }
          uVar13 = uVar10 - uVar13 * uVar12;
        }
      }
      plVar7 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar13 * 8);
      do {
        do {
          plVar7 = (long *)*plVar7;
        } while (uVar10 - plVar7[1] != 0);
      } while (plVar7[2] != uVar6);
      plVar7 = (long *)plVar7[3];
      uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7,0x1d9);
      if ((uVar6 & 1) != 0) {
        fVar18 = *(float *)((long)plVar7 + 0xc);
      }
    }
  }
  else {
    fVar18 = 0.0;
    if ((int)plVar7[0xf] != (int)plVar7[1]) {
      lVar8 = (**(code **)(*(long *)param_2 + 0x70))(param_2);
      fVar18 = *(float *)(lVar8 + 0x18);
    }
  }
  plVar7 = *(long **)(this + 0x10);
  plVar4 = *(long **)(this + 0x18);
  uVar14 = 0;
  iVar5 = (int)((ulong)((long)plVar4 - (long)plVar7) >> 4) * 0x38e38e39;
  iVar11 = iVar5 + -1;
  uVar15 = uVar14;
  if (0 < iVar5) {
    do {
      while( true ) {
        uVar15 = (int)(uVar14 + iVar11) >> 1;
        fVar20 = *(float *)(plVar7[(long)(int)uVar15 * 0x12] + 0x18);
        if (fVar20 < fVar18) break;
        if ((fVar20 == fVar18 || fVar20 < fVar18 != (NAN(fVar20) || NAN(fVar18))) ||
           (iVar11 = uVar15 - 1, uVar15 = uVar14, iVar11 < (int)uVar14)) goto LAB_003e97d4;
      }
      uVar14 = uVar15 + 1;
      uVar15 = uVar14;
    } while ((int)uVar14 <= iVar11);
  }
LAB_003e97d4:
  fVar20 = 0.0;
  fVar21 = 0.0;
  plVar16 = plVar7 + (ulong)uVar15 * 0x12;
  plVar2 = (long *)0x0;
  if ((int)uVar15 <= iVar5 && 0 < (int)uVar15) {
    plVar2 = plVar7 + (long)(int)uVar15 * 0x12 + -0x12;
  }
  if (iVar5 <= (int)uVar15 || 0x7fffffff < uVar15) {
    plVar16 = (long *)0x0;
  }
  *(long **)(this + 0x30) = plVar2;
  *(long **)(this + 0x38) = plVar16;
  if (plVar16 != (long *)0x0) {
    fVar21 = *(float *)(*plVar16 + 0x18);
  }
  fVar22 = 1.0;
  if (plVar2 == (long *)0x0) {
    fVar18 = 1.0;
  }
  else {
    fVar20 = *(float *)(*plVar2 + 0x18);
    if (plVar16 == (long *)0x0) {
      fVar18 = 1.0;
    }
    else if (fVar21 == fVar20) {
      fVar18 = 1.0;
    }
    else {
      fVar18 = (fVar18 - fVar20) / (fVar21 - fVar20);
      fVar22 = 1.0 - fVar18;
    }
  }
  while (plVar7 != plVar4) {
    if ((plVar16 == (long *)0x0) || (*(float *)(*plVar7 + 0x18) != fVar21)) {
      if ((plVar2 == (long *)0x0) || (*(float *)(*plVar7 + 0x18) != fVar20)) {
        *(undefined4 *)(plVar7 + 0x11) = 0;
        plVar7 = plVar7 + 0x12;
      }
      else {
        *(float *)(plVar7 + 0x11) = fVar22;
        plVar7 = plVar7 + 0x12;
      }
    }
    else {
      *(float *)(plVar7 + 0x11) = fVar18;
      plVar7 = plVar7 + 0x12;
    }
  }
  return;
}


// ===== 003e98c0  rive::BlendState1DInstance::apply =====

/* rive::BlendState1DInstance::apply(rive::ArtboardInstance*, float) */

void __thiscall
rive::BlendState1DInstance::apply
          (BlendState1DInstance *this,ArtboardInstance *param_1,float param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  Core *pCVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(AnimationReset **)(this + 0x40) != (AnimationReset *)0x0) {
    AnimationReset::apply(*(AnimationReset **)(this + 0x40),(Artboard *)param_1);
  }
  lVar9 = *(long *)(this + 0x10);
  lVar2 = *(long *)(this + 0x18);
  do {
    if (lVar9 == lVar2) {
      return;
    }
    fVar12 = *(float *)(lVar9 + 0x88) * param_2;
    if (fVar12 != 0.0) {
      lVar7 = *(long *)(lVar9 + 0x40);
      fVar13 = *(float *)(lVar9 + 0x48);
      if (*(char *)(lVar7 + 0x41) != '\0') {
        fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x28));
        fVar13 = (float)(int)(fVar13 * fVar11) / fVar11;
      }
      plVar10 = *(long **)(lVar7 + 0x48);
      plVar3 = *(long **)(lVar7 + 0x50);
      if (plVar10 != plVar3) {
        plVar8 = *(long **)(lVar9 + 0x18);
        do {
          lVar7 = *plVar10;
          pCVar6 = (Core *)(**(code **)(*plVar8 + 0x348))(plVar8,*(undefined4 *)(lVar7 + 0xc));
          if (pCVar6 != (Core *)0x0) {
            puVar4 = *(undefined8 **)(lVar7 + 0x18);
            for (puVar1 = *(undefined8 **)(lVar7 + 0x10); puVar1 != puVar4; puVar1 = puVar1 + 1) {
              iVar5 = *(int *)((KeyedProperty *)*puVar1 + 0xc);
              if (iVar5 < 0x365) {
                if ((iVar5 != 0x18b) && (iVar5 != 0x191)) {
LAB_003e998c:
                  KeyedProperty::apply
                            ((KeyedProperty *)*puVar1,pCVar6,fVar13,fVar12,
                             (LinearAnimationInstance *)(lVar9 + 8));
                }
              }
              else if ((iVar5 != 0x365) && (iVar5 != 0x3f8)) goto LAB_003e998c;
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar3);
      }
    }
    lVar9 = lVar9 + 0x90;
  } while( true );
}


// ===== 003e9a04  FUN_003e9a04 =====

undefined1 FUN_003e9a04(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}


// ===== 003e9a0c  rive::BlendState1DInstance::~BlendState1DInstance =====

/* rive::BlendState1DInstance::~BlendState1DInstance() */

void __thiscall rive::BlendState1DInstance::~BlendState1DInstance(BlendState1DInstance *this)

{
  long lVar1;
  void *pvVar2;
  LinearAnimationInstance *this_00;
  void *pvVar3;
  void *pvVar4;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar3 = *(void **)(this + 0x40);
  *(undefined **)this = PTR_vtable_0067cd28 + 0x10;
  *(undefined8 *)(this + 0x40) = 0;
  if (pvVar3 != (void *)0x0) {
    local_40 = pvVar3;
    AnimationResetFactory::release(&local_40);
    pvVar3 = local_40;
    if (local_40 != (void *)0x0) {
      pvVar2 = *(void **)((long)local_40 + 0x48);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)local_40 + 0x50) = pvVar2;
        operator_delete(pvVar2);
      }
      (**(code **)(**(long **)((long)pvVar3 + 8) + 8))();
      operator_delete(pvVar3);
    }
    pvVar3 = *(void **)(this + 0x40);
    *(undefined8 *)(this + 0x40) = 0;
    if (pvVar3 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar3 + 0x48);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar3 + 0x50) = pvVar2;
        operator_delete(pvVar2);
      }
      (**(code **)(**(long **)((long)pvVar3 + 8) + 8))();
      operator_delete(pvVar3);
    }
  }
  pvVar3 = *(void **)(this + 0x10);
  *(undefined ***)this = &PTR_FUN_00655ea0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    pvVar4 = *(void **)(this + 0x18);
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        this_00 = (LinearAnimationInstance *)((long)pvVar4 + -0x88);
        pvVar4 = (void *)((long)pvVar4 + -0x90);
        LinearAnimationInstance::~LinearAnimationInstance(this_00);
      } while (pvVar4 != pvVar3);
      pvVar2 = *(void **)(this + 0x10);
    }
    *(void **)(this + 0x18) = pvVar3;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      operator_delete(pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003e9b4c  FUN_003e9b4c =====

void FUN_003e9b4c(undefined8 *param_1)

{
  LinearAnimationInstance *this;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00655ea0;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        this = (LinearAnimationInstance *)((long)pvVar2 + -0x88);
        pvVar2 = (void *)((long)pvVar2 + -0x90);
        rive::LinearAnimationInstance::~LinearAnimationInstance(this);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar3;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 003e9bc4  FUN_003e9bc4 =====

void FUN_003e9bc4(undefined8 *param_1)

{
  LinearAnimationInstance *this;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00655ea0;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        this = (LinearAnimationInstance *)((long)pvVar2 + -0x88);
        pvVar2 = (void *)((long)pvVar2 + -0x90);
        rive::LinearAnimationInstance::~LinearAnimationInstance(this);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar3;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 003e9c34  FUN_003e9c34 =====

void FUN_003e9c34(float param_1,long param_2,KeyedCallbackReporter *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  do {
    if (lVar2 == lVar3) {
      return;
    }
    if (*(int *)(lVar2 + 100) == -1) {
      if (*(int *)(*(long *)(lVar2 + 0x40) + 0x34) == 0) goto LAB_003e9ca0;
LAB_003e9c64:
      rive::LinearAnimationInstance::advance((LinearAnimationInstance *)(lVar2 + 8),param_1,param_3)
      ;
    }
    else {
      if (*(int *)(lVar2 + 100) != 0) goto LAB_003e9c64;
LAB_003e9ca0:
      lVar4 = *(long *)(lVar2 + 0x40);
      fVar5 = *(float *)(lVar2 + 0x5c) * *(float *)(lVar4 + 0x30);
      if (fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5)) {
        puVar1 = (undefined4 *)(lVar4 + 0x2c);
        if (*(char *)(lVar4 + 0x40) != '\0') {
          puVar1 = (undefined4 *)(lVar4 + 0x3c);
        }
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x28));
        fVar6 = (float)NEON_ucvtf(*puVar1);
        if (*(float *)(lVar2 + 0x48) < fVar6 / fVar7) goto LAB_003e9c64;
      }
      if (fVar5 < 0.0) {
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x38));
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x28));
        fVar5 = 0.0;
        if (*(char *)(lVar4 + 0x40) != '\0') {
          fVar5 = fVar6;
        }
        fVar5 = fVar5 / fVar7;
        fVar6 = *(float *)(lVar2 + 0x48);
        if (fVar6 != fVar5 && fVar6 < fVar5 == (NAN(fVar6) || NAN(fVar5))) goto LAB_003e9c64;
      }
    }
    lVar2 = lVar2 + 0x90;
  } while( true );
}


// ===== 003e9d38  FUN_003e9d38 =====

void FUN_003e9d38(float param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  Core *pCVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  do {
    if (lVar1 == lVar3) {
      return;
    }
    fVar12 = *(float *)(lVar1 + 0x88) * param_1;
    if (fVar12 != 0.0) {
      lVar8 = *(long *)(lVar1 + 0x40);
      fVar13 = *(float *)(lVar1 + 0x48);
      if (*(char *)(lVar8 + 0x41) != '\0') {
        fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x28));
        fVar13 = (float)(int)(fVar13 * fVar11) / fVar11;
      }
      plVar10 = *(long **)(lVar8 + 0x48);
      plVar4 = *(long **)(lVar8 + 0x50);
      if (plVar10 != plVar4) {
        plVar9 = *(long **)(lVar1 + 0x18);
        do {
          lVar8 = *plVar10;
          pCVar7 = (Core *)(**(code **)(*plVar9 + 0x348))(plVar9,*(undefined4 *)(lVar8 + 0xc));
          if (pCVar7 != (Core *)0x0) {
            puVar5 = *(undefined8 **)(lVar8 + 0x18);
            for (puVar2 = *(undefined8 **)(lVar8 + 0x10); puVar2 != puVar5; puVar2 = puVar2 + 1) {
              iVar6 = *(int *)((KeyedProperty *)*puVar2 + 0xc);
              if (iVar6 < 0x365) {
                if ((iVar6 != 0x18b) && (iVar6 != 0x191)) {
LAB_003e9dfc:
                  rive::KeyedProperty::apply
                            ((KeyedProperty *)*puVar2,pCVar7,fVar13,fVar12,
                             (LinearAnimationInstance *)(lVar1 + 8));
                }
              }
              else if ((iVar6 != 0x365) && (iVar6 != 0x3f8)) goto LAB_003e9dfc;
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar4);
      }
    }
    lVar1 = lVar1 + 0x90;
  } while( true );
}


// ===== 003e9e74  FUN_003e9e74 =====

void FUN_003e9e74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003e9e88  rive::BlendState1DInstance::animationIndex =====

/* rive::BlendState1DInstance::animationIndex(float) */

int __thiscall rive::BlendState1DInstance::animationIndex(BlendState1DInstance *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar2 = 0;
  iVar1 = (int)((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 4) * 0x38e38e39;
  iVar3 = iVar1 + -1;
  if (0 < iVar1) {
    do {
      while( true ) {
        iVar1 = iVar3 + iVar2 >> 1;
        fVar4 = *(float *)(*(long *)(*(long *)(this + 0x10) + (long)iVar1 * 0x90) + 0x18);
        if (fVar4 < param_1) break;
        if (fVar4 == param_1 || fVar4 < param_1 != (NAN(fVar4) || NAN(param_1))) {
          return iVar1;
        }
        iVar3 = iVar1 + -1;
        if (iVar3 < iVar2) {
          return iVar2;
        }
      }
      iVar2 = iVar1 + 1;
    } while (iVar2 <= iVar3);
  }
  return iVar2;
}


// ===== 003e9ef8  rive::CubicInterpolatorComponent::onAddedDirty =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::CubicInterpolatorComponent::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::CubicInterpolatorComponent::onAddedDirty
          (CubicInterpolatorComponent *this,CoreContext *param_1)

{
  CubicInterpolatorComponent *pCVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  pCVar1 = (CubicInterpolatorComponent *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pCVar1 = (CubicInterpolatorComponent *)(param_1 + -0x998);
  }
  *(CubicInterpolatorComponent **)(this + 0x40) = pCVar1;
  *(CubicInterpolatorComponent **)(this + 0x80) = pCVar1;
  if (pCVar1 != this) {
    plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar8 = *plVar7;
    *(long **)(this + 0x30) = plVar7;
    (**(code **)(lVar8 + 0x90))(plVar7,this);
  }
  uVar6 = DAT_0024e8f8;
  uVar5 = _UNK_0024e3f8;
  uVar4 = _DAT_0024e3f0;
  uVar3 = _UNK_0024df28;
  uVar2 = _DAT_0024df20;
  fVar9 = *(float *)(this + 0x88);
  uVar13 = *(undefined4 *)(this + 0x90);
  uVar10 = NEON_fmadd(uVar13,0xc0400000,0x3f800000);
  *(float *)(this + 0xc4) = fVar9;
  *(undefined4 *)(this + 200) = uVar13;
  fVar11 = (float)NEON_fmadd(fVar9,0x40400000,uVar10);
  fVar12 = (float)NEON_fmadd(uVar13,0x40400000,fVar9 * -6.0);
  fVar9 = fVar9 * 3.0;
  fVar14 = (float)uVar6;
  fVar15 = (float)((ulong)uVar6 >> 0x20);
  fVar16 = (float)uVar4;
  fVar17 = (float)((ulong)uVar4 >> 0x20);
  fVar18 = (float)uVar5;
  fVar19 = (float)((ulong)uVar5 >> 0x20);
  fVar20 = (float)uVar2;
  fVar21 = (float)((ulong)uVar2 >> 0x20);
  fVar22 = (float)uVar3;
  fVar23 = (float)((ulong)uVar3 >> 0x20);
  *(ulong *)(this + 0xb8) =
       CONCAT44((fVar9 + fVar15 * (fVar12 + fVar15 * fVar11)) * fVar15,
                (fVar9 + fVar14 * (fVar12 + fVar14 * fVar11)) * fVar14);
  *(ulong *)(this + 0xa0) =
       CONCAT44((fVar9 + fVar19 * (fVar12 + fVar19 * fVar11)) * fVar19,
                (fVar9 + fVar18 * (fVar12 + fVar18 * fVar11)) * fVar18);
  *(ulong *)(this + 0x98) =
       CONCAT44((fVar9 + fVar17 * (fVar12 + fVar17 * fVar11)) * fVar17,
                (fVar9 + fVar16 * (fVar12 + fVar16 * fVar11)) * fVar16);
  *(ulong *)(this + 0xb0) =
       CONCAT44((fVar9 + fVar23 * (fVar12 + fVar23 * fVar11)) * fVar23,
                (fVar9 + fVar22 * (fVar12 + fVar22 * fVar11)) * fVar22);
  *(ulong *)(this + 0xa8) =
       CONCAT44((fVar9 + fVar21 * (fVar12 + fVar21 * fVar11)) * fVar21,
                (fVar9 + fVar20 * (fVar12 + fVar20 * fVar11)) * fVar20);
  *(float *)(this + 0xc0) = fVar11 + fVar12 + fVar9;
  return 0;
}


// ===== 003ea000  rive::CubicInterpolatorComponent::transform =====

/* rive::CubicInterpolatorComponent::transform(float) const */

float __thiscall
rive::CubicInterpolatorComponent::transform(CubicInterpolatorComponent *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar1 = (float)CubicInterpolatorSolver::getT((CubicInterpolatorSolver *)(this + 0x98),param_1);
  fVar4 = *(float *)(this + 0x8c);
  uVar2 = NEON_fmadd(*(undefined4 *)(this + 0x94),0xc0400000,0x3f800000);
  uVar2 = NEON_fmadd(fVar4,0x40400000,uVar2);
  uVar3 = NEON_fmadd(*(undefined4 *)(this + 0x94),0x40400000,fVar4 * -6.0);
  uVar2 = NEON_fmadd(uVar2,fVar1,uVar3);
  fVar4 = (float)NEON_fmadd(uVar2,fVar1,fVar4 * 3.0);
  return fVar4 * fVar1;
}


// ===== 003ea05c  FUN_003ea05c =====

void FUN_003ea05c(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ea0c8  FUN_003ea0c8 =====

undefined8 FUN_003ea0c8(void)

{
  return 0xa3;
}


// ===== 003ea0d0  FUN_003ea0d0 =====

bool FUN_003ea0d0(undefined8 param_1,short param_2)

{
  return param_2 == 0xa3 || param_2 == 10;
}


// ===== 003ea0e4  FUN_003ea0e4 =====

undefined8 FUN_003ea0e4(long param_1,ushort param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x152) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003ea298;
        }
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_003ea298:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) {
        if (param_2 == 0x151) {
          puVar8 = (undefined4 *)param_3[2];
          puVar7 = (undefined4 *)(*param_3 + param_3[1]);
          if ((long)puVar7 - (long)puVar8 < 4) {
            uVar15 = 0;
            *(undefined1 *)(param_3 + 3) = 1;
          }
          else {
            puVar7 = puVar8 + 1;
            uVar15 = *puVar8;
          }
          param_3[2] = (long)puVar7;
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0x88) = uVar15;
        }
        goto LAB_003ea340;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar12 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar12) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003ea2d0;
        }
        pbVar13 = pbVar12 + 1;
        bVar2 = *pbVar12;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar6 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar6;
        pbVar12 = pbVar13;
      } while ((char)bVar2 < '\0');
      param_3[2] = (long)pbVar13;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003ea2d0:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
    uVar5 = 1;
  }
  else if (param_2 == 0x152) {
    puVar8 = (undefined4 *)param_3[2];
    puVar7 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar7 - (long)puVar8 < 4) {
      uVar15 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar7 = puVar8 + 1;
      uVar15 = *puVar8;
    }
    param_3[2] = (long)puVar7;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x8c) = uVar15;
  }
  else if (param_2 == 0x153) {
    puVar8 = (undefined4 *)param_3[2];
    puVar7 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar7 - (long)puVar8 < 4) {
      uVar15 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar7 = puVar8 + 1;
      uVar15 = *puVar8;
    }
    param_3[2] = (long)puVar7;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x90) = uVar15;
  }
  else if (param_2 == 0x154) {
    puVar8 = (undefined4 *)param_3[2];
    puVar7 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar7 - (long)puVar8 < 4) {
      uVar15 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar7 = puVar8 + 1;
      uVar15 = *puVar8;
    }
    param_3[2] = (long)puVar7;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x94) = uVar15;
  }
LAB_003ea340:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ea368  FUN_003ea368 =====

void FUN_003ea368(void)

{
  return;
}


// ===== 003ea36c  FUN_003ea36c =====

void FUN_003ea36c(void)

{
  return;
}


// ===== 003ea370  FUN_003ea370 =====

void FUN_003ea370(void)

{
  return;
}


// ===== 003ea374  FUN_003ea374 =====

void FUN_003ea374(void)

{
  return;
}


// ===== 003ea378  rive::StateMachineLayer::~StateMachineLayer =====

/* rive::StateMachineLayer::~StateMachineLayer() */

void __thiscall rive::StateMachineLayer::~StateMachineLayer(StateMachineLayer *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x28);
  plVar1 = *(long **)(this + 0x30);
  *(undefined **)this = PTR_vtable_0067cf08 + 0x10;
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x28);
  }
  if (plVar2 != (long *)0x0) {
    *(long **)(this + 0x30) = plVar2;
    operator_delete(plVar2);
  }
  *(undefined ***)this = &PTR_FUN_006597e0;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


// ===== 003ea420  rive::StateMachineLayer::~StateMachineLayer =====

/* rive::StateMachineLayer::~StateMachineLayer() */

void __thiscall rive::StateMachineLayer::~StateMachineLayer(StateMachineLayer *this)

{
  ~StateMachineLayer(this);
  operator_delete(this);
  return;
}


// ===== 003ea444  FUN_003ea444 =====

undefined8 FUN_003ea444(void)

{
  return 0x39;
}


// ===== 003ea44c  FUN_003ea44c =====

bool FUN_003ea44c(undefined8 param_1,short param_2)

{
  return param_2 == 0x39 || param_2 == 0x36;
}


// ===== 003ea464  rive::StateMachineLayer::onAddedDirty =====

/* rive::StateMachineLayer::onAddedDirty(rive::CoreContext*) */

ulong __thiscall rive::StateMachineLayer::onAddedDirty(StateMachineLayer *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  short sVar2;
  ulong uVar3;
  uint uVar4;
  StateMachineLayer *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(this + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar7 != puVar1) {
    do {
      plVar6 = (long *)*puVar7;
      uVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,param_1);
      if ((uVar3 & 0xff) != 0) {
        return uVar3;
      }
      sVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
      pSVar5 = this + 0x40;
      if (((sVar2 == 0x3e) || (pSVar5 = this + 0x50, sVar2 == 0x40)) ||
         (pSVar5 = this + 0x48, sVar2 == 0x3f)) {
        *(long **)pSVar5 = plVar6;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  uVar4 = 2;
  if ((*(long *)(this + 0x50) != 0 && *(long *)(this + 0x48) != 0) && *(long *)(this + 0x40) != 0) {
    uVar4 = 0;
  }
  return (ulong)uVar4;
}


// ===== 003ea540  rive::StateMachineLayer::onAddedClean =====

/* rive::StateMachineLayer::onAddedClean(rive::CoreContext*) */

ulong __thiscall rive::StateMachineLayer::onAddedClean(StateMachineLayer *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x40))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return uVar3;
}


// ===== 003ea59c  rive::StateMachineLayer::import =====

/* rive::StateMachineLayer::import(rive::ImportStack&) */

void __thiscall rive::StateMachineLayer::import(StateMachineLayer *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  StateMachineLayer *local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x35;
    }
    else {
      uVar7 = 0x35;
      if (uVar5 < 0x36) {
        uVar1 = (uint)uVar5 & 0xff;
        uVar2 = 0;
        if ((uVar5 & 0xff) != 0) {
          uVar2 = 0x35 / uVar1;
        }
        uVar7 = (ulong)(0x35 - uVar2 * uVar1);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x35) {
          if ((short)plVar8[2] == 0x35) {
            if (plVar8[3] != 0) {
              local_30 = this;
              StateMachine::addLayer(*(StateMachine **)(plVar8[3] + 8),&local_30);
              if (local_30 != (StateMachineLayer *)0x0) {
                (**(code **)(*(long *)local_30 + 8))();
              }
              uVar11 = 0;
              goto LAB_003ea6a4;
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar3 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  uVar11 = 1;
LAB_003ea6a4:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 003ea6c8  rive::StateMachineLayer::addState =====

/* rive::StateMachineLayer::addState(rive::LayerState*) */

void __thiscall rive::StateMachineLayer::addState(StateMachineLayer *this,LayerState *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = *(undefined8 **)(this + 0x30);
  if (puVar10 < *(undefined8 **)(this + 0x38)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_003ea808;
  }
  puVar9 = *(undefined8 **)(this + 0x28);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003ea82c();
LAB_003ea828:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x38) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_003ea828;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
  puVar13 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar10 - (long)puVar9) - 8;
    puVar11 = puVar10;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar10 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar11 = puVar10 + -uVar7;
      puVar10 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar16;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar10 = puVar9;
      if (uVar6 == uVar7) goto LAB_003ea7f4;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x28);
  }
LAB_003ea7f4:
  *(undefined8 **)(this + 0x28) = puVar4;
  *(undefined8 **)(this + 0x30) = puVar13;
  *(void **)(this + 0x38) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_003ea808:
  *(undefined8 **)(this + 0x30) = puVar13;
  return;
}


// ===== 003ea82c  FUN_003ea82c =====

void FUN_003ea82c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003ea840  rive::KeyFrameString::apply =====

/* rive::KeyFrameString::apply(rive::Core*, int, float) */

void rive::KeyFrameString::apply(Core *param_1,int param_2,float param_3)

{
  long lVar1;
  undefined4 in_w2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[0x28] & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    local_50 = *(ulong *)(param_1 + 0x28);
    local_40 = *(void **)(param_1 + 0x38);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,*(char **)(param_1 + 0x38),*(ulong *)(param_1 + 0x30));
  }
  FUN_00377e50(param_2,in_w2,&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ea8dc  rive::KeyFrameString::applyInterpolation =====

/* rive::KeyFrameString::applyInterpolation(rive::Core*, int, float, rive::KeyFrame const*, float,
   rive::LinearAnimationInstance const*) */

void rive::KeyFrameString::applyInterpolation
               (Core *param_1,int param_2,float param_3,KeyFrame *param_4,float param_5,
               LinearAnimationInstance *param_6)

{
  long lVar1;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[0x28] & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    local_50 = *(ulong *)(param_1 + 0x28);
    local_40 = *(void **)(param_1 + 0x38);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,*(char **)(param_1 + 0x38),*(ulong *)(param_1 + 0x30));
  }
  FUN_00377e50(param_2,(ulong)param_4 & 0xffffffff,&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ea978  FUN_003ea978 =====

void FUN_003ea978(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d360 + 0x10);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[7]);
  return;
}


// ===== 003ea99c  FUN_003ea99c =====

void FUN_003ea99c(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d360 + 0x10);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ea9e0  FUN_003ea9e0 =====

undefined8 FUN_003ea9e0(void)

{
  return 0x8e;
}


// ===== 003ea9e8  FUN_003ea9e8 =====

undefined8 FUN_003ea9e8(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 0x1d) && (param_2 != 0x8e)) && (param_2 != 0xaa)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003eaa10  FUN_003eaa10 =====

undefined8 FUN_003eaa10(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x45) {
    if (param_2 == 0x43) {
      uVar12 = 0;
      uVar6 = 0;
      pbVar8 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003eac04;
        }
        pbVar9 = pbVar8 + 1;
        bVar1 = *pbVar8;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar8 = pbVar9;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar9;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eac04:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xc) = (int)uVar6;
    }
    else {
      if (param_2 != 0x44) goto LAB_003eac2c;
      uVar12 = 0;
      uVar6 = 0;
      pbVar8 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003eabb0;
        }
        pbVar9 = pbVar8 + 1;
        bVar1 = *pbVar8;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar8 = pbVar9;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar9;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eabb0:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x14) = (int)uVar6;
    }
  }
  else if (param_2 == 0x45) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eac1c;
      }
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar8 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eac1c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x18) = (int)uVar6;
  }
  else {
    if (param_2 != 0x118) goto LAB_003eac2c;
    pcVar10 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eabcc;
      }
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 < '\0');
    param_3[2] = (long)pcVar11;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_003eabcc:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x30) = uStack_38;
    *(undefined8 *)(param_1 + 0x28) = local_40;
    *(undefined8 *)(param_1 + 0x38) = local_30;
  }
  uVar5 = 1;
LAB_003eac2c:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003eac54  FUN_003eac54 =====

void FUN_003eac54(void)

{
  return;
}


// ===== 003eac58  rive::ListenerNumberChange::validateInputType =====

/* rive::ListenerNumberChange::validateInputType(rive::StateMachineInput const*) const */

undefined8 __thiscall
rive::ListenerNumberChange::validateInputType(ListenerNumberChange *this,StateMachineInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (StateMachineInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003eac6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x38);
    return uVar1;
  }
  return 1;
}


// ===== 003eac78  rive::ListenerNumberChange::validateNestedInputType =====

/* rive::ListenerNumberChange::validateNestedInputType(rive::NestedInput const*) const */

undefined8 __thiscall
rive::ListenerNumberChange::validateNestedInputType(ListenerNumberChange *this,NestedInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (NestedInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003eac8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x7c);
    return uVar1;
  }
  return 1;
}


// ===== 003eac98  rive::ListenerNumberChange::perform =====

/* rive::ListenerNumberChange::perform(rive::StateMachineInstance*, rive::ListenerInvocation const&)
   const */

void rive::ListenerNumberChange::perform(StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 8)) {
    lVar1 = (**(code **)(*(long *)param_2 + 0x70))(param_2,*(undefined4 *)(param_1 + 0x10));
    if ((lVar1 != 0) && (*(float *)(lVar1 + 0x18) != *(float *)(param_1 + 0x18))) {
      *(float *)(lVar1 + 0x18) = *(float *)(param_1 + 0x18);
      *(undefined1 *)(*(long *)(lVar1 + 8) + 0x128) = 1;
    }
  }
  else {
    plVar2 = (long *)(**(code **)(**(long **)(param_2 + 0x10) + 0x348))
                               (*(long **)(param_2 + 0x10),*(int *)(param_1 + 0x14));
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ead24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xa8))(*(undefined4 *)(param_1 + 0x18));
      return;
    }
  }
  return;
}


// ===== 003ead34  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003ead38  FUN_003ead38 =====

undefined8 FUN_003ead38(void)

{
  return 0x76;
}


// ===== 003ead40  FUN_003ead40 =====

uint FUN_003ead40(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x74U & 0xffff) < 10) & 0x205U >> (ulong)(param_2 - 0x74U & 0x1f);
}


// ===== 003ead60  FUN_003ead60 =====

undefined4 FUN_003ead60(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  if (param_2 < 400) {
    if (param_2 != 0xe3) {
      if (param_2 != 0xe5) {
        return 0;
      }
      puVar5 = (undefined4 *)param_3[2];
      puVar4 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar4 - (long)puVar5 < 4) {
        uVar9 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar4 = puVar5 + 1;
        uVar9 = *puVar5;
      }
      param_3[2] = (long)puVar4;
      *(undefined4 *)(param_1 + 0x18) = uVar9;
      return 1;
    }
    uVar8 = 0;
    uVar3 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eaec8;
      }
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar6 = pbVar7;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar7;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eaec8:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x10) = (int)uVar3;
  }
  else if (param_2 == 400) {
    uVar8 = 0;
    uVar3 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eaee0;
      }
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar6 = pbVar7;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar7;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eaee0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  else {
    if (param_2 != 0x3d4) {
      return 0;
    }
    uVar8 = 0;
    uVar3 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eaeb0;
      }
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar6 = pbVar7;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar7;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eaeb0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return 1;
}


// ===== 003eaf14  FUN_003eaf14 =====

void FUN_003eaf14(void)

{
  return;
}


// ===== 003eaf18  rive::FocusActionTarget::perform =====

/* rive::FocusActionTarget::perform(rive::StateMachineInstance*, rive::ListenerInvocation const&)
   const */

void rive::FocusActionTarget::perform(StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  FocusData *pFVar5;
  
  plVar3 = (long *)(**(code **)(**(long **)(param_2 + 0x10) + 0x348))
                             (*(long **)(param_2 + 0x10),*(undefined4 *)(param_1 + 0x10));
  if ((plVar3 != (long *)0x0) && (uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,2), (uVar4 & 1) != 0)
     ) {
    puVar2 = (undefined8 *)plVar3[0x12];
    for (puVar1 = (undefined8 *)plVar3[0x11]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      pFVar5 = (FocusData *)*puVar1;
      uVar4 = (**(code **)(*(long *)pFVar5 + 0x18))(pFVar5,0x28d);
      if ((uVar4 & 1) != 0) {
        StateMachineInstance::setFocus((StateMachineInstance *)param_2,pFVar5);
        return;
      }
    }
  }
  return;
}


// ===== 003eafbc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003eafc0  FUN_003eafc0 =====

undefined8 FUN_003eafc0(void)

{
  return 0x28c;
}


// ===== 003eafc8  FUN_003eafc8 =====

undefined8 FUN_003eafc8(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 0x7d) && (param_2 != 0x28c)) && (param_2 != 0x29f)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003eaff0  FUN_003eaff0 =====

undefined8 FUN_003eaff0(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3d4) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eb0d0;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eb0d0:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x3b8) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003eb0b4;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar5;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eb0b4:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return 1;
}


// ===== 003eb0e4  FUN_003eb0e4 =====

void FUN_003eb0e4(void)

{
  return;
}


// ===== 003eb0e8  rive::CubicEaseInterpolator::transformValue =====

/* rive::CubicEaseInterpolator::transformValue(float, float, float) */

undefined4 __thiscall
rive::CubicEaseInterpolator::transformValue
          (CubicEaseInterpolator *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x58))(param_3);
  uVar1 = NEON_fmadd(param_2 - param_1,uVar1,param_1);
  return uVar1;
}


// ===== 003eb11c  rive::CubicEaseInterpolator::transform =====

/* rive::CubicEaseInterpolator::transform(float) const */

float __thiscall rive::CubicEaseInterpolator::transform(CubicEaseInterpolator *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar1 = (float)CubicInterpolatorSolver::getT((CubicInterpolatorSolver *)(this + 0x1c),param_1);
  fVar4 = *(float *)(this + 0x10);
  uVar2 = NEON_fmadd(*(undefined4 *)(this + 0x18),0xc0400000,0x3f800000);
  uVar2 = NEON_fmadd(fVar4,0x40400000,uVar2);
  uVar3 = NEON_fmadd(*(undefined4 *)(this + 0x18),0x40400000,fVar4 * -6.0);
  uVar2 = NEON_fmadd(uVar2,fVar1,uVar3);
  fVar4 = (float)NEON_fmadd(uVar2,fVar1,fVar4 * 3.0);
  return fVar4 * fVar1;
}


// ===== 003eb178  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003eb17c  FUN_003eb17c =====

undefined8 FUN_003eb17c(void)

{
  return 0x1c;
}


// ===== 003eb184  FUN_003eb184 =====

undefined8 FUN_003eb184(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 0x1c) && (param_2 != 0x8b)) && (param_2 != 0xaf)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003eb1ac  rive::NestedBool::applyValue =====

/* rive::NestedBool::applyValue() */

void __thiscall rive::NestedBool::applyValue(NestedBool *this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((((plVar3 != (long *)0x0) &&
       (uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0x5f), (uVar1 & 1) != 0)) &&
      (plVar3 = (long *)plVar3[0x15], plVar3 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(this + 0x88)), lVar2 != 0 &&
      (*(NestedBool *)(lVar2 + 0x18) != this[0x8c])))) {
    *(NestedBool *)(lVar2 + 0x18) = this[0x8c];
    *(undefined1 *)(*(long *)(lVar2 + 8) + 0x128) = 1;
  }
  return;
}


// ===== 003eb224  rive::NestedBool::nestedValue =====

/* rive::NestedBool::nestedValue(bool) */

void __thiscall rive::NestedBool::nestedValue(NestedBool *this,bool param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((((plVar3 != (long *)0x0) &&
       (uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0x5f), (uVar1 & 1) != 0)) &&
      (plVar3 = (long *)plVar3[0x15], plVar3 != (long *)0x0)) &&
     ((lVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(this + 0x88)), lVar2 != 0 &&
      ((*(char *)(lVar2 + 0x18) != '\0') != param_1 && (bool)*(char *)(lVar2 + 0x18) != param_1))))
  {
    *(bool *)(lVar2 + 0x18) = param_1;
    *(undefined1 *)(*(long *)(lVar2 + 8) + 0x128) = 1;
  }
  return;
}


// ===== 003eb2b4  rive::NestedBool::nestedValue =====

/* rive::NestedBool::nestedValue() const */

long * __thiscall rive::NestedBool::nestedValue(NestedBool *this)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 == (long *)0x0) ||
     (uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0x5f), (uVar1 & 1) == 0)) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)plVar2[0x15];
    if ((plVar2 != (long *)0x0) &&
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,*(undefined4 *)(this + 0x88)),
       plVar2 != (long *)0x0)) {
      plVar2 = (long *)(ulong)((char)plVar2[3] != '\0');
    }
  }
  return plVar2;
}


// ===== 003eb320  FUN_003eb320 =====

void FUN_003eb320(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 003eb38c  FUN_003eb38c =====

undefined8 FUN_003eb38c(void)

{
  return 0x7b;
}


// ===== 003eb394  FUN_003eb394 =====

undefined8 FUN_003eb394(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0x79)) && (param_2 != 0x7b)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003eb3bc  FUN_003eb3bc =====

undefined8 FUN_003eb3bc(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0xed) {
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003eb55c;
        }
        pcVar11 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_003eb55c:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      *(undefined8 *)(param_1 + 0x20) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_003eb5bc;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003eb540;
        }
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar10;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar10;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eb540:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0xed) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eb594;
      }
      pbVar10 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar10;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar10;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eb594:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  else {
    if (param_2 != 0xee) goto LAB_003eb5bc;
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0x8c) = *pcVar7 == '\x01';
    }
  }
  uVar5 = 1;
LAB_003eb5bc:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003eb5e4  FUN_003eb5e4 =====

void FUN_003eb5e4(void)

{
  return;
}


// ===== 003eb5e8  rive::KeyFrameDouble::apply =====

/* rive::KeyFrameDouble::apply(rive::Core*, int, float) */

void __thiscall
rive::KeyFrameDouble::apply(KeyFrameDouble *this,Core *param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x28);
  if (param_3 != 1.0) {
    uVar1 = FUN_003567b0(param_1,param_2);
    fVar2 = (float)NEON_fmadd(uVar1,1.0 - param_3,fVar2 * param_3);
  }
  FUN_003575a8(fVar2,param_1,param_2);
  return;
}


// ===== 003eb650  rive::KeyFrameDouble::applyInterpolation =====

/* rive::KeyFrameDouble::applyInterpolation(rive::Core*, int, float, rive::KeyFrame const*, float,
   rive::LinearAnimationInstance const*) */

void __thiscall
rive::KeyFrameDouble::applyInterpolation
          (KeyFrameDouble *this,Core *param_1,int param_2,float param_3,KeyFrame *param_4,
          float param_5,LinearAnimationInstance *param_6)

{
  ulong uVar1;
  ScriptedInterpolator *pSVar2;
  ScriptedInterpolator *pSVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  pSVar3 = *(ScriptedInterpolator **)(this + 0x20);
  fVar7 = (param_3 - *(float *)(this + 0x10)) /
          (*(float *)(param_4 + 0x10) - *(float *)(this + 0x10));
  if ((param_6 == (LinearAnimationInstance *)0x0) || (pSVar3 == (ScriptedInterpolator *)0x0)) {
    fVar4 = *(float *)(this + 0x28);
    fVar6 = *(float *)(param_4 + 0x28);
    if (pSVar3 == (ScriptedInterpolator *)0x0) {
      fVar7 = (float)NEON_fmadd(fVar6 - fVar4,fVar7,fVar4);
      goto LAB_003eb700;
    }
  }
  else {
    uVar1 = (**(code **)(*(long *)pSVar3 + 0x18))(pSVar3,0x3cc);
    if (((uVar1 & 1) != 0) &&
       (pSVar2 = (ScriptedInterpolator *)
                 LinearAnimationInstance::statefulInterpolator
                           (param_6,(InterpolatingKeyFrame *)this,pSVar3),
       pSVar2 != (ScriptedInterpolator *)0x0)) {
      pSVar3 = pSVar2;
    }
    fVar4 = *(float *)(this + 0x28);
    fVar6 = *(float *)(param_4 + 0x28);
  }
  fVar7 = (float)(**(code **)(*(long *)pSVar3 + 0x50))(fVar4,fVar6,fVar7,pSVar3);
LAB_003eb700:
  if (param_5 != 1.0) {
    uVar5 = FUN_003567b0(param_1,param_2);
    fVar7 = (float)NEON_fmadd(uVar5,1.0 - param_5,fVar7 * param_5);
  }
  FUN_003575a8(fVar7,param_1,param_2);
  return;
}


// ===== 003eb758  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003eb75c  FUN_003eb75c =====

undefined8 FUN_003eb75c(void)

{
  return 0x1e;
}


// ===== 003eb764  FUN_003eb764 =====

bool FUN_003eb764(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x1d < 2 || (param_2 & 0xffff) == 0xaa;
}


// ===== 003eb784  FUN_003eb784 =====

undefined4 FUN_003eb784(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  if (param_2 < 0x45) {
    if (param_2 == 0x43) {
      uVar8 = 0;
      uVar3 = 0;
      pbVar6 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003eb8ec;
        }
        pbVar7 = pbVar6 + 1;
        bVar1 = *pbVar6;
        uVar2 = uVar8 & 0x3f;
        uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar6 = pbVar7;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar7;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eb8ec:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xc) = (int)uVar3;
    }
    else {
      if (param_2 != 0x44) {
        return 0;
      }
      uVar8 = 0;
      uVar3 = 0;
      pbVar6 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003eb8d4;
        }
        pbVar7 = pbVar6 + 1;
        bVar1 = *pbVar6;
        uVar2 = uVar8 & 0x3f;
        uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar6 = pbVar7;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar7;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eb8d4:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x14) = (int)uVar3;
    }
  }
  else {
    if (param_2 != 0x45) {
      if (param_2 != 0x46) {
        return 0;
      }
      puVar5 = (undefined4 *)param_3[2];
      puVar4 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar4 - (long)puVar5 < 4) {
        uVar9 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar4 = puVar5 + 1;
        uVar9 = *puVar5;
      }
      param_3[2] = (long)puVar4;
      *(undefined4 *)(param_1 + 0x28) = uVar9;
      return 1;
    }
    uVar8 = 0;
    uVar3 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003eb904;
      }
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar2 = uVar8 & 0x3f;
      uVar8 = (ulong)(((uint)uVar8 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar6 = pbVar7;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar7;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003eb904:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x18) = (int)uVar3;
  }
  return 1;
}


// ===== 003eb938  FUN_003eb938 =====

void FUN_003eb938(void)

{
  return;
}


// ===== 003eb93c  rive::KeyFrameColor::apply =====

/* rive::KeyFrameColor::apply(rive::Core*, int, float) */

void __thiscall
rive::KeyFrameColor::apply(KeyFrameColor *this,Core *param_1,int param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar1 = *(uint *)(this + 0x28);
  if (param_3 == 1.0) {
    FUN_00358888(param_1,param_2);
    return;
  }
  uVar2 = 0;
  if (param_2 < 0x22b) {
    if ((param_2 != 0x25) && (param_2 != 0x26)) {
      if (param_2 == 0x58) {
        uVar2 = *(uint *)(param_1 + 0x28);
      }
      goto LAB_003eb9c8;
    }
LAB_003eb9b4:
    uVar2 = *(uint *)(param_1 + 0x88);
  }
  else {
    if (param_2 < 0x28b) {
      if (param_2 == 0x22b) {
        uVar2 = *(uint *)(param_1 + 0x110);
        goto LAB_003eb9c8;
      }
      if (param_2 != 0x27e) goto LAB_003eb9c8;
    }
    else if (param_2 != 0x28b) {
      if (param_2 != 0x344) goto LAB_003eb9c8;
      goto LAB_003eb9b4;
    }
    uVar2 = *(uint *)(param_1 + 0xc);
  }
LAB_003eb9c8:
  fVar6 = 1.0 - param_3;
  uVar4 = NEON_fmadd((float)(uVar2 >> 0x18),fVar6,(float)(uVar1 >> 0x18) * param_3);
  uVar7 = NEON_fmadd((float)(uVar2 >> 0x10 & 0xff),fVar6,(float)(uVar1 >> 0x10 & 0xff) * param_3);
  fVar5 = (float)NEON_fminnm(uVar4,0x437f0000);
  uVar9 = NEON_fmadd((float)(uVar2 >> 8 & 0xff),fVar6,(float)(uVar1 >> 8 & 0xff) * param_3);
  uVar4 = NEON_fmadd((float)(uVar2 & 0xff),fVar6,(float)(uVar1 & 0xff) * param_3);
  fVar6 = (float)NEON_fminnm(uVar7,0x437f0000);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar8 = (float)NEON_fminnm(uVar9,0x437f0000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar3 = (float)NEON_fminnm(uVar4,0x437f0000);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_00358888(param_1,param_2,
               (int)(long)fVar5 << 0x18 | ((uint)(long)fVar6 & 0xff) << 0x10 |
               ((uint)(long)fVar8 & 0xff) << 8 | (uint)(long)fVar3 & 0xff);
  return;
}


// ===== 003eba84  rive::KeyFrameColor::applyInterpolation =====

/* rive::KeyFrameColor::applyInterpolation(rive::Core*, int, float, rive::KeyFrame const*, float,
   rive::LinearAnimationInstance const*) */

void __thiscall
rive::KeyFrameColor::applyInterpolation
          (KeyFrameColor *this,Core *param_1,int param_2,float param_3,KeyFrame *param_4,
          float param_5,LinearAnimationInstance *param_6)

{
  uint uVar1;
  ulong uVar2;
  ScriptedInterpolator *pSVar3;
  uint uVar4;
  ScriptedInterpolator *pSVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  
  pSVar5 = *(ScriptedInterpolator **)(this + 0x20);
  fVar6 = (param_3 - *(float *)(this + 0x10)) /
          (*(float *)(param_4 + 0x10) - *(float *)(this + 0x10));
  if ((param_6 == (LinearAnimationInstance *)0x0) || (pSVar5 == (ScriptedInterpolator *)0x0)) {
    if (pSVar5 != (ScriptedInterpolator *)0x0) goto LAB_003ebb14;
  }
  else {
    uVar2 = (**(code **)(*(long *)pSVar5 + 0x18))(pSVar5,0x3cc);
    if (((uVar2 & 1) != 0) &&
       (pSVar3 = (ScriptedInterpolator *)
                 LinearAnimationInstance::statefulInterpolator
                           (param_6,(InterpolatingKeyFrame *)this,pSVar5),
       pSVar3 != (ScriptedInterpolator *)0x0)) {
      pSVar5 = pSVar3;
    }
LAB_003ebb14:
    fVar6 = (float)(**(code **)(*(long *)pSVar5 + 0x58))(fVar6,pSVar5);
  }
  uVar4 = *(uint *)(param_4 + 0x28);
  uVar1 = *(uint *)(this + 0x28);
  fVar14 = 1.0 - fVar6;
  uVar9 = NEON_fmadd((float)(uVar1 >> 0x18),fVar14,fVar6 * (float)(uVar4 >> 0x18));
  uVar11 = NEON_fmadd((float)(uVar1 >> 0x10 & 0xff),fVar14,fVar6 * (float)(uVar4 >> 0x10 & 0xff));
  uVar13 = NEON_fmadd((float)(uVar1 & 0xff),fVar14,fVar6 * (float)(uVar4 & 0xff));
  uVar7 = NEON_fmadd((float)(uVar1 >> 8 & 0xff),fVar14,fVar6 * (float)(uVar4 >> 8 & 0xff));
  fVar10 = (float)NEON_fminnm(uVar9,0x437f0000);
  fVar12 = (float)NEON_fminnm(uVar11,0x437f0000);
  fVar6 = (float)NEON_fminnm(uVar13,0x437f0000);
  fVar14 = (float)NEON_fminnm(uVar7,0x437f0000);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (param_5 == 1.0) {
    uVar4 = (uint)(long)fVar10 << 0x18 | ((uint)(long)fVar12 & 0xff) << 0x10 |
            ((uint)(long)fVar14 & 0xff) << 8 | (uint)(long)fVar6 & 0xff;
    goto LAB_003ebd08;
  }
  uVar4 = 0;
  if (param_2 < 0x22b) {
    if ((param_2 == 0x25) || (param_2 == 0x26)) {
LAB_003ebc48:
      uVar4 = *(uint *)(param_1 + 0x88);
    }
    else if (param_2 == 0x58) {
      uVar4 = *(uint *)(param_1 + 0x28);
    }
  }
  else if (param_2 < 0x28b) {
    if (param_2 == 0x22b) {
      uVar4 = *(uint *)(param_1 + 0x110);
    }
    else if (param_2 == 0x27e) goto LAB_003ebc50;
  }
  else if (param_2 == 0x28b) {
LAB_003ebc50:
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  else if (param_2 == 0x344) goto LAB_003ebc48;
  fVar8 = 1.0 - param_5;
  uVar7 = NEON_fmadd((float)(uVar4 >> 0x18),fVar8,(float)((uint)(long)fVar10 & 0xff) * param_5);
  uVar9 = NEON_fmadd((float)(uVar4 >> 0x10 & 0xff),fVar8,
                     (float)((uint)(long)fVar12 & 0xff) * param_5);
  fVar10 = (float)NEON_fminnm(uVar7,0x437f0000);
  uVar11 = NEON_fmadd((float)(uVar4 >> 8 & 0xff),fVar8,(float)((uint)(long)fVar14 & 0xff) * param_5)
  ;
  uVar7 = NEON_fmadd((float)(uVar4 & 0xff),fVar8,(float)((uint)(long)fVar6 & 0xff) * param_5);
  fVar6 = (float)NEON_fminnm(uVar9,0x437f0000);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar14 = (float)NEON_fminnm(uVar11,0x437f0000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar12 = (float)NEON_fminnm(uVar7,0x437f0000);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar4 = (int)(long)fVar10 << 0x18 | ((uint)(long)fVar6 & 0xff) << 0x10 |
          ((uint)(long)fVar14 & 0xff) << 8 | (uint)(long)fVar12 & 0xff;
LAB_003ebd08:
  FUN_00358888(param_1,param_2,uVar4);
  return;
}


// ===== 003ebd28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003ebd2c  FUN_003ebd2c =====

undefined8 FUN_003ebd2c(void)

{
  return 0x25;
}


// ===== 003ebd34  FUN_003ebd34 =====

undefined8 FUN_003ebd34(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 0x1d) && (param_2 != 0x25)) && (param_2 != 0xaa)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003ebd5c  FUN_003ebd5c =====

undefined4 FUN_003ebd5c(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  if (param_2 < 0x45) {
    if (param_2 == 0x43) {
      uVar9 = 0;
      uVar3 = 0;
      pbVar6 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003ebec4;
        }
        pbVar7 = pbVar6 + 1;
        bVar1 = *pbVar6;
        uVar2 = uVar9 & 0x3f;
        uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar6 = pbVar7;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar7;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003ebec4:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xc) = (int)uVar3;
    }
    else {
      if (param_2 != 0x44) {
        return 0;
      }
      uVar9 = 0;
      uVar3 = 0;
      pbVar6 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003ebeac;
        }
        pbVar7 = pbVar6 + 1;
        bVar1 = *pbVar6;
        uVar2 = uVar9 & 0x3f;
        uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
        uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
        pbVar6 = pbVar7;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar7;
      if (uVar3 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003ebeac:
        uVar3 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x14) = (int)uVar3;
    }
  }
  else {
    if (param_2 != 0x45) {
      if (param_2 != 0x58) {
        return 0;
      }
      puVar8 = (undefined4 *)param_3[2];
      puVar4 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar4 - (long)puVar8 < 4) {
        uVar5 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar4 = puVar8 + 1;
        uVar5 = *puVar8;
      }
      param_3[2] = (long)puVar4;
      *(undefined4 *)(param_1 + 0x28) = uVar5;
      return 1;
    }
    uVar9 = 0;
    uVar3 = 0;
    pbVar6 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar6) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003ebedc;
      }
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar2 = uVar9 & 0x3f;
      uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar6 = pbVar7;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar7;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003ebedc:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x18) = (int)uVar3;
  }
  return 1;
}


// ===== 003ebf10  FUN_003ebf10 =====

void FUN_003ebf10(void)

{
  return;
}


// ===== 003ebf14  rive::FocusActionTraversal::perform =====

/* rive::FocusActionTraversal::perform(rive::StateMachineInstance*, rive::ListenerInvocation const&)
   const */

void rive::FocusActionTraversal::perform(StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  FocusManager *this;
  int iVar1;
  FocusNode *pFVar2;
  bool bVar3;
  
  if (param_2 == (ListenerInvocation *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  this = (FocusManager *)(param_2 + 0x2c8);
  if (*(FocusManager **)(param_2 + 0x2e8) != (FocusManager *)0x0) {
    this = *(FocusManager **)(param_2 + 0x2e8);
  }
  if (iVar1 < 3) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        FocusManager::dropFocusIfFocusTargetHidden(this);
        pFVar2 = *(FocusNode **)this;
        bVar3 = false;
        goto LAB_003ebfc8;
      }
      if (iVar1 == 2) {
        FocusManager::focusUp(this);
        return;
      }
    }
  }
  else {
    if (iVar1 == 3) {
      FocusManager::focusDown(this);
      return;
    }
    if (iVar1 == 4) {
      FocusManager::focusLeft(this);
      return;
    }
    if (iVar1 == 5) {
      FocusManager::focusRight(this);
      return;
    }
  }
  FocusManager::dropFocusIfFocusTargetHidden(this);
  pFVar2 = *(FocusNode **)this;
  bVar3 = true;
LAB_003ebfc8:
  FocusManager::findNextFocusable(this,pFVar2,bVar3);
  return;
}


// ===== 003ebfe0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003ebfe4  FUN_003ebfe4 =====

undefined8 FUN_003ebfe4(void)

{
  return 0x2a0;
}


// ===== 003ebfec  FUN_003ebfec =====

bool FUN_003ebfec(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0x29f < 2 || (param_2 & 0xffff) == 0x7d;
}


// ===== 003ec00c  FUN_003ec00c =====

undefined8 FUN_003ec00c(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x3d4) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003ec0ec;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003ec0ec:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    return 1;
  }
  if (param_2 != 0x3f3) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_003ec0d0;
    }
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar5;
  if (uVar3 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003ec0d0:
    uVar3 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return 1;
}


// ===== 003ec100  FUN_003ec100 =====

void FUN_003ec100(void)

{
  return;
}


// ===== 003ec104  rive::ListenerTriggerChange::validateInputType =====

/* rive::ListenerTriggerChange::validateInputType(rive::StateMachineInput const*) const */

undefined8 __thiscall
rive::ListenerTriggerChange::validateInputType
          (ListenerTriggerChange *this,StateMachineInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (StateMachineInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ec118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x3a);
    return uVar1;
  }
  return 1;
}


// ===== 003ec124  rive::ListenerTriggerChange::validateNestedInputType =====

/* rive::ListenerTriggerChange::validateNestedInputType(rive::NestedInput const*) const */

undefined8 __thiscall
rive::ListenerTriggerChange::validateNestedInputType
          (ListenerTriggerChange *this,NestedInput *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (NestedInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ec138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x7a);
    return uVar1;
  }
  return 1;
}


// ===== 003ec144  rive::ListenerTriggerChange::perform =====

/* rive::ListenerTriggerChange::perform(rive::StateMachineInstance*, rive::ListenerInvocation
   const&) const */

void rive::ListenerTriggerChange::perform(StateMachineInstance *param_1,ListenerInvocation *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ListenerInvocation *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 8)) {
    lVar2 = (**(code **)(*(long *)param_2 + 0x70))(param_2,*(undefined4 *)(param_1 + 0x10));
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x30) == '\0')) {
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined1 *)(*(long *)(lVar2 + 8) + 0x128) = 1;
    }
  }
  else {
    plVar3 = (long *)(**(code **)(**(long **)(param_2 + 0x10) + 0x348))
                               (*(long **)(param_2 + 0x10),*(int *)(param_1 + 0x14));
    if (plVar3 != (long *)0x0) {
      local_38 = param_2 + 8;
      local_30 = 0;
      (**(code **)(*plVar3 + 0xa0))(plVar3,&local_38);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ec200  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003ec204  FUN_003ec204 =====

undefined8 FUN_003ec204(void)

{
  return 0x73;
}


// ===== 003ec20c  FUN_003ec20c =====

uint FUN_003ec20c(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x73U & 0xffff) < 0xb) & 0x403U >> (ulong)(param_2 - 0x73U & 0x1f);
}


// ===== 003ec22c  rive::BlendStateDirect::makeInstance =====

/* rive::BlendStateDirect::makeInstance(rive::ArtboardInstance*) const */

void rive::BlendStateDirect::makeInstance(ArtboardInstance *param_1)

{
  BlendStateDirectInstance *this;
  ArtboardInstance *in_x1;
  undefined8 *in_x8;
  
  this = (BlendStateDirectInstance *)operator_new(0x30);
  BlendStateDirectInstance::BlendStateDirectInstance(this,(BlendStateDirect *)param_1,in_x1);
  *in_x8 = this;
  return;
}


// ===== 003ec274  FUN_003ec274 =====

void FUN_003ec274(LayerState *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x60);
  plVar1 = *(long **)(param_1 + 0x68);
  *(undefined **)param_1 = PTR_vtable_0067cd18 + 0x10;
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(param_1 + 0x60);
  }
  if (plVar2 != (long *)0x0) {
    *(long **)(param_1 + 0x68) = plVar2;
    operator_delete(plVar2);
  }
  rive::LayerState::~LayerState(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003ec300  FUN_003ec300 =====

undefined8 FUN_003ec300(void)

{
  return 0x49;
}


// ===== 003ec308  FUN_003ec308 =====

uint FUN_003ec308(undefined8 param_1,int param_2)

{
  return (uint)((param_2 - 0x3cU & 0xffff) < 0xe) & 0x3041U >> (ulong)(param_2 - 0x3cU & 0x1f);
}


// ===== 003ec328  rive::BlendStateDirectInstance::BlendStateDirectInstance =====

/* rive::BlendStateDirectInstance::BlendStateDirectInstance(rive::BlendStateDirect const*,
   rive::ArtboardInstance*) */

void __thiscall
rive::BlendStateDirectInstance::BlendStateDirectInstance
          (BlendStateDirectInstance *this,BlendStateDirect *param_1,ArtboardInstance *param_2)

{
  undefined8 *puVar1;
  LinearAnimation *pLVar2;
  undefined *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  void *pvVar20;
  long *plVar21;
  LinearAnimation *pLVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  LinearAnimationInstance aLStack_f8 [128];
  undefined4 local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  plVar21 = *(long **)(param_1 + 0x60);
  plVar19 = *(long **)(param_1 + 0x68);
  *(undefined ***)this = &PTR_FUN_00655f20;
  *(BlendStateDirect **)(this + 8) = param_1;
  this[0x28] = (BlendStateDirectInstance)0x1;
  pLVar22 = (LinearAnimation *)PTR_m_EmptyAnimation_0067cd00;
  puVar11 = PTR_m_EmptyAnimation_0067cd00;
  if ((long)plVar19 - (long)plVar21 != 0) {
    uVar8 = (long)plVar19 - (long)plVar21 >> 3;
    if (0x1c71c71c71c71c7 < uVar8) {
LAB_003ec7ec:
      FUN_003ecde8();
LAB_003ec7f0:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    uVar8 = uVar8 * 0x90;
    pvVar7 = operator_new(uVar8);
    *(void **)(this + 0x10) = pvVar7;
    *(void **)(this + 0x18) = pvVar7;
    *(void **)(this + 0x20) = (void *)((long)pvVar7 + uVar8);
    plVar21 = *(long **)(param_1 + 0x60);
    plVar19 = *(long **)(param_1 + 0x68);
    pLVar22 = (LinearAnimation *)PTR_m_EmptyAnimation_0067cd00;
    puVar11 = PTR_m_EmptyAnimation_0067cd00;
  }
  for (; PTR_m_EmptyAnimation_0067cd00 = puVar11, plVar21 != plVar19; plVar21 = plVar21 + 1) {
    lVar9 = *plVar21;
    pLVar2 = pLVar22;
    if (*(LinearAnimation **)(lVar9 + 0x10) != (LinearAnimation *)0x0) {
      pLVar2 = *(LinearAnimation **)(lVar9 + 0x10);
    }
    LinearAnimationInstance::LinearAnimationInstance(aLStack_f8,pLVar2,param_2,1.0);
    plVar17 = *(long **)(this + 0x18);
    local_78 = 0;
    if (plVar17 < *(long **)(this + 0x20)) {
      *plVar17 = lVar9;
      LinearAnimationInstance::LinearAnimationInstance
                ((LinearAnimationInstance *)(plVar17 + 1),aLStack_f8);
      *(undefined4 *)(plVar17 + 0x11) = local_78;
      plVar17 = plVar17 + 0x12;
    }
    else {
      lVar12 = *(long *)(this + 0x10);
      lVar10 = (long)plVar17 - lVar12 >> 4;
      uVar8 = lVar10 * -0x71c71c71c71c71c7 + 1;
      if (0x1c71c71c71c71c7 < uVar8) goto LAB_003ec7ec;
      lVar12 = (long)*(long **)(this + 0x20) - lVar12 >> 4;
      uVar13 = lVar12 * 0x1c71c71c71c71c72;
      if (uVar13 < uVar8 || uVar13 - uVar8 == 0) {
        uVar13 = uVar8;
      }
      if (0xe38e38e38e38e2 < (ulong)(lVar12 * -0x71c71c71c71c71c7)) {
        uVar13 = 0x1c71c71c71c71c7;
      }
      if (uVar13 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        if (0x1c71c71c71c71c7 < uVar13) goto LAB_003ec7f0;
        pvVar7 = operator_new(uVar13 * 0x90);
      }
      plVar24 = (long *)((long)pvVar7 + lVar10 * 0x10);
      pvVar7 = (void *)((long)pvVar7 + uVar13 * 0x90);
      *plVar24 = lVar9;
      LinearAnimationInstance::LinearAnimationInstance
                ((LinearAnimationInstance *)(plVar24 + 1),aLStack_f8);
      pvVar20 = *(void **)(this + 0x10);
      pvVar4 = *(void **)(this + 0x18);
      plVar17 = plVar24 + 0x12;
      *(undefined4 *)(plVar24 + 0x11) = local_78;
      if (pvVar4 == pvVar20) {
        *(long **)(this + 0x10) = plVar24;
        *(long **)(this + 0x18) = plVar17;
        *(void **)(this + 0x20) = pvVar7;
        pLVar22 = (LinearAnimation *)PTR_m_EmptyAnimation_0067cd00;
      }
      else {
        lVar9 = 0;
        do {
          *(undefined8 *)((long)plVar24 + lVar9 + -0x90) =
               *(undefined8 *)((long)pvVar4 + lVar9 + -0x90);
          LinearAnimationInstance::LinearAnimationInstance
                    ((LinearAnimationInstance *)((long)plVar24 + lVar9 + -0x88),
                     (LinearAnimationInstance *)((long)pvVar4 + lVar9 + -0x88));
          lVar10 = lVar9 + -0x90;
          *(undefined4 *)((long)plVar24 + lVar9 + -8) = *(undefined4 *)((long)pvVar4 + lVar9 + -8);
          lVar9 = lVar10;
        } while ((void *)((long)pvVar4 + lVar10) != pvVar20);
        pvVar4 = *(void **)(this + 0x10);
        pvVar20 = *(void **)(this + 0x18);
        *(long *)(this + 0x10) = (long)plVar24 + lVar10;
        *(long **)(this + 0x18) = plVar17;
        *(void **)(this + 0x20) = pvVar7;
        pLVar22 = (LinearAnimation *)PTR_m_EmptyAnimation_0067cd00;
        for (; pvVar20 != pvVar4; pvVar20 = (void *)((long)pvVar20 + -0x90)) {
          LinearAnimationInstance::~LinearAnimationInstance
                    ((LinearAnimationInstance *)((long)pvVar20 + -0x88));
        }
      }
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    *(long **)(this + 0x18) = plVar17;
    LinearAnimationInstance::~LinearAnimationInstance(aLStack_f8);
    puVar11 = PTR_m_EmptyAnimation_0067cd00;
  }
  if (((byte)param_1[0x40] >> 1 & 1) != 0) {
    plVar21 = *(long **)(param_1 + 0x60);
    plVar19 = *(long **)(param_1 + 0x68);
    if (plVar21 != plVar19) {
      puVar25 = (undefined8 *)0x0;
      puVar23 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0x0;
      do {
        puVar3 = puVar11;
        if (*(undefined **)(*plVar21 + 0x10) != (undefined *)0x0) {
          puVar3 = *(undefined **)(*plVar21 + 0x10);
        }
        if (puVar23 < puVar25) {
          *puVar23 = puVar3;
          puVar16 = puVar18;
          puVar1 = puVar23;
        }
        else {
          lVar9 = (long)puVar23 - (long)puVar18;
          uVar8 = (lVar9 >> 3) + 1;
          if (uVar8 >> 0x3d != 0) {
            FUN_00355e68();
            goto LAB_003ec7f8;
          }
          uVar13 = (long)puVar25 - (long)puVar18 >> 2;
          if (uVar13 <= uVar8) {
            uVar13 = uVar8;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar25 - (long)puVar18)) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar13 >> 0x3d != 0) goto LAB_003ec7f0;
            pvVar7 = operator_new(uVar13 << 3);
          }
          puVar1 = (undefined8 *)((long)pvVar7 + (lVar9 >> 3) * 8);
          *puVar1 = puVar3;
          puVar16 = puVar1;
          if ((long)puVar23 - (long)puVar18 != 0) {
            uVar8 = ((long)puVar23 - (long)puVar18) - 8;
            if ((((0x147 < uVar8) &&
                 (uVar14 = (long)pvVar7 + lVar9 + -8,
                 uVar14 - (uVar8 & 0xfffffffffffffff8) <= uVar14)) &&
                ((undefined8 *)((long)(puVar23 + -1) - (uVar8 & 0xfffffffffffffff8)) <= puVar23 + -1
                )) && (0x1f < (ulong)((long)puVar23 + (-lVar9 - (long)pvVar7)))) {
              puVar25 = puVar1 + -2;
              puVar16 = puVar23 + -2;
              uVar8 = (uVar8 >> 3) + 1;
              uVar15 = uVar8 & 0x3ffffffffffffffc;
              puVar23 = puVar23 + -uVar15;
              uVar14 = uVar15;
              do {
                puVar6 = puVar16 + -1;
                uVar28 = puVar16[-2];
                uVar27 = puVar16[1];
                uVar26 = *puVar16;
                uVar14 = uVar14 - 4;
                puVar16 = puVar16 + -4;
                puVar25[-1] = *puVar6;
                puVar25[-2] = uVar28;
                puVar25[1] = uVar27;
                *puVar25 = uVar26;
                puVar25 = puVar25 + -4;
              } while (uVar14 != 0);
              puVar16 = puVar1 + -uVar15;
              if (uVar8 == uVar15) goto LAB_003ec6e0;
            }
            do {
              puVar23 = puVar23 + -1;
              puVar16 = puVar16 + -1;
              *puVar16 = *puVar23;
            } while (puVar23 != puVar18);
          }
LAB_003ec6e0:
          puVar25 = (undefined8 *)((long)pvVar7 + uVar13 * 8);
          puVar11 = PTR_m_EmptyAnimation_0067cd00;
          if (puVar18 != (undefined8 *)0x0) {
            operator_delete(puVar18);
            puVar11 = PTR_m_EmptyAnimation_0067cd00;
          }
        }
        puVar23 = puVar1 + 1;
        plVar21 = plVar21 + 1;
        puVar18 = puVar16;
      } while (plVar21 != plVar19);
      if (puVar16 != (undefined8 *)0x0) {
        operator_delete(puVar16);
      }
    }
  }
  *(undefined **)this = PTR_vtable_0067cd40 + 0x10;
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
LAB_003ec7f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003ec7fc  FUN_003ec7fc =====

void FUN_003ec7fc(undefined8 *param_1)

{
  LinearAnimationInstance *this;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00655f20;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        this = (LinearAnimationInstance *)((long)pvVar2 + -0x88);
        pvVar2 = (void *)((long)pvVar2 + -0x90);
        rive::LinearAnimationInstance::~LinearAnimationInstance(this);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar3;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 003ec874  FUN_003ec874 =====

void FUN_003ec874(undefined8 *param_1)

{
  LinearAnimationInstance *this;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00655f20;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        this = (LinearAnimationInstance *)((long)pvVar2 + -0x88);
        pvVar2 = (void *)((long)pvVar2 + -0x90);
        rive::LinearAnimationInstance::~LinearAnimationInstance(this);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar3;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 003ec8e4  rive::BlendStateDirectInstance::advance =====

/* rive::BlendStateDirectInstance::advance(float, rive::StateMachineInstance*) */

void __thiscall
rive::BlendStateDirectInstance::advance
          (BlendStateDirectInstance *this,float param_1,StateMachineInstance *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined2 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  
  lVar7 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 0x18);
  if (lVar7 != lVar3) {
    do {
      if (*(int *)(lVar7 + 100) == -1) {
        if (*(int *)(*(long *)(lVar7 + 0x40) + 0x34) == 0) goto LAB_003ec958;
LAB_003ec91c:
        LinearAnimationInstance::advance
                  ((LinearAnimationInstance *)(lVar7 + 8),param_1,(KeyedCallbackReporter *)param_2);
      }
      else {
        if (*(int *)(lVar7 + 100) != 0) goto LAB_003ec91c;
LAB_003ec958:
        lVar5 = *(long *)(lVar7 + 0x40);
        fVar14 = *(float *)(lVar7 + 0x5c) * *(float *)(lVar5 + 0x30);
        if (fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) {
          puVar1 = (undefined4 *)(lVar5 + 0x2c);
          if (*(char *)(lVar5 + 0x40) != '\0') {
            puVar1 = (undefined4 *)(lVar5 + 0x3c);
          }
          fVar18 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x28));
          fVar17 = (float)NEON_ucvtf(*puVar1);
          if (*(float *)(lVar7 + 0x48) < fVar17 / fVar18) goto LAB_003ec91c;
        }
        if (fVar14 < 0.0) {
          fVar17 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x38));
          fVar18 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x28));
          fVar14 = 0.0;
          if (*(char *)(lVar5 + 0x40) != '\0') {
            fVar14 = fVar17;
          }
          fVar14 = fVar14 / fVar18;
          fVar17 = *(float *)(lVar7 + 0x48);
          if (fVar17 != fVar14 && fVar17 < fVar14 == (NAN(fVar17) || NAN(fVar14)))
          goto LAB_003ec91c;
        }
      }
      lVar7 = lVar7 + 0x90;
    } while (lVar7 != lVar3);
    plVar4 = *(long **)(this + 0x18);
    for (plVar2 = *(long **)(this + 0x10); plVar2 != plVar4; plVar2 = plVar2 + 0x12) {
      lVar7 = *plVar2;
      if (*(int *)(lVar7 + 0x20) == 2) {
        uVar8 = *(ulong *)(lVar7 + 0x28);
        if (uVar8 != 0) {
          uVar10 = *(ulong *)(param_2 + 0x200);
          uVar9 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
          uVar16 = NEON_cnt(uVar10,1);
          uVar13 = NEON_uaddlv(uVar16,1);
          uVar9 = (uVar8 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
          uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
          if ((uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar13) < 2) {
            uVar12 = uVar10 - 1 & uVar9;
          }
          else {
            uVar12 = uVar9;
            if (uVar10 <= uVar9) {
              uVar12 = 0;
              if (uVar10 != 0) {
                uVar12 = uVar9 / uVar10;
              }
              uVar12 = uVar9 - uVar12 * uVar10;
            }
          }
          plVar11 = *(long **)(*(long *)(param_2 + 0x1f8) + uVar12 * 8);
          do {
            do {
              plVar11 = (long *)*plVar11;
            } while (uVar9 - plVar11[1] != 0);
          } while (plVar11[2] != uVar8);
          plVar11 = (long *)plVar11[3];
          uVar8 = (**(code **)(*plVar11 + 0x18))(plVar11,0x1d9);
          if ((uVar8 & 1) != 0) {
            pfVar6 = (float *)((long)plVar11 + 0xc);
            goto LAB_003eca0c;
          }
        }
      }
      else {
        if (*(int *)(lVar7 + 0x20) == 1) {
          pfVar6 = (float *)(lVar7 + 0x1c);
        }
        else {
          lVar7 = (**(code **)(*(long *)param_2 + 0x70))(param_2,*(undefined4 *)(lVar7 + 0x18));
          pfVar6 = (float *)(lVar7 + 0x18);
        }
LAB_003eca0c:
        fVar14 = *pfVar6 / 100.0;
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        uVar15 = NEON_fminnm(fVar14,0x3f800000);
        *(undefined4 *)(plVar2 + 0x11) = uVar15;
      }
    }
  }
  return;
}


// ===== 003ecb30  FUN_003ecb30 =====

void FUN_003ecb30(float param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  Core *pCVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  do {
    if (lVar1 == lVar3) {
      return;
    }
    fVar12 = *(float *)(lVar1 + 0x88) * param_1;
    if (fVar12 != 0.0) {
      lVar8 = *(long *)(lVar1 + 0x40);
      fVar13 = *(float *)(lVar1 + 0x48);
      if (*(char *)(lVar8 + 0x41) != '\0') {
        fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x28));
        fVar13 = (float)(int)(fVar13 * fVar11) / fVar11;
      }
      plVar10 = *(long **)(lVar8 + 0x48);
      plVar4 = *(long **)(lVar8 + 0x50);
      if (plVar10 != plVar4) {
        plVar9 = *(long **)(lVar1 + 0x18);
        do {
          lVar8 = *plVar10;
          pCVar7 = (Core *)(**(code **)(*plVar9 + 0x348))(plVar9,*(undefined4 *)(lVar8 + 0xc));
          if (pCVar7 != (Core *)0x0) {
            puVar5 = *(undefined8 **)(lVar8 + 0x18);
            for (puVar2 = *(undefined8 **)(lVar8 + 0x10); puVar2 != puVar5; puVar2 = puVar2 + 1) {
              iVar6 = *(int *)((KeyedProperty *)*puVar2 + 0xc);
              if (iVar6 < 0x365) {
                if ((iVar6 != 0x18b) && (iVar6 != 0x191)) {
LAB_003ecbf4:
                  rive::KeyedProperty::apply
                            ((KeyedProperty *)*puVar2,pCVar7,fVar13,fVar12,
                             (LinearAnimationInstance *)(lVar1 + 8));
                }
              }
              else if ((iVar6 != 0x365) && (iVar6 != 0x3f8)) goto LAB_003ecbf4;
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar4);
      }
    }
    lVar1 = lVar1 + 0x90;
  } while( true );
}


// ===== 003ecc6c  FUN_003ecc6c =====

undefined1 FUN_003ecc6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}


