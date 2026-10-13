// ===== 004b98b8  rive::HitTestCommandPath::moveTo =====

/* rive::HitTestCommandPath::moveTo(float, float) */

void __thiscall
rive::HitTestCommandPath::moveTo(HitTestCommandPath *this,float param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(this + 0x50);
  uVar3 = *(undefined8 *)(this + 0x58);
  uVar2 = *(undefined8 *)(this + 0x60);
  if (this[0x4c] == (HitTestCommandPath)0x0) {
    HitTester::close((HitTester *)(this + 0x10));
  }
  uVar1 = CONCAT44(((float)((ulong)uVar2 >> 0x20) +
                   (float)((ulong)uVar3 >> 0x20) * param_2 + (float)((ulong)uVar1 >> 0x20) * param_1
                   ) - (float)((ulong)*(undefined8 *)(this + 0x38) >> 0x20),
                   ((float)uVar2 + (float)uVar3 * param_2 + (float)uVar1 * param_1) -
                   (float)*(undefined8 *)(this + 0x38));
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar1;
  this[0x4c] = (HitTestCommandPath)0x0;
  return;
}


// ===== 004b9928  rive::HitTestCommandPath::lineTo =====

/* rive::HitTestCommandPath::lineTo(float, float) */

void __thiscall
rive::HitTestCommandPath::lineTo(HitTestCommandPath *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20) +
          (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) * param_2 +
          (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) * param_1;
  HitTester::line(CONCAT44(fVar1,(float)*(undefined8 *)(this + 0x60) +
                                 (float)*(undefined8 *)(this + 0x58) * param_2 +
                                 (float)*(undefined8 *)(this + 0x50) * param_1),fVar1,this + 0x10);
  return;
}


// ===== 004b9948  rive::HitTestCommandPath::cubicTo =====

/* rive::HitTestCommandPath::cubicTo(float, float, float, float, float, float) */

void __thiscall
rive::HitTestCommandPath::cubicTo
          (HitTestCommandPath *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  fVar3 = *(float *)(this + 0x58);
  fVar5 = *(float *)(this + 0x5c);
  uVar9 = *(undefined4 *)(this + 0x50);
  uVar10 = *(undefined4 *)(this + 0x54);
  fVar6 = (float)NEON_fmadd(uVar9,param_1,fVar3 * param_2);
  fVar1 = (float)NEON_fmadd(uVar10,param_1,fVar5 * param_2);
  fVar7 = (float)NEON_fmadd(uVar9,param_3,fVar3 * param_4);
  fVar2 = (float)NEON_fmadd(uVar10,param_3,fVar5 * param_4);
  fVar4 = (float)NEON_fmadd(uVar9,param_5,fVar3 * param_6);
  fVar5 = (float)NEON_fmadd(uVar10,param_5,fVar5 * param_6);
  fVar3 = *(float *)(this + 0x60);
  fVar8 = *(float *)(this + 100);
  HitTester::cubic(fVar3 + fVar6,fVar8 + fVar1,fVar3 + fVar7,fVar8 + fVar2,fVar3 + fVar4,
                   fVar8 + fVar5,this + 0x10);
  return;
}


// ===== 004b99a4  rive::HitTestCommandPath::close =====

/* rive::HitTestCommandPath::close() */

void __thiscall rive::HitTestCommandPath::close(HitTestCommandPath *this)

{
  HitTester::close((HitTester *)(this + 0x10));
  return;
}


// ===== 004b99ac  rive::HitTestCommandPath::renderPath =====

/* rive::HitTestCommandPath::renderPath() */

undefined8 rive::HitTestCommandPath::renderPath(void)

{
  return 0;
}


// ===== 004b99b4  rive::HitTestCommandPath::renderPath =====

/* rive::HitTestCommandPath::renderPath() const */

undefined8 rive::HitTestCommandPath::renderPath(void)

{
  return 0;
}


// ===== 004b99bc  rive::HitTestCommandPath::wasHit =====

/* rive::HitTestCommandPath::wasHit() */

bool __thiscall rive::HitTestCommandPath::wasHit(HitTestCommandPath *this)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar28 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  
  iVar3 = *(int *)(this + 0x78);
  if (this[0x4c] == (HitTestCommandPath)0x0) {
    HitTester::close((HitTester *)(this + 0x10));
  }
  puVar5 = *(uint **)(this + 0x10);
  puVar2 = *(uint **)(this + 0x18);
  uVar1 = 1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  if (puVar5 == puVar2) {
    return false;
  }
  uVar7 = (long)puVar2 + (-4 - (long)puVar5);
  if (uVar7 < 0x1c) {
    uVar6 = 0;
  }
  else {
    bVar11 = 0;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    bVar43 = 0;
    puVar9 = puVar5 + 4;
    uVar7 = (uVar7 >> 2) + 1;
    uVar8 = uVar7 & 0x7ffffffffffffff8;
    uVar10 = uVar8;
    do {
      uVar49 = *(undefined8 *)(puVar9 + -2);
      uVar48 = *(undefined8 *)(puVar9 + -4);
      uVar51 = *(undefined8 *)(puVar9 + 2);
      uVar50 = *(undefined8 *)puVar9;
      uVar10 = uVar10 - 8;
      puVar9 = puVar9 + 8;
      bVar44 = (byte)uVar1;
      bVar45 = (byte)(uVar1 >> 8);
      bVar46 = (byte)(uVar1 >> 0x10);
      bVar47 = (byte)(uVar1 >> 0x18);
      bVar11 = (byte)uVar48 & bVar44 | bVar11;
      bVar12 = (byte)((ulong)uVar48 >> 8) & bVar45 | bVar12;
      bVar13 = (byte)((ulong)uVar48 >> 0x10) & bVar46 | bVar13;
      bVar14 = (byte)((ulong)uVar48 >> 0x18) & bVar47 | bVar14;
      bVar15 = (byte)((ulong)uVar48 >> 0x20) & bVar44 | bVar15;
      bVar16 = (byte)((ulong)uVar48 >> 0x28) & bVar45 | bVar16;
      bVar17 = (byte)((ulong)uVar48 >> 0x30) & bVar46 | bVar17;
      bVar18 = (byte)((ulong)uVar48 >> 0x38) & bVar47 | bVar18;
      bVar19 = (byte)uVar49 & bVar44 | bVar19;
      bVar20 = (byte)((ulong)uVar49 >> 8) & bVar45 | bVar20;
      bVar21 = (byte)((ulong)uVar49 >> 0x10) & bVar46 | bVar21;
      bVar22 = (byte)((ulong)uVar49 >> 0x18) & bVar47 | bVar22;
      bVar23 = (byte)((ulong)uVar49 >> 0x20) & bVar44 | bVar23;
      bVar24 = (byte)((ulong)uVar49 >> 0x28) & bVar45 | bVar24;
      bVar25 = (byte)((ulong)uVar49 >> 0x30) & bVar46 | bVar25;
      bVar26 = (byte)((ulong)uVar49 >> 0x38) & bVar47 | bVar26;
      bVar27 = (byte)uVar50 & bVar44 | bVar27;
      bVar29 = (byte)((ulong)uVar50 >> 8) & bVar45 | bVar29;
      bVar30 = (byte)((ulong)uVar50 >> 0x10) & bVar46 | bVar30;
      bVar31 = (byte)((ulong)uVar50 >> 0x18) & bVar47 | bVar31;
      bVar32 = (byte)((ulong)uVar50 >> 0x20) & bVar44 | bVar32;
      bVar33 = (byte)((ulong)uVar50 >> 0x28) & bVar45 | bVar33;
      bVar34 = (byte)((ulong)uVar50 >> 0x30) & bVar46 | bVar34;
      bVar35 = (byte)((ulong)uVar50 >> 0x38) & bVar47 | bVar35;
      bVar36 = (byte)uVar51 & bVar44 | bVar36;
      bVar37 = (byte)((ulong)uVar51 >> 8) & bVar45 | bVar37;
      bVar38 = (byte)((ulong)uVar51 >> 0x10) & bVar46 | bVar38;
      bVar39 = (byte)((ulong)uVar51 >> 0x18) & bVar47 | bVar39;
      bVar40 = (byte)((ulong)uVar51 >> 0x20) & bVar44 | bVar40;
      bVar41 = (byte)((ulong)uVar51 >> 0x28) & bVar45 | bVar41;
      bVar42 = (byte)((ulong)uVar51 >> 0x30) & bVar46 | bVar42;
      bVar43 = (byte)((ulong)uVar51 >> 0x38) & bVar47 | bVar43;
    } while (uVar10 != 0);
    bVar27 = bVar27 | bVar11;
    bVar29 = bVar29 | bVar12;
    bVar30 = bVar30 | bVar13;
    bVar31 = bVar31 | bVar14;
    bVar32 = bVar32 | bVar15;
    bVar33 = bVar33 | bVar16;
    bVar34 = bVar34 | bVar17;
    bVar35 = bVar35 | bVar18;
    auVar28[1] = bVar29;
    auVar28[0] = bVar27;
    auVar28[2] = bVar30;
    auVar28[3] = bVar31;
    auVar28[4] = bVar32;
    auVar28[5] = bVar33;
    auVar28[6] = bVar34;
    auVar28[7] = bVar35;
    auVar28[8] = bVar36 | bVar19;
    auVar28[9] = bVar37 | bVar20;
    auVar28[10] = bVar38 | bVar21;
    auVar28[0xb] = bVar39 | bVar22;
    auVar28[0xc] = bVar40 | bVar23;
    auVar28[0xd] = bVar41 | bVar24;
    auVar28[0xe] = bVar42 | bVar25;
    auVar28[0xf] = bVar43 | bVar26;
    auVar4[1] = bVar29;
    auVar4[0] = bVar27;
    auVar4[2] = bVar30;
    auVar4[3] = bVar31;
    auVar4[4] = bVar32;
    auVar4[5] = bVar33;
    auVar4[6] = bVar34;
    auVar4[7] = bVar35;
    auVar4[8] = bVar36 | bVar19;
    auVar4[9] = bVar37 | bVar20;
    auVar4[10] = bVar38 | bVar21;
    auVar4[0xb] = bVar39 | bVar22;
    auVar4[0xc] = bVar40 | bVar23;
    auVar4[0xd] = bVar41 | bVar24;
    auVar4[0xe] = bVar42 | bVar25;
    auVar4[0xf] = bVar43 | bVar26;
    auVar28 = NEON_ext(auVar28,auVar4,8,1);
    uVar6 = CONCAT13(bVar31 | auVar28[3],
                     CONCAT12(bVar30 | auVar28[2],CONCAT11(bVar29 | auVar28[1],bVar27 | auVar28[0]))
                    );
    uVar6 = uVar6 | (uint)(CONCAT17(bVar35 | auVar28[7],
                                    CONCAT16(bVar34 | auVar28[6],
                                             CONCAT15(bVar33 | auVar28[5],
                                                      CONCAT14(bVar32 | auVar28[4],uVar6)))) >> 0x20
                          );
    if (uVar7 == uVar8) goto LAB_004b9a98;
    puVar5 = puVar5 + uVar8;
  }
  do {
    puVar9 = puVar5 + 1;
    uVar6 = *puVar5 & uVar1 | uVar6;
    puVar5 = puVar9;
  } while (puVar9 != puVar2);
LAB_004b9a98:
  return uVar6 != 0;
}


// ===== 004b9aac  rive::ShapeBase::clone =====

/* rive::ShapeBase::clone() const */

Shape * __thiscall rive::ShapeBase::clone(ShapeBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Shape *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  this_00 = (Shape *)operator_new(0x378);
  Shape::Shape(this_00);
  uVar5 = *(undefined8 *)(this + 0xbc);
  uVar1 = *(undefined4 *)(this + 0x134);
  uVar2 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)(this_00 + 0x110) = *(undefined8 *)(this + 0x110);
  uVar3 = *(undefined4 *)(this + 0xc4);
  *(undefined8 *)(this_00 + 0xbc) = uVar5;
  uVar4 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(this_00 + 0x134) = uVar1;
  *(undefined4 *)(this_00 + 0x138) = uVar2;
  *(undefined4 *)(this_00 + 0xc4) = uVar3;
  *(undefined4 *)(this_00 + 0xa0) = uVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004b9b20  FUN_004b9b20 =====

void FUN_004b9b20(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4b9b24);
  (*pcVar1)();
}


// ===== 004b9b24  rive::ShapePaintContainer::from =====

/* rive::ShapePaintContainer::from(rive::Component*) */

Component * rive::ShapePaintContainer::from(Component *param_1)

{
  ushort uVar1;
  Component *pCVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))();
  if (uVar1 < 0x201) {
    if (uVar1 < 0x89) {
      if (uVar1 != 1) {
        if (uVar1 != 3) {
          return (Component *)0x0;
        }
        goto LAB_004b9bb8;
      }
    }
    else {
      if (uVar1 == 0x89) {
        return param_1 + 0x138;
      }
      if (uVar1 != 0x199) {
        return (Component *)0x0;
      }
    }
    pCVar2 = param_1 + 400;
  }
  else {
    if (uVar1 < 0x23c) {
      if ((uVar1 != 0x201) && (uVar1 != 0x23b)) {
        return (Component *)0x0;
      }
    }
    else if (((uVar1 != 0x23c) && (uVar1 != 0x23e)) && (uVar1 != 0x23f)) {
      return (Component *)0x0;
    }
LAB_004b9bb8:
    pCVar2 = param_1 + 0x178;
  }
  return pCVar2;
}


// ===== 004b9bd0  rive::ShapePaintContainer::addPaint =====

/* rive::ShapePaintContainer::addPaint(rive::ShapePaint*) */

void __thiscall rive::ShapePaintContainer::addPaint(ShapePaintContainer *this,ShapePaint *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x18);
  if (puVar10 < *(undefined8 **)(this + 0x20)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004b9d10;
  }
  puVar9 = *(undefined8 **)(this + 0x10);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004b9d34();
LAB_004b9d30:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x20) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004b9d30;
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
      if (uVar6 == uVar7) goto LAB_004b9cfc;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x10);
  }
LAB_004b9cfc:
  *(undefined8 **)(this + 0x10) = puVar4;
  *(undefined8 **)(this + 0x18) = puVar13;
  *(void **)(this + 0x20) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004b9d10:
  *(undefined8 **)(this + 0x18) = puVar13;
  return;
}


// ===== 004b9d34  FUN_004b9d34 =====

void FUN_004b9d34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004b9d48  rive::ShapePaintContainer::pathFlags =====

/* rive::ShapePaintContainer::pathFlags() const */

uint __thiscall rive::ShapePaintContainer::pathFlags(ShapePaintContainer *this)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  uVar3 = (uint)(byte)this[8];
  for (puVar4 = *(undefined8 **)(this + 0x10); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar2 = (**(code **)(*(long *)*puVar4 + 0xd8))();
    uVar3 = uVar2 | uVar3;
  }
  return uVar3;
}


// ===== 004b9d98  rive::ShapePaintContainer::invalidateStrokeEffects =====

/* rive::ShapePaintContainer::invalidateStrokeEffects() */

void __thiscall rive::ShapePaintContainer::invalidateStrokeEffects(ShapePaintContainer *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  for (puVar4 = *(undefined8 **)(this + 0x10); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    plVar3 = (long *)*puVar4;
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,0x15);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*plVar3 + 0xb8))(plVar3);
    }
  }
  return;
}


// ===== 004b9dfc  rive::ShapePaintContainer::propagateOpacity =====

/* rive::ShapePaintContainer::propagateOpacity(float) */

void __thiscall rive::ShapePaintContainer::propagateOpacity(ShapePaintContainer *this,float param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(long **)(this + 0x18);
  for (plVar1 = *(long **)(this + 0x10); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    puVar3 = *(undefined8 **)(*plVar1 + 0xd0);
    if (*(float *)((long)puVar3 + 0xc) != param_1) {
      *(float *)((long)puVar3 + 0xc) = param_1;
      (**(code **)*puVar3)();
    }
  }
  return;
}


// ===== 004b9e64  rive::SliceMesh::SliceMesh =====

/* rive::SliceMesh::SliceMesh(rive::NSlicer*) */

void __thiscall rive::SliceMesh::SliceMesh(SliceMesh *this,NSlicer *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d780;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(NSlicer **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


// ===== 004b9e98  FUN_004b9e98 =====

undefined8 FUN_004b9e98(void)

{
  return 1;
}


// ===== 004b9ea0  FUN_004b9ea0 =====

void FUN_004b9ea0(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0xb];
  *param_1 = (long)(PTR_vtable_0067d780 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0xc] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[8];
  if (pvVar2 != (void *)0x0) {
    param_1[9] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[5];
  if (pvVar2 != (void *)0x0) {
    param_1[6] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[3];
  *param_1 = (long)&PTR_FUN_00671890;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x004b9f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 004b9f94  FUN_004b9f94 =====

void FUN_004b9f94(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0xb];
  *param_1 = (long)(PTR_vtable_0067d780 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0xc] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[8];
  if (pvVar2 != (void *)0x0) {
    param_1[9] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[5];
  if (pvVar2 != (void *)0x0) {
    param_1[6] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[3];
  *param_1 = (long)&PTR_FUN_00671890;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 004ba084  rive::SliceMesh::onAssetLoaded =====

/* rive::SliceMesh::onAssetLoaded(rive::RenderImage*) */

void rive::SliceMesh::onAssetLoaded(RenderImage *param_1)

{
  return;
}


// ===== 004ba088  rive::SliceMesh::draw =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::SliceMesh::draw(rive::Renderer*, rive::RenderImage const*, rive::ImageSampler,
   rive::BlendMode, float) */

void __thiscall
rive::SliceMesh::draw
          (undefined4 param_1_00,SliceMesh *this,long *param_1,undefined8 param_2,ulong param_5,
          undefined1 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((((*(long *)(this + 0x20) != 0) &&
       (lVar4 = *(long *)(*(long *)(this + 0x20) + 0x30), lVar4 != 0)) &&
      (*(long *)(this + 0x10) != 0)) &&
     ((*(long *)(this + 0x18) != 0 && (*(long *)(this + 8) != 0)))) {
    (**(code **)(*param_1 + 0x20))(param_1,lVar4 + 0xa4);
    lVar3 = *(long *)(lVar4 + 0x198);
    if (lVar3 == 0) {
      local_70 = *(float *)(lVar4 + 0x178) * -0.0;
      fVar7 = 0.0;
    }
    else {
      if (*(long *)(lVar3 + 0x88) == 0) {
        fVar7 = *(float *)(lVar3 + 0x84);
      }
      else {
        fVar7 = (float)*(int *)(*(long *)(lVar3 + 0x88) + 0x10);
      }
      local_70 = -(fVar7 * *(float *)(lVar4 + 0x178));
      if (*(long *)(lVar3 + 0x88) == 0) {
        fVar7 = *(float *)(lVar3 + 0x80);
      }
      else {
        fVar7 = (float)*(int *)(*(long *)(lVar3 + 0x88) + 0x14);
      }
    }
    fStack_6c = -(fVar7 * *(float *)(lVar4 + 0x17c));
    uStack_78 = _UNK_0024e5b8;
    local_80 = _DAT_0024e5b0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_80);
    local_88 = *(long **)(this + 0x10);
    if (local_88 != (long *)0x0) {
      FUN_00340fb0(1,local_88 + 1);
    }
    plVar6 = *(long **)(this + 0x18);
    if (plVar6 != (long *)0x0) {
      FUN_00340fb0(1,plVar6 + 1);
    }
    plVar5 = *(long **)(this + 8);
    local_90 = plVar6;
    if (plVar5 != (long *)0x0) {
      FUN_00340fb0(1,plVar5 + 1);
    }
    local_98 = plVar5;
    (**(code **)(*param_1 + 0x40))
              (param_1_00,param_1,param_2,param_5 & 0xffffff,&local_88,&local_90,&local_98,
               (ulong)(*(long *)(this + 0x48) - *(long *)(this + 0x40)) >> 3,
               (ulong)(*(long *)(this + 0x60) - *(long *)(this + 0x58)) >> 1,param_6);
    plVar6 = local_98;
    if ((local_98 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_98 + 1), iVar2 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar6 = local_90;
    if ((local_90 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_90 + 1), iVar2 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar6 = local_88;
    if ((local_88 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_88 + 1), iVar2 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ba2e0  rive::SliceMesh::updateBuffers =====

/* rive::SliceMesh::updateBuffers() */

void __thiscall rive::SliceMesh::updateBuffers(SliceMesh *this)

{
  long lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  void *__dest;
  undefined8 *puVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  size_t __n;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  long *local_60;
  long local_58;
  float *pfVar12;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(this + 0x40);
  lVar1 = *(long *)(this + 0x48);
  plVar22 = *(long **)(this + 0x10);
  lVar20 = lVar1 - lVar10;
  plVar19 = *(long **)(*(long *)(*(long *)(this + 0x20) + 0x40) + 0xbd8);
  if ((plVar22 != (long *)0x0) && (plVar22[3] != lVar20)) {
    *(undefined8 *)(this + 0x10) = 0;
    iVar6 = FUN_00340fe0(0xffffffff,plVar22 + 1);
    if (iVar6 == 1) {
      (**(code **)(*plVar22 + 8))(plVar22);
    }
  }
  plVar22 = *(long **)(this + 0x10);
  if ((lVar1 != lVar10) && (plVar22 == (long *)0x0)) {
    (**(code **)(*plVar19 + 0x10))(&local_60,plVar19,1,0,lVar20);
    plVar22 = local_60;
    plVar21 = *(long **)(this + 0x10);
    local_60 = (long *)0x0;
    *(long **)(this + 0x10) = plVar22;
    if (plVar21 != (long *)0x0) {
      iVar6 = FUN_00340fe0(0xffffffff,plVar21 + 1);
      if (iVar6 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21);
      }
      plVar22 = local_60;
      if ((local_60 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,local_60 + 1), iVar6 == 1))
      {
        (**(code **)(*plVar22 + 8))(plVar22);
      }
    }
    plVar22 = *(long **)(this + 0x10);
  }
  if (plVar22 != (long *)0x0) {
    *(undefined1 *)(plVar22 + 4) = 1;
    puVar7 = (undefined8 *)(**(code **)(*plVar22 + 0x10))();
    if (puVar7 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(this + 0x40);
      puVar2 = *(undefined8 **)(this + 0x48);
      if (puVar9 != puVar2) {
        uVar13 = (long)puVar2 + (-8 - (long)puVar9);
        if ((0x17 < uVar13) && (0x1f < (ulong)((long)puVar7 - (long)puVar9))) {
          puVar15 = puVar9 + 2;
          puVar17 = puVar7 + 2;
          uVar13 = (uVar13 >> 3) + 1;
          uVar14 = uVar13 & 0x3ffffffffffffffc;
          uVar18 = uVar14;
          do {
            puVar5 = puVar15 + -1;
            uVar23 = puVar15[-2];
            uVar25 = puVar15[1];
            uVar24 = *puVar15;
            uVar18 = uVar18 - 4;
            puVar15 = puVar15 + 4;
            puVar17[-1] = *puVar5;
            puVar17[-2] = uVar23;
            puVar17[1] = uVar25;
            *puVar17 = uVar24;
            puVar17 = puVar17 + 4;
          } while (uVar18 != 0);
          if (uVar13 == uVar14) goto LAB_004ba490;
          puVar7 = puVar7 + uVar14;
          puVar9 = puVar9 + uVar14;
        }
        do {
          puVar15 = puVar9 + 1;
          *puVar7 = *puVar9;
          puVar7 = puVar7 + 1;
          puVar9 = puVar15;
        } while (puVar15 != puVar2);
      }
LAB_004ba490:
      (**(code **)(**(long **)(this + 0x10) + 0x18))();
    }
  }
  lVar10 = *(long *)(this + 0x28);
  lVar1 = *(long *)(this + 0x30);
  plVar22 = *(long **)(this + 0x18);
  lVar20 = lVar1 - lVar10;
  if ((plVar22 != (long *)0x0) && (plVar22[3] != lVar20)) {
    *(undefined8 *)(this + 0x18) = 0;
    iVar6 = FUN_00340fe0(0xffffffff,plVar22 + 1);
    if (iVar6 == 1) {
      (**(code **)(*plVar22 + 8))(plVar22);
    }
  }
  plVar22 = *(long **)(this + 0x18);
  if ((lVar1 != lVar10) && (plVar22 == (long *)0x0)) {
    (**(code **)(*plVar19 + 0x10))(&local_60,plVar19,1,0,lVar20);
    plVar22 = local_60;
    plVar21 = *(long **)(this + 0x18);
    local_60 = (long *)0x0;
    *(long **)(this + 0x18) = plVar22;
    if (plVar21 != (long *)0x0) {
      iVar6 = FUN_00340fe0(0xffffffff,plVar21 + 1);
      if (iVar6 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21);
      }
      plVar22 = local_60;
      if ((local_60 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,local_60 + 1), iVar6 == 1))
      {
        (**(code **)(*plVar22 + 8))(plVar22);
      }
    }
    plVar22 = *(long **)(this + 0x18);
  }
  if (plVar22 == (long *)0x0) goto LAB_004ba65c;
  lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(this + 0x20) + 0x30) + 0x198) + 0x88);
  if (lVar10 == 0) {
    local_70 = 0;
    local_80 = DAT_0024e658;
    local_90 = DAT_0024e668;
  }
  else {
    local_90 = *(undefined8 *)(lVar10 + 0x18);
    local_80 = *(undefined8 *)(lVar10 + 0x20);
    local_70 = *(undefined8 *)(lVar10 + 0x28);
  }
  *(undefined1 *)(plVar22 + 4) = 1;
  pfVar8 = (float *)(**(code **)(*plVar22 + 0x10))();
  if (pfVar8 == (float *)0x0) goto LAB_004ba65c;
  pfVar11 = *(float **)(this + 0x28);
  pfVar3 = *(float **)(this + 0x30);
  if (pfVar11 != pfVar3) {
    uVar13 = (long)pfVar3 + (-8 - (long)pfVar11);
    fVar36 = (float)local_80;
    fVar37 = (float)((ulong)local_80 >> 0x20);
    fVar38 = (float)local_90;
    fVar39 = (float)((ulong)local_90 >> 0x20);
    fVar34 = (float)local_70;
    fVar35 = (float)((ulong)local_70 >> 0x20);
    if ((0x37 < uVar13) &&
       ((lVar10 = (uVar13 & 0xfffffffffffffff8) + 8, (float *)((long)pfVar11 + lVar10) <= pfVar8 ||
        ((float *)((long)pfVar8 + lVar10) <= pfVar11)))) {
      uVar13 = (uVar13 >> 3) + 1;
      uVar14 = uVar13 & 0x3ffffffffffffffc;
      pfVar12 = pfVar8 + uVar14 * 2;
      pfVar16 = pfVar11;
      uVar18 = uVar14;
      do {
        fVar26 = *pfVar16;
        fVar30 = pfVar16[1];
        fVar27 = pfVar16[2];
        fVar31 = pfVar16[3];
        fVar28 = pfVar16[4];
        fVar32 = pfVar16[5];
        fVar29 = pfVar16[6];
        fVar33 = pfVar16[7];
        pfVar16 = pfVar16 + 8;
        uVar18 = uVar18 - 4;
        *pfVar8 = fVar34 + fVar30 * fVar36 + fVar26 * fVar38;
        pfVar8[1] = fVar35 + fVar30 * fVar37 + fVar26 * fVar39;
        pfVar8[2] = fVar34 + fVar31 * fVar36 + fVar27 * fVar38;
        pfVar8[3] = fVar35 + fVar31 * fVar37 + fVar27 * fVar39;
        pfVar8[4] = fVar34 + fVar32 * fVar36 + fVar28 * fVar38;
        pfVar8[5] = fVar35 + fVar32 * fVar37 + fVar28 * fVar39;
        pfVar8[6] = fVar34 + fVar33 * fVar36 + fVar29 * fVar38;
        pfVar8[7] = fVar35 + fVar33 * fVar37 + fVar29 * fVar39;
        pfVar8 = pfVar8 + 8;
      } while (uVar18 != 0);
      if (uVar13 == uVar14) goto LAB_004ba64c;
      pfVar11 = pfVar11 + uVar14 * 2;
      pfVar8 = pfVar12;
    }
    do {
      pfVar12 = pfVar11 + 2;
      *(ulong *)pfVar8 =
           CONCAT44(fVar35 + fVar37 * pfVar11[1] + fVar39 * *pfVar11,
                    fVar34 + fVar36 * pfVar11[1] + fVar38 * *pfVar11);
      pfVar11 = pfVar12;
      pfVar8 = pfVar8 + 2;
    } while (pfVar12 != pfVar3);
  }
LAB_004ba64c:
  (**(code **)(**(long **)(this + 0x18) + 0x18))();
LAB_004ba65c:
  lVar10 = *(long *)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  plVar22 = *(long **)(this + 8);
  __n = lVar1 - lVar10;
  if ((plVar22 != (long *)0x0) && (plVar22[3] != __n)) {
    *(undefined8 *)(this + 8) = 0;
    iVar6 = FUN_00340fe0(0xffffffff,plVar22 + 1);
    if (iVar6 == 1) {
      (**(code **)(*plVar22 + 8))(plVar22);
    }
  }
  plVar22 = *(long **)(this + 8);
  if ((lVar1 != lVar10) && (plVar22 == (long *)0x0)) {
    (**(code **)(*plVar19 + 0x10))(&local_60,plVar19,0,0,__n);
    plVar19 = local_60;
    plVar22 = *(long **)(this + 8);
    local_60 = (long *)0x0;
    *(long **)(this + 8) = plVar19;
    if (plVar22 != (long *)0x0) {
      iVar6 = FUN_00340fe0(0xffffffff,plVar22 + 1);
      if (iVar6 == 1) {
        (**(code **)(*plVar22 + 8))(plVar22);
      }
      plVar19 = local_60;
      if ((local_60 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,local_60 + 1), iVar6 == 1))
      {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    }
    plVar22 = *(long **)(this + 8);
  }
  if (plVar22 != (long *)0x0) {
    *(undefined1 *)(plVar22 + 4) = 1;
    __dest = (void *)(**(code **)(*plVar22 + 0x10))();
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)(this + 0x58),__n);
      (**(code **)(**(long **)(this + 8) + 0x18))();
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ba804  rive::SliceMesh::uvStops =====

/* rive::SliceMesh::uvStops(rive::AxisType) */

void rive::SliceMesh::uvStops(undefined8 *param_1,long param_2,vector *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(lVar1 + 0x30);
  lVar3 = *(long *)(lVar2 + 0x198);
  if ((int)param_3 == 0) {
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x88) == 0) {
        fVar4 = *(float *)(lVar3 + 0x84);
      }
      else {
        fVar4 = (float)*(int *)(*(long *)(lVar3 + 0x88) + 0x10);
      }
      if ((fVar4 != 0.0) && (*(float *)(lVar2 + 0xc0) != 0.0)) {
        NSlicerHelpers::uvStops
                  ((NSlicerHelpers *)(lVar1 + 0xa8),(vector *)((ulong)param_3 & 0xffffffff00000000),
                   fVar4);
        return;
      }
    }
  }
  else if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x88) == 0) {
      fVar4 = *(float *)(lVar3 + 0x80);
    }
    else {
      fVar4 = (float)*(int *)(*(long *)(lVar3 + 0x88) + 0x14);
    }
    if ((fVar4 != 0.0) && (*(float *)(lVar2 + 0xc4) != 0.0)) {
      NSlicerHelpers::uvStops((NSlicerHelpers *)(lVar1 + 0xc0),param_3,fVar4);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 004ba8a8  rive::SliceMesh::vertexStops =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::SliceMesh::vertexStops(std::__ndk1::vector<float, std::__ndk1::allocator<float> > const&,
   rive::AxisType) */

void rive::SliceMesh::vertexStops(long *param_1_00,long param_1,long *param_3,int param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 *puVar18;
  float *pfVar19;
  undefined4 *puVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  int iVar29;
  undefined8 uVar28;
  int iVar30;
  int iVar31;
  undefined1 auVar32 [16];
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  long lVar40;
  long lVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  lVar11 = *(long *)(lVar9 + 0x198);
  if (param_4 == 0) {
    if (lVar11 == 0) {
      fVar37 = 0.0;
      pfVar5 = (float *)(lVar9 + 0xc0);
    }
    else if (*(long *)(lVar11 + 0x88) == 0) {
      fVar37 = *(float *)(lVar11 + 0x84);
      pfVar5 = (float *)(lVar9 + 0xc0);
    }
    else {
      pfVar5 = (float *)(lVar9 + 0xc0);
      fVar37 = (float)*(int *)(*(long *)(lVar11 + 0x88) + 0x10);
    }
  }
  else {
    if (lVar11 == 0) {
      fVar37 = 0.0;
    }
    else if (*(long *)(lVar11 + 0x88) == 0) {
      fVar37 = *(float *)(lVar11 + 0x80);
    }
    else {
      fVar37 = (float)*(int *)(*(long *)(lVar11 + 0x88) + 0x14);
    }
    pfVar5 = (float *)(lVar9 + 0xc4);
  }
  if ((fVar37 == 0.0) || (*pfVar5 == 0.0)) {
    *param_1_00 = 0;
    param_1_00[1] = 0;
    param_1_00[2] = 0;
    return;
  }
  pfVar19 = (float *)*param_3;
  fVar38 = ABS(*pfVar5);
  uVar6 = (ulong)(param_3[1] - (long)pfVar19) >> 2;
  iVar4 = (int)uVar6;
  if (iVar4 < 2) {
    uVar39 = 0;
    fVar21 = fVar37 * 0.0;
    fVar25 = fVar37 - fVar21;
    if (fVar25 != 0.0) goto LAB_004bab08;
    puVar18 = (undefined4 *)0x0;
    puVar20 = (undefined4 *)0x0;
    puVar8 = (undefined4 *)0x0;
    *param_1_00 = 0;
    param_1_00[2] = 0;
    param_1_00[1] = 0;
  }
  else {
    fVar25 = *pfVar19;
    uVar6 = uVar6 + 0xffffffff;
    uVar10 = uVar6 & 0xffffffff;
    if (uVar10 < 8) {
      fVar21 = 0.0;
      uVar12 = 0;
      iVar26 = 0;
LAB_004baac0:
      do {
        lVar9 = uVar12 + 1;
        uVar6 = uVar12 + 1;
        fVar25 = pfVar19[lVar9] - fVar25;
        fVar22 = -0.0;
        if ((uVar12 & 1) == 0) {
          fVar22 = fVar25;
        }
        iVar26 = iVar26 + ((uint)uVar12 & (uint)(fVar25 == 0.0));
        fVar21 = fVar21 + fVar22;
        uVar12 = uVar6;
        fVar25 = pfVar19[lVar9];
      } while (uVar10 != uVar6);
    }
    else {
      uVar6 = uVar6 & 7;
      auVar32._4_4_ = fVar25;
      auVar32._0_4_ = fVar25;
      auVar32._8_4_ = fVar25;
      auVar32._12_4_ = fVar25;
      iVar26 = 0;
      iVar29 = 0;
      iVar30 = 0;
      iVar31 = 0;
      fVar21 = 0.0;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      uVar12 = uVar10 - uVar6;
      pauVar14 = (undefined1 (*) [16])(pfVar19 + 5);
      uVar17 = uVar12;
      lVar9 = _DAT_0024e340;
      lVar11 = _UNK_0024e348;
      lVar40 = _DAT_0024e100;
      lVar41 = _UNK_0024e108;
      do {
        auVar42 = pauVar14[-1];
        uVar17 = uVar17 - 8;
        auVar32 = NEON_ext(auVar32,auVar42,0xc,1);
        auVar48._0_4_ = (int)lVar40 << 0x1f;
        auVar48._4_4_ = (int)lVar41 << 0x1f;
        auVar48._8_4_ = (int)lVar9 << 0x1f;
        auVar48._12_4_ = (int)lVar11 << 0x1f;
        bVar44 = (byte)lVar40 & 1;
        bVar45 = (byte)lVar41 & 1;
        bVar46 = (byte)lVar9 & 1;
        bVar47 = (byte)lVar11 & 1;
        auVar50._0_4_ = auVar42._0_4_ - auVar32._0_4_;
        auVar50._4_4_ = auVar42._4_4_ - auVar32._4_4_;
        auVar50._8_4_ = auVar42._8_4_ - auVar32._8_4_;
        auVar50._12_4_ = auVar42._12_4_ - auVar32._12_4_;
        auVar32 = *pauVar14;
        auVar48 = NEON_cmlt(auVar48,0,4);
        auVar42 = NEON_ext(auVar42,auVar32,0xc,1);
        auVar43._0_4_ = auVar32._0_4_ - auVar42._0_4_;
        auVar43._4_4_ = auVar32._4_4_ - auVar42._4_4_;
        auVar43._8_4_ = auVar32._8_4_ - auVar42._8_4_;
        fVar25 = auVar32._12_4_;
        auVar43._12_4_ = fVar25 - auVar42._12_4_;
        auVar42._8_4_ = 0x80000000;
        auVar42._0_8_ = 0x8000000080000000;
        auVar42._12_4_ = 0x80000000;
        auVar51 = NEON_bsl(auVar48,auVar42,auVar50,1);
        auVar50 = NEON_fcmeq(auVar50,0,4);
        auVar49._8_4_ = 0x80000000;
        auVar49._0_8_ = 0x8000000080000000;
        auVar49._12_4_ = 0x80000000;
        auVar49 = NEON_bsl(auVar48,auVar49,auVar43,1);
        auVar42 = NEON_fcmeq(auVar43,0,4);
        iVar26 = iVar26 + (uint)(bVar44 & auVar50[0]);
        iVar29 = iVar29 + (uint)(bVar45 & auVar50[4]);
        iVar30 = iVar30 + (uint)(bVar46 & auVar50[8]);
        iVar31 = iVar31 + (uint)(bVar47 & auVar50[0xc]);
        iVar33 = iVar33 + (uint)(bVar44 & auVar42[0]);
        iVar34 = iVar34 + (uint)(bVar45 & auVar42[4]);
        iVar35 = iVar35 + (uint)(bVar46 & auVar42[8]);
        iVar36 = iVar36 + (uint)(bVar47 & auVar42[0xc]);
        fVar21 = fVar21 + auVar51._0_4_ + auVar51._4_4_ + auVar51._8_4_ + auVar51._12_4_ +
                 auVar49._0_4_ + auVar49._4_4_ + auVar49._8_4_ + auVar49._12_4_;
        pauVar14 = pauVar14 + 2;
        lVar9 = lVar9 + 8;
        lVar11 = lVar11 + 8;
        lVar40 = lVar40 + 8;
        lVar41 = lVar41 + 8;
      } while (uVar17 != 0);
      iVar26 = iVar33 + iVar26 + iVar34 + iVar29 + iVar35 + iVar30 + iVar36 + iVar31;
      if (uVar6 != 0) goto LAB_004baac0;
    }
    fVar21 = fVar21 * fVar37;
    fVar25 = fVar37 - fVar21;
    if (fVar25 == 0.0) {
      fVar22 = 0.0;
      if (iVar26 == 0) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = (fVar37 - fVar21 / fVar38) / (float)iVar26;
      }
      bVar2 = true;
    }
    else {
LAB_004bab08:
      fVar22 = (float)NEON_fnmsub(fVar37,fVar38,fVar21);
      fVar21 = 0.0;
      bVar2 = false;
      fVar22 = fVar22 / fVar25;
    }
    *param_1_00 = 0;
    param_1_00[2] = 0;
    param_1_00[1] = 0;
    if (iVar4 < 2) {
      puVar18 = (undefined4 *)0x0;
      puVar20 = (undefined4 *)0x0;
      uVar39 = 0;
      puVar8 = (undefined4 *)0x0;
    }
    else {
      fVar25 = 0.0;
      uVar39 = 0;
      puVar8 = (undefined4 *)0x0;
      uVar6 = 0;
      do {
        if (puVar8 < (undefined4 *)param_1_00[2]) {
          puVar20 = puVar8 + 1;
          *puVar8 = uVar39;
        }
        else {
          puVar18 = (undefined4 *)*param_1_00;
          lVar9 = (long)puVar8 - (long)puVar18;
          uVar10 = (lVar9 >> 2) + 1;
          if (uVar10 >> 0x3e != 0) goto LAB_004bae9c;
          uVar12 = param_1_00[2] - (long)puVar18;
          uVar17 = (long)uVar12 >> 1;
          if (uVar17 <= uVar10) {
            uVar17 = uVar10;
          }
          if (0x7ffffffffffffffb < uVar12) {
            uVar17 = 0x3fffffffffffffff;
          }
          if (uVar17 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            if (uVar17 >> 0x3e != 0) goto LAB_004baea4;
            pvVar3 = operator_new(uVar17 << 2);
          }
          puVar7 = (undefined4 *)((long)pvVar3 + (lVar9 >> 2) * 4);
          puVar20 = puVar7 + 1;
          *puVar7 = uVar39;
          if ((long)puVar8 - (long)puVar18 != 0) {
            uVar10 = ((long)puVar8 - (long)puVar18) - 4;
            if ((((0xab < uVar10) &&
                 (uVar12 = (long)pvVar3 + lVar9 + -4,
                 uVar12 - (uVar10 & 0xfffffffffffffffc) <= uVar12)) &&
                ((undefined4 *)((long)(puVar8 + -1) - (uVar10 & 0xfffffffffffffffc)) <= puVar8 + -1)
                ) && (0x1f < (ulong)((long)puVar8 + (-lVar9 - (long)pvVar3)))) {
              puVar15 = (undefined8 *)(puVar7 + -4);
              puVar16 = (undefined8 *)(puVar8 + -4);
              uVar10 = (uVar10 >> 2) + 1;
              uVar13 = uVar10 & 0x7ffffffffffffff8;
              puVar8 = puVar8 + -uVar13;
              uVar12 = uVar13;
              do {
                puVar1 = puVar16 + -1;
                uVar28 = puVar16[-2];
                uVar24 = puVar16[1];
                uVar23 = *puVar16;
                uVar12 = uVar12 - 8;
                puVar16 = puVar16 + -4;
                puVar15[-1] = *puVar1;
                puVar15[-2] = uVar28;
                puVar15[1] = uVar24;
                *puVar15 = uVar23;
                puVar15 = puVar15 + -4;
              } while (uVar12 != 0);
              puVar7 = puVar7 + -uVar13;
              if (uVar10 == uVar13) goto LAB_004bac44;
            }
            do {
              puVar8 = puVar8 + -1;
              puVar7 = puVar7 + -1;
              *puVar7 = *puVar8;
            } while (puVar8 != puVar18);
          }
LAB_004bac44:
          *param_1_00 = (long)puVar7;
          param_1_00[1] = (long)puVar20;
          param_1_00[2] = (long)((long)pvVar3 + uVar17 * 4);
          if (puVar18 != (undefined4 *)0x0) {
            operator_delete(puVar18);
            pfVar19 = (float *)*param_3;
          }
        }
        uVar10 = uVar6 + 1;
        fVar27 = pfVar19[uVar6];
        param_1_00[1] = (long)puVar20;
        fVar27 = (fVar37 * (pfVar19[uVar10] - fVar27)) / fVar38;
        if ((uVar6 & 1) == 0) {
          fVar25 = fVar25 + fVar27;
        }
        else if (bVar2) {
          fVar25 = fVar25 + fVar21;
        }
        else {
          fVar25 = (float)NEON_fmadd(fVar27,fVar22,fVar25);
        }
        fVar27 = fVar25;
        if (fVar25 <= 0.0) {
          fVar27 = 0.0;
        }
        uVar39 = NEON_fminnm(fVar27,fVar37);
        puVar8 = puVar20;
        uVar6 = uVar10;
      } while ((long)uVar10 < (param_3[1] - (long)pfVar19) * 0x40000000 + -0x100000000 >> 0x20);
      puVar8 = (undefined4 *)param_1_00[2];
      if (puVar20 < puVar8) {
        puVar7 = puVar20 + 1;
        *puVar20 = uVar39;
        goto LAB_004bae6c;
      }
      puVar18 = (undefined4 *)*param_1_00;
    }
  }
  lVar9 = (long)puVar20 - (long)puVar18 >> 2;
  uVar6 = lVar9 + 1;
  if (uVar6 >> 0x3e != 0) {
LAB_004bae9c:
                    /* WARNING: Subroutine does not return */
    FUN_0033dc4c(param_1_00);
  }
  uVar10 = (long)puVar8 - (long)puVar18 >> 1;
  if (uVar10 <= uVar6) {
    uVar10 = uVar6;
  }
  if (0x7ffffffffffffffb < (ulong)((long)puVar8 - (long)puVar18)) {
    uVar10 = 0x3fffffffffffffff;
  }
  if (uVar10 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar10 >> 0x3e != 0) {
LAB_004baea4:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar3 = operator_new(uVar10 << 2);
  }
  puVar8 = (undefined4 *)((long)pvVar3 + lVar9 * 4);
  puVar7 = puVar8 + 1;
  *puVar8 = uVar39;
  if ((long)puVar20 - (long)puVar18 != 0) {
    uVar6 = ((long)puVar20 - (long)puVar18) - 4;
    if ((0x1b < uVar6) &&
       (0x1f < (ulong)((long)puVar20 + (-((long)puVar20 - (long)puVar18) - (long)pvVar3)))) {
      puVar15 = (undefined8 *)(puVar8 + -4);
      puVar16 = (undefined8 *)(puVar20 + -4);
      uVar6 = (uVar6 >> 2) + 1;
      uVar12 = uVar6 & 0x7ffffffffffffff8;
      puVar20 = puVar20 + -uVar12;
      uVar17 = uVar12;
      do {
        puVar1 = puVar16 + -1;
        uVar28 = puVar16[-2];
        uVar24 = puVar16[1];
        uVar23 = *puVar16;
        uVar17 = uVar17 - 8;
        puVar16 = puVar16 + -4;
        puVar15[-1] = *puVar1;
        puVar15[-2] = uVar28;
        puVar15[1] = uVar24;
        *puVar15 = uVar23;
        puVar15 = puVar15 + -4;
      } while (uVar17 != 0);
      puVar8 = puVar8 + -uVar12;
      if (uVar6 == uVar12) goto LAB_004bae58;
    }
    do {
      puVar20 = puVar20 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar20;
    } while (puVar20 != puVar18);
  }
LAB_004bae58:
  *param_1_00 = (long)puVar8;
  param_1_00[1] = (long)puVar7;
  param_1_00[2] = (long)((long)pvVar3 + uVar10 * 4);
  if (puVar18 != (undefined4 *)0x0) {
    operator_delete(puVar18);
  }
LAB_004bae6c:
  param_1_00[1] = (long)puVar7;
  return;
}


// ===== 004baea8  rive::SliceMesh::tileRepeat =====

/* rive::SliceMesh::tileRepeat(std::__ndk1::vector<rive::SliceMeshVertex,
   std::__ndk1::allocator<rive::SliceMeshVertex> >&, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> >&, std::__ndk1::vector<rive::SliceMeshVertex,
   std::__ndk1::allocator<rive::SliceMeshVertex> > const&, unsigned short) */

int __thiscall
rive::SliceMesh::tileRepeat
          (SliceMesh *this,vector *param_1,vector *param_2,vector *param_3,ushort param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  short *psVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  short *psVar21;
  ulong uVar22;
  ulong uVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float local_cc;
  
  puVar6 = PTR_triangulation_0067d778;
  uVar14 = (uint)param_4;
  iVar8 = 0;
  lVar19 = *(long *)(*(long *)(this + 0x20) + 0x30);
  if ((*(float *)(lVar19 + 0xc0) != 0.0) && (*(float *)(lVar19 + 0xc4) != 0.0)) {
    lVar15 = *(long *)param_3;
    fVar40 = ABS(*(float *)(lVar19 + 0xc0));
    lVar20 = *(long *)(lVar19 + 0x198);
    fVar45 = *(float *)(lVar15 + 4);
    fVar35 = *(float *)(lVar15 + 8);
    local_cc = *(float *)(lVar15 + 0x2c);
    if (lVar20 == 0) {
      fVar41 = 0.0;
      fVar40 = ((local_cc - fVar45) * 0.0) / fVar40;
    }
    else {
      if (*(long *)(lVar20 + 0x88) == 0) {
        fVar41 = *(float *)(lVar20 + 0x84);
      }
      else {
        fVar41 = (float)*(int *)(*(long *)(lVar20 + 0x88) + 0x10);
      }
      fVar40 = ((local_cc - fVar45) * fVar41) / fVar40;
      if (*(long *)(lVar20 + 0x88) == 0) {
        fVar41 = *(float *)(lVar20 + 0x80);
      }
      else {
        fVar41 = (float)*(int *)(*(long *)(lVar20 + 0x88) + 0x14);
      }
    }
    local_cc = local_cc - fVar45;
    fVar36 = *(float *)(lVar15 + 0x30) - fVar35;
    fVar41 = (fVar36 * fVar41) / ABS(*(float *)(lVar19 + 0xc4));
    bVar7 = true;
    if ((1.0 <= ABS(fVar40)) && (bVar7 = false, !NAN(ABS(fVar41)))) {
      bVar7 = ABS(fVar41) < 1.0;
    }
    if (bVar7) {
      iVar8 = 0;
    }
    else {
      fVar37 = *(float *)(lVar15 + 0x38);
      if (*(float *)(lVar15 + 0x10) < fVar37) {
        fVar29 = *(float *)(lVar15 + 0xc);
        fVar43 = *(float *)(lVar15 + 0x34);
        uVar18 = 10000;
        fVar42 = *(float *)(lVar15 + 0x10);
        do {
          fVar30 = fVar41 + fVar42;
          fVar31 = 1.0;
          if (fVar30 != fVar37 && fVar30 < fVar37 == (NAN(fVar30) || NAN(fVar37))) {
            fVar31 = (fVar37 - fVar42) / fVar41;
          }
          uVar4 = uVar18 - 1;
          if ((fVar29 < fVar43) && (1 < uVar18)) {
            uVar38 = NEON_fmadd(fVar36,fVar31,fVar35);
            uVar32 = NEON_fmadd(fVar41,fVar31,fVar42);
            uVar18 = uVar4;
            fVar31 = fVar29;
            uVar28 = uVar14;
            do {
              fVar44 = fVar40 + fVar31;
              fVar33 = 1.0;
              if (fVar44 != fVar43 && fVar44 < fVar43 == (NAN(fVar44) || NAN(fVar43))) {
                fVar33 = (fVar43 - fVar31) / fVar40;
              }
              uVar47 = NEON_fmadd(fVar40,fVar33,fVar31);
              uVar46 = NEON_fmadd(local_cc,fVar33,fVar45);
              puVar9 = (uint *)operator_new(0x14);
              *puVar9 = uVar28;
              puVar9[1] = (uint)fVar45;
              puVar9[2] = (uint)fVar35;
              puVar9[3] = (uint)fVar31;
              puVar9[4] = (uint)fVar42;
              puVar10 = (undefined8 *)operator_new(0x28);
              uVar34 = *(undefined8 *)(puVar9 + 2);
              uVar13 = *(undefined8 *)puVar9;
              uVar14 = puVar9[4];
              *(undefined4 *)(puVar10 + 3) = uVar46;
              *(float *)((long)puVar10 + 0x1c) = fVar35;
              *(undefined4 *)(puVar10 + 4) = uVar47;
              *(float *)((long)puVar10 + 0x24) = fVar42;
              puVar10[1] = uVar34;
              *puVar10 = uVar13;
              *(uint *)(puVar10 + 2) = uVar14;
              *(uint *)((long)puVar10 + 0x14) = uVar28 + 1;
              operator_delete(puVar9);
              puVar11 = (undefined8 *)operator_new(0x50);
              uVar34 = *(undefined8 *)((long)puVar10 + 0x1c);
              uVar13 = *(undefined8 *)((long)puVar10 + 0x14);
              uVar2 = *(undefined4 *)((long)puVar10 + 0x24);
              *(undefined4 *)((long)puVar11 + 0x2c) = uVar46;
              *(undefined4 *)(puVar11 + 6) = uVar38;
              *(undefined8 *)((long)puVar11 + 0x1c) = uVar34;
              *(undefined8 *)((long)puVar11 + 0x14) = uVar13;
              uVar34 = puVar10[1];
              uVar13 = *puVar10;
              *(undefined4 *)((long)puVar11 + 0x24) = uVar2;
              *(uint *)(puVar11 + 5) = uVar28 + 2;
              uVar2 = *(undefined4 *)(puVar10 + 2);
              *(undefined4 *)((long)puVar11 + 0x34) = uVar47;
              *(undefined4 *)(puVar11 + 7) = uVar32;
              puVar11[1] = uVar34;
              *puVar11 = uVar13;
              *(undefined4 *)(puVar11 + 2) = uVar2;
              operator_delete(puVar10);
              uVar14 = uVar28 + 4;
              *(uint *)((long)puVar11 + 0x3c) = uVar28 + 3;
              uVar13 = *(undefined8 *)(param_1 + 8);
              *(float *)(puVar11 + 8) = fVar45;
              *(undefined4 *)((long)puVar11 + 0x44) = uVar38;
              *(float *)(puVar11 + 9) = fVar31;
              *(undefined4 *)((long)puVar11 + 0x4c) = uVar32;
              FUN_004bb344(param_1,uVar13,puVar11,puVar11 + 10,4);
              lVar19 = 0;
              psVar21 = *(short **)(param_2 + 8);
              do {
                sVar3 = (short)uVar28 + *(short *)(puVar6 + lVar19);
                if (psVar21 < *(short **)(param_2 + 0x10)) {
                  psVar27 = psVar21 + 1;
                  *psVar21 = sVar3;
                }
                else {
                  psVar26 = *(short **)param_2;
                  lVar20 = (long)psVar21 - (long)psVar26;
                  lVar15 = lVar20 >> 1;
                  if (lVar15 == -2 || lVar15 + 2 < 0 != SCARRY8(lVar15,2)) {
                    FUN_00375898();
LAB_004bb340:
                    /* WARNING: Subroutine does not return */
                    FUN_00324008();
                  }
                  uVar16 = (long)*(short **)(param_2 + 0x10) - (long)psVar26;
                  uVar1 = uVar16;
                  if (uVar16 <= lVar15 + 1U) {
                    uVar1 = lVar15 + 1;
                  }
                  if (0x7ffffffffffffffd < uVar16) {
                    uVar1 = 0x7fffffffffffffff;
                  }
                  if (uVar1 == 0) {
                    pvVar12 = (void *)0x0;
                  }
                  else {
                    if ((long)uVar1 < 0) goto LAB_004bb340;
                    pvVar12 = operator_new(uVar1 << 1);
                  }
                  psVar17 = (short *)((long)pvVar12 + lVar15 * 2);
                  psVar27 = psVar17 + 1;
                  *psVar17 = sVar3;
                  if ((long)psVar21 - (long)psVar26 != 0) {
                    uVar16 = ((long)psVar21 - (long)psVar26) - 2;
                    if ((((0x5d < uVar16) &&
                         (uVar22 = (long)pvVar12 + lVar20 + -2,
                         uVar22 - (uVar16 & 0xfffffffffffffffe) <= uVar22)) &&
                        ((short *)((long)(psVar21 + -1) - (uVar16 & 0xfffffffffffffffe)) <=
                         psVar21 + -1)) &&
                       (0x1f < (ulong)((long)psVar21 + (-lVar20 - (long)pvVar12)))) {
                      psVar24 = psVar17 + -8;
                      psVar25 = psVar21 + -8;
                      uVar16 = (uVar16 >> 1) + 1;
                      uVar23 = uVar16 & 0xfffffffffffffff0;
                      psVar21 = psVar21 + -uVar23;
                      uVar22 = uVar23;
                      do {
                        psVar5 = psVar25 + -4;
                        uVar39 = *(undefined8 *)(psVar25 + -8);
                        uVar34 = *(undefined8 *)(psVar25 + 4);
                        uVar13 = *(undefined8 *)psVar25;
                        uVar22 = uVar22 - 0x10;
                        psVar25 = psVar25 + -0x10;
                        *(undefined8 *)(psVar24 + -4) = *(undefined8 *)psVar5;
                        *(undefined8 *)(psVar24 + -8) = uVar39;
                        *(undefined8 *)(psVar24 + 4) = uVar34;
                        *(undefined8 *)psVar24 = uVar13;
                        psVar24 = psVar24 + -0x10;
                      } while (uVar22 != 0);
                      psVar17 = psVar17 + -uVar23;
                      if (uVar16 == uVar23) goto LAB_004bb200;
                    }
                    do {
                      psVar21 = psVar21 + -1;
                      psVar17 = psVar17 + -1;
                      *psVar17 = *psVar21;
                    } while (psVar21 != psVar26);
                  }
LAB_004bb200:
                  *(short **)param_2 = psVar17;
                  *(short **)(param_2 + 8) = psVar27;
                  *(void **)(param_2 + 0x10) = (void *)((long)pvVar12 + uVar1 * 2);
                  if (psVar26 != (short *)0x0) {
                    operator_delete(psVar26);
                  }
                }
                lVar19 = lVar19 + 2;
                *(short **)(param_2 + 8) = psVar27;
                psVar21 = psVar27;
              } while (lVar19 != 0xc);
              operator_delete(puVar11);
              uVar4 = uVar18 - 1;
            } while ((fVar44 < fVar43) &&
                    (bVar7 = 1 < (int)uVar18, uVar18 = uVar4, fVar31 = fVar44, uVar28 = uVar14,
                    bVar7));
          }
          uVar18 = uVar4;
        } while ((fVar30 < fVar37) && (fVar42 = fVar30, 0 < (int)uVar18));
      }
      iVar8 = uVar14 - param_4;
    }
  }
  return iVar8;
}


// ===== 004bb344  FUN_004bb344 =====

void FUN_004bb344(long *param_1,void *param_2,undefined8 *param_3,long param_4,long param_5)

{
  void *__dest;
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  undefined8 *__dest_00;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (0 < param_5) {
    __dest_00 = (undefined8 *)param_1[1];
    if ((param_1[2] - (long)__dest_00 >> 2) * -0x3333333333333333 < param_5) {
      lVar12 = *param_1;
      uVar8 = param_5 + ((long)__dest_00 - lVar12 >> 2) * -0x3333333333333333;
      if (0xccccccccccccccc < uVar8) {
        FUN_004bb5bc();
LAB_004bb5b8:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      lVar5 = param_1[2] - lVar12 >> 2;
      uVar11 = lVar5 * -0x6666666666666666;
      if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
        uVar11 = uVar8;
      }
      if (0x666666666666665 < (ulong)(lVar5 * -0x3333333333333333)) {
        uVar11 = 0xccccccccccccccc;
      }
      if (uVar11 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (0xccccccccccccccc < uVar11) goto LAB_004bb5b8;
        pvVar2 = operator_new(uVar11 * 0x14);
      }
      puVar13 = (undefined8 *)((long)pvVar2 + ((long)param_2 - lVar12 >> 2) * 4);
      param_5 = param_5 * 0x14;
      __dest = (void *)((long)puVar13 + param_5);
      puVar6 = puVar13;
      do {
        uVar15 = param_3[1];
        uVar14 = *param_3;
        param_5 = param_5 + -0x14;
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_3 + 2);
        puVar6[1] = uVar15;
        *puVar6 = uVar14;
        puVar6 = (undefined8 *)((long)puVar6 + 0x14);
        param_3 = (undefined8 *)((long)param_3 + 0x14);
      } while (param_5 != 0);
      pvVar7 = (void *)*param_1;
      pvVar3 = param_2;
      if (pvVar7 != param_2) {
        do {
          uVar15 = *(undefined8 *)((long)pvVar3 + -0xc);
          uVar14 = *(undefined8 *)((long)pvVar3 + -0x14);
          pvVar10 = (void *)((long)pvVar3 + -0x14);
          *(undefined4 *)((long)puVar13 + -4) = *(undefined4 *)((long)pvVar3 + -4);
          *(undefined8 *)((long)puVar13 + -0xc) = uVar15;
          *(undefined8 *)((long)puVar13 + -0x14) = uVar14;
          puVar13 = (undefined8 *)((long)puVar13 + -0x14);
          pvVar3 = pvVar10;
        } while (pvVar10 != pvVar7);
        __dest_00 = (undefined8 *)param_1[1];
      }
      sVar4 = (long)__dest_00 - (long)param_2;
      if (sVar4 != 0) {
        memmove(__dest,param_2,sVar4);
      }
      pvVar3 = (void *)*param_1;
      param_1[2] = (long)((long)pvVar2 + uVar11 * 0x14);
      *param_1 = (long)puVar13;
      param_1[1] = (long)__dest + sVar4;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
        return;
      }
    }
    else {
      lVar12 = (long)__dest_00 - (long)param_2;
      if ((lVar12 >> 2) * -0x3333333333333333 < param_5) {
        pvVar2 = (void *)((long)param_3 + lVar12);
        sVar4 = param_4 - (long)pvVar2;
        if (sVar4 != 0) {
          memmove(__dest_00,pvVar2,sVar4);
        }
        param_1[1] = (long)((long)__dest_00 + sVar4);
        puVar6 = (undefined8 *)((long)__dest_00 + sVar4);
        if (lVar12 < 1) {
          return;
        }
      }
      else {
        pvVar2 = (void *)((long)param_3 + param_5 * 0x14);
        puVar6 = __dest_00;
      }
      puVar13 = (undefined8 *)((long)param_2 + param_5 * 0x14);
      puVar1 = puVar6;
      for (puVar9 = (undefined8 *)((long)puVar6 + param_5 * -0x14); puVar9 < __dest_00;
          puVar9 = (undefined8 *)((long)puVar9 + 0x14)) {
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar9 + 2);
        puVar1[1] = uVar15;
        *puVar1 = uVar14;
        puVar1 = (undefined8 *)((long)puVar1 + 0x14);
      }
      param_1[1] = (long)puVar1;
      if (puVar6 != puVar13) {
        sVar4 = (long)puVar6 - (long)puVar13;
        memmove((void *)((long)puVar6 - sVar4),param_2,sVar4);
      }
      if ((long)pvVar2 - (long)param_3 != 0) {
        memmove(param_2,param_3,(long)pvVar2 - (long)param_3);
        return;
      }
    }
  }
  return;
}


// ===== 004bb5bc  FUN_004bb5bc =====

void FUN_004bb5bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004bb5d0  rive::SliceMesh::calc =====

/* rive::SliceMesh::calc() */

void rive::SliceMesh::calc(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  short *psVar8;
  ushort uVar9;
  void *pvVar10;
  uint *puVar11;
  uint *puVar12;
  void *pvVar13;
  short sVar14;
  int iVar15;
  SliceMesh *in_x0;
  SliceMesh *pSVar16;
  void *pvVar17;
  vector *in_x1;
  vector *extraout_x1;
  long lVar18;
  long lVar19;
  short *psVar20;
  undefined8 *puVar21;
  long lVar22;
  uint *puVar23;
  void *pvVar24;
  short *psVar25;
  long lVar26;
  void *pvVar27;
  ulong uVar28;
  uint *puVar29;
  ulong uVar30;
  void *pvVar31;
  ulong uVar32;
  short *psVar33;
  undefined8 *puVar34;
  long *plVar35;
  ulong uVar36;
  short *psVar37;
  undefined8 *puVar38;
  ulong uVar39;
  short *psVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  uint *puVar44;
  ushort uVar45;
  int iVar46;
  short *psVar47;
  undefined8 *puVar48;
  undefined2 uVar49;
  float fVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  int local_104;
  uint *local_100;
  uint *local_f8;
  uint *local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  pSVar16 = in_x0 + 0x58;
  lVar22 = *(long *)(in_x0 + 0x20);
  *(undefined8 *)(in_x0 + 0x60) = *(undefined8 *)pSVar16;
  *(undefined8 *)(in_x0 + 0x48) = *(undefined8 *)(in_x0 + 0x40);
  lVar18 = *(long *)(lVar22 + 0x30);
  *(undefined8 *)(in_x0 + 0x30) = *(undefined8 *)(in_x0 + 0x28);
  lVar26 = *(long *)(lVar18 + 0x198);
  if (lVar26 == 0) {
LAB_004bb684:
    local_88 = (void *)0x0;
    local_80 = (void *)0x0;
    local_78 = 0;
  }
  else {
    if (*(long *)(lVar26 + 0x88) == 0) {
      fVar50 = *(float *)(lVar26 + 0x84);
      if (fVar50 != 0.0) goto LAB_004bb650;
      goto LAB_004bb684;
    }
    fVar50 = (float)*(int *)(*(long *)(lVar26 + 0x88) + 0x10);
    if (fVar50 == 0.0) goto LAB_004bb684;
LAB_004bb650:
    if (*(float *)(lVar18 + 0xc0) == 0.0) goto LAB_004bb684;
    NSlicerHelpers::uvStops((NSlicerHelpers *)(lVar22 + 0xa8),in_x1,fVar50);
    lVar22 = *(long *)(in_x0 + 0x20);
    lVar18 = *(long *)(lVar22 + 0x30);
    lVar26 = *(long *)(lVar18 + 0x198);
    in_x1 = extraout_x1;
  }
  if (lVar26 != 0) {
    if (*(long *)(lVar26 + 0x88) == 0) {
      fVar50 = *(float *)(lVar26 + 0x80);
    }
    else {
      fVar50 = (float)*(int *)(*(long *)(lVar26 + 0x88) + 0x14);
    }
    if ((fVar50 != 0.0) && (*(float *)(lVar18 + 0xc4) != 0.0)) {
      NSlicerHelpers::uvStops((NSlicerHelpers *)(lVar22 + 0xc0),in_x1,fVar50);
      goto LAB_004bb6e0;
    }
  }
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = 0;
LAB_004bb6e0:
  vertexStops(&local_b8,in_x0,&local_88,0);
  vertexStops(&local_d0,in_x0,&local_a0,1);
  lVar22 = *(long *)(in_x0 + 0x20);
  local_e8 = (void *)0x0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  if (1 < (int)((ulong)((long)local_98 - (long)local_a0) >> 2)) {
    uVar9 = 0;
    local_104 = 0;
    pvVar17 = local_80;
    pvVar24 = local_88;
    pvVar27 = local_98;
    pvVar31 = local_a0;
    do {
      if (1 < (int)((ulong)((long)pvVar17 - (long)pvVar24) >> 2)) {
        iVar15 = 0;
        do {
          uVar28 = *(ulong *)(lVar22 + 0xe0);
          if (uVar28 != 0) {
            uVar51 = NEON_cnt(uVar28,1);
            uVar49 = NEON_uaddlv(uVar51,1);
            uVar36 = CONCAT62((int6)((ulong)uVar51 >> 0x10),uVar49) & 0xffffffff;
            iVar46 = local_104 +
                     local_104 *
                     (int)((ulong)(*(long *)(*(long *)(in_x0 + 0x20) + 0xb0) -
                                  *(long *)(*(long *)(in_x0 + 0x20) + 0xa8)) >> 3) + iVar15;
            uVar32 = (ulong)iVar46;
            if (uVar36 < 2) {
              uVar30 = uVar28 - 1 & uVar32;
            }
            else {
              uVar30 = uVar32;
              if (uVar28 <= uVar32) {
                uVar30 = 0;
                if (uVar28 != 0) {
                  uVar30 = uVar32 / uVar28;
                }
                uVar30 = uVar32 - uVar30 * uVar28;
              }
            }
            plVar35 = *(long **)(*(long *)(lVar22 + 0xd8) + uVar30 * 8);
            if ((plVar35 != (long *)0x0) && (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)) {
              do {
                uVar39 = plVar35[1];
                if (uVar39 == uVar32) {
                  if ((int)plVar35[2] == iVar46) {
                    iVar46 = *(int *)((long)plVar35 + 0x14);
                    if (iVar46 == 2) goto LAB_004bba4c;
                    goto LAB_004bb854;
                  }
                }
                else {
                  if (uVar36 < 2) {
                    uVar39 = uVar39 & uVar28 - 1;
                  }
                  else if (uVar28 <= uVar39) {
                    uVar6 = 0;
                    if (uVar28 != 0) {
                      uVar6 = uVar39 / uVar28;
                    }
                    uVar39 = uVar39 - uVar6 * uVar28;
                  }
                  if (uVar39 != uVar30) break;
                }
                plVar35 = (long *)*plVar35;
              } while (plVar35 != (long *)0x0);
            }
          }
          iVar46 = 0;
LAB_004bb854:
          lVar18 = 0;
          local_100 = (uint *)0x0;
          local_f8 = (uint *)0x0;
          local_f0 = (uint *)0x0;
          uVar45 = uVar9;
          do {
            puVar44 = local_f8;
            puVar12 = local_100;
            uVar1 = *(int *)(PTR_patchCorners_0067d770 + lVar18) + iVar15;
            uVar2 = *(int *)((long)(PTR_patchCorners_0067d770 + lVar18) + 4) + local_104;
            uVar28 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
            uVar36 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            uVar2 = *(uint *)((long)local_88 + uVar28);
            uVar3 = *(uint *)((long)local_b8 + uVar28);
            uVar1 = (uint)uVar45;
            uVar4 = *(uint *)((long)local_a0 + uVar36);
            uVar5 = *(uint *)((long)local_d0 + uVar36);
            if (iVar46 == 1) {
              uVar1 = 0xffffffff;
            }
            if (local_f8 < local_f0) {
              *local_f8 = uVar1;
              local_f8[1] = uVar2;
              local_f8[2] = uVar4;
              local_f8[3] = uVar3;
              local_f8[4] = uVar5;
              puVar23 = local_f8 + 5;
            }
            else {
              lVar26 = (long)local_f8 - (long)local_100 >> 2;
              uVar28 = lVar26 * -0x3333333333333333 + 1;
              if (0xccccccccccccccc < uVar28) {
                FUN_004bb5bc();
                goto LAB_004bbf74;
              }
              lVar19 = (long)local_f0 - (long)local_100 >> 2;
              uVar36 = lVar19 * -0x6666666666666666;
              if (uVar36 < uVar28 || uVar36 - uVar28 == 0) {
                uVar36 = uVar28;
              }
              if (0x666666666666665 < (ulong)(lVar19 * -0x3333333333333333)) {
                uVar36 = 0xccccccccccccccc;
              }
              if (uVar36 == 0) {
                pvVar17 = (void *)0x0;
              }
              else {
                if (0xccccccccccccccc < uVar36) goto LAB_004bbf74;
                pvVar17 = operator_new(uVar36 * 0x14);
              }
              puVar23 = (uint *)((long)pvVar17 + lVar26 * 4);
              *puVar23 = uVar1;
              puVar23[1] = uVar2;
              puVar23[2] = uVar4;
              puVar23[3] = uVar3;
              puVar23[4] = uVar5;
              puVar29 = puVar23;
              puVar11 = puVar44;
              for (; puVar44 != puVar12; puVar44 = puVar44 + -5) {
                uVar52 = *(undefined8 *)(puVar44 + -3);
                uVar51 = *(undefined8 *)(puVar44 + -5);
                puVar29[-1] = puVar44[-1];
                *(undefined8 *)(puVar29 + -3) = uVar52;
                *(undefined8 *)(puVar29 + -5) = uVar51;
                puVar29 = puVar29 + -5;
                puVar11 = local_100;
              }
              puVar23 = puVar23 + 5;
              local_f0 = (uint *)((long)pvVar17 + uVar36 * 0x14);
              local_100 = puVar29;
              if (puVar11 != (uint *)0x0) {
                local_f8 = puVar23;
                operator_delete(puVar11);
              }
            }
            lVar18 = lVar18 + 8;
            uVar45 = uVar45 + (iVar46 != 1);
            local_f8 = puVar23;
          } while (lVar18 != 0x20);
          if (iVar46 == 1) {
            sVar14 = tileRepeat(in_x0,(vector *)&local_e8,pSVar16,(vector *)&local_100,uVar9);
            uVar45 = sVar14 + uVar45;
          }
          else {
            FUN_004bb344(&local_e8,local_e0,local_100,puVar23,
                         ((long)puVar23 - (long)local_100 >> 2) * -0x3333333333333333);
            lVar18 = 0;
            psVar25 = *(short **)(in_x0 + 0x60);
            do {
              sVar14 = *(short *)(PTR_triangulation_0067d778 + lVar18);
              if (psVar25 < *(short **)(in_x0 + 0x68)) {
                psVar47 = psVar25 + 1;
                *psVar25 = sVar14 + uVar9;
              }
              else {
                psVar40 = *(short **)pSVar16;
                lVar26 = (long)psVar25 - (long)psVar40;
                lVar19 = lVar26 >> 1;
                if (lVar19 == -2 || lVar19 + 2 < 0 != SCARRY8(lVar19,2)) {
                  FUN_00375898();
                  goto LAB_004bbf7c;
                }
                uVar36 = (long)*(short **)(in_x0 + 0x68) - (long)psVar40;
                uVar28 = uVar36;
                if (uVar36 <= lVar19 + 1U) {
                  uVar28 = lVar19 + 1;
                }
                if (0x7ffffffffffffffd < uVar36) {
                  uVar28 = 0x7fffffffffffffff;
                }
                if (uVar28 == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  if ((long)uVar28 < 0) goto LAB_004bbf74;
                  pvVar17 = operator_new(uVar28 << 1);
                }
                psVar20 = (short *)((long)pvVar17 + lVar19 * 2);
                psVar47 = psVar20 + 1;
                *psVar20 = sVar14 + uVar9;
                if ((long)psVar25 - (long)psVar40 != 0) {
                  uVar36 = ((long)psVar25 - (long)psVar40) - 2;
                  if ((((0x5d < uVar36) &&
                       (uVar32 = (long)pvVar17 + lVar26 + -2,
                       uVar32 - (uVar36 & 0xfffffffffffffffe) <= uVar32)) &&
                      ((short *)((long)(psVar25 + -1) - (uVar36 & 0xfffffffffffffffe)) <=
                       psVar25 + -1)) && (0x1f < (ulong)((long)psVar25 + (-lVar26 - (long)pvVar17)))
                     ) {
                    psVar33 = psVar20 + -8;
                    psVar37 = psVar25 + -8;
                    uVar36 = (uVar36 >> 1) + 1;
                    uVar30 = uVar36 & 0xfffffffffffffff0;
                    psVar25 = psVar25 + -uVar30;
                    uVar32 = uVar30;
                    do {
                      psVar8 = psVar37 + -4;
                      uVar53 = *(undefined8 *)(psVar37 + -8);
                      uVar52 = *(undefined8 *)(psVar37 + 4);
                      uVar51 = *(undefined8 *)psVar37;
                      uVar32 = uVar32 - 0x10;
                      psVar37 = psVar37 + -0x10;
                      *(undefined8 *)(psVar33 + -4) = *(undefined8 *)psVar8;
                      *(undefined8 *)(psVar33 + -8) = uVar53;
                      *(undefined8 *)(psVar33 + 4) = uVar52;
                      *(undefined8 *)psVar33 = uVar51;
                      psVar33 = psVar33 + -0x10;
                    } while (uVar32 != 0);
                    psVar20 = psVar20 + -uVar30;
                    if (uVar36 == uVar30) goto LAB_004bbb6c;
                  }
                  do {
                    psVar25 = psVar25 + -1;
                    psVar20 = psVar20 + -1;
                    *psVar20 = *psVar25;
                  } while (psVar25 != psVar40);
                }
LAB_004bbb6c:
                *(short **)(in_x0 + 0x58) = psVar20;
                *(short **)(in_x0 + 0x60) = psVar47;
                *(void **)(in_x0 + 0x68) = (void *)((long)pvVar17 + uVar28 * 2);
                if (psVar40 != (short *)0x0) {
                  operator_delete(psVar40);
                }
              }
              lVar18 = lVar18 + 2;
              *(short **)(in_x0 + 0x60) = psVar47;
              psVar25 = psVar47;
            } while (lVar18 != 0xc);
          }
          uVar9 = uVar45;
          pvVar17 = local_80;
          pvVar24 = local_88;
          if (local_100 != (uint *)0x0) {
            operator_delete(local_100);
            pvVar17 = local_80;
            pvVar24 = local_88;
          }
LAB_004bba4c:
          iVar15 = iVar15 + 1;
          pvVar27 = local_98;
          pvVar31 = local_a0;
        } while (iVar15 < (int)((ulong)((long)pvVar17 - (long)pvVar24) >> 2) + -1);
      }
      pvVar13 = local_e0;
      local_104 = local_104 + 1;
      pvVar10 = local_e8;
    } while (local_104 < (int)((ulong)((long)pvVar27 - (long)pvVar31) >> 2) + -1);
    for (; pvVar10 != pvVar13; pvVar10 = (void *)((long)pvVar10 + 0x14)) {
      puVar43 = *(undefined8 **)(in_x0 + 0x48);
      if (puVar43 < *(undefined8 **)(in_x0 + 0x50)) {
        puVar21 = puVar43 + 1;
        *puVar43 = *(undefined8 *)((long)pvVar10 + 0xc);
      }
      else {
        puVar41 = *(undefined8 **)(in_x0 + 0x40);
        lVar22 = (long)puVar43 - (long)puVar41 >> 3;
        uVar28 = lVar22 + 1;
        if (uVar28 >> 0x3d != 0) {
LAB_004bbf7c:
                    /* WARNING: Subroutine does not return */
          FUN_00371ef8();
        }
        uVar32 = (long)*(undefined8 **)(in_x0 + 0x50) - (long)puVar41;
        uVar36 = (long)uVar32 >> 2;
        if (uVar36 <= uVar28) {
          uVar36 = uVar28;
        }
        if (0x7ffffffffffffff7 < uVar32) {
          uVar36 = 0x1fffffffffffffff;
        }
        if (uVar36 == 0) {
          pvVar17 = (void *)0x0;
        }
        else {
          if (uVar36 >> 0x3d != 0) {
LAB_004bbf74:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar17 = operator_new(uVar36 << 3);
        }
        puVar42 = (undefined8 *)((long)pvVar17 + lVar22 * 8);
        puVar21 = puVar42 + 1;
        *puVar42 = *(undefined8 *)((long)pvVar10 + 0xc);
        if ((long)puVar43 - (long)puVar41 != 0) {
          uVar28 = ((long)puVar43 - (long)puVar41) - 8;
          puVar48 = puVar43;
          if ((0x37 < uVar28) &&
             (0x1f < (ulong)((long)puVar43 + (-((long)puVar43 - (long)puVar41) - (long)pvVar17)))) {
            puVar34 = puVar42 + -2;
            puVar38 = puVar43 + -2;
            uVar28 = (uVar28 >> 3) + 1;
            uVar30 = uVar28 & 0x3ffffffffffffffc;
            puVar48 = puVar43 + -uVar30;
            uVar32 = uVar30;
            do {
              puVar43 = puVar38 + -1;
              uVar53 = puVar38[-2];
              uVar52 = puVar38[1];
              uVar51 = *puVar38;
              uVar32 = uVar32 - 4;
              puVar38 = puVar38 + -4;
              puVar34[-1] = *puVar43;
              puVar34[-2] = uVar53;
              puVar34[1] = uVar52;
              *puVar34 = uVar51;
              puVar34 = puVar34 + -4;
            } while (uVar32 != 0);
            puVar42 = puVar42 + -uVar30;
            puVar43 = puVar41;
            if (uVar28 == uVar30) goto LAB_004bbda4;
          }
          do {
            puVar48 = puVar48 + -1;
            puVar42 = puVar42 + -1;
            *puVar42 = *puVar48;
          } while (puVar48 != puVar41);
          puVar43 = *(undefined8 **)(in_x0 + 0x40);
        }
LAB_004bbda4:
        *(undefined8 **)(in_x0 + 0x40) = puVar42;
        *(undefined8 **)(in_x0 + 0x48) = puVar21;
        *(void **)(in_x0 + 0x50) = (void *)((long)pvVar17 + uVar36 * 8);
        if (puVar43 != (undefined8 *)0x0) {
          operator_delete(puVar43);
        }
      }
      puVar43 = *(undefined8 **)(in_x0 + 0x30);
      *(undefined8 **)(in_x0 + 0x48) = puVar21;
      if (puVar43 < *(undefined8 **)(in_x0 + 0x38)) {
        puVar41 = puVar43 + 1;
        *puVar43 = *(undefined8 *)((long)pvVar10 + 4);
      }
      else {
        puVar42 = *(undefined8 **)(in_x0 + 0x28);
        lVar22 = (long)puVar43 - (long)puVar42 >> 3;
        uVar28 = lVar22 + 1;
        if (uVar28 >> 0x3d != 0) goto LAB_004bbf7c;
        uVar32 = (long)*(undefined8 **)(in_x0 + 0x38) - (long)puVar42;
        uVar36 = (long)uVar32 >> 2;
        if (uVar36 <= uVar28) {
          uVar36 = uVar28;
        }
        if (0x7ffffffffffffff7 < uVar32) {
          uVar36 = 0x1fffffffffffffff;
        }
        if (uVar36 == 0) {
          pvVar17 = (void *)0x0;
        }
        else {
          if (uVar36 >> 0x3d != 0) goto LAB_004bbf74;
          pvVar17 = operator_new(uVar36 << 3);
        }
        puVar21 = (undefined8 *)((long)pvVar17 + lVar22 * 8);
        puVar41 = puVar21 + 1;
        *puVar21 = *(undefined8 *)((long)pvVar10 + 4);
        if ((long)puVar43 - (long)puVar42 != 0) {
          uVar28 = ((long)puVar43 - (long)puVar42) - 8;
          puVar48 = puVar43;
          if ((0x37 < uVar28) &&
             (0x1f < (ulong)((long)puVar43 + (-((long)puVar43 - (long)puVar42) - (long)pvVar17)))) {
            puVar34 = puVar21 + -2;
            puVar38 = puVar43 + -2;
            uVar28 = (uVar28 >> 3) + 1;
            uVar30 = uVar28 & 0x3ffffffffffffffc;
            puVar48 = puVar43 + -uVar30;
            uVar32 = uVar30;
            do {
              puVar43 = puVar38 + -1;
              uVar53 = puVar38[-2];
              uVar52 = puVar38[1];
              uVar51 = *puVar38;
              uVar32 = uVar32 - 4;
              puVar38 = puVar38 + -4;
              puVar34[-1] = *puVar43;
              puVar34[-2] = uVar53;
              puVar34[1] = uVar52;
              *puVar34 = uVar51;
              puVar34 = puVar34 + -4;
            } while (uVar32 != 0);
            puVar21 = puVar21 + -uVar30;
            puVar43 = puVar42;
            if (uVar28 == uVar30) goto LAB_004bbecc;
          }
          do {
            puVar48 = puVar48 + -1;
            puVar21 = puVar21 + -1;
            *puVar21 = *puVar48;
          } while (puVar48 != puVar42);
          puVar43 = *(undefined8 **)(in_x0 + 0x28);
        }
LAB_004bbecc:
        *(undefined8 **)(in_x0 + 0x28) = puVar21;
        *(undefined8 **)(in_x0 + 0x30) = puVar41;
        *(void **)(in_x0 + 0x38) = (void *)((long)pvVar17 + uVar36 * 8);
        if (puVar43 != (undefined8 *)0x0) {
          operator_delete(puVar43);
        }
      }
      *(undefined8 **)(in_x0 + 0x30) = puVar41;
    }
    if (local_e8 != (void *)0x0) {
      operator_delete(local_e8);
    }
  }
  if (local_d0 != (void *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (local_b8 != (void *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
  if (local_a0 != (void *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bbf84  rive::SliceMesh::update =====

/* rive::SliceMesh::update() */

void __thiscall rive::SliceMesh::update(SliceMesh *this)

{
  long lVar1;
  
  if (((*(long *)(this + 0x20) != 0) &&
      (lVar1 = *(long *)(*(long *)(this + 0x20) + 0x30), lVar1 != 0)) &&
     (*(long *)(lVar1 + 0x198) != 0)) {
    calc();
    updateBuffers(this);
    return;
  }
  return;
}


// ===== 004bbfc4  rive::Star::Star =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Star::Star() */

void __thiscall rive::Star::Star(Star *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  uVar2 = _UNK_00281c00;
  uVar1 = _DAT_00281bf8;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  uVar3 = DAT_0024e658;
  *(undefined8 *)(this + 0x120) = uVar2;
  *(undefined8 *)(this + 0x118) = uVar1;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0xac) = uVar2;
  *(undefined8 *)(this + 0xa4) = uVar1;
  *(undefined8 *)(this + 0xd8) = uVar2;
  *(undefined8 *)(this + 0xd0) = uVar1;
  uVar2 = _UNK_0024e008;
  uVar1 = _DAT_0024e000;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x1b0) = uVar2;
  *(undefined8 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xbc) = uVar3;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (Star)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (Star)0x0;
  this[0x1a0] = (Star)0x0;
  *(undefined2 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x1b8) = 5;
  *(undefined8 *)(this + 0x1c0) = 0;
  puVar4 = PTR_vtable_0067d788;
  *(undefined4 *)(this + 0x1d8) = 0x3f000000;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined **)(this + 200) = puVar4 + 0x268;
  return;
}


// ===== 004bc0a8  FUN_004bc0a8 =====

void FUN_004bc0a8(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[0x38];
  puVar1 = PTR_vtable_0067d760 + 0x260;
  *param_1 = (long)(PTR_vtable_0067d760 + 0x10);
  param_1[0x19] = (long)puVar1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0x39];
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar3 = puVar3 + -0x17;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar4);
      puVar2 = (undefined8 *)param_1[0x38];
    }
    param_1[0x39] = (long)puVar4;
    operator_delete(puVar2);
  }
  FUN_004125dc(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004bc138  FUN_004bc138 =====

undefined8 FUN_004bc138(void)

{
  return 0x34;
}


// ===== 004bc140  FUN_004bc140 =====

bool FUN_004bc140(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x35) && ((1L << ((ulong)param_2 & 0x3f) & 0x18004000009c04U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 004bc180  FUN_004bc180 =====

undefined8 FUN_004bc180(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined4 uVar10;
  
  if (param_2 != 0x7d) {
    if (param_2 == 0x7e) {
      puVar6 = (undefined4 *)param_3[2];
      puVar5 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar5 - (long)puVar6 < 4) {
        uVar10 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar5 = puVar6 + 1;
        uVar10 = *puVar6;
      }
      *(undefined4 *)(param_1 + 0x1bc) = uVar10;
    }
    else {
      if (param_2 != 0x7f) {
        uVar3 = FUN_004a29a4();
        return uVar3;
      }
      puVar6 = (undefined4 *)param_3[2];
      puVar5 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar5 - (long)puVar6 < 4) {
        uVar10 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar5 = puVar6 + 1;
        uVar10 = *puVar6;
      }
      *(undefined4 *)(param_1 + 0x1d8) = uVar10;
    }
    param_3[2] = (long)puVar5;
    return 1;
  }
  uVar9 = 0;
  uVar4 = 0;
  pbVar7 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_004bc248;
    }
    pbVar8 = pbVar7 + 1;
    bVar1 = *pbVar7;
    uVar2 = uVar9 & 0x3f;
    uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
    uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
    pbVar7 = pbVar8;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar8;
  if (uVar4 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004bc248:
    uVar4 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x1b8) = (int)uVar4;
  return 1;
}


// ===== 004bc284  rive::Star::update =====

/* rive::Star::update(rive::ComponentDirt) */

void rive::Star::update(void)

{
  (*(code *)PTR_update_00680990)();
  return;
}


// ===== 004bc288  rive::Star::vertexCount =====

/* rive::Star::vertexCount() */

int __thiscall rive::Star::vertexCount(Star *this)

{
  return *(int *)(this + 0x1b8) << 1;
}


// ===== 004bc294  rive::Star::buildPolygon =====

/* rive::Star::buildPolygon() */

void __thiscall rive::Star::buildPolygon(Star *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  fVar8 = *(float *)(this + 0x1a8);
  fVar13 = *(float *)(this + 0x1ac);
  fVar11 = *(float *)(this + 0x1d8);
  uVar12 = *(undefined4 *)(this + 0x1b0);
  uVar10 = *(undefined4 *)(this + 0x1b4);
  uVar1 = (**(code **)(*(long *)this + 0x230))();
  if (uVar1 != 0) {
    uVar3 = 0;
    fVar9 = -1.5707964;
    lVar4 = 0xb8;
    uVar12 = NEON_fmsub(uVar12,fVar8,fVar8 * 0.5);
    uVar10 = NEON_fmsub(uVar10,fVar13,fVar13 * 0.5);
    do {
      lVar5 = *(long *)(this + 0x1c0);
      lVar6 = lVar5 + lVar4;
      plVar2 = (long *)(lVar6 + -0xb8);
      fVar7 = cosf(fVar9);
      fVar7 = (float)NEON_fmadd(fVar7,fVar8 * 0.5,uVar12);
      if (*(float *)(lVar6 + -0x18) != fVar7) {
        *(float *)(lVar6 + -0x18) = fVar7;
        (**(code **)(*(long *)(lVar6 + -0xb8) + 0x98))(plVar2);
      }
      fVar7 = sinf(fVar9);
      fVar7 = (float)NEON_fmadd(fVar7,fVar13 * 0.5,uVar10);
      if (*(float *)(lVar6 + -0x14) != fVar7) {
        *(float *)(lVar6 + -0x14) = fVar7;
        (**(code **)(*plVar2 + 0xa0))(plVar2);
      }
      lVar5 = lVar5 + lVar4;
      if (*(float *)(lVar5 + -8) != *(float *)(this + 0x1bc)) {
        *(float *)(lVar5 + -8) = *(float *)(this + 0x1bc);
        (**(code **)(*plVar2 + 0xb8))(plVar2);
      }
      fVar9 = 6.2831855 / (float)uVar1 + fVar9;
      lVar6 = *(long *)(this + 0x1c0);
      plVar2 = (long *)(lVar6 + lVar4);
      fVar7 = cosf(fVar9);
      fVar7 = (float)NEON_fmadd(fVar7,fVar8 * fVar11 * 0.5,uVar12);
      if (*(float *)(plVar2 + 0x14) != fVar7) {
        *(float *)(plVar2 + 0x14) = fVar7;
        (**(code **)(*plVar2 + 0x98))(plVar2);
      }
      fVar7 = sinf(fVar9);
      fVar7 = (float)NEON_fmadd(fVar7,fVar13 * fVar11 * 0.5,uVar10);
      if (*(float *)((long)plVar2 + 0xa4) != fVar7) {
        *(float *)((long)plVar2 + 0xa4) = fVar7;
        (**(code **)(*plVar2 + 0xa0))(plVar2);
      }
      lVar6 = lVar6 + lVar4;
      if (*(float *)(lVar6 + 0xb0) != *(float *)(this + 0x1bc)) {
        lVar5 = *plVar2;
        *(float *)(lVar6 + 0xb0) = *(float *)(this + 0x1bc);
        (**(code **)(lVar5 + 0xb8))(plVar2);
      }
      fVar9 = 6.2831855 / (float)uVar1 + fVar9;
      uVar3 = uVar3 + 2;
      lVar4 = lVar4 + 0x170;
    } while (uVar3 < uVar1);
  }
  return;
}


// ===== 004bc494  rive::Star::innerRadiusChanged =====

/* rive::Star::innerRadiusChanged() */

void __thiscall rive::Star::innerRadiusChanged(Star *this)

{
                    /* WARNING: Could not recover jumptable at 0x004bc4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004bc4a4  rive::StarBase::clone =====

/* rive::StarBase::clone() const */

Star * __thiscall rive::StarBase::clone(StarBase *this)

{
  StarBase SVar1;
  Star *this_00;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  this_00 = (Star *)operator_new(0x1e0);
  Star::Star(this_00);
  uVar5 = *(undefined4 *)(this + 0x1bc);
  *(undefined4 *)(this_00 + 0x1d8) = *(undefined4 *)(this + 0x1d8);
  uVar4 = *(undefined8 *)(this + 0x1b0);
  uVar3 = *(undefined8 *)(this + 0x1a8);
  *(undefined4 *)(this_00 + 0x1bc) = uVar5;
  uVar6 = *(undefined8 *)(this + 0x110);
  *(undefined8 *)(this_00 + 0x1b0) = uVar4;
  *(undefined8 *)(this_00 + 0x1a8) = uVar3;
  uVar5 = *(undefined4 *)(this + 0x1b8);
  uVar3 = *(undefined8 *)(this + 0xbc);
  *(undefined8 *)(this_00 + 0x110) = uVar6;
  *(undefined4 *)(this_00 + 0x1b8) = uVar5;
  uVar5 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)(this_00 + 0xbc) = uVar3;
  uVar2 = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(this_00 + 0x134) = uVar5;
  SVar1 = this[0x138];
  *(undefined4 *)(this_00 + 0xc4) = uVar2;
  uVar5 = *(undefined4 *)(this + 0xa0);
  *(StarBase *)(this_00 + 0x138) = SVar1;
  *(undefined4 *)(this_00 + 0xa0) = uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004bc540  FUN_004bc540 =====

void FUN_004bc540(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[0x38];
  puVar1 = PTR_vtable_0067d760 + 0x260;
  *param_1 = (long)(PTR_vtable_0067d760 + 0x10);
  param_1[0x19] = (long)puVar1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0x39];
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar3 = puVar3 + -0x17;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar4);
      puVar2 = (undefined8 *)param_1[0x38];
    }
    param_1[0x39] = (long)puVar4;
    operator_delete(puVar2);
  }
  FUN_004125dc(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004bc5d0  FUN_004bc5d0 =====

void FUN_004bc5d0(void)

{
  return;
}


// ===== 004bc5d4  rive::StraightVertex::radiusChanged =====

/* rive::StraightVertex::radiusChanged() */

void __thiscall rive::StraightVertex::radiusChanged(StraightVertex *this)

{
                    /* WARNING: Could not recover jumptable at 0x004bc5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004bc5e0  FUN_004bc5e0 =====

void FUN_004bc5e0(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x11];
  *param_1 = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x12] = (long)pvVar1;
    operator_delete(pvVar1);
  }
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


// ===== 004bc66c  FUN_004bc66c =====

undefined8 FUN_004bc66c(void)

{
  return 5;
}


// ===== 004bc674  FUN_004bc674 =====

bool FUN_004bc674(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0xf) && ((1 << (ulong)(param_2 & 0x1f) & 0x4c20U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x6b;
}


// ===== 004bc6a4  FUN_004bc6a4 =====

undefined8 FUN_004bc6a4(long param_1,short param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 0x1a) {
    puVar3 = (undefined4 *)param_3[2];
    puVar2 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar2 - (long)puVar3 < 4) {
      uVar4 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar2 = puVar3 + 1;
      uVar4 = *puVar3;
    }
    param_3[2] = (long)puVar2;
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
    return 1;
  }
  uVar1 = FUN_003cdee4();
  return uVar1;
}


// ===== 004bc6fc  rive::StraightVertexBase::clone =====

/* rive::StraightVertexBase::clone() const */

long * __thiscall rive::StraightVertexBase::clone(StraightVertexBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  
  plVar2 = (long *)operator_new(0xb8);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x12] = 0;
  plVar2[0x11] = 0;
  plVar2[0x14] = 0;
  plVar2[0x13] = 0;
  puVar1 = PTR_vtable_0067d3d8;
  uVar3 = *(undefined4 *)(this + 0xb0);
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  *(undefined4 *)(plVar2 + 0x16) = uVar3;
  lVar4 = *(long *)(this + 0xa0);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x14] = lVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004bc7a0  FUN_004bc7a0 =====

void FUN_004bc7a0(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x11];
  *param_1 = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x12] = (long)pvVar1;
    operator_delete(pvVar1);
  }
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


// ===== 004bc82c  FUN_004bc82c =====

void FUN_004bc82c(void)

{
  return;
}


// ===== 004bc830  rive::Triangle::Triangle =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Triangle::Triangle() */

void __thiscall rive::Triangle::Triangle(Triangle *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = _UNK_00281c00;
  uVar3 = _DAT_00281bf8;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  uVar2 = DAT_0024e658;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  *(undefined8 *)(this + 0x120) = uVar4;
  *(undefined8 *)(this + 0x118) = uVar3;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xac) = uVar4;
  *(undefined8 *)(this + 0xa4) = uVar3;
  *(undefined8 *)(this + 0xbc) = uVar2;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = uVar4;
  *(undefined8 *)(this + 0xd0) = uVar3;
  uVar3 = _UNK_0024e008;
  uVar2 = _DAT_0024e000;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (Triangle)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (Triangle)0x0;
  this[0x1a0] = (Triangle)0x0;
  *(undefined2 *)(this + 0x160) = 0;
  puVar1 = PTR_vtable_0067d790;
  *(undefined8 *)(this + 0x1b0) = uVar3;
  *(undefined8 *)(this + 0x1a8) = uVar2;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x1c0) = 0xffffffff;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 200) = puVar1 + 0x240;
  *(undefined2 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined2 *)(this + 0x218) = 0xfffe;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  puVar1 = PTR_vtable_0067d3d8;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x264) = 0;
  *(undefined8 *)(this + 0x25c) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined4 *)(this + 0x278) = 0xffffffff;
  *(undefined **)(this + 0x1b8) = puVar1;
  *(undefined2 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined2 *)(this + 0x2d0) = 0xfffe;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x31c) = 0;
  *(undefined8 *)(this + 0x314) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined **)(this + 0x270) = puVar1;
  *(undefined4 *)(this + 0x330) = 0xffffffff;
  *(undefined2 *)(this + 0x338) = 0;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined2 *)(this + 0x388) = 0xfffe;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3d4) = 0;
  *(undefined8 *)(this + 0x3cc) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined **)(this + 0x328) = puVar1;
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x1b8));
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x270));
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x328));
  return;
}


// ===== 004bc9e4  FUN_004bc9e4 =====

void FUN_004bc9e4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  
  puVar2 = PTR_vtable_0067ced8;
  pvVar3 = (void *)param_1[0x76];
  puVar1 = PTR_vtable_0067d790 + 0x240;
  *param_1 = (long)(PTR_vtable_0067d790 + 0x10);
  param_1[0x19] = (long)puVar1;
  param_1[0x65] = (long)(puVar2 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x77] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  puVar1 = PTR_vtable_0067cee0;
  pvVar3 = (void *)param_1[0x72];
  param_1[0x65] = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x73] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x6e];
  if (pvVar3 != (void *)0x0) {
    param_1[0x6f] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  param_1[0x65] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 0x67) & 1) != 0) {
    operator_delete((void *)param_1[0x69]);
  }
  pvVar3 = (void *)param_1[0x5f];
  param_1[0x4e] = (long)(puVar2 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x60] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x5b];
  param_1[0x4e] = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x5c] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x57];
  if (pvVar3 != (void *)0x0) {
    param_1[0x58] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  param_1[0x4e] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete((void *)param_1[0x52]);
  }
  pvVar3 = (void *)param_1[0x48];
  param_1[0x37] = (long)(puVar2 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x49] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x44];
  param_1[0x37] = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x45] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x40];
  if (pvVar3 != (void *)0x0) {
    param_1[0x41] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  param_1[0x37] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 0x39) & 1) != 0) {
    operator_delete((void *)param_1[0x3b]);
  }
  FUN_004125dc(param_1);
  return;
}


// ===== 004bcb38  FUN_004bcb38 =====

void FUN_004bcb38(void *param_1)

{
  FUN_004bc9e4();
  operator_delete(param_1);
  return;
}


// ===== 004bcb5c  FUN_004bcb5c =====

undefined8 FUN_004bcb5c(void)

{
  return 8;
}


// ===== 004bcb64  FUN_004bcb64 =====

bool FUN_004bcb64(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x27) && ((1L << ((ulong)param_2 & 0x3f) & 0x4000009d04U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 004bcba0  rive::Triangle::update =====

/* rive::Triangle::update(rive::ComponentDirt) */

void __thiscall rive::Triangle::update(Triangle *this,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_2 >> 4 & 1) != 0) {
    fVar3 = -(*(float *)(this + 0x1b0) * *(float *)(this + 0x1a8));
    fVar2 = -(*(float *)(this + 0x1b4) * *(float *)(this + 0x1ac));
    fVar1 = fVar3 + *(float *)(this + 0x1a8) * 0.5;
    if (*(float *)(this + 600) != fVar1) {
      *(float *)(this + 600) = fVar1;
      (**(code **)(*(long *)(this + 0x1b8) + 0x98))(this + 0x1b8);
    }
    if (*(float *)(this + 0x25c) != fVar2) {
      *(float *)(this + 0x25c) = fVar2;
      (**(code **)(*(long *)(this + 0x1b8) + 0xa0))(this + 0x1b8);
    }
    if (*(float *)(this + 0x310) != fVar3 + *(float *)(this + 0x1a8)) {
      *(float *)(this + 0x310) = fVar3 + *(float *)(this + 0x1a8);
      (**(code **)(*(long *)(this + 0x270) + 0x98))(this + 0x270);
    }
    if (*(float *)(this + 0x314) != fVar2 + *(float *)(this + 0x1ac)) {
      *(float *)(this + 0x314) = fVar2 + *(float *)(this + 0x1ac);
      (**(code **)(*(long *)(this + 0x270) + 0xa0))(this + 0x270);
    }
    if (*(float *)(this + 0x3c8) != fVar3) {
      *(float *)(this + 0x3c8) = fVar3;
      (**(code **)(*(long *)(this + 0x328) + 0x98))(this + 0x328);
    }
    if (*(float *)(this + 0x3cc) != fVar2 + *(float *)(this + 0x1ac)) {
      *(float *)(this + 0x3cc) = fVar2 + *(float *)(this + 0x1ac);
      (**(code **)(*(long *)(this + 0x328) + 0xa0))(this + 0x328);
    }
  }
  Path::update((Path *)this,param_2);
  return;
}


// ===== 004bccd0  rive::TriangleBase::clone =====

/* rive::TriangleBase::clone() const */

Triangle * __thiscall rive::TriangleBase::clone(TriangleBase *this)

{
  TriangleBase TVar1;
  Triangle *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  this_00 = (Triangle *)operator_new(0x3e0);
  Triangle::Triangle(this_00);
  uVar6 = *(undefined8 *)(this + 0xbc);
  uVar3 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)(this_00 + 0x110) = *(undefined8 *)(this + 0x110);
  uVar5 = *(undefined8 *)(this + 0x1b0);
  uVar4 = *(undefined8 *)(this + 0x1a8);
  *(undefined8 *)(this_00 + 0xbc) = uVar6;
  *(undefined8 *)(this_00 + 0x1b0) = uVar5;
  *(undefined8 *)(this_00 + 0x1a8) = uVar4;
  uVar2 = *(undefined4 *)(this + 0xc4);
  TVar1 = this[0x138];
  *(undefined4 *)(this_00 + 0x134) = uVar3;
  *(undefined4 *)(this_00 + 0xc4) = uVar2;
  uVar3 = *(undefined4 *)(this + 0xa0);
  *(TriangleBase *)(this_00 + 0x138) = TVar1;
  *(undefined4 *)(this_00 + 0xa0) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004bcd54  FUN_004bcd54 =====

void FUN_004bcd54(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004bcd78  rive::Vertex::renderTranslation =====

/* rive::Vertex::renderTranslation() */

undefined4 __thiscall rive::Vertex::renderTranslation(Vertex *this)

{
  Vertex *pVVar1;
  
  pVVar1 = this + 0xa0;
  if (*(long *)(this + 0xa8) != 0) {
    pVVar1 = (Vertex *)(*(long *)(this + 0xa8) + 0x90);
  }
  return *(undefined4 *)pVVar1;
}


// ===== 004bcda4  rive::Vertex::xChanged =====

/* rive::Vertex::xChanged() */

void __thiscall rive::Vertex::xChanged(Vertex *this)

{
                    /* WARNING: Could not recover jumptable at 0x004bcdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004bcdb0  rive::Vertex::yChanged =====

/* rive::Vertex::yChanged() */

void __thiscall rive::Vertex::yChanged(Vertex *this)

{
                    /* WARNING: Could not recover jumptable at 0x004bcdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


// ===== 004bcdbc  rive::Vertex::deform =====

/* rive::Vertex::deform(rive::Mat2D const&, float const*) */

void __thiscall rive::Vertex::deform(Vertex *this,Mat2D *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar5 = *(long *)(this + 0xa8);
  uVar1 = *(uint *)(lVar5 + 0x88);
  uVar2 = *(uint *)(lVar5 + 0x8c);
  if ((uVar1 & 0xff) == 0) {
    fVar7 = 0.0;
    fVar13 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
  }
  else {
    pfVar6 = param_2 + ((ulong)uVar2 & 0xff) * 6;
    fVar13 = (float)(uVar1 & 0xff) / 255.0;
    fVar9 = (float)*(undefined8 *)(pfVar6 + 2) * fVar13 + 0.0;
    fVar10 = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) * fVar13 + 0.0;
    fVar11 = (float)*(undefined8 *)(pfVar6 + 4) * fVar13 + 0.0;
    fVar12 = (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) * fVar13 + 0.0;
    fVar7 = fVar13 * (float)*(undefined8 *)pfVar6 + 0.0;
    fVar13 = fVar13 * (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) + 0.0;
  }
  uVar3 = uVar1 >> 8 & 0xff;
  if (uVar3 != 0) {
    pfVar6 = param_2 + ((ulong)(uVar2 >> 8) & 0xff) * 6;
    fVar14 = (float)uVar3 / 255.0;
    fVar9 = fVar9 + (float)*(undefined8 *)(pfVar6 + 2) * fVar14;
    fVar10 = fVar10 + (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) * fVar14;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar6 + 4) * fVar14;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) * fVar14;
    fVar7 = fVar7 + fVar14 * (float)*(undefined8 *)pfVar6;
    fVar13 = fVar13 + fVar14 * (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
  }
  uVar3 = uVar1 >> 0x10 & 0xff;
  if (uVar3 != 0) {
    fVar14 = (float)uVar3 / 255.0;
    pfVar6 = param_2 + ((uVar2 >> 0x10 & 0xff) + (uVar2 >> 0x10 & 0xff) * 2) * 2;
    fVar9 = fVar9 + (float)*(undefined8 *)(pfVar6 + 2) * fVar14;
    fVar10 = fVar10 + (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) * fVar14;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar6 + 4) * fVar14;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) * fVar14;
    fVar7 = fVar7 + fVar14 * (float)*(undefined8 *)pfVar6;
    fVar13 = fVar13 + fVar14 * (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
  }
  if (uVar1 >> 0x18 != 0) {
    fVar14 = (float)(uVar1 >> 0x18) / 255.0;
    pfVar6 = param_2 + (uVar2 >> 0x18) * 6;
    fVar9 = fVar9 + (float)*(undefined8 *)(pfVar6 + 2) * fVar14;
    fVar10 = fVar10 + (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) * fVar14;
    fVar11 = fVar11 + (float)*(undefined8 *)(pfVar6 + 4) * fVar14;
    fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) * fVar14;
    fVar7 = fVar7 + fVar14 * (float)*(undefined8 *)pfVar6;
    fVar13 = fVar13 + fVar14 * (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
  }
  fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 4),*(undefined4 *)(this + 0xa0),
                             *(float *)(this + 0xa4) * *(float *)(param_1 + 0xc));
  fVar14 = (float)NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(this + 0xa0),
                             *(float *)(this + 0xa4) * *(float *)(param_1 + 8));
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = fVar11;
  auVar8._12_4_ = fVar12;
  auVar4._4_4_ = fVar10;
  auVar4._0_4_ = fVar9;
  auVar4._8_4_ = fVar11;
  auVar4._12_4_ = fVar12;
  auVar8 = NEON_ext(auVar8,auVar4,8,1);
  *(ulong *)(lVar5 + 0x90) =
       CONCAT44(auVar8._4_4_ +
                fVar10 * (*(float *)(param_1 + 0x14) + fVar15) +
                fVar13 * (*(float *)(param_1 + 0x10) + fVar14),
                auVar8._0_4_ +
                fVar9 * (*(float *)(param_1 + 0x14) + fVar15) +
                fVar7 * (*(float *)(param_1 + 0x10) + fVar14));
  return;
}


// ===== 004bcf14  FUN_004bcf14 =====

void FUN_004bcf14(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4bcf18);
  (*pcVar1)();
}


// ===== 004bcf18  rive::Solo::propagateCollapse =====

/* rive::Solo::propagateCollapse(bool) */

void __thiscall rive::Solo::propagateCollapse(Solo *this,bool param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if (param_1) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(**(code **)(**(long **)(this + 0x40) + 0x348))
                               (*(long **)(this + 0x40),*(undefined4 *)(this + 0x134));
  }
  puVar1 = *(undefined8 **)(this + 0x90);
  for (puVar6 = *(undefined8 **)(this + 0x88); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    plVar5 = (long *)*puVar6;
    uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0x4f);
    bVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0x2a);
      if ((uVar3 & 1) == 0) {
        bVar2 = plVar5 != plVar4;
      }
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,bVar2 & 1);
  }
  return;
}


// ===== 004bcfdc  rive::Solo::collapse =====

/* rive::Solo::collapse(bool) */

uint __thiscall rive::Solo::collapse(Solo *this,bool param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  uVar3 = Component::collapse((Component *)this,param_1);
  if ((uVar3 & 1) != 0) {
    if (param_1) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(**(long **)(this + 0x40) + 0x348))
                                 (*(long **)(this + 0x40),*(undefined4 *)(this + 0x134));
    }
    puVar1 = *(undefined8 **)(this + 0x90);
    for (puVar7 = *(undefined8 **)(this + 0x88); puVar7 != puVar1; puVar7 = puVar7 + 1) {
      plVar6 = (long *)*puVar7;
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,0x4f);
      bVar2 = param_1;
      if ((uVar4 & 1) == 0) {
        uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,0x2a);
        if ((uVar4 & 1) == 0) {
          bVar2 = plVar6 != plVar5;
        }
      }
      (**(code **)(*plVar6 + 0x60))(plVar6,bVar2 & 1);
    }
  }
  return uVar3 & 1;
}


// ===== 004bd0b0  rive::Solo::activeComponentIdChanged =====

/* rive::Solo::activeComponentIdChanged() */

void __thiscall rive::Solo::activeComponentIdChanged(Solo *this)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  bVar3 = (**(code **)(*(long *)this + 0x80))();
  if ((bVar3 & 1) == 0) {
    plVar5 = (long *)(**(code **)(**(long **)(this + 0x40) + 0x348))
                               (*(long **)(this + 0x40),*(undefined4 *)(this + 0x134));
  }
  else {
    plVar5 = (long *)0x0;
  }
  puVar1 = *(undefined8 **)(this + 0x90);
  for (puVar7 = *(undefined8 **)(this + 0x88); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,0x4f);
    bVar2 = bVar3;
    if ((uVar4 & 1) == 0) {
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,0x2a);
      if ((uVar4 & 1) == 0) {
        bVar2 = plVar6 != plVar5;
      }
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,bVar2 & 1);
  }
  return;
}


// ===== 004bd180  rive::Solo::onAddedClean =====

/* rive::Solo::onAddedClean(rive::CoreContext*) */

undefined8 rive::Solo::onAddedClean(CoreContext *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x5b);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  bVar3 = (**(code **)(*(long *)param_1 + 0x80))(param_1);
  if ((bVar3 & 1) == 0) {
    plVar4 = (long *)(**(code **)(**(long **)(param_1 + 0x40) + 0x348))
                               (*(long **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x134));
  }
  else {
    plVar4 = (long *)0x0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  for (puVar8 = *(undefined8 **)(param_1 + 0x88); puVar8 != puVar1; puVar8 = puVar8 + 1) {
    plVar7 = (long *)*puVar8;
    uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,0x4f);
    bVar2 = bVar3;
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,0x2a);
      if ((uVar5 & 1) == 0) {
        bVar2 = plVar7 != plVar4;
      }
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,bVar2 & 1);
  }
  return 0;
}


// ===== 004bd288  rive::Solo::updateByIndex =====

/* rive::Solo::updateByIndex(unsigned long) */

void __thiscall rive::Solo::updateByIndex(Solo *this,ulong param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_1 < (ulong)(*(long *)(this + 0x90) - *(long *)(this + 0x88) >> 3)) &&
     (lVar1 = *(long *)(this + 0x40), lVar1 != 0)) {
    plVar4 = *(long **)(lVar1 + 0xa58);
    plVar2 = *(long **)(lVar1 + 0xa60);
    plVar6 = plVar4;
    if (plVar4 != plVar2) {
      plVar5 = plVar4;
      do {
        plVar6 = plVar5;
        if (*plVar5 == *(long *)(*(long *)(this + 0x88) + param_1 * 8)) break;
        plVar5 = plVar5 + 1;
        plVar6 = plVar2;
      } while (plVar5 != plVar2);
    }
    iVar3 = 0;
    if (plVar6 != plVar2) {
      iVar3 = (int)((ulong)((long)plVar6 - (long)plVar4) >> 3);
    }
    if (*(int *)(this + 0x134) != iVar3) {
      *(int *)(this + 0x134) = iVar3;
                    /* WARNING: Could not recover jumptable at 0x004bd308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x1c8))();
      return;
    }
  }
  return;
}


// ===== 004bd30c  rive::Solo::updateByName =====

/* rive::Solo::updateByName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall rive::Solo::updateByName(Solo *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  basic_string *pbVar7;
  long *plVar8;
  basic_string *pbVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar11 = *(long **)(this + 0x88);
  plVar10 = *(long **)(this + 0x90);
  if (plVar11 != plVar10) {
    sVar2 = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar12 = *plVar11;
      bVar3 = *(byte *)(lVar12 + 0x10);
      uVar5 = (ulong)(bVar3 >> 1);
      sVar1 = uVar5;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar12 + 0x18);
      }
      if (sVar1 == sVar2) {
        if ((bVar3 & 1) == 0) {
          if (bVar3 < 2) {
LAB_004bd3bc:
            plVar6 = *(long **)(*(long *)(this + 0x40) + 0xa60);
            plVar8 = *(long **)(*(long *)(this + 0x40) + 0xa58);
            plVar10 = plVar8;
            for (plVar11 = plVar8; (plVar11 != plVar6 && (plVar10 = plVar11, *plVar11 != lVar12));
                plVar11 = plVar11 + 1) {
              plVar10 = plVar6;
            }
            iVar4 = 0;
            if (plVar10 != plVar6) {
              iVar4 = (int)((ulong)((long)plVar10 - (long)plVar8) >> 3);
            }
            if (*(int *)(this + 0x134) == iVar4) {
              return;
            }
            *(int *)(this + 0x134) = iVar4;
                    /* WARNING: Could not recover jumptable at 0x004bd440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)this + 0x1c8))(this);
            return;
          }
          pbVar7 = (basic_string *)(lVar12 + 0x11);
          pbVar9 = __s2;
          while (*pbVar7 == *pbVar9) {
            uVar5 = uVar5 - 1;
            pbVar7 = pbVar7 + 1;
            pbVar9 = pbVar9 + 1;
            if (uVar5 == 0) goto LAB_004bd3bc;
          }
        }
        else {
          iVar4 = memcmp(*(void **)(lVar12 + 0x20),__s2,*(size_t *)(lVar12 + 0x18));
          if (iVar4 == 0) goto LAB_004bd3bc;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar10);
  }
  return;
}


// ===== 004bd444  rive::Solo::getActiveChildIndex =====

/* rive::Solo::getActiveChildIndex() */

int __thiscall rive::Solo::getActiveChildIndex(Solo *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = (**(code **)(**(long **)(this + 0x40) + 0x348))
                    (*(long **)(this + 0x40),*(undefined4 *)(this + 0x134));
  if (lVar2 != 0) {
    plVar3 = *(long **)(this + 0x88);
    if (plVar3 != *(long **)(this + 0x90)) {
      iVar1 = 0;
      do {
        if (*plVar3 == lVar2) {
          return iVar1;
        }
        plVar3 = plVar3 + 1;
        iVar1 = iVar1 + 1;
      } while (plVar3 != *(long **)(this + 0x90));
    }
  }
  return -1;
}


// ===== 004bd4ac  rive::Solo::getActiveChildName =====

/* rive::Solo::getActiveChildName() */

void rive::Solo::getActiveChildName(void)

{
  long in_x0;
  long *plVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined8 uVar3;
  long lVar4;
  
  plVar1 = (long *)(**(code **)(**(long **)(in_x0 + 0x40) + 0x348))
                             (*(long **)(in_x0 + 0x40),*(undefined4 *)(in_x0 + 0x134));
  if ((plVar1 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,10), (uVar2 & 1) == 0)) {
    *(undefined2 *)in_x8 = 0;
  }
  else {
    if ((*(byte *)(plVar1 + 2) & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(in_x8,(char *)plVar1[4],plVar1[3]);
      return;
    }
    lVar4 = plVar1[3];
    uVar3 = plVar1[2];
    *(long *)(in_x8 + 0x10) = plVar1[4];
    *(long *)(in_x8 + 8) = lVar4;
    *(undefined8 *)in_x8 = uVar3;
  }
  return;
}


// ===== 004bd534  FUN_004bd534 =====

void FUN_004bd534(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x1f];
  puVar1 = PTR_vtable_0067cfb8 + 0x118;
  *param_1 = (long)(PTR_vtable_0067cfb8 + 0x10);
  param_1[0x19] = (long)puVar1;
  if (pvVar2 != (void *)0x0) {
    param_1[0x20] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x11];
  *param_1 = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0x12] = (long)pvVar2;
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


// ===== 004bd5e8  FUN_004bd5e8 =====

undefined8 FUN_004bd5e8(void)

{
  return 0x93;
}


// ===== 004bd5f0  FUN_004bd5f0 =====

undefined8 FUN_004bd5f0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000000c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x93)) {
    return 0;
  }
  return 1;
}


// ===== 004bd638  FUN_004bd638 =====

undefined8 FUN_004bd638(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined4 uVar10;
  
  if (param_2 == 0xd) {
    puVar6 = (undefined4 *)param_3[2];
    puVar5 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar5 - (long)puVar6 < 4) {
      uVar10 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar5 = puVar6 + 1;
      uVar10 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0x110) = uVar10;
  }
  else {
    if (param_2 != 0xe) {
      if (param_2 != 0x128) {
        uVar3 = FUN_0035ea44();
        return uVar3;
      }
      uVar9 = 0;
      uVar4 = 0;
      pbVar7 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004bd700;
        }
        pbVar8 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar2 = uVar9 & 0x3f;
        uVar9 = (ulong)(((uint)uVar9 & 0xff) + 7);
        uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
        pbVar7 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004bd700:
        uVar4 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x134) = (int)uVar4;
      return 1;
    }
    puVar6 = (undefined4 *)param_3[2];
    puVar5 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar5 - (long)puVar6 < 4) {
      uVar10 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar5 = puVar6 + 1;
      uVar10 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0x114) = uVar10;
  }
  param_3[2] = (long)puVar5;
  return 1;
}


// ===== 004bd73c  rive::SoloBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::SoloBase::clone() const */

long * __thiscall rive::SoloBase::clone(SoloBase *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  plVar5 = (long *)operator_new(0x138);
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x11] = 0;
  plVar5[0x10] = 0;
  plVar5[0x13] = 0;
  plVar5[0x12] = 0;
  plVar5[0x15] = 0;
  plVar5[0x14] = 0;
  plVar5[0x17] = 0;
  plVar5[0x16] = 0;
  plVar5[0x19] = 0;
  plVar5[0x18] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  plVar5[0x23] = 0;
  plVar5[0x22] = 0;
  plVar5[0x25] = 0;
  plVar5[0x24] = 0;
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  lVar3 = _UNK_00281c00;
  lVar2 = _DAT_00281bf8;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0xd] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x11] = 0;
  *(undefined8 *)((long)plVar5 + 0xb4) = 0;
  *(long *)((long)plVar5 + 0xac) = lVar3;
  *(long *)((long)plVar5 + 0xa4) = lVar2;
  plVar5[0x1b] = lVar3;
  plVar5[0x1a] = lVar2;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  puVar4 = PTR_vtable_0067d2e8;
  plVar5[0x25] = 0;
  plVar5[0x26] = 0;
  lVar7 = *(long *)(this + 0x110);
  plVar5[0x24] = lVar3;
  plVar5[0x23] = lVar2;
  uVar9 = *(undefined8 *)(this + 0xbc);
  plVar5[0x22] = lVar7;
  uVar6 = *(undefined4 *)(this + 0xc4);
  *plVar5 = (long)(puVar4 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)((long)plVar5 + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  plVar5[0x19] = (long)(puVar4 + 0x1f0);
  *(undefined4 *)((long)plVar5 + 0x134) = uVar1;
  *(undefined4 *)((long)plVar5 + 0xc4) = uVar6;
  *(undefined4 *)(plVar5 + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 004bd838  FUN_004bd838 =====

void FUN_004bd838(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x1f];
  puVar1 = PTR_vtable_0067cfb8 + 0x118;
  *param_1 = (long)(PTR_vtable_0067cfb8 + 0x10);
  param_1[0x19] = (long)puVar1;
  if (pvVar2 != (void *)0x0) {
    param_1[0x20] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x11];
  *param_1 = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0x12] = (long)pvVar2;
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


// ===== 004bd8ec  FUN_004bd8ec =====

void FUN_004bd8ec(void)

{
  return;
}


// ===== 004bd8f0  HBFont::Decode =====

/* HBFont::Decode(rive::Span<unsigned char const>) */

void HBFont::Decode(undefined8 *param_1,void *param_2,uint param_3)

{
  rive_hb_font_t *prVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  void *pvVar9;
  HBFont *pHVar10;
  rive_hb_font_t *prVar11;
  long lVar12;
  long *plVar13;
  undefined4 *puVar14;
  void *pvVar15;
  undefined4 *puVar16;
  HBFont *this;
  char *__s2;
  rive_hb_font_t rVar17;
  mutex *pmVar18;
  char *pcVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined4 uVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  
  if (((int)param_3 < 0) || (piVar8 = (int *)calloc(1,0x30), piVar8 == (int *)0x0)) {
LAB_004be118:
    this = (HBFont *)0x0;
    goto LAB_004be2e0;
  }
  *piVar8 = 1;
  *(undefined1 *)(piVar8 + 1) = 1;
  piVar8[2] = 0;
  piVar8[3] = 0;
  *(void **)(piVar8 + 4) = param_2;
  piVar8[6] = param_3;
  piVar8[7] = 1;
  if (param_3 == 0) {
    piVar8[7] = 2;
  }
  else {
    pvVar9 = malloc((ulong)param_3);
    if (pvVar9 == (void *)0x0) {
      if ((*piVar8 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,piVar8), iVar6 == 1)) {
        *piVar8 = -0xdead;
        pmVar18 = *(mutex **)(piVar8 + 2);
        if (pmVar18 != (mutex *)0x0) {
          FUN_004fe408(pmVar18 + 0x28,pmVar18);
          std::__ndk1::mutex::~mutex(pmVar18);
          free(pmVar18);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        }
        free(piVar8);
        this = (HBFont *)0x0;
        goto LAB_004be2e0;
      }
      goto LAB_004be118;
    }
    memcpy(pvVar9,param_2,(ulong)param_3);
    *(void **)(piVar8 + 4) = pvVar9;
    puVar5 = PTR_rive_hb_free_0067d800;
    piVar8[7] = 2;
    *(void **)(piVar8 + 8) = pvVar9;
    *(undefined **)(piVar8 + 10) = puVar5;
  }
  iVar6 = rive_hb_face_count(piVar8);
  if (iVar6 == 0) {
    this = (HBFont *)0x0;
  }
  else {
    pHVar10 = (HBFont *)rive_hb_face_create(piVar8,0);
    this = (HBFont *)0x0;
    if (((byte)pHVar10[4] & 1) != 0) {
      this = pHVar10;
    }
  }
  if ((*piVar8 != 0) && (iVar6 = FUN_00340fe0(0xffffffff,piVar8), iVar6 == 1)) {
    *piVar8 = -0xdead;
    pmVar18 = *(mutex **)(piVar8 + 2);
    if (pmVar18 != (mutex *)0x0) {
      FUN_004fe408(pmVar18 + 0x28,pmVar18);
      std::__ndk1::mutex::~mutex(pmVar18);
      free(pmVar18);
      piVar8[2] = 0;
      piVar8[3] = 0;
    }
    if (*(code **)(piVar8 + 10) != (code *)0x0) {
      (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
    }
    free(piVar8);
  }
  if (this == (HBFont *)0x0) goto LAB_004be2e0;
  prVar11 = (rive_hb_font_t *)calloc(1,0xb8);
  prVar1 = (rive_hb_font_t *)&DAT_006865a8;
  rVar17 = DAT_006865ac;
  if (prVar11 != (rive_hb_font_t *)0x0) {
    *(undefined4 *)(prVar11 + 0xb4) = 0;
    *(undefined8 *)(prVar11 + 0xac) = 0;
    *(undefined8 *)(prVar11 + 0xa4) = 0;
    *(undefined8 *)(prVar11 + 0x9c) = 0;
    *(undefined8 *)(prVar11 + 0x94) = 0;
    *(undefined8 *)(prVar11 + 0x8c) = 0;
    *(undefined8 *)(prVar11 + 0x84) = 0;
    *(undefined8 *)(prVar11 + 0x7c) = 0;
    *(undefined8 *)(prVar11 + 0x74) = 0;
    *(undefined8 *)(prVar11 + 0x6c) = 0;
    *(undefined8 *)(prVar11 + 100) = 0;
    *(undefined8 *)(prVar11 + 0x5c) = 0;
    *(undefined8 *)(prVar11 + 0x54) = 0;
    *(undefined8 *)(prVar11 + 0x4c) = 0;
    *(undefined8 *)(prVar11 + 0x44) = 0;
    *(undefined8 *)(prVar11 + 0x3c) = 0;
    *(undefined8 *)(prVar11 + 0x34) = 0;
    *(undefined8 *)(prVar11 + 0x2c) = 0;
    *(undefined8 *)(prVar11 + 0x24) = 0;
    *(undefined8 *)(prVar11 + 0x1c) = 0;
    *(undefined8 *)(prVar11 + 0x14) = 0;
    *(undefined8 *)(prVar11 + 0xc) = 0;
    *(undefined8 *)(prVar11 + 4) = 0;
    *(undefined4 *)prVar11 = 1;
    prVar11[4] = (rive_hb_font_t)0x1;
    *(undefined8 *)(prVar11 + 8) = 0;
    if (((byte)this[4] & 1) != 0) {
      this[4] = (HBFont)0x0;
    }
    *(undefined **)(prVar11 + 0x18) = &DAT_006865a8;
    if (*(int *)this != 0) {
      FUN_00340fe0(1,this);
    }
    *(HBFont **)(prVar11 + 0x20) = this;
    *(undefined **)(prVar11 + 0x90) = &DAT_00686380;
    *(rive_hb_font_t **)(prVar11 + 0xa8) = prVar11;
    iVar6 = *(int *)(this + 0x14);
    if (iVar6 == 0) {
      iVar6 = FUN_00564f7c(this);
    }
    uVar22 = NEON_fmov(0x3f800000,4);
    *(int *)(prVar11 + 0x28) = iVar6;
    *(int *)(prVar11 + 0x2c) = iVar6;
    prVar11[0x3c] = (rive_hb_font_t)0x1;
    *(undefined4 *)(prVar11 + 0x74) = 0xffffffff;
    *(undefined8 *)(prVar11 + 0x50) = uVar22;
    *(undefined8 *)(prVar11 + 0x60) = 0x10000;
    *(undefined8 *)(prVar11 + 0x58) = 0x10000;
    prVar1 = prVar11;
    rVar17 = prVar11[4];
  }
  if (((byte)rVar17 & 1) == 0) goto LAB_004be284;
  pcVar19 = DAT_00687060;
  if (DAT_00687060 == (char *)0x0) {
    lVar12 = FUN_003410d0(0,&DAT_00243399,&DAT_00687060);
    pcVar19 = "";
    if ((lVar12 == 0) || (pcVar19 = DAT_00687060, DAT_00687060 != (char *)0x0)) goto LAB_004bdb44;
    __s2 = (char *)0x0;
  }
  else {
LAB_004bdb44:
    __s2 = (char *)0x0;
    if (*pcVar19 != '\0') {
      __s2 = pcVar19;
    }
  }
  bVar4 = true;
  do {
    while (__s2 != (char *)0x0) {
      iVar6 = strcmp("ot",__s2);
      if (iVar6 == 0) {
        plVar13 = (long *)calloc(1,0x48);
        if (plVar13 != (long *)0x0) {
          *plVar13 = *(long *)(prVar1 + 0x20) + 0x60;
          goto LAB_004bdee8;
        }
        goto LAB_004be284;
      }
      __s2 = (char *)0x0;
      bVar2 = !bVar4;
      bVar4 = false;
      if (bVar2) goto LAB_004be284;
    }
    plVar13 = (long *)calloc(1,0x48);
    if (plVar13 != (long *)0x0) {
      *plVar13 = *(long *)(prVar1 + 0x20) + 0x60;
      do {
        while( true ) {
          piVar8 = DAT_00687070;
          if (DAT_00687070 != (int *)0x0) goto LAB_004bdc3c;
          piVar8 = (int *)FUN_00512018();
          if (piVar8 == (int *)0x0) break;
          lVar12 = FUN_003410d0(0,piVar8,&DAT_00687070);
          if (lVar12 == 0) goto LAB_004bdc3c;
          if (piVar8 != (int *)&DAT_00686380) {
            rive_hb_font_funcs_destroy(piVar8);
          }
        }
        lVar12 = FUN_003410d0(0,&DAT_00686380,&DAT_00687070);
        piVar8 = (int *)&DAT_00686380;
      } while (lVar12 != 0);
LAB_004bdc3c:
      if (((byte)prVar1[4] & 1) == 0) {
        do {
          puVar16 = (undefined4 *)plVar13[8];
          if (puVar16 == (undefined4 *)0x0) goto LAB_004bdc74;
          puVar14 = (undefined4 *)FUN_003410d0(puVar16,0);
        } while (puVar14 != puVar16);
        if (puVar16 != &DAT_0025d4b0) {
          free(puVar16);
        }
LAB_004bdc74:
        do {
          pvVar9 = (void *)plVar13[6];
          if (pvVar9 == (void *)0x0) goto LAB_004bdc9c;
          pvVar15 = (void *)FUN_003410d0(pvVar9,0);
        } while (pvVar15 != pvVar9);
        free(pvVar9);
LAB_004bdc9c:
        do {
          puVar16 = (undefined4 *)plVar13[7];
          if (puVar16 == (undefined4 *)0x0) goto LAB_004bdccc;
          puVar14 = (undefined4 *)FUN_003410d0(puVar16,0);
        } while (puVar14 != puVar16);
        if (puVar16 != &DAT_0025d4b0) {
          free(puVar16);
        }
LAB_004bdccc:
        do {
          pvVar9 = (void *)plVar13[4];
          if (pvVar9 == (void *)0x0) goto LAB_004bdcf4;
          pvVar15 = (void *)FUN_003410d0(pvVar9,0);
        } while (pvVar15 != pvVar9);
        free(pvVar9);
LAB_004bdcf4:
        do {
          puVar16 = (undefined4 *)plVar13[5];
          if (puVar16 == (undefined4 *)0x0) goto LAB_004bdd24;
          puVar14 = (undefined4 *)FUN_003410d0(puVar16,0);
        } while (puVar14 != puVar16);
        if (puVar16 != &DAT_0025d4b0) {
          free(puVar16);
        }
LAB_004bdd24:
        do {
          pvVar9 = (void *)plVar13[2];
          if (pvVar9 == (void *)0x0) goto LAB_004bdd4c;
          pvVar15 = (void *)FUN_003410d0(pvVar9,0);
        } while (pvVar15 != pvVar9);
        free(pvVar9);
LAB_004bdd4c:
        do {
          puVar16 = (undefined4 *)plVar13[3];
          if (puVar16 == (undefined4 *)0x0) goto LAB_004bdb7c;
          puVar14 = (undefined4 *)FUN_003410d0(puVar16,0);
        } while (puVar14 != puVar16);
        if (puVar16 != &DAT_0025d4b0) {
          free(puVar16);
        }
LAB_004bdb7c:
        free(plVar13);
      }
      else {
        if (*(code **)(prVar1 + 0xa0) != (code *)0x0) {
          (**(code **)(prVar1 + 0xa0))(*(undefined8 *)(prVar1 + 0x98));
        }
        if (*piVar8 != 0) {
          FUN_00340fe0(1,piVar8);
        }
        rive_hb_font_funcs_destroy(*(undefined8 *)(prVar1 + 0x90));
        *(int **)(prVar1 + 0x90) = piVar8;
        *(long **)(prVar1 + 0x98) = plVar13;
        *(code **)(prVar1 + 0xa0) = FUN_00511ea0;
        uVar7 = *(uint *)(*(long *)(prVar1 + 0x20) + 0x14);
        if (uVar7 == 0) {
          uVar7 = FUN_00564f7c(*(long *)(prVar1 + 0x20));
        }
        uVar23 = *(ulong *)(prVar1 + 0x28);
        fVar26 = (float)uVar7;
        iVar6 = (int)uVar23;
        lVar12 = (uVar23 & 0xffffffff) << 0x10;
        if (iVar6 < 0) {
          lVar12 = (ulong)(uint)-iVar6 * -0x10000;
        }
        uVar7 = (uint)(uVar23 >> 0x20);
        lVar3 = (ulong)uVar7 << 0x10;
        if ((long)uVar23 < 0) {
          lVar3 = (ulong)-uVar7 * -0x10000;
        }
        uVar22 = NEON_scvtf(uVar23,4);
        fVar21 = (float)((ulong)uVar22 >> 0x20);
        fVar27 = (float)*(undefined8 *)(prVar1 + 0x34);
        *(long *)(prVar1 + 0x58) = (long)((float)lVar12 / fVar26);
        *(long *)(prVar1 + 0x60) = (long)((float)lVar3 / fVar26);
        rVar17 = (rive_hb_font_t)0x1;
        *(ulong *)(prVar1 + 0x50) = CONCAT44(fVar21 / fVar26,(float)uVar22 / fVar26);
        fVar26 = (float)((ulong)*(undefined8 *)(prVar1 + 0x34) >> 0x20);
        if ((fVar27 == 0.0) && (fVar26 == 0.0)) {
          rVar17 = (rive_hb_font_t)(*(float *)(prVar1 + 0x48) != 0.0);
        }
        uVar20 = MP_INT_ABS(iVar6);
        uVar25 = MP_INT_ABS(uVar7);
        prVar1[0x30] = rVar17;
        uVar24 = NEON_scvtf(CONCAT44(uVar25,uVar20),4);
        *(ulong *)(prVar1 + 0x40) =
             CONCAT44((int)(float)(int)(fVar26 * (float)((ulong)uVar24 >> 0x20) + 0.5),
                      (int)(float)(int)(fVar27 * (float)uVar24 + 0.5));
        if (uVar7 == 0) {
          fVar21 = 0.0;
        }
        else {
          fVar21 = (*(float *)(prVar1 + 0x48) * (float)uVar22) / fVar21;
        }
        *(float *)(prVar1 + 0x4c) = fVar21;
        puVar16 = *(undefined4 **)(prVar1 + 0xb0);
        if ((puVar16 != (undefined4 *)0x0) && (puVar16 != &DAT_0025d4b0)) {
          free(puVar16);
        }
        *(undefined8 *)(prVar1 + 0xb0) = 0;
        FUN_00340fe0(1,prVar1 + 0x10);
      }
    }
    __s2 = (char *)0x0;
    bVar2 = (bool)(*(undefined **)(prVar1 + 0x90) == &DAT_00686380 & bVar4);
    bVar4 = false;
  } while (bVar2);
  goto LAB_004be284;
  while (lVar12 = FUN_003410d0(0,&DAT_00686380,&DAT_00687070), piVar8 = (int *)&DAT_00686380,
        lVar12 != 0) {
LAB_004bdee8:
    piVar8 = DAT_00687070;
    if (DAT_00687070 != (int *)0x0) break;
    piVar8 = (int *)FUN_00512018();
    if (piVar8 != (int *)0x0) {
      lVar12 = FUN_003410d0(0,piVar8,&DAT_00687070);
      if (lVar12 == 0) {
        rVar17 = prVar1[4];
        goto joined_r0x004bdf48;
      }
      if (piVar8 != (int *)&DAT_00686380) {
        rive_hb_font_funcs_destroy(piVar8);
      }
      goto LAB_004bdee8;
    }
  }
  rVar17 = prVar1[4];
joined_r0x004bdf48:
  if (((byte)rVar17 & 1) == 0) {
    do {
      puVar16 = (undefined4 *)plVar13[8];
      if (puVar16 == (undefined4 *)0x0) goto LAB_004bdf7c;
      puVar14 = (undefined4 *)FUN_003410d0(puVar16,0);
    } while (puVar14 != puVar16);
    if (puVar16 != &DAT_0025d4b0) {
      free(puVar16);
    }
LAB_004bdf7c:
    do {
      pvVar9 = (void *)plVar13[6];
      if (pvVar9 == (void *)0x0) goto LAB_004bdfa4;
      pvVar15 = (void *)FUN_003410d0(pvVar9,0);
    } while (pvVar15 != pvVar9);
    free(pvVar9);
LAB_004bdfa4:
    do {
      puVar16 = (undefined4 *)plVar13[7];
      if (puVar16 == (undefined4 *)0x0) goto LAB_004bdfd4;
      puVar14 = (undefined4 *)FUN_003410d0(puVar16,0);
    } while (puVar14 != puVar16);
    if (puVar16 != &DAT_0025d4b0) {
      free(puVar16);
    }
LAB_004bdfd4:
    do {
      pvVar9 = (void *)plVar13[4];
      if (pvVar9 == (void *)0x0) goto LAB_004bdffc;
      pvVar15 = (void *)FUN_003410d0(pvVar9,0);
    } while (pvVar15 != pvVar9);
    free(pvVar9);
LAB_004bdffc:
    do {
      puVar16 = (undefined4 *)plVar13[5];
      if (puVar16 == (undefined4 *)0x0) goto LAB_004be02c;
      puVar14 = (undefined4 *)FUN_003410d0(puVar16,0);
    } while (puVar14 != puVar16);
    if (puVar16 != &DAT_0025d4b0) {
      free(puVar16);
    }
LAB_004be02c:
    do {
      pvVar9 = (void *)plVar13[2];
      if (pvVar9 == (void *)0x0) goto LAB_004be054;
      pvVar15 = (void *)FUN_003410d0(pvVar9,0);
    } while (pvVar15 != pvVar9);
    free(pvVar9);
LAB_004be054:
    do {
      puVar16 = (undefined4 *)plVar13[3];
      if (puVar16 == (undefined4 *)0x0) goto LAB_004be084;
      puVar14 = (undefined4 *)FUN_003410d0(puVar16,0);
    } while (puVar14 != puVar16);
    if (puVar16 != &DAT_0025d4b0) {
      free(puVar16);
    }
LAB_004be084:
    free(plVar13);
  }
  else {
    if (*(code **)(prVar1 + 0xa0) != (code *)0x0) {
      (**(code **)(prVar1 + 0xa0))(*(undefined8 *)(prVar1 + 0x98));
    }
    if (*piVar8 != 0) {
      FUN_00340fe0(1,piVar8);
    }
    rive_hb_font_funcs_destroy(*(undefined8 *)(prVar1 + 0x90));
    *(int **)(prVar1 + 0x90) = piVar8;
    *(long **)(prVar1 + 0x98) = plVar13;
    *(code **)(prVar1 + 0xa0) = FUN_00511ea0;
    uVar7 = *(uint *)(*(long *)(prVar1 + 0x20) + 0x14);
    if (uVar7 == 0) {
      uVar7 = FUN_00564f7c(*(long *)(prVar1 + 0x20));
    }
    uVar23 = *(ulong *)(prVar1 + 0x28);
    fVar26 = (float)uVar7;
    iVar6 = (int)uVar23;
    lVar12 = (uVar23 & 0xffffffff) << 0x10;
    if (iVar6 < 0) {
      lVar12 = (ulong)(uint)-iVar6 * -0x10000;
    }
    uVar7 = (uint)(uVar23 >> 0x20);
    lVar3 = (ulong)uVar7 << 0x10;
    if ((long)uVar23 < 0) {
      lVar3 = (ulong)-uVar7 * -0x10000;
    }
    uVar22 = NEON_scvtf(uVar23,4);
    fVar21 = (float)((ulong)uVar22 >> 0x20);
    fVar27 = (float)*(undefined8 *)(prVar1 + 0x34);
    *(long *)(prVar1 + 0x58) = (long)((float)lVar12 / fVar26);
    *(long *)(prVar1 + 0x60) = (long)((float)lVar3 / fVar26);
    rVar17 = (rive_hb_font_t)0x1;
    *(ulong *)(prVar1 + 0x50) = CONCAT44(fVar21 / fVar26,(float)uVar22 / fVar26);
    fVar26 = (float)((ulong)*(undefined8 *)(prVar1 + 0x34) >> 0x20);
    if ((fVar27 == 0.0) && (fVar26 == 0.0)) {
      rVar17 = (rive_hb_font_t)(*(float *)(prVar1 + 0x48) != 0.0);
    }
    uVar20 = MP_INT_ABS(iVar6);
    uVar25 = MP_INT_ABS(uVar7);
    prVar1[0x30] = rVar17;
    uVar24 = NEON_scvtf(CONCAT44(uVar25,uVar20),4);
    *(ulong *)(prVar1 + 0x40) =
         CONCAT44((int)(float)(int)(fVar26 * (float)((ulong)uVar24 >> 0x20) + 0.5),
                  (int)(float)(int)(fVar27 * (float)uVar24 + 0.5));
    if (uVar7 == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = (*(float *)(prVar1 + 0x48) * (float)uVar22) / fVar21;
    }
    *(float *)(prVar1 + 0x4c) = fVar21;
    puVar16 = *(undefined4 **)(prVar1 + 0xb0);
    if ((puVar16 != (undefined4 *)0x0) && (puVar16 != &DAT_0025d4b0)) {
      free(puVar16);
    }
    *(undefined8 *)(prVar1 + 0xb0) = 0;
    FUN_00340fe0(1,prVar1 + 0x10);
  }
LAB_004be284:
  if (*(uint *)(this + 0x10) < 0x10000) {
LAB_004be294:
    rive_hb_font_set_variations(prVar1,0,0);
  }
  else if ((((byte)prVar1[4] & 1) != 0) &&
          (iVar6 = (*(uint *)(this + 0x10) >> 0x10) - 1, *(int *)(prVar1 + 0x74) != iVar6)) {
    *(int *)(prVar1 + 0x74) = iVar6;
    goto LAB_004be294;
  }
  rive_hb_face_destroy(this);
  this = (HBFont *)operator_new(0xe0);
  HBFont(this,prVar1);
LAB_004be2e0:
  *param_1 = this;
  return;
}


// ===== 004be318  HBFont::HBFont =====

/* HBFont::HBFont(rive_hb_font_t*) */

void __thiscall HBFont::HBFont(HBFont *this,rive_hb_font_t *param_1)

{
  long lVar1;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0x3f800000;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_60 = 0x3f800000;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  HBFont(this,param_1,&local_50,&local_80,&local_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004be388  HBFont::HBFont =====

/* HBFont::HBFont(rive_hb_font_t*, std::__ndk1::unordered_map<unsigned int, float,
   std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, float> > >,
   std::__ndk1::unordered_map<unsigned int, unsigned int, std::__ndk1::hash<unsigned int>,
   std::__ndk1::equal_to<unsigned int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const,
   unsigned int> > >, std::__ndk1::vector<rive_hb_feature_t,
   std::__ndk1::allocator<rive_hb_feature_t> >) */

void __thiscall
HBFont::HBFont(HBFont *this,long param_1,HBFont *param_3,undefined8 param_4,undefined8 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  HBFont HVar12;
  int iVar13;
  uint uVar14;
  long *__ptr;
  undefined4 *puVar15;
  void *pvVar16;
  int *piVar17;
  undefined8 uVar18;
  code *pcVar19;
  ulong uVar20;
  bool bVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  void *pvVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  ulong local_a0 [7];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  __ptr = (long *)calloc(1,0x48);
  if (__ptr == (long *)0x0) {
LAB_004be54c:
    bVar3 = *(byte *)(param_1 + 4);
  }
  else {
    *__ptr = *(long *)(param_1 + 0x20) + 0x60;
    piVar17 = DAT_00687070;
    if (DAT_00687070 == (int *)0x0) {
      do {
        piVar17 = (int *)FUN_00512018();
        if (piVar17 == (int *)0x0) {
          lVar24 = FUN_003410d0(0,&DAT_00686380,&DAT_00687070);
          piVar17 = (int *)&DAT_00686380;
          if (lVar24 == 0) break;
        }
        else {
          lVar24 = FUN_003410d0(0,piVar17,&DAT_00687070);
          if (lVar24 == 0) break;
          if (piVar17 != (int *)&DAT_00686380) {
            rive_hb_font_funcs_destroy(piVar17);
          }
        }
        piVar17 = DAT_00687070;
      } while (DAT_00687070 == (int *)0x0);
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      do {
        puVar25 = (undefined4 *)__ptr[8];
        if (puVar25 == (undefined4 *)0x0) goto LAB_004be43c;
        puVar15 = (undefined4 *)FUN_003410d0(puVar25,0);
      } while (puVar15 != puVar25);
      if (puVar25 != &DAT_0025d4b0) {
        free(puVar25);
      }
LAB_004be43c:
      do {
        pvVar26 = (void *)__ptr[6];
        if (pvVar26 == (void *)0x0) goto LAB_004be464;
        pvVar16 = (void *)FUN_003410d0(pvVar26,0);
      } while (pvVar16 != pvVar26);
      free(pvVar26);
LAB_004be464:
      do {
        puVar25 = (undefined4 *)__ptr[7];
        if (puVar25 == (undefined4 *)0x0) goto LAB_004be494;
        puVar15 = (undefined4 *)FUN_003410d0(puVar25,0);
      } while (puVar15 != puVar25);
      if (puVar25 != &DAT_0025d4b0) {
        free(puVar25);
      }
LAB_004be494:
      do {
        pvVar26 = (void *)__ptr[4];
        if (pvVar26 == (void *)0x0) goto LAB_004be4bc;
        pvVar16 = (void *)FUN_003410d0(pvVar26,0);
      } while (pvVar16 != pvVar26);
      free(pvVar26);
LAB_004be4bc:
      do {
        puVar25 = (undefined4 *)__ptr[5];
        if (puVar25 == (undefined4 *)0x0) goto LAB_004be4ec;
        puVar15 = (undefined4 *)FUN_003410d0(puVar25,0);
      } while (puVar15 != puVar25);
      if (puVar25 != &DAT_0025d4b0) {
        free(puVar25);
      }
LAB_004be4ec:
      do {
        pvVar26 = (void *)__ptr[2];
        if (pvVar26 == (void *)0x0) goto LAB_004be514;
        pvVar16 = (void *)FUN_003410d0(pvVar26,0);
      } while (pvVar16 != pvVar26);
      free(pvVar26);
LAB_004be514:
      do {
        puVar25 = (undefined4 *)__ptr[3];
        if (puVar25 == (undefined4 *)0x0) goto LAB_004be544;
        puVar15 = (undefined4 *)FUN_003410d0(puVar25,0);
      } while (puVar15 != puVar25);
      if (puVar25 != &DAT_0025d4b0) {
        free(puVar25);
      }
LAB_004be544:
      free(__ptr);
      goto LAB_004be54c;
    }
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
    }
    if (*piVar17 != 0) {
      FUN_00340fe0(1,piVar17);
    }
    rive_hb_font_funcs_destroy(*(undefined8 *)(param_1 + 0x90));
    *(int **)(param_1 + 0x90) = piVar17;
    *(long **)(param_1 + 0x98) = __ptr;
    *(code **)(param_1 + 0xa0) = FUN_00511ea0;
    uVar14 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
    if (uVar14 == 0) {
      uVar14 = FUN_00564f7c(*(long *)(param_1 + 0x20));
    }
    uVar20 = *(ulong *)(param_1 + 0x28);
    fVar31 = (float)uVar14;
    iVar13 = (int)uVar20;
    lVar24 = (uVar20 & 0xffffffff) << 0x10;
    if (iVar13 < 0) {
      lVar24 = (ulong)(uint)-iVar13 * -0x10000;
    }
    uVar14 = (uint)(uVar20 >> 0x20);
    lVar4 = (ulong)uVar14 << 0x10;
    if ((long)uVar20 < 0) {
      lVar4 = (ulong)-uVar14 * -0x10000;
    }
    uVar18 = NEON_scvtf(uVar20,4);
    fVar28 = (float)((ulong)uVar18 >> 0x20);
    fVar32 = (float)*(undefined8 *)(param_1 + 0x34);
    *(long *)(param_1 + 0x58) = (long)((float)lVar24 / fVar31);
    *(long *)(param_1 + 0x60) = (long)((float)lVar4 / fVar31);
    bVar21 = true;
    *(ulong *)(param_1 + 0x50) = CONCAT44(fVar28 / fVar31,(float)uVar18 / fVar31);
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
    if ((fVar32 == 0.0) && (fVar31 == 0.0)) {
      bVar21 = *(float *)(param_1 + 0x48) != 0.0;
    }
    uVar27 = MP_INT_ABS(iVar13);
    uVar30 = MP_INT_ABS(uVar14);
    *(bool *)(param_1 + 0x30) = bVar21;
    uVar29 = NEON_scvtf(CONCAT44(uVar30,uVar27),4);
    *(ulong *)(param_1 + 0x40) =
         CONCAT44((int)(float)(int)(fVar31 * (float)((ulong)uVar29 >> 0x20) + 0.5),
                  (int)(float)(int)(fVar32 * (float)uVar29 + 0.5));
    if (uVar14 == 0) {
      fVar28 = 0.0;
    }
    else {
      fVar28 = (*(float *)(param_1 + 0x48) * (float)uVar18) / fVar28;
    }
    *(float *)(param_1 + 0x4c) = fVar28;
    puVar25 = *(undefined4 **)(param_1 + 0xb0);
    if ((puVar25 != (undefined4 *)0x0) && (puVar25 != &DAT_0025d4b0)) {
      free(puVar25);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_00340fe0(1,param_1 + 0x10);
    bVar3 = *(byte *)(param_1 + 4);
  }
  if (((bVar3 & 1) != 0) &&
     ((*(int *)(param_1 + 0x28) != 0x800 || (*(int *)(param_1 + 0x2c) != 0x800)))) {
    *(undefined8 *)(param_1 + 0x28) = 0x80000000800;
    uVar14 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
    if (uVar14 == 0) {
      uVar14 = FUN_00564f7c(*(long *)(param_1 + 0x20));
    }
    uVar20 = *(ulong *)(param_1 + 0x28);
    fVar31 = (float)uVar14;
    iVar13 = (int)uVar20;
    lVar24 = (uVar20 & 0xffffffff) << 0x10;
    if (iVar13 < 0) {
      lVar24 = (ulong)(uint)-iVar13 * -0x10000;
    }
    uVar14 = (uint)(uVar20 >> 0x20);
    lVar4 = (ulong)uVar14 << 0x10;
    if ((long)uVar20 < 0) {
      lVar4 = (ulong)-uVar14 * -0x10000;
    }
    uVar18 = NEON_scvtf(uVar20,4);
    fVar28 = (float)((ulong)uVar18 >> 0x20);
    fVar32 = (float)*(undefined8 *)(param_1 + 0x34);
    *(long *)(param_1 + 0x58) = (long)((float)lVar24 / fVar31);
    *(long *)(param_1 + 0x60) = (long)((float)lVar4 / fVar31);
    bVar21 = true;
    *(ulong *)(param_1 + 0x50) = CONCAT44(fVar28 / fVar31,(float)uVar18 / fVar31);
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
    if ((fVar32 == 0.0) && (fVar31 == 0.0)) {
      bVar21 = *(float *)(param_1 + 0x48) != 0.0;
    }
    uVar27 = MP_INT_ABS(iVar13);
    uVar30 = MP_INT_ABS(uVar14);
    *(bool *)(param_1 + 0x30) = bVar21;
    uVar29 = NEON_scvtf(CONCAT44(uVar30,uVar27),4);
    *(ulong *)(param_1 + 0x40) =
         CONCAT44((int)(float)(int)(fVar31 * (float)((ulong)uVar29 >> 0x20) + 0.5),
                  (int)(float)(int)(fVar32 * (float)uVar29 + 0.5));
    if (uVar14 == 0) {
      fVar28 = 0.0;
    }
    else {
      fVar28 = (*(float *)(param_1 + 0x48) * (float)uVar18) / fVar28;
    }
    *(float *)(param_1 + 0x4c) = fVar28;
    puVar25 = *(undefined4 **)(param_1 + 0xb0);
    if ((puVar25 != (undefined4 *)0x0) && (puVar25 != &DAT_0025d4b0)) {
      free(puVar25);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_00340fe0(1,param_1 + 0x10);
  }
  local_a0[3] = 0;
  local_a0[2] = 0;
  local_a0[5] = 0;
  local_a0[4] = 0;
  puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x10);
  local_a0[1] = 0;
  local_a0[0] = 0;
  if (puVar22 == (undefined8 *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *puVar22;
  }
  iVar13 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                     (param_1,*(undefined8 *)(param_1 + 0x98),local_a0,uVar18);
  if (iVar13 != 0) {
    iVar13 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar13 = *(int *)(param_1 + 0x44);
    }
    local_a0[0] = CONCAT44(local_a0[0]._4_4_,(int)local_a0[0] + iVar13);
  }
  *(undefined4 *)(this + 8) = 1;
  puVar6 = PTR_vtable_0067d7a0;
  uVar18 = NEON_neg(local_a0[0],4);
  *(long *)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  uVar18 = NEON_scvtf(uVar18,4);
  *(undefined **)this = puVar6 + 0x10;
  *(ulong *)(this + 0xc) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * 0.00048828125,(float)uVar18 * 0.00048828125);
  puVar22 = (undefined8 *)*param_5;
  uVar20 = param_5[1] - (long)puVar22;
  if (uVar20 != 0) {
    if ((long)uVar20 < 0) {
      FUN_004bf3ec();
      goto LAB_004bf00c;
    }
    pvVar26 = operator_new(uVar20);
    *(void **)(this + 0x20) = pvVar26;
    *(void **)(this + 0x28) = pvVar26;
    *(ulong *)(this + 0x30) = (long)pvVar26 + uVar20;
    memcpy(pvVar26,puVar22,uVar20);
    *(ulong *)(this + 0x28) = (long)pvVar26 + uVar20;
  }
  FUN_004bf400(this + 0x48,param_4);
  FUN_004bf788(this + 0x70,param_3);
  param_3 = this + 0xa0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(long *)param_3 = 0;
  *(undefined2 *)(this + 0x98) = 0;
  this[0x9a] = (HBFont)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd8) = 0x3f800000;
  puVar25 = (undefined4 *)calloc(1,0x48);
  if (puVar25 == (undefined4 *)0x0) {
    puVar25 = (undefined4 *)&DAT_00686278;
  }
  else {
    puVar25[0x11] = 0;
    *(undefined8 *)(puVar25 + 3) = 0;
    *(undefined8 *)(puVar25 + 1) = 0;
    *(undefined8 *)(puVar25 + 0xf) = 0;
    *(undefined8 *)(puVar25 + 0xd) = 0;
    *(undefined8 *)(puVar25 + 0xb) = 0;
    *(undefined8 *)(puVar25 + 9) = 0;
    *(undefined8 *)(puVar25 + 7) = 0;
    *(undefined8 *)(puVar25 + 5) = 0;
    *puVar25 = 1;
    *(undefined1 *)(puVar25 + 1) = 1;
    *(undefined8 *)(puVar25 + 2) = 0;
    puVar9 = PTR_FUN_006862a8;
    puVar8 = PTR_FUN_006862a0;
    puVar7 = PTR_FUN_00686298;
    puVar6 = PTR_FUN_00686288;
    *(undefined **)(puVar25 + 6) = PTR_FUN_00686290;
    *(undefined **)(puVar25 + 4) = puVar6;
    *(undefined **)(puVar25 + 10) = puVar8;
    *(undefined **)(puVar25 + 8) = puVar7;
    *(undefined **)(puVar25 + 0xc) = puVar9;
  }
  *(undefined4 **)(this + 0x38) = puVar25;
  if ((*(byte *)(puVar25 + 1) & 1) != 0) {
    if ((*(undefined8 **)(puVar25 + 0x10) != (undefined8 *)0x0) &&
       (pcVar19 = (code *)**(undefined8 **)(puVar25 + 0x10), pcVar19 != (code *)0x0)) {
      if (*(undefined8 **)(puVar25 + 0xe) == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = **(undefined8 **)(puVar25 + 0xe);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(puVar25 + 4) = FUN_004bfb10;
    if (*(undefined8 **)(puVar25 + 0xe) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar25 + 0xe) = 0;
    }
    if (*(undefined8 **)(puVar25 + 0x10) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar25 + 0x10) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x38);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x40) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x40) + 8), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x38) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x38) + 8);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x18) = FUN_004bfb28;
    if (*(long *)(lVar24 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x38) + 8) = 0;
    }
    if (*(long *)(lVar24 + 0x40) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x40) + 8) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x38);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x40) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x40) + 0x10), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x38) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x20) = FUN_004bfb40;
    if (*(long *)(lVar24 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10) = 0;
    }
    if (*(long *)(lVar24 + 0x40) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x40) + 0x10) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x38);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x40) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x40) + 0x18), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x38) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x18);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x28) = FUN_004bfba4;
    if (*(long *)(lVar24 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x18) = 0;
    }
    if (*(long *)(lVar24 + 0x40) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x40) + 0x18) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x38);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x40) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x40) + 0x20), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x38) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x20);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x30) = FUN_004bfbcc;
    if (*(long *)(lVar24 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x20) = 0;
    }
    if (*(long *)(lVar24 + 0x40) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x40) + 0x20) = 0;
    }
  }
  if ((*(byte *)(*(long *)(this + 0x38) + 4) & 1) != 0) {
    *(undefined1 *)(*(long *)(this + 0x38) + 4) = 0;
  }
  puVar25 = (undefined4 *)calloc(1,0x90);
  if (puVar25 == (undefined4 *)0x0) {
    puVar25 = (undefined4 *)&DAT_006866a8;
  }
  else {
    *(undefined8 *)(puVar25 + 3) = 0;
    *(undefined8 *)(puVar25 + 1) = 0;
    *(undefined8 *)(puVar25 + 0x22) = 0;
    *(undefined8 *)(puVar25 + 0x20) = 0;
    *(undefined8 *)(puVar25 + 0x1f) = 0;
    *(undefined8 *)(puVar25 + 0x1d) = 0;
    *(undefined8 *)(puVar25 + 0x1b) = 0;
    *(undefined8 *)(puVar25 + 0x19) = 0;
    *(undefined8 *)(puVar25 + 0x17) = 0;
    *(undefined8 *)(puVar25 + 0x15) = 0;
    *(undefined8 *)(puVar25 + 0x13) = 0;
    *(undefined8 *)(puVar25 + 0x11) = 0;
    *(undefined8 *)(puVar25 + 0xf) = 0;
    *(undefined8 *)(puVar25 + 0xd) = 0;
    *(undefined8 *)(puVar25 + 0xb) = 0;
    *(undefined8 *)(puVar25 + 9) = 0;
    *(undefined8 *)(puVar25 + 7) = 0;
    *(undefined8 *)(puVar25 + 5) = 0;
    *puVar25 = 1;
    *(undefined1 *)(puVar25 + 1) = 1;
    *(undefined8 *)(puVar25 + 2) = 0;
    puVar11 = PTR_FUN_00686720;
    puVar10 = PTR_FUN_00686718;
    puVar8 = PTR_FUN_00686710;
    puVar7 = PTR_FUN_00686708;
    puVar6 = PTR_FUN_006866f8;
    *(undefined **)(puVar25 + 0x16) = PTR_FUN_00686700;
    *(undefined **)(puVar25 + 0x14) = puVar6;
    *(undefined **)(puVar25 + 0x1a) = puVar8;
    *(undefined **)(puVar25 + 0x18) = puVar7;
    puVar9 = PTR_FUN_006866d0;
    puVar8 = PTR_FUN_006866c8;
    puVar7 = PTR_FUN_006866c0;
    puVar6 = PTR_FUN_006866b8;
    *(undefined **)(puVar25 + 0x1e) = puVar11;
    *(undefined **)(puVar25 + 0x1c) = puVar10;
    *(undefined **)(puVar25 + 6) = puVar7;
    *(undefined **)(puVar25 + 4) = puVar6;
    *(undefined **)(puVar25 + 10) = puVar9;
    *(undefined **)(puVar25 + 8) = puVar8;
    puVar8 = PTR_FUN_006866f0;
    puVar7 = PTR_FUN_006866e8;
    puVar6 = PTR_FUN_006866d8;
    *(undefined **)(puVar25 + 0xe) = PTR_FUN_006866e0;
    *(undefined **)(puVar25 + 0xc) = puVar6;
    *(undefined **)(puVar25 + 0x12) = puVar8;
    *(undefined **)(puVar25 + 0x10) = puVar7;
  }
  *(undefined4 **)(this + 0x40) = puVar25;
  if ((*(byte *)(puVar25 + 1) & 1) != 0) {
    if ((*(undefined8 **)(puVar25 + 0x22) != (undefined8 *)0x0) &&
       (pcVar19 = (code *)**(undefined8 **)(puVar25 + 0x22), pcVar19 != (code *)0x0)) {
      if (*(undefined8 **)(puVar25 + 0x20) == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = **(undefined8 **)(puVar25 + 0x20);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(puVar25 + 4) = FUN_004bfbd4;
    if (*(undefined8 **)(puVar25 + 0x20) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar25 + 0x20) = 0;
    }
    if (*(undefined8 **)(puVar25 + 0x22) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar25 + 0x22) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 8), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 8);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x18) = FUN_004bfe20;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 8) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 8) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x18), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x18);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x28) = FUN_004bfe38;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x18) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x18) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x20), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x20);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x30) = FUN_004bfe48;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x20) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x20) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x28), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x28);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x38) = FUN_004bfe4c;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x28) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x28) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x30), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x30);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x40) = FUN_004bfe54;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x30) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x30) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x58), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x58);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x68) = FUN_004c0048;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x58) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x58) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x60), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x60);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x70) = FUN_004c004c;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x60) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x60) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x10), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x10);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x20) = FUN_004c0050;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x10) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x10) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x40), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x40);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x50) = FUN_004c0058;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x40) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x40) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x48), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x48);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x58) = FUN_004c02dc;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x48) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x48) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x50), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x50);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x60) = FUN_004c05c0;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x50) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x50) = 0;
    }
  }
  lVar24 = *(long *)(this + 0x40);
  if ((*(byte *)(lVar24 + 4) & 1) != 0) {
    if ((*(long *)(lVar24 + 0x88) != 0) &&
       (pcVar19 = *(code **)(*(long *)(lVar24 + 0x88) + 0x38), pcVar19 != (code *)0x0)) {
      if (*(long *)(lVar24 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x38);
      }
      (*pcVar19)(uVar18);
    }
    *(code **)(lVar24 + 0x48) = FUN_004c0828;
    if (*(long *)(lVar24 + 0x80) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x38) = 0;
    }
    if (*(long *)(lVar24 + 0x88) != 0) {
      *(undefined8 *)(*(long *)(lVar24 + 0x88) + 0x38) = 0;
    }
  }
  if ((*(byte *)(*(long *)(this + 0x40) + 4) & 1) != 0) {
    *(undefined1 *)(*(long *)(this + 0x40) + 4) = 0;
  }
  param_1 = *(long *)(param_1 + 0x20);
  puVar22 = *(undefined8 **)(param_1 + 0x140);
  if (*(undefined8 **)(param_1 + 0x140) == (undefined8 *)0x0) {
    do {
      puVar22 = (undefined8 *)&DAT_0025d4b0;
      if (*(long *)(param_1 + 0x60) == 0) break;
      puVar22 = (undefined8 *)FUN_0050e8b0();
      if (puVar22 == (undefined8 *)0x0) {
        puVar22 = (undefined8 *)&DAT_0025d4b0;
      }
      lVar24 = FUN_003410d0(0,puVar22,(undefined8 *)(param_1 + 0x140));
      if (lVar24 == 0) break;
      FUN_0050edcc(puVar22);
      puVar22 = *(undefined8 **)(param_1 + 0x140);
    } while (puVar22 == (undefined8 *)0x0);
  }
LAB_004bf00c:
  puVar1 = &DAT_0025d4b0;
  if ((uint *)*puVar22 != (uint *)0x0) {
    puVar1 = (uint *)*puVar22;
  }
  puVar2 = &DAT_0025d4b0;
  if (0xd < puVar1[6]) {
    puVar2 = *(uint **)(puVar1 + 4);
  }
  this[0x98] = (HBFont)(*(ushort *)((long)puVar2 + 2) >> 8 != 0 ||
                       (*(ushort *)((long)puVar2 + 2) & 0xff) != 0);
  puVar22 = *(undefined8 **)(param_1 + 0x140);
  if (*(undefined8 **)(param_1 + 0x140) == (undefined8 *)0x0) {
    do {
      puVar22 = (undefined8 *)&DAT_0025d4b0;
      if (*(long *)(param_1 + 0x60) == 0) break;
      puVar22 = (undefined8 *)FUN_0050e8b0();
      if (puVar22 == (undefined8 *)0x0) {
        puVar22 = (undefined8 *)&DAT_0025d4b0;
      }
      lVar24 = FUN_003410d0(0,puVar22,(undefined8 *)(param_1 + 0x140));
      if (lVar24 == 0) break;
      FUN_0050edcc(puVar22);
      puVar22 = *(undefined8 **)(param_1 + 0x140);
    } while (puVar22 == (undefined8 *)0x0);
  }
  puVar1 = &DAT_0025d4b0;
  if ((uint *)*puVar22 != (uint *)0x0) {
    puVar1 = (uint *)*puVar22;
  }
  puVar2 = &DAT_0025d4b0;
  if (0xd < puVar1[6]) {
    puVar2 = *(uint **)(puVar1 + 4);
  }
  if ((ushort)((ushort)*puVar2 >> 8) == 0 && ((ushort)*puVar2 & 0xff) == 0) {
    HVar12 = (HBFont)0x0;
  }
  else {
    uVar14 = (*(uint *)((long)puVar2 + 0xe) & 0xff00ff00) >> 8 |
             (*(uint *)((long)puVar2 + 0xe) & 0xff00ff) << 8;
    uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
    puVar1 = &DAT_0025d4b0;
    if (uVar14 != 0) {
      puVar1 = (uint *)((long)puVar2 + (ulong)uVar14);
    }
    uVar14 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    HVar12 = (HBFont)(uVar14 >> 0x10 != 0 || (uVar14 & 0xffff) != 0);
  }
  this[0x99] = HVar12;
  puVar25 = *(undefined4 **)(param_1 + 0x150);
  if (puVar25 == (undefined4 *)0x0) {
    do {
      puVar25 = &DAT_0025d4b0;
      if (*(long *)(param_1 + 0x60) == 0) break;
      puVar25 = (undefined4 *)FUN_005102c4();
      if (puVar25 == (undefined4 *)0x0) {
        lVar24 = FUN_003410d0(0,&DAT_0025d4b0,param_1 + 0x150);
        puVar25 = &DAT_0025d4b0;
        if (lVar24 == 0) break;
      }
      else {
        lVar24 = FUN_003410d0(0,puVar25,param_1 + 0x150);
        if (lVar24 == 0) break;
        FUN_005106fc(puVar25);
      }
      puVar25 = *(undefined4 **)(param_1 + 0x150);
    } while (puVar25 == (undefined4 *)0x0);
  }
  puVar1 = &DAT_0025d4b0;
  if (*(uint **)(puVar25 + 2) != (uint *)0x0) {
    puVar1 = *(uint **)(puVar25 + 2);
  }
  puVar2 = &DAT_0025d4b0;
  if (3 < puVar1[6]) {
    puVar2 = *(uint **)(puVar1 + 4);
  }
  if ((ushort)((ushort)*puVar2 >> 8) == 0 && ((ushort)*puVar2 & 0xff) == 0) {
    puVar22 = *(undefined8 **)(param_1 + 0x158);
    if (*(undefined8 **)(param_1 + 0x158) == (undefined8 *)0x0) {
      do {
        puVar22 = (undefined8 *)&DAT_0025d4b0;
        if (*(long *)(param_1 + 0x60) == 0) break;
        puVar22 = (undefined8 *)FUN_0051005c();
        if (puVar22 == (undefined8 *)0x0) {
          puVar22 = (undefined8 *)&DAT_0025d4b0;
        }
        lVar24 = FUN_003410d0(0,puVar22,(undefined8 *)(param_1 + 0x158));
        if (lVar24 == 0) break;
        FUN_0051027c(puVar22);
        puVar22 = *(undefined8 **)(param_1 + 0x158);
      } while (puVar22 == (undefined8 *)0x0);
    }
    puVar1 = &DAT_0025d4b0;
    if ((uint *)*puVar22 != (uint *)0x0) {
      puVar1 = (uint *)*puVar22;
    }
    puVar2 = &DAT_0025d4b0;
    if (7 < puVar1[6]) {
      puVar2 = *(uint **)(puVar1 + 4);
    }
    HVar12 = (HBFont)((ushort)((ushort)*puVar2 >> 8) != 0 || ((ushort)*puVar2 & 0xff) != 0);
  }
  else {
    HVar12 = (HBFont)0x1;
  }
  this[0x9a] = HVar12;
  if (this[0x98] != (HBFont)0x0 || this[0x99] != (HBFont)0x0) {
    local_a0[0] = local_a0[0] & 0xffffffff00000000;
    rive_hb_ot_color_palette_get_colors(param_1,0,0,local_a0,0);
    uVar20 = local_a0[0] & 0xffffffff;
    if ((int)local_a0[0] != 0) {
      lVar24 = *(long *)(this + 0xa0);
      uVar23 = *(long *)(this + 0xa8) - lVar24 >> 2;
      if (uVar20 < uVar23 || uVar20 - uVar23 == 0) {
        if (uVar20 < uVar23) {
          *(ulong *)(this + 0xa8) = lVar24 + uVar20 * 4;
        }
      }
      else {
        FUN_0047ac1c(param_3,uVar20 - uVar23);
        lVar24 = *(long *)param_3;
      }
      rive_hb_ot_color_palette_get_colors(param_1,0,0,local_a0,lVar24);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bf3ec  FUN_004bf3ec =====

void FUN_004bf3ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004bf400  FUN_004bf400 =====

void FUN_004bf400(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined2 uVar14;
  undefined8 uVar15;
  float fVar16;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(ulong *)(param_2 + 8);
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) == 0) {
    uVar13 = 0;
    bVar4 = true;
    if (uVar5 == 0) {
LAB_004bf474:
      if (bVar4) goto LAB_004bf4f0;
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar13 < 3) {
LAB_004bf4cc:
        uVar7 = std::__ndk1::__next_prime(uVar7);
      }
      else {
        uVar15 = NEON_cnt(uVar13,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14)) goto LAB_004bf4cc;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (uVar13 <= uVar5) goto LAB_004bf4f0;
    }
  }
  else {
    uVar5 = std::__ndk1::__next_prime(uVar5);
    uVar13 = param_1[1];
    bVar4 = uVar13 <= uVar5;
    if (uVar5 <= uVar13) goto LAB_004bf474;
  }
  FUN_004c117c(param_1,uVar5);
LAB_004bf4f0:
  plVar12 = *(long **)(param_2 + 0x10);
  if (plVar12 != (long *)0x0) {
    uVar5 = param_1[1];
    plVar1 = param_1 + 2;
    do {
      uVar2 = *(uint *)(plVar12 + 2);
      uVar13 = (ulong)uVar2;
      if (uVar5 != 0) {
        uVar15 = NEON_cnt(uVar5,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
        if (uVar7 < 2) {
          unaff_x26 = (ulong)((int)uVar5 - 1U & uVar2);
        }
        else {
          unaff_x26 = uVar13;
          if (uVar5 <= uVar13) {
            uVar11 = 0;
            if (uVar5 != 0) {
              uVar11 = uVar13 / uVar5;
            }
            unaff_x26 = uVar13 - uVar11 * uVar5;
          }
        }
        plVar10 = *(long **)(*param_1 + unaff_x26 * 8);
        if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
          do {
            uVar11 = plVar10[1];
            if (uVar11 == uVar13) {
              if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_004bf768;
            }
            else {
              if (uVar7 < 2) {
                uVar11 = uVar11 & uVar5 - 1;
              }
              else if (uVar5 <= uVar11) {
                uVar3 = 0;
                if (uVar5 != 0) {
                  uVar3 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar3 * uVar5;
              }
              if (uVar11 != unaff_x26) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
      plVar10 = (long *)operator_new(0x18);
      lVar6 = param_1[3];
      *plVar10 = 0;
      plVar10[1] = uVar13;
      fVar16 = *(float *)(param_1 + 4);
      plVar10[2] = plVar12[2];
      if ((uVar5 == 0) || (fVar16 * (float)uVar5 < (float)(lVar6 + 1))) {
        if (uVar5 < 3) {
          uVar7 = 1;
        }
        else {
          uVar7 = (ulong)((uVar5 & uVar5 - 1) != 0);
        }
        uVar7 = uVar7 | uVar5 << 1;
        uVar11 = (ulong)((float)(lVar6 + 1) / fVar16);
        if (uVar7 <= uVar11) {
          uVar7 = uVar11;
        }
        if (uVar7 - 1 == 0) {
          uVar7 = 2;
        }
        else if ((uVar7 & uVar7 - 1) != 0) {
          uVar7 = std::__ndk1::__next_prime(uVar7);
          uVar5 = param_1[1];
        }
        if (uVar5 < uVar7) {
LAB_004bf648:
          FUN_004c117c(param_1);
        }
        else if (uVar7 < uVar5) {
          uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if (uVar5 < 3) {
LAB_004bf6a8:
            uVar11 = std::__ndk1::__next_prime(uVar11);
          }
          else {
            uVar15 = NEON_cnt(uVar5,1);
            uVar14 = NEON_uaddlv(uVar15,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14)) goto LAB_004bf6a8;
            if (1 < uVar11) {
              uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
            }
          }
          if (uVar7 <= uVar11) {
            uVar7 = uVar11;
          }
          if (uVar7 < uVar5) goto LAB_004bf648;
        }
        uVar5 = param_1[1];
        if ((uVar5 & uVar5 - 1) == 0) {
          unaff_x26 = (ulong)((int)uVar5 - 1U & uVar2);
        }
        else {
          unaff_x26 = uVar13;
          if (uVar5 <= uVar13) {
            uVar7 = 0;
            if (uVar5 != 0) {
              uVar7 = uVar13 / uVar5;
            }
            unaff_x26 = uVar13 - uVar7 * uVar5;
          }
        }
      }
      lVar6 = *param_1;
      plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
      if (plVar8 == (long *)0x0) {
        lVar9 = *plVar1;
        *plVar1 = (long)plVar10;
        *plVar10 = lVar9;
        *(long **)(lVar6 + unaff_x26 * 8) = plVar1;
        if (*plVar10 != 0) {
          uVar13 = *(ulong *)(*plVar10 + 8);
          if ((uVar5 & uVar5 - 1) == 0) {
            uVar13 = uVar13 & uVar5 - 1;
          }
          else if (uVar5 <= uVar13) {
            uVar7 = 0;
            if (uVar5 != 0) {
              uVar7 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar7 * uVar5;
          }
          plVar8 = (long *)(*param_1 + uVar13 * 8);
          goto LAB_004bf758;
        }
      }
      else {
        *plVar10 = *plVar8;
LAB_004bf758:
        *plVar8 = (long)plVar10;
      }
      param_1[3] = param_1[3] + 1;
LAB_004bf768:
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  return;
}


// ===== 004bf788  FUN_004bf788 =====

void FUN_004bf788(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined2 uVar14;
  undefined8 uVar15;
  float fVar16;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(ulong *)(param_2 + 8);
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) == 0) {
    uVar13 = 0;
    bVar4 = true;
    if (uVar5 == 0) {
LAB_004bf7fc:
      if (bVar4) goto LAB_004bf878;
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar13 < 3) {
LAB_004bf854:
        uVar7 = std::__ndk1::__next_prime(uVar7);
      }
      else {
        uVar15 = NEON_cnt(uVar13,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14)) goto LAB_004bf854;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (uVar13 <= uVar5) goto LAB_004bf878;
    }
  }
  else {
    uVar5 = std::__ndk1::__next_prime(uVar5);
    uVar13 = param_1[1];
    bVar4 = uVar13 <= uVar5;
    if (uVar5 <= uVar13) goto LAB_004bf7fc;
  }
  FUN_004c1020(param_1,uVar5);
LAB_004bf878:
  plVar12 = *(long **)(param_2 + 0x10);
  if (plVar12 != (long *)0x0) {
    uVar5 = param_1[1];
    plVar1 = param_1 + 2;
    do {
      uVar2 = *(uint *)(plVar12 + 2);
      uVar13 = (ulong)uVar2;
      if (uVar5 != 0) {
        uVar15 = NEON_cnt(uVar5,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
        if (uVar7 < 2) {
          unaff_x26 = (ulong)((int)uVar5 - 1U & uVar2);
        }
        else {
          unaff_x26 = uVar13;
          if (uVar5 <= uVar13) {
            uVar11 = 0;
            if (uVar5 != 0) {
              uVar11 = uVar13 / uVar5;
            }
            unaff_x26 = uVar13 - uVar11 * uVar5;
          }
        }
        plVar10 = *(long **)(*param_1 + unaff_x26 * 8);
        if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
          do {
            uVar11 = plVar10[1];
            if (uVar11 == uVar13) {
              if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_004bfaf0;
            }
            else {
              if (uVar7 < 2) {
                uVar11 = uVar11 & uVar5 - 1;
              }
              else if (uVar5 <= uVar11) {
                uVar3 = 0;
                if (uVar5 != 0) {
                  uVar3 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar3 * uVar5;
              }
              if (uVar11 != unaff_x26) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
      plVar10 = (long *)operator_new(0x18);
      lVar6 = param_1[3];
      *plVar10 = 0;
      plVar10[1] = uVar13;
      fVar16 = *(float *)(param_1 + 4);
      plVar10[2] = plVar12[2];
      if ((uVar5 == 0) || (fVar16 * (float)uVar5 < (float)(lVar6 + 1))) {
        if (uVar5 < 3) {
          uVar7 = 1;
        }
        else {
          uVar7 = (ulong)((uVar5 & uVar5 - 1) != 0);
        }
        uVar7 = uVar7 | uVar5 << 1;
        uVar11 = (ulong)((float)(lVar6 + 1) / fVar16);
        if (uVar7 <= uVar11) {
          uVar7 = uVar11;
        }
        if (uVar7 - 1 == 0) {
          uVar7 = 2;
        }
        else if ((uVar7 & uVar7 - 1) != 0) {
          uVar7 = std::__ndk1::__next_prime(uVar7);
          uVar5 = param_1[1];
        }
        if (uVar5 < uVar7) {
LAB_004bf9d0:
          FUN_004c1020(param_1);
        }
        else if (uVar7 < uVar5) {
          uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if (uVar5 < 3) {
LAB_004bfa30:
            uVar11 = std::__ndk1::__next_prime(uVar11);
          }
          else {
            uVar15 = NEON_cnt(uVar5,1);
            uVar14 = NEON_uaddlv(uVar15,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14)) goto LAB_004bfa30;
            if (1 < uVar11) {
              uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
            }
          }
          if (uVar7 <= uVar11) {
            uVar7 = uVar11;
          }
          if (uVar7 < uVar5) goto LAB_004bf9d0;
        }
        uVar5 = param_1[1];
        if ((uVar5 & uVar5 - 1) == 0) {
          unaff_x26 = (ulong)((int)uVar5 - 1U & uVar2);
        }
        else {
          unaff_x26 = uVar13;
          if (uVar5 <= uVar13) {
            uVar7 = 0;
            if (uVar5 != 0) {
              uVar7 = uVar13 / uVar5;
            }
            unaff_x26 = uVar13 - uVar7 * uVar5;
          }
        }
      }
      lVar6 = *param_1;
      plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
      if (plVar8 == (long *)0x0) {
        lVar9 = *plVar1;
        *plVar1 = (long)plVar10;
        *plVar10 = lVar9;
        *(long **)(lVar6 + unaff_x26 * 8) = plVar1;
        if (*plVar10 != 0) {
          uVar13 = *(ulong *)(*plVar10 + 8);
          if ((uVar5 & uVar5 - 1) == 0) {
            uVar13 = uVar13 & uVar5 - 1;
          }
          else if (uVar5 <= uVar13) {
            uVar7 = 0;
            if (uVar5 != 0) {
              uVar7 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar7 * uVar5;
          }
          plVar8 = (long *)(*param_1 + uVar13 * 8);
          goto LAB_004bfae0;
        }
      }
      else {
        *plVar10 = *plVar8;
LAB_004bfae0:
        *plVar8 = (long)plVar10;
      }
      param_1[3] = param_1[3] + 1;
LAB_004bfaf0:
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  return;
}


// ===== 004bfb10  FUN_004bfb10 =====

void FUN_004bfb10(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  rive::RawPath::move(param_1 * 0.00048828125,param_2 * -0.00048828125,param_4);
  return;
}


// ===== 004bfb28  FUN_004bfb28 =====

void FUN_004bfb28(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  rive::RawPath::line(param_1 * 0.00048828125,param_2 * -0.00048828125,param_4);
  return;
}


// ===== 004bfb40  FUN_004bfb40 =====

void FUN_004bfb40(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 long *param_6)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (*param_6 != param_6[1]) {
    param_1 = param_1 * (float)DAT_0024e818;
    fVar1 = (float)((ulong)DAT_0024e818 >> 0x20);
    param_2 = param_2 * fVar1;
    param_3 = param_3 * (float)DAT_0024e818;
    param_4 = param_4 * fVar1;
    uVar2 = *(undefined8 *)(param_6[1] + -8);
    fVar1 = (float)uVar2;
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    rive::RawPath::cubic
              (fVar1 + (param_1 - fVar1) * 0.6666667,fVar3 + (param_2 - fVar3) * 0.6666667,
               (param_1 - param_3) * 0.6666667 + param_3,(param_2 - param_4) * 0.6666667 + param_4,
               param_3,param_4,param_6);
    return;
  }
  return;
}


// ===== 004bfba4  FUN_004bfba4 =====

void FUN_004bfba4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined8 param_7,undefined8 param_8)

{
  rive::RawPath::cubic
            (param_1 * 0.00048828125,param_2 * -0.00048828125,param_3 * 0.00048828125,
             param_4 * -0.00048828125,param_5 * 0.00048828125,param_6 * -0.00048828125,param_8);
  return;
}


// ===== 004bfbcc  FUN_004bfbcc =====

void FUN_004bfbcc(undefined8 param_1,RawPath *param_2)

{
  rive::RawPath::close(param_2);
  return;
}


// ===== 004bfbd4  FUN_004bfbd4 =====

void FUN_004bfbd4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x1;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  puVar5 = *(undefined8 **)(param_8 + 0x20);
  puVar4 = *(undefined8 **)(param_8 + 0x28);
  param_5 = param_5 * (float)DAT_0024e818;
  param_6 = param_6 * (float)((ulong)DAT_0024e818 >> 0x20);
  if (puVar5 == puVar4) {
    if (puVar5 < *(undefined8 **)(param_8 + 0x30)) {
      puVar12 = puVar5 + 3;
      puVar5[1] = CONCAT44(param_4,param_3);
      *puVar5 = CONCAT44(param_2,param_1);
      puVar5[2] = CONCAT44(param_6,param_5);
      goto LAB_004bfde4;
    }
    lVar7 = (long)*(undefined8 **)(param_8 + 0x30) - (long)puVar5 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (0xaaaaaaaaaaaaaaa < uVar9) {
LAB_004bfe18:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    puVar4 = (undefined8 *)operator_new(uVar9 * 0x18);
    puVar12 = puVar4 + 3;
    *(undefined8 **)(param_8 + 0x20) = puVar4;
    *(undefined8 **)(param_8 + 0x28) = puVar12;
    puVar4[2] = CONCAT44(param_6,param_5);
    puVar4[1] = CONCAT44(param_4,param_3);
    *puVar4 = CONCAT44(param_2,param_1);
    *(undefined8 **)(param_8 + 0x30) = puVar4 + uVar9 * 3;
  }
  else {
    fVar13 = (float)puVar4[-2];
    fVar15 = (float)((ulong)puVar4[-2] >> 0x20);
    fVar17 = (float)puVar4[-3];
    fVar18 = (float)((ulong)puVar4[-3] >> 0x20);
    uVar19 = CONCAT44((float)((ulong)puVar4[-1] >> 0x20) + fVar15 * param_6 + fVar18 * param_5,
                      (float)puVar4[-1] + fVar13 * param_6 + fVar17 * param_5);
    uVar14 = CONCAT44(fVar15 * param_2 + param_1 * fVar18,fVar13 * param_2 + param_1 * fVar17);
    uVar16 = CONCAT44(fVar15 * param_4 + param_3 * fVar18,fVar13 * param_4 + param_3 * fVar17);
    if (puVar4 < *(undefined8 **)(param_8 + 0x30)) {
      puVar4[1] = uVar16;
      *puVar4 = uVar14;
      puVar12 = puVar4 + 3;
      puVar4[2] = uVar19;
      goto LAB_004bfde4;
    }
    lVar7 = (long)puVar4 - (long)puVar5 >> 3;
    uVar9 = lVar7 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar9) {
      FUN_004c100c();
      if (*(long *)(extraout_x1 + 0x20) != *(long *)(extraout_x1 + 0x28)) {
        *(long *)(extraout_x1 + 0x28) = *(long *)(extraout_x1 + 0x28) + -0x18;
      }
      return;
    }
    lVar8 = (long)*(undefined8 **)(param_8 + 0x30) - (long)puVar5 >> 3;
    uVar11 = lVar8 * 0x5555555555555556;
    if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
      uVar11 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_004bfe18;
      pvVar3 = operator_new(uVar11 * 0x18);
    }
    puVar10 = (undefined8 *)((long)pvVar3 + lVar7 * 8);
    puVar12 = puVar10 + 3;
    puVar10[1] = uVar16;
    *puVar10 = uVar14;
    puVar10[2] = uVar19;
    do {
      puVar1 = puVar4 + -1;
      uVar16 = puVar4[-2];
      uVar14 = puVar4[-3];
      puVar4 = puVar4 + -3;
      puVar10[-1] = *puVar1;
      puVar10[-2] = uVar16;
      puVar10[-3] = uVar14;
      puVar10 = puVar10 + -3;
    } while (puVar4 != puVar5);
    puVar5 = *(undefined8 **)(param_8 + 0x20);
    *(undefined8 **)(param_8 + 0x20) = puVar10;
    *(undefined8 **)(param_8 + 0x28) = puVar12;
    *(void **)(param_8 + 0x30) = (void *)((long)pvVar3 + uVar11 * 0x18);
  }
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
LAB_004bfde4:
  *(undefined8 **)(param_8 + 0x28) = puVar12;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bfe20  FUN_004bfe20 =====

void FUN_004bfe20(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != *(long *)(param_2 + 0x28)) {
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + -0x18;
  }
  return;
}


// ===== 004bfe38  FUN_004bfe38 =====

void FUN_004bfe38(undefined8 param_1,long param_2,undefined2 param_3)

{
  *(undefined2 *)(param_2 + 0x18) = param_3;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  return;
}


// ===== 004bfe48  FUN_004bfe48 =====

void FUN_004bfe48(void)

{
  return;
}


// ===== 004bfe4c  FUN_004bfe4c =====

void FUN_004bfe4c(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x1a) = 0;
  return;
}


// ===== 004bfe54  FUN_004bfe54 =====

void FUN_004bfe54(undefined8 param_1,undefined8 *param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  void *local_100;
  void *pvStack_f8;
  undefined8 local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  uint local_c0;
  uint uStack_bc;
  undefined1 local_b8;
  void *local_b0;
  void *pvStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  void *local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)((long)param_2 + 0x1a) != '\0') {
    local_c8 = 0;
    local_c0 = local_c0 & 0xffffff00;
    pvStack_f8 = (void *)0x0;
    local_100 = (void *)0x0;
    local_e8 = (void *)0x0;
    local_f0 = 0;
    uStack_d8 = 0;
    local_e0 = (void *)0x0;
    uStack_bc = 0xff000000;
    local_b8 = 0;
    pvStack_a8 = (void *)0x0;
    local_b0 = (void *)0x0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    local_78 = (void *)0x0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = 0;
    local_50 = 0;
    FUN_005087fc(*param_2,*(undefined2 *)(param_2 + 3),param_2[1],&local_100,1);
    uVar4 = local_c0;
    local_c0 = local_c0 & 0xffffff00;
    if (param_3 == 0) {
      uVar2 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
      uStack_bc = uVar2 >> 0x10 | uVar2 << 0x10;
    }
    else {
      uStack_bc = *(uint *)((long)param_2 + 0x1c);
      local_b8 = 1;
    }
    lVar6 = param_2[2];
    puVar1 = *(undefined8 **)(lVar6 + 8);
    if (puVar1 < *(undefined8 **)(lVar6 + 0x10)) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[1] = pvStack_f8;
      *puVar1 = local_100;
      puVar1[0xc] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[2] = local_f0;
      puVar1[0x13] = 0;
      local_100 = (void *)0x0;
      pvStack_f8 = (void *)0x0;
      puVar1[4] = local_e0;
      puVar1[3] = local_e8;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      puVar1[5] = uStack_d8;
      local_e0 = (void *)0x0;
      uStack_d8 = 0;
      *(undefined1 *)(puVar1 + 7) = local_c8;
      puVar1[6] = local_d0;
      *(undefined1 *)(puVar1 + 9) = local_b8;
      puVar1[8] = CONCAT44(uStack_bc,uVar4) & 0xffffffffffffff00;
      puVar1[0xb] = pvStack_a8;
      puVar1[10] = local_b0;
      local_b0 = (void *)0x0;
      pvStack_a8 = (void *)0x0;
      puVar1[0xc] = local_a0;
      local_a0 = 0;
      puVar1[0x10] = uStack_80;
      puVar1[0xf] = uStack_88;
      puVar1[0xe] = local_90;
      puVar1[0xd] = uStack_98;
      puVar1[0x12] = local_70;
      puVar1[0x11] = local_78;
      local_78 = (void *)0x0;
      local_70 = (void *)0x0;
      puVar1[0x13] = uStack_68;
      uStack_68 = 0;
      puVar1[0x16] = local_50;
      puVar1[0x15] = uStack_58;
      puVar1[0x14] = local_60;
      *(undefined8 **)(lVar6 + 8) = puVar1 + 0x17;
    }
    else {
      uVar5 = FUN_004c0a3c(lVar6,&local_100);
      *(undefined8 *)(lVar6 + 8) = uVar5;
      if (local_78 != (void *)0x0) {
        local_70 = local_78;
        operator_delete(local_78);
      }
    }
    if (local_b0 != (void *)0x0) {
      pvStack_a8 = local_b0;
      operator_delete(local_b0);
    }
    if (local_e8 != (void *)0x0) {
      local_e0 = local_e8;
      operator_delete(local_e8);
    }
    if (local_100 != (void *)0x0) {
      pvStack_f8 = local_100;
      operator_delete(local_100);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c0048  FUN_004c0048 =====

void FUN_004c0048(void)

{
  return;
}


// ===== 004c004c  FUN_004c004c =====

void FUN_004c004c(void)

{
  return;
}


// ===== 004c0050  FUN_004c0050 =====

undefined8 FUN_004c0050(void)

{
  return 0;
}


// ===== 004c0058  FUN_004c0058 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c0058(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 undefined8 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *local_120;
  void *pvStack_118;
  undefined8 local_110;
  void *local_100;
  void *pvStack_f8;
  undefined8 local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  void *local_b0;
  void *pvStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  void *local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)((long)param_6 + 0x1a) != '\0') {
    local_c8 = 0;
    local_c0 = local_c0 & 0xffffff00;
    pvStack_f8 = (void *)0x0;
    local_100 = (void *)0x0;
    local_e8 = (void *)0x0;
    local_f0 = 0;
    uStack_d8 = 0;
    local_e0 = (void *)0x0;
    uStack_bc = 0xff000000;
    local_b8 = 0;
    pvStack_a8 = (void *)0x0;
    local_b0 = (void *)0x0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    local_78 = (void *)0x0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = 0;
    local_50 = 0;
    FUN_005087fc(*param_6,*(undefined2 *)(param_6 + 3),param_6[1],&local_100,1);
    local_c0 = CONCAT31(local_c0._1_3_,1);
    FUN_004c0d0c(&local_120,param_7,*(undefined4 *)((long)param_6 + 0x1c));
    if (local_b0 != (void *)0x0) {
      pvStack_a8 = local_b0;
      operator_delete(local_b0);
    }
    lVar4 = param_6[5];
    pvStack_a8 = pvStack_118;
    local_b0 = local_120;
    local_a0 = local_110;
    if (param_6[4] == lVar4) {
      uStack_98 = CONCAT44(param_2 * (float)((ulong)_DAT_0024dec0 >> 0x20),
                           param_1 * (float)_DAT_0024dec0);
      local_90 = CONCAT44(param_4 * (float)((ulong)_UNK_0024dec8 >> 0x20),
                          param_3 * (float)_UNK_0024dec8);
    }
    else {
      fVar5 = (float)*(undefined8 *)(lVar4 + -0x10);
      fVar6 = (float)((ulong)*(undefined8 *)(lVar4 + -0x10) >> 0x20);
      fVar9 = (float)*(undefined8 *)(lVar4 + -8);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + -8) >> 0x20);
      fVar7 = (float)*(undefined8 *)(lVar4 + -0x18);
      fVar8 = (float)((ulong)*(undefined8 *)(lVar4 + -0x18) >> 0x20);
      uStack_98 = CONCAT44(fVar10 + fVar6 * param_2 + param_1 * fVar8,
                           fVar9 + fVar5 * param_2 + param_1 * fVar7);
      local_90 = CONCAT44(fVar10 + fVar6 * param_4 + param_3 * fVar8,
                          fVar9 + fVar5 * param_4 + param_3 * fVar7);
    }
    lVar4 = param_6[2];
    puVar1 = *(undefined8 **)(lVar4 + 8);
    if (puVar1 < *(undefined8 **)(lVar4 + 0x10)) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[1] = pvStack_f8;
      *puVar1 = local_100;
      puVar1[0xc] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[2] = local_f0;
      puVar1[0x13] = 0;
      local_100 = (void *)0x0;
      pvStack_f8 = (void *)0x0;
      puVar1[4] = local_e0;
      puVar1[3] = local_e8;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      puVar1[5] = uStack_d8;
      local_e0 = (void *)0x0;
      uStack_d8 = 0;
      *(undefined1 *)(puVar1 + 7) = local_c8;
      puVar1[6] = local_d0;
      *(undefined1 *)(puVar1 + 9) = local_b8;
      puVar1[8] = CONCAT44(uStack_bc,local_c0);
      puVar1[0xb] = pvStack_118;
      puVar1[10] = local_120;
      local_b0 = (void *)0x0;
      pvStack_a8 = (void *)0x0;
      puVar1[0xc] = local_110;
      local_a0 = 0;
      puVar1[0x10] = uStack_80;
      puVar1[0xf] = uStack_88;
      puVar1[0xe] = local_90;
      puVar1[0xd] = uStack_98;
      puVar1[0x12] = local_70;
      puVar1[0x11] = local_78;
      local_78 = (void *)0x0;
      local_70 = (void *)0x0;
      puVar1[0x13] = uStack_68;
      uStack_68 = 0;
      puVar1[0x16] = local_50;
      puVar1[0x15] = uStack_58;
      puVar1[0x14] = local_60;
      *(undefined8 **)(lVar4 + 8) = puVar1 + 0x17;
    }
    else {
      uVar3 = FUN_004c0a3c(lVar4,&local_100);
      *(undefined8 *)(lVar4 + 8) = uVar3;
      if (local_78 != (void *)0x0) {
        local_70 = local_78;
        operator_delete(local_78);
      }
    }
    if (local_b0 != (void *)0x0) {
      pvStack_a8 = local_b0;
      operator_delete(local_b0);
    }
    if (local_e8 != (void *)0x0) {
      local_e0 = local_e8;
      operator_delete(local_e8);
    }
    if (local_100 != (void *)0x0) {
      pvStack_f8 = local_100;
      operator_delete(local_100);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c02dc  FUN_004c02dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c02dc(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined8 param_7,undefined8 *param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvStack_130;
  void *pvStack_128;
  undefined8 local_120;
  void *local_110;
  void *pvStack_108;
  undefined8 local_100;
  void *local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  void *local_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  void *local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)((long)param_8 + 0x1a) != '\0') {
    local_d8 = 0;
    local_d0 = local_d0 & 0xffffff00;
    pvStack_108 = (void *)0x0;
    local_110 = (void *)0x0;
    local_f8 = (void *)0x0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = (void *)0x0;
    uStack_cc = 0xff000000;
    local_c8 = 0;
    pvStack_b8 = (void *)0x0;
    local_c0 = (void *)0x0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = (void *)0x0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 0;
    FUN_005087fc(*param_8,*(undefined2 *)(param_8 + 3),param_8[1],&local_110,1);
    local_d0 = CONCAT31(local_d0._1_3_,2);
    FUN_004c0d0c(&pvStack_130,param_9,*(undefined4 *)((long)param_8 + 0x1c));
    if (local_c0 != (void *)0x0) {
      pvStack_b8 = local_c0;
      operator_delete(local_c0);
    }
    lVar4 = param_8[5];
    local_b0 = local_120;
    pvStack_b8 = pvStack_128;
    local_c0 = pvStack_130;
    if (param_8[4] == lVar4) {
      param_3 = param_3 * 0.00048828125;
      param_6 = param_6 * 0.00048828125;
      uStack_a8 = CONCAT44(param_2 * (float)((ulong)_DAT_0024dec0 >> 0x20),
                           param_1 * (float)_DAT_0024dec0);
      local_a0 = CONCAT44(param_5 * (float)((ulong)_UNK_0024dec8 >> 0x20),
                          param_4 * (float)_UNK_0024dec8);
    }
    else {
      fVar7 = (float)*(undefined8 *)(lVar4 + -0x18);
      fVar8 = (float)((ulong)*(undefined8 *)(lVar4 + -0x18) >> 0x20);
      fVar5 = (float)*(undefined8 *)(lVar4 + -0x10);
      fVar6 = (float)((ulong)*(undefined8 *)(lVar4 + -0x10) >> 0x20);
      fVar9 = (float)*(undefined8 *)(lVar4 + -8);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + -8) >> 0x20);
      uStack_a8 = CONCAT44(fVar10 + fVar6 * param_2 + param_1 * fVar8,
                           fVar9 + fVar5 * param_2 + param_1 * fVar7);
      local_a0 = CONCAT44(fVar10 + fVar6 * param_5 + param_4 * fVar8,
                          fVar9 + fVar5 * param_5 + param_4 * fVar7);
      fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar4 + -0x18),*(undefined4 *)(lVar4 + -0x18),
                                *(float *)(lVar4 + -0x14) * *(float *)(lVar4 + -0x14));
      param_3 = SQRT(fVar5) * param_3;
      fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar4 + -0x18),*(undefined4 *)(lVar4 + -0x18),
                                *(float *)(lVar4 + -0x14) * *(float *)(lVar4 + -0x14));
      param_6 = SQRT(fVar5) * param_6;
    }
    lVar4 = param_8[2];
    uStack_98 = CONCAT44(param_6,param_3);
    puVar1 = *(undefined8 **)(lVar4 + 8);
    if (puVar1 < *(undefined8 **)(lVar4 + 0x10)) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[1] = pvStack_108;
      *puVar1 = local_110;
      puVar1[0xc] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[2] = local_100;
      puVar1[0x13] = 0;
      local_110 = (void *)0x0;
      pvStack_108 = (void *)0x0;
      puVar1[4] = local_f0;
      puVar1[3] = local_f8;
      local_100 = 0;
      local_f8 = (void *)0x0;
      puVar1[5] = uStack_e8;
      local_f0 = (void *)0x0;
      uStack_e8 = 0;
      *(undefined1 *)(puVar1 + 7) = local_d8;
      puVar1[6] = local_e0;
      *(undefined1 *)(puVar1 + 9) = local_c8;
      puVar1[8] = CONCAT44(uStack_cc,local_d0);
      puVar1[0xb] = pvStack_128;
      puVar1[10] = pvStack_130;
      local_c0 = (void *)0x0;
      pvStack_b8 = (void *)0x0;
      puVar1[0xc] = local_120;
      local_b0 = 0;
      puVar1[0x10] = uStack_90;
      puVar1[0xf] = uStack_98;
      puVar1[0xe] = local_a0;
      puVar1[0xd] = uStack_a8;
      puVar1[0x12] = local_80;
      puVar1[0x11] = local_88;
      local_88 = (void *)0x0;
      local_80 = (void *)0x0;
      puVar1[0x13] = uStack_78;
      uStack_78 = 0;
      puVar1[0x16] = local_60;
      puVar1[0x15] = uStack_68;
      puVar1[0x14] = local_70;
      *(undefined8 **)(lVar4 + 8) = puVar1 + 0x17;
    }
    else {
      uVar3 = FUN_004c0a3c(lVar4,&local_110);
      *(undefined8 *)(lVar4 + 8) = uVar3;
      if (local_88 != (void *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
    }
    if (local_c0 != (void *)0x0) {
      pvStack_b8 = local_c0;
      operator_delete(local_c0);
    }
    if (local_f8 != (void *)0x0) {
      local_f0 = local_f8;
      operator_delete(local_f8);
    }
    if (local_110 != (void *)0x0) {
      pvStack_108 = local_110;
      operator_delete(local_110);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c05c0  FUN_004c05c0 =====

void FUN_004c05c0(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_130;
  void *pvStack_128;
  undefined8 local_120;
  void *local_110;
  void *pvStack_108;
  undefined8 local_100;
  void *local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  void *local_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)((long)param_6 + 0x1a) != '\0') {
    local_d8 = 0;
    local_d0 = local_d0 & 0xffffff00;
    pvStack_108 = (void *)0x0;
    local_110 = (void *)0x0;
    local_f8 = (void *)0x0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = (void *)0x0;
    uStack_cc = 0xff000000;
    local_c8 = 0;
    pvStack_b8 = (void *)0x0;
    local_c0 = (void *)0x0;
    local_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    local_88 = (void *)0x0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 0;
    FUN_005087fc(*param_6,*(undefined2 *)(param_6 + 3),param_6[1],&local_110,1);
    local_d0 = CONCAT31(local_d0._1_3_,3);
    FUN_004c0d0c(&local_130,param_7,*(undefined4 *)((long)param_6 + 0x1c));
    if (local_c0 != (void *)0x0) {
      pvStack_b8 = local_c0;
      operator_delete(local_c0);
    }
    lVar4 = param_6[5];
    pvStack_b8 = pvStack_128;
    local_c0 = local_130;
    local_b0 = local_120;
    if (param_6[4] == lVar4) {
      local_a8 = CONCAT44(param_2 * (float)((ulong)DAT_0024e818 >> 0x20),
                          param_1 * (float)DAT_0024e818);
    }
    else {
      local_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + -8) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar4 + -0x10) >> 0x20) * param_2 +
                          (float)((ulong)*(undefined8 *)(lVar4 + -0x18) >> 0x20) * param_1,
                          (float)*(undefined8 *)(lVar4 + -8) +
                          (float)*(undefined8 *)(lVar4 + -0x10) * param_2 +
                          (float)*(undefined8 *)(lVar4 + -0x18) * param_1);
    }
    lVar4 = param_6[2];
    local_90 = CONCAT44(param_4,param_3);
    puVar1 = *(undefined8 **)(lVar4 + 8);
    if (puVar1 < *(undefined8 **)(lVar4 + 0x10)) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[1] = pvStack_108;
      *puVar1 = local_110;
      puVar1[0xc] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[2] = local_100;
      puVar1[0x13] = 0;
      local_110 = (void *)0x0;
      pvStack_108 = (void *)0x0;
      puVar1[4] = local_f0;
      puVar1[3] = local_f8;
      local_100 = 0;
      local_f8 = (void *)0x0;
      puVar1[5] = uStack_e8;
      local_f0 = (void *)0x0;
      uStack_e8 = 0;
      *(undefined1 *)(puVar1 + 7) = local_d8;
      puVar1[6] = local_e0;
      *(undefined1 *)(puVar1 + 9) = local_c8;
      puVar1[8] = CONCAT44(uStack_cc,local_d0);
      puVar1[0xb] = pvStack_128;
      puVar1[10] = local_130;
      local_c0 = (void *)0x0;
      pvStack_b8 = (void *)0x0;
      puVar1[0xc] = local_120;
      local_b0 = 0;
      puVar1[0x10] = local_90;
      puVar1[0xf] = uStack_98;
      puVar1[0xe] = uStack_a0;
      puVar1[0xd] = local_a8;
      puVar1[0x12] = local_80;
      puVar1[0x11] = local_88;
      local_88 = (void *)0x0;
      local_80 = (void *)0x0;
      puVar1[0x13] = uStack_78;
      uStack_78 = 0;
      puVar1[0x16] = local_60;
      puVar1[0x15] = uStack_68;
      puVar1[0x14] = local_70;
      *(undefined8 **)(lVar4 + 8) = puVar1 + 0x17;
    }
    else {
      uVar3 = FUN_004c0a3c(lVar4,&local_110);
      *(undefined8 *)(lVar4 + 8) = uVar3;
      if (local_88 != (void *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
    }
    if (local_c0 != (void *)0x0) {
      pvStack_b8 = local_c0;
      operator_delete(local_c0);
    }
    if (local_f8 != (void *)0x0) {
      local_f0 = local_f8;
      operator_delete(local_f8);
    }
    if (local_110 != (void *)0x0) {
      pvStack_108 = local_110;
      operator_delete(local_110);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c0828  FUN_004c0828 =====

void FUN_004c0828(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6,undefined4 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *__src;
  long lVar5;
  ulong __n;
  undefined1 auVar6 [16];
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  void *local_98;
  long lStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_6 == 0x706e6720) {
    __src = *(void **)(param_3 + 0x10);
    uVar4 = 0;
    if ((__src != (void *)0x0) &&
       (__n = (ulong)*(uint *)(param_3 + 0x18), *(uint *)(param_3 + 0x18) != 0)) {
      uStack_dc = 0xff000000;
      local_e8 = 0;
      local_d8 = 0;
      uStack_118 = 0;
      local_120 = (void *)0x0;
      local_108 = (void *)0x0;
      local_110 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_c8 = 0;
      local_d0 = (void *)0x0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      local_98 = (void *)0x0;
      uStack_a0 = 0;
      lStack_88 = 0;
      lStack_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_70 = 0;
      local_e0 = CONCAT31(local_e0._1_3_,4);
      local_98 = operator_new(__n);
      lVar1 = (long)local_98 + __n;
      lStack_88 = lVar1;
      memcpy(local_98,__src,__n);
      local_80 = CONCAT44(param_5,param_4);
      if (param_7 != (undefined4 *)0x0) {
        auVar6._0_4_ = *param_7;
        auVar6._4_4_ = -param_7[1];
        auVar6._8_4_ = param_7[2];
        auVar6._12_4_ = -param_7[3];
        auVar6 = NEON_scvtf(auVar6,4);
        local_68 = CONCAT44(auVar6._12_4_ * 0.00048828125,auVar6._8_4_ * 0.00048828125);
        uStack_78 = CONCAT44(auVar6._4_4_ * 0.00048828125,auVar6._0_4_ * 0.00048828125);
      }
      lVar5 = *(long *)(param_2 + 0x10);
      puVar2 = *(undefined8 **)(lVar5 + 8);
      lStack_90 = lVar1;
      if (puVar2 < *(undefined8 **)(lVar5 + 0x10)) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[0x10] = uStack_a0;
        puVar2[0xf] = uStack_a8;
        puVar2[6] = local_f0;
        puVar2[0xe] = local_b0;
        puVar2[0xd] = uStack_b8;
        *(undefined1 *)(puVar2 + 7) = local_e8;
        *(undefined1 *)(puVar2 + 9) = local_d8;
        puVar2[0x12] = lVar1;
        puVar2[0x11] = local_98;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[8] = CONCAT44(uStack_dc,local_e0);
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[10] = 0;
        puVar2[0x13] = lVar1;
        puVar2[0x15] = uStack_78;
        puVar2[0x14] = local_80;
        puVar2[0x16] = uStack_70;
        local_120 = (void *)0x0;
        uStack_118 = 0;
        local_110 = 0;
        local_108 = (void *)0x0;
        local_100 = 0;
        uStack_f8 = 0;
        local_d0 = (void *)0x0;
        uStack_c8 = 0;
        local_c0 = 0;
        *(undefined8 **)(lVar5 + 8) = puVar2 + 0x17;
      }
      else {
        uVar4 = FUN_004c0a3c(lVar5,&local_120);
        *(undefined8 *)(lVar5 + 8) = uVar4;
        if (local_98 != (void *)0x0) {
          operator_delete(local_98);
        }
      }
      if (local_d0 != (void *)0x0) {
        operator_delete(local_d0);
      }
      if (local_108 != (void *)0x0) {
        operator_delete(local_108);
      }
      if (local_120 != (void *)0x0) {
        operator_delete(local_120);
      }
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 004c0a3c  FUN_004c0a3c =====

undefined8 * FUN_004c0a3c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 * -0x2c8590b21642c859 + 1;
  if (uVar1 < 0x1642c8590b21643) {
    lVar8 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar8 * -0x590b21642c8590b2;
    if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
      uVar10 = uVar1;
    }
    if (0xb21642c8590b20 < (ulong)(lVar8 * -0x2c8590b21642c859)) {
      uVar10 = 0x1642c8590b21642;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x1642c8590b21642 < uVar10) goto LAB_004c0cf4;
      pvVar4 = operator_new(uVar10 * 0xb8);
    }
    uVar9 = param_2[2];
    uVar16 = param_2[1];
    uVar15 = *param_2;
    puVar6 = (undefined8 *)((long)pvVar4 + lVar5 * 8);
    uVar18 = param_2[4];
    uVar17 = param_2[3];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    pvVar4 = (void *)((long)pvVar4 + uVar10 * 0xb8);
    puVar6[2] = uVar9;
    uVar9 = param_2[5];
    uVar11 = param_2[6];
    puVar6[1] = uVar16;
    *puVar6 = uVar15;
    uVar16 = param_2[0xb];
    uVar15 = param_2[10];
    puVar6[0xc] = 0;
    puVar6[5] = uVar9;
    puVar6[6] = uVar11;
    uVar3 = *(undefined1 *)(param_2 + 7);
    uVar11 = param_2[0x16];
    puVar6[0xb] = uVar16;
    puVar6[10] = uVar15;
    uVar16 = param_2[0x10];
    uVar15 = param_2[0xf];
    *(undefined1 *)(puVar6 + 7) = uVar3;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined1 *)(puVar6 + 9) = *(undefined1 *)(param_2 + 9);
    param_2[10] = 0;
    param_2[0xb] = 0;
    puVar6[8] = param_2[8];
    uVar9 = param_2[0xc];
    param_2[0xc] = 0;
    puVar6[0xc] = uVar9;
    uVar9 = param_2[0x13];
    puVar6[0x10] = uVar16;
    puVar6[0xf] = uVar15;
    uVar16 = param_2[0x12];
    uVar15 = param_2[0x11];
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    puVar6[4] = uVar18;
    puVar6[3] = uVar17;
    uVar18 = param_2[0xe];
    uVar17 = param_2[0xd];
    puVar6[0x13] = 0;
    puVar6[0x13] = uVar9;
    puVar14 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    puVar6[0xe] = uVar18;
    puVar6[0xd] = uVar17;
    uVar17 = param_2[0x15];
    uVar9 = param_2[0x14];
    puVar2 = puVar6 + 0x17;
    puVar6[0x12] = uVar16;
    puVar6[0x11] = uVar15;
    puVar6[0x16] = uVar11;
    puVar6[0x15] = uVar17;
    puVar6[0x14] = uVar9;
    if (puVar13 == puVar14) {
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar4;
    }
    else {
      do {
        puVar6[-0x16] = 0;
        puVar6[-0x15] = 0;
        puVar12 = puVar13 + -0x17;
        uVar9 = *puVar12;
        puVar7 = puVar6 + -0x17;
        puVar6[-0x16] = puVar13[-0x16];
        *puVar7 = uVar9;
        puVar6[-0x15] = puVar13[-0x15];
        *puVar12 = 0;
        puVar13[-0x16] = 0;
        puVar13[-0x15] = 0;
        puVar6[-0x13] = 0;
        puVar6[-0x12] = 0;
        uVar9 = puVar13[-0x14];
        puVar6[-0x13] = puVar13[-0x13];
        puVar6[-0x14] = uVar9;
        puVar6[-0x12] = puVar13[-0x12];
        uVar9 = puVar13[-0x11];
        puVar13[-0x14] = 0;
        puVar13[-0x13] = 0;
        puVar13[-0x12] = 0;
        *(undefined1 *)(puVar6 + -0x10) = *(undefined1 *)(puVar13 + -0x10);
        puVar6[-0x11] = uVar9;
        uVar9 = puVar13[-0xf];
        uVar3 = *(undefined1 *)(puVar13 + -0xe);
        puVar6[-0xc] = 0;
        puVar6[-0xb] = 0;
        *(undefined1 *)(puVar6 + -0xe) = uVar3;
        puVar6[-0xf] = uVar9;
        uVar9 = puVar13[-0xd];
        puVar6[-0xc] = puVar13[-0xc];
        puVar6[-0xd] = uVar9;
        puVar6[-0xb] = puVar13[-0xb];
        uVar11 = puVar13[-9];
        uVar9 = puVar13[-10];
        uVar16 = puVar13[-7];
        uVar15 = puVar13[-8];
        puVar13[-0xd] = 0;
        puVar13[-0xc] = 0;
        puVar13[-0xb] = 0;
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        puVar6[-7] = uVar16;
        puVar6[-8] = uVar15;
        puVar6[-9] = uVar11;
        puVar6[-10] = uVar9;
        uVar9 = puVar13[-6];
        puVar6[-5] = puVar13[-5];
        puVar6[-6] = uVar9;
        puVar6[-4] = puVar13[-4];
        uVar11 = puVar13[-2];
        uVar9 = puVar13[-3];
        puVar13[-6] = 0;
        puVar13[-5] = 0;
        puVar13[-4] = 0;
        puVar6[-1] = puVar13[-1];
        puVar6[-2] = uVar11;
        puVar6[-3] = uVar9;
        puVar6 = puVar7;
        puVar13 = puVar12;
      } while (puVar12 != puVar14);
      puVar13 = (undefined8 *)*param_1;
      puVar14 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar4;
      for (; puVar14 != puVar13; puVar14 = puVar14 + -0x17) {
        pvVar4 = (void *)puVar14[-6];
        if (pvVar4 != (void *)0x0) {
          puVar14[-5] = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = (void *)puVar14[-0xd];
        if (pvVar4 != (void *)0x0) {
          puVar14[-0xc] = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = (void *)puVar14[-0x14];
        if (pvVar4 != (void *)0x0) {
          puVar14[-0x13] = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = (void *)puVar14[-0x17];
        if (pvVar4 != (void *)0x0) {
          puVar14[-0x16] = pvVar4;
          operator_delete(pvVar4);
        }
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      operator_delete(puVar13);
    }
    return puVar2;
  }
  FUN_004c0cf8();
LAB_004c0cf4:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 004c0cf8  FUN_004c0cf8 =====

void FUN_004c0cf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004c0d0c  FUN_004c0d0c =====

void FUN_004c0d0c(ulong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *__s;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  uint local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_7c = 0;
  (*(code *)param_2[1])(param_2,*param_2,0,&local_7c,0,param_2[2]);
  uVar8 = (ulong)local_7c;
  if (local_7c == 0) {
    puVar16 = (undefined4 *)0x0;
    __s = (undefined4 *)0x0;
  }
  else {
    __s = (undefined4 *)operator_new(uVar8 * 0xc);
    uVar8 = (uVar8 * 0xc - 0xc) / 0xc;
    memset(__s,0,uVar8 * 0xc + 0xc);
    puVar16 = __s + uVar8 * 3 + 3;
  }
  (*(code *)param_2[1])(param_2,*param_2,0,&local_7c,__s,param_2[2]);
  uVar8 = (ulong)local_7c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar5 = __s;
  if (local_7c == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)operator_new(uVar8 * 8);
    *param_1 = (ulong)puVar6;
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)(puVar6 + uVar8);
  }
  do {
    if (puVar5 == puVar16) {
      if (__s != (undefined4 *)0x0) {
        operator_delete(__s);
      }
      if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar2 = param_3;
    if (puVar5[1] == 0) {
      uVar2 = (puVar5[2] & 0xff00ff00) >> 8 | (puVar5[2] & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    }
    uVar20 = *puVar5;
    if (puVar6 < (undefined8 *)param_1[2]) {
      *(undefined4 *)puVar6 = uVar20;
      *(uint *)((long)puVar6 + 4) = uVar2;
      puVar6 = puVar6 + 1;
    }
    else {
      puVar15 = (undefined8 *)*param_1;
      lVar14 = (long)puVar6 - (long)puVar15;
      uVar8 = (lVar14 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
        FUN_004c0ff8();
LAB_004c0ff0:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      uVar9 = (long)param_1[2] - (long)puVar15;
      uVar10 = (long)uVar9 >> 2;
      if (uVar10 <= uVar8) {
        uVar10 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) goto LAB_004c0ff0;
        pvVar7 = operator_new(uVar10 << 3);
      }
      puVar1 = (undefined8 *)((long)pvVar7 + (lVar14 >> 3) * 8);
      *(undefined4 *)puVar1 = uVar20;
      *(uint *)((long)puVar1 + 4) = uVar2;
      puVar11 = puVar1;
      puVar13 = puVar6;
      if ((long)puVar6 - (long)puVar15 != 0) {
        uVar8 = ((long)puVar6 - (long)puVar15) - 8;
        if ((((0x147 < uVar8) &&
             (uVar9 = (long)pvVar7 + lVar14 + -8, uVar9 - (uVar8 & 0xfffffffffffffff8) <= uVar9)) &&
            ((undefined8 *)((long)(puVar6 + -1) - (uVar8 & 0xfffffffffffffff8)) <= puVar6 + -1)) &&
           (0x1f < (ulong)((long)puVar6 + (-lVar14 - (long)pvVar7)))) {
          puVar11 = puVar1 + -2;
          puVar13 = puVar6 + -2;
          uVar8 = (uVar8 >> 3) + 1;
          uVar12 = uVar8 & 0x3ffffffffffffffc;
          puVar6 = puVar6 + -uVar12;
          uVar9 = uVar12;
          do {
            puVar4 = puVar13 + -1;
            uVar19 = puVar13[-2];
            uVar18 = puVar13[1];
            uVar17 = *puVar13;
            uVar9 = uVar9 - 4;
            puVar13 = puVar13 + -4;
            puVar11[-1] = *puVar4;
            puVar11[-2] = uVar19;
            puVar11[1] = uVar18;
            *puVar11 = uVar17;
            puVar11 = puVar11 + -4;
          } while (uVar9 != 0);
          puVar11 = puVar1 + -uVar12;
          puVar13 = puVar15;
          if (uVar8 == uVar12) goto LAB_004c0f04;
        }
        do {
          puVar6 = puVar6 + -1;
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar6;
        } while (puVar6 != puVar15);
        puVar13 = (undefined8 *)*param_1;
      }
LAB_004c0f04:
      puVar6 = puVar1 + 1;
      *param_1 = (ulong)puVar11;
      param_1[1] = (ulong)puVar6;
      param_1[2] = (ulong)((long)pvVar7 + uVar10 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        operator_delete(puVar13);
      }
    }
    param_1[1] = (ulong)puVar6;
    puVar5 = puVar5 + 3;
  } while( true );
}


// ===== 004c0ff8  FUN_004c0ff8 =====

void FUN_004c0ff8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004c100c  FUN_004c100c =====

void FUN_004c100c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004c1020  FUN_004c1020 =====

void FUN_004c1020(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 004c117c  FUN_004c117c =====

void FUN_004c117c(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 004c12d8  HBFont::~HBFont =====

/* HBFont::~HBFont() */

void __thiscall HBFont::~HBFont(HBFont *this)

{
  ~HBFont(this);
  operator_delete(this);
  return;
}


// ===== 004c12fc  HBFont::getAxisCount =====

/* HBFont::getAxisCount() const */

uint __thiscall HBFont::getAxisCount(HBFont *this)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(this + 0x18) + 0x20);
  puVar3 = *(undefined4 **)(lVar4 + 200);
  while ((puVar3 == (undefined4 *)0x0 && (puVar3 = &DAT_0025d4b0, *(long *)(lVar4 + 0x60) != 0))) {
    puVar3 = (undefined4 *)FUN_0050cbe0();
    if (puVar3 == (undefined4 *)0x0) {
      lVar2 = FUN_003410d0(0,&DAT_0025d4b0,lVar4 + 200);
      puVar3 = &DAT_0025d4b0;
      if (lVar2 == 0) break;
    }
    else {
      lVar2 = FUN_003410d0(0,puVar3,lVar4 + 200);
      if (lVar2 == 0) break;
      if (puVar3 != &DAT_0025d4b0) {
        rive_hb_blob_destroy(puVar3);
      }
    }
    puVar3 = *(undefined4 **)(lVar4 + 200);
  }
  puVar1 = &DAT_0025d4b0;
  if (0xf < (uint)puVar3[6]) {
    puVar1 = *(undefined4 **)(puVar3 + 4);
  }
  return (uint)(*(ushort *)(puVar1 + 2) >> 8) | (*(ushort *)(puVar1 + 2) & 0xff00ff) << 8;
}


// ===== 004c13c8  HBFont::getAxis =====

/* HBFont::getAxis(unsigned short) const */

undefined1  [16] __thiscall HBFont::getAxis(HBFont *this,ushort param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  lVar10 = *(long *)(*(long *)(this + 0x18) + 0x20);
  puVar9 = *(undefined4 **)(lVar10 + 200);
  while ((puVar9 == (undefined4 *)0x0 && (puVar9 = &DAT_0025d4b0, *(long *)(lVar10 + 0x60) != 0))) {
    puVar9 = (undefined4 *)FUN_0050cbe0();
    if (puVar9 == (undefined4 *)0x0) {
      lVar6 = FUN_003410d0(0,&DAT_0025d4b0,lVar10 + 200);
      puVar9 = &DAT_0025d4b0;
      if (lVar6 == 0) break;
    }
    else {
      lVar6 = FUN_003410d0(0,puVar9,lVar10 + 200);
      if (lVar6 == 0) break;
      if (puVar9 != &DAT_0025d4b0) {
        rive_hb_blob_destroy(puVar9);
      }
    }
    puVar9 = *(undefined4 **)(lVar10 + 200);
  }
  puVar1 = &DAT_0025d4b0;
  if (0xf < (uint)puVar9[6]) {
    puVar1 = *(undefined4 **)(puVar9 + 4);
  }
  if ((uint)param_1 <
      ((uint)(*(ushort *)(puVar1 + 2) >> 8) | (*(ushort *)(puVar1 + 2) & 0xff00ff) << 8)) {
    uVar4 = (uint)(*(ushort *)(puVar1 + 1) >> 8) | (*(ushort *)(puVar1 + 1) & 0xff00ff) << 8;
    puVar9 = &DAT_0025d4b0;
    if (uVar4 != 0) {
      puVar9 = (undefined4 *)((long)puVar1 + (ulong)uVar4);
    }
    puVar8 = puVar9 + (ulong)param_1 * 5;
    uVar4 = (puVar8[2] & 0xff00ff00) >> 8 | (puVar8[2] & 0xff00ff) << 8;
    uVar2 = (puVar8[1] & 0xff00ff00) >> 8 | (puVar8[1] & 0xff00ff) << 8;
    uVar3 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
    fVar11 = (float)(int)(uVar4 >> 0x10 | uVar4 << 0x10) / 65536.0;
    fVar12 = (float)(int)(uVar2 >> 0x10 | uVar2 << 0x10) / 65536.0;
    uVar4 = (puVar8[3] & 0xff00ff00) >> 8 | (puVar8[3] & 0xff00ff) << 8;
    fVar14 = (float)(int)(uVar4 >> 0x10 | uVar4 << 0x10) / 65536.0;
    fVar13 = fVar11;
    if (fVar12 < fVar11) {
      fVar13 = fVar12;
    }
    fVar12 = fVar11;
    if (fVar11 < fVar14 != (NAN(fVar11) || NAN(fVar14))) {
      fVar12 = fVar14;
    }
    uVar5 = CONCAT44(fVar13,uVar3 >> 0x10 | uVar3 << 0x10);
    uVar7 = CONCAT44(fVar12,fVar11);
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
  }
  auVar15._8_8_ = uVar7;
  auVar15._0_8_ = uVar5;
  return auVar15;
}


// ===== 004c1520  HBFont::getAxisValue =====

/* HBFont::getAxisValue(unsigned int) const */

float __thiscall HBFont::getAxisValue(HBFont *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  uint unaff_w25;
  undefined2 uVar15;
  undefined8 uVar16;
  float unaff_s8;
  
  uVar14 = (ulong)param_1;
  uVar7 = *(ulong *)(this + 0x78);
  if (uVar7 != 0) {
    uVar16 = NEON_cnt(uVar7,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = (ulong)((int)uVar7 - 1U & param_1);
    }
    else {
      uVar9 = uVar14;
      if (uVar7 <= uVar14) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar14 / uVar7;
        }
        uVar9 = uVar14 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(this + 0x70) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar14) {
          if (*(uint *)(plVar10 + 2) == param_1) {
            return *(float *)((long)plVar10 + 0x14);
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar7 - 1;
          }
          else if (uVar7 <= uVar11) {
            uVar5 = 0;
            if (uVar7 != 0) {
              uVar5 = uVar11 / uVar7;
            }
            uVar11 = uVar11 - uVar5 * uVar7;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  lVar13 = *(long *)(*(long *)(this + 0x18) + 0x20);
  puVar12 = *(undefined4 **)(lVar13 + 200);
  while ((puVar12 == (undefined4 *)0x0 && (puVar12 = &DAT_0025d4b0, *(long *)(lVar13 + 0x60) != 0)))
  {
    puVar12 = (undefined4 *)FUN_0050cbe0();
    if (puVar12 == (undefined4 *)0x0) {
      lVar6 = FUN_003410d0(0,&DAT_0025d4b0,lVar13 + 200);
      puVar12 = &DAT_0025d4b0;
      if (lVar6 == 0) break;
    }
    else {
      lVar6 = FUN_003410d0(0,puVar12,lVar13 + 200);
      if (lVar6 == 0) break;
      if (puVar12 != &DAT_0025d4b0) {
        rive_hb_blob_destroy(puVar12);
      }
    }
    puVar12 = *(undefined4 **)(lVar13 + 200);
  }
  puVar1 = &DAT_0025d4b0;
  if (0xf < (uint)puVar12[6]) {
    puVar1 = *(undefined4 **)(puVar12 + 4);
  }
  uVar3 = (uint)(*(ushort *)(puVar1 + 2) >> 8) | (*(ushort *)(puVar1 + 2) & 0xff00ff) << 8;
  if (uVar3 == 0) {
    return 0.0;
  }
  uVar14 = 0;
LAB_004c1628:
  do {
    puVar12 = *(undefined4 **)(lVar13 + 200);
    if ((*(undefined4 **)(lVar13 + 200) == (undefined4 *)0x0) &&
       (puVar12 = &DAT_0025d4b0, *(long *)(lVar13 + 0x60) != 0)) {
      puVar12 = (undefined4 *)FUN_0050cbe0(0);
      if (puVar12 == (undefined4 *)0x0) {
        lVar6 = FUN_003410d0(0,&DAT_0025d4b0,lVar13 + 200);
        puVar12 = &DAT_0025d4b0;
        if (lVar6 != 0) goto LAB_004c1628;
      }
      else {
        lVar6 = FUN_003410d0(0,puVar12,lVar13 + 200);
        if (lVar6 != 0) {
          if (puVar12 != &DAT_0025d4b0) {
            rive_hb_blob_destroy(puVar12);
          }
          goto LAB_004c1628;
        }
      }
    }
    puVar1 = &DAT_0025d4b0;
    if (0xf < (uint)puVar12[6]) {
      puVar1 = *(undefined4 **)(puVar12 + 4);
    }
    if ((uint)uVar14 <
        ((uint)(*(ushort *)(puVar1 + 2) >> 8) | (*(ushort *)(puVar1 + 2) & 0xff00ff) << 8)) {
      uVar4 = (uint)(*(ushort *)(puVar1 + 1) >> 8) | (*(ushort *)(puVar1 + 1) & 0xff00ff) << 8;
      puVar12 = &DAT_0025d4b0;
      if (uVar4 != 0) {
        puVar12 = (undefined4 *)((long)puVar1 + (ulong)uVar4);
      }
      uVar4 = (puVar12 + uVar14 * 5)[2];
      uVar2 = puVar12[uVar14 * 5];
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      unaff_w25 = uVar2 >> 0x10 | uVar2 << 0x10;
      unaff_s8 = (float)(int)(uVar4 >> 0x10 | uVar4 << 0x10) / 65536.0;
    }
    if (unaff_w25 == param_1) {
      return unaff_s8;
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == uVar3) {
      return 0.0;
    }
  } while( true );
}


// ===== 004c17d8  HBFont::getWeight =====

/* HBFont::getWeight() const */

int __thiscall HBFont::getWeight(HBFont *this)

{
  float fVar1;
  
  fVar1 = (float)rive_hb_style_get_value(*(undefined8 *)(this + 0x18),0x77676874);
  return (int)fVar1;
}


// ===== 004c17fc  HBFont::isItalic =====

/* HBFont::isItalic() const */

bool __thiscall HBFont::isItalic(HBFont *this)

{
  float fVar1;
  
  fVar1 = (float)rive_hb_style_get_value(*(undefined8 *)(this + 0x18),0x6974616c);
  return fVar1 != 0.0;
}


// ===== 004c1824  HBFont::features =====

/* HBFont::features() const */

void HBFont::features(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  void *pvVar3;
  undefined8 *in_x8;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_48 = 0;
  local_50 = (undefined8 *)0x0;
  local_40 = 0x3f800000;
  uVar7 = *(undefined8 *)(*(long *)(in_x0 + 0x18) + 0x20);
  FUN_004c5ad4(uVar7,0x47535542,&local_60);
  FUN_004c5ad4(uVar7,0x47504f53,&local_60);
  lVar2 = local_48;
  pvVar3 = (void *)0x0;
  *in_x8 = 0;
  in_x8[1] = 0;
  if (local_48 - 1U < 0x3fffffffffffffff) {
    pvVar3 = malloc(local_48 << 2);
    *in_x8 = pvVar3;
    if (pvVar3 != (void *)0x0) {
      in_x8[1] = lVar2;
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    puVar5 = local_50;
    uVar6 = 0;
    do {
      puVar4 = puVar5 + 2;
      puVar5 = (undefined8 *)*puVar5;
      *(undefined4 *)((long)pvVar3 + (ulong)uVar6 * 4) = *(undefined4 *)puVar4;
      puVar4 = local_50;
      uVar6 = uVar6 + 1;
    } while (puVar5 != (undefined8 *)0x0);
    do {
      pvVar3 = (void *)*puVar4;
      operator_delete(puVar4);
      puVar4 = (undefined8 *)pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  pvVar3 = local_60;
  local_60 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c192c  HBFont::hasGlyph =====

/* HBFont::hasGlyph(unsigned int) const */

void __thiscall HBFont::hasGlyph(HBFont *this,uint param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x18);
  local_2c = 0;
  lVar5 = *(long *)(*(long *)(lVar3 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
  }
  iVar2 = (**(code **)(*(long *)(lVar3 + 0x90) + 0x30))
                    (lVar3,*(undefined8 *)(lVar3 + 0x98),param_1,&local_2c,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}


// ===== 004c19a4  HBFont::getFeatureValue =====

/* HBFont::getFeatureValue(unsigned int) const */

undefined4 __thiscall HBFont::getFeatureValue(HBFont *this,uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar2 = *(ulong *)(this + 0x50);
  if (uVar2 != 0) {
    uVar3 = (ulong)param_1;
    uVar8 = NEON_cnt(uVar2,1);
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    if ((uVar9 & 0xffffffff) < 2) {
      uVar4 = (ulong)((int)uVar2 - 1U & param_1);
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*(long *)(this + 0x48) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar6 = plVar5[1];
        if (uVar6 == uVar3) {
          if (*(uint *)(plVar5 + 2) == param_1) {
            return *(undefined4 *)((long)plVar5 + 0x14);
          }
        }
        else {
          if ((uVar9 & 0xffffffff) < 2) {
            uVar6 = uVar6 & uVar2 - 1;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return 0xffffffff;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return 0xffffffff;
}


// ===== 004c1a5c  HBFont::withOptions =====

/* HBFont::withOptions(rive::Span<rive::Font::Coord const>, rive::Span<rive::Font::Feature const>)
   const */

void HBFont::withOptions(undefined8 *param_1,long param_2,long param_3,long param_4,ulong *param_5,
                        long param_6)

{
  uint *puVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  HBFont *pHVar8;
  ulong uVar9;
  void **ppvVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long **pplVar14;
  void **ppvVar15;
  long **pplVar16;
  void **ppvVar17;
  long **pplVar18;
  undefined4 *puVar19;
  void *pvVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  long *plVar23;
  undefined4 *puVar24;
  void **ppvVar25;
  long **pplVar26;
  long lVar27;
  long **unaff_x28;
  long lVar28;
  undefined2 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint uVar33;
  void *local_1c8;
  void *local_1c0;
  void *local_1b8;
  void *local_1b0 [2];
  undefined8 *local_1a0;
  void *local_188 [2];
  undefined8 *local_178;
  void *local_160;
  long **local_158;
  long *local_150;
  ulong local_148;
  float local_140;
  void *local_138;
  void **local_130;
  long *local_128;
  ulong local_120;
  float local_118;
  undefined1 auStack_110 [128];
  undefined1 *local_90;
  ulong local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  ppvVar10 = &local_138;
  FUN_004bf788(&local_138,param_2 + 0x70);
  if (param_4 != 0) {
    lVar27 = 0;
    unaff_x28 = &local_128;
    ppvVar17 = local_130;
    do {
      puVar1 = (uint *)(param_3 + lVar27 * 8);
      uVar33 = puVar1[1];
      uVar4 = *puVar1;
      ppvVar25 = (void **)(ulong)uVar4;
      if (ppvVar17 != (void **)0x0) {
        uVar31 = NEON_cnt(ppvVar17,1);
        uVar29 = NEON_uaddlv(uVar31,1);
        uVar9 = CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar29) & 0xffffffff;
        if (uVar9 < 2) {
          ppvVar10 = (void **)(ulong)((int)ppvVar17 - 1U & uVar4);
        }
        else {
          ppvVar10 = ppvVar25;
          if (ppvVar17 <= ppvVar25) {
            uVar12 = 0;
            if (ppvVar17 != (void **)0x0) {
              uVar12 = (ulong)ppvVar25 / (ulong)ppvVar17;
            }
            ppvVar10 = (void **)((long)ppvVar25 - uVar12 * (long)ppvVar17);
          }
        }
        puVar13 = *(undefined8 **)((long)local_138 + (long)ppvVar10 * 8);
        if ((puVar13 != (undefined8 *)0x0) && (plVar23 = (long *)*puVar13, plVar23 != (long *)0x0))
        {
          do {
            ppvVar15 = (void **)plVar23[1];
            if (ppvVar15 == ppvVar25) {
              if (*(uint *)(plVar23 + 2) == uVar4) goto LAB_004c1d30;
            }
            else {
              if (uVar9 < 2) {
                ppvVar15 = (void **)((ulong)ppvVar15 & (long)ppvVar17 - 1U);
              }
              else if (ppvVar17 <= ppvVar15) {
                uVar12 = 0;
                if (ppvVar17 != (void **)0x0) {
                  uVar12 = (ulong)ppvVar15 / (ulong)ppvVar17;
                }
                ppvVar15 = (void **)((long)ppvVar15 - uVar12 * (long)ppvVar17);
              }
              if (ppvVar15 != ppvVar10) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
      plVar23 = (long *)operator_new(0x18);
      *plVar23 = 0;
      plVar23[1] = (long)ppvVar25;
      *(uint *)(plVar23 + 2) = uVar4;
      *(undefined4 *)((long)plVar23 + 0x14) = 0;
      if ((ppvVar17 == (void **)0x0) || (local_118 * (float)ppvVar17 < (float)(local_120 + 1))) {
        if (ppvVar17 < (void **)0x3) {
          uVar9 = 1;
        }
        else {
          uVar9 = (ulong)(((ulong)ppvVar17 & (long)ppvVar17 - 1U) != 0);
        }
        ppvVar10 = (void **)(uVar9 | (long)ppvVar17 << 1);
        ppvVar15 = (void **)(long)((float)(local_120 + 1) / local_118);
        if (ppvVar10 <= ppvVar15) {
          ppvVar10 = ppvVar15;
        }
        if ((long)ppvVar10 - 1U == 0) {
          ppvVar10 = (void **)0x2;
        }
        else if (((ulong)ppvVar10 & (long)ppvVar10 - 1U) != 0) {
          ppvVar10 = (void **)std::__ndk1::__next_prime((ulong)ppvVar10);
          ppvVar17 = local_130;
        }
        if (ppvVar17 < ppvVar10) {
LAB_004c1c0c:
          FUN_004c1020(&local_138);
        }
        else if (ppvVar10 < ppvVar17) {
          ppvVar15 = (void **)(long)((float)local_120 / local_118);
          if (ppvVar17 < (void **)0x3) {
LAB_004c1c70:
            ppvVar15 = (void **)std::__ndk1::__next_prime((ulong)ppvVar15);
          }
          else {
            uVar31 = NEON_cnt(ppvVar17,1);
            uVar29 = NEON_uaddlv(uVar31,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar29)) goto LAB_004c1c70;
            if ((void **)0x1 < ppvVar15) {
              ppvVar15 = (void **)(1L << (-LZCOUNT((long)ppvVar15 + -1) & 0x3fU));
            }
          }
          if (ppvVar10 <= ppvVar15) {
            ppvVar10 = ppvVar15;
          }
          if (ppvVar10 < ppvVar17) goto LAB_004c1c0c;
        }
        ppvVar17 = local_130;
        if (((ulong)local_130 & (long)local_130 - 1U) == 0) {
          ppvVar10 = (void **)(ulong)((int)local_130 - 1U & uVar4);
        }
        else {
          ppvVar10 = ppvVar25;
          if (local_130 <= ppvVar25) {
            uVar9 = 0;
            if (local_130 != (void **)0x0) {
              uVar9 = (ulong)ppvVar25 / (ulong)local_130;
            }
            ppvVar10 = (void **)((long)ppvVar25 - uVar9 * (long)local_130);
          }
        }
      }
      plVar11 = *(long **)((long)local_138 + (long)ppvVar10 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar23 = (long)local_128;
        *(long ***)((long)local_138 + (long)ppvVar10 * 8) = unaff_x28;
        local_128 = plVar23;
        if (*plVar23 != 0) {
          ppvVar25 = *(void ***)(*plVar23 + 8);
          if (((ulong)ppvVar17 & (long)ppvVar17 - 1U) == 0) {
            ppvVar25 = (void **)((ulong)ppvVar25 & (long)ppvVar17 - 1U);
          }
          else if (ppvVar17 <= ppvVar25) {
            uVar9 = 0;
            if (ppvVar17 != (void **)0x0) {
              uVar9 = (ulong)ppvVar25 / (ulong)ppvVar17;
            }
            ppvVar25 = (void **)((long)ppvVar25 - uVar9 * (long)ppvVar17);
          }
          plVar11 = (long *)((long)local_138 + (long)ppvVar25 * 8);
          goto LAB_004c1d20;
        }
      }
      else {
        *plVar23 = *plVar11;
LAB_004c1d20:
        *plVar11 = (long)plVar23;
      }
      local_120 = local_120 + 1;
LAB_004c1d30:
      lVar27 = lVar27 + 1;
      *(uint *)((long)plVar23 + 0x14) = uVar33;
    } while (lVar27 != param_4);
  }
  local_90 = auStack_110;
  local_88 = local_120;
  if (0x10 < local_120) {
    uVar9 = local_120 << 3;
    if (local_120 >> 0x3d != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    local_90 = (undefined1 *)operator_new__(uVar9);
  }
  if (local_128 != (long *)0x0) {
    lVar27 = 0;
    plVar23 = local_128;
    do {
      uVar30 = *(undefined4 *)((long)plVar23 + 0x14);
      puVar22 = (undefined4 *)(local_90 + lVar27);
      lVar27 = lVar27 + 8;
      *puVar22 = (int)plVar23[2];
      puVar22[1] = uVar30;
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  uVar31 = rive_hb_font_create_sub_font(*(undefined8 *)(param_2 + 0x18));
  rive_hb_font_set_variations(uVar31,local_90,local_88 & 0xffffffff);
  FUN_004bf400(&local_160,param_2 + 0x48);
  if (param_6 != 0) {
    puVar2 = param_5 + param_6;
    pplVar18 = local_158;
    do {
      uVar9 = *param_5;
      pplVar26 = (long **)(uVar9 & 0xffffffff);
      if (pplVar18 != (long **)0x0) {
        uVar32 = NEON_cnt(pplVar18,1);
        uVar29 = NEON_uaddlv(uVar32,1);
        uVar12 = CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar29) & 0xffffffff;
        if (uVar12 < 2) {
          unaff_x28 = (long **)((ulong)((int)pplVar18 - 1) & (ulong)pplVar26);
        }
        else {
          unaff_x28 = pplVar26;
          if (pplVar18 <= pplVar26) {
            uVar5 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar5 = (ulong)pplVar26 / (ulong)pplVar18;
            }
            unaff_x28 = (long **)((long)pplVar26 - uVar5 * (long)pplVar18);
          }
        }
        puVar13 = *(undefined8 **)((long)local_160 + (long)unaff_x28 * 8);
        if ((puVar13 != (undefined8 *)0x0) && (plVar23 = (long *)*puVar13, plVar23 != (long *)0x0))
        {
          do {
            pplVar16 = (long **)plVar23[1];
            if (pplVar16 == pplVar26) {
              if ((int)plVar23[2] == (int)uVar9) goto LAB_004c2040;
            }
            else {
              if (uVar12 < 2) {
                pplVar16 = (long **)((ulong)pplVar16 & (long)pplVar18 - 1U);
              }
              else if (pplVar18 <= pplVar16) {
                uVar5 = 0;
                if (pplVar18 != (long **)0x0) {
                  uVar5 = (ulong)pplVar16 / (ulong)pplVar18;
                }
                pplVar16 = (long **)((long)pplVar16 - uVar5 * (long)pplVar18);
              }
              if (pplVar16 != unaff_x28) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
      plVar23 = (long *)operator_new(0x18);
      *plVar23 = 0;
      plVar23[1] = (long)pplVar26;
      *(int *)(plVar23 + 2) = (int)uVar9;
      *(undefined4 *)((long)plVar23 + 0x14) = 0;
      if ((pplVar18 == (long **)0x0) || (local_140 * (float)pplVar18 < (float)(local_148 + 1))) {
        if (pplVar18 < (long **)0x3) {
          uVar12 = 1;
        }
        else {
          uVar12 = (ulong)(((ulong)pplVar18 & (long)pplVar18 - 1U) != 0);
        }
        pplVar16 = (long **)(uVar12 | (long)pplVar18 << 1);
        pplVar14 = (long **)(long)((float)(local_148 + 1) / local_140);
        if (pplVar16 <= pplVar14) {
          pplVar16 = pplVar14;
        }
        if ((long)pplVar16 - 1U == 0) {
          pplVar16 = (long **)0x2;
        }
        else if (((ulong)pplVar16 & (long)pplVar16 - 1U) != 0) {
          pplVar16 = (long **)std::__ndk1::__next_prime((ulong)pplVar16);
          pplVar18 = local_158;
        }
        if (pplVar18 < pplVar16) {
LAB_004c1f20:
          FUN_004c117c(&local_160);
        }
        else if (pplVar16 < pplVar18) {
          pplVar14 = (long **)(long)((float)local_148 / local_140);
          if (pplVar18 < (long **)0x3) {
LAB_004c1f80:
            pplVar14 = (long **)std::__ndk1::__next_prime((ulong)pplVar14);
          }
          else {
            uVar32 = NEON_cnt(pplVar18,1);
            uVar29 = NEON_uaddlv(uVar32,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar29)) goto LAB_004c1f80;
            if ((long **)0x1 < pplVar14) {
              pplVar14 = (long **)(1L << (-LZCOUNT((long)pplVar14 + -1) & 0x3fU));
            }
          }
          if (pplVar16 <= pplVar14) {
            pplVar16 = pplVar14;
          }
          if (pplVar16 < pplVar18) goto LAB_004c1f20;
        }
        pplVar18 = local_158;
        if (((ulong)local_158 & (long)local_158 - 1U) == 0) {
          unaff_x28 = (long **)((ulong)((int)local_158 - 1) & (ulong)pplVar26);
        }
        else {
          unaff_x28 = pplVar26;
          if (local_158 <= pplVar26) {
            uVar12 = 0;
            if (local_158 != (long **)0x0) {
              uVar12 = (ulong)pplVar26 / (ulong)local_158;
            }
            unaff_x28 = (long **)((long)pplVar26 - uVar12 * (long)local_158);
          }
        }
      }
      plVar11 = *(long **)((long)local_160 + (long)unaff_x28 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar23 = (long)local_150;
        *(long ***)((long)local_160 + (long)unaff_x28 * 8) = &local_150;
        local_150 = plVar23;
        if (*plVar23 != 0) {
          pplVar26 = *(long ***)(*plVar23 + 8);
          if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
            pplVar26 = (long **)((ulong)pplVar26 & (long)pplVar18 - 1U);
          }
          else if (pplVar18 <= pplVar26) {
            uVar12 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar12 = (ulong)pplVar26 / (ulong)pplVar18;
            }
            pplVar26 = (long **)((long)pplVar26 - uVar12 * (long)pplVar18);
          }
          plVar11 = (long *)((long)local_160 + (long)pplVar26 * 8);
          goto LAB_004c2030;
        }
      }
      else {
        *plVar23 = *plVar11;
LAB_004c2030:
        *plVar11 = (long)plVar23;
      }
      local_148 = local_148 + 1;
LAB_004c2040:
      param_5 = param_5 + 1;
      *(int *)((long)plVar23 + 0x14) = (int)(uVar9 >> 0x20);
    } while (param_5 != puVar2);
  }
  if (local_150 == (long *)0x0) {
    puVar19 = (undefined4 *)0x0;
    puVar22 = (undefined4 *)0x0;
  }
  else {
    puVar24 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)0x0;
    puVar21 = (undefined4 *)0x0;
    plVar23 = local_150;
    do {
      lVar27 = plVar23[2];
      uVar30 = *(undefined4 *)((long)plVar23 + 0x14);
      if (puVar19 < puVar24) {
        *puVar19 = (int)lVar27;
        puVar19[1] = uVar30;
        *(undefined8 *)(puVar19 + 2) = 0xffffffff00000000;
        puVar22 = puVar21;
        puVar3 = puVar19;
      }
      else {
        lVar28 = (long)puVar19 - (long)puVar21 >> 4;
        uVar9 = lVar28 + 1;
        if (uVar9 >> 0x3c != 0) goto LAB_004c22c8;
        uVar12 = (long)puVar24 - (long)puVar21 >> 3;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar24 - (long)puVar21)) {
          uVar12 = 0xfffffffffffffff;
        }
        if (uVar12 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar12 >> 0x3c != 0) goto LAB_004c22cc;
          pvVar7 = operator_new(uVar12 << 4);
        }
        puVar3 = (undefined4 *)((long)pvVar7 + lVar28 * 0x10);
        *puVar3 = (int)lVar27;
        puVar3[1] = uVar30;
        *(undefined8 *)(puVar3 + 2) = 0xffffffff00000000;
        puVar22 = puVar3;
        for (; puVar19 != puVar21; puVar19 = puVar19 + -4) {
          uVar32 = *(undefined8 *)(puVar19 + -4);
          *(undefined8 *)(puVar22 + -2) = *(undefined8 *)(puVar19 + -2);
          *(undefined8 *)(puVar22 + -4) = uVar32;
          puVar22 = puVar22 + -4;
        }
        puVar24 = (undefined4 *)((long)pvVar7 + uVar12 * 0x10);
        if (puVar21 != (undefined4 *)0x0) {
          operator_delete(puVar21);
        }
      }
      puVar19 = puVar3 + 4;
      plVar23 = (long *)*plVar23;
      puVar21 = puVar22;
    } while (plVar23 != (long *)0x0);
  }
  pHVar8 = (HBFont *)operator_new(0xe0);
  FUN_004bf788(local_188,&local_138);
  FUN_004bf400(local_1b0,&local_160);
  uVar9 = (long)puVar19 - (long)puVar22;
  local_1c8 = (void *)0x0;
  local_1c0 = (void *)0x0;
  local_1b8 = (void *)0x0;
  if (uVar9 != 0) {
    if ((long)uVar9 < 0) {
LAB_004c22c8:
      FUN_004bf3ec();
LAB_004c22cc:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    local_1c8 = operator_new(uVar9);
    pvVar7 = (void *)((long)local_1c8 + uVar9);
    local_1b8 = pvVar7;
    memcpy(local_1c8,puVar22,uVar9);
    local_1c0 = pvVar7;
  }
  HBFont(pHVar8,uVar31,local_188,local_1b0,&local_1c8);
  *param_1 = pHVar8;
  pvVar7 = local_1b0[0];
  if (local_1c8 != (void *)0x0) {
    local_1c0 = local_1c8;
    operator_delete(local_1c8);
    pvVar7 = local_1b0[0];
  }
  while (local_1a0 != (undefined8 *)0x0) {
    pvVar20 = (void *)*local_1a0;
    local_1b0[0] = pvVar7;
    operator_delete(local_1a0);
    pvVar7 = local_1b0[0];
    local_1a0 = (undefined8 *)pvVar20;
  }
  local_1b0[0] = (void *)0x0;
  pvVar20 = local_188[0];
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
    pvVar20 = local_188[0];
  }
  while (local_178 != (undefined8 *)0x0) {
    pvVar7 = (void *)*local_178;
    local_188[0] = pvVar20;
    operator_delete(local_178);
    pvVar20 = local_188[0];
    local_178 = (undefined8 *)pvVar7;
  }
  local_188[0] = (void *)0x0;
  pvVar7 = local_160;
  plVar23 = local_150;
  if (pvVar20 != (void *)0x0) {
    operator_delete(pvVar20);
    pvVar7 = local_160;
    plVar23 = local_150;
  }
  while (plVar23 != (long *)0x0) {
    plVar11 = (long *)*plVar23;
    local_160 = pvVar7;
    operator_delete(plVar23);
    pvVar7 = local_160;
    plVar23 = plVar11;
  }
  local_160 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  if (puVar22 != (undefined4 *)0x0) {
    operator_delete(puVar22);
  }
  pvVar7 = local_138;
  plVar23 = local_128;
  if ((local_90 != auStack_110) && (local_90 != (undefined1 *)0x0)) {
    operator_delete__(local_90);
    pvVar7 = local_138;
    plVar23 = local_128;
  }
  while (plVar23 != (long *)0x0) {
    plVar11 = (long *)*plVar23;
    local_138 = pvVar7;
    operator_delete(plVar23);
    pvVar7 = local_138;
    plVar23 = plVar11;
  }
  local_138 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c22d4  HBFont::getPath =====

/* HBFont::getPath(unsigned short) const */

void HBFont::getPath(ushort param_1)

{
  undefined2 in_w1;
  undefined8 uVar1;
  undefined8 *in_x8;
  undefined8 uVar2;
  
  *(undefined1 *)(in_x8 + 7) = 0;
  uVar2 = *(undefined8 *)((ulong)param_1 + 0x18);
  uVar1 = *(undefined8 *)((ulong)param_1 + 0x38);
  in_x8[1] = 0;
  *in_x8 = 0;
  in_x8[3] = 0;
  in_x8[2] = 0;
  in_x8[5] = 0;
  in_x8[4] = 0;
  FUN_005087fc(uVar2,in_w1,uVar1);
  return;
}


// ===== 004c2300  HBFont::hasColorGlyphs =====

/* HBFont::hasColorGlyphs() const */

bool __thiscall HBFont::hasColorGlyphs(HBFont *this)

{
  if (this[0x98] == (HBFont)0x0 && this[0x99] == (HBFont)0x0) {
    return this[0x9a] != (HBFont)0x0;
  }
  return true;
}


// ===== 004c2328  HBFont::isColorGlyph =====

/* HBFont::isColorGlyph(unsigned short) const */

int * __thiscall HBFont::isColorGlyph(HBFont *this,ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  int *__ptr;
  undefined8 *puVar4;
  long lVar5;
  HBFont HVar6;
  long lVar7;
  mutex *this_00;
  int *piVar8;
  
  HVar6 = this[0x99];
  if (((this[0x98] == (HBFont)0x0) && (HVar6 == (HBFont)0x0)) && (this[0x9a] == (HBFont)0x0)) {
    return (int *)0x0;
  }
  lVar7 = *(long *)(*(long *)(this + 0x18) + 0x20);
  if (this[0x98] == (HBFont)0x0) {
LAB_004c2398:
    if (HVar6 != (HBFont)0x0) {
      puVar4 = *(undefined8 **)(lVar7 + 0x140);
      if (*(undefined8 **)(lVar7 + 0x140) == (undefined8 *)0x0) {
        do {
          puVar4 = (undefined8 *)&DAT_0025d4b0;
          if (*(long *)(lVar7 + 0x60) == 0) break;
          puVar4 = (undefined8 *)FUN_0050e8b0();
          if (puVar4 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&DAT_0025d4b0;
          }
          lVar5 = FUN_003410d0(0,puVar4,(undefined8 *)(lVar7 + 0x140));
          if (lVar5 == 0) break;
          FUN_0050edcc(puVar4);
          puVar4 = *(undefined8 **)(lVar7 + 0x140);
        } while (puVar4 == (undefined8 *)0x0);
      }
      puVar1 = (ushort *)&DAT_0025d4b0;
      if ((ushort *)*puVar4 != (ushort *)0x0) {
        puVar1 = (ushort *)*puVar4;
      }
      puVar2 = (ushort *)&DAT_0025d4b0;
      if (0xd < *(uint *)(puVar1 + 0xc)) {
        puVar2 = *(ushort **)(puVar1 + 8);
      }
      if ((*puVar2 >> 8 != 0 || (*puVar2 & 0xff) != 0) &&
         (lVar7 = FUN_0050fc5c(puVar2,param_1), lVar7 != 0)) goto LAB_004c23fc;
    }
    if (this[0x9a] == (HBFont)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      __ptr = (int *)rive_hb_ot_color_glyph_reference_png(*(undefined8 *)(this + 0x18),param_1);
      piVar8 = __ptr;
      if (((__ptr != (int *)0x0) && (piVar8 = (int *)(ulong)(__ptr[6] != 0), *__ptr != 0)) &&
         (iVar3 = FUN_00340fe0(0xffffffff,__ptr), iVar3 == 1)) {
        *__ptr = -0xdead;
        this_00 = *(mutex **)(__ptr + 2);
        if (this_00 != (mutex *)0x0) {
          FUN_004fe408(this_00 + 0x28,this_00);
          std::__ndk1::mutex::~mutex(this_00);
          free(this_00);
          __ptr[2] = 0;
          __ptr[3] = 0;
        }
        if (*(code **)(__ptr + 10) != (code *)0x0) {
          (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
        }
        free(__ptr);
      }
    }
  }
  else {
    iVar3 = rive_hb_ot_color_glyph_get_layers(lVar7,param_1,0,0,0);
    if (iVar3 == 0) {
      HVar6 = this[0x99];
      goto LAB_004c2398;
    }
LAB_004c23fc:
    piVar8 = (int *)0x1;
  }
  return piVar8;
}


// ===== 004c252c  HBFont::getColorLayers =====

/* HBFont::getColorLayers(unsigned short, std::__ndk1::vector<rive::Font::ColorGlyphLayer,
   std::__ndk1::allocator<rive::Font::ColorGlyphLayer> >&, unsigned int) const */

long __thiscall HBFont::getColorLayers(HBFont *this,ushort param_1,vector *param_2,uint param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined1 uVar3;
  uint uVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  HBFont *pHVar13;
  undefined8 ***pppuVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 **ppuVar28;
  ulong uVar29;
  uint *puVar30;
  undefined8 ***pppuVar31;
  undefined8 *puVar32;
  undefined2 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  uint local_14c;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 **local_130;
  undefined8 **ppuStack_128;
  undefined8 **local_120;
  void *local_118;
  void *pvStack_110;
  void *pvStack_108;
  undefined8 **local_100;
  undefined1 local_f8;
  uint local_f0;
  uint uStack_ec;
  char local_e8;
  void *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  undefined8 **ppuStack_c8;
  undefined8 **local_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 uStack_98;
  undefined8 **local_90;
  undefined8 **ppuStack_88;
  undefined8 **local_80;
  long local_78;
  
  uVar29 = (ulong)param_1;
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if (((this[0x98] == (HBFont)0x0) && (this[0x99] == (HBFont)0x0)) && (this[0x9a] == (HBFont)0x0)) {
    lVar24 = 0;
    goto LAB_004c35c0;
  }
  uVar15 = *(ulong *)(this + 0xc0);
  if (uVar15 != 0) {
    uVar34 = NEON_cnt(uVar15,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    uVar26 = CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) & 0xffffffff;
    if (uVar26 < 2) {
      uVar19 = (int)uVar15 - 1 & uVar29;
    }
    else {
      uVar19 = uVar29;
      if (uVar15 <= uVar29) {
        uVar19 = 0;
        if (uVar15 != 0) {
          uVar19 = uVar29 / uVar15;
        }
        uVar19 = uVar29 - uVar19 * uVar15;
      }
    }
    plVar21 = *(long **)(*(long *)(this + 0xb8) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      do {
        uVar22 = plVar21[1];
        if (uVar22 == uVar29) {
          if (*(ushort *)(plVar21 + 2) == param_1) {
            pppuVar14 = (undefined8 ***)plVar21[3];
            pppuVar1 = (undefined8 ***)plVar21[4];
            pppuVar31 = pppuVar14;
            if (pppuVar14 == pppuVar1) goto LAB_004c3640;
            goto LAB_004c2b74;
          }
        }
        else {
          if (uVar26 < 2) {
            uVar22 = uVar22 & uVar15 - 1;
          }
          else if (uVar15 <= uVar22) {
            uVar23 = 0;
            if (uVar15 != 0) {
              uVar23 = uVar22 / uVar15;
            }
            uVar22 = uVar22 - uVar23 * uVar15;
          }
          if (uVar22 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
  local_148 = (undefined8 *)0x0;
  local_140 = (undefined8 *)0x0;
  local_138 = (undefined8 *)0x0;
  if (this[0x98] == (HBFont)0x0) {
LAB_004c2818:
    puVar25 = (undefined8 *)0x0;
LAB_004c281c:
    if (this[0x99] != (HBFont)0x0 || this[0x9a] != (HBFont)0x0) {
      ppuVar28 = *(undefined8 ***)(this + 0x18);
      local_120 = &local_148;
      ppuStack_128 = *(undefined8 ***)(this + 0x38);
      lVar24 = *(long *)(this + 0x40);
      pvStack_108 = (void *)0x0;
      local_100 = (undefined8 **)0x0;
      pvStack_110 = (void *)0x0;
      local_118 = (void *)(CONCAT44(param_3,(int)local_118) & 0xffffffffff000000);
      local_130 = ppuVar28;
      if (*(float *)((long)ppuVar28 + 0x4c) != 0.0) {
        if (*(undefined8 **)(lVar24 + 0x80) == (undefined8 *)0x0) {
          uVar34 = 0;
        }
        else {
          uVar34 = **(undefined8 **)(lVar24 + 0x80);
        }
        (**(code **)(lVar24 + 0x10))
                  (0x3f800000,0,*(float *)((long)ppuVar28 + 0x4c),0x3f800000,0,0,lVar24,&local_130,
                   uVar34);
      }
      lVar18 = ppuVar28[0x12][2];
      if (lVar18 == 0) {
        uVar34 = 0;
      }
      else {
        uVar34 = *(undefined8 *)(lVar18 + 0x98);
      }
      iVar8 = (*(code *)ppuVar28[0x12][0x17])
                        (ppuVar28,ppuVar28[0x13],param_1,lVar24,&local_130,0,0xff,uVar34);
      if (*(float *)((long)ppuVar28 + 0x4c) != 0.0) {
        if (*(long *)(lVar24 + 0x80) == 0) {
          uVar34 = 0;
        }
        else {
          uVar34 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 8);
        }
        (**(code **)(lVar24 + 0x18))(lVar24,&local_130,uVar34);
      }
      if (iVar8 == 0) {
        if (*(long *)(lVar24 + 0x80) == 0) {
          uVar34 = 0;
        }
        else {
          uVar34 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x18);
        }
        (**(code **)(lVar24 + 0x28))(lVar24,&local_130,param_1,ppuVar28,uVar34);
        if (*(long *)(lVar24 + 0x80) == 0) {
          uVar34 = 0;
        }
        else {
          uVar34 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x30);
        }
        (**(code **)(lVar24 + 0x40))(lVar24,&local_130,1,0xff,uVar34);
        if (*(long *)(lVar24 + 0x80) == 0) {
          uVar34 = 0;
        }
        else {
          uVar34 = *(undefined8 *)(*(long *)(lVar24 + 0x80) + 0x28);
        }
        (**(code **)(lVar24 + 0x38))(lVar24,&local_130,uVar34);
      }
      puVar25 = local_148;
      if (pvStack_110 != (void *)0x0) {
        pvStack_108 = pvStack_110;
        operator_delete(pvStack_110);
        puVar25 = local_148;
      }
    }
  }
  else {
    uVar34 = *(undefined8 *)(*(long *)(this + 0x18) + 0x20);
    local_14c = rive_hb_ot_color_glyph_get_layers(uVar34,param_1,0,0,0);
    if (local_14c == 0) goto LAB_004c2818;
    uVar4 = local_14c << 3;
    pvVar9 = operator_new((ulong)uVar4);
    memset(pvVar9,0,(ulong)uVar4);
    rive_hb_ot_color_glyph_get_layers(uVar34,uVar29,0,&local_14c,pvVar9);
    puVar12 = local_140;
    puVar25 = local_148;
    uVar15 = (ulong)local_14c;
    if ((ulong)(((long)local_138 - (long)local_148 >> 3) * -0x2c8590b21642c859) < uVar15) {
      pvVar10 = operator_new(uVar15 * 0xb8);
      puVar16 = local_148;
      local_138 = (undefined8 *)((long)pvVar10 + uVar15 * 0xb8);
      local_148 = (undefined8 *)((long)pvVar10 + ((long)puVar12 - (long)puVar25));
      puVar7 = local_148;
      if ((long)puVar12 - (long)puVar25 != 0) {
        lVar24 = 0;
        do {
          lVar18 = lVar24 + -0xb8;
          uVar34 = *(undefined8 *)((long)puVar12 + lVar24 + -0xb8);
          *(undefined8 *)((long)local_148 + lVar24 + -0xb0) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0xb0);
          *(undefined8 *)((long)local_148 + lVar24 + -0xb8) = uVar34;
          *(undefined8 *)((long)local_148 + lVar24 + -0xa8) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0xa8);
          uVar34 = *(undefined8 *)((long)puVar12 + lVar24 + -0xa0);
          *(undefined8 *)((long)puVar12 + lVar24 + -0xb8) = 0;
          *(undefined8 *)((long)puVar12 + lVar24 + -0xb0) = 0;
          *(undefined8 *)((long)puVar12 + lVar24 + -0xa8) = 0;
          *(undefined8 *)((long)local_148 + lVar24 + -0x98) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0x98);
          *(undefined8 *)((long)local_148 + lVar24 + -0xa0) = uVar34;
          *(undefined8 *)((long)local_148 + lVar24 + -0x90) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0x90);
          uVar34 = *(undefined8 *)((long)puVar12 + lVar24 + -0x88);
          *(undefined8 *)((long)puVar12 + lVar24 + -0xa0) = 0;
          *(undefined8 *)((long)puVar12 + lVar24 + -0x98) = 0;
          *(undefined8 *)((long)puVar12 + lVar24 + -0x90) = 0;
          *(undefined1 *)((long)local_148 + lVar24 + -0x80) =
               *(undefined1 *)((long)puVar12 + lVar24 + -0x80);
          *(undefined8 *)((long)local_148 + lVar24 + -0x88) = uVar34;
          uVar34 = *(undefined8 *)((long)puVar12 + lVar24 + -0x78);
          *(undefined1 *)((long)local_148 + lVar24 + -0x70) =
               *(undefined1 *)((long)puVar12 + lVar24 + -0x70);
          *(undefined8 *)((long)local_148 + lVar24 + -0x78) = uVar34;
          uVar34 = *(undefined8 *)((long)puVar12 + lVar24 + -0x68);
          *(undefined8 *)((long)local_148 + lVar24 + -0x60) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0x60);
          *(undefined8 *)((long)local_148 + lVar24 + -0x68) = uVar34;
          *(undefined8 *)((long)local_148 + lVar24 + -0x58) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0x58);
          uVar37 = *(undefined8 *)((long)puVar12 + lVar24 + -0x50);
          uVar35 = *(undefined8 *)((long)puVar12 + lVar24 + -0x38);
          uVar34 = *(undefined8 *)((long)puVar12 + lVar24 + -0x40);
          *(undefined8 *)((long)puVar12 + lVar24 + -0x68) = 0;
          *(undefined8 *)((long)puVar12 + lVar24 + -0x60) = 0;
          *(undefined8 *)((long)puVar12 + lVar24 + -0x58) = 0;
          *(undefined8 *)((long)local_148 + lVar24 + -0x48) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0x48);
          *(undefined8 *)((long)local_148 + lVar24 + -0x50) = uVar37;
          *(undefined8 *)((long)local_148 + lVar24 + -0x38) = uVar35;
          *(undefined8 *)((long)local_148 + lVar24 + -0x40) = uVar34;
          uVar34 = *(undefined8 *)((long)puVar12 + lVar24 + -0x30);
          *(undefined8 *)((long)local_148 + lVar24 + -0x28) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0x28);
          *(undefined8 *)((long)local_148 + lVar24 + -0x30) = uVar34;
          *(undefined8 *)((long)local_148 + lVar24 + -0x20) =
               *(undefined8 *)((long)puVar12 + lVar24 + -0x20);
          uVar35 = *(undefined8 *)((long)puVar12 + lVar24 + -0x10);
          uVar34 = *(undefined8 *)((long)puVar12 + lVar24 + -0x18);
          *(undefined8 *)((long)puVar12 + lVar24 + -0x30) = 0;
          *(undefined8 *)((long)puVar12 + lVar24 + -0x28) = 0;
          *(undefined8 *)((long)puVar12 + lVar24 + -0x20) = 0;
          *(undefined8 *)((long)local_148 + lVar24 + -8) =
               *(undefined8 *)((long)puVar12 + lVar24 + -8);
          *(undefined8 *)((long)local_148 + lVar24 + -0x10) = uVar35;
          *(undefined8 *)((long)local_148 + lVar24 + -0x18) = uVar34;
          lVar24 = lVar18;
        } while ((undefined8 *)((long)puVar12 + lVar18) != puVar25);
        puVar25 = local_148;
        local_148 = (undefined8 *)((long)local_148 + lVar18);
        for (puVar12 = local_140; local_140 = puVar25, puVar25 = puVar16, puVar7 = local_140,
            puVar12 != puVar16; puVar12 = puVar12 + -0x17) {
          pvVar10 = (void *)puVar12[-6];
          if (pvVar10 != (void *)0x0) {
            puVar12[-5] = pvVar10;
            operator_delete(pvVar10);
          }
          pvVar10 = (void *)puVar12[-0xd];
          if (pvVar10 != (void *)0x0) {
            puVar12[-0xc] = pvVar10;
            operator_delete(pvVar10);
          }
          pvVar10 = (void *)puVar12[-0x14];
          if (pvVar10 != (void *)0x0) {
            puVar12[-0x13] = pvVar10;
            operator_delete(pvVar10);
          }
          pvVar10 = (void *)puVar12[-0x17];
          if (pvVar10 != (void *)0x0) {
            puVar12[-0x16] = pvVar10;
            operator_delete(pvVar10);
          }
          puVar25 = local_140;
        }
      }
      local_140 = puVar7;
      if (puVar25 != (undefined8 *)0x0) {
        operator_delete(puVar25);
      }
    }
    if (local_14c != 0) {
      uVar15 = 0;
      puVar30 = (uint *)((long)pvVar9 + 4);
      do {
        local_f8 = 0;
        local_f0 = local_f0 & 0xffffff00;
        ppuStack_128 = (undefined8 **)0x0;
        local_130 = (undefined8 **)0x0;
        local_118 = (void *)0x0;
        local_120 = (undefined8 **)0x0;
        pvStack_108 = (void *)0x0;
        pvStack_110 = (void *)0x0;
        uStack_ec = 0xff000000;
        local_e8 = 0;
        pvStack_d8 = (void *)0x0;
        local_e0 = (void *)0x0;
        ppuStack_c8 = (undefined8 **)0x0;
        local_d0 = 0;
        ppuStack_b8 = (undefined8 **)0x0;
        local_c0 = (undefined8 **)0x0;
        local_a8 = (void *)0x0;
        ppuStack_b0 = (undefined8 **)0x0;
        uStack_98 = 0;
        pvStack_a0 = (void *)0x0;
        ppuStack_88 = (undefined8 **)0x0;
        local_90 = (undefined8 **)0x0;
        local_80 = (undefined8 **)0x0;
        FUN_005087fc(*(undefined8 *)(this + 0x18),puVar30[-1],*(undefined8 *)(this + 0x38),
                     &local_130,1);
        uVar4 = *puVar30;
        if (uVar4 == 0xffff) {
          local_e8 = '\x01';
          uStack_ec = param_3;
        }
        else {
          local_e8 = '\0';
          if ((ulong)uVar4 < (ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0) >> 2)) {
            uVar4 = *(uint *)(*(long *)(this + 0xa0) + (ulong)uVar4 * 4);
            uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uStack_ec = uVar4 >> 0x10 | uVar4 << 0x10;
          }
          else {
            uStack_ec = 0xff000000;
          }
        }
        if (local_140 < local_138) {
          local_140[2] = 0;
          local_140[3] = 0;
          *local_140 = 0;
          local_140[1] = 0;
          local_140[4] = 0;
          local_140[5] = 0;
          local_140[10] = 0;
          local_140[0xb] = 0;
          local_140[1] = ppuStack_128;
          *local_140 = local_130;
          local_140[0xc] = 0;
          local_140[0x11] = 0;
          local_140[0x12] = 0;
          local_140[2] = local_120;
          local_140[0x13] = 0;
          local_130 = (undefined8 **)0x0;
          ppuStack_128 = (undefined8 **)0x0;
          local_140[4] = pvStack_110;
          local_140[3] = local_118;
          local_120 = (undefined8 **)0x0;
          local_118 = (void *)0x0;
          pvStack_110 = (void *)0x0;
          local_140[5] = pvStack_108;
          pvStack_108 = (void *)0x0;
          *(undefined1 *)(local_140 + 7) = local_f8;
          local_140[6] = local_100;
          *(char *)(local_140 + 9) = local_e8;
          local_140[8] = CONCAT44(uStack_ec,local_f0);
          local_140[0xb] = pvStack_d8;
          local_140[10] = local_e0;
          local_e0 = (void *)0x0;
          pvStack_d8 = (void *)0x0;
          local_140[0xc] = local_d0;
          local_d0 = 0;
          local_140[0x10] = ppuStack_b0;
          local_140[0xf] = ppuStack_b8;
          local_140[0xe] = local_c0;
          local_140[0xd] = ppuStack_c8;
          local_140[0x12] = pvStack_a0;
          local_140[0x11] = local_a8;
          local_a8 = (void *)0x0;
          pvStack_a0 = (void *)0x0;
          local_140[0x13] = uStack_98;
          uStack_98 = 0;
          local_140[0x16] = local_80;
          local_140[0x15] = ppuStack_88;
          local_140[0x14] = local_90;
          local_140 = local_140 + 0x17;
        }
        else {
          local_140 = (undefined8 *)FUN_004c0a3c(&local_148,&local_130);
          if (local_a8 != (void *)0x0) {
            pvStack_a0 = local_a8;
            operator_delete(local_a8);
          }
        }
        if (local_e0 != (void *)0x0) {
          pvStack_d8 = local_e0;
          operator_delete(local_e0);
        }
        if (local_118 != (void *)0x0) {
          pvStack_110 = local_118;
          operator_delete(local_118);
        }
        if (local_130 != (undefined8 **)0x0) {
          ppuStack_128 = local_130;
          operator_delete(local_130);
        }
        uVar15 = uVar15 + 1;
        puVar30 = puVar30 + 2;
      } while (uVar15 < local_14c);
    }
    operator_delete(pvVar9);
    puVar25 = local_148;
    if (local_148 == local_140) goto LAB_004c281c;
  }
  puVar12 = local_140;
  uVar15 = (ulong)param_1;
  if (puVar25 == local_140) {
    lVar24 = 0;
  }
  else {
    uVar26 = *(ulong *)(this + 0xc0);
    if (uVar26 != 0) {
      uVar34 = NEON_cnt(uVar26,1);
      uVar33 = NEON_uaddlv(uVar34,1);
      uVar19 = CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) & 0xffffffff;
      if (uVar19 < 2) {
        uVar15 = (int)uVar26 - 1 & uVar29;
      }
      else {
        uVar15 = uVar29;
        if (uVar26 <= uVar29) {
          uVar15 = 0;
          if (uVar26 != 0) {
            uVar15 = uVar29 / uVar26;
          }
          uVar15 = uVar29 - uVar15 * uVar26;
        }
      }
      puVar16 = *(undefined8 **)(*(long *)(this + 0xb8) + uVar15 * 8);
      if ((puVar16 != (undefined8 *)0x0) && (plVar21 = (long *)*puVar16, plVar21 != (long *)0x0)) {
        do {
          uVar22 = plVar21[1];
          if (uVar22 == uVar29) {
            if (*(ushort *)(plVar21 + 2) == param_1) goto LAB_004c325c;
          }
          else {
            if (uVar19 < 2) {
              uVar22 = uVar22 & uVar26 - 1;
            }
            else if (uVar26 <= uVar22) {
              uVar23 = 0;
              if (uVar26 != 0) {
                uVar23 = uVar22 / uVar26;
              }
              uVar22 = uVar22 - uVar23 * uVar26;
            }
            if (uVar22 != uVar15) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
    plVar21 = (long *)operator_new(0x30);
    lVar24 = *(long *)(this + 0xd0);
    fVar36 = *(float *)(this + 0xd8);
    *plVar21 = 0;
    plVar21[1] = uVar29;
    *(ushort *)(plVar21 + 2) = param_1;
    plVar21[4] = 0;
    plVar21[5] = 0;
    plVar21[3] = 0;
    if ((uVar26 == 0) || (fVar36 * (float)uVar26 < (float)(lVar24 + 1))) {
      if (uVar26 < 3) {
        uVar15 = 1;
      }
      else {
        uVar15 = (ulong)((uVar26 & uVar26 - 1) != 0);
      }
      uVar15 = uVar15 | uVar26 << 1;
      uVar19 = (ulong)((float)(lVar24 + 1) / fVar36);
      if (uVar15 <= uVar19) {
        uVar15 = uVar19;
      }
      if (uVar15 - 1 == 0) {
        uVar15 = 2;
      }
      else if ((uVar15 & uVar15 - 1) != 0) {
        uVar15 = std::__ndk1::__next_prime(uVar15);
        uVar26 = *(ulong *)(this + 0xc0);
      }
      if (uVar26 < uVar15) {
LAB_004c3040:
        if (uVar15 >> 0x3d != 0) goto LAB_004c366c;
        pvVar9 = operator_new(uVar15 << 3);
        pvVar10 = *(void **)(this + 0xb8);
        *(void **)(this + 0xb8) = pvVar9;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
        uVar26 = 0;
        *(ulong *)(this + 0xc0) = uVar15;
        do {
          *(undefined8 *)(*(long *)(this + 0xb8) + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar15 != uVar26);
        plVar17 = *(long **)(this + 200);
        uVar26 = uVar15;
        if (plVar17 != (long *)0x0) {
          uVar19 = plVar17[1];
          uVar34 = NEON_cnt(uVar15,1);
          uVar33 = NEON_uaddlv(uVar34,1);
          uVar22 = CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) & 0xffffffff;
          if (uVar22 < 2) {
            uVar19 = uVar19 & uVar15 - 1;
          }
          else if (uVar15 <= uVar19) {
            uVar23 = 0;
            if (uVar15 != 0) {
              uVar23 = uVar19 / uVar15;
            }
            uVar19 = uVar19 - uVar23 * uVar15;
          }
          *(HBFont **)(*(long *)(this + 0xb8) + uVar19 * 8) = this + 200;
          plVar20 = (long *)*plVar17;
          if (plVar20 != (long *)0x0) {
            do {
              uVar23 = plVar20[1];
              if (uVar22 < 2) {
                uVar23 = uVar23 & uVar15 - 1;
              }
              else if (uVar15 <= uVar23) {
                uVar5 = 0;
                if (uVar15 != 0) {
                  uVar5 = uVar23 / uVar15;
                }
                uVar23 = uVar23 - uVar5 * uVar15;
              }
              if (uVar23 != uVar19) {
                if (*(long *)(*(long *)(this + 0xb8) + uVar23 * 8) == 0) {
                  *(long **)(*(long *)(this + 0xb8) + uVar23 * 8) = plVar17;
                  uVar19 = uVar23;
                }
                else {
                  *plVar17 = *plVar20;
                  *plVar20 = **(long **)(*(long *)(this + 0xb8) + uVar23 * 8);
                  **(undefined8 **)(*(long *)(this + 0xb8) + uVar23 * 8) = plVar20;
                  plVar20 = plVar17;
                }
              }
              plVar17 = plVar20;
              plVar20 = (long *)*plVar17;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else if (uVar15 < uVar26) {
        uVar19 = (ulong)((float)*(ulong *)(this + 0xd0) / *(float *)(this + 0xd8));
        if (uVar26 < 3) {
LAB_004c3600:
          uVar19 = std::__ndk1::__next_prime(uVar19);
        }
        else {
          uVar34 = NEON_cnt(uVar26,1);
          uVar33 = NEON_uaddlv(uVar34,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33)) goto LAB_004c3600;
          if (1 < uVar19) {
            uVar19 = 1L << (-LZCOUNT(uVar19 - 1) & 0x3fU);
          }
        }
        if (uVar15 <= uVar19) {
          uVar15 = uVar19;
        }
        if (uVar15 < uVar26) {
          if (uVar15 != 0) goto LAB_004c3040;
          pvVar9 = *(void **)(this + 0xb8);
          *(undefined8 *)(this + 0xb8) = 0;
          if (pvVar9 != (void *)0x0) {
            operator_delete(pvVar9);
          }
          *(undefined8 *)(this + 0xc0) = 0;
          uVar26 = 0;
        }
        else {
          uVar26 = *(ulong *)(this + 0xc0);
        }
      }
      if ((uVar26 & uVar26 - 1) == 0) {
        uVar15 = (int)uVar26 - 1 & uVar29;
      }
      else {
        uVar15 = uVar29;
        if (uVar26 <= uVar29) {
          uVar15 = 0;
          if (uVar26 != 0) {
            uVar15 = uVar29 / uVar26;
          }
          uVar15 = uVar29 - uVar15 * uVar26;
        }
      }
    }
    lVar24 = *(long *)(this + 0xb8);
    plVar17 = *(long **)(lVar24 + uVar15 * 8);
    if (plVar17 == (long *)0x0) {
      pHVar13 = this + 200;
      lVar18 = *(long *)pHVar13;
      *(long **)pHVar13 = plVar21;
      *plVar21 = lVar18;
      *(HBFont **)(lVar24 + uVar15 * 8) = pHVar13;
      if (*plVar21 != 0) {
        uVar29 = *(ulong *)(*plVar21 + 8);
        if ((uVar26 & uVar26 - 1) == 0) {
          uVar29 = uVar29 & uVar26 - 1;
        }
        else if (uVar26 <= uVar29) {
          uVar15 = 0;
          if (uVar26 != 0) {
            uVar15 = uVar29 / uVar26;
          }
          uVar29 = uVar29 - uVar15 * uVar26;
        }
        plVar17 = (long *)(*(long *)(this + 0xb8) + uVar29 * 8);
        goto LAB_004c324c;
      }
    }
    else {
      *plVar21 = *plVar17;
LAB_004c324c:
      *plVar17 = (long)plVar21;
    }
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 1;
LAB_004c325c:
    puVar7 = local_140;
    puVar16 = local_148;
    ppuVar28 = (undefined8 **)(plVar21 + 3);
    if (ppuVar28 != &local_148) {
      lVar24 = plVar21[5];
      puVar27 = (undefined8 *)plVar21[3];
      lVar18 = (long)local_140 - (long)local_148 >> 3;
      uVar29 = lVar18 * -0x2c8590b21642c859;
      if ((ulong)((lVar24 - (long)puVar27 >> 3) * -0x2c8590b21642c859) < uVar29) {
        if (puVar27 != (undefined8 *)0x0) {
          puVar32 = (undefined8 *)plVar21[4];
          puVar11 = puVar27;
          if (puVar32 != puVar27) {
            do {
              pvVar9 = (void *)puVar32[-6];
              if (pvVar9 != (void *)0x0) {
                puVar32[-5] = pvVar9;
                operator_delete(pvVar9);
              }
              pvVar9 = (void *)puVar32[-0xd];
              if (pvVar9 != (void *)0x0) {
                puVar32[-0xc] = pvVar9;
                operator_delete(pvVar9);
              }
              pvVar9 = (void *)puVar32[-0x14];
              if (pvVar9 != (void *)0x0) {
                puVar32[-0x13] = pvVar9;
                operator_delete(pvVar9);
              }
              pvVar9 = (void *)puVar32[-0x17];
              if (pvVar9 != (void *)0x0) {
                puVar32[-0x16] = pvVar9;
                operator_delete(pvVar9);
              }
              puVar32 = puVar32 + -0x17;
            } while (puVar32 != puVar27);
            puVar11 = *ppuVar28;
          }
          plVar21[4] = (long)puVar27;
          operator_delete(puVar11);
          lVar24 = 0;
          *ppuVar28 = (undefined8 *)0x0;
          plVar21[4] = 0;
          plVar21[5] = 0;
        }
        if (uVar29 < 0x1642c8590b21643) {
          uVar15 = (lVar24 >> 3) * -0x590b21642c8590b2;
          if (uVar15 < uVar29 || uVar15 + lVar18 * 0x2c8590b21642c859 == 0) {
            uVar15 = uVar29;
          }
          if (0xb21642c8590b20 < (ulong)((lVar24 >> 3) * -0x2c8590b21642c859)) {
            uVar15 = 0x1642c8590b21642;
          }
          if (uVar15 < 0x1642c8590b21643) {
            pvVar9 = operator_new(uVar15 * 0xb8);
            plVar21[3] = (long)pvVar9;
            plVar21[4] = (long)pvVar9;
            plVar21[5] = (long)((long)pvVar9 + uVar15 * 0xb8);
            for (; puVar16 != puVar7; puVar16 = puVar16 + 0x17) {
              FUN_004c5964(pvVar9,puVar16);
              pvVar9 = (void *)((long)pvVar9 + 0xb8);
            }
            plVar21[4] = (long)pvVar9;
            goto LAB_004c3498;
          }
        }
        FUN_004c0cf8();
LAB_004c366c:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      if ((ulong)((plVar21[4] - (long)puVar27 >> 3) * -0x2c8590b21642c859) < uVar29) {
        puVar16 = (undefined8 *)((long)local_148 + (plVar21[4] - (long)puVar27));
        FUN_004c5880(local_148,puVar16,puVar27);
        lVar24 = plVar21[4];
        for (; puVar16 != puVar7; puVar16 = puVar16 + 0x17) {
          FUN_004c5964(lVar24,puVar16);
          lVar24 = lVar24 + 0xb8;
        }
        plVar21[4] = lVar24;
      }
      else {
        lVar18 = FUN_004c5880(local_148,local_140,puVar27);
        for (lVar24 = plVar21[4]; lVar24 != lVar18; lVar24 = lVar24 + -0xb8) {
          pvVar9 = *(void **)(lVar24 + -0x30);
          if (pvVar9 != (void *)0x0) {
            *(void **)(lVar24 + -0x28) = pvVar9;
            operator_delete(pvVar9);
          }
          pvVar9 = *(void **)(lVar24 + -0x68);
          if (pvVar9 != (void *)0x0) {
            *(void **)(lVar24 + -0x60) = pvVar9;
            operator_delete(pvVar9);
          }
          pvVar9 = *(void **)(lVar24 + -0xa0);
          if (pvVar9 != (void *)0x0) {
            *(void **)(lVar24 + -0x98) = pvVar9;
            operator_delete(pvVar9);
          }
          pvVar9 = *(void **)(lVar24 + -0xb8);
          if (pvVar9 != (void *)0x0) {
            *(void **)(lVar24 + -0xb0) = pvVar9;
            operator_delete(pvVar9);
          }
        }
        plVar21[4] = lVar18;
      }
    }
LAB_004c3498:
    puVar16 = local_140;
    lVar24 = ((long)puVar12 - (long)puVar25 >> 3) * -0x2c8590b21642c859;
    if (local_148 != local_140) {
      puVar12 = *(undefined8 **)(param_2 + 8);
      puVar25 = local_148;
      do {
        if (puVar12 < *(undefined8 **)(param_2 + 0x10)) {
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          uVar34 = *puVar25;
          puVar12[1] = puVar25[1];
          *puVar12 = uVar34;
          puVar12[2] = puVar25[2];
          *puVar25 = 0;
          puVar25[1] = 0;
          puVar25[2] = 0;
          puVar12[3] = 0;
          puVar12[4] = 0;
          puVar12[5] = 0;
          uVar34 = puVar25[3];
          puVar12[4] = puVar25[4];
          puVar12[3] = uVar34;
          puVar12[5] = puVar25[5];
          uVar34 = puVar25[6];
          puVar25[3] = 0;
          puVar25[4] = 0;
          puVar25[5] = 0;
          *(undefined1 *)(puVar12 + 7) = *(undefined1 *)(puVar25 + 7);
          puVar12[6] = uVar34;
          uVar3 = *(undefined1 *)(puVar25 + 9);
          uVar34 = puVar25[8];
          puVar12[0xb] = 0;
          puVar12[0xc] = 0;
          puVar12[10] = 0;
          *(undefined1 *)(puVar12 + 9) = uVar3;
          puVar12[8] = uVar34;
          uVar34 = puVar25[10];
          puVar12[0xb] = puVar25[0xb];
          puVar12[10] = uVar34;
          puVar12[0xc] = puVar25[0xc];
          uVar34 = puVar25[0xf];
          uVar37 = puVar25[0xe];
          uVar35 = puVar25[0xd];
          puVar25[10] = 0;
          puVar25[0xb] = 0;
          puVar25[0xc] = 0;
          puVar12[0x10] = puVar25[0x10];
          puVar12[0xf] = uVar34;
          puVar12[0xe] = uVar37;
          puVar12[0xd] = uVar35;
          puVar12[0x12] = 0;
          puVar12[0x13] = 0;
          puVar12[0x11] = 0;
          uVar34 = puVar25[0x11];
          puVar12[0x12] = puVar25[0x12];
          puVar12[0x11] = uVar34;
          puVar12[0x13] = puVar25[0x13];
          uVar35 = puVar25[0x15];
          uVar34 = puVar25[0x14];
          puVar25[0x11] = 0;
          puVar25[0x12] = 0;
          puVar25[0x13] = 0;
          puVar12[0x16] = puVar25[0x16];
          puVar12[0x15] = uVar35;
          puVar12[0x14] = uVar34;
          puVar12 = puVar12 + 0x17;
        }
        else {
          puVar12 = (undefined8 *)FUN_004c0a3c(param_2,puVar25);
        }
        puVar25 = puVar25 + 0x17;
        *(undefined8 **)(param_2 + 8) = puVar12;
      } while (puVar25 != puVar16);
    }
  }
  local_130 = &local_148;
  FUN_004c57d0(&local_130);
LAB_004c35c0:
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar24;
  while( true ) {
    local_90 = pppuVar14[0x14];
    puVar25 = *(undefined8 **)(param_2 + 8);
    local_80 = pppuVar14[0x16];
    ppuStack_88 = pppuVar14[0x15];
    if (puVar25 < *(undefined8 **)(param_2 + 0x10)) {
      puVar25[2] = 0;
      puVar25[3] = 0;
      *puVar25 = 0;
      puVar25[1] = 0;
      puVar25[4] = 0;
      puVar25[5] = 0;
      puVar25[10] = 0;
      puVar25[0xb] = 0;
      puVar25[1] = ppuStack_128;
      *puVar25 = local_130;
      puVar25[0xc] = 0;
      puVar25[0x11] = 0;
      puVar25[0x12] = 0;
      puVar25[2] = local_120;
      puVar25[0x13] = 0;
      local_130 = (undefined8 **)0x0;
      ppuStack_128 = (undefined8 **)0x0;
      puVar25[4] = pvStack_110;
      puVar25[3] = local_118;
      local_120 = (undefined8 **)0x0;
      local_118 = (void *)0x0;
      pvStack_110 = (void *)0x0;
      puVar25[5] = pvStack_108;
      pvStack_108 = (void *)0x0;
      *(undefined1 *)(puVar25 + 7) = local_f8;
      puVar25[6] = local_100;
      *(char *)(puVar25 + 9) = local_e8;
      puVar25[8] = CONCAT44(uStack_ec,local_f0);
      puVar25[0xb] = pvStack_d8;
      puVar25[10] = local_e0;
      local_e0 = (void *)0x0;
      pvStack_d8 = (void *)0x0;
      puVar25[0xc] = local_d0;
      local_d0 = 0;
      puVar25[0x10] = ppuStack_b0;
      puVar25[0xf] = ppuStack_b8;
      puVar25[0xe] = local_c0;
      puVar25[0xd] = ppuStack_c8;
      puVar25[0x12] = pvStack_a0;
      puVar25[0x11] = local_a8;
      local_a8 = (void *)0x0;
      pvStack_a0 = (void *)0x0;
      puVar25[0x13] = uStack_98;
      uStack_98 = 0;
      puVar25[0x16] = local_80;
      puVar25[0x15] = ppuStack_88;
      puVar25[0x14] = local_90;
      *(undefined8 **)(param_2 + 8) = puVar25 + 0x17;
    }
    else {
      uVar34 = FUN_004c0a3c(param_2,&local_130);
      *(undefined8 *)(param_2 + 8) = uVar34;
      if (local_a8 != (void *)0x0) {
        pvStack_a0 = local_a8;
        operator_delete(local_a8);
      }
    }
    if (local_e0 != (void *)0x0) {
      pvStack_d8 = local_e0;
      operator_delete(local_e0);
    }
    if (local_118 != (void *)0x0) {
      pvStack_110 = local_118;
      operator_delete(local_118);
    }
    if (local_130 != (undefined8 **)0x0) {
      ppuStack_128 = local_130;
      operator_delete(local_130);
    }
    pppuVar14 = pppuVar14 + 0x17;
    if (pppuVar14 == pppuVar1) break;
LAB_004c2b74:
    local_f8 = 0;
    ppuStack_128 = (undefined8 **)0x0;
    local_130 = (undefined8 **)0x0;
    local_118 = (void *)0x0;
    local_120 = (undefined8 **)0x0;
    pvStack_108 = (void *)0x0;
    pvStack_110 = (void *)0x0;
    uStack_ec = 0xff000000;
    local_e8 = '\0';
    pvStack_d8 = (void *)0x0;
    local_e0 = (void *)0x0;
    ppuStack_c8 = (undefined8 **)0x0;
    local_d0 = 0;
    ppuStack_b8 = (undefined8 **)0x0;
    local_c0 = (undefined8 **)0x0;
    local_a8 = (void *)0x0;
    ppuStack_b0 = (undefined8 **)0x0;
    uStack_98 = 0;
    pvStack_a0 = (void *)0x0;
    ppuStack_88 = (undefined8 **)0x0;
    local_90 = (undefined8 **)0x0;
    local_80 = (undefined8 **)0x0;
    local_f0 = CONCAT31(local_f0._1_3_,*(undefined1 *)(pppuVar14 + 8));
    if (pppuVar14 == &local_130) {
      uStack_ec = 0xff000000;
      local_c0 = (undefined8 **)0x0;
      ppuStack_c8 = (undefined8 **)0x0;
      ppuStack_b0 = (undefined8 **)0x0;
      ppuStack_b8 = (undefined8 **)0x0;
    }
    else {
      FUN_00442ab8(&local_130,*pppuVar14,pppuVar14[1],(long)pppuVar14[1] - (long)*pppuVar14 >> 3);
      pvVar9 = local_118;
      ppuVar28 = pppuVar14[3];
      ppuVar2 = pppuVar14[4];
      uVar29 = (long)ppuVar2 - (long)ppuVar28;
      if ((ulong)((long)pvStack_108 - (long)local_118) < uVar29) {
        if (local_118 != (void *)0x0) {
          pvStack_110 = local_118;
          operator_delete(local_118);
          local_118 = (void *)0x0;
          pvStack_110 = (void *)0x0;
          pvStack_108 = (void *)0x0;
        }
        if ((long)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00442d00();
        }
        uVar15 = (long)pvStack_108 * 2;
        if (uVar15 < uVar29 || uVar15 - uVar29 == 0) {
          uVar15 = uVar29;
        }
        if ((void *)0x3ffffffffffffffe < pvStack_108) {
          uVar15 = 0x7fffffffffffffff;
        }
        pvVar9 = operator_new(uVar15);
        pvStack_108 = (void *)((long)pvVar9 + uVar15);
        local_118 = pvVar9;
        if (ppuVar2 != ppuVar28) {
          pvStack_110 = pvVar9;
          memcpy(pvVar9,ppuVar28,uVar29);
        }
LAB_004c2cbc:
        pvStack_110 = (void *)((long)pvVar9 + uVar29);
      }
      else {
        uVar15 = (long)pvStack_110 - (long)local_118;
        if (uVar29 <= uVar15) {
          if (ppuVar2 != ppuVar28) {
            memmove(local_118,ppuVar28,uVar29);
          }
          goto LAB_004c2cbc;
        }
        if (pvStack_110 != local_118) {
          memmove(local_118,ppuVar28,uVar15);
          pvVar9 = pvStack_110;
        }
        __n = (long)ppuVar2 - (long)((long)ppuVar28 + uVar15);
        if (__n != 0) {
          memmove(pvVar9,(void *)((long)ppuVar28 + uVar15),__n);
        }
        pvStack_110 = (void *)((long)pvVar9 + __n);
      }
      local_f8 = *(undefined1 *)(pppuVar14 + 7);
      local_100 = pppuVar14[6];
      local_e8 = *(char *)(pppuVar14 + 9);
      uStack_ec = *(uint *)((long)pppuVar14 + 0x44);
      if (local_e8 != '\0') {
        uStack_ec = param_3;
      }
      FUN_004c5584(&local_e0,pppuVar14[10],pppuVar14[0xb],
                   (long)pppuVar14[0xb] - (long)pppuVar14[10] >> 3);
      local_c0 = pppuVar14[0xe];
      ppuStack_c8 = pppuVar14[0xd];
      ppuStack_b0 = pppuVar14[0x10];
      ppuStack_b8 = pppuVar14[0xf];
      FUN_004c56b0(&local_a8,pppuVar14[0x11],pppuVar14[0x12],
                   (long)pppuVar14[0x12] - (long)pppuVar14[0x11]);
    }
  }
  pppuVar14 = (undefined8 ***)plVar21[4];
  pppuVar31 = (undefined8 ***)plVar21[3];
LAB_004c3640:
  lVar24 = ((long)pppuVar14 - (long)pppuVar31 >> 3) * -0x2c8590b21642c859;
  goto LAB_004c35c0;
}


// ===== 004c3670  HBFont::onShapeText =====

/* HBFont::onShapeText(rive::Span<unsigned int const>, rive::Span<rive::TextRun const>, int) const
    */

void HBFont::onShapeText(long *param_1,long *param_2,long param_3,ulong param_4,long param_5,
                        ulong param_6,int param_7)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  long lVar6;
  int iVar7;
  int iVar8;
  void *__ptr;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  float *pfVar21;
  short *psVar22;
  short *psVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  long *plVar28;
  undefined8 *puVar29;
  size_t __size;
  undefined2 uVar30;
  uint uVar31;
  long *plVar32;
  ulong uVar33;
  long *plVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  undefined4 uVar42;
  undefined8 uVar43;
  uint local_1c8;
  undefined8 *local_198;
  long *local_168;
  long *local_160;
  long *local_158 [3];
  short *local_140;
  ulong local_138;
  void *local_130;
  void *local_120;
  void *local_110;
  void *local_100;
  void *local_f0;
  void *local_d8;
  undefined8 *local_c8;
  ulong local_c0;
  undefined8 *local_b8;
  undefined4 local_b0 [2];
  long local_a8;
  ulong uStack_a0;
  long local_98;
  long lStack_90;
  long *local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  local_98 = 0;
  lStack_90 = 0;
  local_88 = (long *)0x0;
  local_b0[0] = 2;
  puVar15 = DAT_00687330;
  local_a8 = param_3;
  uStack_a0 = param_4;
  if (DAT_00687330 == (undefined4 *)0x0) {
    do {
      puVar15 = (undefined4 *)FUN_005661ec();
      if (puVar15 == (undefined4 *)0x0) {
        lVar17 = FUN_003410d0(0,&DAT_00686738,&DAT_00687330);
        puVar15 = &DAT_00686738;
        if (lVar17 == 0) break;
      }
      else {
        lVar17 = FUN_003410d0(0,puVar15,&DAT_00687330);
        if (lVar17 == 0) break;
        if (puVar15 != &DAT_00686738) {
          rive_hb_unicode_funcs_destroy(puVar15);
        }
      }
      puVar15 = DAT_00687330;
    } while (DAT_00687330 == (undefined4 *)0x0);
  }
  __ptr = (void *)SBAlgorithmCreate(local_b0);
  uVar42 = 1;
  if (param_7 != 1) {
    uVar42 = 0xfffffffe;
  }
  uVar2 = 0;
  if (param_7 != 0) {
    uVar2 = uVar42;
  }
  if (param_4 != 0) {
    uVar27 = 0;
    uVar37 = 0;
    uVar36 = 0;
    local_1c8 = 0;
    uVar35 = 0;
    do {
      puVar9 = (undefined8 *)SBAlgorithmCreateParagraph(__ptr,uVar37,0x7fffffff,uVar2);
      uVar18 = puVar9[4];
      lVar17 = puVar9[2];
      uVar3 = *(undefined1 *)(puVar9 + 5);
      if (param_6 == 0) {
        local_198 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)0x0;
      }
      else {
        if (param_6 >> 0x3b != 0) {
LAB_004c4564:
                    /* WARNING: Subroutine does not return */
          FUN_004c5570();
        }
        puVar10 = (undefined8 *)operator_new(param_6 << 5);
        local_198 = puVar10 + param_6 * 4;
      }
      uVar33 = 0;
      uVar37 = uVar18 + uVar37;
      puVar25 = puVar10;
      do {
        uVar24 = (ulong)uVar27;
        if (param_6 <= uVar24) break;
        cVar4 = *(char *)(lVar17 + uVar33);
        iVar7 = (**(code **)(puVar15 + 0xc))
                          (puVar15,*(undefined4 *)(param_3 + (ulong)uVar36 * 4),
                           *(undefined8 *)(puVar15 + 0x18));
        plVar32 = *(long **)(param_5 + uVar24 * 0x20);
        if (plVar32 != (long *)0x0) {
          FUN_00340fb0(1,plVar32 + 1);
        }
        lVar38 = param_5 + uVar24 * 0x20;
        puVar19 = (uint *)(lVar38 + 0x14);
        uVar31 = *puVar19;
        uVar43 = *(undefined8 *)(lVar38 + 8);
        uVar42 = *(undefined4 *)(lVar38 + 0x10);
        uVar30 = *(undefined2 *)(lVar38 + 0x1c);
        if (puVar25 < local_198) {
          if (plVar32 != (long *)0x0) {
            FUN_00340fb0(1,plVar32 + 1);
          }
          *(undefined2 *)((long)puVar25 + 0x1c) = uVar30;
          *puVar25 = plVar32;
          puVar25[1] = uVar43;
          *(undefined4 *)(puVar25 + 2) = uVar42;
          *(uint *)((long)puVar25 + 0x14) = uVar31 - uVar35;
          *(int *)(puVar25 + 3) = iVar7;
          *(char *)((long)puVar25 + 0x1e) = cVar4;
          puVar14 = puVar25;
        }
        else {
          lVar38 = (long)puVar25 - (long)puVar10 >> 5;
          uVar24 = lVar38 + 1;
          if (uVar24 >> 0x3b != 0) goto LAB_004c4564;
          uVar20 = (long)local_198 - (long)puVar10 >> 4;
          if (uVar20 <= uVar24) {
            uVar20 = uVar24;
          }
          if (0x7fffffffffffffdf < (ulong)((long)local_198 - (long)puVar10)) {
            uVar20 = 0x7ffffffffffffff;
          }
          if (uVar20 == 0) {
            pvVar12 = (void *)0x0;
          }
          else {
            if (uVar20 >> 0x3b != 0) {
LAB_004c4568:
                    /* WARNING: Subroutine does not return */
              FUN_00324008();
            }
            pvVar12 = operator_new(uVar20 << 5);
          }
          if (plVar32 != (long *)0x0) {
            FUN_00340fb0(1,plVar32 + 1);
          }
          puVar14 = (undefined8 *)((long)pvVar12 + lVar38 * 0x20);
          puVar14[1] = uVar43;
          *puVar14 = plVar32;
          *(undefined4 *)(puVar14 + 2) = uVar42;
          *(uint *)((long)puVar14 + 0x14) = uVar31 - uVar35;
          *(int *)(puVar14 + 3) = iVar7;
          *(undefined2 *)((long)puVar14 + 0x1c) = uVar30;
          *(char *)((long)puVar14 + 0x1e) = cVar4;
          puVar11 = puVar25;
          puVar29 = puVar14;
          puVar13 = puVar14;
          if (puVar25 != puVar10) {
            do {
              puVar26 = puVar11 + -4;
              uVar43 = *puVar26;
              *puVar26 = 0;
              puVar13 = puVar29 + -4;
              *puVar13 = uVar43;
              uVar40 = puVar11[-2];
              uVar43 = puVar11[-3];
              *(undefined8 *)((long)puVar29 + -9) = *(undefined8 *)((long)puVar11 + -9);
              puVar29[-2] = uVar40;
              puVar29[-3] = uVar43;
              puVar11 = puVar26;
              puVar29 = puVar13;
            } while (puVar26 != puVar10);
            do {
              puVar25 = puVar25 + -4;
              plVar28 = (long *)*puVar25;
              if ((plVar28 != (long *)0x0) &&
                 (iVar8 = FUN_00340fe0(0xffffffff,plVar28 + 1), iVar8 == 1)) {
                (**(code **)(*plVar28 + 8))(plVar28);
              }
              puVar11 = puVar10;
            } while (puVar25 != puVar10);
          }
          puVar10 = puVar13;
          local_198 = (undefined8 *)((long)pvVar12 + uVar20 * 0x20);
          if (puVar11 != (undefined8 *)0x0) {
            operator_delete(puVar11);
          }
        }
        puVar25 = puVar14 + 4;
        uVar31 = uVar36 + 1;
        uVar33 = (ulong)((int)uVar33 + 1);
        uVar16 = *puVar19;
        uVar35 = uVar35 + 1;
        if (uVar35 < uVar16) {
          do {
            if (uVar18 <= uVar33) break;
            uVar42 = *(undefined4 *)(param_3 + (ulong)uVar31 * 4);
            iVar8 = (**(code **)(puVar15 + 8))(puVar15,uVar42,*(undefined8 *)(puVar15 + 0x14));
            if (((iVar8 == 0xc) ||
                (iVar8 = (**(code **)(puVar15 + 0xc))
                                   (puVar15,uVar42,*(undefined8 *)(puVar15 + 0x18)),
                iVar8 == 0x5a797979)) || (iVar8 == 0x5a696e68)) {
              iVar8 = iVar7;
            }
            if ((*(char *)(lVar17 + uVar33) != cVar4) || (iVar8 != iVar7)) {
              plVar28 = (long *)puVar25[-4];
              *(uint *)((long)puVar25 + -0xc) = uVar31 - uVar36;
              cVar4 = *(char *)(lVar17 + uVar33);
              if (plVar28 == (long *)0x0) {
                uVar43 = puVar25[-3];
                uVar42 = *(undefined4 *)(puVar25 + -2);
                uVar30 = *(undefined2 *)((long)puVar25 + -4);
                iVar7 = *puVar19 - uVar35;
                if (puVar25 < local_198) goto LAB_004c3b00;
LAB_004c3b30:
                lVar38 = (long)puVar25 - (long)puVar10 >> 5;
                uVar24 = lVar38 + 1;
                if (uVar24 >> 0x3b != 0) goto LAB_004c4564;
                uVar20 = (long)local_198 - (long)puVar10 >> 4;
                if (uVar20 <= uVar24) {
                  uVar20 = uVar24;
                }
                if (0x7fffffffffffffdf < (ulong)((long)local_198 - (long)puVar10)) {
                  uVar20 = 0x7ffffffffffffff;
                }
                if (uVar20 == 0) {
                  pvVar12 = (void *)0x0;
                }
                else {
                  if (uVar20 >> 0x3b != 0) goto LAB_004c4568;
                  pvVar12 = operator_new(uVar20 << 5);
                }
                if (plVar28 != (long *)0x0) {
                  FUN_00340fb0(1,plVar28 + 1);
                }
                local_198 = (undefined8 *)((long)pvVar12 + uVar20 * 0x20);
                puVar14 = (undefined8 *)((long)pvVar12 + lVar38 * 0x20);
                puVar14[1] = uVar43;
                *(undefined4 *)(puVar14 + 2) = uVar42;
                *puVar14 = plVar28;
                *(int *)((long)puVar14 + 0x14) = iVar7;
                *(int *)(puVar14 + 3) = iVar8;
                *(undefined2 *)((long)puVar14 + 0x1c) = uVar30;
                *(char *)((long)puVar14 + 0x1e) = cVar4;
                puVar11 = puVar25;
                puVar29 = puVar14;
                puVar13 = puVar14;
                if (puVar25 != puVar10) {
                  do {
                    puVar26 = puVar11 + -4;
                    uVar43 = *puVar26;
                    *puVar26 = 0;
                    puVar13 = puVar29 + -4;
                    *puVar13 = uVar43;
                    uVar40 = puVar11[-2];
                    uVar43 = puVar11[-3];
                    *(undefined8 *)((long)puVar29 + -9) = *(undefined8 *)((long)puVar11 + -9);
                    puVar29[-2] = uVar40;
                    puVar29[-3] = uVar43;
                    puVar11 = puVar26;
                    puVar29 = puVar13;
                  } while (puVar26 != puVar10);
                  do {
                    puVar25 = puVar25 + -4;
                    plVar34 = (long *)*puVar25;
                    if ((plVar34 != (long *)0x0) &&
                       (iVar7 = FUN_00340fe0(0xffffffff,plVar34 + 1), iVar7 == 1)) {
                      (**(code **)(*plVar34 + 8))(plVar34);
                    }
                  } while (puVar25 != puVar10);
                  bVar1 = puVar10 == (undefined8 *)0x0;
                  puVar25 = puVar10;
                  puVar10 = puVar13;
                  if (bVar1) goto joined_r0x004c3b28;
                }
                operator_delete(puVar25);
                puVar10 = puVar13;
              }
              else {
                FUN_00340fb0(1,plVar28 + 1);
                uVar43 = puVar25[-3];
                uVar42 = *(undefined4 *)(puVar25 + -2);
                uVar30 = *(undefined2 *)((long)puVar25 + -4);
                iVar7 = *puVar19 - uVar35;
                if (local_198 <= puVar25) goto LAB_004c3b30;
                FUN_00340fb0(1,plVar28 + 1);
LAB_004c3b00:
                *(int *)((long)puVar25 + 0x14) = iVar7;
                *(int *)(puVar25 + 3) = iVar8;
                *(undefined2 *)((long)puVar25 + 0x1c) = uVar30;
                *puVar25 = plVar28;
                puVar25[1] = uVar43;
                *(undefined4 *)(puVar25 + 2) = uVar42;
                *(char *)((long)puVar25 + 0x1e) = cVar4;
                puVar14 = puVar25;
              }
joined_r0x004c3b28:
              puVar25 = puVar14 + 4;
              uVar36 = uVar31;
              iVar7 = iVar8;
              if ((plVar28 != (long *)0x0) &&
                 (iVar8 = FUN_00340fe0(0xffffffff,plVar28 + 1), iVar8 == 1)) {
                (**(code **)(*plVar28 + 8))(plVar28);
              }
            }
            uVar35 = uVar35 + 1;
            uVar31 = uVar31 + 1;
            uVar33 = (ulong)((int)uVar33 + 1);
            uVar16 = *puVar19;
          } while (uVar35 < uVar16);
        }
        if (uVar35 == uVar16) {
          uVar27 = uVar27 + 1;
          uVar35 = 0;
        }
        if (uVar18 == uVar33) {
          *(uint *)((long)puVar25 + -0xc) = uVar31 - uVar36;
        }
        if ((plVar32 != (long *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,plVar32 + 1), iVar7 == 1))
        {
          (**(code **)(*plVar32 + 8))(plVar32);
        }
        uVar36 = uVar31;
      } while (uVar18 != uVar33);
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0;
      if ((long)puVar25 - (long)puVar10 == 0) {
        local_b8 = (undefined8 *)0x0;
        puVar14 = local_c8;
      }
      else {
        uVar18 = (long)puVar25 - (long)puVar10 >> 5;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar18;
        puVar14 = puVar10;
        puVar11 = (undefined8 *)0x0;
        if ((SUB168(auVar5 * ZEXT816(0x90),8) == 0) &&
           (puVar11 = (undefined8 *)malloc(uVar18 * 0x90), local_c8 = puVar11,
           puVar11 != (undefined8 *)0x0)) {
          puVar29 = puVar11;
          local_c0 = uVar18;
          do {
            *puVar29 = 0;
            pvVar12 = malloc(4);
            puVar29[10] = 0;
            puVar29[9] = 0;
            puVar29[4] = 0;
            puVar29[3] = 0;
            puVar29[6] = 0;
            puVar29[5] = 0;
            puVar29[8] = 0;
            puVar29[7] = 0;
            puVar29[9] = pvVar12;
            if (pvVar12 != (void *)0x0) {
              puVar29[10] = 1;
            }
            puVar29[0x10] = 0;
            puVar29[0x11] = 0;
            puVar29[0xc] = 0;
            puVar29[0xb] = 0;
            puVar29[0xe] = 0;
            puVar29[0xd] = 0;
            puVar29 = puVar29 + 0x12;
          } while (puVar29 < puVar11 + uVar18 * 0x12);
        }
        do {
          local_b8 = puVar11;
          FUN_004c47f4(local_158,param_3 + (ulong)local_1c8 * 4,puVar14,local_1c8);
          iVar7 = *(int *)((long)puVar14 + 0x14);
          uVar18 = local_138;
          if ((((*(long *)PTR_gFallbackProc_0067cb60 != 0) &&
               (*PTR_gFallbackProcEnabled_0067d798 != '\0')) &&
              (uVar33 = (**(code **)(*param_2 + 0x60))(param_2), uVar18 = local_138,
              (uVar33 & 1) == 0)) && (local_138 != 0)) {
            uVar33 = 0;
            do {
              if (local_140[uVar33] != 0) {
                uVar31 = *(uint *)((long)local_130 + uVar33 * 4);
                uVar24 = (ulong)(uVar31 + 1);
                if (((uVar24 < param_4) && (*(int *)(param_3 + uVar24 * 4) == 0xfe0f)) &&
                   ((**(code **)PTR_gFallbackProc_0067cb60)
                              (&local_160,*(undefined4 *)(param_3 + (ulong)uVar31 * 4),0,param_2),
                   uVar18 = local_138, local_160 != (long *)0x0)) {
                  uVar18 = (**(code **)(*local_160 + 0x60))();
                  plVar32 = local_160;
                  if ((uVar18 & 1) != 0) {
                    local_140[uVar33] = 0;
                  }
                  uVar18 = local_138;
                  if ((local_160 != (long *)0x0) &&
                     (iVar8 = FUN_00340fe0(0xffffffff,local_160 + 1), uVar18 = local_138, iVar8 == 1
                     )) {
                    (**(code **)(*plVar32 + 8))(plVar32);
                    uVar18 = local_138;
                  }
                }
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 < uVar18);
          }
          puVar29 = local_b8;
          puVar11 = local_c8;
          psVar23 = local_140;
          if (uVar18 != 0) {
            lVar17 = uVar18 << 1;
            psVar22 = local_140;
            do {
              psVar23 = psVar22;
              if (*psVar22 == 0) break;
              lVar17 = lVar17 + -2;
              psVar22 = psVar22 + 1;
              psVar23 = local_140 + uVar18;
            } while (lVar17 != 0);
          }
          if (((*(code **)PTR_gFallbackProc_0067cb60 == (code *)0x0) ||
              (psVar23 == local_140 + uVar18)) || (*PTR_gFallbackProcEnabled_0067d798 == '\0')) {
            if (uVar18 != 0) {
              if (local_b8 == local_c8 + local_c0 * 0x12) {
                uVar18 = local_c0 * 2;
                if (uVar18 < 2) {
                  uVar18 = 1;
                }
                puVar13 = local_c8;
                uVar33 = local_c0;
                if (local_c0 != uVar18) {
                  FUN_004c53c0(local_c8 + uVar18 * 0x12,local_b8);
                  puVar13 = (undefined8 *)realloc(local_c8,uVar18 * 0x90);
                  local_c8 = puVar13;
                  uVar33 = uVar18;
                  if ((long)local_c0 < (long)uVar18) {
                    puVar26 = puVar13 + local_c0 * 0x12;
                    do {
                      *puVar26 = 0;
                      pvVar12 = malloc(4);
                      puVar26[10] = 0;
                      puVar26[9] = 0;
                      puVar26[4] = 0;
                      puVar26[3] = 0;
                      puVar26[6] = 0;
                      puVar26[5] = 0;
                      puVar26[8] = 0;
                      puVar26[7] = 0;
                      puVar26[9] = pvVar12;
                      if (pvVar12 != (void *)0x0) {
                        puVar26[10] = 1;
                      }
                      puVar26[0x10] = 0;
                      puVar26[0x11] = 0;
                      puVar26[0xc] = 0;
                      puVar26[0xb] = 0;
                      puVar26[0xe] = 0;
                      puVar26[0xd] = 0;
                      puVar26 = puVar26 + 0x12;
                    } while (puVar26 < puVar13 + uVar18 * 0x12);
                  }
                }
                local_c0 = uVar33;
                local_b8 = (undefined8 *)((long)puVar13 + ((long)puVar29 - (long)puVar11));
              }
              puVar11 = local_b8;
              local_b8 = local_b8 + 0x12;
              FUN_004c4d64(puVar11,local_158);
            }
          }
          else {
            (**(code **)PTR_gFallbackProc_0067cb60)
                      (&local_160,
                       *(undefined4 *)
                        (param_3 +
                        (ulong)*(uint *)((long)local_130 + ((long)psVar23 - (long)local_140) * 2) *
                        4),0,param_2);
            puVar29 = local_b8;
            puVar11 = local_c8;
            plVar32 = local_160;
            if (local_160 == (long *)0x0) {
              if (local_138 == 0) goto LAB_004c424c;
              if (local_b8 == local_c8 + local_c0 * 0x12) {
                uVar18 = local_c0 * 2;
                if (uVar18 < 2) {
                  uVar18 = 1;
                }
                puVar13 = local_c8;
                uVar33 = local_c0;
                if (local_c0 != uVar18) {
                  FUN_004c53c0(local_c8 + uVar18 * 0x12,local_b8);
                  puVar13 = (undefined8 *)realloc(local_c8,uVar18 * 0x90);
                  local_c8 = puVar13;
                  uVar33 = uVar18;
                  if ((long)local_c0 < (long)uVar18) {
                    puVar26 = puVar13 + local_c0 * 0x12;
                    do {
                      *puVar26 = 0;
                      pvVar12 = malloc(4);
                      puVar26[10] = 0;
                      puVar26[9] = 0;
                      puVar26[4] = 0;
                      puVar26[3] = 0;
                      puVar26[6] = 0;
                      puVar26[5] = 0;
                      puVar26[8] = 0;
                      puVar26[7] = 0;
                      puVar26[9] = pvVar12;
                      if (pvVar12 != (void *)0x0) {
                        puVar26[10] = 1;
                      }
                      puVar26[0x10] = 0;
                      puVar26[0x11] = 0;
                      puVar26[0xc] = 0;
                      puVar26[0xb] = 0;
                      puVar26[0xe] = 0;
                      puVar26[0xd] = 0;
                      puVar26 = puVar26 + 0x12;
                    } while (puVar26 < puVar13 + uVar18 * 0x12);
                  }
                }
                local_c0 = uVar33;
                local_b8 = (undefined8 *)((long)puVar13 + ((long)puVar29 - (long)puVar11));
              }
              puVar11 = local_b8;
              local_b8 = local_b8 + 0x12;
              FUN_004c4d64(puVar11,local_158);
              plVar28 = local_160;
            }
            else {
              FUN_00340fb0(1,local_160 + 1);
              local_168 = plVar32;
              FUN_004c4e74(&local_168,&local_c8,param_3,local_158,puVar14,1);
              iVar8 = FUN_00340fe0(0xffffffff,plVar32 + 1);
              plVar28 = local_160;
              if (iVar8 == 1) {
                (**(code **)(*plVar32 + 8))(plVar32);
                plVar28 = local_160;
              }
            }
            local_160 = plVar28;
            if ((plVar28 != (long *)0x0) &&
               (iVar8 = FUN_00340fe0(0xffffffff,plVar28 + 1), iVar8 == 1)) {
              (**(code **)(*plVar28 + 8))(plVar28);
            }
          }
LAB_004c424c:
          free(local_d8);
          free(local_f0);
          free(local_100);
          free(local_110);
          free(local_120);
          free(local_130);
          free(local_140);
          plVar32 = local_158[0];
          if ((local_158[0] != (long *)0x0) &&
             (iVar8 = FUN_00340fe0(0xffffffff,local_158[0] + 1), iVar8 == 1)) {
            (**(code **)(*plVar32 + 8))(plVar32);
          }
          puVar14 = puVar14 + 4;
          local_1c8 = iVar7 + local_1c8;
          puVar11 = local_b8;
        } while (puVar14 != puVar25);
        puVar14 = local_c8;
        if (local_c8 != local_b8) {
          fVar39 = 0.0;
          puVar11 = local_c8;
          do {
            if (puVar11[10] != 0) {
              lVar17 = puVar11[10] << 2;
              pfVar21 = (float *)puVar11[9];
              do {
                fVar41 = *pfVar21;
                *pfVar21 = fVar39;
                lVar17 = lVar17 + -4;
                fVar39 = fVar39 + fVar41;
                pfVar21 = pfVar21 + 1;
              } while (lVar17 != 0);
            }
            puVar11 = puVar11 + 0x12;
            puVar14 = local_b8;
          } while (puVar11 != local_b8);
        }
      }
      __size = (long)puVar14 - (long)local_c8;
      uVar18 = ((long)__size >> 4) * -0x71c71c71c71c71c7;
      puVar14 = local_c8;
      if (local_c0 != uVar18) {
        FUN_004c53c0((long)local_c8 + __size,local_c8 + local_c0 * 0x12);
        puVar14 = (undefined8 *)realloc(local_c8,__size);
        if ((long)local_c0 < (long)uVar18) {
          puVar11 = puVar14 + local_c0 * 0x12;
          do {
            *puVar11 = 0;
            pvVar12 = malloc(4);
            puVar11[10] = 0;
            puVar11[9] = 0;
            puVar11[4] = 0;
            puVar11[3] = 0;
            puVar11[6] = 0;
            puVar11[5] = 0;
            puVar11[8] = 0;
            puVar11[7] = 0;
            puVar11[9] = pvVar12;
            if (pvVar12 != (void *)0x0) {
              puVar11[10] = 1;
            }
            puVar11[0x10] = 0;
            puVar11[0x11] = 0;
            puVar11[0xc] = 0;
            puVar11[0xb] = 0;
            puVar11[0xe] = 0;
            puVar11[0xd] = 0;
            puVar11 = puVar11 + 0x12;
          } while (puVar11 < (undefined8 *)((long)puVar14 + __size));
        }
      }
      plVar32 = local_88;
      lVar17 = local_98;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0;
      if (local_88 == (long *)(local_98 + lStack_90 * 0x18)) {
        uVar33 = lStack_90 * 2;
        if (uVar33 < 2) {
          uVar33 = 1;
        }
        FUN_004c5468(&local_98,uVar33);
        plVar32 = (long *)((long)plVar32 + (local_98 - lVar17));
      }
      local_88 = plVar32 + 3;
      FUN_004c53c0(*plVar32,*plVar32 + plVar32[1] * 0x90);
      free((void *)*plVar32);
      *plVar32 = (long)puVar14;
      plVar32[1] = uVar18;
      *(undefined1 *)(plVar32 + 2) = uVar3;
      if ((puVar9 != (undefined8 *)0x0) &&
         (lVar17 = puVar9[6], puVar9[6] = lVar17 + -1, lVar17 + -1 == 0)) {
        pvVar12 = (void *)*puVar9;
        if ((pvVar12 != (void *)0x0) &&
           (lVar17 = *(long *)((long)pvVar12 + 0x20) + -1, *(long *)((long)pvVar12 + 0x20) = lVar17,
           lVar17 == 0)) {
          free(pvVar12);
        }
        free(puVar9);
      }
      FUN_004c53c0(local_c8,local_c8 + local_c0 * 0x12);
      free(local_c8);
      puVar9 = puVar25;
      if (puVar10 != (undefined8 *)0x0) {
        while (puVar25 != puVar10) {
          puVar25 = puVar25 + -4;
          plVar32 = (long *)*puVar25;
          puVar9 = puVar10;
          if ((plVar32 != (long *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,plVar32 + 1), iVar7 == 1)
             ) {
            (**(code **)(*plVar32 + 8))(plVar32);
          }
        }
        operator_delete(puVar9);
      }
    } while (uVar37 < param_4);
  }
  if ((__ptr != (void *)0x0) &&
     (lVar17 = *(long *)((long)__ptr + 0x20) + -1, *(long *)((long)__ptr + 0x20) = lVar17,
     lVar17 == 0)) {
    free(__ptr);
  }
  FUN_004c5468(&local_98,((long)local_88 - local_98 >> 3) * -0x5555555555555555);
  *param_1 = local_98;
  param_1[1] = lStack_90;
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c45d8  HBFont::shapeFallbackRun =====

/* HBFont::shapeFallbackRun(rive::SimpleArrayBuilder<rive::GlyphRun>&, unsigned int const*, unsigned
   int, rive::TextRun const&, rive::TextRun const&, unsigned int) */

void __thiscall
HBFont::shapeFallbackRun
          (HBFont *this,SimpleArrayBuilder *param_1,uint *param_2,uint param_3,TextRun *param_4,
          TextRun *param_5,uint param_6)

{
  long lVar1;
  HBFont *pHVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  long lVar6;
  HBFont *local_f8;
  HBFont *local_f0;
  long *local_e8 [3];
  short *local_d0;
  long local_c8;
  void *local_c0;
  void *local_b0;
  void *local_a0;
  void *local_90;
  void *local_80;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_004c47f4(local_e8,param_2 + param_3,param_4);
  if (local_c8 != 0) {
    lVar6 = local_c8 << 1;
    psVar4 = local_d0;
    do {
      psVar5 = psVar4;
      if (*psVar4 == 0) break;
      lVar6 = lVar6 + -2;
      psVar4 = psVar4 + 1;
      psVar5 = local_d0 + local_c8;
    } while (lVar6 != 0);
    if (psVar5 == local_d0 + local_c8) {
      FUN_004c4c64(param_1);
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + 0x90;
      FUN_004c4d64(lVar6,local_e8);
    }
    else {
      (**(code **)PTR_gFallbackProc_0067cb60)
                (&local_f0,param_2[*(uint *)((long)local_c0 + ((long)psVar5 - (long)local_d0) * 2)],
                 param_6,this);
      pHVar2 = local_f0;
      if ((local_f0 == (HBFont *)0x0) || (local_f0 == this)) {
        if (local_c8 != 0) {
          FUN_004c4c64(param_1);
          lVar6 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar6 + 0x90;
          FUN_004c4d64(lVar6,local_e8);
        }
      }
      else {
        FUN_00340fb0(1,local_f0 + 8);
        local_f8 = pHVar2;
        FUN_004c4e74(&local_f8,param_1,param_2,local_e8,param_4,param_6 + 1);
        iVar3 = FUN_00340fe0(0xffffffff,pHVar2 + 8);
        if (iVar3 == 1) {
          (**(code **)(*(long *)pHVar2 + 8))(pHVar2);
        }
      }
      if ((local_f0 != (HBFont *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_f0 + 8), iVar3 == 1)
         ) {
        (**(code **)(*(long *)local_f0 + 8))(local_f0);
      }
    }
  }
  free(local_68);
  free(local_80);
  free(local_90);
  free(local_a0);
  free(local_b0);
  free(local_c0);
  free(local_d0);
  if ((local_e8[0] != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_e8[0] + 1), iVar3 == 1)
     ) {
    (**(code **)(*local_e8[0] + 8))(local_e8[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c47f4  FUN_004c47f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c47f4(long *param_1,undefined8 param_2,long *param_3,int param_4)

{
  float *pfVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  long lVar24;
  undefined4 uVar25;
  
  puVar9 = (undefined4 *)calloc(1,0xe8);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)&DAT_00686190;
  }
  else {
    *puVar9 = 1;
    uVar6 = DAT_0024e730;
    *(undefined1 *)(puVar9 + 1) = 1;
    *(undefined8 *)(puVar9 + 2) = 0;
    *(undefined8 *)(puVar9 + 0x37) = uVar6;
    rive_hb_unicode_funcs_destroy(0);
    piVar14 = DAT_00687330;
    if (DAT_00687330 == (int *)0x0) {
      do {
        piVar14 = (int *)FUN_005661ec();
        if (piVar14 == (int *)0x0) {
          lVar11 = FUN_003410d0(0,&DAT_00686738,&DAT_00687330);
          piVar14 = &DAT_00686738;
          if (lVar11 == 0) break;
        }
        else {
          lVar11 = FUN_003410d0(0,piVar14,&DAT_00687330);
          if (lVar11 == 0) break;
          if (piVar14 != &DAT_00686738) {
            rive_hb_unicode_funcs_destroy(piVar14);
          }
        }
        piVar14 = DAT_00687330;
      } while (DAT_00687330 == (int *)0x0);
    }
    if (*piVar14 != 0) {
      FUN_00340fe0(1,piVar14);
    }
    *(int **)(puVar9 + 4) = piVar14;
    uVar7 = _UNK_0024de28;
    uVar6 = _DAT_0024de20;
    puVar9[0xc] = 0;
    *(undefined2 *)(puVar9 + 0x16) = 1;
    *(undefined8 *)(puVar9 + 8) = uVar7;
    *(undefined8 *)(puVar9 + 6) = uVar6;
    *(undefined8 *)(puVar9 + 0x1e) = *(undefined8 *)(puVar9 + 0x1c);
    *(undefined8 *)(puVar9 + 10) = 0xffffffff00000000;
    uVar6 = DAT_0024e700;
    *(undefined1 *)((long)puVar9 + 0x5a) = 0;
    *(undefined8 *)(puVar9 + 0x10) = 0;
    *(undefined8 *)(puVar9 + 0xe) = 0;
    *(undefined8 *)(puVar9 + 0x14) = 0;
    *(undefined8 *)(puVar9 + 0x12) = 0;
    *(undefined8 *)(puVar9 + 0x18) = 0;
    puVar9[0x17] = 0;
    *(undefined8 *)(puVar9 + 0x24) = 0;
    *(undefined8 *)(puVar9 + 0x22) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x26) = 0;
    *(undefined8 *)(puVar9 + 0x2c) = 0;
    *(undefined8 *)(puVar9 + 0x2a) = 0;
    *(undefined2 *)(puVar9 + 0x34) = 0;
    *(undefined8 *)(puVar9 + 0x35) = uVar6;
  }
  rive_hb_buffer_add_utf32
            (puVar9,param_2,*(undefined4 *)((long)param_3 + 0x14),0,
             *(undefined4 *)((long)param_3 + 0x14));
  if ((*(byte *)(puVar9 + 1) & 1) != 0) {
    uVar25 = 4;
    if ((*(byte *)((long)param_3 + 0x1e) & 1) != 0) {
      uVar25 = 5;
    }
    puVar9[0xe] = uVar25;
  }
  if ((*(byte *)(puVar9 + 1) & 1) != 0) {
    puVar9[0xf] = (int)param_3[3];
  }
  if (DAT_00687048 == 0) {
    lVar11 = FUN_00501dec(&DAT_00249bdf);
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(lVar11 + 8);
    }
    FUN_003410d0(0,lVar11,&DAT_00687048);
    bVar3 = *(byte *)(puVar9 + 1);
  }
  else {
    bVar3 = *(byte *)(puVar9 + 1);
    lVar11 = DAT_00687048;
  }
  if ((bVar3 & 1) != 0) {
    *(long *)(puVar9 + 0x10) = lVar11;
  }
  lVar11 = *param_3;
  rive_hb_shape_full(*(undefined8 *)(lVar11 + 0x18),puVar9,*(long *)(lVar11 + 0x20),
                     (ulong)(*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20)) >> 4,0);
  uVar13 = puVar9[0x18];
  uVar20 = (ulong)uVar13;
  lVar11 = *(long *)(puVar9 + 0x1c);
  if (*(char *)((long)puVar9 + 0x5a) == '\0') {
    puVar9[0x19] = 0;
    *(undefined2 *)((long)puVar9 + 0x59) = 0x100;
    *(long *)(puVar9 + 0x1e) = lVar11;
    if (uVar13 * 0x14 != 0) {
      memset(*(void **)(puVar9 + 0x20),0,(ulong)(uVar13 * 0x14));
    }
  }
  lVar21 = *(long *)(puVar9 + 0x20);
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (uVar13 == 0) {
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
  }
  else {
    pvVar10 = malloc(uVar20 << 1);
    param_1[3] = (long)pvVar10;
    if (pvVar10 != (void *)0x0) {
      param_1[4] = uVar20;
    }
    param_1[6] = 0;
    pvVar10 = malloc(uVar20 << 2);
    param_1[5] = (long)pvVar10;
    if (pvVar10 != (void *)0x0) {
      param_1[6] = uVar20;
    }
    param_1[8] = 0;
    pvVar10 = malloc(uVar20 << 2);
    param_1[7] = (long)pvVar10;
    if (pvVar10 != (void *)0x0) {
      param_1[8] = uVar20;
    }
  }
  param_1[10] = 0;
  pvVar10 = malloc((uVar20 + 1) * 4);
  param_1[9] = (long)pvVar10;
  if (pvVar10 != (void *)0x0) {
    param_1[10] = uVar20 + 1;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (uVar20 - 1 < 0x1fffffffffffffff) {
    pvVar10 = malloc(uVar20 * 8);
    param_1[0xb] = (long)pvVar10;
    if (pvVar10 != (void *)0x0) {
      param_1[0xc] = uVar20;
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (param_1 != param_3) {
    lVar22 = *param_3;
    if (lVar22 == 0) {
      *param_1 = 0;
    }
    else {
      FUN_00340fb0(1,lVar22 + 8);
      plVar19 = (long *)*param_1;
      *param_1 = lVar22;
      if ((plVar19 != (long *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,plVar19 + 1), iVar8 == 1)) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    }
  }
  lVar24 = param_3[1];
  lVar22 = param_3[2];
  uVar5 = *(undefined2 *)((long)param_3 + 0x1c);
  uVar4 = *(undefined1 *)((long)param_3 + 0x1e);
  param_1[1] = lVar24;
  *(int *)(param_1 + 2) = (int)lVar22;
  *(undefined2 *)(param_1 + 0xf) = uVar5;
  *(undefined1 *)((long)param_1 + 0x7a) = uVar4;
  if (uVar13 == 0) {
    uVar20 = 0;
  }
  else {
    lVar12 = 0;
    lVar22 = 0;
    fVar23 = (float)lVar24 * 0.00048828125;
    do {
      uVar13 = uVar13 - 1;
      lVar18 = lVar22 * 4;
      lVar17 = param_1[5];
      lVar24 = param_3[2];
      uVar2 = (uint)lVar22;
      if ((*(byte *)((long)param_3 + 0x1e) & 1) != 0) {
        uVar2 = uVar13;
      }
      puVar15 = (undefined4 *)(lVar11 + (ulong)uVar2 * 0x14);
      piVar14 = (int *)(lVar21 + (ulong)uVar2 * 0x14);
      iVar8 = puVar15[2];
      *(short *)(param_1[3] + lVar22 * 2) = (short)*puVar15;
      lVar16 = param_1[7];
      lVar22 = lVar22 + 1;
      *(int *)(lVar17 + lVar18) = iVar8 + param_4;
      uVar25 = NEON_fmadd((float)*piVar14,fVar23,(int)lVar24);
      *(undefined4 *)(param_1[9] + lVar18) = uVar25;
      iVar8 = piVar14[3];
      *(undefined4 *)(lVar16 + lVar18) = uVar25;
      pfVar1 = (float *)(param_1[0xb] + lVar12);
      lVar12 = lVar12 + 8;
      *pfVar1 = fVar23 * (float)piVar14[2];
      pfVar1[1] = fVar23 * (float)-iVar8;
    } while (uVar20 * 8 - lVar12 != 0);
  }
  *(undefined4 *)(param_1[9] + uVar20 * 4) = 0;
  rive_hb_buffer_destroy(puVar9);
  return;
}


// ===== 004c4c64  FUN_004c4c64 =====

void FUN_004c4c64(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  size_t __size;
  long lVar5;
  undefined8 *puVar6;
  
  pvVar2 = (void *)*param_1;
  uVar1 = param_1[1];
  if ((void *)param_1[2] == (void *)((long)pvVar2 + uVar1 * 0x90)) {
    uVar4 = uVar1 * 2;
    lVar5 = param_1[2] - (long)pvVar2;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    if (uVar1 != uVar4) {
      __size = uVar4 * 0x90;
      FUN_004c53c0((void *)((long)pvVar2 + __size));
      pvVar2 = realloc((void *)*param_1,__size);
      *param_1 = (long)pvVar2;
      if (param_1[1] < (long)uVar4) {
        puVar6 = (undefined8 *)((long)pvVar2 + param_1[1] * 0x90);
        do {
          *puVar6 = 0;
          pvVar3 = malloc(4);
          puVar6[10] = 0;
          puVar6[9] = 0;
          puVar6[4] = 0;
          puVar6[3] = 0;
          puVar6[6] = 0;
          puVar6[5] = 0;
          puVar6[8] = 0;
          puVar6[7] = 0;
          puVar6[9] = pvVar3;
          if (pvVar3 != (void *)0x0) {
            puVar6[10] = 1;
          }
          puVar6[0x10] = 0;
          puVar6[0x11] = 0;
          puVar6[0xc] = 0;
          puVar6[0xb] = 0;
          puVar6[0xe] = 0;
          puVar6[0xd] = 0;
          puVar6 = puVar6 + 0x12;
        } while (puVar6 < (undefined8 *)((long)pvVar2 + __size));
      }
      param_1[1] = uVar4;
    }
    param_1[2] = (long)pvVar2 + lVar5;
  }
  return;
}


// ===== 004c4d64  FUN_004c4d64 =====

undefined8 * FUN_004c4d64(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  uVar3 = *param_2;
  *param_2 = 0;
  plVar4 = (long *)*param_1;
  *param_1 = uVar3;
  if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar2 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar3;
  free((void *)param_1[3]);
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  param_2[3] = 0;
  param_2[4] = 0;
  free((void *)param_1[5]);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  param_2[5] = 0;
  param_2[6] = 0;
  free((void *)param_1[7]);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  param_2[7] = 0;
  param_2[8] = 0;
  free((void *)param_1[9]);
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  param_2[9] = 0;
  param_2[10] = 0;
  free((void *)param_1[0xb]);
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar3;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  free((void *)param_1[0xd]);
  uVar3 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar3;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar1 = *(undefined2 *)(param_2 + 0xf);
  *(undefined1 *)((long)param_1 + 0x7a) = *(undefined1 *)((long)param_2 + 0x7a);
  *(undefined2 *)(param_1 + 0xf) = uVar1;
  free((void *)param_1[0x10]);
  uVar3 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return param_1;
}


// ===== 004c4e74  FUN_004c4e74 =====

void FUN_004c4e74(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined4 param_6)

{
  long *plVar1;
  short *__src;
  long lVar2;
  long *plVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  int *piVar7;
  size_t __size;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_130;
  void *local_128;
  void *local_120;
  void *local_118;
  void *local_110;
  ulong local_108;
  long *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  int local_ec;
  undefined8 local_e8;
  ulong local_e0;
  void *local_d8;
  ulong local_d0;
  void *local_c8;
  ulong local_c0;
  void *local_b8;
  long local_b0;
  void *local_a8;
  ulong local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined1 local_86;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar11 = param_4[4];
  if (uVar11 != 0) {
    uVar13 = 0;
    do {
      lVar6 = param_4[3];
      uVar14 = uVar13 + 1;
      __src = (short *)(lVar6 + uVar13 * 2);
      if (*__src == 0) {
        if (uVar11 <= uVar14) {
LAB_004c4f9c:
          piVar7 = (int *)param_4[5];
          iVar4 = piVar7[uVar13];
          if (uVar14 == uVar11) goto LAB_004c4fac;
          iVar8 = piVar7[uVar14] - iVar4;
        }
        else {
          do {
            if (*(short *)(lVar6 + uVar14 * 2) != 0) goto LAB_004c4f9c;
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
          piVar7 = (int *)param_4[5];
          iVar4 = piVar7[uVar13];
LAB_004c4fac:
          iVar8 = (*(int *)(param_5 + 0x14) - iVar4) + *piVar7;
          uVar14 = uVar11;
        }
        plVar9 = (long *)*param_1;
        FUN_00340fb0(1,plVar9 + 1);
        pvVar5 = local_e8;
        local_f8 = param_4[1];
        local_f0 = *(undefined4 *)(param_5 + 0x10);
        local_e8._7_1_ = SUB81(pvVar5,7);
        local_e8._0_7_ =
             CONCAT16(*(undefined1 *)((long)param_4 + 0x7a),
                      CONCAT24(*(undefined2 *)(param_4 + 0xf),*(undefined4 *)(param_5 + 0x18)));
        local_100 = plVar9;
        local_ec = iVar8;
        (**(code **)(*(long *)*param_1 + 0x80))
                  ((long *)*param_1,param_2,param_3,iVar4,&local_100,param_5,param_6);
        uVar13 = uVar14;
        plVar9 = local_100;
      }
      else {
        uVar12 = uVar14;
        if (uVar11 > uVar14) {
          do {
            uVar12 = uVar14;
            if (*(short *)(lVar6 + uVar14 * 2) == 0) break;
            uVar14 = uVar14 + 1;
            uVar12 = uVar11;
          } while (uVar11 != uVar14);
        }
        uVar14 = uVar12 - uVar13;
        if ((long)uVar14 < 1) {
          uVar15 = 0;
          local_110 = (void *)0x0;
          local_118 = (void *)0x0;
          local_130 = 0;
LAB_004c50b0:
          local_120 = (void *)0x0;
          local_108 = 0;
LAB_004c50b8:
          if (uVar14 < 0x3fffffffffffffff) {
            lVar6 = uVar14 + 1;
            lVar10 = param_4[9];
            local_128 = malloc(lVar6 * 4);
            if (local_128 == (void *)0x0) goto LAB_004c50f4;
            memcpy(local_128,(void *)(lVar10 + uVar13 * 4),lVar6 * 4);
          }
          else {
LAB_004c50f4:
            local_128 = (void *)0x0;
            lVar6 = 0;
          }
          if (0x1ffffffffffffffe < uVar14 - 1) goto LAB_004c5138;
          lVar10 = param_4[0xb];
          pvVar5 = malloc(uVar14 * 8);
          if (pvVar5 == (void *)0x0) goto LAB_004c513c;
          memcpy(pvVar5,(void *)(lVar10 + uVar13 * 8),uVar14 * 8);
        }
        else {
          local_110 = malloc(uVar14 * 2);
          if (local_110 == (void *)0x0) {
            uVar15 = 0;
          }
          else {
            memcpy(local_110,__src,uVar14 * 2);
            uVar15 = uVar14;
          }
          if (uVar14 >> 0x3e == 0) {
            __size = uVar14 * 4;
            lVar6 = param_4[5];
            local_118 = malloc(__size);
            if (local_118 == (void *)0x0) {
              local_130 = 0;
            }
            else {
              memcpy(local_118,(void *)(lVar6 + uVar13 * 4),__size);
              local_130 = uVar14;
            }
            lVar6 = param_4[7];
            local_120 = malloc(__size);
            if (local_120 == (void *)0x0) goto LAB_004c50b0;
            memcpy(local_120,(void *)(lVar6 + uVar13 * 4),__size);
            local_108 = uVar14;
            goto LAB_004c50b8;
          }
          local_120 = (void *)0x0;
          local_118 = (void *)0x0;
          lVar6 = 0;
          local_130 = 0;
          local_128 = (void *)0x0;
          local_108 = 0;
LAB_004c5138:
          pvVar5 = (void *)0x0;
LAB_004c513c:
          uVar14 = 0;
        }
        local_100 = (long *)0x0;
        local_e8 = (void *)0x0;
        local_e0 = 0;
        if (0 < (long)uVar15) {
          local_e8 = malloc(uVar15 << 1);
          if (local_e8 != (void *)0x0) {
            local_e0 = uVar15;
            memcpy(local_e8,local_110,uVar15 << 1);
          }
        }
        local_d8 = (void *)0x0;
        local_d0 = 0;
        if (local_130 - 1 < 0x3fffffffffffffff) {
          local_d8 = malloc(local_130 << 2);
          if (local_d8 != (void *)0x0) {
            local_d0 = local_130;
            memcpy(local_d8,local_118,local_130 << 2);
          }
        }
        local_c8 = (void *)0x0;
        local_c0 = 0;
        if (local_108 - 1 < 0x3fffffffffffffff) {
          local_c8 = malloc(local_108 << 2);
          if (local_c8 != (void *)0x0) {
            local_c0 = local_108;
            memcpy(local_c8,local_120,local_108 << 2);
          }
        }
        local_b8 = (void *)0x0;
        local_b0 = 0;
        if (lVar6 - 1U < 0x3fffffffffffffff) {
          local_b8 = malloc(lVar6 << 2);
          if (local_b8 != (void *)0x0) {
            local_b0 = lVar6;
            memcpy(local_b8,local_128,lVar6 << 2);
          }
        }
        local_a8 = (void *)0x0;
        local_a0 = 0;
        if (uVar14 - 1 < 0x1fffffffffffffff) {
          local_a8 = malloc(uVar14 << 3);
          if (local_a8 != (void *)0x0) {
            local_a0 = uVar14;
            memcpy(local_a8,pvVar5,uVar14 << 3);
          }
        }
        local_98 = (void *)0x0;
        uStack_90 = 0;
        local_80 = (void *)0x0;
        uStack_78 = 0;
        free(pvVar5);
        free(local_128);
        free(local_120);
        free(local_118);
        free(local_110);
        plVar9 = (long *)*param_4;
        if (plVar9 != (long *)0x0) {
          FUN_00340fb0(1,plVar9 + 1);
        }
        plVar3 = local_100;
        if ((local_100 != (long *)0x0) &&
           (plVar1 = local_100 + 1, local_100 = plVar9, iVar4 = FUN_00340fe0(0xffffffff,plVar1),
           plVar9 = local_100, iVar4 == 1)) {
          (**(code **)(*plVar3 + 8))(plVar3);
          plVar9 = local_100;
        }
        local_100 = plVar9;
        local_f8 = param_4[1];
        local_f0 = *(undefined4 *)(param_4 + 2);
        local_86 = *(undefined1 *)((long)param_4 + 0x7a);
        *(undefined4 *)((long)local_b8 + local_b0 * 4 + -4) = 0;
        local_88 = *(undefined2 *)(param_4 + 0xf);
        FUN_004c4c64(param_2);
        lVar6 = *(long *)(param_2 + 0x10);
        *(long *)(param_2 + 0x10) = lVar6 + 0x90;
        FUN_004c4d64(lVar6,&local_100);
        free(local_80);
        free(local_98);
        free(local_a8);
        free(local_b8);
        free(local_c8);
        free(local_d8);
        free(local_e8);
        uVar13 = uVar12;
        plVar9 = local_100;
      }
      local_100 = plVar9;
      if ((plVar9 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,plVar9 + 1), iVar4 == 1)) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    } while (uVar13 < uVar11);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c53c0  FUN_004c53c0 =====

void FUN_004c53c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 < param_2) {
    do {
      free((void *)param_1[0x10]);
      free((void *)param_1[0xd]);
      free((void *)param_1[0xb]);
      free((void *)param_1[9]);
      free((void *)param_1[7]);
      free((void *)param_1[5]);
      free((void *)param_1[3]);
      plVar2 = (long *)*param_1;
      if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      param_1 = param_1 + 0x12;
    } while (param_1 < param_2);
  }
  return;
}


// ===== 004c5468  FUN_004c5468 =====

void FUN_004c5468(long *param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar4 = param_1[1];
  if (lVar4 != param_2) {
    pvVar3 = (void *)*param_1;
    if (param_2 < lVar4) {
      plVar8 = (long *)((long)pvVar3 + param_2 * 0x18);
      do {
        FUN_004c53c0(*plVar8,*plVar8 + plVar8[1] * 0x90);
        plVar9 = plVar8 + 3;
        free((void *)*plVar8);
        plVar8 = plVar9;
      } while (plVar9 < (long *)((long)pvVar3 + lVar4 * 0x18));
      pvVar3 = (void *)*param_1;
    }
    pvVar3 = realloc(pvVar3,param_2 * 0x18);
    lVar4 = param_1[1];
    *param_1 = (long)pvVar3;
    if (lVar4 < param_2) {
      pvVar2 = (void *)(param_2 * 0x18 + (long)pvVar3);
      lVar6 = lVar4 * 0x18;
      pvVar1 = (void *)((long)pvVar3 + lVar6 + 0x18);
      if (pvVar1 <= pvVar2) {
        pvVar1 = pvVar2;
      }
      lVar7 = (long)pvVar1 + (-0x18 - (long)pvVar3);
      uVar5 = (lVar7 - ((ulong)(lVar7 != lVar6) | lVar4 * 0x18)) / 0x18;
      if (lVar7 != lVar6) {
        uVar5 = uVar5 + 1;
      }
      memset((void *)((long)pvVar3 + lVar6),0,uVar5 * 0x18 + 0x18);
    }
    param_1[1] = param_2;
  }
  return;
}


// ===== 004c5570  FUN_004c5570 =====

void FUN_004c5570(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004c5584  FUN_004c5584 =====

void FUN_004c5584(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *__src;
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  
  uVar5 = param_1[2];
  pvVar7 = (void *)*param_1;
  if (param_4 <= (ulong)((long)(uVar5 - (long)pvVar7) >> 3)) {
    sVar4 = (long)param_1[1] - (long)pvVar7;
    if ((ulong)((long)sVar4 >> 3) < param_4) {
      pvVar2 = (void *)((long)param_2 + sVar4);
      if ((void *)param_1[1] != pvVar7) {
        memmove(pvVar7,param_2,sVar4);
        pvVar7 = (void *)param_1[1];
      }
      lVar3 = -(long)pvVar2;
    }
    else {
      lVar3 = -(long)param_2;
      pvVar2 = param_2;
    }
    sVar4 = param_3 + lVar3;
    if (sVar4 != 0) {
      memmove(pvVar7,pvVar2,sVar4);
    }
LAB_004c5690:
    param_1[1] = (long)pvVar7 + sVar4;
    return;
  }
  lVar3 = param_3;
  if (pvVar7 != (void *)0x0) {
    param_1[1] = pvVar7;
    operator_delete(pvVar7);
    uVar5 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar6 = (long)uVar5 >> 2;
    if ((ulong)((long)uVar5 >> 2) <= param_4) {
      uVar6 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 >> 0x3d == 0) {
      pvVar7 = operator_new(uVar6 * 8);
      sVar4 = param_3 - (long)param_2;
      *param_1 = pvVar7;
      param_1[1] = pvVar7;
      param_1[2] = (void *)((long)pvVar7 + uVar6 * 8);
      if (sVar4 != 0) {
        memcpy(pvVar7,param_2,sVar4);
      }
      goto LAB_004c5690;
    }
  }
  auVar8 = FUN_004c0ff8();
  pvVar2 = auVar8._8_8_;
  puVar1 = auVar8._0_8_;
  uVar5 = puVar1[2];
  pvVar7 = (void *)*puVar1;
  if (uVar5 - (long)pvVar7 < param_4) {
    if (pvVar7 != (void *)0x0) {
      puVar1[1] = pvVar7;
      operator_delete(pvVar7);
      uVar5 = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    if ((long)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c(puVar1);
    }
    uVar6 = uVar5 * 2;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0x3ffffffffffffffe < uVar5) {
      uVar6 = 0x7fffffffffffffff;
    }
    pvVar7 = operator_new(uVar6);
    sVar4 = lVar3 - (long)pvVar2;
    *puVar1 = pvVar7;
    puVar1[1] = pvVar7;
    puVar1[2] = (long)pvVar7 + uVar6;
    if (sVar4 != 0) {
      memcpy(pvVar7,pvVar2,sVar4);
    }
  }
  else {
    uVar5 = (long)puVar1[1] - (long)pvVar7;
    __src = pvVar2;
    if ((uVar5 < param_4) && (__src = (void *)((long)pvVar2 + uVar5), (void *)puVar1[1] != pvVar7))
    {
      memmove(pvVar7,pvVar2,uVar5);
      pvVar7 = (void *)puVar1[1];
    }
    sVar4 = lVar3 - (long)__src;
    if (sVar4 != 0) {
      memmove(pvVar7,__src,sVar4);
    }
  }
  puVar1[1] = (long)pvVar7 + sVar4;
  return;
}


// ===== 004c56b0  FUN_004c56b0 =====

void FUN_004c56b0(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  void *__dest;
  
  uVar2 = param_1[2];
  __dest = (void *)*param_1;
  if (uVar2 - (long)__dest < param_4) {
    if (__dest != (void *)0x0) {
      param_1[1] = __dest;
      operator_delete(__dest);
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c(param_1);
    }
    uVar3 = uVar2 * 2;
    if (uVar3 < param_4 || uVar3 - param_4 == 0) {
      uVar3 = param_4;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    __dest = operator_new(uVar3);
    __n = param_3 - (long)param_2;
    *param_1 = __dest;
    param_1[1] = __dest;
    param_1[2] = (long)__dest + uVar3;
    if (__n != 0) {
      memcpy(__dest,param_2,__n);
    }
  }
  else {
    uVar2 = (long)param_1[1] - (long)__dest;
    if (uVar2 < param_4) {
      __src = (void *)((long)param_2 + uVar2);
      if ((void *)param_1[1] != __dest) {
        memmove(__dest,param_2,uVar2);
        __dest = (void *)param_1[1];
      }
      lVar1 = -(long)__src;
    }
    else {
      lVar1 = -(long)param_2;
      __src = param_2;
    }
    __n = param_3 + lVar1;
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
  }
  param_1[1] = (long)__dest + __n;
  return;
}


// ===== 004c57d0  FUN_004c57d0 =====

void FUN_004c57d0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar2 = (undefined8 *)*param_1;
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar4 = (void *)puVar2[1];
  pvVar1 = pvVar3;
  if (pvVar4 != pvVar3) {
    do {
      pvVar1 = *(void **)((long)pvVar4 + -0x30);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x28) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar4 + -0x68);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x60) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar4 + -0xa0);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x98) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar4 + -0xb8);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0xb0) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar4 = (void *)((long)pvVar4 + -0xb8);
    } while (pvVar4 != pvVar3);
    pvVar1 = *(void **)*param_1;
  }
  puVar2[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 004c5880  FUN_004c5880 =====

long FUN_004c5880(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    lVar2 = param_3 + 0x50;
    do {
      param_3 = lVar2;
      if (param_1 != param_3 + -0x50) {
        FUN_00442ab8();
        FUN_00442be4(param_3 + -0x38,*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x20),
                     *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18));
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        *(undefined1 *)(param_3 + -0x18) = *(undefined1 *)(param_1 + 0x38);
        *(undefined8 *)(param_3 + -0x20) = uVar3;
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        *(undefined1 *)(param_3 + -8) = *(undefined1 *)(param_1 + 0x48);
        *(undefined8 *)(param_3 + -0x10) = uVar3;
        FUN_004c5584(param_3,*(long *)(param_1 + 0x50),*(long *)(param_1 + 0x58),
                     *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3);
        uVar3 = *(undefined8 *)(param_1 + 0x78);
        uVar5 = *(undefined8 *)(param_1 + 0x70);
        uVar4 = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_3 + 0x28) = uVar3;
        *(undefined8 *)(param_3 + 0x20) = uVar5;
        *(undefined8 *)(param_3 + 0x18) = uVar4;
        FUN_004c56b0(param_3 + 0x38,*(long *)(param_1 + 0x88),*(long *)(param_1 + 0x90),
                     *(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88));
      }
      puVar1 = (undefined8 *)(param_1 + 0xb0);
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      param_1 = param_1 + 0xb8;
      *(undefined8 *)(param_3 + 0x60) = *puVar1;
      *(undefined8 *)(param_3 + 0x58) = uVar4;
      *(undefined8 *)(param_3 + 0x50) = uVar3;
      lVar2 = param_3 + 0xb8;
    } while (param_1 != param_2);
    param_3 = param_3 + 0x68;
  }
  return param_3;
}


// ===== 004c5964  FUN_004c5964 =====

void FUN_004c5964(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar1 = (void *)*param_2;
  uVar3 = param_2[1] - (long)pvVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00371ef8();
    }
    pvVar4 = operator_new(uVar3);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (long)pvVar4 + uVar3;
    memcpy(pvVar4,pvVar1,uVar3);
    param_1[1] = (long)pvVar4 + uVar3;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar1 = (void *)param_2[3];
  uVar3 = param_2[4] - (long)pvVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00442d00();
    }
    pvVar4 = operator_new(uVar3);
    param_1[3] = pvVar4;
    param_1[4] = pvVar4;
    param_1[5] = (long)pvVar4 + uVar3;
    memcpy(pvVar4,pvVar1,uVar3);
    param_1[4] = (long)pvVar4 + uVar3;
  }
  uVar5 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar5;
  uVar2 = *(undefined1 *)(param_2 + 9);
  uVar5 = param_2[8];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 9) = uVar2;
  param_1[8] = uVar5;
  pvVar1 = (void *)param_2[10];
  uVar3 = param_2[0xb] - (long)pvVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
      FUN_004c0ff8();
      goto LAB_004c5ad0;
    }
    pvVar4 = operator_new(uVar3);
    param_1[10] = pvVar4;
    param_1[0xb] = pvVar4;
    param_1[0xc] = (long)pvVar4 + uVar3;
    memcpy(pvVar4,pvVar1,uVar3);
    param_1[0xb] = (long)pvVar4 + uVar3;
  }
  uVar6 = param_2[0x10];
  uVar5 = param_2[0xf];
  uVar8 = param_2[0xe];
  uVar7 = param_2[0xd];
  param_1[0x11] = 0;
  param_1[0xe] = uVar8;
  param_1[0xd] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xf] = uVar5;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  pvVar1 = (void *)param_2[0x11];
  uVar3 = param_2[0x12] - (long)pvVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
LAB_004c5ad0:
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c();
    }
    pvVar4 = operator_new(uVar3);
    param_1[0x11] = pvVar4;
    param_1[0x12] = pvVar4;
    param_1[0x13] = (long)pvVar4 + uVar3;
    memcpy(pvVar4,pvVar1,uVar3);
    param_1[0x12] = (long)pvVar4 + uVar3;
  }
  uVar6 = param_2[0x15];
  uVar5 = param_2[0x14];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar6;
  param_1[0x14] = uVar5;
  return;
}


// ===== 004c5ad4  FUN_004c5ad4 =====

void FUN_004c5ad4(long param_1,int param_2,undefined8 param_3)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  void *__s;
  void *__s_00;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar6 = (ushort *)&DAT_0025d4b0;
  if (param_2 == 0x47504f53) {
    puVar7 = *(undefined8 **)(param_1 + 0x100);
    if (puVar7 == (undefined8 *)0x0) {
      do {
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_004c5ef4;
        puVar7 = (undefined8 *)FUN_0052bfc8();
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)&DAT_0025d4b0;
        }
        lVar3 = FUN_003410d0(0,puVar7,(undefined8 *)(param_1 + 0x100));
        if (lVar3 == 0) break;
        FUN_005113a0(puVar7);
        puVar7 = *(undefined8 **)(param_1 + 0x100);
      } while (puVar7 == (undefined8 *)0x0);
    }
  }
  else {
    if (param_2 != 0x47535542) goto LAB_004c5bbc;
    puVar7 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar7 == (undefined8 *)0x0) {
      do {
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_004c5ef4;
        puVar7 = (undefined8 *)FUN_0052ebf8();
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)&DAT_0025d4b0;
        }
        lVar3 = FUN_003410d0(0,puVar7,(undefined8 *)(param_1 + 0xf8));
        if (lVar3 == 0) break;
        FUN_005112e0(puVar7);
        puVar7 = *(undefined8 **)(param_1 + 0xf8);
      } while (puVar7 == (undefined8 *)0x0);
    }
  }
  goto LAB_004c5ba0;
LAB_004c5ef4:
  puVar7 = (undefined8 *)&DAT_0025d4b0;
LAB_004c5ba0:
  puVar8 = (ushort *)&DAT_0025d4b0;
  if ((ushort *)*puVar7 != (ushort *)0x0) {
    puVar8 = (ushort *)*puVar7;
  }
  if (3 < *(uint *)(puVar8 + 0xc)) {
    puVar6 = *(ushort **)(puVar8 + 8);
  }
LAB_004c5bbc:
  puVar8 = (ushort *)&DAT_0025d4b0;
  if ((((uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8) == 1) &&
     (uVar9 = (uint)(puVar6[2] >> 8) | (puVar6[2] & 0xff00ff) << 8, uVar9 != 0)) {
    puVar8 = (ushort *)((long)puVar6 + (ulong)uVar9);
  }
  local_6c = (uint)(*puVar8 >> 8) | (*puVar8 & 0xff00ff) << 8;
  uVar4 = (ulong)local_6c;
  if (local_6c == 0) {
    __s = (void *)0x0;
  }
  else {
    __s = operator_new(uVar4 << 2);
    memset(__s,0,uVar4 << 2);
  }
  rive_hb_ot_layout_table_get_script_tags(param_1,param_2,0,&local_6c,__s);
  if (local_6c != 0) {
    uVar4 = 0;
    do {
      puVar6 = (ushort *)&DAT_0025d4b0;
      if (param_2 == 0x47504f53) {
        puVar8 = *(ushort **)(param_1 + 0x100);
        while ((puVar8 == (ushort *)0x0 &&
               (puVar8 = (ushort *)&DAT_0025d4b0, *(long *)(param_1 + 0x60) != 0))) {
          puVar8 = (ushort *)FUN_0052bfc8();
          if (puVar8 == (ushort *)0x0) {
            puVar8 = (ushort *)&DAT_0025d4b0;
          }
          lVar3 = FUN_003410d0(0,puVar8,(undefined8 *)(param_1 + 0x100));
          if (lVar3 == 0) break;
          FUN_005113a0(puVar8);
          puVar8 = *(ushort **)(param_1 + 0x100);
        }
LAB_004c5cbc:
        puVar1 = (ushort *)&DAT_0025d4b0;
        if (*(ushort **)puVar8 != (ushort *)0x0) {
          puVar1 = *(ushort **)puVar8;
        }
        if (3 < *(uint *)(puVar1 + 0xc)) {
          puVar6 = *(ushort **)(puVar1 + 8);
        }
      }
      else if (param_2 == 0x47535542) {
        puVar8 = *(ushort **)(param_1 + 0xf8);
        while ((puVar8 == (ushort *)0x0 &&
               (puVar8 = (ushort *)&DAT_0025d4b0, *(long *)(param_1 + 0x60) != 0))) {
          puVar8 = (ushort *)FUN_0052ebf8();
          if (puVar8 == (ushort *)0x0) {
            puVar8 = (ushort *)&DAT_0025d4b0;
          }
          lVar3 = FUN_003410d0(0,puVar8,(undefined8 *)(param_1 + 0xf8));
          if (lVar3 == 0) break;
          FUN_005112e0(puVar8);
          puVar8 = *(ushort **)(param_1 + 0xf8);
        }
        goto LAB_004c5cbc;
      }
      puVar8 = (ushort *)&DAT_0025d4b0;
      if ((((uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8) == 1) &&
         (uVar9 = (uint)(puVar6[2] >> 8) | (puVar6[2] & 0xff00ff) << 8, uVar9 != 0)) {
        puVar8 = (ushort *)((long)puVar6 + (ulong)uVar9);
      }
      puVar6 = (ushort *)&DAT_0025d4b0;
      if (uVar4 < ((uint)(*puVar8 >> 8) | (*puVar8 & 0xff00ff) << 8)) {
        puVar6 = puVar8 + uVar4 * 3 + 1;
      }
      uVar9 = (uint)(puVar6[2] >> 8) | (puVar6[2] & 0xff00ff) << 8;
      puVar6 = (ushort *)&DAT_0025d4b0;
      if (uVar9 != 0) {
        puVar6 = (ushort *)((long)puVar8 + (ulong)uVar9);
      }
      local_70 = (uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8;
      uVar5 = (ulong)local_70;
      if (local_70 == 0) {
        FUN_004c5efc(param_1,param_2,uVar4 & 0xffffffff,0xffff,param_3);
      }
      else {
        __s_00 = operator_new(uVar5 << 2);
        memset(__s_00,0,uVar5 << 2);
        rive_hb_ot_layout_script_get_language_tags
                  (param_1,param_2,uVar4 & 0xffffffff,0,&local_70,__s_00);
        if (local_70 != 0) {
          uVar9 = 0;
          do {
            FUN_004c5efc(param_1,param_2,uVar4 & 0xffffffff,uVar9,param_3);
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_70);
        }
        operator_delete(__s_00);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_6c);
  }
  if (__s != (void *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5efc  FUN_004c5efc =====

void FUN_004c5efc(ulong param_1,int param_2,uint param_3,uint param_4,long *param_5)

{
  long *plVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *__s;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ushort *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  uint *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined2 uVar24;
  undefined8 uVar25;
  float fVar26;
  uint local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  puVar19 = (ushort *)&DAT_0025d4b0;
  if (param_2 == 0x47504f53) {
    puVar21 = *(undefined8 **)(param_1 + 0x100);
    if (puVar21 == (undefined8 *)0x0) {
      do {
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_004c6654;
        puVar21 = (undefined8 *)FUN_0052bfc8();
        if (puVar21 == (undefined8 *)0x0) {
          puVar21 = (undefined8 *)&DAT_0025d4b0;
        }
        lVar8 = FUN_003410d0(0,puVar21,(undefined8 *)(param_1 + 0x100));
        if (lVar8 == 0) break;
        FUN_005113a0(puVar21);
        puVar21 = *(undefined8 **)(param_1 + 0x100);
      } while (puVar21 == (undefined8 *)0x0);
    }
    goto LAB_004c5fd0;
  }
  if (param_2 == 0x47535542) {
    puVar21 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar21 == (undefined8 *)0x0) {
      do {
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_004c6654;
        puVar21 = (undefined8 *)FUN_0052ebf8();
        if (puVar21 == (undefined8 *)0x0) {
          puVar21 = (undefined8 *)&DAT_0025d4b0;
        }
        lVar8 = FUN_003410d0(0,puVar21,(undefined8 *)(param_1 + 0xf8));
        if (lVar8 == 0) break;
        FUN_005112e0(puVar21);
        puVar21 = *(undefined8 **)(param_1 + 0xf8);
      } while (puVar21 == (undefined8 *)0x0);
    }
    goto LAB_004c5fd0;
  }
  goto LAB_004c5fec;
LAB_004c665c:
  puVar21 = (undefined8 *)&DAT_0025d4b0;
  goto LAB_004c6448;
LAB_004c6654:
  puVar21 = (undefined8 *)&DAT_0025d4b0;
LAB_004c5fd0:
  puVar14 = (ushort *)&DAT_0025d4b0;
  if ((ushort *)*puVar21 != (ushort *)0x0) {
    puVar14 = (ushort *)*puVar21;
  }
  if (3 < *(uint *)(puVar14 + 0xc)) {
    puVar19 = *(ushort **)(puVar14 + 8);
  }
LAB_004c5fec:
  puVar14 = (ushort *)&DAT_0025d4b0;
  if ((((uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8) == 1) &&
     (uVar9 = (uint)(puVar19[2] >> 8) | (puVar19[2] & 0xff00ff) << 8, uVar9 != 0)) {
    puVar14 = (ushort *)((long)puVar19 + (ulong)uVar9);
  }
  puVar19 = (ushort *)&DAT_0025d4b0;
  if (param_3 < ((uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8)) {
    puVar19 = puVar14 + (ulong)param_3 * 3 + 1;
  }
  uVar9 = (uint)(puVar19[2] >> 8) | (puVar19[2] & 0xff00ff) << 8;
  puVar19 = (ushort *)&DAT_0025d4b0;
  if (uVar9 != 0) {
    puVar19 = (ushort *)((long)puVar14 + (ulong)uVar9);
  }
  if (param_4 == 0xffff) {
    puVar16 = (undefined1 *)((long)puVar19 + 1);
    puVar18 = puVar19;
  }
  else {
    uVar3 = puVar19[1];
    if (param_4 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
      puVar14 = puVar19 + 1 + (ulong)param_4 * 3 + 1;
    }
    else {
      puVar14 = (ushort *)&DAT_0025d4b0;
    }
    puVar18 = puVar14 + 2;
    puVar16 = (undefined1 *)((long)puVar14 + 5);
  }
  uVar3 = CONCAT11((char)*puVar18,*puVar16);
  puVar2 = &UNK_0025d0fa;
  if (uVar3 != 0) {
    puVar2 = (undefined *)((long)puVar19 + (ulong)uVar3);
  }
  local_6c = (uint)(*(ushort *)(puVar2 + 4) >> 8) | (*(ushort *)(puVar2 + 4) & 0xff00ff) << 8;
  uVar10 = (ulong)local_6c;
  if (local_6c != 0) {
    uVar22 = uVar10 * 4;
    __s = (uint *)operator_new(uVar22);
    memset(__s,0,uVar22);
    rive_hb_ot_layout_language_get_feature_tags(param_1,param_2,param_3,param_4,0,&local_6c,__s);
    uVar22 = param_5[1];
    plVar1 = param_5 + 2;
    puVar17 = __s;
    do {
      uVar9 = *puVar17;
      uVar23 = (ulong)uVar9;
      if (uVar22 != 0) {
        uVar25 = NEON_cnt(uVar22,1);
        uVar24 = NEON_uaddlv(uVar25,1);
        uVar11 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
        if (uVar11 < 2) {
          param_1 = (ulong)((int)uVar22 - 1U & uVar9);
        }
        else {
          param_1 = uVar23;
          if (uVar22 <= uVar23) {
            uVar20 = 0;
            if (uVar22 != 0) {
              uVar20 = uVar23 / uVar22;
            }
            param_1 = uVar23 - uVar20 * uVar22;
          }
        }
        plVar15 = *(long **)(*param_5 + param_1 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          do {
            uVar20 = plVar15[1];
            if (uVar20 == uVar23) {
              if (*(uint *)(plVar15 + 2) == uVar9) goto LAB_004c6370;
            }
            else {
              if (uVar11 < 2) {
                uVar20 = uVar20 & uVar22 - 1;
              }
              else if (uVar22 <= uVar20) {
                uVar6 = 0;
                if (uVar22 != 0) {
                  uVar6 = uVar20 / uVar22;
                }
                uVar20 = uVar20 - uVar6 * uVar22;
              }
              if (uVar20 != param_1) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
      plVar15 = (long *)operator_new(0x18);
      lVar8 = param_5[3];
      fVar26 = *(float *)(param_5 + 4);
      *plVar15 = 0;
      plVar15[1] = uVar23;
      *(uint *)(plVar15 + 2) = uVar9;
      if ((uVar22 == 0) || (fVar26 * (float)uVar22 < (float)(lVar8 + 1))) {
        if (uVar22 < 3) {
          uVar11 = 1;
        }
        else {
          uVar11 = (ulong)((uVar22 & uVar22 - 1) != 0);
        }
        uVar11 = uVar11 | uVar22 << 1;
        uVar20 = (ulong)((float)(lVar8 + 1) / fVar26);
        if (uVar11 <= uVar20) {
          uVar11 = uVar20;
        }
        if (uVar11 - 1 == 0) {
          uVar11 = 2;
        }
        else if ((uVar11 & uVar11 - 1) != 0) {
          uVar11 = std::__ndk1::__next_prime(uVar11);
          uVar22 = param_5[1];
        }
        if (uVar22 < uVar11) {
LAB_004c624c:
          FUN_004010d0(param_5);
        }
        else if (uVar11 < uVar22) {
          uVar20 = (ulong)((float)(ulong)param_5[3] / *(float *)(param_5 + 4));
          if (uVar22 < 3) {
LAB_004c62b0:
            uVar20 = std::__ndk1::__next_prime(uVar20);
          }
          else {
            uVar25 = NEON_cnt(uVar22,1);
            uVar24 = NEON_uaddlv(uVar25,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24)) goto LAB_004c62b0;
            if (1 < uVar20) {
              uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
            }
          }
          if (uVar11 <= uVar20) {
            uVar11 = uVar20;
          }
          if (uVar11 < uVar22) goto LAB_004c624c;
        }
        uVar22 = param_5[1];
        if ((uVar22 & uVar22 - 1) == 0) {
          param_1 = (ulong)((int)uVar22 - 1U & uVar9);
        }
        else {
          param_1 = uVar23;
          if (uVar22 <= uVar23) {
            uVar11 = 0;
            if (uVar22 != 0) {
              uVar11 = uVar23 / uVar22;
            }
            param_1 = uVar23 - uVar11 * uVar22;
          }
        }
      }
      lVar8 = *param_5;
      plVar12 = *(long **)(lVar8 + param_1 * 8);
      if (plVar12 == (long *)0x0) {
        lVar13 = *plVar1;
        *plVar1 = (long)plVar15;
        *plVar15 = lVar13;
        *(long **)(lVar8 + param_1 * 8) = plVar1;
        if (*plVar15 != 0) {
          uVar23 = *(ulong *)(*plVar15 + 8);
          if ((uVar22 & uVar22 - 1) == 0) {
            uVar23 = uVar23 & uVar22 - 1;
          }
          else if (uVar22 <= uVar23) {
            uVar11 = 0;
            if (uVar22 != 0) {
              uVar11 = uVar23 / uVar22;
            }
            uVar23 = uVar23 - uVar11 * uVar22;
          }
          plVar12 = (long *)(*param_5 + uVar23 * 8);
          goto LAB_004c6360;
        }
      }
      else {
        *plVar15 = *plVar12;
LAB_004c6360:
        *plVar12 = (long)plVar15;
      }
      param_5[3] = param_5[3] + 1;
LAB_004c6370:
      puVar17 = puVar17 + 1;
    } while (puVar17 != __s + uVar10);
    operator_delete(__s);
    goto LAB_004c6384;
  }
  puVar19 = (ushort *)&DAT_0025d4b0;
  if (param_2 == 0x47504f53) {
    puVar21 = *(undefined8 **)(param_1 + 0x100);
    if (puVar21 == (undefined8 *)0x0) {
      do {
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_004c665c;
        puVar21 = (undefined8 *)FUN_0052bfc8();
        if (puVar21 == (undefined8 *)0x0) {
          puVar21 = (undefined8 *)&DAT_0025d4b0;
        }
        lVar8 = FUN_003410d0(0,puVar21,(undefined8 *)(param_1 + 0x100));
        if (lVar8 == 0) break;
        FUN_005113a0(puVar21);
        puVar21 = *(undefined8 **)(param_1 + 0x100);
      } while (puVar21 == (undefined8 *)0x0);
    }
LAB_004c6448:
    puVar14 = (ushort *)&DAT_0025d4b0;
    if ((ushort *)*puVar21 != (ushort *)0x0) {
      puVar14 = (ushort *)*puVar21;
    }
    if (3 < *(uint *)(puVar14 + 0xc)) {
      puVar19 = *(ushort **)(puVar14 + 8);
    }
  }
  else if (param_2 == 0x47535542) {
    puVar21 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar21 == (undefined8 *)0x0) {
      do {
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_004c665c;
        puVar21 = (undefined8 *)FUN_0052ebf8();
        if (puVar21 == (undefined8 *)0x0) {
          puVar21 = (undefined8 *)&DAT_0025d4b0;
        }
        lVar8 = FUN_003410d0(0,puVar21,(undefined8 *)(param_1 + 0xf8));
        if (lVar8 == 0) break;
        FUN_005112e0(puVar21);
        puVar21 = *(undefined8 **)(param_1 + 0xf8);
      } while (puVar21 == (undefined8 *)0x0);
    }
    goto LAB_004c6448;
  }
  puVar14 = (ushort *)&DAT_0025d4b0;
  if ((((uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8) == 1) &&
     (uVar9 = (uint)(puVar19[2] >> 8) | (puVar19[2] & 0xff00ff) << 8, uVar9 != 0)) {
    puVar14 = (ushort *)((long)puVar19 + (ulong)uVar9);
  }
  puVar19 = (ushort *)&DAT_0025d4b0;
  if (param_3 < ((uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8)) {
    puVar19 = puVar14 + (ulong)param_3 * 3 + 1;
  }
  uVar9 = (uint)(puVar19[2] >> 8) | (puVar19[2] & 0xff00ff) << 8;
  puVar19 = (ushort *)&DAT_0025d4b0;
  if (uVar9 != 0) {
    puVar19 = (ushort *)((long)puVar14 + (ulong)uVar9);
  }
  if (param_4 == 0xffff) {
    puVar16 = (undefined1 *)((long)puVar19 + 1);
    puVar18 = puVar19;
  }
  else {
    uVar3 = puVar19[1];
    if (param_4 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
      puVar14 = puVar19 + 1 + (ulong)param_4 * 3 + 1;
    }
    else {
      puVar14 = (ushort *)&DAT_0025d4b0;
    }
    puVar18 = puVar14 + 2;
    puVar16 = (undefined1 *)((long)puVar14 + 5);
  }
  uVar3 = CONCAT11((char)*puVar18,*puVar16);
  puVar2 = &UNK_0025d0fa;
  if (uVar3 != 0) {
    puVar2 = (undefined *)((long)puVar19 + (ulong)uVar3);
  }
  uVar9 = (uint)(*(ushort *)(puVar2 + 4) >> 8) | (*(ushort *)(puVar2 + 4) & 0xff00ff) << 8;
  if (local_6c <= uVar9) {
    uVar9 = local_6c;
  }
  local_6c = uVar9;
  if (uVar9 != 0) {
    puVar17 = (uint *)0x0;
    puVar19 = (ushort *)(puVar2 + 6);
    uVar5 = uVar9;
    do {
      uVar4 = (uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8;
      if (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *puVar17 = uVar4;
        puVar17 = puVar17 + 1;
        uVar4 = (uint)DAT_006870b0;
      }
      DAT_006870b0._0_4_ = uVar4;
      uVar5 = uVar5 - 1;
      puVar19 = puVar19 + 1;
    } while (uVar5 != 0);
  }
LAB_004c6384:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c6664  HBFont::~HBFont =====

/* HBFont::~HBFont() */

void __thiscall HBFont::~HBFont(HBFont *this)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067d7a0 + 0x10;
  rive_hb_draw_funcs_destroy(*(undefined8 *)(this + 0x38));
  rive_hb_paint_funcs_destroy(*(undefined8 *)(this + 0x40));
  rive_hb_font_destroy(*(undefined8 *)(this + 0x18));
  puVar2 = (undefined8 *)*(void **)(this + 200);
  while (puVar2 != (undefined8 *)0x0) {
    local_40 = (long)(puVar2 + 3);
    pvVar3 = (void *)*puVar2;
    FUN_004c57d0(&local_40);
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(this + 0xb8);
  *(undefined8 *)(this + 0xb8) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0xa0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar3;
    operator_delete(pvVar3);
  }
  puVar2 = (undefined8 *)*(void **)(this + 0x80);
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar2 = (undefined8 *)*(void **)(this + 0x58);
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    *(void **)(this + 0x28) = pvVar3;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c67a4  HBFont::FromSystem =====

/* HBFont::FromSystem(void*, bool, unsigned short, unsigned char) */

void HBFont::FromSystem(void *param_1,bool param_2,ushort param_3,uchar param_4)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  return;
}


// ===== 004c67ac  HBFont::GetStyle =====

/* HBFont::GetStyle(rive_hb_font_t*, unsigned int) */

void HBFont::GetStyle(rive_hb_font_t *param_1,uint param_2)

{
  (*(code *)PTR_rive_hb_style_get_value_00680a30)(param_1,param_2);
  return;
}


// ===== 004c67b0  rive::RawTextInput::RawTextInput =====

/* rive::RawTextInput::RawTextInput() */

void __thiscall rive::RawTextInput::RawTextInput(RawTextInput *this)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = DAT_0024e858;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x27) = 0;
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(this + 0x30),true);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(this + 0x88),true);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(this + 0xe0),true);
  *(undefined4 *)(this + 0x18c) = 2;
  this[0x138] = (RawTextInput)0x1;
  this[0x180] = (RawTextInput)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  this[0x188] = (RawTextInput)0x1;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c8) = 0x3f800000;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1f0) = 0x3f800000;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x218) = 0x3f800000;
  pvVar2 = malloc(4);
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(void **)(this + 0x378) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    *(undefined8 *)(this + 0x380) = 1;
  }
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x3e4) = 0;
  *(undefined4 *)(this + 0x400) = 0xbf800000;
  *(undefined8 *)(this + 0x40c) = 0;
  *(undefined8 *)(this + 0x404) = 0;
  *(undefined4 *)(this + 0x430) = 0x40a00000;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  this[0x3e0] = (RawTextInput)0x0;
  this[0x3ec] = (RawTextInput)0x0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined4 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  puVar3 = (undefined4 *)operator_new(4);
  *(undefined4 **)(this + 0x2c8) = puVar3;
  *puVar3 = 0x200b;
  *(undefined4 **)(this + 0x2d8) = puVar3 + 1;
  *(undefined4 **)(this + 0x2d0) = puVar3 + 1;
  return;
}


// ===== 004c6924  rive::RawTextInput::draw =====

/* rive::RawTextInput::draw(rive::Factory*, rive::Renderer*, rive::Mat2D const&, rive::RenderPaint*,
   rive::RenderPaint*, rive::RenderPaint*) */

void __thiscall
rive::RawTextInput::draw
          (RawTextInput *this,Factory *param_1,Renderer *param_2,Mat2D *param_3,RenderPaint *param_4
          ,RenderPaint *param_5,RenderPaint *param_6)

{
  undefined8 uVar1;
  
  if ((this[0x3ea] == (RawTextInput)0x2) && (*(long *)(this + 0x3f8) != 0)) {
    (**(code **)(*(long *)param_2 + 0x10))(param_2);
    (**(code **)(*(long *)param_2 + 0x30))(param_2,*(undefined8 *)(this + 0x3f8));
  }
  if ((*(int *)this != *(int *)(this + 8)) || (*(int *)(this + 4) != *(int *)(this + 0xc))) {
    uVar1 = ShapePaintPath::renderPath((ShapePaintPath *)(this + 0x138),param_1);
    (**(code **)(*(long *)param_2 + 0x28))(param_2,uVar1,param_5);
  }
  uVar1 = ShapePaintPath::renderPath((ShapePaintPath *)(this + 0x30),param_1);
  (**(code **)(*(long *)param_2 + 0x28))(param_2,uVar1,param_4);
  uVar1 = ShapePaintPath::renderPath((ShapePaintPath *)(this + 0xe0),param_1);
  (**(code **)(*(long *)param_2 + 0x28))(param_2,uVar1,param_6);
  if ((this[0x3ea] == (RawTextInput)0x2) && (*(long *)(this + 0x3f8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004c6a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 0x18))(param_2);
    return;
  }
  return;
}


// ===== 004c6a5c  rive::RawTextInput::backspace =====

/* rive::RawTextInput::backspace(int) */

void __thiscall rive::RawTextInput::backspace(RawTextInput *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  void *pvVar13;
  int iVar14;
  ulong uVar15;
  
  uVar1 = *(ulong *)this;
  uVar2 = *(ulong *)(this + 8);
  *(undefined4 *)(this + 0x400) = 0xbf800000;
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar12 = (uint)(uVar2 >> 0x20);
  if (((int)uVar1 != (int)uVar2) || (uVar1 >> 0x20 != uVar2 >> 0x20)) {
    uVar11 = uVar2;
    uVar15 = uVar1;
    if (uVar2 >> 0x20 <= uVar1 >> 0x20) {
      uVar11 = uVar1;
      uVar15 = uVar2;
    }
    uVar9 = uVar2;
    uVar10 = uVar1;
    if (uVar15 >> 0x20 != uVar11 >> 0x20) {
      pvVar4 = (void *)(*(long *)(this + 0x2c8) + (uVar11 >> 0x20) * 4);
      pvVar13 = (void *)(*(long *)(this + 0x2c8) + (uVar15 >> 0x20) * 4);
      sVar3 = *(long *)(this + 0x2d0) - (long)pvVar4;
      if (sVar3 != 0) {
        memmove(pvVar13,pvVar4,sVar3);
        uVar10 = *(ulong *)this;
        uVar9 = *(ulong *)(this + 8);
        uVar6 = *(uint *)(this + 4);
        uVar12 = *(uint *)(this + 0xc);
      }
      *(size_t *)(this + 0x2d0) = (long)pvVar13 + sVar3;
    }
    if (uVar12 <= uVar6) {
      uVar10 = uVar9;
    }
    goto LAB_004c6d1c;
  }
  uVar11 = uVar1;
  uVar15 = uVar2;
  if (((byte)this[0x3e0] & 1) != 0) {
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] & 0xfe);
    lVar5 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2;
    *(int *)(this + 0x24) = (int)lVar5;
    FullyShapedText::shape
              (*(undefined4 *)(this + 0x3f0),*(undefined4 *)(this + 0x3f4),
               *(undefined4 *)(this + 0x3e4),this + 0x2e0,*(long *)(this + 0x2c8),lVar5,this + 0x10,
               1,this[0x3e9],this[0x3eb],this[0x3ec],this[1000],this[0x3ea]);
    uVar11 = *(ulong *)this;
    uVar15 = *(ulong *)(this + 8);
    uVar6 = *(uint *)(this + 4);
    uVar12 = *(uint *)(this + 0xc);
  }
  if (uVar12 <= uVar6) {
    uVar11 = uVar15;
  }
  uVar15 = uVar11 >> 0x20;
  iVar14 = (int)(uVar11 >> 0x20);
  if (param_1 < 1) {
    if (iVar14 == 0) {
      return;
    }
    lVar5 = *(long *)(this + 0x318);
    uVar12 = iVar14 - 1;
    uVar11 = (ulong)uVar12;
    uVar6 = (uint)((ulong)(*(long *)(this + 800) - lVar5) >> 2);
    if ((uVar12 != 0) && (uVar12 < uVar6)) {
      lVar8 = uVar11 * 4;
      uVar15 = uVar11;
      do {
        uVar11 = uVar15;
        if (uVar11 == 0) goto LAB_004c6c5c;
        uVar15 = uVar11 - 1;
      } while (*(int *)(lVar5 + -4 + uVar11 * 4) == *(int *)(lVar5 + lVar8));
      uVar11 = uVar11 & 0xffffffff;
    }
LAB_004c6c5c:
    uVar12 = (int)uVar11 + 1;
    uVar15 = uVar11 & 0xffffffff;
    if (uVar12 < uVar6) {
      lVar8 = 0;
      uVar6 = uVar6 - (int)uVar11;
      do {
        if (*(int *)(lVar5 + (ulong)uVar12 * 4 + lVar8 * 4) !=
            *(int *)(lVar5 + (uVar11 & 0xffffffff) * 4)) {
          uVar6 = (int)lVar8 + 1;
          break;
        }
        lVar8 = lVar8 + 1;
      } while (((ulong)(*(long *)(this + 800) - lVar5) >> 2 & 0xffffffff) - (ulong)uVar12 != lVar8);
      if (uVar6 == 0) goto LAB_004c6d14;
      pvVar13 = (void *)(*(long *)(this + 0x2c8) + uVar15 * 4);
      pvVar4 = (void *)((long)pvVar13 + (ulong)uVar6 * 4);
    }
    else {
      pvVar13 = (void *)(*(long *)(this + 0x2c8) + uVar15 * 4);
      pvVar4 = (void *)((long)pvVar13 + 4);
    }
    lVar5 = *(long *)(this + 0x2d0);
LAB_004c6cf8:
    sVar3 = lVar5 - (long)pvVar4;
    if (sVar3 != 0) {
      memmove(pvVar13,pvVar4,sVar3);
    }
    *(size_t *)(this + 0x2d0) = (long)pvVar13 + sVar3;
  }
  else {
    lVar5 = *(long *)(this + 0x2d0);
    if ((lVar5 - *(long *)(this + 0x2c8) >> 2) - 1U <= uVar15) {
      return;
    }
    lVar8 = *(long *)(this + 0x318);
    uVar6 = iVar14 + 1;
    pvVar13 = (void *)(*(long *)(this + 0x2c8) + uVar15 * 4);
    uVar12 = (uint)((ulong)(*(long *)(this + 800) - lVar8) >> 2);
    if (uVar12 <= uVar6) {
      pvVar4 = (void *)((long)pvVar13 + 4);
      goto LAB_004c6cf8;
    }
    lVar7 = 0;
    uVar12 = uVar12 - iVar14;
    do {
      if (*(int *)(lVar8 + (ulong)uVar6 * 4 + lVar7 * 4) != *(int *)(lVar8 + uVar15 * 4)) {
        uVar12 = (int)lVar7 + 1;
        break;
      }
      lVar7 = lVar7 + 1;
    } while (((ulong)(*(long *)(this + 800) - lVar8) >> 2 & 0xffffffff) - (ulong)uVar6 != lVar7);
    if (uVar12 != 0) {
      pvVar4 = (void *)((long)pvVar13 + (ulong)uVar12 * 4);
      goto LAB_004c6cf8;
    }
  }
LAB_004c6d14:
  uVar10 = uVar15 << 0x20;
LAB_004c6d1c:
  *(ulong *)this = uVar10 | 0xffffffff;
  *(ulong *)(this + 8) = uVar10 | 0xffffffff;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  captureJournalEntry(this,uVar1,uVar2);
  return;
}


// ===== 004c6d54  rive::RawTextInput::captureJournalEntry =====

/* WARNING: Removing unreachable block (ram,0x004c6dd4) */
/* WARNING: Removing unreachable block (ram,0x004c6e00) */
/* WARNING: Removing unreachable block (ram,0x004c6e10) */
/* WARNING: Removing unreachable block (ram,0x004c6ddc) */
/* WARNING: Removing unreachable block (ram,0x004c6e1c) */
/* WARNING: Removing unreachable block (ram,0x004c6ff4) */
/* rive::RawTextInput::captureJournalEntry(rive::Cursor) */

void rive::RawTextInput::captureJournalEntry
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar12 = param_1[0x88];
  uVar7 = (ulong)(*(uint *)(param_1 + 0x8a) + 1);
  uVar5 = (lVar12 - param_1[0x87] >> 3) * 0x6db6db6db6db6db7;
  lVar4 = param_1[0x87] + (ulong)*(uint *)(param_1 + 0x8a) * 0x38 + 0x38;
  if ((uVar7 <= uVar5 && uVar5 - uVar7 != 0) && lVar4 != lVar12) {
    for (; lVar12 != lVar4; lVar12 = lVar12 + -0x38) {
      if ((*(byte *)(lVar12 + -0x18) & 1) != 0) {
        operator_delete(*(void **)(lVar12 + -8));
      }
    }
    param_1[0x88] = lVar4;
  }
  uVar14 = param_1[1];
  uVar13 = *param_1;
  text();
  puVar9 = (undefined8 *)param_1[0x88];
  if (puVar9 < (undefined8 *)param_1[0x89]) {
    puVar11 = puVar9 + 7;
    puVar9[1] = param_3;
    *puVar9 = param_2;
    puVar9[3] = uVar14;
    puVar9[2] = uVar13;
    puVar9[6] = local_60;
    puVar9[5] = uStack_68;
    puVar9[4] = local_70;
    param_1[0x88] = puVar11;
  }
  else {
    puVar10 = (undefined8 *)param_1[0x87];
    lVar4 = (long)puVar9 - (long)puVar10 >> 3;
    uVar5 = lVar4 * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar5) {
      FUN_004c7258();
LAB_004c7054:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    lVar12 = (long)param_1[0x89] - (long)puVar10 >> 3;
    uVar7 = lVar12 * -0x2492492492492492;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar12 * 0x6db6db6db6db6db7)) {
      uVar7 = 0x492492492492492;
    }
    if (uVar7 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar7) goto LAB_004c7054;
      pvVar2 = operator_new(uVar7 * 0x38);
    }
    puVar6 = (undefined8 *)((long)pvVar2 + lVar4 * 8);
    pvVar2 = (void *)((long)pvVar2 + uVar7 * 0x38);
    puVar6[1] = param_3;
    *puVar6 = param_2;
    puVar6[3] = uVar14;
    puVar6[2] = uVar13;
    puVar11 = puVar6 + 7;
    puVar6[5] = uStack_68;
    puVar6[4] = local_70;
    puVar6[6] = local_60;
    if (puVar9 == puVar10) {
      param_1[0x87] = puVar6;
      param_1[0x88] = puVar11;
      param_1[0x89] = pvVar2;
    }
    else {
      do {
        uVar13 = puVar9[-5];
        uVar15 = puVar9[-6];
        uVar14 = puVar9[-7];
        puVar6[-4] = puVar9[-4];
        puVar6[-5] = uVar13;
        puVar6[-6] = uVar15;
        puVar6[-7] = uVar14;
        uVar14 = puVar9[-2];
        uVar13 = puVar9[-3];
        puVar6[-1] = puVar9[-1];
        puVar8 = puVar9 + -7;
        puVar6[-2] = uVar14;
        puVar6[-3] = uVar13;
        puVar6 = puVar6 + -7;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        puVar9[-3] = 0;
        puVar9 = puVar8;
      } while (puVar8 != puVar10);
      puVar9 = (undefined8 *)param_1[0x87];
      puVar10 = (undefined8 *)param_1[0x88];
      param_1[0x87] = puVar6;
      param_1[0x88] = puVar11;
      param_1[0x89] = pvVar2;
      for (; puVar10 != puVar9; puVar10 = puVar10 + -7) {
        if ((*(byte *)(puVar10 + -3) & 1) != 0) {
          operator_delete((void *)puVar10[-1]);
        }
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
      operator_delete(puVar9);
    }
    param_1[0x88] = puVar11;
  }
  *(int *)(param_1 + 0x8a) = (int)((ulong)((long)puVar11 - param_1[0x87]) >> 3) * -0x49249249 + -1;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7058  rive::RawTextInput::text =====

/* rive::RawTextInput::text() const */

void rive::RawTextInput::text(void)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  long in_x0;
  byte *pbVar5;
  uint uVar6;
  undefined8 *in_x8;
  long lVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong __n;
  uint *puVar11;
  long lVar12;
  
  puVar11 = *(uint **)(in_x0 + 0x2c8);
  lVar7 = *(long *)(in_x0 + 0x2d0) - (long)puVar11;
  if ((lVar7 == 0) || (lVar7 = lVar7 >> 2, lVar7 == 1)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    uVar6 = 0;
    lVar12 = lVar7 * 4 + -4;
    lVar7 = lVar12;
    puVar8 = puVar11;
    do {
      uVar1 = *puVar8;
      if (uVar1 < 0x80) {
        uVar4 = uVar6 + 1;
      }
      else if (uVar1 < 0x800) {
        uVar4 = uVar6 + 2;
      }
      else if (uVar1 >> 0x10 == 0) {
        uVar4 = uVar6 + 3;
      }
      else {
        uVar4 = uVar6 + 4;
        if (0x10ffff < uVar1) {
          uVar4 = uVar6;
        }
      }
      uVar6 = uVar4;
      lVar7 = lVar7 + -4;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
    if (uVar6 == 0) {
      pbVar9 = (byte *)0x0;
      pbVar5 = (byte *)0x0;
      pbVar10 = pbVar5;
    }
    else {
      __n = (ulong)uVar6;
      pbVar5 = (byte *)operator_new(__n);
      pbVar9 = pbVar5 + __n;
      memset(pbVar5,0,__n);
      pbVar10 = pbVar5;
    }
    do {
      uVar6 = *puVar11;
      bVar2 = (byte)uVar6;
      if (uVar6 < 0x80) {
        *pbVar5 = bVar2;
        lVar7 = 1;
      }
      else if (uVar6 < 0x800) {
        *pbVar5 = (byte)(uVar6 >> 6) | 0xc0;
        lVar7 = 2;
        pbVar5[1] = bVar2 & 0x3f | 0x80;
      }
      else if (uVar6 >> 0x10 == 0) {
        lVar7 = 3;
        *pbVar5 = (byte)(uVar6 >> 0xc) | 0xe0;
        pbVar5[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
        pbVar5[2] = bVar2 & 0x3f | 0x80;
      }
      else if (uVar6 >> 0x10 < 0x11) {
        lVar7 = 4;
        *pbVar5 = (byte)(uVar6 >> 0x12) | 0xf0;
        pbVar5[1] = (byte)(uVar6 >> 0xc) & 0x3f | 0x80;
        pbVar5[2] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
        pbVar5[3] = bVar2 & 0x3f | 0x80;
      }
      else {
        lVar7 = 0;
      }
      lVar12 = lVar12 + -4;
      pbVar5 = pbVar5 + lVar7;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    pbVar3 = pbVar9;
    for (pbVar5 = pbVar10; pbVar5 != pbVar9; pbVar5 = pbVar5 + 1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)in_x8);
      pbVar3 = pbVar10;
    }
    if (pbVar3 != (byte *)0x0) {
      operator_delete(pbVar3);
      return;
    }
  }
  return;
}


// ===== 004c7258  FUN_004c7258 =====

void FUN_004c7258(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004c726c  rive::RawTextInput::erase =====

/* rive::RawTextInput::erase() */

void __thiscall rive::RawTextInput::erase(RawTextInput *this)

{
  void *__src;
  void *__dest;
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined4 *)(this + 0x400) = 0xbf800000;
  if ((*(int *)this == *(int *)(this + 8)) && (*(uint *)(this + 4) == *(uint *)(this + 0xc))) {
    return;
  }
  uVar3 = *(ulong *)this;
  uVar4 = *(ulong *)(this + 8);
  uVar1 = uVar4;
  uVar2 = uVar3;
  if (*(uint *)(this + 0xc) <= *(uint *)(this + 4)) {
    uVar1 = uVar3;
    uVar2 = uVar4;
  }
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar6 = (uint)(uVar4 >> 0x20);
  if (uVar2 >> 0x20 != uVar1 >> 0x20) {
    __src = (void *)(*(long *)(this + 0x2c8) + (uVar1 >> 0x20) * 4);
    __dest = (void *)(*(long *)(this + 0x2c8) + (uVar2 >> 0x20) * 4);
    __n = *(long *)(this + 0x2d0) - (long)__src;
    if (__n != 0) {
      memmove(__dest,__src,__n);
      uVar3 = *(ulong *)this;
      uVar4 = *(ulong *)(this + 8);
      uVar5 = *(uint *)(this + 4);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(size_t *)(this + 0x2d0) = (long)__dest + __n;
  }
  if (uVar6 <= uVar5) {
    uVar3 = uVar4;
  }
  *(ulong *)this = uVar3 | 0xffffffff;
  *(ulong *)(this + 8) = uVar3 | 0xffffffff;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  return;
}


// ===== 004c733c  rive::RawTextInput::ensureShape =====

/* rive::RawTextInput::ensureShape() */

void __thiscall rive::RawTextInput::ensureShape(RawTextInput *this)

{
  long lVar1;
  
  if (((byte)this[0x3e0] & 1) != 0) {
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] & 0xfe);
    lVar1 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2;
    *(int *)(this + 0x24) = (int)lVar1;
    FullyShapedText::shape
              (*(undefined4 *)(this + 0x3f0),*(undefined4 *)(this + 0x3f4),
               *(undefined4 *)(this + 0x3e4),this + 0x2e0,*(long *)(this + 0x2c8),lVar1,this + 0x10,
               1,this[0x3e9],this[0x3eb],this[0x3ec],this[1000],this[0x3ea]);
  }
  return;
}


// ===== 004c73b4  rive::RawTextInput::flag =====

/* rive::RawTextInput::flag(rive::RawTextInput::Flags) */

void __thiscall rive::RawTextInput::flag(RawTextInput *this,byte param_2)

{
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | param_2);
  return;
}


// ===== 004c73c4  rive::RawTextInput::insert =====

/* rive::RawTextInput::insert(unsigned int) */

void __thiscall rive::RawTextInput::insert(RawTextInput *this,uint param_1)

{
  void *__src;
  void *__dest;
  long lVar1;
  ulong uVar2;
  RawTextInput *pRVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint local_4c;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar4 = *(ulong *)this;
  uVar5 = *(ulong *)(this + 8);
  *(undefined4 *)(this + 0x400) = 0xbf800000;
  uVar8 = uVar4 >> 0x20;
  uVar9 = (uint)(uVar5 >> 0x20);
  local_4c = param_1;
  if (((int)uVar4 != (int)uVar5) || (uVar8 != uVar5 >> 0x20)) {
    uVar2 = uVar5;
    uVar7 = uVar4;
    if (uVar5 >> 0x20 <= uVar8) {
      uVar2 = uVar4;
      uVar7 = uVar5;
    }
    uVar10 = uVar5;
    uVar11 = uVar4;
    if (uVar7 >> 0x20 != uVar2 >> 0x20) {
      __src = (void *)(*(long *)(this + 0x2c8) + (uVar2 >> 0x20) * 4);
      __dest = (void *)(*(long *)(this + 0x2c8) + (uVar7 >> 0x20) * 4);
      __n = *(long *)(this + 0x2d0) - (long)__src;
      if (__n != 0) {
        memmove(__dest,__src,__n);
        uVar11 = *(ulong *)this;
        uVar10 = *(ulong *)(this + 8);
        uVar8 = (ulong)*(uint *)(this + 4);
        uVar9 = *(uint *)(this + 0xc);
      }
      *(size_t *)(this + 0x2d0) = (long)__dest + __n;
    }
    if (uVar9 <= (uint)uVar8) {
      uVar11 = uVar10;
    }
    uVar8 = uVar11 >> 0x20;
    *(ulong *)this = uVar11 | 0xffffffff;
    *(ulong *)(this + 8) = uVar11 | 0xffffffff;
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  }
  FUN_004c7528(this + 0x2c8,*(long *)(this + 0x2c8) + uVar8 * 4,&local_4c);
  pRVar3 = this;
  if (*(uint *)(this + 0xc) <= *(uint *)(this + 4)) {
    pRVar3 = this + 8;
  }
  lVar1 = (*(ulong *)pRVar3 | 0xffffffff) + 0x100000000;
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  captureJournalEntry(this,uVar4,uVar5);
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7528  FUN_004c7528 =====

void FUN_004c7528(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *__dest;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar12 = (undefined4 *)param_1[1];
  if (puVar12 < (undefined4 *)param_1[2]) {
    if (param_2 != puVar12) {
      puVar8 = puVar12;
      if (puVar12 + -1 < puVar12) {
        *puVar12 = puVar12[-1];
        puVar8 = puVar12 + 1;
      }
      param_1[1] = (long)puVar8;
      if (puVar12 != param_2 + 1) {
        sVar3 = (long)puVar12 - (long)(param_2 + 1);
        memmove((void *)((long)puVar12 - sVar3),param_2,sVar3);
        puVar8 = (undefined4 *)param_1[1];
      }
      *param_2 = param_3[(param_3 >= param_2 && param_3 <= puVar8) &&
                         (param_3 < param_2 || puVar8 != param_3)];
      return;
    }
    *param_2 = *param_3;
    param_1[1] = (long)(param_2 + 1);
    return;
  }
  puVar8 = (undefined4 *)*param_1;
  uVar4 = ((long)puVar12 - (long)puVar8 >> 2) + 1;
  if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003b1ebc();
  }
  uVar6 = param_1[2] - (long)puVar8;
  uVar7 = (long)uVar6 >> 1;
  if (uVar7 <= uVar4) {
    uVar7 = uVar4;
  }
  if (0x7ffffffffffffffb < uVar6) {
    uVar7 = 0x3fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3e != 0) goto LAB_004c7790;
    pvVar2 = operator_new(uVar7 << 2);
  }
  uVar4 = (long)param_2 - (long)puVar8;
  puVar12 = (undefined4 *)((long)pvVar2 + uVar7 * 4);
  puVar11 = (undefined4 *)((long)pvVar2 + ((long)uVar4 >> 2) * 4);
  if ((long)uVar4 >> 2 == uVar7) {
    if ((long)uVar4 < 1) {
      uVar4 = (long)uVar4 >> 1;
      if (puVar8 == param_2) {
        uVar4 = 1;
      }
      if (uVar4 >> 0x3e != 0) {
LAB_004c7790:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      puVar11 = (undefined4 *)operator_new(uVar4 * 4);
      puVar12 = puVar11 + uVar4;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        puVar8 = (undefined4 *)*param_1;
      }
    }
    else {
      puVar11 = (undefined4 *)((long)puVar11 - ((uVar4 >> 1) + 2 & 0xfffffffffffffffc));
    }
  }
  __dest = puVar11 + 1;
  *puVar11 = *param_3;
  if (puVar8 != param_2) {
    uVar4 = (long)param_2 + (-4 - (long)puVar8);
    puVar5 = param_2;
    if ((0x1b < uVar4) && (0x1f < (ulong)((long)param_2 - (long)puVar11))) {
      puVar9 = (undefined8 *)(puVar11 + -4);
      puVar10 = (undefined8 *)(param_2 + -4);
      uVar4 = (uVar4 >> 2) + 1;
      uVar6 = uVar4 & 0x7ffffffffffffff8;
      uVar7 = uVar6;
      do {
        puVar1 = puVar10 + -1;
        uVar15 = puVar10[-2];
        uVar14 = puVar10[1];
        uVar13 = *puVar10;
        uVar7 = uVar7 - 8;
        puVar10 = puVar10 + -4;
        puVar9[-1] = *puVar1;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + -4;
      } while (uVar7 != 0);
      puVar11 = puVar11 + -uVar6;
      puVar5 = param_2 + -uVar6;
      if (uVar4 == uVar6) goto LAB_004c7728;
    }
    do {
      puVar5 = puVar5 + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *puVar5;
    } while (puVar5 != puVar8);
  }
LAB_004c7728:
  sVar3 = param_1[1] - (long)param_2;
  if (sVar3 != 0) {
    memmove(__dest,param_2,sVar3);
    puVar8 = (undefined4 *)*param_1;
  }
  param_1[2] = (long)puVar12;
  *param_1 = (long)puVar11;
  param_1[1] = (long)__dest + sVar3;
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  operator_delete(puVar8);
  return;
}


// ===== 004c7794  rive::RawTextInput::insert =====

/* rive::RawTextInput::insert(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall rive::RawTextInput::insert(RawTextInput *this,basic_string *param_1)

{
  void *__src;
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string bVar4;
  size_t __n;
  long lVar5;
  ulong uVar6;
  long lVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint local_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar2 = *(ulong *)this;
  uVar3 = *(ulong *)(this + 8);
  *(undefined4 *)(this + 0x400) = 0xbf800000;
  uVar15 = uVar2 >> 0x20;
  uVar10 = (uint)(uVar3 >> 0x20);
  if (((int)uVar2 != (int)uVar3) || (uVar15 != uVar3 >> 0x20)) {
    uVar1 = uVar3;
    uVar6 = uVar2;
    if (uVar3 >> 0x20 <= uVar15) {
      uVar1 = uVar2;
      uVar6 = uVar3;
    }
    uVar11 = uVar3;
    uVar13 = uVar2;
    if (uVar6 >> 0x20 != uVar1 >> 0x20) {
      __src = (void *)(*(long *)(this + 0x2c8) + (uVar1 >> 0x20) * 4);
      __dest = (void *)(*(long *)(this + 0x2c8) + (uVar6 >> 0x20) * 4);
      __n = *(long *)(this + 0x2d0) - (long)__src;
      if (__n != 0) {
        memmove(__dest,__src,__n);
        uVar13 = *(ulong *)this;
        uVar11 = *(ulong *)(this + 8);
        uVar15 = (ulong)*(uint *)(this + 4);
        uVar10 = *(uint *)(this + 0xc);
      }
      *(size_t *)(this + 0x2d0) = (long)__dest + __n;
    }
    if (uVar10 <= (uint)uVar15) {
      uVar13 = uVar11;
    }
    uVar15 = uVar13 >> 0x20;
    *(ulong *)this = uVar13 | 0xffffffff;
    *(ulong *)(this + 8) = uVar13 | 0xffffffff;
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  }
  pbVar9 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar9 = param_1 + 1;
  }
  bVar4 = *pbVar9;
  if (bVar4 != (basic_string)0x0) {
    do {
      local_5c = (uint)(byte)bVar4;
      if (((char)bVar4 < '\0') && (((byte)bVar4 >> 6 & 1) != 0)) {
        lVar14 = 0;
        do {
          lVar12 = lVar14;
          lVar14 = lVar12 + 1;
          uVar10 = local_5c >> 5;
          local_5c = local_5c << 1;
        } while ((uVar10 & 1) != 0);
        uVar10 = (uint)lVar14;
        lVar14 = 0;
        local_5c = 0x7fU >> (ulong)(uVar10 & 0x1f) & (uint)(byte)bVar4;
        do {
          lVar7 = lVar14 + 1;
          lVar14 = lVar14 + 1;
          local_5c = (byte)pbVar9[lVar7] & 0x3f | local_5c << 6;
          pbVar8 = pbVar9 + lVar12 + 2;
        } while (uVar10 != (uint)lVar14);
      }
      else {
        pbVar8 = pbVar9 + 1;
      }
      pbVar9 = pbVar8;
      FUN_004c7528(this + 0x2c8,*(long *)(this + 0x2c8) + uVar15 * 4,&local_5c);
      bVar4 = *pbVar9;
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (bVar4 != (basic_string)0x0);
  }
  uVar15 = uVar15 << 0x20 | 0xffffffff;
  *(ulong *)this = uVar15;
  *(ulong *)(this + 8) = uVar15;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  captureJournalEntry(this,uVar2,uVar3);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c797c  rive::RawTextInput::selectionCornerRadius =====

/* rive::RawTextInput::selectionCornerRadius(float) */

void __thiscall rive::RawTextInput::selectionCornerRadius(RawTextInput *this,float param_1)

{
  if (*(float *)(this + 0x430) == param_1) {
    return;
  }
  *(float *)(this + 0x430) = param_1;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 2);
  return;
}


// ===== 004c79a0  rive::RawTextInput::fontSize =====

/* rive::RawTextInput::fontSize(float) */

void __thiscall rive::RawTextInput::fontSize(RawTextInput *this,float param_1)

{
  if (*(float *)(this + 0x18) == param_1) {
    return;
  }
  *(float *)(this + 0x18) = param_1;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  return;
}


// ===== 004c79c8  rive::RawTextInput::maxWidth =====

/* rive::RawTextInput::maxWidth(float) */

void __thiscall rive::RawTextInput::maxWidth(RawTextInput *this,float param_1)

{
  if (*(float *)(this + 0x3f0) == param_1) {
    return;
  }
  *(float *)(this + 0x3f0) = param_1;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  return;
}


// ===== 004c79f0  rive::RawTextInput::maxHeight =====

/* rive::RawTextInput::maxHeight(float) */

void __thiscall rive::RawTextInput::maxHeight(RawTextInput *this,float param_1)

{
  if (*(float *)(this + 0x3f4) == param_1) {
    return;
  }
  *(float *)(this + 0x3f4) = param_1;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  return;
}


// ===== 004c7a18  rive::RawTextInput::sizing =====

/* rive::RawTextInput::sizing(rive::TextSizing) */

void __thiscall rive::RawTextInput::sizing(RawTextInput *this,RawTextInput param_2)

{
  if (this[0x3e9] != param_2) {
    this[0x3e9] = param_2;
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  }
  return;
}


// ===== 004c7a3c  rive::RawTextInput::overflow =====

/* rive::RawTextInput::overflow(rive::TextOverflow) */

void __thiscall rive::RawTextInput::overflow(RawTextInput *this,RawTextInput param_2)

{
  if (this[0x3ea] != param_2) {
    this[0x3ea] = param_2;
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  }
  return;
}


// ===== 004c7a60  rive::RawTextInput::font =====

/* rive::RawTextInput::font(rive::rcp<rive::Font>) */

void __thiscall rive::RawTextInput::font(RawTextInput *this,RawTextInput *param_2)

{
  int iVar1;
  long *plVar2;
  RawTextInput *pRVar3;
  long *plVar4;
  
  plVar4 = *(long **)param_2;
  pRVar3 = this + 0x10;
  plVar2 = *(long **)pRVar3;
  if (plVar2 != plVar4) {
    if (pRVar3 != param_2) {
      if (plVar4 != (long *)0x0) {
        FUN_00340fb0(1,plVar4 + 1);
        plVar2 = *(long **)pRVar3;
      }
      *(long **)pRVar3 = plVar4;
      if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  }
  return;
}


// ===== 004c7af0  rive::RawTextInput::computeVisualPositionFromCursor =====

/* rive::RawTextInput::computeVisualPositionFromCursor() */

void __thiscall rive::RawTextInput::computeVisualPositionFromCursor(RawTextInput *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *(undefined8 *)(this + 8);
  auVar2 = CursorPosition::visualPosition
                     ((CursorPosition *)&local_30,(FullyShapedText *)(this + 0x2e0));
  *(undefined1 (*) [16])(this + 0x404) = auVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7b50  rive::RawTextInput::unflag =====

/* rive::RawTextInput::unflag(rive::RawTextInput::Flags) */

bool __thiscall rive::RawTextInput::unflag(RawTextInput *this,byte param_2)

{
  byte bVar1;
  
  bVar1 = (byte)this[0x3e0] & param_2;
  if (bVar1 != 0) {
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] & (param_2 ^ 0xff));
  }
  return bVar1 != 0;
}


// ===== 004c7b74  rive::RawTextInput::update =====

/* rive::RawTextInput::update(rive::Factory*) */

undefined4 __thiscall rive::RawTextInput::update(RawTextInput *this,Factory *param_1)

{
  RawTextInput RVar1;
  RawTextInput RVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  RawPath *this_00;
  float fVar6;
  undefined1 auVar7 [16];
  void *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x10) == 0) {
LAB_004c7bbc:
    uVar5 = 0;
    goto LAB_004c7da0;
  }
  RVar1 = this[0x3e0];
  if (((byte)RVar1 & 1) == 0) {
    if (((byte)RVar1 >> 1 & 1) == 0) goto LAB_004c7bbc;
    uVar5 = 2;
    RVar2 = RVar1;
LAB_004c7c3c:
    this[0x3e0] = (RawTextInput)((byte)RVar2 & 0xfd);
    Cursor::resolveLinePositions((Cursor *)this,(FullyShapedText *)(this + 0x2e0));
    local_a0 = *(void **)(this + 8);
    auVar7 = CursorPosition::visualPosition
                       ((CursorPosition *)&local_a0,(FullyShapedText *)(this + 0x2e0));
    *(undefined1 (*) [16])(this + 0x404) = auVar7;
    *(undefined8 *)(this + 0x420) = *(undefined8 *)(this + 0x418);
    Cursor::selectionRects((Cursor *)this,this + 0x418,(FullyShapedText *)(this + 0x2e0));
    TextSelectionPath::update
              (*(undefined4 *)(this + 0x430),this + 0x138,*(long *)(this + 0x418),
               *(long *)(this + 0x420) - *(long *)(this + 0x418) >> 4);
    this_00 = (RawPath *)(this + 0xf0);
    this[0xe0] = (RawTextInput)0x1;
    *(undefined8 *)(this + 0xf8) = *(undefined8 *)this_00;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    local_88 = (void *)0x0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    this[0x128] = (RawTextInput)0x0;
    *(undefined8 *)(this + 0x110) = *(undefined8 *)(this + 0x108);
    local_68 = 0;
    RawPath::move(*(undefined4 *)(this + 0x408),*(undefined4 *)(this + 0x40c),&local_a0);
    RawPath::line(*(float *)(this + 0x408) + 1.0,*(undefined4 *)(this + 0x40c),&local_a0);
    RawPath::line(*(float *)(this + 0x408) + 1.0,*(undefined4 *)(this + 0x410),&local_a0);
    RawPath::line(*(undefined4 *)(this + 0x408),*(undefined4 *)(this + 0x410),&local_a0);
    RawPath::close((RawPath *)&local_a0);
    fVar6 = (float)RawPath::computeCoarseArea((RawPath *)&local_a0);
    if (0.0 <= fVar6) {
      auVar7 = RawPath::addPath(this_00,(RawPath *)&local_a0,(Mat2D *)0x0);
    }
    else {
      auVar7 = RawPath::addPathBackwards(this_00,(RawPath *)&local_a0,(Mat2D *)0x0);
    }
    RawPath::pruneEmptySegments(this_00,auVar7._0_8_,auVar7._8_8_);
    this[0xe0] = (RawTextInput)0x1;
    if (local_88 != (void *)0x0) {
      operator_delete(local_88);
    }
    if (local_a0 != (void *)0x0) {
      operator_delete(local_a0);
    }
    if (((byte)RVar2 & 4) == 0 && ((byte)RVar1 & 1) == 0) goto LAB_004c7da0;
  }
  else {
    this[0x3e0] = (RawTextInput)((byte)RVar1 & 0xfe);
    lVar4 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2;
    *(int *)(this + 0x24) = (int)lVar4;
    uVar5 = 1;
    FullyShapedText::shape
              (*(undefined4 *)(this + 0x3f0),*(undefined4 *)(this + 0x3f4),
               *(undefined4 *)(this + 0x3e4),this + 0x2e0,*(long *)(this + 0x2c8),lVar4,this + 0x10,
               1,this[0x3e9],this[0x3eb],this[0x3ec],this[1000],this[0x3ea]);
    RVar2 = this[0x3e0];
    if (((byte)RVar2 >> 1 & 1) != 0) {
      uVar5 = 3;
      goto LAB_004c7c3c;
    }
  }
  buildTextPaths(this,param_1);
LAB_004c7da0:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7dd8  rive::RawTextInput::buildTextPaths =====

/* rive::RawTextInput::buildTextPaths(rive::Factory*) */

void __thiscall rive::RawTextInput::buildTextPaths(RawTextInput *this,Factory *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  RawTextInput RVar9;
  long lVar10;
  int iVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  RawTextInput *pRVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  long *local_e0;
  long *local_d8;
  void *local_c8;
  void *local_c0;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  long local_90;
  
  lVar10 = tpidr_el0;
  local_90 = *(long *)(lVar10 + 0x28);
  this[0x88] = (RawTextInput)0x1;
  this[0x30] = (RawTextInput)0x1;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
  RVar9 = this[0x3e0];
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x98);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x58);
  uVar29 = NEON_fcmgt(CONCAT44((float)((ulong)*(undefined8 *)(this + 0x3c8) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(this + 0x3c0) >> 0x20),
                               (float)*(undefined8 *)(this + 0x3c8) -
                               (float)*(undefined8 *)(this + 0x3c0)),0,4);
  this[0x78] = (RawTextInput)0x0;
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0xb0);
  this[0xd0] = (RawTextInput)0x0;
  if (((uint)uVar29 & (uint)((ulong)uVar29 >> 0x20) & 1) == 0) {
    plVar21 = *(long **)(this + 0x3f8);
    *(undefined8 *)(this + 0x3f8) = 0;
    if ((plVar21 != (long *)0x0) && (iVar11 = FUN_00340fe0(0xffffffff,plVar21 + 1), iVar11 == 1)) {
      if (*(long *)(lVar10 + 0x28) == local_90) {
                    /* WARNING: Could not recover jumptable at 0x004c7f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar21 + 8))(plVar21);
        return;
      }
      goto LAB_004c84c0;
    }
  }
  else {
    plVar21 = *(long **)(this + 0x3f8);
    if (this[0x3ea] == (RawTextInput)0x2) {
      if (plVar21 == (long *)0x0) {
        (**(code **)(*(long *)param_1 + 0x30))(&local_e0,param_1);
        plVar21 = local_e0;
        plVar22 = *(long **)(this + 0x3f8);
        local_e0 = (long *)0x0;
        *(long **)(this + 0x3f8) = plVar21;
        if (plVar22 != (long *)0x0) {
          iVar11 = FUN_00340fe0(0xffffffff,plVar22 + 1);
          if (iVar11 == 1) {
            (**(code **)(*plVar22 + 8))(plVar22);
          }
          plVar21 = local_e0;
          if ((local_e0 != (long *)0x0) &&
             (iVar11 = FUN_00340fe0(0xffffffff,local_e0 + 1), iVar11 == 1)) {
            pcVar12 = *(code **)(*plVar21 + 8);
            goto LAB_004c7e94;
          }
        }
      }
      else {
        pcVar12 = *(code **)(*plVar21 + 0x10);
LAB_004c7e94:
        (*pcVar12)(plVar21);
      }
      plVar21 = *(long **)(this + 0x3f8);
      fVar32 = *(float *)(this + 0x3c0);
      fVar33 = *(float *)(this + 0x3c4);
      fVar28 = *(float *)(this + 0x3c8);
      fVar30 = *(float *)(this + 0x3cc);
      (**(code **)(*plVar21 + 0x28))(fVar32,fVar33,plVar21);
      fVar28 = fVar32 + (fVar28 - fVar32);
      (**(code **)(*plVar21 + 0x30))(fVar28,fVar33,plVar21);
      fVar33 = fVar33 + (fVar30 - fVar33);
      (**(code **)(*plVar21 + 0x30))(fVar28,fVar33,plVar21);
      (**(code **)(*plVar21 + 0x30))(fVar32,fVar33,plVar21);
      pcVar12 = *(code **)(*plVar21 + 0x40);
LAB_004c7fb8:
      (*pcVar12)(plVar21);
    }
    else {
      *(undefined8 *)(this + 0x3f8) = 0;
      if ((plVar21 != (long *)0x0) && (iVar11 = FUN_00340fe0(0xffffffff,plVar21 + 1), iVar11 == 1))
      {
        pcVar12 = *(code **)(*plVar21 + 8);
        goto LAB_004c7fb8;
      }
    }
    lVar13 = *(long *)(this + 0x2f8);
    plVar21 = *(long **)(this + 0x2f0);
    if ((this[1000] == (RawTextInput)0x1) && (lVar13 != 0)) {
      if (plVar21[1] == 0) {
        fVar28 = 0.0;
      }
      else {
        fVar28 = 0.0 - *(float *)(*plVar21 + 0x18);
      }
    }
    else {
      fVar28 = 0.0;
      if (lVar13 == 0) goto LAB_004c7ffc;
    }
    plVar22 = plVar21 + lVar13 * 2;
    uVar20 = 0;
    do {
      if (plVar21[1] != 0) {
        lVar13 = *plVar21;
        uVar20 = (ulong)(int)uVar20;
        lVar1 = lVar13 + plVar21[1] * 0x20;
        do {
          if ((ulong)(*(long *)(this + 0x308) - *(long *)(this + 0x300) >> 6) <= uVar20) break;
          plVar2 = (long *)(*(long *)(this + 0x300) + uVar20 * 0x40);
          plVar14 = (long *)plVar2[3];
          puVar24 = (undefined8 *)*plVar14;
          bVar18 = *(byte *)((long)puVar24 + 0x7a);
          if ((bVar18 & 1) == 0) {
            uVar26 = *(uint *)(plVar2 + 2);
            if ((undefined8 *)*plVar2 != puVar24) {
              uVar26 = 0;
            }
          }
          else {
            if ((undefined8 *)plVar2[1] == puVar24) {
              iVar11 = *(int *)((long)plVar2 + 0x14);
            }
            else {
              iVar11 = *(int *)(puVar24 + 4);
            }
            uVar26 = iVar11 - 1;
          }
          fVar32 = *(float *)(lVar13 + 0x18);
          plVar16 = (long *)plVar2[4];
          fVar30 = *(float *)(lVar13 + 0x10);
          plVar23 = plVar14;
          while( true ) {
            if ((bVar18 & 1) == 0) {
              if ((undefined8 *)plVar2[1] == puVar24) {
                uVar27 = *(uint *)((long)plVar2 + 0x14);
              }
              else {
                uVar27 = *(uint *)(puVar24 + 4);
              }
            }
            else {
              uVar27 = (int)plVar2[2] - 1;
              if ((undefined8 *)*plVar2 != puVar24) {
                uVar27 = 0xffffffff;
              }
            }
            if ((uVar26 != uVar27) || (puVar24 == (undefined8 *)plVar16[-1])) break;
            plVar23 = plVar23 + 1;
            puVar24 = (undefined8 *)*plVar23;
            bVar18 = *(byte *)((long)puVar24 + 0x7a);
            if ((bVar18 & 1) == 0) {
              uVar26 = *(uint *)(plVar2 + 2);
              if ((undefined8 *)*plVar2 != puVar24) {
                uVar26 = 0;
              }
            }
            else if ((undefined8 *)plVar2[1] == puVar24) {
              uVar26 = *(int *)((long)plVar2 + 0x14) - 1;
            }
            else {
              uVar26 = *(int *)(puVar24 + 4) - 1;
            }
          }
          lVar4 = 0;
          if (plVar16 != plVar14) {
            lVar4 = ((ulong)((long)plVar16 - (long)plVar14) >> 3) - 1;
          }
          lVar15 = plVar14[lVar4];
          if ((*(byte *)(lVar15 + 0x7a) & 1) == 0) {
            if (plVar2[1] == lVar15) {
              uVar27 = *(uint *)((long)plVar2 + 0x14);
            }
            else {
              uVar27 = *(uint *)(lVar15 + 0x20);
            }
          }
          else {
            uVar27 = (int)plVar2[2] - 1;
            if (*plVar2 != lVar15) {
              uVar27 = 0xffffffff;
            }
          }
          while ((plVar23 != plVar14 + lVar4 || (uVar26 != uVar27))) {
            lVar15 = puVar24[0xb];
            fVar34 = *(float *)(puVar24[7] + (ulong)uVar26 * 4);
            (**(code **)(*(long *)*puVar24 + 0x58))
                      (&local_e0,(long *)*puVar24,*(undefined2 *)(puVar24[3] + (ulong)uVar26 * 2));
            local_a0 = *(float *)(puVar24 + 1);
            uStack_9c = 0;
            uStack_98 = 0;
            uVar29 = *(undefined8 *)(lVar15 + (ulong)uVar26 * 8);
            fVar33 = fVar30 + (float)uVar29;
            fVar31 = fVar28 + fVar32 + (float)((ulong)uVar29 >> 0x20);
            bVar3 = ((uint)((long)local_d8 - (long)local_e0) >> 3 & 1) != 0;
            if (bVar3) {
              *local_e0 = CONCAT44(fVar31 + (float)((ulong)*local_e0 >> 0x20) * local_a0,
                                   fVar33 + (float)*local_e0 * local_a0);
            }
            uVar17 = (ulong)bVar3;
            uVar19 = (long)local_d8 - (long)local_e0 >> 3;
            if (uVar17 < uVar19) {
              plVar16 = local_e0 + uVar17;
              do {
                uVar17 = uVar17 + 2;
                plVar16[1] = CONCAT44(fVar31 + (float)((ulong)plVar16[1] >> 0x20) * local_a0,
                                      fVar33 + (float)plVar16[1] * local_a0);
                *plVar16 = CONCAT44(fVar31 + (float)((ulong)*plVar16 >> 0x20) * local_a0,
                                    fVar33 + (float)*plVar16 * local_a0);
                plVar16 = plVar16 + 2;
              } while (uVar17 < uVar19);
            }
            if (((byte)RVar9 >> 2 & 1) == 0) {
LAB_004c8334:
              pRVar25 = this + 0x30;
            }
            else {
              uVar5 = (uint)((ulong)*(undefined8 *)this >> 0x20);
              uVar6 = (uint)((ulong)*(undefined8 *)(this + 8) >> 0x20);
              uVar8 = *(uint *)(puVar24[5] + (ulong)uVar26 * 4);
              uVar7 = uVar6;
              if (*(uint *)(this + 0xc) <= *(uint *)(this + 4)) {
                uVar7 = uVar5;
                uVar5 = uVar6;
              }
              if ((uVar8 < uVar5) || (pRVar25 = this + 0x88, uVar7 <= uVar8)) goto LAB_004c8334;
            }
            fVar33 = (float)RawPath::computeCoarseArea((RawPath *)&local_e0);
            if (0.0 <= fVar33) {
              auVar35 = RawPath::addPath((RawPath *)(pRVar25 + 0x10),(RawPath *)&local_e0,
                                         (Mat2D *)0x0);
            }
            else {
              auVar35 = RawPath::addPathBackwards
                                  ((RawPath *)(pRVar25 + 0x10),(RawPath *)&local_e0,(Mat2D *)0x0);
            }
            RawPath::pruneEmptySegments(pRVar25 + 0x10,auVar35._0_8_,auVar35._8_8_);
            *pRVar25 = (RawTextInput)0x1;
            if (local_c8 != (void *)0x0) {
              local_c0 = local_c8;
              operator_delete(local_c8);
            }
            if (local_e0 != (long *)0x0) {
              local_d8 = local_e0;
              operator_delete(local_e0);
            }
            puVar24 = (undefined8 *)*plVar23;
            fVar30 = fVar30 + fVar34;
            bVar18 = *(byte *)((long)puVar24 + 0x7a);
            uVar7 = uVar26 - 1;
            if ((bVar18 & 1) == 0) {
              uVar7 = uVar26 + 1;
            }
            while( true ) {
              uVar26 = uVar7;
              if ((bVar18 & 1) == 0) {
                if ((undefined8 *)plVar2[1] == puVar24) {
                  uVar7 = *(uint *)((long)plVar2 + 0x14);
                }
                else {
                  uVar7 = *(uint *)(puVar24 + 4);
                }
              }
              else {
                uVar7 = (int)plVar2[2] - 1;
                if ((undefined8 *)*plVar2 != puVar24) {
                  uVar7 = 0xffffffff;
                }
              }
              if ((uVar26 != uVar7) || (puVar24 == *(undefined8 **)(plVar2[4] + -8))) break;
              plVar23 = plVar23 + 1;
              puVar24 = (undefined8 *)*plVar23;
              bVar18 = *(byte *)((long)puVar24 + 0x7a);
              if ((bVar18 & 1) == 0) {
                uVar7 = *(uint *)(plVar2 + 2);
                if ((undefined8 *)*plVar2 != puVar24) {
                  uVar7 = 0;
                }
              }
              else if ((undefined8 *)plVar2[1] == puVar24) {
                uVar7 = *(int *)((long)plVar2 + 0x14) - 1;
              }
              else {
                uVar7 = *(int *)(puVar24 + 4) - 1;
              }
            }
          }
          lVar13 = lVar13 + 0x20;
          uVar20 = uVar20 + 1;
        } while (lVar13 != lVar1);
        if (plVar21[1] != 0) {
          fVar28 = fVar28 + *(float *)(*plVar21 + plVar21[1] * 0x20 + -4);
        }
      }
      plVar21 = plVar21 + 2;
      fVar28 = fVar28 + *(float *)(this + 0x3e4);
    } while (plVar21 != plVar22);
  }
LAB_004c7ffc:
  if (*(long *)(lVar10 + 0x28) == local_90) {
    return;
  }
LAB_004c84c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c84c4  rive::RawTextInput::flagged =====

/* rive::RawTextInput::flagged(rive::RawTextInput::Flags) const */

bool __thiscall rive::RawTextInput::flagged(RawTextInput *this,byte param_2)

{
  return (param_2 & (byte)this[0x3e0]) != 0;
}


// ===== 004c84d4  rive::RawTextInput::bounds =====

/* rive::RawTextInput::bounds() const */

undefined4 __thiscall rive::RawTextInput::bounds(RawTextInput *this)

{
  return *(undefined4 *)(this + 0x3c0);
}


// ===== 004c84e8  rive::RawTextInput::paragraphSpacing =====

/* rive::RawTextInput::paragraphSpacing(float) */

void __thiscall rive::RawTextInput::paragraphSpacing(RawTextInput *this,float param_1)

{
  if (*(float *)(this + 0x3e4) == param_1) {
    return;
  }
  *(float *)(this + 0x3e4) = param_1;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  return;
}


// ===== 004c8510  rive::RawTextInput::cursor =====

/* rive::RawTextInput::cursor(rive::Cursor) */

void rive::RawTextInput::cursor(long *param_1,long param_2,long param_3)

{
  if ((*param_1 == param_2) && (param_1[1] == param_3)) {
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 2;
  return;
}


// ===== 004c8540  rive::RawTextInput::selectWord =====

/* rive::RawTextInput::selectWord() */

void __thiscall rive::RawTextInput::selectWord(RawTextInput *this)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar6 = *(long *)(this + 0x2c8);
  uVar9 = *(ulong *)this;
  uVar7 = *(long *)(this + 0x2d0) - lVar6;
  uVar10 = uVar9 >> 0x20;
  uVar4 = uVar9;
  if (uVar7 < 8) {
    bVar1 = 0x10;
    uVar8 = (uVar7 >> 2) - 1;
  }
  else {
    uVar8 = ((long)uVar7 >> 2) - 1;
    if (uVar10 < uVar8) {
      bVar1 = classify(*(uint *)(lVar6 + uVar10 * 4));
      if ((bVar1 & 0xb) != 0) {
        bVar1 = 0xf4;
        goto LAB_004c8610;
      }
    }
    else {
      bVar1 = 0x10;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = (ulong)((int)(uVar9 >> 0x20) - 1);
    }
    if ((uVar11 < uVar8) && (uVar3 = classify(*(uint *)(lVar6 + uVar11 * 4)), (uVar3 & 0xb) != 0)) {
      bVar1 = 0xf4;
      uVar9 = 0xffffffff;
      uVar4 = uVar11 << 0x20 | 0xffffffff;
      uVar10 = uVar11;
      goto LAB_004c8610;
    }
  }
  bVar1 = ~bVar1;
LAB_004c8610:
  do {
    uVar11 = uVar4;
    uVar5 = (uint)(uVar11 >> 0x20);
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = uVar5 - 1;
    }
    uVar4 = (ulong)uVar3;
    if ((uVar3 == uVar5 || uVar7 < 8) || uVar8 <= uVar4) break;
    bVar2 = classify(*(uint *)(lVar6 + uVar4 * 4));
    uVar4 = uVar4 << 0x20 | 0xffffffff;
  } while ((bVar2 & bVar1) == 0);
  uVar4 = uVar9 & 0xffffffff | uVar10 << 0x20;
  do {
    uVar10 = uVar4;
    if ((uVar7 < 8) || (uVar4 = (ulong)((int)(uVar10 >> 0x20) + 1), uVar8 <= uVar4)) break;
    bVar2 = classify(*(uint *)(lVar6 + uVar4 * 4));
    uVar4 = uVar4 << 0x20 | 0xffffffff;
  } while ((bVar2 & bVar1) == 0);
  *(ulong *)this = uVar11;
  *(ulong *)(this + 8) = uVar10 + 0x100000000;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 2);
  return;
}


// ===== 004c86b8  rive::RawTextInput::classify =====

/* rive::RawTextInput::classify(unsigned int) */

undefined4 rive::RawTextInput::classify(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x21) {
    return 0x10;
  }
  if (param_1 == 0x5f) {
    return 8;
  }
  uVar1 = 0x10;
  if ((param_1 != 0x200b) && (param_1 != 0x2028)) {
    if (param_1 < 0x30) {
      return 4;
    }
    uVar1 = 4;
    if (((0x24 < param_1 - 0x5b) || ((1L << ((ulong)(param_1 - 0x5b) & 0x3f) & 0x1f0000003fU) == 0))
       && (6 < param_1 - 0x3a)) {
      uVar1 = 1;
      if (param_1 - 0x41 < 0x1a) {
        uVar1 = 2;
      }
      return uVar1;
    }
  }
  return uVar1;
}


// ===== 004c8754  rive::RawTextInput::classify =====

/* rive::RawTextInput::classify(rive::CursorPosition) const */

undefined8 __thiscall rive::RawTextInput::classify(RawTextInput *this,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8);
  if ((7 < uVar2) && (param_2 >> 0x20 < ((long)uVar2 >> 2) - 1U)) {
    uVar1 = classify(*(uint *)(*(long *)(this + 0x2c8) + (param_2 >> 0x20) * 4));
    return uVar1;
  }
  return 0x10;
}


// ===== 004c878c  rive::RawTextInput::findPosition =====

/* rive::RawTextInput::findPosition(unsigned char, rive::CursorPosition const&, int) const */

ulong __thiscall
rive::RawTextInput::findPosition
          (RawTextInput *this,uchar param_1,CursorPosition *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(this + 0x2c8);
  uVar6 = *(long *)(this + 0x2d0) - lVar5;
  uVar3 = *(ulong *)param_2;
  while( true ) {
    uVar7 = uVar3;
    uVar4 = (uint)(uVar7 >> 0x20);
    uVar1 = 0;
    if ((uint)-param_3 <= uVar4 || -1 < param_3) {
      uVar1 = uVar4 + param_3;
    }
    uVar3 = (ulong)uVar1;
    if ((uVar1 == uVar4 || uVar6 < 8) || ((long)uVar6 >> 2) - 1U <= uVar3) break;
    bVar2 = classify(*(uint *)(lVar5 + uVar3 * 4));
    uVar3 = uVar3 << 0x20 | 0xffffffff;
    if ((bVar2 & param_1) != 0) {
      return uVar7;
    }
  }
  return uVar7;
}


// ===== 004c8830  rive::RawTextInput::orderedLine =====

/* rive::RawTextInput::orderedLine(rive::CursorPosition) const */

long __thiscall rive::RawTextInput::orderedLine(RawTextInput *this,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x300) + (param_2 & 0xffffffff) * 0x40;
  if ((ulong)(*(long *)(this + 0x308) - *(long *)(this + 0x300) >> 6) <= (param_2 & 0xffffffff)) {
    lVar1 = 0;
  }
  return lVar1;
}


// ===== 004c8850  rive::RawTextInput::cursorHorizontal =====

/* rive::RawTextInput::cursorHorizontal(int, rive::CursorBoundary, bool) */

void __thiscall
rive::RawTextInput::cursorHorizontal(RawTextInput *this,uint param_1,byte param_3,uint param_4)

{
  OrderedLine *this_00;
  uint uVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (((byte)this[0x3e0] & 1) != 0) {
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] & 0xfe);
    lVar6 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2;
    *(int *)(this + 0x24) = (int)lVar6;
    FullyShapedText::shape
              (*(undefined4 *)(this + 0x3f0),*(undefined4 *)(this + 0x3f4),
               *(undefined4 *)(this + 0x3e4),this + 0x2e0,*(long *)(this + 0x2c8),lVar6,this + 0x10,
               1,this[0x3e9],this[0x3eb],this[0x3ec],this[1000],this[0x3ea]);
  }
  uVar11 = *(ulong *)(this + 8);
  uVar1 = (uint)param_3;
  *(undefined4 *)(this + 0x400) = 0xbf800000;
  uVar14 = uVar11 >> 0x20;
  uVar13 = (uint)(uVar11 >> 0x20);
  if (1 < uVar1 - 1) {
    uVar14 = uVar11;
    if (uVar1 == 3) {
      lVar6 = *(long *)(this + 0x300);
      if ((lVar6 != 0) &&
         (uVar11 = uVar11 & 0xffffffff, uVar11 < (ulong)(*(long *)(this + 0x308) - lVar6 >> 6))) {
        this_00 = (OrderedLine *)(lVar6 + uVar11 * 0x40);
        if ((int)param_1 < 0) {
          lVar6 = OrderedLine::firstCodePointIndex(this_00,(GlyphLookup *)(this + 0x318));
        }
        else {
          lVar6 = OrderedLine::lastCodePointIndex(this_00,(GlyphLookup *)(this + 0x318));
        }
        uVar14 = uVar11 | lVar6 << 0x20;
      }
      goto LAB_004c8ea0;
    }
    if (uVar1 != 0) goto LAB_004c8ea0;
    if ((int)param_1 < 0) {
      uVar11 = 0;
      if (-param_1 <= uVar13) {
        uVar11 = (ulong)(uVar13 + param_1);
        goto LAB_004c8d6c;
      }
    }
    else {
      uVar13 = uVar13 + param_1;
      uVar11 = (ulong)uVar13;
      if (param_1 == 0) {
LAB_004c8d6c:
        if ((int)uVar11 != 0) {
          lVar6 = *(long *)(this + 0x318);
          do {
            if (((uint)((ulong)(*(long *)(this + 800) - lVar6) >> 2) <= (uint)uVar11) ||
               (uVar13 = (uint)uVar11 - 1,
               *(int *)(lVar6 + uVar11 * 4) != *(int *)(lVar6 + (ulong)uVar13 * 4))) break;
            uVar11 = (ulong)uVar13;
          } while (uVar13 != 0);
        }
      }
      else {
        uVar1 = (int)((ulong)(*(long *)(this + 0x2d0) - *(long *)(this + 0x2c8)) >> 2) - 1;
        if (uVar13 < uVar1) {
          uVar14 = *(long *)(this + 800) - *(long *)(this + 0x318);
          piVar8 = (int *)(*(long *)(this + 0x318) + (ulong)uVar13 * 4);
          uVar10 = uVar14 >> 2 & 0xffffffff;
          uVar9 = (uint)(uVar14 >> 2);
          if (uVar13 <= uVar9) {
            uVar13 = uVar9;
          }
          uVar14 = uVar11;
          if (uVar11 <= uVar10) {
            uVar14 = uVar10;
          }
          do {
            if (uVar11 == 0) goto LAB_004c8e94;
            if (uVar14 == uVar11) {
              uVar11 = (ulong)uVar13;
              goto LAB_004c8e94;
            }
            if (*piVar8 != piVar8[-1]) goto LAB_004c8e94;
            uVar11 = uVar11 + 1;
            piVar8 = piVar8 + 1;
          } while (uVar11 < uVar1);
          uVar11 = (ulong)uVar1;
        }
      }
    }
LAB_004c8e94:
    uVar14 = CursorPosition::atIndex((uint)uVar11,(FullyShapedText *)(this + 0x2e0));
    goto LAB_004c8ea0;
  }
  uVar1 = param_1 >> 0x1f;
  iVar2 = (int)param_1 >> 0x1f;
  lVar6 = *(long *)(this + 0x2c8);
  uVar15 = *(long *)(this + 0x2d0) - lVar6;
  uVar10 = 0;
  if (uVar1 <= uVar13 || -1 < iVar2) {
    uVar10 = (ulong)(iVar2 + uVar13);
  }
  lVar7 = (long)uVar15 >> 2;
  if (uVar15 < 8) {
    uVar12 = (uVar15 >> 2) - 1;
LAB_004c8ad8:
    bVar4 = 0x10;
LAB_004c8adc:
    bVar5 = ~bVar4;
    bVar4 = 0;
    do {
      uVar13 = (uint)uVar14;
      uVar9 = 0;
      if (-param_1 <= uVar13 || -1 < (int)param_1) {
        uVar9 = uVar13 + param_1;
      }
      uVar14 = (ulong)uVar9;
      if (uVar9 == uVar13) break;
      bVar4 = 0x10;
      uVar11 = 0;
      if (uVar1 <= uVar9 || -1 < iVar2) {
        uVar11 = (ulong)(uVar9 + iVar2);
      }
      if ((7 < uVar15) && (uVar11 < uVar12)) {
        bVar4 = classify(*(uint *)(lVar6 + uVar11 * 4));
      }
      uVar11 = uVar14 << 0x20 | 0xffffffff;
      uVar13 = uVar9;
    } while ((bVar4 & bVar5) == 0);
  }
  else {
    uVar12 = lVar7 - 1;
    if (uVar12 <= uVar10) goto LAB_004c8ad8;
    bVar4 = classify(*(uint *)(lVar6 + uVar10 * 4));
    if ((bVar4 == 0x10) || (bVar4 == 8)) goto LAB_004c8adc;
  }
  if (bVar4 == 1) {
    if (param_3 == 2) {
      do {
        uVar9 = 0;
        if (-param_1 <= uVar13 || -1 < (int)param_1) {
          uVar9 = uVar13 + param_1;
        }
        uVar14 = uVar11;
        if (uVar9 == uVar13) goto LAB_004c8ea0;
        uVar11 = (ulong)uVar9 << 0x20 | 0xffffffff;
        uVar10 = 0;
        if (uVar1 <= uVar9 || -1 < iVar2) {
          uVar10 = (ulong)(uVar9 + iVar2);
        }
        uVar14 = uVar11;
        if ((uVar15 < 8) || (lVar7 - 1U <= uVar10)) goto LAB_004c8ea0;
        bVar4 = classify(*(uint *)(lVar6 + uVar10 * 4));
        uVar13 = uVar9;
      } while (bVar4 < 2);
      if ((param_1 == 0xffffffff) && (bVar4 == 2)) {
        uVar14 = 0xffffffff;
        if (uVar9 != 0) {
          uVar14 = (ulong)(uVar9 - 1) << 0x20 | 0xffffffff;
        }
      }
    }
    else {
      while( true ) {
        uVar9 = 0;
        if (-param_1 <= uVar13 || -1 < (int)param_1) {
          uVar9 = uVar13 + param_1;
        }
        uVar14 = uVar11;
        if (uVar9 == uVar13) break;
        uVar11 = (ulong)uVar9 << 0x20 | 0xffffffff;
        uVar10 = 0;
        if (uVar1 <= uVar9 || -1 < iVar2) {
          uVar10 = (ulong)(uVar9 + iVar2);
        }
        uVar14 = uVar11;
        if (((uVar15 < 8) || (lVar7 - 1U <= uVar10)) ||
           (uVar10 = classify(*(uint *)(lVar6 + uVar10 * 4)), uVar13 = uVar9, (uVar10 & 0x14) != 0))
        break;
      }
    }
  }
  else {
    uVar14 = uVar11;
    if (bVar4 == 2) {
      if (param_3 == 2) {
        bVar4 = 0;
        do {
          uVar9 = 0;
          if (-param_1 <= uVar13 || -1 < (int)param_1) {
            uVar9 = uVar13 + param_1;
          }
          if (uVar9 == uVar13) break;
          uVar14 = (ulong)uVar9 << 0x20 | 0xffffffff;
          uVar10 = 0;
          if (uVar1 <= uVar9 || -1 < iVar2) {
            uVar10 = (ulong)(uVar9 + iVar2);
          }
          if ((uVar15 < 8) || (lVar7 - 1U <= uVar10)) goto LAB_004c8ea0;
          bVar4 = classify(*(uint *)(lVar6 + uVar10 * 4));
          uVar13 = uVar9;
        } while ((bVar4 & 0x1d) == 0);
        if ((param_1 == 1) && (bVar4 == 1)) {
          uVar1 = 0;
          if (uVar13 != 0) {
            uVar1 = uVar13 - 1;
          }
          local_70 = (ulong)uVar1 << 0x20 | 0xffffffff;
          uVar14 = local_70;
          if (uVar1 == (uint)(uVar11 >> 0x20)) {
            find(this,0xfe,(CursorPosition *)&local_70,1);
            uVar14 = local_70;
          }
        }
      }
      else {
        while( true ) {
          uVar9 = 0;
          if (-param_1 <= uVar13 || -1 < (int)param_1) {
            uVar9 = uVar13 + param_1;
          }
          if (uVar9 == uVar13) break;
          uVar14 = (ulong)uVar9 << 0x20 | 0xffffffff;
          uVar11 = 0;
          if (uVar1 <= uVar9 || -1 < iVar2) {
            uVar11 = (ulong)(uVar9 + iVar2);
          }
          if (((uVar15 < 8) || (lVar7 - 1U <= uVar11)) ||
             (uVar11 = classify(*(uint *)(lVar6 + uVar11 * 4)), uVar13 = uVar9, (uVar11 & 0x14) != 0
             )) break;
        }
      }
    }
    else if (bVar4 == 4) {
      while( true ) {
        uVar9 = 0;
        if (-param_1 <= uVar13 || -1 < (int)param_1) {
          uVar9 = uVar13 + param_1;
        }
        if (uVar9 == uVar13) break;
        uVar14 = (ulong)uVar9 << 0x20 | 0xffffffff;
        uVar11 = 0;
        if (uVar1 <= uVar9 || -1 < iVar2) {
          uVar11 = (ulong)(uVar9 + iVar2);
        }
        if (((uVar15 < 8) || (lVar7 - 1U <= uVar11)) ||
           (uVar11 = classify(*(uint *)(lVar6 + uVar11 * 4)), uVar13 = uVar9, (uVar11 & 0x1b) != 0))
        break;
      }
    }
    else {
      do {
        uVar9 = 0;
        if (-param_1 <= uVar13 || -1 < (int)param_1) {
          uVar9 = uVar13 + param_1;
        }
        uVar14 = uVar11;
        if (uVar9 == uVar13) break;
        bVar5 = 0x10;
        uVar11 = 0;
        if (uVar1 <= uVar9 || -1 < iVar2) {
          uVar11 = (ulong)(uVar9 + iVar2);
        }
        if ((7 < uVar15) && (uVar11 < lVar7 - 1U)) {
          bVar5 = classify(*(uint *)(lVar6 + uVar11 * 4));
        }
        uVar11 = (ulong)uVar9 << 0x20 | 0xffffffff;
        uVar14 = uVar11;
        uVar13 = uVar9;
      } while ((bVar5 & ~bVar4) == 0);
    }
  }
LAB_004c8ea0:
  if ((param_4 & 1) == 0) {
    *(ulong *)this = uVar14;
  }
  *(ulong *)(this + 8) = uVar14;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 2);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c8ef8  rive::RawTextInput::find =====

/* rive::RawTextInput::find(unsigned char, rive::CursorPosition&, int) const */

undefined8 __thiscall
rive::RawTextInput::find(RawTextInput *this,uchar param_1,CursorPosition *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  do {
    uVar3 = *(uint *)(param_2 + 4);
    uVar1 = 0;
    if ((uint)-param_3 <= uVar3 || -1 < param_3) {
      uVar1 = uVar3 + param_3;
    }
    if (uVar1 == uVar3) {
      return uVar4;
    }
    *(ulong *)param_2 = (ulong)uVar1 << 0x20 | 0xffffffff;
    uVar2 = 0;
    if ((uint)param_3 >> 0x1f <= uVar1 || -1 < param_3 >> 0x1f) {
      uVar2 = (ulong)(uVar1 + (param_3 >> 0x1f));
    }
    uVar5 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8);
    if ((uVar5 < 8) || (((long)uVar5 >> 2) - 1U <= uVar2)) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = classify(*(uint *)(*(long *)(this + 0x2c8) + uVar2 * 4));
    }
  } while (((uint)uVar4 & (uint)param_1) == 0);
  return uVar4;
}


// ===== 004c8fc4  rive::RawTextInput::empty =====

/* rive::RawTextInput::empty() const */

bool __thiscall rive::RawTextInput::empty(RawTextInput *this)

{
  return (ulong)(*(long *)(this + 0x2d0) - *(long *)(this + 0x2c8)) < 8;
}


// ===== 004c8fdc  rive::RawTextInput::length =====

/* rive::RawTextInput::length() const */

long __thiscall rive::RawTextInput::length(RawTextInput *this)

{
  long lVar1;
  
  lVar1 = 0;
  if (7 < (ulong)(*(long *)(this + 0x2d0) - *(long *)(this + 0x2c8))) {
    lVar1 = (*(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2) + -1;
  }
  return lVar1;
}


// ===== 004c8ffc  rive::RawTextInput::cursorLeft =====

/* rive::RawTextInput::cursorLeft(rive::CursorBoundary, bool) */

void __thiscall
rive::RawTextInput::cursorLeft(RawTextInput *this,undefined4 param_2,undefined4 param_3)

{
  cursorHorizontal(this,0xffffffff,param_2,param_3);
  return;
}


// ===== 004c900c  rive::RawTextInput::cursorRight =====

/* rive::RawTextInput::cursorRight(rive::CursorBoundary, bool) */

void __thiscall
rive::RawTextInput::cursorRight(RawTextInput *this,undefined4 param_2,undefined4 param_3)

{
  cursorHorizontal(this,1,param_2,param_3);
  return;
}


// ===== 004c901c  rive::RawTextInput::cursorUp =====

/* rive::RawTextInput::cursorUp(bool) */

void __thiscall rive::RawTextInput::cursorUp(RawTextInput *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  if (((byte)this[0x3e0] & 1) != 0) {
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] & 0xfe);
    lVar4 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2;
    *(int *)(this + 0x24) = (int)lVar4;
    FullyShapedText::shape
              (*(undefined4 *)(this + 0x3f0),*(undefined4 *)(this + 0x3f4),
               *(undefined4 *)(this + 0x3e4),this + 0x2e0,*(long *)(this + 0x2c8),lVar4,this + 0x10,
               1,this[0x3e9],this[0x3eb],this[0x3ec],this[1000],this[0x3ea]);
  }
  fVar5 = *(float *)(this + 0x400);
  if (fVar5 == -1.0) {
    fVar5 = *(float *)(this + 0x408);
    *(float *)(this + 0x400) = fVar5;
  }
  iVar2 = *(int *)(this + 8);
  if (iVar2 != 0) {
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = iVar2 - 1;
    }
    if ((ulong)uVar1 < (ulong)(*(long *)(this + 0x308) - *(long *)(this + 0x300) >> 6)) {
      uVar3 = CursorPosition::fromOrderedLine
                        ((OrderedLine *)(*(long *)(this + 0x300) + (ulong)uVar1 * 0x40),uVar1,fVar5,
                         (FullyShapedText *)(this + 0x2e0));
      goto joined_r0x004c90e4;
    }
  }
  uVar3 = 0;
joined_r0x004c90e4:
  if (!param_1) {
    *(undefined8 *)this = uVar3;
  }
  *(undefined8 *)(this + 8) = uVar3;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 2);
  return;
}


// ===== 004c910c  rive::RawTextInput::cursorDown =====

/* rive::RawTextInput::cursorDown(bool) */

void __thiscall rive::RawTextInput::cursorDown(RawTextInput *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  if (((byte)this[0x3e0] & 1) != 0) {
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] & 0xfe);
    lVar2 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2;
    *(int *)(this + 0x24) = (int)lVar2;
    FullyShapedText::shape
              (*(undefined4 *)(this + 0x3f0),*(undefined4 *)(this + 0x3f4),
               *(undefined4 *)(this + 0x3e4),this + 0x2e0,*(long *)(this + 0x2c8),lVar2,this + 0x10,
               1,this[0x3e9],this[0x3eb],this[0x3ec],this[1000],this[0x3ea]);
  }
  fVar7 = *(float *)(this + 0x400);
  if (fVar7 == -1.0) {
    fVar7 = *(float *)(this + 0x408);
    *(float *)(this + 0x400) = fVar7;
  }
  uVar3 = *(long *)(this + 0x308) - *(long *)(this + 0x300);
  uVar1 = *(int *)(this + 8) + 1;
  uVar5 = uVar3 >> 6;
  uVar4 = (uint)uVar5;
  if (((uVar4 == 0) || (uVar1 < uVar4)) ||
     (uVar6 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2, uVar6 < 2)) {
    if ((ulong)uVar1 < (ulong)((long)uVar3 >> 6)) {
      uVar3 = CursorPosition::fromOrderedLine
                        ((OrderedLine *)(*(long *)(this + 0x300) + (ulong)uVar1 * 0x40),uVar1,fVar7,
                         (FullyShapedText *)(this + 0x2e0));
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = uVar5 + 0xffffffff & 0xffffffff | (ulong)((int)uVar6 - 1) << 0x20;
  }
  if (!param_1) {
    *(ulong *)this = uVar3;
  }
  *(ulong *)(this + 8) = uVar3;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 2);
  return;
}


// ===== 004c9238  rive::RawTextInput::moveCursorTo =====

/* rive::RawTextInput::moveCursorTo(rive::Vec2D, bool) */

void rive::RawTextInput::moveCursorTo(float param_1,float param_2,undefined8 *param_3,ulong param_4)

{
  OrderedLine *pOVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  OrderedLine *pOVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_3 + 0x7c) & 1) != 0) {
    *(byte *)(param_3 + 0x7c) = *(byte *)(param_3 + 0x7c) & 0xfe;
    lVar4 = (long)(param_3[0x5a] - param_3[0x59]) >> 2;
    *(int *)((long)param_3 + 0x24) = (int)lVar4;
    FullyShapedText::shape
              (*(undefined4 *)(param_3 + 0x7e),*(undefined4 *)((long)param_3 + 0x3f4),
               *(undefined4 *)((long)param_3 + 0x3e4),param_3 + 0x5c,param_3[0x59],lVar4,param_3 + 2
               ,1,*(undefined1 *)((long)param_3 + 0x3e9),*(undefined1 *)((long)param_3 + 0x3eb),
               *(undefined1 *)((long)param_3 + 0x3ec),*(undefined1 *)(param_3 + 0x7d),
               *(undefined1 *)((long)param_3 + 0x3ea));
  }
  pOVar1 = (OrderedLine *)param_3[0x60];
  pOVar5 = (OrderedLine *)param_3[0x61];
  *(undefined4 *)(param_3 + 0x80) = 0xbf800000;
  if (pOVar1 != pOVar5) {
    uVar6 = (long)pOVar5 - (long)pOVar1;
    uVar3 = 0;
    do {
      if (param_2 <=
          (*(float *)(pOVar1 + 0x38) - *(float *)(*(long *)(pOVar1 + 0x30) + 0x18)) +
          *(float *)(*(long *)(pOVar1 + 0x30) + 0x1c) || (int)(uVar6 >> 6) - 1U == uVar3) {
        uVar2 = CursorPosition::fromOrderedLine
                          (pOVar1,uVar3,param_1,(FullyShapedText *)(param_3 + 0x5c));
        goto joined_r0x004c934c;
      }
      pOVar1 = pOVar1 + 0x40;
      uVar3 = uVar3 + 1;
    } while (pOVar1 != pOVar5);
  }
  uVar2 = 0;
joined_r0x004c934c:
  if ((param_4 & 1) == 0) {
    *param_3 = uVar2;
  }
  param_3[1] = uVar2;
  *(byte *)(param_3 + 0x7c) = *(byte *)(param_3 + 0x7c) | 2;
  return;
}


// ===== 004c9354  rive::RawTextInput::setTextPrivate =====

/* rive::RawTextInput::setTextPrivate(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall rive::RawTextInput::setTextPrivate(RawTextInput *this,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  byte *pbVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  *(uint **)(this + 0x2d0) = *(uint **)(this + 0x2c8);
  bVar2 = *pbVar9;
  puVar12 = *(uint **)(this + 0x2c8);
  while (bVar2 != 0) {
    uVar20 = (uint)bVar2;
    if (((char)bVar2 < '\0') && ((bVar2 >> 6 & 1) != 0)) {
      lVar10 = 0;
      uVar5 = uVar20;
      do {
        lVar6 = lVar10;
        lVar10 = lVar6 + 1;
        uVar1 = uVar5 >> 5;
        uVar5 = uVar5 << 1;
      } while ((uVar1 & 1) != 0);
      uVar5 = (uint)lVar10;
      lVar10 = 0;
      pbVar19 = pbVar9 + lVar6 + 2;
      uVar20 = 0x7fU >> (ulong)(uVar5 & 0x1f) & uVar20;
      do {
        lVar6 = lVar10 + 1;
        lVar10 = lVar10 + 1;
        uVar20 = pbVar9[lVar6] & 0x3f | uVar20 << 6;
      } while (uVar5 != (uint)lVar10);
    }
    else {
      pbVar19 = pbVar9 + 1;
    }
    if (puVar12 < *(uint **)(this + 0x2d8)) {
      puVar18 = puVar12 + 1;
      *puVar12 = uVar20;
    }
    else {
      puVar17 = *(uint **)(this + 0x2c8);
      lVar10 = (long)puVar12 - (long)puVar17 >> 2;
      uVar11 = lVar10 + 1;
      if (uVar11 >> 0x3e != 0) goto LAB_004c9674;
      uVar7 = (long)*(uint **)(this + 0x2d8) - (long)puVar17;
      uVar13 = (long)uVar7 >> 1;
      if (uVar13 <= uVar11) {
        uVar13 = uVar11;
      }
      if (0x7ffffffffffffffb < uVar7) {
        uVar13 = 0x3fffffffffffffff;
      }
      if (uVar13 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (uVar13 >> 0x3e != 0) goto LAB_004c9678;
        pvVar4 = operator_new(uVar13 << 2);
      }
      puVar8 = (uint *)((long)pvVar4 + lVar10 * 4);
      puVar18 = puVar8 + 1;
      *puVar8 = uVar20;
      if ((long)puVar12 - (long)puVar17 != 0) {
        uVar11 = ((long)puVar12 - (long)puVar17) - 4;
        if ((0x1b < uVar11) &&
           (0x1f < (ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar17) - (long)pvVar4)))) {
          puVar15 = puVar8 + -4;
          puVar16 = puVar12 + -4;
          uVar11 = (uVar11 >> 2) + 1;
          uVar14 = uVar11 & 0x7ffffffffffffff8;
          puVar12 = puVar12 + -uVar14;
          uVar7 = uVar14;
          do {
            puVar3 = puVar16 + -2;
            uVar23 = *(undefined8 *)(puVar16 + -4);
            uVar22 = *(undefined8 *)(puVar16 + 2);
            uVar21 = *(undefined8 *)puVar16;
            uVar7 = uVar7 - 8;
            puVar16 = puVar16 + -8;
            *(undefined8 *)(puVar15 + -2) = *(undefined8 *)puVar3;
            *(undefined8 *)(puVar15 + -4) = uVar23;
            *(undefined8 *)(puVar15 + 2) = uVar22;
            *(undefined8 *)puVar15 = uVar21;
            puVar15 = puVar15 + -8;
          } while (uVar7 != 0);
          puVar8 = puVar8 + -uVar14;
          if (uVar11 == uVar14) goto LAB_004c9508;
        }
        do {
          puVar12 = puVar12 + -1;
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar12;
        } while (puVar12 != puVar17);
      }
LAB_004c9508:
      *(uint **)(this + 0x2c8) = puVar8;
      *(uint **)(this + 0x2d0) = puVar18;
      *(void **)(this + 0x2d8) = (void *)((long)pvVar4 + uVar13 * 4);
      if (puVar17 != (uint *)0x0) {
        operator_delete(puVar17);
      }
    }
    *(uint **)(this + 0x2d0) = puVar18;
    puVar12 = puVar18;
    pbVar9 = pbVar19;
    bVar2 = *pbVar19;
  }
  if (puVar12 < *(uint **)(this + 0x2d8)) {
    puVar18 = puVar12 + 1;
    *puVar12 = 0x200b;
    goto LAB_004c9654;
  }
  puVar17 = *(uint **)(this + 0x2c8);
  lVar10 = (long)puVar12 - (long)puVar17 >> 2;
  uVar11 = lVar10 + 1;
  if (uVar11 >> 0x3e != 0) {
LAB_004c9674:
                    /* WARNING: Subroutine does not return */
    FUN_003b1ebc();
  }
  uVar7 = (long)*(uint **)(this + 0x2d8) - (long)puVar17;
  uVar13 = (long)uVar7 >> 1;
  if (uVar13 <= uVar11) {
    uVar13 = uVar11;
  }
  if (0x7ffffffffffffffb < uVar7) {
    uVar13 = 0x3fffffffffffffff;
  }
  if (uVar13 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar13 >> 0x3e != 0) {
LAB_004c9678:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar4 = operator_new(uVar13 << 2);
  }
  puVar8 = (uint *)((long)pvVar4 + lVar10 * 4);
  puVar18 = puVar8 + 1;
  *puVar8 = 0x200b;
  if ((long)puVar12 - (long)puVar17 != 0) {
    uVar11 = ((long)puVar12 - (long)puVar17) - 4;
    if ((0x1b < uVar11) &&
       (0x1f < (ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar17) - (long)pvVar4)))) {
      puVar15 = puVar8 + -4;
      puVar16 = puVar12 + -4;
      uVar11 = (uVar11 >> 2) + 1;
      uVar14 = uVar11 & 0x7ffffffffffffff8;
      puVar12 = puVar12 + -uVar14;
      uVar7 = uVar14;
      do {
        puVar3 = puVar16 + -2;
        uVar23 = *(undefined8 *)(puVar16 + -4);
        uVar22 = *(undefined8 *)(puVar16 + 2);
        uVar21 = *(undefined8 *)puVar16;
        uVar7 = uVar7 - 8;
        puVar16 = puVar16 + -8;
        *(undefined8 *)(puVar15 + -2) = *(undefined8 *)puVar3;
        *(undefined8 *)(puVar15 + -4) = uVar23;
        *(undefined8 *)(puVar15 + 2) = uVar22;
        *(undefined8 *)puVar15 = uVar21;
        puVar15 = puVar15 + -8;
      } while (uVar7 != 0);
      puVar8 = puVar8 + -uVar14;
      if (uVar11 == uVar14) goto LAB_004c963c;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar12;
    } while (puVar12 != puVar17);
  }
LAB_004c963c:
  *(uint **)(this + 0x2c8) = puVar8;
  *(uint **)(this + 0x2d0) = puVar18;
  *(void **)(this + 0x2d8) = (void *)((long)pvVar4 + uVar13 * 4);
  if (puVar17 != (uint *)0x0) {
    operator_delete(puVar17);
  }
LAB_004c9654:
  *(uint **)(this + 0x2d0) = puVar18;
  return;
}


// ===== 004c967c  rive::RawTextInput::text =====

/* rive::RawTextInput::text(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall rive::RawTextInput::text(RawTextInput *this,ulong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)this;
  uVar2 = *(undefined8 *)(this + 8);
  if ((*param_2 & 1) == 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = (void *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,(char *)param_2[2],param_2[1]);
  }
  setTextPrivate(this,&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  captureJournalEntry(this,uVar1,uVar2);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c9738  rive::RawTextInput::textPreserveCursor =====

/* rive::RawTextInput::textPreserveCursor(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall rive::RawTextInput::textPreserveCursor(RawTextInput *this,ulong *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x400) = 0xbf800000;
  uVar5 = *(undefined8 *)(this + 8);
  uVar3 = *(undefined8 *)this;
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
  setTextPrivate(this,&local_40);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  iVar1 = 0;
  if (7 < (ulong)(*(long *)(this + 0x2d0) - *(long *)(this + 0x2c8))) {
    iVar1 = (int)((ulong)(*(long *)(this + 0x2d0) - *(long *)(this + 0x2c8)) >> 2) + -1;
  }
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  uVar4 = NEON_umin(CONCAT44(iVar1,iVar1),
                    CONCAT44((int)((ulong)uVar5 >> 0x20),(int)((ulong)uVar3 >> 0x20)),4);
  *(ulong *)(this + 8) = uVar4 & 0xffffffff00000000 | 0xffffffff;
  *(ulong *)this = uVar4 << 0x20 | 0xffffffff;
  captureJournalEntry(this,uVar3,uVar5);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c9830  rive::RawTextInput::undo =====

/* rive::RawTextInput::undo() */

void __thiscall rive::RawTextInput::undo(RawTextInput *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(this + 0x450);
  if (uVar1 != 0) {
    lVar3 = *(long *)(this + 0x438) + (ulong)(uVar1 - 1) * 0x38;
    puVar4 = (undefined8 *)(*(long *)(this + 0x438) + (ulong)uVar1 * 0x38);
    if ((*(byte *)(lVar3 + 0x20) & 1) == 0) {
      local_40 = *(void **)(lVar3 + 0x30);
      uStack_48 = *(undefined8 *)(lVar3 + 0x28);
      local_50 = *(ulong *)(lVar3 + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(lVar3 + 0x30),*(ulong *)(lVar3 + 0x28));
    }
    setTextPrivate(this,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    uVar5 = *puVar4;
    *(undefined8 *)(this + 8) = puVar4[1];
    *(undefined8 *)this = uVar5;
    *(int *)(this + 0x450) = *(int *)(this + 0x450) + -1;
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c9904  rive::RawTextInput::redo =====

/* rive::RawTextInput::redo() */

void __thiscall rive::RawTextInput::redo(RawTextInput *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(this + 0x438);
  if ((lVar4 != *(long *)(this + 0x440)) &&
     (uVar2 = (*(long *)(this + 0x440) - lVar4 >> 3) * 0x6db6db6db6db6db7,
     uVar5 = (ulong)(*(int *)(this + 0x450) + 1), uVar5 <= uVar2 && uVar2 - uVar5 != 0)) {
    lVar3 = lVar4 + uVar5 * 0x38;
    if ((*(byte *)(lVar3 + 0x20) & 1) == 0) {
      local_40 = *(void **)(lVar3 + 0x30);
      uStack_48 = *(undefined8 *)(lVar3 + 0x28);
      local_50 = *(ulong *)(lVar3 + 0x20);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,*(char **)(lVar3 + 0x30),*(ulong *)(lVar3 + 0x28));
    }
    setTextPrivate(this,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    lVar4 = lVar4 + uVar5 * 0x38;
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    *(int *)(this + 0x450) = *(int *)(this + 0x450) + 1;
    *(undefined8 *)(this + 8) = uVar7;
    *(undefined8 *)this = uVar6;
    this[0x3e0] = (RawTextInput)((byte)this[0x3e0] | 0xb);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c9a08  rive::RawTextInput::separateSelectionText =====

/* rive::RawTextInput::separateSelectionText() const */

byte __thiscall rive::RawTextInput::separateSelectionText(RawTextInput *this)

{
  return (byte)this[0x3e0] >> 2 & 1;
}


// ===== 004c9a14  rive::RawTextInput::separateSelectionText =====

/* rive::RawTextInput::separateSelectionText(bool) */

void __thiscall rive::RawTextInput::separateSelectionText(RawTextInput *this,bool param_1)

{
  byte bVar1;
  
  bVar1 = 4;
  if (!param_1) {
    bVar1 = 0;
  }
  this[0x3e0] = (RawTextInput)((byte)this[0x3e0] & 0xf0 | bVar1 | 0xb);
  return;
}


// ===== 004c9a3c  rive::RawTextInput::measure =====

/* rive::RawTextInput::measure(float, float) */

undefined4 __thiscall rive::RawTextInput::measure(RawTextInput *this,float param_1,float param_2)

{
  RawTextInput RVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  if (*(long *)(this + 0x10) == 0) {
    return 0;
  }
  lVar2 = *(long *)(this + 0x3d0);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)operator_new(0xf0);
    pvVar4 = malloc(4);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    puVar3[0x13] = pvVar4;
    if (pvVar4 != (void *)0x0) {
      puVar3[0x14] = 1;
    }
    RVar1 = this[0x3e0];
    puVar3[0x18] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x15] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1c] = 0;
    *(undefined8 **)(this + 0x3d0) = puVar3;
    if (((byte)RVar1 >> 3 & 1) != 0) goto LAB_004c9b14;
  }
  else {
    RVar1 = this[0x3e0];
    if (((byte)RVar1 >> 3 & 1) == 0) {
      if (*(float *)(this + 0x3dc) == param_2 && *(float *)(this + 0x3d8) == param_1)
      goto LAB_004c9b74;
    }
    else {
LAB_004c9b14:
      this[0x3e0] = (RawTextInput)((byte)RVar1 & 0xf7);
    }
  }
  *(int *)(this + 0x24) = (int)(*(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 2);
  FullyShapedText::shape(param_1,param_2,*(undefined4 *)(this + 0x3e4));
  lVar2 = *(long *)(this + 0x3d0);
  *(float *)(this + 0x3d8) = param_1;
  *(float *)(this + 0x3dc) = param_2;
LAB_004c9b74:
  return *(undefined4 *)(lVar2 + 0xe0);
}


// ===== 004c9b94  rive::GlyphLookup::compute =====

/* rive::GlyphLookup::compute(rive::Span<unsigned int const>, rive::SimpleArray<rive::Paragraph>
   const&) */

void rive::GlyphLookup::compute(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar10 = param_1[1] - *param_1 >> 2;
  uVar8 = param_3 + 1;
  if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
    if (uVar8 < uVar10) {
      param_1[1] = *param_1 + uVar8 * 4;
    }
  }
  else {
    FUN_0047ac1c(param_1,uVar8 - uVar10);
  }
  if (param_4[1] == 0) {
    uVar8 = 0;
    iVar9 = -1;
  }
  else {
    plVar11 = (long *)*param_4;
    iVar9 = 0;
    plVar12 = plVar11 + param_4[1] * 3;
    uVar8 = 0;
    do {
      if (plVar11[1] != 0) {
        lVar14 = *plVar11;
        lVar15 = lVar14 + plVar11[1] * 0x90;
        do {
          lVar16 = *(long *)(lVar14 + 0x20);
          if (lVar16 != 0) {
            lVar18 = *param_1;
            lVar2 = *(long *)(lVar14 + 0x28);
            lVar17 = 0;
            uVar10 = uVar8;
            do {
              uVar8 = (ulong)*(uint *)(lVar2 + lVar17 * 4);
              if (uVar10 < uVar8) {
                uVar4 = uVar8 - uVar10;
                iVar1 = iVar9 + -1;
                if (7 < uVar4) {
                  uVar6 = uVar4 & 0xfffffffffffffff8;
                  puVar7 = (undefined8 *)(lVar18 + 0x10 + uVar10 * 4);
                  uVar13 = uVar6;
                  do {
                    puVar7[-1] = CONCAT44(iVar1,iVar1);
                    puVar7[-2] = CONCAT44(iVar1,iVar1);
                    puVar7[1] = CONCAT44(iVar1,iVar1);
                    *puVar7 = CONCAT44(iVar1,iVar1);
                    uVar13 = uVar13 - 8;
                    puVar7 = puVar7 + 4;
                  } while (uVar13 != 0);
                  if (uVar4 == uVar6) goto LAB_004c9c50;
                  uVar10 = uVar6 + uVar10;
                }
                lVar3 = uVar8 - uVar10;
                piVar5 = (int *)(lVar18 + uVar10 * 4);
                do {
                  lVar3 = lVar3 + -1;
                  *piVar5 = iVar1;
                  piVar5 = piVar5 + 1;
                } while (lVar3 != 0);
              }
LAB_004c9c50:
              lVar17 = lVar17 + 1;
              iVar9 = iVar9 + 1;
              uVar10 = uVar8;
            } while (lVar17 != lVar16);
          }
          lVar14 = lVar14 + 0x90;
        } while (lVar14 != lVar15);
      }
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar12);
    iVar9 = iVar9 + -1;
  }
  lVar14 = *param_1;
  uVar10 = param_3 - uVar8;
  if (param_3 < uVar8 || uVar10 == 0) goto LAB_004c9d30;
  if (uVar10 < 8) {
LAB_004c9d18:
    lVar15 = param_3 - uVar8;
    piVar5 = (int *)(lVar14 + uVar8 * 4);
    do {
      lVar15 = lVar15 + -1;
      *piVar5 = iVar9;
      piVar5 = piVar5 + 1;
    } while (lVar15 != 0);
  }
  else {
    uVar13 = uVar10 & 0xfffffffffffffff8;
    puVar7 = (undefined8 *)(lVar14 + uVar8 * 4 + 0x10);
    uVar4 = uVar13;
    do {
      puVar7[-1] = CONCAT44(iVar9,iVar9);
      puVar7[-2] = CONCAT44(iVar9,iVar9);
      puVar7[1] = CONCAT44(iVar9,iVar9);
      *puVar7 = CONCAT44(iVar9,iVar9);
      uVar4 = uVar4 - 8;
      puVar7 = puVar7 + 4;
    } while (uVar4 != 0);
    if (uVar10 != uVar13) {
      uVar8 = uVar8 + uVar13;
      goto LAB_004c9d18;
    }
  }
  lVar14 = *param_1;
LAB_004c9d30:
  if (param_3 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(lVar14 + param_3 * 4 + -4) + 1;
  }
  *(int *)(lVar14 + param_3 * 4) = iVar9;
  return;
}


// ===== 004c9d5c  rive::GlyphLookup::count =====

/* rive::GlyphLookup::count(unsigned int) const */

int __thiscall rive::GlyphLookup::count(GlyphLookup *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar2 = *(long *)this;
  uVar1 = param_1 + 1;
  uVar4 = (uint)((ulong)(*(long *)(this + 8) - lVar2) >> 2);
  if (uVar4 <= uVar1) {
    return 1;
  }
  lVar3 = 0;
  do {
    if (*(int *)(lVar2 + (ulong)uVar1 * 4 + lVar3 * 4) != *(int *)(lVar2 + (ulong)param_1 * 4)) {
      return (int)lVar3 + 1;
    }
    lVar3 = lVar3 + 1;
  } while (((ulong)(*(long *)(this + 8) - lVar2) >> 2 & 0xffffffff) - (ulong)uVar1 != lVar3);
  return uVar4 - param_1;
}


// ===== 004c9db8  rive::GlyphLookup::glyphStart =====

/* rive::GlyphLookup::glyphStart(unsigned int) const */

ulong __thiscall rive::GlyphLookup::glyphStart(GlyphLookup *this,uint param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_1;
  if ((param_1 != 0) &&
     (lVar1 = *(long *)this, param_1 < (uint)((ulong)(*(long *)(this + 8) - lVar1) >> 2))) {
    uVar2 = (ulong)param_1;
    do {
      uVar3 = uVar2;
      if (uVar3 == 0) break;
      uVar2 = uVar3 - 1;
    } while (*(int *)(lVar1 + -4 + uVar3 * 4) == *(int *)(lVar1 + (ulong)param_1 * 4));
  }
  return uVar3 & 0xffffffff;
}


// ===== 004c9dfc  rive::GlyphLookup::isGlyphBoundary =====

/* rive::GlyphLookup::isGlyphBoundary(unsigned int) const */

bool __thiscall rive::GlyphLookup::isGlyphBoundary(GlyphLookup *this,uint param_1)

{
  long lVar1;
  
  if ((param_1 != 0) &&
     (lVar1 = *(long *)this, param_1 < (uint)((ulong)(*(long *)(this + 8) - lVar1) >> 2))) {
    return *(int *)(lVar1 + (ulong)param_1 * 4) != *(int *)(lVar1 + (ulong)(param_1 - 1) * 4);
  }
  return true;
}


// ===== 004c9e34  rive::GlyphLookup::advanceFactor =====

/* rive::GlyphLookup::advanceFactor(int, bool) const */

float __thiscall rive::GlyphLookup::advanceFactor(GlyphLookup *this,int param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  if (-1 < param_1) {
    lVar1 = *(long *)this;
    lVar6 = *(long *)(this + 8) - lVar1 >> 2;
    if (param_1 < (int)lVar6) {
      uVar4 = (ulong)(uint)param_1;
      iVar2 = *(int *)(lVar1 + (ulong)(uint)param_1 * 4);
      uVar7 = uVar4;
      do {
        uVar3 = uVar7;
        if ((long)uVar3 < 1) {
          uVar3 = 0;
          break;
        }
        uVar7 = uVar3 - 1;
      } while (*(int *)(lVar1 + -4 + uVar3 * 4) == iVar2);
      uVar7 = lVar6 - 1;
      if (uVar7 <= uVar4) {
        uVar7 = uVar4;
      }
      do {
        uVar5 = uVar4;
        uVar8 = uVar7;
        if (uVar7 == uVar5) break;
        uVar4 = uVar5 + 1;
        uVar8 = uVar5;
      } while (*(int *)(lVar1 + 4 + uVar5 * 4) == iVar2);
      fVar9 = (float)(param_1 - (int)uVar3) / (float)(((int)uVar8 - (int)uVar3) + 1);
      fVar10 = 1.0 - fVar9;
      if (!param_2) {
        fVar10 = fVar9;
      }
    }
  }
  return fVar10;
}


// ===== 004c9edc  rive::CursorPosition::visualPosition =====

/* rive::CursorPosition::visualPosition(rive::FullyShapedText const&) const */

undefined1  [16] __thiscall
rive::CursorPosition::visualPosition(CursorPosition *this,FullyShapedText *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 6) <= (ulong)*(uint *)this) {
    fVar20 = 0.0;
    fVar21 = 0.0;
    uVar7 = 0;
    goto LAB_004ca350;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)this * 0x40);
  uVar2 = *(uint *)(this + 4);
  uVar7 = (ulong)uVar2;
  lVar10 = *(long *)(param_1 + 0x38);
  plVar15 = (long *)plVar1[3];
  plVar8 = (long *)*plVar15;
  bVar6 = *(byte *)((long)plVar8 + 0x7a);
  if ((bVar6 & 1) == 0) {
    uVar3 = *(uint *)(plVar1 + 2);
    if ((long *)*plVar1 != plVar8) {
      uVar3 = 0;
    }
  }
  else {
    if ((long *)plVar1[1] == plVar8) {
      iVar11 = *(int *)((long)plVar1 + 0x14);
    }
    else {
      iVar11 = (int)plVar8[4];
    }
    uVar3 = iVar11 - 1;
  }
  uVar5 = (ulong)uVar3;
  iVar11 = *(int *)(lVar10 + uVar7 * 4);
  fVar20 = *(float *)(plVar1[6] + 0x10);
  plVar12 = plVar15;
  while (uVar3 = (uint)uVar5, (bVar6 & 1) != 0) {
    uVar17 = (int)plVar1[2] - 1;
    if ((long *)*plVar1 != plVar8) {
      uVar17 = 0xffffffff;
    }
joined_r0x004c9fb4:
    if (uVar3 != uVar17) goto LAB_004c9ff8;
LAB_004c9fb8:
    plVar13 = (long *)plVar1[4];
    if (plVar8 == (long *)plVar13[-1]) goto LAB_004c9ffc;
    plVar12 = plVar12 + 1;
    plVar8 = (long *)*plVar12;
    bVar6 = *(byte *)((long)plVar8 + 0x7a);
    if ((bVar6 & 1) == 0) {
      uVar3 = *(uint *)(plVar1 + 2);
      if ((long *)*plVar1 != plVar8) {
        uVar3 = 0;
      }
      uVar5 = (ulong)uVar3;
    }
    else if ((long *)plVar1[1] == plVar8) {
      uVar5 = (ulong)(*(int *)((long)plVar1 + 0x14) - 1);
    }
    else {
      uVar5 = (ulong)((int)plVar8[4] - 1);
    }
  }
  if ((long *)plVar1[1] == plVar8) {
    uVar17 = *(uint *)((long)plVar1 + 0x14);
    goto joined_r0x004c9fb4;
  }
  if (uVar3 == *(uint *)(plVar8 + 4)) goto LAB_004c9fb8;
LAB_004c9ff8:
  plVar13 = (long *)plVar1[4];
LAB_004c9ffc:
  lVar18 = 0;
  if (plVar13 != plVar15) {
    lVar18 = ((ulong)((long)plVar13 - (long)plVar15) >> 3) - 1;
  }
  plVar15 = plVar15 + lVar18;
  lVar18 = *plVar15;
  if ((*(byte *)(lVar18 + 0x7a) & 1) == 0) {
    if (plVar1[1] == lVar18) {
      uVar17 = *(uint *)((long)plVar1 + 0x14);
    }
    else {
      uVar17 = *(uint *)(lVar18 + 0x20);
    }
  }
  else {
    uVar17 = (int)plVar1[2] - 1;
    if (*plVar1 != lVar18) {
      uVar17 = 0xffffffff;
    }
  }
  fVar21 = fVar20;
  if (plVar12 == plVar15 && uVar3 == uVar17) {
    uVar19 = 0;
    uVar3 = 0;
LAB_004ca250:
    uVar17 = uVar2 - uVar19;
    if (uVar2 < uVar19 || uVar2 - uVar19 == 0) {
      uVar17 = uVar19 - uVar2;
    }
    uVar19 = uVar2 - uVar3;
    if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
      uVar19 = uVar3 - uVar2;
    }
    plVar8 = (long *)plVar13[-1];
    if (uVar19 <= uVar17) {
      fVar20 = fVar21;
    }
  }
  else {
    fVar22 = *(float *)(plVar8[7] + uVar5 * 4);
    uVar19 = *(uint *)(plVar8[5] + uVar5 * 4);
    if ((fVar22 == 0.0) || (iVar11 != *(int *)(lVar10 + (ulong)uVar19 * 4))) {
      fVar21 = fVar20 + fVar22;
      uVar4 = uVar3 - 1;
      if ((bVar6 & 1) == 0) {
        uVar4 = uVar3 + 1;
      }
      while( true ) {
        if ((bVar6 & 1) == 0) {
          if ((long *)plVar1[1] == plVar8) {
            uVar3 = *(uint *)((long)plVar1 + 0x14);
          }
          else {
            uVar3 = *(uint *)(plVar8 + 4);
          }
        }
        else {
          uVar3 = (int)plVar1[2] - 1;
          if ((long *)*plVar1 != plVar8) {
            uVar3 = 0xffffffff;
          }
        }
        if ((uVar4 != uVar3) || (plVar8 == (long *)plVar13[-1])) break;
        plVar12 = plVar12 + 1;
        plVar8 = (long *)*plVar12;
        bVar6 = *(byte *)((long)plVar8 + 0x7a);
        if ((bVar6 & 1) == 0) {
          uVar4 = *(uint *)(plVar1 + 2);
          if ((long *)*plVar1 != plVar8) {
            uVar4 = 0;
          }
        }
        else if ((long *)plVar1[1] == plVar8) {
          uVar4 = *(int *)((long)plVar1 + 0x14) - 1;
        }
        else {
          uVar4 = (int)plVar8[4] - 1;
        }
      }
      plVar9 = plVar8;
      if ((plVar12 != plVar15) || (uVar3 = uVar19, uVar4 != uVar17)) {
        do {
          plVar8 = plVar9;
          uVar5 = (ulong)uVar4;
          fVar22 = *(float *)(plVar8[7] + (ulong)uVar4 * 4);
          if ((fVar22 != 0.0) &&
             (iVar11 == *(int *)(lVar10 + (ulong)*(uint *)(plVar8[5] + uVar5 * 4) * 4)))
          goto LAB_004ca280;
          fVar21 = fVar21 + fVar22;
          bVar6 = *(byte *)((long)plVar8 + 0x7a);
          plVar9 = plVar8;
          uVar3 = uVar4 - 1;
          if ((bVar6 & 1) == 0) {
            uVar3 = uVar4 + 1;
          }
          while( true ) {
            uVar4 = uVar3;
            if ((bVar6 & 1) == 0) {
              if ((long *)plVar1[1] == plVar9) {
                uVar3 = *(uint *)((long)plVar1 + 0x14);
              }
              else {
                uVar3 = *(uint *)(plVar9 + 4);
              }
            }
            else {
              uVar3 = (int)plVar1[2] - 1;
              if ((long *)*plVar1 != plVar9) {
                uVar3 = 0xffffffff;
              }
            }
            if ((uVar4 != uVar3) || (plVar9 == (long *)plVar13[-1])) break;
            plVar12 = plVar12 + 1;
            plVar9 = (long *)*plVar12;
            bVar6 = *(byte *)((long)plVar9 + 0x7a);
            if ((bVar6 & 1) == 0) {
              uVar3 = *(uint *)(plVar1 + 2);
              if ((long *)*plVar1 != plVar9) {
                uVar3 = 0;
              }
            }
            else if ((long *)plVar1[1] == plVar9) {
              uVar3 = *(int *)((long)plVar1 + 0x14) - 1;
            }
            else {
              uVar3 = (int)plVar9[4] - 1;
            }
          }
        } while ((plVar12 != plVar15) || (uVar4 != uVar17));
        uVar3 = *(uint *)(plVar8[5] + uVar5 * 4);
      }
      goto LAB_004ca250;
    }
LAB_004ca280:
    fVar20 = 0.0;
    if ((-1 < (int)uVar2) &&
       (lVar18 = *(long *)(param_1 + 0x40) - lVar10 >> 2, (int)uVar2 < (int)lVar18)) {
      uVar5 = uVar7;
      do {
        uVar14 = uVar5;
        if ((long)uVar14 < 1) {
          uVar14 = 0;
          break;
        }
        uVar5 = uVar14 - 1;
      } while (*(int *)(lVar10 + -4 + uVar14 * 4) == iVar11);
      uVar5 = lVar18 - 1;
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      do {
        uVar16 = uVar5;
        if (uVar5 == uVar7) break;
        lVar18 = uVar7 * 4;
        uVar16 = uVar7;
        uVar7 = uVar7 + 1;
      } while (*(int *)(lVar10 + 4 + lVar18) == iVar11);
      fVar20 = (float)(int)(uVar2 - (int)uVar14) / (float)(((int)uVar16 - (int)uVar14) + 1);
      if ((*(byte *)((long)plVar8 + 0x7a) & 1) != 0) {
        fVar20 = 1.0 - fVar20;
      }
    }
    fVar20 = (float)NEON_fmadd(fVar22,fVar20,fVar21);
  }
  uVar7 = (ulong)(uint)fVar20 << 0x20 | 1;
  fVar20 = *(float *)(plVar1 + 7) + (float)*(undefined8 *)(*plVar8 + 0xc) * *(float *)(plVar8 + 1);
  fVar21 = *(float *)(plVar1 + 7) +
           (float)((ulong)*(undefined8 *)(*plVar8 + 0xc) >> 0x20) * *(float *)(plVar8 + 1);
LAB_004ca350:
  auVar23._12_4_ = fVar21;
  auVar23._8_4_ = fVar20;
  auVar23._0_8_ = uVar7;
  return auVar23;
}


// ===== 004ca360  rive::CursorPosition::fromTranslation =====

/* rive::CursorPosition::fromTranslation(rive::Vec2D, rive::FullyShapedText const&) */

undefined8 __thiscall
rive::CursorPosition::fromTranslation(float param_1,float param_2,CursorPosition *this)

{
  OrderedLine *pOVar1;
  undefined8 uVar2;
  uint uVar3;
  OrderedLine *pOVar4;
  ulong uVar5;
  
  pOVar1 = *(OrderedLine **)(this + 0x20);
  pOVar4 = *(OrderedLine **)(this + 0x28);
  if (pOVar1 != pOVar4) {
    uVar5 = (long)pOVar4 - (long)pOVar1;
    uVar3 = 0;
    do {
      if (param_2 <=
          (*(float *)(pOVar1 + 0x38) - *(float *)(*(long *)(pOVar1 + 0x30) + 0x18)) +
          *(float *)(*(long *)(pOVar1 + 0x30) + 0x1c) || (int)(uVar5 >> 6) - 1U == uVar3) {
        uVar2 = fromOrderedLine(pOVar1,uVar3,param_1,(FullyShapedText *)this);
        return uVar2;
      }
      pOVar1 = pOVar1 + 0x40;
      uVar3 = uVar3 + 1;
    } while (pOVar1 != pOVar4);
  }
  return 0;
}


// ===== 004ca3c0  rive::CursorPosition::fromOrderedLine =====

/* rive::CursorPosition::fromOrderedLine(rive::OrderedLine const&, unsigned int, float,
   rive::FullyShapedText const&) */

undefined8
rive::CursorPosition::fromOrderedLine
          (OrderedLine *param_1,uint param_2,float param_3,FullyShapedText *param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  plVar13 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x20);
  lVar11 = 0;
  if (plVar2 != plVar13) {
    lVar11 = ((ulong)((long)plVar2 - (long)plVar13) >> 3) - 1;
  }
  plVar1 = plVar13 + lVar11;
  lVar11 = *plVar1;
  if ((*(byte *)(lVar11 + 0x7a) & 1) == 0) {
    if (*(long *)(param_1 + 8) == lVar11) {
      uVar14 = *(uint *)(param_1 + 0x14);
    }
    else {
      uVar14 = *(uint *)(lVar11 + 0x20);
    }
  }
  else {
    uVar14 = *(int *)(param_1 + 0x10) - 1;
    if (*(long *)param_1 != lVar11) {
      uVar14 = 0xffffffff;
    }
  }
  lVar11 = *plVar13;
  bVar5 = *(byte *)(lVar11 + 0x7a);
  if ((bVar5 & 1) == 0) {
    lVar18 = *(long *)param_1;
    lVar16 = *(long *)(param_1 + 8);
    uVar19 = *(uint *)(param_1 + 0x10);
    uVar8 = uVar19;
    if (lVar18 != lVar11) {
      uVar8 = 0;
    }
  }
  else {
    lVar16 = *(long *)(param_1 + 8);
    if (lVar16 == lVar11) {
      iVar12 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar12 = *(int *)(lVar11 + 0x20);
    }
    lVar18 = *(long *)param_1;
    uVar19 = *(uint *)(param_1 + 0x10);
    uVar8 = iVar12 - 1;
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar17 = uVar19 - 1;
  plVar10 = plVar13 + 1;
  lVar4 = lVar11;
  if ((bVar5 & 1) != 0) goto LAB_004ca4a4;
  do {
    uVar9 = uVar3;
    if (lVar16 != lVar4) {
      uVar9 = *(uint *)(lVar4 + 0x20);
    }
LAB_004ca4ac:
    if ((uVar8 != uVar9) || (lVar4 == plVar2[-1])) {
      if ((bVar5 & 1) == 0) goto LAB_004ca51c;
LAB_004ca4f0:
      uVar9 = uVar3;
      if (lVar16 != lVar11) {
        uVar9 = *(uint *)(lVar11 + 0x20);
      }
      uVar9 = uVar9 - 1;
      if ((bVar5 & 1) != 0) goto LAB_004ca528;
      do {
        uVar6 = uVar3;
        if (lVar16 != lVar11) {
          uVar6 = *(uint *)(lVar11 + 0x20);
        }
        while( true ) {
          if ((uVar9 != uVar6) || (lVar11 == plVar2[-1])) {
            fVar20 = *(float *)(*(long *)(param_1 + 0x30) + 0x10);
            if ((plVar13 != plVar1) || (uVar9 != uVar14)) goto LAB_004ca608;
            uVar7 = (ulong)uVar8;
            goto LAB_004ca6f8;
          }
          plVar13 = plVar13 + 1;
          lVar11 = *plVar13;
          bVar5 = *(byte *)(lVar11 + 0x7a);
          if ((bVar5 & 1) != 0) goto LAB_004ca4f0;
LAB_004ca51c:
          uVar9 = uVar19;
          if (lVar18 != lVar11) {
            uVar9 = 0;
          }
          if ((bVar5 & 1) == 0) break;
LAB_004ca528:
          uVar6 = uVar17;
          if (lVar18 != lVar11) {
            uVar6 = 0xffffffff;
          }
        }
      } while( true );
    }
    lVar4 = *plVar10;
    if ((*(byte *)(lVar4 + 0x7a) & 1) == 0) {
      uVar8 = uVar19;
      if (lVar18 != lVar4) {
        uVar8 = 0;
      }
    }
    else {
      uVar8 = uVar3;
      if (lVar16 != lVar4) {
        uVar8 = *(uint *)(lVar4 + 0x20);
      }
      uVar8 = uVar8 - 1;
    }
    plVar10 = plVar10 + 1;
  } while ((*(byte *)(lVar4 + 0x7a) & 1) == 0);
LAB_004ca4a4:
  uVar9 = uVar17;
  if (lVar18 != lVar4) {
    uVar9 = 0xffffffff;
  }
  goto LAB_004ca4ac;
  while (uVar3 = uVar3 + 1, uVar19 = uVar14, uVar14 != uVar3) {
LAB_004ca678:
    uVar19 = uVar3;
    if (*(int *)(lVar16 + (ulong)uVar3 * 4) != *(int *)(lVar16 + (ulong)uVar8 * 4)) break;
  }
LAB_004ca694:
  uVar14 = 0;
  if (iVar12 - 1U != 0) {
    uVar14 = iVar12 - 2;
  }
  uVar3 = 0;
  if (*(long *)(param_4 + 0x40) != lVar16) {
    uVar3 = uVar14;
  }
  uVar17 = (uint)(fVar21 * (float)(uVar19 - uVar8));
  uVar14 = 0;
  if (uVar17 <= uVar19) {
    uVar14 = uVar19 - uVar17;
  }
  uVar8 = uVar8 + uVar17;
  if ((*(byte *)(lVar11 + 0x7a) & 1) != 0) {
    uVar8 = uVar14;
  }
  if (uVar8 <= uVar3) {
    uVar3 = uVar8;
  }
  iVar12 = (int)((ulong)(*(long *)(param_4 + 0x28) - *(long *)(param_4 + 0x20)) >> 6);
  uVar14 = 0;
  if (iVar12 != 0) {
    uVar14 = iVar12 - 1;
  }
  if (param_2 <= uVar14) {
    uVar14 = param_2;
  }
  goto LAB_004ca784;
  while( true ) {
    bVar5 = *(byte *)(lVar11 + 0x7a);
    uVar8 = uVar9 - 1;
    plVar13 = plVar10;
    if ((bVar5 & 1) == 0) {
      uVar8 = uVar9 + 1;
    }
    while( true ) {
      uVar9 = uVar8;
      if ((bVar5 & 1) == 0) {
        uVar8 = uVar3;
        if (lVar16 != lVar11) {
          uVar8 = *(uint *)(lVar11 + 0x20);
        }
      }
      else {
        uVar8 = uVar17;
        if (lVar18 != lVar11) {
          uVar8 = 0xffffffff;
        }
      }
      if ((uVar9 != uVar8) || (lVar11 == plVar2[-1])) break;
      plVar13 = plVar13 + 1;
      lVar11 = *plVar13;
      bVar5 = *(byte *)(lVar11 + 0x7a);
      if ((bVar5 & 1) == 0) {
        uVar8 = uVar19;
        if (lVar18 != lVar11) {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = uVar3;
        if (lVar16 != lVar11) {
          uVar8 = *(uint *)(lVar11 + 0x20);
        }
        uVar8 = uVar8 - 1;
      }
    }
    fVar20 = fVar21;
    if ((plVar13 == plVar1) && (uVar9 == uVar14)) break;
LAB_004ca608:
    plVar10 = plVar13;
    uVar7 = (ulong)uVar9;
    fVar22 = *(float *)(*(long *)(lVar11 + 0x38) + (ulong)uVar9 * 4);
    fVar21 = fVar20 + fVar22;
    if (fVar21 < param_3 == (NAN(fVar21) || NAN(param_3))) {
      fVar21 = 1.0;
      if (fVar22 != 0.0) {
        fVar22 = (param_3 - fVar20) / fVar22;
        fVar21 = 1.0;
        if (fVar22 == 1.0 || fVar22 < 1.0 != NAN(fVar22)) {
          fVar21 = fVar22;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
      }
      lVar16 = *(long *)(param_4 + 0x38);
      uVar8 = *(uint *)(*(long *)(lVar11 + 0x28) + uVar7 * 4);
      iVar12 = (int)((ulong)(*(long *)(param_4 + 0x40) - lVar16) >> 2);
      uVar14 = 0;
      if (iVar12 != 0) {
        uVar14 = iVar12 - 1U;
      }
      uVar19 = uVar8;
      if (uVar8 == uVar14) goto LAB_004ca694;
      uVar3 = uVar8;
      goto LAB_004ca678;
    }
  }
  lVar4 = *plVar10;
LAB_004ca6f8:
  lVar11 = *(long *)(param_4 + 0x38);
  uVar8 = *(uint *)(*(long *)(lVar4 + 0x28) + uVar7 * 4);
  iVar12 = (int)((ulong)(*(long *)(param_4 + 0x40) - lVar11) >> 2);
  uVar14 = 0;
  if (iVar12 != 0) {
    uVar14 = iVar12 - 1U;
  }
  uVar19 = uVar8;
  if (uVar8 != uVar14) {
    uVar3 = uVar8;
    do {
      uVar19 = uVar3;
      if (*(int *)(lVar11 + (ulong)uVar3 * 4) != *(int *)(lVar11 + (ulong)uVar8 * 4)) break;
      uVar3 = uVar3 + 1;
      uVar19 = uVar14;
    } while (uVar14 != uVar3);
  }
  if ((*(byte *)(lVar4 + 0x7a) & 1) != 0) {
    uVar19 = uVar8;
  }
  iVar15 = (int)((ulong)(*(long *)(param_4 + 0x28) - *(long *)(param_4 + 0x20)) >> 6);
  uVar14 = 0;
  if (iVar15 != 0) {
    uVar14 = iVar15 - 1;
  }
  if (param_2 <= uVar14) {
    uVar14 = param_2;
  }
  uVar8 = 0;
  if (iVar12 - 1U != 0) {
    uVar8 = iVar12 - 2;
  }
  uVar3 = 0;
  if (*(long *)(param_4 + 0x40) != lVar11) {
    uVar3 = uVar8;
  }
  if (uVar19 <= uVar3) {
    uVar3 = uVar19;
  }
LAB_004ca784:
  return CONCAT44(uVar3,uVar14);
}


// ===== 004ca790  rive::CursorPosition::clamped =====

/* rive::CursorPosition::clamped(rive::FullyShapedText const&) const */

undefined8 __thiscall rive::CursorPosition::clamped(CursorPosition *this,FullyShapedText *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) >> 2);
  uVar1 = 0;
  if (iVar3 != 1) {
    uVar1 = iVar3 - 2;
  }
  uVar2 = 0;
  if (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x38)) {
    uVar2 = uVar1;
  }
  iVar3 = (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 6);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar3 - 1;
  }
  if (*(uint *)this <= uVar1) {
    uVar1 = *(uint *)this;
  }
  if (*(uint *)(this + 4) <= uVar2) {
    uVar2 = *(uint *)(this + 4);
  }
  return CONCAT44(uVar2,uVar1);
}


// ===== 004ca7e0  rive::CursorPosition::fromLineX =====

/* rive::CursorPosition::fromLineX(unsigned int, float, rive::FullyShapedText const&) */

undefined8 rive::CursorPosition::fromLineX(uint param_1,float param_2,FullyShapedText *param_3)

{
  undefined8 uVar1;
  
  if ((ulong)param_1 < (ulong)(*(long *)(param_3 + 0x28) - *(long *)(param_3 + 0x20) >> 6)) {
    uVar1 = fromOrderedLine((OrderedLine *)(*(long *)(param_3 + 0x20) + (ulong)param_1 * 0x40),
                            param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 004ca80c  rive::CursorPosition::lineIndex =====

/* rive::CursorPosition::lineIndex(int) const */

int __thiscall rive::CursorPosition::lineIndex(CursorPosition *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)-param_1 <= *(uint *)this || -1 < param_1) {
    iVar1 = *(uint *)this + param_1;
  }
  return iVar1;
}


// ===== 004ca828  rive::CursorPosition::codePointIndex =====

/* rive::CursorPosition::codePointIndex(int) const */

int __thiscall rive::CursorPosition::codePointIndex(CursorPosition *this,int param_1)

{
  uint uVar1;
  
  if (param_1 < 0) {
    uVar1 = *(uint *)(this + 4);
    if (uVar1 < (uint)-param_1) {
      return 0;
    }
  }
  else {
    uVar1 = *(uint *)(this + 4);
  }
  return uVar1 + param_1;
}


// ===== 004ca850  rive::CursorPosition::atIndex =====

/* rive::CursorPosition::atIndex(unsigned int, rive::FullyShapedText const&) */

undefined8 rive::CursorPosition::atIndex(uint param_1,FullyShapedText *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  
  iVar4 = (int)((ulong)(*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38)) >> 2);
  uVar6 = 0;
  if (iVar4 != 1) {
    uVar6 = iVar4 - 2;
  }
  uVar3 = 0;
  if (*(long *)(param_2 + 0x40) != *(long *)(param_2 + 0x38)) {
    uVar3 = uVar6;
  }
  if (param_1 < uVar3) {
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      puVar8 = *(undefined8 **)(param_2 + 0x10);
      uVar6 = 0;
      iVar4 = 0;
      puVar1 = puVar8 + *(long *)(param_2 + 0x18) * 2;
      do {
        if (puVar8[1] != 0) {
          puVar10 = (uint *)*puVar8;
          puVar2 = puVar10 + puVar8[1] * 8;
          do {
            if (param_1 < *(uint *)(*(long *)(*(long *)(*(long *)param_2 + (ulong)uVar6 * 0x18) +
                                              (ulong)*puVar10 * 0x90 + 0x28) + (ulong)puVar10[1] * 4
                                   )) {
              lVar9 = *(long *)(param_2 + 0x20);
              lVar7 = *(long *)(param_2 + 0x28);
              uVar5 = iVar4 - 1;
              goto LAB_004ca924;
            }
            puVar10 = puVar10 + 8;
            iVar4 = iVar4 + 1;
          } while (puVar10 != puVar2);
        }
        puVar8 = puVar8 + 2;
        uVar6 = uVar6 + 1;
      } while (puVar8 != puVar1);
      uVar5 = iVar4 - 1;
    }
    lVar9 = *(long *)(param_2 + 0x20);
    lVar7 = *(long *)(param_2 + 0x28);
LAB_004ca924:
    iVar4 = (int)((ulong)(lVar7 - lVar9) >> 6);
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = iVar4 - 1;
    }
    if (uVar5 <= uVar6) {
      uVar6 = uVar5;
    }
    if (param_1 <= uVar3) {
      uVar3 = param_1;
    }
  }
  else {
    iVar4 = (int)((ulong)(*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20)) >> 6);
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = iVar4 - 1;
    }
  }
  return CONCAT44(uVar3,uVar6);
}


// ===== 004ca958  rive::Cursor::selectionRects =====

/* rive::Cursor::selectionRects(std::__ndk1::vector<rive::AABB, std::__ndk1::allocator<rive::AABB>
   >&, rive::FullyShapedText const&) const */

void __thiscall rive::Cursor::selectionRects(Cursor *this,vector *param_1,FullyShapedText *param_2)

{
  ulong uVar1;
  long *plVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  bool bVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  float *pfVar21;
  byte bVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  undefined8 *puVar27;
  float *pfVar28;
  float *pfVar29;
  long *plVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  iVar14 = (int)((ulong)(*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38)) >> 2);
  uVar7 = 0;
  if (iVar14 != 1) {
    uVar7 = iVar14 - 2;
  }
  uVar24 = *(ulong *)(this + 8);
  uVar31 = *(ulong *)this;
  if (*(uint *)(this + 0xc) <= *(uint *)(this + 4)) {
    uVar24 = *(ulong *)this;
    uVar31 = *(ulong *)(this + 8);
  }
  uVar6 = 0;
  if (*(long *)(param_2 + 0x40) != *(long *)(param_2 + 0x38)) {
    uVar6 = uVar7;
  }
  iVar14 = (int)((ulong)(*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20)) >> 6);
  uVar7 = 0;
  if (iVar14 != 0) {
    uVar7 = iVar14 - 1;
  }
  uVar4 = uVar7;
  if ((uint)uVar31 <= uVar7) {
    uVar4 = (uint)uVar31;
  }
  uVar18 = (uint)(uVar31 >> 0x20);
  uVar5 = uVar6;
  if (uVar18 <= uVar6) {
    uVar5 = uVar18;
  }
  uVar18 = (uint)(uVar24 >> 0x20);
  if (uVar18 <= uVar6) {
    uVar6 = uVar18;
  }
  uVar18 = (uint)uVar24;
  if (uVar4 <= uVar18) {
    uVar26 = uVar7;
    if (uVar18 <= uVar7) {
      uVar26 = uVar18;
    }
    uVar24 = (ulong)uVar7;
    if ((uVar31 & 0xffffffff) <= (ulong)uVar7) {
      uVar24 = uVar31 & 0xffffffff;
    }
    uVar7 = uVar4;
    if (uVar4 <= uVar26) {
      uVar7 = uVar26;
    }
    iVar14 = (int)uVar24;
    do {
      plVar2 = (long *)(*(long *)(param_2 + 0x20) + uVar24 * 0x40);
      plVar15 = (long *)plVar2[3];
      puVar27 = (undefined8 *)*plVar15;
      bVar22 = *(byte *)((long)puVar27 + 0x7a);
      if ((bVar22 & 1) == 0) {
        uVar18 = *(uint *)(plVar2 + 2);
        if ((undefined8 *)*plVar2 != puVar27) {
          uVar18 = 0;
        }
      }
      else {
        if ((undefined8 *)plVar2[1] == puVar27) {
          iVar19 = *(int *)((long)plVar2 + 0x14);
        }
        else {
          iVar19 = *(int *)(puVar27 + 4);
        }
        uVar18 = iVar19 - 1;
      }
      uVar31 = (ulong)uVar18;
      fVar36 = *(float *)(plVar2[6] + 0x10);
      plVar20 = (long *)plVar2[4];
      plVar30 = plVar15;
      while( true ) {
        if ((bVar22 & 1) == 0) {
          if ((undefined8 *)plVar2[1] == puVar27) {
            iVar19 = *(int *)((long)plVar2 + 0x14);
          }
          else {
            iVar19 = *(int *)(puVar27 + 4);
          }
        }
        else {
          iVar19 = (int)plVar2[2] + -1;
          if ((undefined8 *)*plVar2 != puVar27) {
            iVar19 = -1;
          }
        }
        if (((int)uVar31 != iVar19) || (puVar27 == (undefined8 *)plVar20[-1])) break;
        plVar30 = plVar30 + 1;
        puVar27 = (undefined8 *)*plVar30;
        bVar22 = *(byte *)((long)puVar27 + 0x7a);
        if ((bVar22 & 1) == 0) {
          uVar18 = *(uint *)(plVar2 + 2);
          if ((undefined8 *)*plVar2 != puVar27) {
            uVar18 = 0;
          }
          uVar31 = (ulong)uVar18;
        }
        else if ((undefined8 *)plVar2[1] == puVar27) {
          uVar31 = (ulong)(*(int *)((long)plVar2 + 0x14) - 1);
        }
        else {
          uVar31 = (ulong)(*(int *)(puVar27 + 4) - 1);
        }
      }
      lVar16 = 0;
      if (plVar20 != plVar15) {
        lVar16 = ((ulong)((long)plVar20 - (long)plVar15) >> 3) - 1;
      }
      plVar15 = plVar15 + lVar16;
      lVar16 = *plVar15;
      if ((*(byte *)(lVar16 + 0x7a) & 1) == 0) {
        if (plVar2[1] == lVar16) {
          iVar19 = *(int *)((long)plVar2 + 0x14);
        }
        else {
          iVar19 = *(int *)(lVar16 + 0x20);
        }
      }
      else {
        iVar19 = (int)plVar2[2] + -1;
        if (*plVar2 != lVar16) {
          iVar19 = -1;
        }
      }
      if ((plVar30 != plVar15) || ((int)uVar31 != iVar19)) {
        do {
          lVar16 = *(long *)(param_2 + 0x38);
          uVar9 = *(uint *)(puVar27[5] + uVar31 * 4);
          uVar18 = uVar9 + 1;
          uVar26 = (uint)((ulong)(*(long *)(param_2 + 0x40) - lVar16) >> 2);
          if (uVar18 < uVar26) {
            lVar25 = 0;
            uVar26 = uVar26 - uVar9;
            do {
              if (*(int *)(lVar16 + (ulong)uVar18 * 4 + lVar25 * 4) !=
                  *(int *)(lVar16 + (ulong)uVar9 * 4)) {
                uVar26 = (int)lVar25 + 1;
                break;
              }
              lVar25 = lVar25 + 1;
            } while (((ulong)(*(long *)(param_2 + 0x40) - lVar16) >> 2 & 0xffffffff) - (ulong)uVar18
                     != lVar25);
            uVar18 = uVar26 + uVar9;
          }
          else {
            uVar26 = 1;
          }
          fVar37 = *(float *)(puVar27[7] + uVar31 * 4);
          if ((uVar9 < uVar6) && (uVar5 < uVar18)) {
            plVar20 = (long *)*puVar27;
            uVar8 = 0;
            if (uVar9 <= uVar5) {
              uVar8 = uVar5 - uVar9;
            }
            iVar12 = 0;
            if (uVar6 <= uVar18) {
              iVar12 = uVar18 - uVar6;
            }
            fVar35 = (float)uVar8 / (float)uVar26;
            bVar11 = (*(byte *)((long)puVar27 + 0x7a) & 1) != 0;
            fVar38 = *(float *)(plVar2 + 7);
            fVar32 = (float)(uVar26 - iVar12) / (float)uVar26;
            if (bVar11) {
              fVar35 = 1.0 - fVar35;
            }
            if (bVar11) {
              fVar32 = 1.0 - fVar32;
            }
            if (plVar20 != (long *)0x0) {
              FUN_00340fb0(1,plVar20 + 1);
            }
            fVar33 = (float)NEON_fmadd(fVar37,fVar35,fVar36);
            fVar35 = (float)NEON_fmadd(fVar37,fVar32,fVar36);
            pfVar28 = *(float **)(param_1 + 8);
            fVar32 = fVar33;
            if (fVar33 == fVar35 || fVar33 < fVar35 != (NAN(fVar33) || NAN(fVar35))) {
              fVar32 = fVar35;
              fVar35 = fVar33;
            }
            fVar33 = fVar38 + *(float *)(puVar27 + 1) * *(float *)((long)plVar20 + 0xc);
            fVar38 = fVar38 + *(float *)(puVar27 + 1) * *(float *)(plVar20 + 2);
            if (pfVar28 < *(float **)(param_1 + 0x10)) {
              *pfVar28 = fVar35;
              pfVar28[1] = fVar33;
              pfVar28[2] = fVar32;
              pfVar28[3] = fVar38;
              *(float **)(param_1 + 8) = pfVar28 + 4;
            }
            else {
              pfVar29 = *(float **)param_1;
              lVar16 = (long)pfVar28 - (long)pfVar29 >> 4;
              uVar1 = lVar16 + 1;
              if (uVar1 >> 0x3c != 0) {
                FUN_004caee0();
LAB_004caedc:
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              uVar17 = (long)*(float **)(param_1 + 0x10) - (long)pfVar29;
              uVar23 = (long)uVar17 >> 3;
              if (uVar23 <= uVar1) {
                uVar23 = uVar1;
              }
              if (0x7fffffffffffffef < uVar17) {
                uVar23 = 0xfffffffffffffff;
              }
              if (uVar23 == 0) {
                pvVar13 = (void *)0x0;
              }
              else {
                if (uVar23 >> 0x3c != 0) goto LAB_004caedc;
                pvVar13 = operator_new(uVar23 << 4);
              }
              pfVar3 = (float *)((long)pvVar13 + lVar16 * 0x10);
              *pfVar3 = fVar35;
              pfVar3[1] = fVar33;
              pfVar3[2] = fVar32;
              pfVar3[3] = fVar38;
              pfVar21 = pfVar3;
              if (pfVar28 != pfVar29) {
                do {
                  pfVar10 = pfVar28 + -2;
                  uVar34 = *(undefined8 *)(pfVar28 + -4);
                  pfVar28 = pfVar28 + -4;
                  *(undefined8 *)(pfVar21 + -2) = *(undefined8 *)pfVar10;
                  *(undefined8 *)(pfVar21 + -4) = uVar34;
                  pfVar21 = pfVar21 + -4;
                } while (pfVar28 != pfVar29);
                pfVar28 = *(float **)param_1;
              }
              *(float **)param_1 = pfVar21;
              *(float **)(param_1 + 8) = pfVar3 + 4;
              *(void **)(param_1 + 0x10) = (void *)((long)pvVar13 + uVar23 * 0x10);
              if (pfVar28 != (float *)0x0) {
                operator_delete(pfVar28);
              }
              *(float **)(param_1 + 8) = pfVar3 + 4;
              if (plVar20 == (long *)0x0) goto LAB_004cae08;
            }
            iVar12 = FUN_00340fe0(0xffffffff,plVar20 + 1);
            if (iVar12 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20);
            }
          }
LAB_004cae08:
          puVar27 = (undefined8 *)*plVar30;
          fVar36 = fVar36 + fVar37;
          uVar18 = (int)uVar31 - 1;
          bVar22 = *(byte *)((long)puVar27 + 0x7a);
          if ((bVar22 & 1) == 0) {
            uVar18 = (int)uVar31 + 1;
          }
          uVar31 = (ulong)uVar18;
          while( true ) {
            if ((bVar22 & 1) == 0) {
              if ((undefined8 *)plVar2[1] == puVar27) {
                iVar12 = *(int *)((long)plVar2 + 0x14);
              }
              else {
                iVar12 = *(int *)(puVar27 + 4);
              }
            }
            else {
              iVar12 = (int)plVar2[2] + -1;
              if ((undefined8 *)*plVar2 != puVar27) {
                iVar12 = -1;
              }
            }
            if (((int)uVar31 != iVar12) || (puVar27 == *(undefined8 **)(plVar2[4] + -8))) break;
            plVar30 = plVar30 + 1;
            puVar27 = (undefined8 *)*plVar30;
            bVar22 = *(byte *)((long)puVar27 + 0x7a);
            if ((bVar22 & 1) == 0) {
              uVar18 = *(uint *)(plVar2 + 2);
              if ((undefined8 *)*plVar2 != puVar27) {
                uVar18 = 0;
              }
              uVar31 = (ulong)uVar18;
            }
            else if ((undefined8 *)plVar2[1] == puVar27) {
              uVar31 = (ulong)(*(int *)((long)plVar2 + 0x14) - 1);
            }
            else {
              uVar31 = (ulong)(*(int *)(puVar27 + 4) - 1);
            }
          }
        } while ((plVar30 != plVar15) || ((int)uVar31 != iVar19));
      }
      uVar24 = uVar24 + 1;
    } while (((uVar7 + iVar14) - uVar4) + 1 != (int)uVar24);
  }
  return;
}


// ===== 004caee0  FUN_004caee0 =====

void FUN_004caee0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004caef4  rive::Cursor::updateSelectionPath =====

/* rive::Cursor::updateSelectionPath(rive::ShapePaintPath&, std::__ndk1::vector<rive::AABB,
   std::__ndk1::allocator<rive::AABB> > const&, rive::FullyShapedText const&) const */

void rive::Cursor::updateSelectionPath
               (ShapePaintPath *param_1,vector *param_2,FullyShapedText *param_3)

{
  return;
}


// ===== 004caef8  rive::Cursor::resolveLinePositions =====

/* rive::Cursor::resolveLinePositions(rive::FullyShapedText const&) */

bool __thiscall rive::Cursor::resolveLinePositions(Cursor *this,FullyShapedText *param_1)

{
  OrderedLine *pOVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  OrderedLine *pOVar5;
  int iVar6;
  
  bVar3 = *(int *)this == -1;
  if (bVar3) {
    pOVar5 = *(OrderedLine **)(param_1 + 0x20);
    pOVar1 = *(OrderedLine **)(param_1 + 0x28);
    if (pOVar5 == pOVar1) {
      iVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(this + 4);
      iVar6 = 0;
      do {
        uVar4 = OrderedLine::firstCodePointIndex(pOVar5,(GlyphLookup *)(param_1 + 0x38));
        if ((uVar4 <= uVar2) &&
           (uVar4 = OrderedLine::lastCodePointIndex(pOVar5,(GlyphLookup *)(param_1 + 0x38)),
           uVar2 <= uVar4)) break;
        pOVar5 = pOVar5 + 0x40;
        iVar6 = iVar6 + 1;
      } while (pOVar5 != pOVar1);
    }
    *(int *)this = iVar6;
  }
  if (*(int *)(this + 8) == -1) {
    pOVar5 = *(OrderedLine **)(param_1 + 0x20);
    pOVar1 = *(OrderedLine **)(param_1 + 0x28);
    if (pOVar5 == pOVar1) {
      iVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(this + 0xc);
      iVar6 = 0;
      do {
        uVar4 = OrderedLine::firstCodePointIndex(pOVar5,(GlyphLookup *)(param_1 + 0x38));
        if ((uVar4 <= uVar2) &&
           (uVar4 = OrderedLine::lastCodePointIndex(pOVar5,(GlyphLookup *)(param_1 + 0x38)),
           uVar2 <= uVar4)) break;
        pOVar5 = pOVar5 + 0x40;
        iVar6 = iVar6 + 1;
      } while (pOVar5 != pOVar1);
    }
    bVar3 = true;
    *(int *)(this + 8) = iVar6;
  }
  return bVar3;
}


// ===== 004cb00c  rive::CursorPosition::resolveLine =====

/* rive::CursorPosition::resolveLine(rive::FullyShapedText const&) */

void __thiscall rive::CursorPosition::resolveLine(CursorPosition *this,FullyShapedText *param_1)

{
  OrderedLine *pOVar1;
  uint uVar2;
  uint uVar3;
  OrderedLine *this_00;
  int iVar4;
  
  this_00 = *(OrderedLine **)(param_1 + 0x20);
  pOVar1 = *(OrderedLine **)(param_1 + 0x28);
  if (this_00 == pOVar1) {
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(this + 4);
    iVar4 = 0;
    do {
      uVar3 = OrderedLine::firstCodePointIndex(this_00,(GlyphLookup *)(param_1 + 0x38));
      if ((uVar3 <= uVar2) &&
         (uVar3 = OrderedLine::lastCodePointIndex(this_00,(GlyphLookup *)(param_1 + 0x38)),
         uVar2 <= uVar3)) break;
      this_00 = this_00 + 0x40;
      iVar4 = iVar4 + 1;
    } while (this_00 != pOVar1);
  }
  *(int *)this = iVar4;
  return;
}


// ===== 004cb098  rive::Cursor::contains =====

/* rive::Cursor::contains(unsigned int) const */

bool __thiscall rive::Cursor::contains(Cursor *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)((ulong)*(undefined8 *)this >> 0x20);
  uVar3 = (uint)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  uVar1 = uVar3;
  if (*(uint *)(this + 0xc) <= *(uint *)(this + 4)) {
    uVar1 = uVar2;
    uVar2 = uVar3;
  }
  return (param_1 >= uVar2 && param_1 <= uVar1) && (param_1 < uVar2 || uVar1 != param_1);
}


// ===== 004cb0c8  rive::FullyShapedText::shape =====

/* rive::FullyShapedText::shape(rive::Span<unsigned int>, rive::Span<rive::TextRun>,
   rive::TextSizing, float, float, rive::TextAlign, rive::TextWrap, rive::TextOrigin,
   rive::TextOverflow, float) */

void rive::FullyShapedText::shape
               (float param_1,float param_2,float param_3,long *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 *param_7,undefined8 param_8,char param_9,
               undefined4 param_10,undefined4 param_11,char param_12,char param_13)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar15;
  GlyphLine *pGVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long local_148;
  long *local_138;
  long *local_120;
  long lStack_118;
  undefined8 local_110;
  void *local_108;
  void *pvStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 *puVar14;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  Font::shapeText((Font *)&local_120,*param_7);
  plVar19 = (long *)*param_4;
  lVar17 = param_4[1];
  if (0 < lVar17) {
    plVar11 = plVar19;
    do {
      FUN_004c53c0(*plVar11,*plVar11 + plVar11[1] * 0x90);
      plVar18 = plVar11 + 3;
      free((void *)*plVar11);
      plVar11 = plVar18;
    } while (plVar18 < plVar19 + lVar17 * 3);
    plVar19 = (long *)*param_4;
  }
  free(plVar19);
  *param_4 = (long)local_120;
  param_4[1] = lStack_118;
  GlyphLookup::compute(param_4 + 7,param_5,param_6,param_4);
  fVar20 = -1.0;
  if (param_9 != '\0') {
    fVar20 = param_1;
  }
  Text::BreakLines((Text *)&local_120,fVar20,param_4,param_10,param_11);
  puVar15 = (undefined8 *)param_4[2];
  lVar17 = param_4[3];
  if (0 < lVar17) {
    puVar13 = puVar15;
    do {
      puVar14 = puVar13 + 2;
      free((void *)*puVar13);
      puVar13 = puVar14;
    } while (puVar14 < puVar15 + lVar17 * 2);
    puVar15 = (undefined8 *)param_4[2];
  }
  free(puVar15);
  lVar17 = param_4[4];
  lVar9 = param_4[5];
  param_4[2] = (long)local_120;
  param_4[3] = lStack_118;
  for (; lVar9 != lVar17; lVar9 = lVar9 + -0x40) {
    pvVar5 = *(void **)(lVar9 + -0x28);
    if (pvVar5 != (void *)0x0) {
      *(void **)(lVar9 + -0x20) = pvVar5;
      operator_delete(pvVar5);
    }
  }
  param_4[5] = lVar17;
  local_120 = (long *)0x0;
  local_d8 = malloc(4);
  pvStack_100 = (void *)0x0;
  local_108 = (void *)0x0;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  uStack_e0 = 0;
  local_e8 = (void *)0x0;
  uStack_d0 = (ulong)(local_d8 != (void *)0x0);
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  uStack_c0 = 0;
  local_c8 = (void *)0x0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  FUN_004c4d64(param_4 + 10,&local_120);
  free(local_a0);
  free(local_b8);
  free(local_c8);
  free(local_d8);
  free(local_e8);
  free(local_f8);
  free(local_108);
  plVar19 = local_120;
  if ((local_120 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_120 + 1), iVar4 == 1)) {
    (**(code **)(*plVar19 + 8))(plVar19);
  }
  if (param_4[1] == 0) {
    param_4[0x1c] = 0;
    param_4[0x1d] = 0;
    goto LAB_004cb4e0;
  }
  local_138 = (long *)param_4[2];
  lVar17 = param_4[3];
  if (param_12 == '\x01') {
    if (lVar17 == 0) {
      bVar8 = param_13 == '\x03' && param_9 == '\x02';
      plVar19 = local_138;
      goto LAB_004cb388;
    }
    if (local_138[1] == 0) {
      fVar20 = 0.0;
    }
    else {
      fVar20 = 0.0 - *(float *)(*local_138 + 0x18);
    }
    plVar19 = local_138 + lVar17 * 2;
    bVar8 = param_13 == '\x03' && param_9 == '\x02';
LAB_004cb3b4:
    fVar21 = 0.0;
    lVar17 = 0;
    iVar10 = -1;
    iVar4 = -1;
    plVar11 = local_138;
    fVar22 = fVar20;
    do {
      lVar9 = plVar11[1];
      if (lVar9 != 0) {
        lVar6 = lVar9 * 0x20;
        lVar7 = *(long *)(*param_4 + lVar17 * 0x18);
        iVar4 = iVar4 + (int)(lVar6 - 0x20U >> 5) + 1;
        puVar12 = (uint *)*plVar11;
        do {
          fVar23 = *(float *)(*(long *)(lVar7 + (ulong)puVar12[2] * 0x90 + 0x48) +
                             (ulong)puVar12[3] * 4) -
                   *(float *)(*(long *)(lVar7 + (ulong)*puVar12 * 0x90 + 0x48) +
                             (ulong)puVar12[1] * 4);
          if (fVar23 == fVar21 || fVar23 < fVar21 != (NAN(fVar23) || NAN(fVar21))) {
            fVar23 = fVar21;
          }
          fVar21 = fVar23;
          if ((bVar8) && (fVar22 + (float)puVar12[7] <= param_2)) {
            iVar10 = iVar10 + 1;
          }
          lVar6 = lVar6 + -0x20;
          puVar12 = puVar12 + 8;
        } while (lVar6 != 0);
        fVar22 = fVar22 + (float)((uint *)*plVar11)[lVar9 * 8 + -1];
      }
      fVar22 = fVar22 + param_3;
      plVar11 = plVar11 + 2;
      lVar17 = lVar17 + 1;
    } while (plVar11 != plVar19);
    bVar3 = false;
  }
  else {
    fVar20 = 0.0;
    plVar19 = local_138 + lVar17 * 2;
    bVar8 = param_13 == '\x03' && param_9 == '\x02';
    if (lVar17 != 0) goto LAB_004cb3b4;
LAB_004cb388:
    fVar20 = 0.0;
    fVar22 = 0.0;
    fVar21 = 0.0;
    iVar4 = -1;
    bVar3 = true;
    iVar10 = -1;
  }
  fVar23 = 0.0;
  *(undefined4 *)(param_4 + 0x1c) = 0;
  *(float *)((long)param_4 + 0xe4) = fVar20;
  *(float *)(param_4 + 0x1d) = fVar21;
  iVar1 = 0;
  if (!(bool)(bVar8 & iVar10 == -1)) {
    iVar1 = iVar10;
  }
  fVar21 = fVar22 - param_3;
  if (fVar22 - param_3 <= fVar20) {
    fVar21 = fVar20;
  }
  *(float *)((long)param_4 + 0xec) = fVar21;
  if (((param_12 == '\x01') && (!bVar3)) && (local_138[1] != 0)) {
    fVar23 = 0.0 - *(float *)(*local_138 + 0x18);
  }
  if (!bVar3) {
    iVar10 = 0;
    local_148 = 0;
    do {
      if (local_138[1] != 0) {
        lVar9 = *param_4;
        pGVar16 = (GlyphLine *)*local_138;
        lVar17 = local_138[1] << 5;
        do {
          if (param_13 == '\x02') {
            if (param_9 == '\x02') {
              fVar20 = *(float *)(pGVar16 + 0x14);
              goto LAB_004cb5a0;
            }
          }
          else if ((param_13 == '\x01') && (param_9 == '\x02')) {
            fVar20 = *(float *)(pGVar16 + 0x1c);
LAB_004cb5a0:
            fVar20 = fVar23 + fVar20;
            if (fVar20 != param_2 && fVar20 < param_2 == (NAN(fVar20) || NAN(param_2)))
            goto LAB_004cb4e0;
          }
          OrderedLine::OrderedLine
                    ((OrderedLine *)&local_120,(Paragraph *)(lVar9 + local_148 * 0x18),pGVar16,
                     param_1,iVar1 == iVar10,iVar4 == iVar1,(GlyphRun *)(param_4 + 10),
                     fVar23 + *(float *)(pGVar16 + 0x18));
          puVar15 = (undefined8 *)param_4[5];
          if (puVar15 < (undefined8 *)param_4[6]) {
            puVar15[4] = 0;
            puVar15[5] = 0;
            puVar15[1] = lStack_118;
            *puVar15 = local_120;
            puVar15[2] = local_110;
            puVar15[3] = 0;
            puVar15[4] = pvStack_100;
            puVar15[3] = local_108;
            local_108 = (void *)0x0;
            pvStack_100 = (void *)0x0;
            puVar15[5] = local_f8;
            local_f8 = (void *)0x0;
            puVar15[6] = uStack_f0;
            *(undefined4 *)(puVar15 + 7) = local_e8._0_4_;
            param_4[5] = (long)(puVar15 + 8);
          }
          else {
            lVar6 = FUN_004cb690(param_4 + 4,&local_120);
            param_4[5] = lVar6;
            if (local_108 != (void *)0x0) {
              pvStack_100 = local_108;
              operator_delete(local_108);
            }
          }
          if (iVar1 == iVar10) goto LAB_004cb4e0;
          lVar17 = lVar17 + -0x20;
          iVar10 = iVar10 + 1;
          pGVar16 = pGVar16 + 0x20;
        } while (lVar17 != 0);
        if (local_138[1] != 0) {
          fVar23 = fVar23 + *(float *)(*local_138 + local_138[1] * 0x20 + -4);
        }
      }
      fVar23 = fVar23 + param_3;
      local_138 = local_138 + 2;
      local_148 = local_148 + 1;
    } while (local_138 != plVar19);
  }
LAB_004cb4e0:
  if (*(long *)(lVar2 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004cb690  FUN_004cb690 =====

undefined8 * FUN_004cb690(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar11 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 5;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar8 = 0x3ffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3a != 0) goto LAB_004cb808;
      pvVar5 = operator_new(uVar8 << 6);
    }
    puVar3 = (undefined8 *)((long)pvVar5 + lVar11 * 0x40);
    uVar13 = *param_2;
    uVar7 = param_2[2];
    uVar4 = *(undefined4 *)(param_2 + 7);
    puVar3[1] = param_2[1];
    *puVar3 = uVar13;
    uVar15 = param_2[4];
    uVar14 = param_2[3];
    puVar3[2] = uVar7;
    uVar7 = param_2[5];
    uVar13 = param_2[6];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    pvVar12 = (void *)*param_1;
    pvVar10 = (void *)param_1[1];
    puVar3[5] = uVar7;
    puVar3[6] = uVar13;
    pvVar5 = (void *)((long)pvVar5 + uVar8 * 0x40);
    puVar2 = puVar3 + 8;
    *(undefined4 *)(puVar3 + 7) = uVar4;
    puVar3[4] = uVar15;
    puVar3[3] = uVar14;
    if (pvVar10 == pvVar12) {
      *param_1 = (long)puVar3;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar5;
    }
    else {
      lVar11 = 0;
      do {
        lVar9 = lVar11 + -0x40;
        uVar14 = *(undefined8 *)((long)pvVar10 + lVar11 + -0x38);
        uVar13 = *(undefined8 *)((long)pvVar10 + lVar11 + -0x40);
        uVar7 = *(undefined8 *)((long)pvVar10 + lVar11 + -0x30);
        *(undefined8 *)((long)puVar3 + lVar11 + -0x20) = 0;
        *(undefined8 *)((long)puVar3 + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)puVar3 + lVar11 + -0x30) = uVar7;
        *(undefined8 *)((long)puVar3 + lVar11 + -0x38) = uVar14;
        *(undefined8 *)((long)puVar3 + lVar11 + -0x40) = uVar13;
        uVar7 = *(undefined8 *)((long)pvVar10 + lVar11 + -0x28);
        *(undefined8 *)((long)puVar3 + lVar11 + -0x20) =
             *(undefined8 *)((long)pvVar10 + lVar11 + -0x20);
        *(undefined8 *)((long)puVar3 + lVar11 + -0x28) = uVar7;
        *(undefined8 *)((long)puVar3 + lVar11 + -0x18) =
             *(undefined8 *)((long)pvVar10 + lVar11 + -0x18);
        *(undefined8 *)((long)pvVar10 + lVar11 + -0x28) = 0;
        *(undefined8 *)((long)pvVar10 + lVar11 + -0x20) = 0;
        *(undefined8 *)((long)pvVar10 + lVar11 + -0x18) = 0;
        uVar7 = *(undefined8 *)((long)pvVar10 + lVar11 + -0x10);
        *(undefined4 *)((long)puVar3 + lVar11 + -8) = *(undefined4 *)((long)pvVar10 + lVar11 + -8);
        *(undefined8 *)((long)puVar3 + lVar11 + -0x10) = uVar7;
        lVar11 = lVar9;
      } while ((void *)((long)pvVar10 + lVar9) != pvVar12);
      pvVar10 = (void *)*param_1;
      pvVar12 = (void *)param_1[1];
      *param_1 = (long)puVar3 + lVar9;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar5;
      for (; pvVar12 != pvVar10; pvVar12 = (void *)((long)pvVar12 + -0x40)) {
        pvVar5 = *(void **)((long)pvVar12 + -0x28);
        if (pvVar5 != (void *)0x0) {
          *(void **)((long)pvVar12 + -0x20) = pvVar5;
          operator_delete(pvVar5);
        }
      }
    }
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    return puVar2;
  }
  FUN_004cb80c();
LAB_004cb808:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 004cb80c  FUN_004cb80c =====

void FUN_004cb80c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004cb820  rive::TextValueRunProperty::TextValueRunProperty =====

/* rive::TextValueRunProperty::TextValueRunProperty(rive::Core*, rive::TextValueRunListener*,
   rive::ViewModelInstanceValue*, unsigned short, rive::SymbolType) */

void __thiscall
rive::TextValueRunProperty::TextValueRunProperty
          (TextValueRunProperty *this,undefined8 param_1,undefined8 param_2,
          ViewModelInstanceValue *param_3,undefined2 param_4,TextValueRunProperty param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d7d8;
  *(undefined8 *)(this + 0x10) = param_2;
  *(ViewModelInstanceValue **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = param_1;
  if (param_3 != (ViewModelInstanceValue *)0x0) {
    ViewModelInstanceValue::addDependent(param_3,(ViewModelValueDependent *)this);
  }
  puVar1 = PTR_vtable_0067d7a8;
  *(undefined2 *)(this + 0x20) = param_4;
  *(undefined **)this = puVar1 + 0x10;
  this[0x22] = param_6;
  return;
}


// ===== 004cb888  FUN_004cb888 =====

/* WARNING: Removing unreachable block (ram,0x004cb938) */

void FUN_004cb888(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = param_1[3];
  *param_1 = (long)(PTR_vtable_0067d7d8 + 0x10);
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 0xf0);
    puVar4 = *(undefined8 **)(lVar5 + 0xe8);
    puVar2 = puVar4;
    for (; (puVar4 != puVar1 && (puVar2 = puVar4, (long *)*puVar4 != param_1)); puVar4 = puVar4 + 1)
    {
      puVar2 = puVar1;
    }
    if ((puVar2 != puVar1) && (puVar4 = puVar2 + 1, puVar3 = puVar2, puVar4 != puVar1)) {
      do {
        puVar2 = puVar3;
        if ((long *)*puVar4 != param_1) {
          puVar2 = puVar3 + 1;
          *puVar3 = (long *)*puVar4;
        }
        puVar4 = puVar4 + 1;
        puVar3 = puVar2;
      } while (puVar4 != puVar1);
      puVar1 = *(undefined8 **)(lVar5 + 0xf0);
    }
    if (puVar2 != puVar1) {
      *(undefined8 **)(lVar5 + 0xf0) = puVar2;
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004cb964  rive::TextValueRunProperty::writeValue =====

/* rive::TextValueRunProperty::writeValue() */

void __thiscall rive::TextValueRunProperty::writeValue(TextValueRunProperty *this)

{
  char *__s2;
  size_t sVar1;
  byte bVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  int iVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  void *pvVar15;
  ulong uVar16;
  ulong local_a0;
  size_t sStack_98;
  char *local_90;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (this[0x22] == (TextValueRunProperty)0xd) {
    pvVar15 = *(void **)(*(long *)(*(long *)(this + 0x10) + 0x30) + 0x468);
    uVar4 = *(long *)(*(long *)(*(long *)(this + 0x10) + 0x30) + 0x470) - (long)pvVar15;
    if (uVar4 == 0) {
      __dest = (void *)0x0;
      lVar8 = 0;
    }
    else {
      if ((long)uVar4 < 0) {
        FUN_004cbb98();
                    /* WARNING: Subroutine does not return */
        FUN_0031fb04("vector");
      }
      __dest = operator_new(uVar4);
      lVar8 = (long)__dest + uVar4;
      memcpy(__dest,pvVar15,uVar4);
    }
    lVar9 = *(long *)(this + 0x18);
    if ((*(byte *)(lVar9 + 0x110) & 1) == 0) {
      sStack_98 = *(size_t *)(lVar9 + 0x118);
      local_a0 = *(ulong *)(lVar9 + 0x110);
      local_90 = *(char **)(lVar9 + 0x120);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a0,*(char **)(lVar9 + 0x120),*(ulong *)(lVar9 + 0x118));
    }
    uVar4 = local_a0;
    if (lVar8 - (long)__dest != 0) {
      uVar11 = lVar8 - (long)__dest >> 3;
      lVar8 = *(long *)(this + 8);
      uVar16 = 0;
      __s2 = (char *)((ulong)&local_a0 | 1);
      sVar6 = local_a0 >> 1 & 0x7f;
      if ((local_a0 & 1) != 0) {
        __s2 = local_90;
        sVar6 = sStack_98;
      }
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      do {
        lVar9 = *(long *)((long)__dest + uVar16 * 8);
        bVar2 = *(byte *)(lVar9 + 0x10);
        uVar10 = (ulong)(bVar2 >> 1);
        sVar1 = uVar10;
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(lVar9 + 0x18);
        }
        if (sVar1 == sVar6) {
          if ((bVar2 & 1) == 0) {
            if (bVar2 < 2) {
LAB_004cbb38:
              *(long *)(lVar8 + 0xe0) = lVar9;
              break;
            }
            pcVar12 = (char *)(lVar9 + 0x11);
            pcVar13 = __s2;
            while (*pcVar12 == *pcVar13) {
              uVar10 = uVar10 - 1;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
              if (uVar10 == 0) goto LAB_004cbb38;
            }
          }
          else {
            iVar7 = memcmp(*(void **)(lVar9 + 0x20),__s2,*(size_t *)(lVar9 + 0x18));
            if (iVar7 == 0) goto LAB_004cbb38;
          }
        }
        if (uVar16 == 0) {
          *(long *)(lVar8 + 0xe0) = lVar9;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar11);
    }
    pvVar15 = __dest;
    if ((uVar4 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  else {
    if (this[0x22] != (TextValueRunProperty)0xe) goto LAB_004cbb54;
    lVar8 = *(long *)(this + 0x18);
    uVar14 = *(undefined8 *)(this + 8);
    uVar3 = *(undefined2 *)(this + 0x20);
    if ((*(byte *)(lVar8 + 0x110) & 1) == 0) {
      uStack_78 = *(undefined8 *)(lVar8 + 0x118);
      local_80 = *(ulong *)(lVar8 + 0x110);
      local_70 = *(void **)(lVar8 + 0x120);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,*(char **)(lVar8 + 0x120),*(ulong *)(lVar8 + 0x118));
    }
    FUN_00377e50(uVar14,uVar3,&local_80);
    __dest = local_70;
    pvVar15 = (void *)(local_80 & 1);
  }
  if (pvVar15 != (void *)0x0) {
    operator_delete(__dest);
  }
LAB_004cbb54:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cbb98  FUN_004cbb98 =====

void FUN_004cbb98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004cbbac  rive::TextValueRunListener::TextValueRunListener =====

/* rive::TextValueRunListener::TextValueRunListener(rive::TextValueRun*,
   rive::rcp<rive::ViewModelInstance>, rive::Text*) */

void __thiscall
rive::TextValueRunListener::TextValueRunListener
          (TextValueRunListener *this,undefined8 param_1,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_3;
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)(this + 8) = param_1;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    FUN_00340fb0(1,(long)plVar3 + 0xa4);
    *(undefined **)this = PTR_vtable_0067d7e0 + 0x10;
    *(undefined8 *)(this + 8) = param_1;
    FUN_00340fb0(1,(long)plVar3 + 0xa4);
    *(long **)(this + 0x10) = plVar3;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    iVar2 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0xa4);
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  puVar1 = PTR_vtable_0067d7b0;
  *(undefined8 *)(this + 0x30) = param_4;
  *(undefined **)this = puVar1 + 0x10;
  createPropertyListener(this,0xd);
  createPropertyListener(this,0xe);
  return;
}


// ===== 004cbc6c  rive::TextValueRunListener::createPropertyListener =====

/* rive::TextValueRunListener::createPropertyListener(rive::SymbolType) */

void __thiscall
rive::TextValueRunListener::createPropertyListener(TextValueRunListener *this,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  TextValueRunProperty *pTVar3;
  void *pvVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if ((param_2 - 0xd & 0xff) < 2) {
    uVar5 = *(ulong *)(*(long *)(this + 0x10) + 0xf8);
    uVar6 = 0x10c;
    if ((param_2 & 0xff) != 0xe) {
      uVar6 = 0;
    }
    uVar1 = 0x110;
    if ((param_2 & 0xff) != 0xd) {
      uVar1 = uVar6;
    }
    if (uVar5 != 0) {
      uVar7 = (ulong)param_2 & 0xff;
      uVar21 = NEON_cnt(uVar5,1);
      uVar20 = NEON_uaddlv(uVar21,1);
      uVar9 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
      if (uVar9 < 2) {
        uVar11 = (int)uVar5 + 0xf & uVar7;
      }
      else {
        uVar11 = uVar7;
        if (uVar5 <= uVar7) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar7 / uVar5;
          }
          uVar11 = uVar7 - uVar11 * uVar5;
        }
      }
      plVar10 = *(long **)(*(long *)(*(long *)(this + 0x10) + 0xf0) + uVar11 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        do {
          uVar12 = plVar10[1];
          if (uVar12 == uVar7) {
            if ((uint)*(byte *)(plVar10 + 2) == (param_2 & 0xff)) {
              plVar10 = (long *)plVar10[3];
              if (plVar10 == (long *)0x0) {
                return;
              }
              uVar5 = (**(code **)(*plVar10 + 0x18))(plVar10,0x1ac);
              if ((uVar5 & 1) == 0) {
                return;
              }
              pTVar3 = (TextValueRunProperty *)operator_new(0x28);
              TextValueRunProperty::TextValueRunProperty
                        (pTVar3,*(undefined8 *)(this + 8),this,plVar10,uVar1,(ulong)param_2);
              (**(code **)(*(long *)pTVar3 + 0x20))(pTVar3);
              puVar16 = *(undefined8 **)(this + 0x20);
              if (puVar16 < *(undefined8 **)(this + 0x28)) {
                puVar18 = puVar16 + 1;
                *puVar16 = pTVar3;
                goto LAB_004cbee4;
              }
              puVar15 = *(undefined8 **)(this + 0x18);
              lVar17 = (long)puVar16 - (long)puVar15 >> 3;
              uVar5 = lVar17 + 1;
              if (uVar5 >> 0x3d != 0) {
                FUN_004a64d8();
LAB_004cbf04:
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              uVar7 = (long)*(undefined8 **)(this + 0x28) - (long)puVar15;
              uVar9 = (long)uVar7 >> 2;
              if (uVar9 <= uVar5) {
                uVar9 = uVar5;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar9 = 0x1fffffffffffffff;
              }
              if (uVar9 == 0) {
                pvVar4 = (void *)0x0;
              }
              else {
                if (uVar9 >> 0x3d != 0) goto LAB_004cbf04;
                pvVar4 = operator_new(uVar9 << 3);
              }
              puVar8 = (undefined8 *)((long)pvVar4 + lVar17 * 8);
              puVar18 = puVar8 + 1;
              *puVar8 = pTVar3;
              if ((long)puVar16 - (long)puVar15 == 0) goto LAB_004cbecc;
              uVar5 = ((long)puVar16 - (long)puVar15) - 8;
              puVar19 = puVar16;
              if ((uVar5 < 0x38) ||
                 ((ulong)((long)puVar16 + (-((long)puVar16 - (long)puVar15) - (long)pvVar4)) < 0x20)
                 ) goto LAB_004cbeb0;
              puVar13 = puVar8 + -2;
              puVar14 = puVar16 + -2;
              uVar5 = (uVar5 >> 3) + 1;
              uVar11 = uVar5 & 0x3ffffffffffffffc;
              puVar19 = puVar16 + -uVar11;
              uVar7 = uVar11;
              do {
                puVar16 = puVar14 + -1;
                uVar23 = puVar14[-2];
                uVar22 = puVar14[1];
                uVar21 = *puVar14;
                uVar7 = uVar7 - 4;
                puVar14 = puVar14 + -4;
                puVar13[-1] = *puVar16;
                puVar13[-2] = uVar23;
                puVar13[1] = uVar22;
                *puVar13 = uVar21;
                puVar13 = puVar13 + -4;
              } while (uVar7 != 0);
              puVar8 = puVar8 + -uVar11;
              puVar16 = puVar15;
              if (uVar5 != uVar11) {
LAB_004cbeb0:
                do {
                  puVar19 = puVar19 + -1;
                  puVar8 = puVar8 + -1;
                  *puVar8 = *puVar19;
                } while (puVar19 != puVar15);
                puVar16 = *(undefined8 **)(this + 0x18);
              }
LAB_004cbecc:
              *(undefined8 **)(this + 0x18) = puVar8;
              *(undefined8 **)(this + 0x20) = puVar18;
              *(void **)(this + 0x28) = (void *)((long)pvVar4 + uVar9 * 8);
              if (puVar16 != (undefined8 *)0x0) {
                operator_delete(puVar16);
              }
LAB_004cbee4:
              *(undefined8 **)(this + 0x20) = puVar18;
              return;
            }
          }
          else {
            if (uVar9 < 2) {
              uVar12 = uVar12 & uVar5 - 1;
            }
            else if (uVar5 <= uVar12) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar12 / uVar5;
              }
              uVar12 = uVar12 - uVar2 * uVar5;
            }
            if (uVar12 != uVar11) {
              return;
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 004cbf08  FUN_004cbf08 =====

void FUN_004cbf08(long *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  long *plVar4;
  
  puVar3 = PTR_vtable_0067d7e0 + 0x10;
  *param_1 = (long)puVar3;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
    puVar3 = (undefined *)*param_1;
  }
  (**(code **)(puVar3 + 0x20))(param_1);
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    param_1[4] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar4 = (long *)param_1[2];
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0xa4), iVar1 == 1))
  {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cbf98  rive::TextValueRunListener::markDirty =====

/* rive::TextValueRunListener::markDirty() */

void __thiscall rive::TextValueRunListener::markDirty(TextValueRunListener *this)

{
                    /* WARNING: Could not recover jumptable at 0x004cbfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x298))();
  return;
}


// ===== 004cbfa8  rive::TextValueRunListener::createProperties =====

/* rive::TextValueRunListener::createProperties() */

void __thiscall rive::TextValueRunListener::createProperties(TextValueRunListener *this)

{
  createPropertyListener(this,0xd);
  createPropertyListener(this,0xe);
  return;
}


// ===== 004cbfd4  rive::TextValueRunListener::createSinglePropertyListener =====

/* rive::TextValueRunListener::createSinglePropertyListener(rive::SymbolType) */

TextValueRunProperty * __thiscall
rive::TextValueRunListener::createSinglePropertyListener(TextValueRunListener *this,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  TextValueRunProperty *pTVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(ulong *)(*(long *)(this + 0x10) + 0xf8);
  uVar5 = 0x10c;
  if ((param_2 & 0xff) != 0xe) {
    uVar5 = 0;
  }
  uVar1 = 0x110;
  if ((param_2 & 0xff) != 0xd) {
    uVar1 = uVar5;
  }
  if (uVar4 != 0) {
    uVar7 = (ulong)param_2 & 0xff;
    uVar12 = NEON_cnt(uVar4,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (int)uVar4 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar4 <= uVar7) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar7 / uVar4;
        }
        uVar8 = uVar7 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)(*(long *)(this + 0x10) + 0xf0) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if ((uint)*(byte *)(plVar9 + 2) == (param_2 & 0xff)) {
            plVar9 = (long *)plVar9[3];
            if (plVar9 == (long *)0x0) {
              return (TextValueRunProperty *)0x0;
            }
            uVar4 = (**(code **)(*plVar9 + 0x18))(plVar9,0x1ac);
            if ((uVar4 & 1) == 0) {
              return (TextValueRunProperty *)0x0;
            }
            pTVar3 = (TextValueRunProperty *)operator_new(0x28);
            TextValueRunProperty::TextValueRunProperty
                      (pTVar3,*(undefined8 *)(this + 8),this,plVar9,uVar1,(ulong)param_2);
            return pTVar3;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar2 * uVar4;
          }
          if (uVar10 != uVar8) {
            return (TextValueRunProperty *)0x0;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return (TextValueRunProperty *)0x0;
}


// ===== 004cc118  rive::Text::~Text =====

/* rive::Text::~Text() */

void __thiscall rive::Text::~Text(Text *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  
  puVar2 = PTR_vtable_0067d4e8;
  plVar8 = *(long **)(this + 0x4a8);
  plVar10 = *(long **)(this + 0x4b0);
  puVar1 = PTR_vtable_0067d4e8 + 0x2e0;
  *(undefined **)this = PTR_vtable_0067d4e8 + 0x10;
  *(undefined **)(this + 200) = puVar1;
  *(undefined **)(this + 0x1a8) = puVar2 + 0x308;
  *(undefined **)(this + 0x1b0) = puVar2 + 0x330;
  if (plVar8 != plVar10) {
    do {
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 8))();
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar10);
    plVar8 = *(long **)(this + 0x4a8);
  }
  if (plVar8 != (long *)0x0) {
    *(long **)(this + 0x4b0) = plVar8;
    operator_delete(plVar8);
  }
  puVar11 = (undefined8 *)*(void **)(this + 0x490);
  while (puVar11 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar11[4];
    pvVar4 = (void *)*puVar11;
    if ((plVar8 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar8 + 1), iVar3 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    operator_delete(puVar11);
    puVar11 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)(this + 0x480);
  *(undefined8 *)(this + 0x480) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x468);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x470) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x450);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x458) = pvVar4;
    operator_delete(pvVar4);
  }
  puVar11 = *(undefined8 **)(this + 0x438);
  if (puVar11 != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(this + 0x440);
    puVar5 = puVar11;
    if (puVar13 != puVar11) {
      do {
        puVar13 = puVar13 + -4;
        plVar8 = (long *)*puVar13;
        if ((plVar8 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar8 + 1), iVar3 == 1)) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      } while (puVar13 != puVar11);
      puVar5 = *(undefined8 **)(this + 0x438);
    }
    *(undefined8 **)(this + 0x440) = puVar11;
    operator_delete(puVar5);
  }
  pvVar4 = *(void **)(this + 0x420);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x428) = pvVar4;
    operator_delete(pvVar4);
  }
  puVar11 = *(undefined8 **)(this + 0x408);
  if (puVar11 != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(this + 0x410);
    puVar5 = puVar11;
    if (puVar13 != puVar11) {
      do {
        puVar13 = puVar13 + -4;
        plVar8 = (long *)*puVar13;
        if ((plVar8 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar8 + 1), iVar3 == 1)) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      } while (puVar13 != puVar11);
      puVar5 = *(undefined8 **)(this + 0x408);
    }
    *(undefined8 **)(this + 0x410) = puVar11;
    operator_delete(puVar5);
  }
  pvVar4 = *(void **)(this + 0x3f0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x3f8) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x3d8);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x3e0) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x398);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x3a0) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x380);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x388) = pvVar4;
    operator_delete(pvVar4);
  }
  plVar8 = *(long **)(this + 0x378);
  if ((plVar8 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar8 + 1), iVar3 == 1)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  pvVar4 = *(void **)(this + 0x348);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x350) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x330);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x338) = pvVar4;
    operator_delete(pvVar4);
  }
  free(*(void **)(this + 800));
  free(*(void **)(this + 0x308));
  free(*(void **)(this + 0x2f8));
  free(*(void **)(this + 0x2e8));
  free(*(void **)(this + 0x2d8));
  free(*(void **)(this + 0x2c8));
  free(*(void **)(this + 0x2b8));
  plVar8 = *(long **)(this + 0x2a0);
  if ((plVar8 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar8 + 1), iVar3 == 1)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  pvVar4 = *(void **)(this + 0x288);
  if (pvVar4 != (void *)0x0) {
    pvVar12 = *(void **)(this + 0x290);
    pvVar6 = pvVar4;
    if (pvVar12 != pvVar4) {
      do {
        pvVar6 = *(void **)((long)pvVar12 + -0x28);
        if (pvVar6 != (void *)0x0) {
          *(void **)((long)pvVar12 + -0x20) = pvVar6;
          operator_delete(pvVar6);
        }
        pvVar12 = (void *)((long)pvVar12 + -0x40);
      } while (pvVar12 != pvVar4);
      pvVar6 = *(void **)(this + 0x288);
    }
    *(void **)(this + 0x290) = pvVar4;
    operator_delete(pvVar6);
  }
  lVar7 = *(long *)(this + 0x280);
  puVar11 = *(undefined8 **)(this + 0x278);
  if (0 < lVar7) {
    puVar5 = puVar11;
    do {
      puVar13 = puVar5 + 2;
      free((void *)*puVar5);
      puVar5 = puVar13;
    } while (puVar13 < puVar11 + lVar7 * 2);
    puVar11 = *(undefined8 **)(this + 0x278);
  }
  free(puVar11);
  lVar7 = *(long *)(this + 0x270);
  puVar11 = *(undefined8 **)(this + 0x268);
  if (0 < lVar7) {
    puVar5 = puVar11;
    do {
      puVar13 = puVar5 + 2;
      free((void *)*puVar5);
      puVar5 = puVar13;
    } while (puVar13 < puVar11 + lVar7 * 2);
    puVar11 = *(undefined8 **)(this + 0x268);
  }
  free(puVar11);
  lVar7 = *(long *)(this + 0x260);
  plVar8 = *(long **)(this + 600);
  if (0 < lVar7) {
    plVar10 = plVar8;
    do {
      FUN_004c53c0(*plVar10,*plVar10 + plVar10[1] * 0x90);
      plVar9 = plVar10 + 3;
      free((void *)*plVar10);
      plVar10 = plVar9;
    } while (plVar9 < plVar8 + lVar7 * 3);
    plVar8 = *(long **)(this + 600);
  }
  free(plVar8);
  lVar7 = *(long *)(this + 0x250);
  plVar8 = *(long **)(this + 0x248);
  if (0 < lVar7) {
    plVar10 = plVar8;
    do {
      FUN_004c53c0(*plVar10,*plVar10 + plVar10[1] * 0x90);
      plVar9 = plVar10 + 3;
      free((void *)*plVar10);
      plVar10 = plVar9;
    } while (plVar9 < plVar8 + lVar7 * 3);
    plVar8 = *(long **)(this + 0x248);
  }
  free(plVar8);
  pvVar4 = *(void **)(this + 0x230);
  if (pvVar4 != (void *)0x0) {
    pvVar12 = *(void **)(this + 0x238);
    pvVar6 = pvVar4;
    if (pvVar12 != pvVar4) {
      do {
        plVar8 = *(long **)((long)pvVar12 + -0x30);
        if ((plVar8 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar8 + 1), iVar3 == 1)) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
        pvVar12 = (void *)((long)pvVar12 + -0x40);
      } while (pvVar12 != pvVar4);
      pvVar6 = *(void **)(this + 0x230);
    }
    *(void **)(this + 0x238) = pvVar4;
    operator_delete(pvVar6);
  }
  pvVar4 = *(void **)(this + 0x218);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x220) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x200);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x208) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x1e8);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x1f0) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_0035e448(this);
  return;
}


// ===== 004cc5bc  rive::Text::~Text =====

/* rive::Text::~Text() */

void __thiscall rive::Text::~Text(Text *this)

{
  ~Text(this);
  operator_delete(this);
  return;
}


// ===== 004cc5e0  FUN_004cc5e0 =====

undefined8 FUN_004cc5e0(void)

{
  return 0x86;
}


// ===== 004cc5e8  FUN_004cc5e8 =====

undefined8 FUN_004cc5e8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x86)) {
    return 0;
  }
  return 1;
}


// ===== 004cc630  FUN_004cc630 =====

undefined8 FUN_004cc630(long param_1,ushort param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  if (param_2 < 0x11f) {
    if (param_2 < 0x119) {
      if (param_2 < 0x17) {
        if (param_2 == 0xd) {
          puVar9 = (undefined4 *)param_3[2];
          puVar8 = (undefined4 *)(*param_3 + param_3[1]);
          if ((long)puVar8 - (long)puVar9 < 4) {
            uVar13 = 0;
            *(undefined1 *)(param_3 + 3) = 1;
          }
          else {
            puVar8 = puVar9 + 1;
            uVar13 = *puVar9;
          }
          *(undefined4 *)(param_1 + 0x110) = uVar13;
        }
        else {
          if (param_2 != 0xe) goto LAB_004ccb14;
          puVar9 = (undefined4 *)param_3[2];
          puVar8 = (undefined4 *)(*param_3 + param_3[1]);
          if ((long)puVar8 - (long)puVar9 < 4) {
            uVar13 = 0;
            *(undefined1 *)(param_3 + 3) = 1;
          }
          else {
            puVar8 = puVar9 + 1;
            uVar13 = *puVar9;
          }
          *(undefined4 *)(param_1 + 0x114) = uVar13;
        }
        goto LAB_004ccc80;
      }
      if (param_2 == 0x17) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004ccb58;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccb58:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x134) = (int)uVar6;
        return 1;
      }
      if (param_2 == 0x81) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004ccbe4;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccbe4:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x138) = (int)uVar6;
        return 1;
      }
    }
    else {
      if (0x11c < param_2) {
        if (param_2 == 0x11d) {
          puVar9 = (undefined4 *)param_3[2];
          puVar8 = (undefined4 *)(*param_3 + param_3[1]);
          if ((long)puVar8 - (long)puVar9 < 4) {
            uVar13 = 0;
            *(undefined1 *)(param_3 + 3) = 1;
          }
          else {
            puVar8 = puVar9 + 1;
            uVar13 = *puVar9;
          }
          *(undefined4 *)(param_1 + 0x180) = uVar13;
        }
        else {
          if (param_2 != 0x11e) goto LAB_004ccb14;
          puVar9 = (undefined4 *)param_3[2];
          puVar8 = (undefined4 *)(*param_3 + param_3[1]);
          if ((long)puVar8 - (long)puVar9 < 4) {
            uVar13 = 0;
            *(undefined1 *)(param_3 + 3) = 1;
          }
          else {
            puVar8 = puVar9 + 1;
            uVar13 = *puVar9;
          }
          *(undefined4 *)(param_1 + 0x184) = uVar13;
        }
        goto LAB_004ccc80;
      }
      if (param_2 == 0x119) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004ccb3c;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccb3c:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x174) = (int)uVar6;
        return 1;
      }
      if (param_2 == 0x11c) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004ccbc8;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccbc8:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x178) = (int)uVar6;
        return 1;
      }
    }
  }
  else {
    if (param_2 < 0x179) {
      if (param_2 < 0x16f) {
        if (param_2 == 0x11f) {
          uVar12 = 0;
          uVar6 = 0;
          pbVar10 = (byte *)param_3[2];
          do {
            if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
              *(undefined1 *)(param_3 + 3) = 1;
              goto LAB_004ccb20;
            }
            pbVar11 = pbVar10 + 1;
            bVar3 = *pbVar10;
            uVar4 = uVar12 & 0x3f;
            uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
            uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
            pbVar10 = pbVar11;
          } while ((char)bVar3 < '\0');
          param_3[2] = (long)pbVar11;
          if (uVar6 >> 0x20 != 0) {
            *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccb20:
            uVar6 = 0;
            param_3[2] = *param_3 + param_3[1];
          }
          *(int *)(param_1 + 0x17c) = (int)uVar6;
          return 1;
        }
        if (param_2 != 0x16e) goto LAB_004ccb14;
        puVar9 = (undefined4 *)param_3[2];
        puVar8 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar8 - (long)puVar9 < 4) {
          uVar13 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar8 = puVar9 + 1;
          uVar13 = *puVar9;
        }
        *(undefined4 *)(param_1 + 0x188) = uVar13;
      }
      else if (param_2 == 0x16f) {
        puVar9 = (undefined4 *)param_3[2];
        puVar8 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar8 - (long)puVar9 < 4) {
          uVar13 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar8 = puVar9 + 1;
          uVar13 = *puVar9;
        }
        *(undefined4 *)(param_1 + 0x18c) = uVar13;
      }
      else {
        if (param_2 != 0x173) goto LAB_004ccb14;
        puVar9 = (undefined4 *)param_3[2];
        puVar8 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar8 - (long)puVar9 < 4) {
          uVar13 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar8 = puVar9 + 1;
          uVar13 = *puVar9;
        }
        *(undefined4 *)(param_1 + 400) = uVar13;
      }
LAB_004ccc80:
      param_3[2] = (long)puVar8;
      return 1;
    }
    if (param_2 < 0x2ad) {
      if (param_2 == 0x179) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004ccb90;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccb90:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x194) = (int)uVar6;
        return 1;
      }
      if (param_2 == 0x2ab) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004ccc00;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccc00:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x198) = (int)uVar6;
        return 1;
      }
    }
    else {
      if (param_2 == 0x2ad) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004ccb74;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccb74:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x19c) = (int)uVar6;
        return 1;
      }
      if (param_2 == 0x2bf) {
        lVar1 = *param_3;
        lVar2 = param_3[1];
        pcVar7 = (char *)param_3[2];
        if (0 < (lVar1 + lVar2) - (long)pcVar7) {
          param_3[2] = (long)(pcVar7 + 1);
          *(bool *)(param_1 + 0x1a0) = *pcVar7 == '\x01';
          return 1;
        }
        *(undefined1 *)(param_1 + 0x1a0) = 0;
        param_3[2] = lVar1 + lVar2;
        *(undefined1 *)(param_3 + 3) = 1;
        return 1;
      }
      if (param_2 == 0x3a4) {
        uVar12 = 0;
        uVar6 = 0;
        pbVar10 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004ccbac;
          }
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          uVar4 = uVar12 & 0x3f;
          uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar6;
          pbVar10 = pbVar11;
        } while ((char)bVar3 < '\0');
        param_3[2] = (long)pbVar11;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ccbac:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x1a4) = (int)uVar6;
        return 1;
      }
    }
  }
LAB_004ccb14:
  uVar5 = FUN_0035ea44();
  return uVar5;
}


// ===== 004ccca4  rive::Text::onDirty =====

/* rive::Text::onDirty(rive::ComponentDirt) */

void __thiscall rive::Text::onDirty(Text *this,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if ((param_2 >> 7 & 1) != 0) {
    plVar8 = *(long **)(this + 0x3e0);
    for (plVar6 = *(long **)(this + 0x3d8); plVar6 != plVar8; plVar6 = plVar6 + 1) {
      lVar5 = *plVar6;
      if (*(long *)(lVar5 + 0x110) != *(long *)(lVar5 + 0x118)) {
        uVar3 = (**(code **)(**(long **)(lVar5 + 0x30) + 0x18))(*(long **)(lVar5 + 0x30),0x86);
        plVar4 = *(long **)(lVar5 + 0x30);
        if ((uVar3 & 1) == 0) {
          plVar4 = (long *)0x0;
        }
        if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
          *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
          (**(code **)(*plVar4 + 0x70))(plVar4);
          lVar5 = plVar4[0x10];
          uVar2 = *(uint *)(plVar4 + 7);
          *(undefined1 *)(lVar5 + 0xc32) = 1;
          *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
          if (uVar2 < *(uint *)(lVar5 + 0xbd4)) {
            *(uint *)(lVar5 + 0xbd4) = uVar2;
          }
        }
      }
    }
  }
  if ((param_2 & 0x210) != 0) {
    plVar8 = *(long **)(this + 0x220);
    for (plVar6 = *(long **)(this + 0x218); plVar6 != plVar8; plVar6 = plVar6 + 1) {
      puVar1 = *(undefined8 **)(*plVar6 + 0x150);
      for (puVar7 = *(undefined8 **)(*plVar6 + 0x148); puVar7 != puVar1; puVar7 = puVar7 + 1) {
        plVar4 = (long *)*puVar7;
        uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,0x15);
        if ((uVar3 & 1) != 0) {
          (**(code **)(*plVar4 + 0xb8))(plVar4);
        }
      }
    }
  }
  return;
}


// ===== 004ccde4  rive::Text::update =====

/* rive::Text::update(rive::ComponentDirt) */

void __thiscall rive::Text::update(Text *this,uint param_2)

{
  Text *pTVar1;
  uint uVar2;
  Text TVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  long *local_110;
  undefined8 uStack_108;
  void *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  ulong uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar5 = tpidr_el0;
  uVar2 = param_2 & 0xffff;
  local_80 = *(long *)(lVar5 + 0x28);
  if ((param_2 >> 6 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xa0);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      fVar31 = (float)(**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      *(float *)(this + 0xe8) = fVar31 * *(float *)(this + 0xe8);
    }
  }
  if ((uVar2 >> 4 & 1) == 0) {
    if ((uVar2 >> 9 & 1) == 0) {
      if ((uVar2 >> 8 & 1) != 0) {
        plVar18 = *(long **)(this + 0x220);
        for (plVar16 = *(long **)(this + 0x218); plVar16 != plVar18; plVar16 = plVar16 + 1) {
          plVar15 = *(long **)(*plVar16 + 0x148);
          plVar4 = *(long **)(*plVar16 + 0x150);
          if (plVar15 != plVar4) {
            fVar31 = *(float *)(this + 0xe8);
            do {
              puVar9 = *(undefined8 **)(*plVar15 + 0xd0);
              if (*(float *)((long)puVar9 + 0xc) != fVar31) {
                *(float *)((long)puVar9 + 0xc) = fVar31;
                (**(code **)*puVar9)();
              }
              plVar15 = plVar15 + 1;
            } while (plVar15 != plVar4);
          }
        }
      }
      goto LAB_004cd818;
    }
  }
  else {
    plVar16 = *(long **)(this + 0x3d8);
    if (plVar16 == *(long **)(this + 0x3e0)) {
      bVar6 = false;
    }
    else {
      do {
        lVar14 = *plVar16;
        if (*(long *)(lVar14 + 0xf8) != *(long *)(lVar14 + 0x100)) {
          bVar6 = true;
          break;
        }
        plVar18 = *(long **)(lVar14 + 200);
        if (plVar18 == *(long **)(lVar14 + 0xd0)) {
          bVar6 = false;
        }
        else {
          do {
            plVar15 = plVar18 + 1;
            bVar6 = *(char *)(*plVar18 + 0xac) == '\x03';
            plVar18 = plVar15;
          } while (!bVar6 && plVar15 != *(long **)(lVar14 + 0xd0));
          if (bVar6) break;
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != *(long **)(this + 0x3e0));
    }
    uVar10 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x199);
    if ((uVar10 & 1) == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),1);
      bVar7 = bVar7 ^ 1;
    }
    if ((bVar6) && (uVar10 = makeStyled(this,(StyledText *)(this + 0x420),false), (uVar10 & 1) != 0)
       ) {
      lVar14 = *(long *)(this + 0x438);
      plVar16 = *(long **)(this + 0x440);
      uVar10 = (long)plVar16 - lVar14;
      if ((long)uVar10 < 0) goto LAB_004cd93c;
      puVar9 = (undefined8 *)operator_new(uVar10);
      lVar20 = 0;
      do {
        lVar23 = lVar20;
        plVar18 = (long *)(lVar14 + lVar23);
        lVar20 = *plVar18;
        if (lVar20 != 0) {
          FUN_00340fb0(1,lVar20 + 8);
        }
        *(long *)((long)puVar9 + lVar23) = lVar20;
        lVar22 = plVar18[2];
        lVar20 = plVar18[1];
        *(undefined8 *)((long)puVar9 + lVar23 + 0x17) = *(undefined8 *)((long)plVar18 + 0x17);
        *(long *)((long)puVar9 + lVar23 + 0x10) = lVar22;
        *(long *)((long)puVar9 + lVar23 + 8) = lVar20;
        lVar20 = lVar23 + 0x20;
      } while (plVar18 + 4 != plVar16);
      Font::shapeText((Font *)&local_110,*puVar9,*(long *)(this + 0x420),
                      *(long *)(this + 0x428) - *(long *)(this + 0x420) >> 2,puVar9,
                      lVar23 + 0x20 >> 5,0xffffffff);
      lVar14 = *(long *)(this + 0x260);
      plVar16 = *(long **)(this + 600);
      pTVar1 = this + 600;
      if (0 < lVar14) {
        plVar18 = plVar16;
        do {
          FUN_004c53c0(*plVar18,*plVar18 + plVar18[1] * 0x90);
          plVar15 = plVar18 + 3;
          free((void *)*plVar18);
          plVar18 = plVar15;
        } while (plVar15 < plVar16 + lVar14 * 3);
        plVar16 = *(long **)pTVar1;
      }
      free(plVar16);
      *(long **)(this + 600) = local_110;
      *(undefined8 *)(this + 0x260) = uStack_108;
      if ((((this[0x4c9] != (Text)0x2) && (this[0x4c8] != (Text)0xff)) && (this[0x4c8] != (Text)0x2)
          ) || (fVar31 = -1.0, (this[0x178] == (Text)0x0 & (bVar7 ^ 0xff)) == 0)) {
        fVar31 = *(float *)(this + 0x180);
        if (!NAN(*(float *)(this + 0x4c0))) {
          fVar31 = *(float *)(this + 0x4c0);
        }
      }
      TVar3 = this[0x174];
      if (this[0x174] != (Text)0x2 && this[0x4ca] != (Text)0x0) {
        TVar3 = (Text)(this[0x4ca] != (Text)0x1);
      }
      BreakLines((Text *)&local_110,fVar31,pTVar1,TVar3,*(undefined4 *)(this + 0x198));
      lVar14 = *(long *)(this + 0x280);
      puVar21 = *(undefined8 **)(this + 0x278);
      if (0 < lVar14) {
        puVar17 = puVar21;
        do {
          puVar19 = puVar17 + 2;
          free((void *)*puVar17);
          puVar17 = puVar19;
        } while (puVar19 < puVar21 + lVar14 * 2);
        puVar21 = *(undefined8 **)(this + 0x278);
      }
      free(puVar21);
      *(long **)(this + 0x278) = local_110;
      *(undefined8 *)(this + 0x280) = uStack_108;
      GlyphLookup::compute
                (this + 0x450,*(long *)(this + 0x420),
                 *(long *)(this + 0x428) - *(long *)(this + 0x420) >> 2,pTVar1);
      plVar16 = *(long **)(this + 0x3d8);
      plVar18 = *(long **)(this + 0x3e0);
      if (plVar16 != plVar18) {
        uVar10 = (ulong)(*(long *)(this + 0x428) - *(long *)(this + 0x420)) >> 2 & 0xffffffff;
        do {
          lVar14 = *plVar16;
          puVar21 = *(undefined8 **)(lVar14 + 0xd0);
          if (*(undefined8 **)(lVar14 + 200) != puVar21) {
            lVar22 = *(long *)(this + 0x420);
            lVar20 = *(long *)(this + 0x428);
            puVar17 = *(undefined8 **)(lVar14 + 200);
            do {
              puVar19 = puVar17 + 1;
              TextModifierRange::computeRange
                        (*puVar17,lVar22,lVar20 - lVar22 >> 2,pTVar1,this + 0x278,this + 0x450);
              puVar17 = puVar19;
            } while (puVar19 != puVar21);
          }
          if ((*(ushort *)(lVar14 + 0x60) >> 5 & 1) != 0) {
            pvVar11 = *(void **)(lVar14 + 0x128);
            pvVar12 = *(void **)(lVar14 + 0x130);
            *(undefined2 *)(lVar14 + 0x60) = 0;
            uVar13 = (long)pvVar12 - (long)pvVar11 >> 2;
            if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
              if (uVar10 < uVar13) {
                pvVar12 = (void *)((long)pvVar11 + uVar10 * 4);
                *(void **)(lVar14 + 0x130) = pvVar12;
              }
            }
            else {
              FUN_00380d20(lVar14 + 0x128,uVar10 - uVar13);
              pvVar11 = *(void **)(lVar14 + 0x128);
              pvVar12 = *(void **)(lVar14 + 0x130);
            }
            if (0 < (long)pvVar12 - (long)pvVar11) {
              memset(pvVar11,0,(long)pvVar12 - (long)pvVar11);
            }
            puVar17 = *(undefined8 **)(lVar14 + 0xd0);
            for (puVar21 = *(undefined8 **)(lVar14 + 200); puVar21 != puVar17; puVar21 = puVar21 + 1
                ) {
              TextModifierRange::computeCoverage
                        ((TextModifierRange *)*puVar21,*(long *)(lVar14 + 0x128),
                         *(long *)(lVar14 + 0x130) - *(long *)(lVar14 + 0x128) >> 2);
            }
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar18);
      }
      do {
        plVar16 = *(long **)((long)puVar9 + lVar23);
        if ((plVar16 != (long *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,plVar16 + 1), iVar8 == 1))
        {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
        lVar23 = lVar23 + -0x20;
      } while (lVar23 != -0x20);
      operator_delete(puVar9);
    }
    uVar10 = makeStyled(this,(StyledText *)(this + 0x3f0),true);
    if ((uVar10 & 1) == 0) {
      lVar14 = *(long *)(this + 0x250);
      plVar16 = *(long **)(this + 0x248);
      if (0 < lVar14) {
        plVar18 = plVar16;
        do {
          FUN_004c53c0(*plVar18,*plVar18 + plVar18[1] * 0x90);
          plVar15 = plVar18 + 3;
          free((void *)*plVar18);
          plVar18 = plVar15;
        } while (plVar15 < plVar16 + lVar14 * 3);
        plVar16 = *(long **)(this + 0x248);
      }
      free(plVar16);
      lVar14 = *(long *)(this + 0x270);
      puVar9 = *(undefined8 **)(this + 0x268);
      *(undefined8 *)(this + 0x248) = 0;
      *(undefined8 *)(this + 0x250) = 0;
      if (0 < lVar14) {
        puVar21 = puVar9;
        do {
          puVar17 = puVar21 + 2;
          free((void *)*puVar21);
          puVar21 = puVar17;
        } while (puVar17 < puVar9 + lVar14 * 2);
        puVar9 = *(undefined8 **)(this + 0x268);
      }
      free(puVar9);
      *(undefined8 *)(this + 0x268) = 0;
      *(undefined8 *)(this + 0x270) = 0;
      *(undefined8 *)(this + 0x458) = *(undefined8 *)(this + 0x450);
    }
    else {
      lVar14 = *(long *)(this + 0x408);
      plVar16 = *(long **)(this + 0x410);
      uVar10 = (long)plVar16 - lVar14;
      if ((long)uVar10 < 0) {
LAB_004cd93c:
                    /* WARNING: Subroutine does not return */
        FUN_004c5570();
      }
      puVar9 = (undefined8 *)operator_new(uVar10);
      lVar20 = 0;
      do {
        lVar23 = lVar20;
        plVar18 = (long *)(lVar14 + lVar23);
        lVar20 = *plVar18;
        if (lVar20 != 0) {
          FUN_00340fb0(1,lVar20 + 8);
        }
        *(long *)((long)puVar9 + lVar23) = lVar20;
        lVar22 = plVar18[2];
        lVar20 = plVar18[1];
        *(undefined8 *)((long)puVar9 + lVar23 + 0x17) = *(undefined8 *)((long)plVar18 + 0x17);
        *(long *)((long)puVar9 + lVar23 + 0x10) = lVar22;
        *(long *)((long)puVar9 + lVar23 + 8) = lVar20;
        lVar20 = lVar23 + 0x20;
      } while (plVar18 + 4 != plVar16);
      Font::shapeText((Font *)&local_110,*puVar9,*(long *)(this + 0x3f0),
                      *(long *)(this + 0x3f8) - *(long *)(this + 0x3f0) >> 2,puVar9,
                      lVar23 + 0x20 >> 5,0xffffffff);
      lVar14 = *(long *)(this + 0x250);
      plVar16 = *(long **)(this + 0x248);
      pTVar1 = this + 0x248;
      if (0 < lVar14) {
        plVar18 = plVar16;
        do {
          FUN_004c53c0(*plVar18,*plVar18 + plVar18[1] * 0x90);
          plVar15 = plVar18 + 3;
          free((void *)*plVar18);
          plVar18 = plVar15;
        } while (plVar15 < plVar16 + lVar14 * 3);
        plVar16 = *(long **)pTVar1;
      }
      free(plVar16);
      *(long **)(this + 0x248) = local_110;
      *(undefined8 *)(this + 0x250) = uStack_108;
      if ((((this[0x4c9] != (Text)0x2) && (this[0x4c8] != (Text)0xff)) && (this[0x4c8] != (Text)0x2)
          ) || (fVar31 = -1.0, (this[0x178] == (Text)0x0 & (bVar7 ^ 0xff)) == 0)) {
        fVar31 = *(float *)(this + 0x180);
        if (!NAN(*(float *)(this + 0x4c0))) {
          fVar31 = *(float *)(this + 0x4c0);
        }
      }
      TVar3 = this[0x174];
      if (this[0x174] != (Text)0x2 && this[0x4ca] != (Text)0x0) {
        TVar3 = (Text)(this[0x4ca] != (Text)0x1);
      }
      BreakLines((Text *)&local_110,fVar31,pTVar1,TVar3,*(undefined4 *)(this + 0x198));
      lVar14 = *(long *)(this + 0x270);
      puVar21 = *(undefined8 **)(this + 0x268);
      if (0 < lVar14) {
        puVar17 = puVar21;
        do {
          puVar19 = puVar17 + 2;
          free((void *)*puVar17);
          puVar17 = puVar19;
        } while (puVar19 < puVar21 + lVar14 * 2);
        puVar21 = *(undefined8 **)(this + 0x268);
      }
      free(puVar21);
      *(long **)(this + 0x268) = local_110;
      *(undefined8 *)(this + 0x270) = uStack_108;
      if ((!bVar6) && (*(long *)(this + 0x3d8) != *(long *)(this + 0x3e0))) {
        GlyphLookup::compute
                  (this + 0x450,*(long *)(this + 0x3f0),
                   *(long *)(this + 0x3f8) - *(long *)(this + 0x3f0) >> 2,pTVar1);
        plVar16 = *(long **)(this + 0x3d8);
        plVar18 = *(long **)(this + 0x3e0);
        if (plVar16 != plVar18) {
          uVar10 = (ulong)(*(long *)(this + 0x3f8) - *(long *)(this + 0x3f0)) >> 2 & 0xffffffff;
          do {
            lVar14 = *plVar16;
            puVar21 = *(undefined8 **)(lVar14 + 0xd0);
            if (*(undefined8 **)(lVar14 + 200) != puVar21) {
              lVar22 = *(long *)(this + 0x3f0);
              lVar20 = *(long *)(this + 0x3f8);
              puVar17 = *(undefined8 **)(lVar14 + 200);
              do {
                puVar19 = puVar17 + 1;
                TextModifierRange::computeRange
                          (*puVar17,lVar22,lVar20 - lVar22 >> 2,pTVar1,this + 0x268,this + 0x450);
                puVar17 = puVar19;
              } while (puVar19 != puVar21);
            }
            if ((*(ushort *)(lVar14 + 0x60) >> 5 & 1) != 0) {
              pvVar11 = *(void **)(lVar14 + 0x128);
              pvVar12 = *(void **)(lVar14 + 0x130);
              *(undefined2 *)(lVar14 + 0x60) = 0;
              uVar13 = (long)pvVar12 - (long)pvVar11 >> 2;
              if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
                if (uVar10 < uVar13) {
                  pvVar12 = (void *)((long)pvVar11 + uVar10 * 4);
                  *(void **)(lVar14 + 0x130) = pvVar12;
                }
              }
              else {
                FUN_00380d20(lVar14 + 0x128,uVar10 - uVar13);
                pvVar11 = *(void **)(lVar14 + 0x128);
                pvVar12 = *(void **)(lVar14 + 0x130);
              }
              if (0 < (long)pvVar12 - (long)pvVar11) {
                memset(pvVar11,0,(long)pvVar12 - (long)pvVar11);
              }
              puVar17 = *(undefined8 **)(lVar14 + 0xd0);
              for (puVar21 = *(undefined8 **)(lVar14 + 200); puVar21 != puVar17;
                  puVar21 = puVar21 + 1) {
                TextModifierRange::computeCoverage
                          ((TextModifierRange *)*puVar21,*(long *)(lVar14 + 0x128),
                           *(long *)(lVar14 + 0x130) - *(long *)(lVar14 + 0x128) >> 2);
              }
            }
            plVar16 = plVar16 + 1;
          } while (plVar16 != plVar18);
        }
      }
      do {
        plVar16 = *(long **)((long)puVar9 + lVar23);
        if ((plVar16 != (long *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,plVar16 + 1), iVar8 == 1))
        {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
        lVar23 = lVar23 + -0x20;
      } while (lVar23 != -0x20);
      operator_delete(puVar9);
    }
    lVar14 = *(long *)(this + 0x288);
    for (lVar20 = *(long *)(this + 0x290); lVar20 != lVar14; lVar20 = lVar20 + -0x40) {
      pvVar12 = *(void **)(lVar20 + -0x28);
      if (pvVar12 != (void *)0x0) {
        *(void **)(lVar20 + -0x20) = pvVar12;
        operator_delete(pvVar12);
      }
    }
    *(long *)(this + 0x290) = lVar14;
    local_110 = (long *)0x0;
    local_c8 = malloc(4);
    uStack_f0 = 0;
    local_f8 = (void *)0x0;
    uStack_e0 = 0;
    local_e8 = (void *)0x0;
    uStack_d0 = 0;
    local_d8 = (void *)0x0;
    uStack_c0 = (ulong)(local_c8 != (void *)0x0);
    local_90 = (void *)0x0;
    uStack_88 = 0;
    uStack_b0 = 0;
    local_b8 = (void *)0x0;
    uStack_a0 = 0;
    local_a8 = (void *)0x0;
    FUN_004c4d64(this + 0x2a0,&local_110);
    free(local_90);
    free(local_a8);
    free(local_b8);
    free(local_c8);
    free(local_d8);
    free(local_e8);
    free(local_f8);
    plVar16 = local_110;
    if ((local_110 != (long *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,local_110 + 1), iVar8 == 1))
    {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
    if (*(long *)(this + 0x498) != 0) {
      puVar9 = (undefined8 *)*(void **)(this + 0x490);
      while (puVar9 != (undefined8 *)0x0) {
        plVar16 = (long *)puVar9[4];
        pvVar12 = (void *)*puVar9;
        if ((plVar16 != (long *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,plVar16 + 1), iVar8 == 1))
        {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
        operator_delete(puVar9);
        puVar9 = (undefined8 *)pvVar12;
      }
      lVar14 = *(long *)(this + 0x488);
      *(undefined8 *)(this + 0x490) = 0;
      if (lVar14 != 0) {
        lVar20 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0x480) + lVar20 * 8) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar14 != lVar20);
      }
      *(undefined8 *)(this + 0x498) = 0;
    }
  }
  buildRenderStyles();
LAB_004cd818:
  if ((param_2 & 0x290) != 0) {
    fVar27 = (float)((ulong)*(undefined8 *)(this + 0x1bc) >> 0x20);
    fVar31 = (float)*(undefined8 *)(this + 0x1bc);
    fVar26 = (float)*(undefined8 *)(this + 0xa4);
    fVar28 = (float)((ulong)*(undefined8 *)(this + 0xa4) >> 0x20);
    fVar30 = (float)((ulong)*(undefined8 *)(this + 0x1c8) >> 0x20);
    fVar24 = (float)*(undefined8 *)(this + 0xac);
    fVar25 = (float)((ulong)*(undefined8 *)(this + 0xac) >> 0x20);
    this[0x3b8] = (Text)0x0;
    *(undefined8 *)(this + 0x388) = *(undefined8 *)(this + 0x380);
    this[0x370] = (Text)0x1;
    fVar29 = (float)*(undefined8 *)(this + 0x1c8);
    *(undefined8 *)(this + 0x3a0) = *(undefined8 *)(this + 0x398);
    *(ulong *)(this + 0x1d8) =
         CONCAT44(fVar25 * (float)*(undefined8 *)(this + 0x1c4) + fVar27 * fVar28,
                  fVar24 * (float)*(undefined8 *)(this + 0x1c4) + fVar27 * fVar26);
    *(ulong *)(this + 0x1d0) =
         CONCAT44(fVar25 * fVar31 + (float)*(undefined8 *)(this + 0x1b8) * fVar28,
                  fVar24 * fVar31 + (float)*(undefined8 *)(this + 0x1b8) * fVar26);
    *(ulong *)(this + 0x1e0) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20) +
                  fVar25 * fVar30 + fVar28 * fVar29,
                  (float)*(undefined8 *)(this + 0xb4) + fVar24 * fVar30 + fVar26 * fVar29);
    auVar32 = RawPath::addPath((RawPath *)(this + 0x380),(RawPath *)(this + 0x330),
                               (Mat2D *)(this + 0x1d0));
    RawPath::pruneEmptySegments(this + 0x380,auVar32._0_8_,auVar32._8_8_);
    this[0x370] = (Text)0x1;
  }
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004cd940  FUN_004cd940 =====

void FUN_004cd940(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))();
  return;
}


// ===== 004cd94c  rive::Text::localBounds =====

/* rive::Text::localBounds() const */

undefined1  [16] __thiscall rive::Text::localBounds(Text *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = *(double *)(this + 0x3c8);
  auVar2._0_8_ = dVar1 - (double)CONCAT44((float)((ulong)*(undefined8 *)(this + 0x188) >> 0x20) *
                                          ((float)((ulong)*(undefined8 *)(this + 0x3d0) >> 0x20) -
                                          (float)((ulong)dVar1 >> 0x20)),
                                          (float)*(undefined8 *)(this + 0x188) *
                                          ((float)*(undefined8 *)(this + 0x3d0) - SUB84(dVar1,0)));
  auVar2._8_8_ = 0;
  return auVar2;
}


// ===== 004cd970  FUN_004cd970 =====

float FUN_004cd970(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_4 + 0xf0))();
  return param_3 - fVar1;
}


// ===== 004cd990  FUN_004cd990 =====

float FUN_004cd990(undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
                  long *param_5)

{
  (**(code **)(*param_5 + 0xf0))();
  return param_4 - param_2;
}


// ===== 004cd9b0  rive::Text::draw =====

/* rive::Text::draw(rive::Renderer*) */

void __thiscall rive::Text::draw(Text *this,Renderer *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x170] != (Text)0x0) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  if ((this[0x17c] == (Text)0x2) &&
     ((*(long *)(this + 0x380) != *(long *)(this + 0x388) ||
      ((*(long *)(this + 0x378) != 0 && (this[0x370] == (Text)0x0)))))) {
    uVar2 = ShapePaintPath::renderPath
                      ((ShapePaintPath *)(this + 0x370),
                       *(Factory **)(*(long *)(this + 0x40) + 0xbd8));
    (**(code **)(*(long *)param_1 + 0x30))(param_1,uVar2);
  }
  piVar4 = *(int **)(this + 0x238);
  uStack_58 = *(undefined8 *)(this + 0x1d8);
  local_60 = *(undefined8 *)(this + 0x1d0);
  local_50 = *(undefined8 *)(this + 0x1e0);
  for (piVar3 = *(int **)(this + 0x230); piVar3 != piVar4; piVar3 = piVar3 + 0x10) {
    if (*piVar3 == 0) {
      TextStylePaint::draw(*(TextStylePaint **)(piVar3 + 2),param_1,(Mat2D *)&local_60);
    }
    else {
      drawColorGlyph(this,param_1,(ColorGlyphInfo *)(piVar3 + 4),(Mat2D *)&local_60);
    }
  }
  if (this[0x170] != (Text)0x0) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004cdae4  rive::Text::hitTest =====

/* rive::Text::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::Text::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 004cdaec  rive::Text::alignValueChanged =====

/* rive::Text::alignValueChanged() */

void __thiscall rive::Text::alignValueChanged(Text *this)

{
                    /* WARNING: Could not recover jumptable at 0x004cdaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x298))();
  return;
}


// ===== 004cdaf8  rive::Text::sizingValueChanged =====

/* rive::Text::sizingValueChanged() */

void __thiscall rive::Text::sizingValueChanged(Text *this)

{
                    /* WARNING: Could not recover jumptable at 0x004cdb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x298))();
  return;
}


// ===== 004cdb04  rive::Text::overflowValueChanged =====

/* rive::Text::overflowValueChanged() */

void __thiscall rive::Text::overflowValueChanged(Text *this)

{
  if ((((this[0x4c9] == (Text)0x2) || (this[0x4c8] == (Text)0xff)) || (this[0x4c8] == (Text)0x2)) &&
     (this[0x178] == (Text)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004cdb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x298))();
  return;
}


// ===== 004cdb3c  rive::Text::widthChanged =====

/* rive::Text::widthChanged() */

void __thiscall rive::Text::widthChanged(Text *this)

{
  if ((((this[0x4c9] == (Text)0x2) || (this[0x4c8] == (Text)0xff)) || (this[0x4c8] == (Text)0x2)) &&
     (this[0x178] == (Text)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004cdb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x298))();
  return;
}


// ===== 004cdb74  rive::Text::heightChanged =====

/* rive::Text::heightChanged() */

void __thiscall rive::Text::heightChanged(Text *this)

{
  if ((((this[0x4c9] == (Text)0x2) || (this[0x4c8] == (Text)0xff)) || (this[0x4c8] == (Text)0x2)) &&
     (this[0x178] != (Text)0x2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004cdba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x298))();
  return;
}


// ===== 004cdbb0  rive::Text::originXChanged =====

/* rive::Text::originXChanged() */

void __thiscall rive::Text::originXChanged(Text *this)

{
  (**(code **)(*(long *)this + 0x2a0))();
  Component::addDirt((Component *)this,0x80,1);
  return;
}


// ===== 004cdbe4  rive::Text::originYChanged =====

/* rive::Text::originYChanged() */

void __thiscall rive::Text::originYChanged(Text *this)

{
  (**(code **)(*(long *)this + 0x2a0))();
  Component::addDirt((Component *)this,0x80,1);
  return;
}


// ===== 004cdc18  rive::Text::paragraphSpacingChanged =====

/* rive::Text::paragraphSpacingChanged() */

void __thiscall rive::Text::paragraphSpacingChanged(Text *this)

{
                    /* WARNING: Could not recover jumptable at 0x004cdc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x2a0))();
  return;
}


// ===== 004cdc24  rive::Text::originValueChanged =====

/* rive::Text::originValueChanged() */

void __thiscall rive::Text::originValueChanged(Text *this)

{
  (**(code **)(*(long *)this + 0x2a0))();
  Component::addDirt((Component *)this,0x80,1);
  return;
}


// ===== 004cdc58  FUN_004cdc58 =====

void FUN_004cdc58(void)

{
  return;
}


// ===== 004cdc5c  FUN_004cdc5c =====

void FUN_004cdc5c(void)

{
  return;
}


// ===== 004cdc60  FUN_004cdc60 =====

void FUN_004cdc60(void)

{
  return;
}


// ===== 004cdc64  FUN_004cdc64 =====

void FUN_004cdc64(void)

{
  return;
}


// ===== 004cdc68  rive::Text::markShapeDirty =====

/* rive::Text::markShapeDirty() */

void __thiscall rive::Text::markShapeDirty(Text *this)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar4 = *(long *)(this + 0x80);
    uVar2 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar4 + 0xc32) = 1;
    *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
    if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
      *(uint *)(lVar4 + 0xbd4) = uVar2;
    }
  }
  puVar8 = *(undefined8 **)(this + 0x3e0);
  for (puVar7 = *(undefined8 **)(this + 0x3d8); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    plVar1 = (long *)plVar6[0x1a];
    for (plVar5 = (long *)plVar6[0x19]; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0xd0);
      *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(lVar4 + 0xe8);
    }
    if ((*(ushort *)(plVar6 + 0xc) >> 5 & 1) == 0) {
      *(ushort *)(plVar6 + 0xc) = *(ushort *)(plVar6 + 0xc) | 0x20;
      (**(code **)(*plVar6 + 0x70))(plVar6);
      lVar4 = plVar6[0x10];
      uVar2 = *(uint *)(plVar6 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar2;
      }
    }
  }
  Component::addDirt((Component *)this,0x80,1);
  while (this = *(Text **)(this + 0x30), this != (Text *)0x0) {
    uVar3 = (**(code **)(*(long *)this + 0x18))(this,0x199);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*(long *)this + 0x2e0))(this,0);
    }
  }
  return;
}


// ===== 004cddc4  rive::Text::markPaintDirty =====

/* rive::Text::markPaintDirty() */

void __thiscall rive::Text::markPaintDirty(Text *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 9 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x200;
    (**(code **)(*(long *)this + 0x70))();
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004cde28  rive::Text::measureLayout =====

/* rive::Text::measureLayout(float, rive::LayoutMeasureMode, float, rive::LayoutMeasureMode) */

void __thiscall
rive::Text::measureLayout
          (undefined4 param_1,undefined4 param_2,undefined8 param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x7f7fffff;
  if (param_4 != '\0') {
    uVar1 = param_1;
  }
  uVar2 = 0x7f7fffff;
  if (param_5 != '\0') {
    uVar2 = param_2;
  }
  measure(uVar1,uVar2);
  return;
}


// ===== 004cde44  rive::Text::controlSize =====

/* rive::Text::controlSize(rive::Vec2D, rive::LayoutScaleType, rive::LayoutScaleType,
   rive::LayoutDirection) */

void rive::Text::controlSize
               (float param_1,float param_2,Component *param_3,Component param_4,Component param_5,
               Component param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  bVar3 = false;
  if ((*(float *)(param_3 + 0x4c0) == param_1) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0x4c4)) && !NAN(param_2))) {
    bVar3 = *(float *)(param_3 + 0x4c4) == param_2;
  }
  if ((((bVar3) && (param_3[0x4c8] == param_4)) && (param_3[0x4c9] == param_5)) &&
     (param_3[0x4ca] == param_6)) {
    return;
  }
  *(float *)(param_3 + 0x4c0) = param_1;
  *(float *)(param_3 + 0x4c4) = param_2;
  param_3[0x4c8] = param_4;
  param_3[0x4c9] = param_5;
  param_3[0x4ca] = param_6;
  if ((*(ushort *)(param_3 + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(param_3 + 0x60) = *(ushort *)(param_3 + 0x60) | 0x10;
    (**(code **)(*(long *)param_3 + 0x70))(param_3);
    lVar4 = *(long *)(param_3 + 0x80);
    uVar2 = *(uint *)(param_3 + 0x38);
    *(undefined1 *)(lVar4 + 0xc32) = 1;
    *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
    if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
      *(uint *)(lVar4 + 0xbd4) = uVar2;
    }
  }
  puVar8 = *(undefined8 **)(param_3 + 0x3e0);
  for (puVar7 = *(undefined8 **)(param_3 + 0x3d8); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    plVar1 = (long *)plVar6[0x1a];
    for (plVar5 = (long *)plVar6[0x19]; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0xd0);
      *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(lVar4 + 0xe8);
    }
    if ((*(ushort *)(plVar6 + 0xc) >> 5 & 1) == 0) {
      *(ushort *)(plVar6 + 0xc) = *(ushort *)(plVar6 + 0xc) | 0x20;
      (**(code **)(*plVar6 + 0x70))(plVar6);
      lVar4 = plVar6[0x10];
      uVar2 = *(uint *)(plVar6 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar2;
      }
    }
  }
  Component::addDirt(param_3,0x80,1);
  return;
}


// ===== 004cdfc4  rive::Text::updateList =====

/* rive::Text::updateList(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

void __thiscall rive::Text::updateList(Text *this,vector *param_1)

{
  Text *pTVar1;
  undefined *puVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  TextValueRunListener *pTVar7;
  void *pvVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  size_t __n;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  void *__dest;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  buildTextStylePaints(this);
  pvVar8 = *(void **)(this + 0x1e8);
  pvVar3 = *(void **)(this + 0x1f0);
  __dest = *(void **)(this + 0x200);
  uVar10 = *(ulong *)(this + 0x210);
  *(void **)(this + 0x208) = __dest;
  __n = (long)pvVar3 - (long)pvVar8;
  uVar23 = (long)__n >> 3;
  pTVar1 = this + 0x200;
  if (uVar23 <= (ulong)((long)(uVar10 - (long)__dest) >> 3)) {
joined_r0x004ce0a4:
    if (pvVar3 != pvVar8) {
      memmove(__dest,pvVar8,__n);
    }
    plVar11 = *(long **)(this + 0x4b0);
    lVar14 = *(long *)(this + 0x4a8);
    plVar9 = *(long **)param_1;
    plVar4 = *(long **)(param_1 + 8);
    uVar23 = 0;
    *(size_t *)(this + 0x208) = (long)__dest + __n;
    uVar10 = (long)plVar11 - lVar14 >> 3;
    if (plVar9 != plVar4) {
      puVar2 = PTR_vtable_0067d4f0 + 0x10;
      do {
        plVar11 = *(long **)(*plVar9 + 0x18);
        if (plVar11 != (long *)0x0) {
          FUN_00340fb0(1,(long)plVar11 + 0xa4);
          if (uVar23 < uVar10) {
            plVar20 = *(long **)(*(long *)(this + 0x4a8) + uVar23 * 8);
            FUN_00340fb0(1,(long)plVar11 + 0xa4);
            if (plVar11 != (long *)plVar20[2]) {
              FUN_00340fb0(1,(long)plVar11 + 0xa4);
              plVar21 = (long *)plVar20[2];
              plVar20[2] = (long)plVar11;
              if ((plVar21 != (long *)0x0) &&
                 (iVar6 = FUN_00340fe0(0xffffffff,(long)plVar21 + 0xa4), iVar6 == 1)) {
                (**(code **)(*plVar21 + 8))(plVar21);
              }
              (**(code **)(*plVar20 + 0x18))(plVar20);
            }
            iVar6 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0xa4);
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
            plVar21 = (long *)plVar20[1];
            if (plVar21 != (long *)0x0) goto LAB_004ce3d4;
          }
          else {
            plVar21 = (long *)operator_new(0xf8);
            plVar21[0x1e] = (long)this;
            plVar21[1] = 0;
            *plVar21 = 0;
            plVar21[3] = 0;
            plVar21[2] = 0;
            plVar21[5] = 0;
            plVar21[4] = 0;
            plVar21[7] = 0;
            plVar21[6] = 0;
            plVar21[9] = 0;
            plVar21[8] = 0;
            plVar21[0xb] = 0;
            plVar21[10] = 0;
            plVar21[0xd] = 0;
            plVar21[0xc] = 0;
            plVar21[0xf] = 0;
            plVar21[0xe] = 0;
            *(undefined2 *)(plVar21 + 0xc) = 0xfffe;
            plVar21[0x11] = 0;
            plVar21[0x10] = 0;
            plVar21[0x13] = 0;
            plVar21[0x12] = 0;
            plVar21[0x15] = 0;
            plVar21[0x14] = 0;
            plVar21[0x17] = 0;
            plVar21[0x16] = 0;
            plVar21[0x19] = 0;
            plVar21[0x18] = 0;
            plVar21[0x1b] = 0;
            plVar21[0x1a] = 0;
            plVar21[0x1d] = 0;
            plVar21[0x1c] = 0;
            *(undefined4 *)(plVar21 + 1) = 0xffffffff;
            plVar21[6] = 0;
            plVar21[0xe] = 0;
            plVar21[0xf] = 0;
            plVar21[0xd] = 0;
            *(undefined4 *)(plVar21 + 0x11) = 0xffffffff;
            *plVar21 = (long)puVar2;
            *(undefined1 *)(plVar21 + 0x18) = 0;
            plVar21[0x15] = 0;
            plVar21[0x16] = 0;
            plVar21[0x17] = 0;
            plVar21[0x1c] = 0;
            plVar21[0x1b] = 0;
            plVar21[0x1a] = 0;
            plVar21[0x19] = 0;
            *(undefined4 *)(plVar21 + 0x1d) = 0xffffffff;
            pTVar7 = (TextValueRunListener *)operator_new(0x38);
            FUN_00340fb0(1,(long)plVar11 + 0xa4);
            local_70 = plVar11;
            TextValueRunListener::TextValueRunListener(pTVar7,plVar21,&local_70,this);
            plVar20 = local_70;
            if ((local_70 != (long *)0x0) &&
               (iVar6 = FUN_00340fe0(0xffffffff,(long)local_70 + 0xa4), iVar6 == 1)) {
              (**(code **)(*plVar20 + 8))(plVar20);
            }
            puVar25 = *(undefined8 **)(this + 0x4b0);
            if (puVar25 < *(undefined8 **)(this + 0x4b8)) {
              puVar24 = puVar25 + 1;
              *puVar25 = pTVar7;
            }
            else {
              puVar22 = *(undefined8 **)(this + 0x4a8);
              lVar14 = (long)puVar25 - (long)puVar22 >> 3;
              uVar15 = lVar14 + 1;
              if (uVar15 >> 0x3d != 0) {
                FUN_004cf7d0();
                goto LAB_004ce5cc;
              }
              uVar13 = (long)*(undefined8 **)(this + 0x4b8) - (long)puVar22;
              uVar16 = (long)uVar13 >> 2;
              if (uVar16 <= uVar15) {
                uVar16 = uVar15;
              }
              if (0x7ffffffffffffff7 < uVar13) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 == 0) {
                pvVar8 = (void *)0x0;
              }
              else {
                if (uVar16 >> 0x3d != 0) goto LAB_004ce5c4;
                pvVar8 = operator_new(uVar16 << 3);
              }
              puVar12 = (undefined8 *)((long)pvVar8 + lVar14 * 8);
              puVar24 = puVar12 + 1;
              *puVar12 = pTVar7;
              if ((long)puVar25 - (long)puVar22 != 0) {
                uVar15 = ((long)puVar25 - (long)puVar22) - 8;
                puVar26 = puVar25;
                if ((0x37 < uVar15) &&
                   (0x1f < (ulong)((long)puVar25 + (-((long)puVar25 - (long)puVar22) - (long)pvVar8)
                                  ))) {
                  puVar18 = puVar12 + -2;
                  puVar19 = puVar25 + -2;
                  uVar15 = (uVar15 >> 3) + 1;
                  uVar17 = uVar15 & 0x3ffffffffffffffc;
                  puVar26 = puVar25 + -uVar17;
                  uVar13 = uVar17;
                  do {
                    puVar25 = puVar19 + -1;
                    uVar29 = puVar19[-2];
                    uVar28 = puVar19[1];
                    uVar27 = *puVar19;
                    uVar13 = uVar13 - 4;
                    puVar19 = puVar19 + -4;
                    puVar18[-1] = *puVar25;
                    puVar18[-2] = uVar29;
                    puVar18[1] = uVar28;
                    *puVar18 = uVar27;
                    puVar18 = puVar18 + -4;
                  } while (uVar13 != 0);
                  puVar12 = puVar12 + -uVar17;
                  puVar25 = puVar22;
                  if (uVar15 == uVar17) goto LAB_004ce3b0;
                }
                do {
                  puVar26 = puVar26 + -1;
                  puVar12 = puVar12 + -1;
                  *puVar12 = *puVar26;
                } while (puVar26 != puVar22);
                puVar25 = *(undefined8 **)(this + 0x4a8);
              }
LAB_004ce3b0:
              *(undefined8 **)(this + 0x4a8) = puVar12;
              *(undefined8 **)(this + 0x4b0) = puVar24;
              *(void **)(this + 0x4b8) = (void *)((long)pvVar8 + uVar16 * 8);
              if (puVar25 != (undefined8 *)0x0) {
                operator_delete(puVar25);
              }
            }
            *(undefined8 **)(this + 0x4b0) = puVar24;
LAB_004ce3d4:
            puVar25 = *(undefined8 **)(this + 0x208);
            if (puVar25 < *(undefined8 **)(this + 0x210)) {
              puVar24 = puVar25 + 1;
              *puVar25 = plVar21;
            }
            else {
              puVar22 = *(undefined8 **)pTVar1;
              lVar14 = (long)puVar25 - (long)puVar22 >> 3;
              uVar15 = lVar14 + 1;
              if (uVar15 >> 0x3d != 0) goto LAB_004ce5c0;
              uVar13 = (long)*(undefined8 **)(this + 0x210) - (long)puVar22;
              uVar16 = (long)uVar13 >> 2;
              if (uVar16 <= uVar15) {
                uVar16 = uVar15;
              }
              if (0x7ffffffffffffff7 < uVar13) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 == 0) {
                pvVar8 = (void *)0x0;
              }
              else {
                if (uVar16 >> 0x3d != 0) goto LAB_004ce5c4;
                pvVar8 = operator_new(uVar16 << 3);
              }
              puVar12 = (undefined8 *)((long)pvVar8 + lVar14 * 8);
              puVar24 = puVar12 + 1;
              *puVar12 = plVar21;
              if ((long)puVar25 - (long)puVar22 != 0) {
                uVar15 = ((long)puVar25 - (long)puVar22) - 8;
                puVar26 = puVar25;
                if ((0x37 < uVar15) &&
                   (0x1f < (ulong)((long)puVar25 + (-((long)puVar25 - (long)puVar22) - (long)pvVar8)
                                  ))) {
                  puVar18 = puVar12 + -2;
                  puVar19 = puVar25 + -2;
                  uVar15 = (uVar15 >> 3) + 1;
                  uVar17 = uVar15 & 0x3ffffffffffffffc;
                  puVar26 = puVar25 + -uVar17;
                  uVar13 = uVar17;
                  do {
                    puVar25 = puVar19 + -1;
                    uVar29 = puVar19[-2];
                    uVar28 = puVar19[1];
                    uVar27 = *puVar19;
                    uVar13 = uVar13 - 4;
                    puVar19 = puVar19 + -4;
                    puVar18[-1] = *puVar25;
                    puVar18[-2] = uVar29;
                    puVar18[1] = uVar28;
                    *puVar18 = uVar27;
                    puVar18 = puVar18 + -4;
                  } while (uVar13 != 0);
                  puVar12 = puVar12 + -uVar17;
                  puVar25 = puVar22;
                  if (uVar15 == uVar17) goto LAB_004ce4e4;
                }
                do {
                  puVar26 = puVar26 + -1;
                  puVar12 = puVar12 + -1;
                  *puVar12 = *puVar26;
                } while (puVar26 != puVar22);
                puVar25 = *(undefined8 **)pTVar1;
              }
LAB_004ce4e4:
              *(undefined8 **)(this + 0x200) = puVar12;
              *(undefined8 **)(this + 0x208) = puVar24;
              *(void **)(this + 0x210) = (void *)((long)pvVar8 + uVar16 * 8);
              if (puVar25 != (undefined8 *)0x0) {
                operator_delete(puVar25);
              }
            }
            *(undefined8 **)(this + 0x208) = puVar24;
          }
          uVar23 = uVar23 + 1;
          iVar6 = FUN_00340fe0(0xffffffff,(long)plVar11 + 0xa4);
          if (iVar6 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar4);
      plVar11 = *(long **)(this + 0x4b0);
      lVar14 = *(long *)(this + 0x4a8);
      uVar10 = (long)plVar11 - lVar14 >> 3;
    }
    while (uVar23 < uVar10) {
      plVar11 = plVar11 + -1;
      plVar9 = (long *)*plVar11;
      *(long **)(this + 0x4b0) = plVar11;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
        plVar11 = *(long **)(this + 0x4b0);
        lVar14 = *(long *)(this + 0x4a8);
      }
      uVar10 = (long)plVar11 - lVar14 >> 3;
    }
    (**(code **)(*(long *)this + 0x298))(this);
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
LAB_004ce5cc:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (__dest != (void *)0x0) {
    operator_delete(__dest);
    uVar10 = 0;
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)(this + 0x208) = 0;
    *(undefined8 *)(this + 0x210) = 0;
  }
  if (uVar23 >> 0x3d == 0) {
    uVar15 = (long)uVar10 >> 2;
    if ((ulong)((long)uVar10 >> 2) <= uVar23) {
      uVar15 = uVar23;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar15 = 0x1fffffffffffffff;
    }
    if (uVar15 >> 0x3d == 0) {
      __dest = operator_new(uVar15 * 8);
      *(void **)(this + 0x200) = __dest;
      *(void **)(this + 0x208) = __dest;
      *(void **)(this + 0x210) = (void *)((long)__dest + uVar15 * 8);
      goto joined_r0x004ce0a4;
    }
  }
LAB_004ce5c0:
  FUN_004cf7e4();
LAB_004ce5c4:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 004ce5d0  rive::Text::measureLayout =====

/* non-virtual thunk to rive::Text::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

void __thiscall
rive::Text::measureLayout
          (undefined4 param_1,undefined4 param_2,Text *this,char param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x7f7fffff;
  if (param_4 != '\0') {
    uVar1 = param_1;
  }
  uVar2 = 0x7f7fffff;
  if (param_5 != '\0') {
    uVar2 = param_2;
  }
  measure(uVar1,uVar2,this + -200);
  return;
}


// ===== 004ce5f0  rive::Text::controlSize =====

/* non-virtual thunk to rive::Text::controlSize(rive::Vec2D, rive::LayoutScaleType,
   rive::LayoutScaleType, rive::LayoutDirection) */

void __thiscall
rive::Text::controlSize
          (float param_1,float param_2,Text *this,Text param_4,Text param_5,Text param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  bVar3 = false;
  if ((*(float *)(this + 0x3f8) == param_1) &&
     (bVar3 = false, !NAN(*(float *)(this + 0x3fc)) && !NAN(param_2))) {
    bVar3 = *(float *)(this + 0x3fc) == param_2;
  }
  if ((((bVar3) && (this[0x400] == param_4)) && (this[0x401] == param_5)) &&
     (this[0x402] == param_6)) {
    return;
  }
  *(float *)(this + 0x3f8) = param_1;
  *(float *)(this + 0x3fc) = param_2;
  this[0x400] = param_4;
  this[0x401] = param_5;
  this[0x402] = param_6;
  if ((*(ushort *)(this + -0x68) >> 4 & 1) == 0) {
    *(ushort *)(this + -0x68) = *(ushort *)(this + -0x68) | 0x10;
    (**(code **)(*(long *)(this + -200) + 0x70))((Component *)(this + -200));
    lVar4 = *(long *)(this + -0x48);
    uVar2 = *(uint *)(this + -0x90);
    *(undefined1 *)(lVar4 + 0xc32) = 1;
    *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
    if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
      *(uint *)(lVar4 + 0xbd4) = uVar2;
    }
  }
  puVar8 = *(undefined8 **)(this + 0x318);
  for (puVar7 = *(undefined8 **)(this + 0x310); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    plVar1 = (long *)plVar6[0x1a];
    for (plVar5 = (long *)plVar6[0x19]; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0xd0);
      *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(lVar4 + 0xe8);
    }
    if ((*(ushort *)(plVar6 + 0xc) >> 5 & 1) == 0) {
      *(ushort *)(plVar6 + 0xc) = *(ushort *)(plVar6 + 0xc) | 0x20;
      (**(code **)(*plVar6 + 0x70))(plVar6);
      lVar4 = plVar6[0x10];
      uVar2 = *(uint *)(plVar6 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar2;
      }
    }
  }
  Component::addDirt((Component *)(this + -200),0x80,1);
  return;
}


// ===== 004ce768  rive::Text::markPaintDirty =====

/* non-virtual thunk to rive::Text::markPaintDirty() */

void __thiscall rive::Text::markPaintDirty(Text *this)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  
  uVar2 = *(ushort *)(this + -0x148);
  if ((uVar2 >> 9 & 1) == 0) {
    *(ushort *)(this + -0x148) = uVar2 | 0x200;
    (**(code **)(*(long *)(this + -0x1a8) + 0x70))(this + -0x1a8);
    lVar3 = *(long *)(this + -0x128);
    uVar1 = *(uint *)(this + -0x170);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004ce7e0  rive::Text::markShapeDirty =====

/* non-virtual thunk to rive::Text::markShapeDirty() */

void __thiscall rive::Text::markShapeDirty(Text *this)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  Component *pCVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  pCVar7 = (Component *)(this + -0x1a8);
  uVar3 = *(ushort *)(this + -0x148);
  if ((uVar3 >> 4 & 1) == 0) {
    *(ushort *)(this + -0x148) = uVar3 | 0x10;
    (**(code **)(*(long *)pCVar7 + 0x70))(pCVar7);
    lVar5 = *(long *)(this + -0x128);
    uVar2 = *(uint *)(this + -0x170);
    *(undefined1 *)(lVar5 + 0xc32) = 1;
    *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
    if (uVar2 < *(uint *)(lVar5 + 0xbd4)) {
      *(uint *)(lVar5 + 0xbd4) = uVar2;
    }
  }
  puVar10 = *(undefined8 **)(this + 0x238);
  for (puVar9 = *(undefined8 **)(this + 0x230); puVar9 != puVar10; puVar9 = puVar9 + 1) {
    plVar8 = (long *)*puVar9;
    plVar1 = (long *)plVar8[0x1a];
    for (plVar6 = (long *)plVar8[0x19]; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar5 = *plVar6;
      *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(lVar5 + 0xd0);
      *(undefined8 *)(lVar5 + 0xf0) = *(undefined8 *)(lVar5 + 0xe8);
    }
    if ((*(ushort *)(plVar8 + 0xc) >> 5 & 1) == 0) {
      *(ushort *)(plVar8 + 0xc) = *(ushort *)(plVar8 + 0xc) | 0x20;
      (**(code **)(*plVar8 + 0x70))(plVar8);
      lVar5 = plVar8[0x10];
      uVar2 = *(uint *)(plVar8 + 7);
      *(undefined1 *)(lVar5 + 0xc32) = 1;
      *(ushort *)(lVar5 + 0x60) = *(ushort *)(lVar5 + 0x60) | 4;
      if (uVar2 < *(uint *)(lVar5 + 0xbd4)) {
        *(uint *)(lVar5 + 0xbd4) = uVar2;
      }
    }
  }
  Component::addDirt(pCVar7,0x80,1);
  for (plVar6 = *(long **)(this + -0x178); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[6]) {
    uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,0x199);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar6 + 0x2e0))(plVar6,0);
    }
  }
  return;
}


// ===== 004ce958  rive::Text::localBounds =====

/* non-virtual thunk to rive::Text::localBounds() const */

undefined1  [16] __thiscall rive::Text::localBounds(Text *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = *(double *)(this + 0x220);
  auVar2._0_8_ = dVar1 - (double)CONCAT44((float)((ulong)*(undefined8 *)(this + -0x20) >> 0x20) *
                                          ((float)((ulong)*(undefined8 *)(this + 0x228) >> 0x20) -
                                          (float)((ulong)dVar1 >> 0x20)),
                                          (float)*(undefined8 *)(this + -0x20) *
                                          ((float)*(undefined8 *)(this + 0x228) - SUB84(dVar1,0)));
  auVar2._8_8_ = 0;
  return auVar2;
}


// ===== 004ce97c  rive::Text::updateList =====

/* non-virtual thunk to
   rive::Text::updateList(std::__ndk1::vector<rive::rcp<rive::ViewModelInstanceListItem>,
   std::__ndk1::allocator<rive::rcp<rive::ViewModelInstanceListItem> > >*) */

void __thiscall rive::Text::updateList(Text *this,vector *param_1)

{
  updateList(this + -0x1b0,param_1);
  return;
}


// ===== 004ce984  rive::Text::measure =====

/* rive::Text::measure(rive::Vec2D) */

float rive::Text::measure(float param_1,float param_2,Text *param_3)

{
  Text TVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long *local_98;
  long lStack_90;
  long *local_88;
  long lStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar4 = makeStyled(param_3,(StyledText *)(param_3 + 0x3f0),true);
  fVar15 = 0.0;
  if ((uVar4 & 1) != 0) {
    lVar11 = *(long *)(param_3 + 0x408);
    plVar13 = *(long **)(param_3 + 0x410);
    uVar4 = (long)plVar13 - lVar11;
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c5570();
    }
    fVar19 = *(float *)(param_3 + 400);
    puVar5 = (undefined8 *)operator_new(uVar4);
    lVar14 = 0;
    do {
      lVar12 = lVar14;
      plVar9 = (long *)(lVar11 + lVar12);
      lVar14 = *plVar9;
      if (lVar14 != 0) {
        FUN_00340fb0(1,lVar14 + 8);
      }
      *(long *)((long)puVar5 + lVar12) = lVar14;
      lVar8 = plVar9[2];
      lVar14 = plVar9[1];
      *(undefined8 *)((long)puVar5 + lVar12 + 0x17) = *(undefined8 *)((long)plVar9 + 0x17);
      *(long *)((long)puVar5 + lVar12 + 0x10) = lVar8;
      *(long *)((long)puVar5 + lVar12 + 8) = lVar14;
      lVar14 = lVar12 + 0x20;
    } while (plVar9 + 4 != plVar13);
    Font::shapeText((Font *)&local_88,*puVar5,*(long *)(param_3 + 0x3f0),
                    *(long *)(param_3 + 0x3f8) - *(long *)(param_3 + 0x3f0) >> 2,puVar5,
                    lVar12 + 0x20 >> 5,0xffffffff);
    if ((((param_3[0x4c9] == (Text)0x2) || (param_3[0x4c8] == (Text)0xff)) ||
        (param_3[0x4c8] == (Text)0x2)) && (1 < (byte)param_3[0x178] - 1)) {
      fVar15 = 3.4028235e+38;
    }
    else {
      fVar15 = *(float *)(param_3 + 0x180);
    }
    if ((param_1 == 3.4028235e+38) &&
       ((((param_3[0x4c9] != (Text)0x2 && (param_3[0x4c8] != (Text)0xff)) &&
         (param_3[0x4c8] != (Text)0x2)) || (param_3[0x178] != (Text)0x1)))) {
      uVar7 = 1;
    }
    else {
      uVar7 = *(undefined4 *)(param_3 + 0x198);
    }
    if (param_1 <= fVar15) {
      fVar15 = param_1;
    }
    TVar1 = param_3[0x174];
    if (param_3[0x174] != (Text)0x2 && param_3[0x4ca] != (Text)0x0) {
      TVar1 = (Text)(param_3[0x4ca] != (Text)0x1);
    }
    BreakLines((Text *)&local_98,fVar15,&local_88,TVar1,uVar7);
    fVar16 = 0.0;
    if (((param_3[0x194] == (Text)0x1) && (lStack_90 != 0)) && (local_98[1] != 0)) {
      fVar16 = 0.0 - *(float *)(*local_98 + 0x18);
    }
    TVar1 = param_3[0x178];
    fVar15 = 0.0;
    if (lStack_90 != 0) {
      lVar11 = 0;
      plVar13 = local_98;
      do {
        lVar14 = plVar13[1];
        if (lVar14 != 0) {
          lVar8 = lVar14 << 5;
          puVar6 = (uint *)*plVar13;
          do {
            fVar18 = *(float *)(*(long *)(local_88[lVar11 * 3] + (ulong)puVar6[2] * 0x90 + 0x48) +
                               (ulong)puVar6[3] * 4) -
                     *(float *)(*(long *)(local_88[lVar11 * 3] + (ulong)*puVar6 * 0x90 + 0x48) +
                               (ulong)puVar6[1] * 4);
            fVar17 = fVar16 + (float)puVar6[7];
            if (fVar18 == fVar15 || fVar18 < fVar15 != (NAN(fVar18) || NAN(fVar15))) {
              fVar18 = fVar15;
            }
            fVar15 = fVar18;
            if ((fVar17 != param_2 && fVar17 < param_2 == (NAN(fVar17) || NAN(param_2))) &&
                (param_3[0x17c] == (Text)0x3 && TVar1 == (Text)0x2)) goto LAB_004cec48;
            lVar8 = lVar8 + -0x20;
            puVar6 = puVar6 + 8;
          } while (lVar8 != 0);
          fVar16 = fVar16 + (float)((uint *)*plVar13)[lVar14 * 8 + -1];
        }
        fVar16 = fVar19 + fVar16;
        plVar13 = plVar13 + 2;
        lVar11 = lVar11 + 1;
      } while (plVar13 != local_98 + lStack_90 * 2);
    }
LAB_004cec48:
    if ((TVar1 == (Text)0x2) || (TVar1 == (Text)0x1)) {
      fVar15 = *(float *)(param_3 + 0x180);
    }
    if (param_1 <= fVar15) {
      fVar15 = param_1;
    }
    plVar13 = local_98;
    if (0 < lStack_90) {
      do {
        plVar9 = plVar13 + 2;
        free((void *)*plVar13);
        plVar13 = plVar9;
      } while (plVar9 < local_98 + lStack_90 * 2);
    }
    free(local_98);
    if (0 < lStack_80) {
      plVar9 = local_88 + lStack_80 * 3;
      plVar13 = local_88;
      do {
        FUN_004c53c0(*plVar13,*plVar13 + plVar13[1] * 0x90);
        plVar10 = plVar13 + 3;
        free((void *)*plVar13);
        plVar13 = plVar10;
      } while (plVar10 < plVar9);
    }
    free(local_88);
    do {
      plVar13 = *(long **)((long)puVar5 + lVar12);
      if ((plVar13 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar13 + 1), iVar3 == 1)) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != -0x20);
    operator_delete(puVar5);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar15;
}


// ===== 004ced88  rive::Text::makeStyled =====

/* rive::Text::makeStyled(rive::StyledText&, bool) const */

void __thiscall rive::Text::makeStyled(Text *this,StyledText *param_1,bool param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  TextStyle *this_00;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_1;
  while (puVar6 != puVar5) {
    puVar6 = puVar6 + -4;
    plVar8 = (long *)*puVar6;
    if ((plVar8 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar8 + 1), iVar3 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  plVar8 = *(long **)(this + 0x200);
  plVar9 = *(long **)(this + 0x208);
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  if (plVar8 != plVar9) {
    iVar3 = 0;
    do {
      lVar10 = *plVar8;
      this_00 = *(TextStyle **)(lVar10 + 0xe0);
      if (this_00 != (TextStyle *)0x0) {
        plVar7 = *(long **)(this_00 + 200);
        if (plVar7 == (long *)0x0) {
          if ((*(long *)(this_00 + 0xe8) != *(long *)(this_00 + 0xf0)) ||
             (*(long *)(this_00 + 0x100) != *(long *)(this_00 + 0x108))) {
            TextStyle::updateVariableFont(this_00);
            plVar7 = *(long **)(this_00 + 200);
            if (plVar7 != (long *)0x0) goto LAB_004cee84;
          }
          if ((*(long *)(this_00 + 0xb8) == 0) ||
             (plVar7 = *(long **)(*(long *)(this_00 + 0xb8) + 0x80), plVar7 == (long *)0x0))
          goto LAB_004cee28;
        }
LAB_004cee84:
        FUN_00340fb0(1,plVar7 + 1);
        uVar1 = (ulong)(*(byte *)(lVar10 + 0x90) >> 1);
        if ((*(byte *)(lVar10 + 0x90) & 1) != 0) {
          uVar1 = *(ulong *)(lVar10 + 0x98);
        }
        iVar4 = FUN_00340fe0(0xffffffff,plVar7 + 1);
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        if (uVar1 != 0) {
          plVar7 = *(long **)(this_00 + 200);
          if (plVar7 == (long *)0x0) {
            if ((*(long *)(this_00 + 0xe8) != *(long *)(this_00 + 0xf0)) ||
               (*(long *)(this_00 + 0x100) != *(long *)(this_00 + 0x108))) {
              TextStyle::updateVariableFont(this_00);
              plVar7 = *(long **)(this_00 + 200);
              if (plVar7 != (long *)0x0) goto LAB_004cef0c;
            }
            if (*(long *)(this_00 + 0xb8) == 0) {
              plVar7 = (long *)0x0;
            }
            else {
              plVar7 = *(long **)(*(long *)(this_00 + 0xb8) + 0x80);
              if (plVar7 != (long *)0x0) goto LAB_004cef0c;
            }
          }
          else {
LAB_004cef0c:
            FUN_00340fb0(1,plVar7 + 1);
          }
                    /* WARNING: Load size is inaccurate */
          local_70 = plVar7;
          StyledText::append(*(StyledText **)(this_00 + 0xa0),*(undefined4 *)(this_00 + 0xa4),
                             *(undefined4 *)(this_00 + 0xa8),param_1,&local_70,lVar10 + 0x90,iVar3);
          plVar7 = local_70;
          if ((local_70 != (long *)0x0) &&
             (iVar4 = FUN_00340fe0(0xffffffff,local_70 + 1), iVar4 == 1)) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
LAB_004cee28:
      plVar8 = plVar8 + 1;
      iVar3 = iVar3 + 1;
    } while (plVar8 != plVar9);
  }
  if (param_2) {
    puVar6 = *(undefined8 **)(this + 0x3e0);
    for (puVar5 = *(undefined8 **)(this + 0x3d8); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      TextModifierGroup::applyShapeModifiers((TextModifierGroup *)*puVar5,this,param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20));
}


// ===== 004cefe0  rive::Text::BreakLines =====

/* rive::Text::BreakLines(rive::SimpleArray<rive::Paragraph> const&, float, rive::TextAlign,
   rive::TextWrap) */

void __thiscall
rive::Text::BreakLines(undefined8 *param_1,float param_2,Text *this,undefined4 param_4,char param_5)

{
  uint *puVar1;
  void *pvVar2;
  long *plVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  bool bVar8;
  void *__s;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long local_98;
  long lStack_90;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  lVar15 = *(long *)(this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar15 - 1U < 0xfffffffffffffff) {
    __s = malloc(lVar15 << 4);
    *param_1 = __s;
    if (__s != (void *)0x0) {
      pvVar2 = (void *)((long)__s + lVar15 * 0x10);
      param_1[1] = lVar15;
      if (pvVar2 <= (void *)((long)__s + 0x10U)) {
        pvVar2 = (void *)((long)__s + 0x10U);
      }
      memset(__s,0,((long)pvVar2 + ~(ulong)__s & 0xfffffffffffffff0) + 0x10);
    }
  }
  else {
    if (lVar15 == 0) goto LAB_004cf198;
    __s = (void *)0x0;
  }
  plVar14 = *(long **)this;
  plVar16 = plVar14 + lVar15 * 3;
  lVar15 = 0;
  bVar8 = true;
  if ((param_5 != '\x01') && (bVar8 = false, !NAN(param_2))) {
    bVar8 = param_2 == -1.0;
  }
  fVar19 = param_2;
  fVar20 = -1.0;
  if (!bVar8) {
    fVar20 = param_2;
  }
  do {
    GlyphLine::BreakLines(&local_98,fVar20,*plVar14,plVar14[1]);
    plVar3 = (long *)((long)__s + lVar15 * 0x10);
    free((void *)*plVar3);
    *plVar3 = local_98;
    plVar3[1] = lStack_90;
    fVar17 = fVar19;
    if (param_2 == -1.0) {
      fVar17 = 0.0;
      if (lStack_90 != 0) {
        lVar9 = lStack_90 << 5;
        puVar10 = (uint *)(local_98 + 8);
        fVar17 = 0.0;
        do {
          uVar4 = *puVar10;
          puVar5 = puVar10 + 1;
          puVar1 = puVar10 + -2;
          puVar6 = puVar10 + -1;
          puVar10 = puVar10 + 8;
          fVar18 = *(float *)(*(long *)(*plVar14 + (ulong)uVar4 * 0x90 + 0x48) + (ulong)*puVar5 * 4)
                   - *(float *)(*(long *)(*plVar14 + (ulong)*puVar1 * 0x90 + 0x48) +
                               (ulong)*puVar6 * 4);
          if (fVar18 <= fVar17) {
            fVar18 = fVar17;
          }
          fVar17 = fVar18;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != 0);
      }
      if (fVar17 <= fVar19) {
        fVar17 = fVar19;
      }
    }
    plVar14 = plVar14 + 3;
    lVar15 = lVar15 + 1;
    fVar19 = fVar17;
  } while (plVar14 != plVar16);
  lVar15 = *(long *)(this + 8);
  if (lVar15 != 0) {
    puVar11 = *(undefined8 **)this;
    lVar9 = 0;
    puVar12 = puVar11;
    do {
      puVar13 = puVar12 + 3;
      GlyphLine::ComputeLineSpacing
                (fVar17,lVar9 == 0,*(undefined8 *)((long)__s + lVar9),
                 ((undefined8 *)((long)__s + lVar9))[1],*puVar12,puVar12[1],param_4);
      lVar9 = lVar9 + 0x10;
      puVar12 = puVar13;
    } while (puVar13 != puVar11 + lVar15 * 3);
  }
LAB_004cf198:
  if (*(long *)(lVar7 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf1d4  rive::StyledText::append =====

/* rive::StyledText::append(rive::rcp<rive::Font>, float, float, float,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned short) */

void __thiscall
rive::StyledText::append
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,StyledText *this,
          undefined8 *param_5,byte *param_6,undefined2 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  int iVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  long local_88;
  
  lVar4 = tpidr_el0;
  iVar7 = 0;
  local_88 = *(long *)(lVar4 + 0x28);
  pbVar14 = *(byte **)(param_6 + 0x10);
  if ((*param_6 & 1) == 0) {
    pbVar14 = param_6 + 1;
  }
  bVar3 = *pbVar14;
  while (bVar3 != 0) {
    uVar21 = (uint)bVar3;
    if (((char)bVar3 < '\0') && ((bVar3 >> 6 & 1) != 0)) {
      lVar15 = 0;
      uVar10 = uVar21;
      do {
        lVar11 = lVar15;
        lVar15 = lVar11 + 1;
        uVar1 = uVar10 >> 5;
        uVar10 = uVar10 << 1;
      } while ((uVar1 & 1) != 0);
      uVar10 = (uint)lVar15;
      lVar15 = 0;
      pbVar25 = pbVar14 + lVar11 + 2;
      uVar21 = 0x7fU >> (ulong)(uVar10 & 0x1f) & uVar21;
      do {
        lVar11 = lVar15 + 1;
        lVar15 = lVar15 + 1;
        uVar21 = pbVar14[lVar11] & 0x3f | uVar21 << 6;
      } while (uVar10 != (uint)lVar15);
    }
    else {
      pbVar25 = pbVar14 + 1;
    }
    puVar22 = *(uint **)(this + 8);
    if (puVar22 < *(uint **)(this + 0x10)) {
      puVar24 = puVar22 + 1;
      *puVar22 = uVar21;
    }
    else {
      puVar23 = *(uint **)this;
      lVar15 = (long)puVar22 - (long)puVar23 >> 2;
      uVar16 = lVar15 + 1;
      if (uVar16 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003b1ebc();
      }
      uVar12 = (long)*(uint **)(this + 0x10) - (long)puVar23;
      uVar17 = (long)uVar12 >> 1;
      if (uVar17 <= uVar16) {
        uVar17 = uVar16;
      }
      if (0x7ffffffffffffffb < uVar12) {
        uVar17 = 0x3fffffffffffffff;
      }
      if (uVar17 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (uVar17 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        pvVar8 = operator_new(uVar17 << 2);
      }
      puVar13 = (uint *)((long)pvVar8 + lVar15 * 4);
      puVar24 = puVar13 + 1;
      *puVar13 = uVar21;
      if ((long)puVar22 - (long)puVar23 != 0) {
        uVar16 = ((long)puVar22 - (long)puVar23) - 4;
        if ((0x1b < uVar16) &&
           (0x1f < (ulong)((long)puVar22 + (-((long)puVar22 - (long)puVar23) - (long)pvVar8)))) {
          puVar19 = puVar13 + -4;
          puVar20 = puVar22 + -4;
          uVar16 = (uVar16 >> 2) + 1;
          uVar18 = uVar16 & 0x7ffffffffffffff8;
          puVar22 = puVar22 + -uVar18;
          uVar12 = uVar18;
          do {
            puVar5 = puVar20 + -2;
            uVar27 = *(undefined8 *)(puVar20 + -4);
            uVar26 = *(undefined8 *)(puVar20 + 2);
            uVar9 = *(undefined8 *)puVar20;
            uVar12 = uVar12 - 8;
            puVar20 = puVar20 + -8;
            *(undefined8 *)(puVar19 + -2) = *(undefined8 *)puVar5;
            *(undefined8 *)(puVar19 + -4) = uVar27;
            *(undefined8 *)(puVar19 + 2) = uVar26;
            *(undefined8 *)puVar19 = uVar9;
            puVar19 = puVar19 + -8;
          } while (uVar12 != 0);
          puVar13 = puVar13 + -uVar18;
          if (uVar16 == uVar18) goto LAB_004cf3a8;
        }
        do {
          puVar22 = puVar22 + -1;
          puVar13 = puVar13 + -1;
          *puVar13 = *puVar22;
        } while (puVar22 != puVar23);
      }
LAB_004cf3a8:
      *(uint **)this = puVar13;
      *(uint **)(this + 8) = puVar24;
      *(void **)(this + 0x10) = (void *)((long)pvVar8 + uVar17 * 4);
      if (puVar23 != (uint *)0x0) {
        operator_delete(puVar23);
      }
    }
    *(uint **)(this + 8) = puVar24;
    iVar7 = iVar7 + 1;
    pbVar14 = pbVar25;
    bVar3 = *pbVar25;
  }
  local_a8 = (long *)*param_5;
  *param_5 = 0;
  puVar2 = *(undefined8 **)(this + 0x20);
  uStack_90 = 0;
  uStack_8a = 0;
  local_a0 = param_1;
  uStack_9c = param_2;
  uStack_98 = param_3;
  uStack_94 = iVar7;
  uStack_8c = param_7;
  if (puVar2 < *(undefined8 **)(this + 0x28)) {
    *puVar2 = local_a8;
    uStack_94._3_1_ = (byte)((uint)iVar7 >> 0x18);
    puVar2[2] = CONCAT44(iVar7,param_3);
    puVar2[1] = CONCAT44(param_2,param_1);
    *(ulong *)((long)puVar2 + 0x17) = (ulong)CONCAT25(param_7,(uint5)uStack_94._3_1_);
    *(undefined8 **)(this + 0x20) = puVar2 + 4;
  }
  else {
    uVar9 = FUN_004cf4d8(this + 0x18,&local_a8);
    plVar6 = local_a8;
    *(undefined8 *)(this + 0x20) = uVar9;
    if ((local_a8 != (long *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,local_a8 + 1), iVar7 == 1)) {
      if (*(long *)(lVar4 + 0x28) == local_88) {
                    /* WARNING: Could not recover jumptable at 0x004cf48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 8))(plVar6);
        return;
      }
      goto LAB_004cf4d4;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
LAB_004cf4d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf4d8  FUN_004cf4d8 =====

undefined8 * FUN_004cf4d8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar3 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  lVar13 = (long)puVar12 - (long)puVar3 >> 5;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c5570();
  }
  uVar8 = param_1[2] - (long)puVar3 >> 4;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x7fffffffffffffdf < (ulong)(param_1[2] - (long)puVar3)) {
    uVar8 = 0x7ffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar6 = operator_new(uVar8 << 5);
  }
  puVar2 = (undefined8 *)((long)pvVar6 + lVar13 * 0x20);
  uVar7 = *param_2;
  uVar15 = param_2[2];
  uVar14 = param_2[1];
  uVar9 = *(undefined8 *)((long)param_2 + 0x17);
  *param_2 = 0;
  *puVar2 = uVar7;
  puVar2[2] = uVar15;
  puVar2[1] = uVar14;
  *(undefined8 *)((long)puVar2 + 0x17) = uVar9;
  puVar4 = puVar2;
  while (puVar12 != puVar3) {
    puVar11 = puVar12 + -4;
    uVar7 = *puVar11;
    *puVar11 = 0;
    puVar4[-4] = uVar7;
    uVar9 = puVar12[-2];
    uVar7 = puVar12[-3];
    *(undefined8 *)((long)puVar4 + -9) = *(undefined8 *)((long)puVar12 + -9);
    puVar4[-2] = uVar9;
    puVar4[-3] = uVar7;
    puVar12 = puVar11;
    puVar4 = puVar4 + -4;
  }
  puVar3 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  *param_1 = (long)puVar4;
  param_1[1] = (long)(puVar2 + 4);
  param_1[2] = (long)((long)pvVar6 + uVar8 * 0x20);
  while (puVar12 != puVar3) {
    puVar12 = puVar12 + -4;
    plVar10 = (long *)*puVar12;
    if ((plVar10 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,plVar10 + 1), iVar5 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
  }
  return puVar2 + 4;
}


// ===== 004cf618  rive::Text::buildTextStylePaints =====

/* rive::Text::buildTextStylePaints() */

void __thiscall rive::Text::buildTextStylePaints(Text *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (*(long *)(this + 0x470) == *(long *)(this + 0x468)) {
    puVar2 = *(undefined8 **)(this + 0x90);
    for (puVar1 = *(undefined8 **)(this + 0x88); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      sVar3 = (**(code **)(*(long *)*puVar1 + 0x10))();
      if (sVar3 == 0x89) {
        puVar15 = *(undefined8 **)(this + 0x470);
        uVar17 = *puVar1;
        if (puVar15 < *(undefined8 **)(this + 0x478)) {
          puVar13 = puVar15 + 1;
          *puVar15 = uVar17;
        }
        else {
          puVar12 = *(undefined8 **)(this + 0x468);
          lVar14 = (long)puVar15 - (long)puVar12 >> 3;
          uVar7 = lVar14 + 1;
          if (uVar7 >> 0x3d != 0) {
            FUN_004cbb98();
LAB_004cf7cc:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar5 = (long)*(undefined8 **)(this + 0x478) - (long)puVar12;
          uVar8 = (long)uVar5 >> 2;
          if (uVar8 <= uVar7) {
            uVar8 = uVar7;
          }
          if (0x7ffffffffffffff7 < uVar5) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            if (uVar8 >> 0x3d != 0) goto LAB_004cf7cc;
            pvVar4 = operator_new(uVar8 << 3);
          }
          puVar6 = (undefined8 *)((long)pvVar4 + lVar14 * 8);
          puVar13 = puVar6 + 1;
          *puVar6 = uVar17;
          if ((long)puVar15 - (long)puVar12 != 0) {
            uVar7 = ((long)puVar15 - (long)puVar12) - 8;
            puVar16 = puVar15;
            if ((0x37 < uVar7) &&
               (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar12) - (long)pvVar4))))
            {
              puVar10 = puVar6 + -2;
              puVar11 = puVar15 + -2;
              uVar7 = (uVar7 >> 3) + 1;
              uVar9 = uVar7 & 0x3ffffffffffffffc;
              puVar16 = puVar15 + -uVar9;
              uVar5 = uVar9;
              do {
                puVar15 = puVar11 + -1;
                uVar19 = puVar11[-2];
                uVar18 = puVar11[1];
                uVar17 = *puVar11;
                uVar5 = uVar5 - 4;
                puVar11 = puVar11 + -4;
                puVar10[-1] = *puVar15;
                puVar10[-2] = uVar19;
                puVar10[1] = uVar18;
                *puVar10 = uVar17;
                puVar10 = puVar10 + -4;
              } while (uVar5 != 0);
              puVar6 = puVar6 + -uVar9;
              puVar15 = puVar12;
              if (uVar7 == uVar9) goto LAB_004cf7a8;
            }
            do {
              puVar16 = puVar16 + -1;
              puVar6 = puVar6 + -1;
              *puVar6 = *puVar16;
            } while (puVar16 != puVar12);
            puVar15 = *(undefined8 **)(this + 0x468);
          }
LAB_004cf7a8:
          *(undefined8 **)(this + 0x468) = puVar6;
          *(undefined8 **)(this + 0x470) = puVar13;
          *(void **)(this + 0x478) = (void *)((long)pvVar4 + uVar8 * 8);
          if (puVar15 != (undefined8 *)0x0) {
            operator_delete(puVar15);
          }
        }
        *(undefined8 **)(this + 0x470) = puVar13;
      }
    }
  }
  return;
}


// ===== 004cf7d0  FUN_004cf7d0 =====

void FUN_004cf7d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004cf7e4  FUN_004cf7e4 =====

void FUN_004cf7e4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004cf7f8  rive::Text::drawColorGlyph =====

/* rive::Text::drawColorGlyph(rive::Renderer*, rive::TextDrawCommand::ColorGlyphInfo const&,
   rive::Mat2D const&) */

void __thiscall
rive::Text::drawColorGlyph(Text *this,Renderer *param_1,ColorGlyphInfo *param_2,Mat2D *param_3)

{
  Text *pTVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  Renderer *pRVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  code *pcVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  undefined2 uVar25;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulong local_b8;
  long *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  lVar7 = (**(code **)(**(long **)param_2 + 0x70))
                    (*(long **)param_2,*(undefined2 *)(param_2 + 8),&local_a8,
                     *(undefined4 *)(param_2 + 0x24));
  if (lVar7 != 0) {
    plVar21 = *(long **)(*(long *)(this + 0x40) + 0xbd8);
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
    fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar29 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar30 = (float)*(undefined8 *)param_3;
    fVar32 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
    fVar26 = (float)*(undefined8 *)(param_3 + 8);
    fVar28 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_2 + 0x1c);
    local_90._0_4_ = fVar26 * fVar29 + (float)*(undefined8 *)(param_2 + 0xc) * fVar30;
    local_90._4_4_ = fVar28 * fVar29 + (float)*(undefined8 *)(param_2 + 0xc) * fVar32;
    fStack_88 = fVar26 * (float)*(undefined8 *)(param_2 + 0x18) + fVar31 * fVar30;
    fStack_84 = fVar28 * (float)*(undefined8 *)(param_2 + 0x18) + fVar31 * fVar32;
    local_80 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
                        fVar28 * fVar34 + fVar32 * fVar33,
                        (float)*(undefined8 *)(param_3 + 0x10) + fVar26 * fVar34 + fVar30 * fVar33);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_90);
    uVar5 = uStack_a0;
    if (local_a8 != uStack_a0) {
      pTVar1 = this + 0x490;
      uVar22 = local_a8;
      do {
        if (*(char *)(uVar22 + 0x40) == '\x04') {
          uVar24 = *(ulong *)param_2;
          uVar2 = *(ushort *)(param_2 + 8);
          uVar10 = ((ulong)(uint)((int)uVar24 << 3) + 8 ^ uVar24 >> 0x20) * -0x622015f714c7d297;
          uVar10 = (uVar24 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
          uVar10 = uVar10 ^ uVar10 >> 0x2f;
          uVar15 = uVar10 * -0x622015f714c7d297;
          uVar11 = *(ulong *)(this + 0x488);
          uVar15 = (ulong)uVar2 + uVar10 * 0x77fa823ace0b5a40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar15;
          if (uVar11 != 0) {
            uVar27 = NEON_cnt(uVar11,1);
            uVar25 = NEON_uaddlv(uVar27,1);
            uVar10 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar25) & 0xffffffff;
            if (uVar10 < 2) {
              uVar20 = uVar15 & uVar11 - 1;
            }
            else {
              uVar20 = uVar15;
              if (uVar11 <= uVar15) {
                uVar20 = 0;
                if (uVar11 != 0) {
                  uVar20 = uVar15 / uVar11;
                }
                uVar20 = uVar15 - uVar20 * uVar11;
              }
            }
            puVar17 = *(undefined8 **)(*(long *)(this + 0x480) + uVar20 * 8);
            if ((puVar17 != (undefined8 *)0x0) &&
               (plVar23 = (long *)*puVar17, plVar23 != (long *)0x0)) {
              do {
                uVar19 = plVar23[1];
                if (uVar19 == uVar15) {
                  if ((plVar23[2] == uVar24) && (*(ushort *)(plVar23 + 3) == uVar2))
                  goto LAB_004cff10;
                }
                else {
                  if (uVar10 < 2) {
                    uVar19 = uVar19 & uVar11 - 1;
                  }
                  else if (uVar11 <= uVar19) {
                    uVar3 = 0;
                    if (uVar11 != 0) {
                      uVar3 = uVar19 / uVar11;
                    }
                    uVar19 = uVar19 - uVar3 * uVar11;
                  }
                  if (uVar19 != uVar20) break;
                }
                plVar23 = (long *)*plVar23;
              } while (plVar23 != (long *)0x0);
            }
          }
          (**(code **)(*plVar21 + 0x40))
                    (&local_90,plVar21,*(long *)(uVar22 + 0x88),
                     *(long *)(uVar22 + 0x90) - *(long *)(uVar22 + 0x88));
          uVar11 = *(ulong *)(this + 0x488);
          uVar10 = uVar5;
          if (uVar11 != 0) {
            uVar27 = NEON_cnt(uVar11,1);
            uVar25 = NEON_uaddlv(uVar27,1);
            uVar20 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar25) & 0xffffffff;
            if (uVar20 < 2) {
              uVar10 = uVar15 & uVar11 - 1;
            }
            else {
              uVar10 = uVar15;
              if (uVar11 <= uVar15) {
                uVar10 = 0;
                if (uVar11 != 0) {
                  uVar10 = uVar15 / uVar11;
                }
                uVar10 = uVar15 - uVar10 * uVar11;
              }
            }
            puVar17 = *(undefined8 **)(*(long *)(this + 0x480) + uVar10 * 8);
            if ((puVar17 != (undefined8 *)0x0) &&
               (plVar23 = (long *)*puVar17, plVar23 != (long *)0x0)) {
              do {
                uVar19 = plVar23[1];
                if (uVar19 == uVar15) {
                  if ((plVar23[2] == uVar24) && (*(ushort *)(plVar23 + 3) == uVar2))
                  goto LAB_004cfee0;
                }
                else {
                  if (uVar20 < 2) {
                    uVar19 = uVar19 & uVar11 - 1;
                  }
                  else if (uVar11 <= uVar19) {
                    uVar3 = 0;
                    if (uVar11 != 0) {
                      uVar3 = uVar19 / uVar11;
                    }
                    uVar19 = uVar19 - uVar3 * uVar11;
                  }
                  if (uVar19 != uVar10) break;
                }
                plVar23 = (long *)*plVar23;
              } while (plVar23 != (long *)0x0);
            }
          }
          plVar23 = (long *)operator_new(0x28);
          lVar12 = *(long *)(this + 0x498);
          fVar29 = *(float *)(this + 0x4a0);
          *plVar23 = 0;
          plVar23[1] = uVar15;
          plVar23[2] = uVar24;
          lVar7 = CONCAT44(local_90._4_4_,(float)local_90);
          *(ushort *)(plVar23 + 3) = uVar2;
          local_90._0_4_ = 0.0;
          local_90._4_4_ = 0.0;
          plVar23[4] = lVar7;
          if ((uVar11 == 0) || (fVar29 * (float)uVar11 < (float)(lVar12 + 1))) {
            if (uVar11 < 3) {
              uVar10 = 1;
            }
            else {
              uVar10 = (ulong)((uVar11 & uVar11 - 1) != 0);
            }
            uVar10 = uVar10 | uVar11 << 1;
            uVar24 = (ulong)((float)(lVar12 + 1) / fVar29);
            if (uVar10 <= uVar24) {
              uVar10 = uVar24;
            }
            if (uVar10 - 1 == 0) {
              uVar10 = 2;
            }
            else if ((uVar10 & uVar10 - 1) != 0) {
              uVar10 = std::__ndk1::__next_prime(uVar10);
              uVar11 = *(ulong *)(this + 0x488);
            }
            if (uVar11 < uVar10) {
LAB_004cfcb8:
              uVar11 = uVar10;
              if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              pvVar9 = operator_new(uVar11 << 3);
              pvVar13 = *(void **)(this + 0x480);
              *(void **)(this + 0x480) = pvVar9;
              if (pvVar13 != (void *)0x0) {
                operator_delete(pvVar13);
              }
              uVar10 = 0;
              *(ulong *)(this + 0x488) = uVar11;
              do {
                *(undefined8 *)(*(long *)(this + 0x480) + uVar10 * 8) = 0;
                uVar10 = uVar10 + 1;
              } while (uVar11 != uVar10);
              plVar16 = *(long **)pTVar1;
              if (plVar16 != (long *)0x0) {
                uVar10 = plVar16[1];
                uVar27 = NEON_cnt(uVar11,1);
                uVar25 = NEON_uaddlv(uVar27,1);
                uVar24 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar25) & 0xffffffff;
                if (uVar24 < 2) {
                  uVar10 = uVar10 & uVar11 - 1;
                }
                else if (uVar11 <= uVar10) {
                  uVar20 = 0;
                  if (uVar11 != 0) {
                    uVar20 = uVar10 / uVar11;
                  }
                  uVar10 = uVar10 - uVar20 * uVar11;
                }
                *(Text **)(*(long *)(this + 0x480) + uVar10 * 8) = pTVar1;
                plVar18 = (long *)*plVar16;
                if (plVar18 != (long *)0x0) {
                  do {
                    uVar20 = plVar18[1];
                    if (uVar24 < 2) {
                      uVar20 = uVar20 & uVar11 - 1;
                    }
                    else if (uVar11 <= uVar20) {
                      uVar19 = 0;
                      if (uVar11 != 0) {
                        uVar19 = uVar20 / uVar11;
                      }
                      uVar20 = uVar20 - uVar19 * uVar11;
                    }
                    if (uVar20 != uVar10) {
                      if (*(long *)(*(long *)(this + 0x480) + uVar20 * 8) == 0) {
                        *(long **)(*(long *)(this + 0x480) + uVar20 * 8) = plVar16;
                        uVar10 = uVar20;
                      }
                      else {
                        *plVar16 = *plVar18;
                        *plVar18 = **(long **)(*(long *)(this + 0x480) + uVar20 * 8);
                        **(undefined8 **)(*(long *)(this + 0x480) + uVar20 * 8) = plVar18;
                        plVar18 = plVar16;
                      }
                    }
                    plVar16 = plVar18;
                    plVar18 = (long *)*plVar16;
                  } while (plVar18 != (long *)0x0);
                }
              }
            }
            else if (uVar10 < uVar11) {
              uVar24 = (ulong)((float)*(ulong *)(this + 0x498) / *(float *)(this + 0x4a0));
              if (uVar11 < 3) {
LAB_004cffa8:
                uVar24 = std::__ndk1::__next_prime(uVar24);
              }
              else {
                uVar27 = NEON_cnt(uVar11,1);
                uVar25 = NEON_uaddlv(uVar27,1);
                if (1 < (uint)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar25)) goto LAB_004cffa8;
                if (1 < uVar24) {
                  uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
                }
              }
              if (uVar10 <= uVar24) {
                uVar10 = uVar24;
              }
              if (uVar10 < uVar11) {
                if (uVar10 != 0) goto LAB_004cfcb8;
                pvVar9 = *(void **)(this + 0x480);
                *(undefined8 *)(this + 0x480) = 0;
                if (pvVar9 != (void *)0x0) {
                  operator_delete(pvVar9);
                }
                uVar11 = 0;
                *(undefined8 *)(this + 0x488) = 0;
              }
              else {
                uVar11 = *(ulong *)(this + 0x488);
              }
            }
            if ((uVar11 & uVar11 - 1) == 0) {
              uVar10 = uVar11 - 1 & uVar15;
            }
            else {
              uVar10 = uVar15;
              if (uVar11 <= uVar15) {
                uVar10 = 0;
                if (uVar11 != 0) {
                  uVar10 = uVar15 / uVar11;
                }
                uVar10 = uVar15 - uVar10 * uVar11;
              }
            }
          }
          lVar7 = *(long *)(this + 0x480);
          plVar16 = *(long **)(lVar7 + uVar10 * 8);
          if (plVar16 == (long *)0x0) {
            lVar12 = *(long *)pTVar1;
            *(long **)pTVar1 = plVar23;
            *plVar23 = lVar12;
            *(Text **)(lVar7 + uVar10 * 8) = pTVar1;
            if (*plVar23 != 0) {
              uVar10 = *(ulong *)(*plVar23 + 8);
              if ((uVar11 & uVar11 - 1) == 0) {
                uVar10 = uVar10 & uVar11 - 1;
              }
              else if (uVar11 <= uVar10) {
                uVar15 = 0;
                if (uVar11 != 0) {
                  uVar15 = uVar10 / uVar11;
                }
                uVar10 = uVar10 - uVar15 * uVar11;
              }
              plVar16 = (long *)(*(long *)(this + 0x480) + uVar10 * 8);
              goto LAB_004cfed0;
            }
          }
          else {
            *plVar23 = *plVar16;
LAB_004cfed0:
            *plVar16 = (long)plVar23;
          }
          *(long *)(this + 0x498) = *(long *)(this + 0x498) + 1;
LAB_004cfee0:
          plVar16 = (long *)CONCAT44(local_90._4_4_,(float)local_90);
          if ((plVar16 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,plVar16 + 1), iVar6 == 1)
             ) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
LAB_004cff10:
          if (plVar23[4] != 0) {
            (**(code **)(*(long *)param_1 + 0x10))(param_1);
            local_90._4_4_ = 0.0;
            fStack_88 = 0.0;
            local_90._0_4_ = (float)NEON_ucvtf(*(undefined4 *)(uVar22 + 0xa0));
            fStack_84 = (float)NEON_ucvtf(*(undefined4 *)(uVar22 + 0xa4));
            local_90._0_4_ = *(float *)(uVar22 + 0xb0) / (float)local_90;
            local_80 = *(undefined8 *)(uVar22 + 0xa8);
            fStack_84 = *(float *)(uVar22 + 0xb4) / fStack_84;
            (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_90);
            local_b8 = local_b8 & 0xffffffffff000000;
            (**(code **)(*(long *)param_1 + 0x38))
                      (*(undefined4 *)(param_2 + 0x28),param_1,plVar23[4],local_b8,3);
            pcVar14 = *(code **)(*(long *)param_1 + 0x18);
            pRVar8 = param_1;
LAB_004cf90c:
            (*pcVar14)(pRVar8);
          }
        }
        else {
          (**(code **)(*plVar21 + 0x28))(&local_90,plVar21,uVar22,0);
          (**(code **)(*plVar21 + 0x38))(&local_b0,plVar21);
          (**(code **)(*local_b0 + 0x10))(local_b0,1);
          fVar29 = (float)NEON_fminnm(((float)(*(uint *)(uVar22 + 0x44) >> 0x18) / 255.0) *
                                      *(float *)(param_2 + 0x28),0x3f800000);
          if (fVar29 <= 0.0) {
            fVar29 = 0.0;
          }
          (**(code **)(*local_b0 + 0x18))
                    (local_b0,*(uint *)(uVar22 + 0x44) & 0xffffff |
                              (int)(long)(fVar29 * 255.0) << 0x18);
          (**(code **)(*(long *)param_1 + 0x28))
                    (param_1,CONCAT44(local_90._4_4_,(float)local_90),local_b0);
          plVar23 = local_b0;
          if ((local_b0 != (long *)0x0) &&
             (iVar6 = FUN_00340fe0(0xffffffff,local_b0 + 1), iVar6 == 1)) {
            (**(code **)(*plVar23 + 8))(plVar23);
          }
          pRVar8 = (Renderer *)CONCAT44(local_90._4_4_,(float)local_90);
          if ((pRVar8 != (Renderer *)0x0) &&
             (iVar6 = FUN_00340fe0(0xffffffff,pRVar8 + 8), iVar6 == 1)) {
            pcVar14 = *(code **)(*(long *)pRVar8 + 8);
            goto LAB_004cf90c;
          }
        }
        uVar22 = uVar22 + 0xb8;
      } while (uVar22 != uVar5);
    }
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  local_90 = &local_a8;
  FUN_004c57d0(&local_90);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d0044  rive::Text::buildRenderStyles =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Text::buildRenderStyles() */

void rive::Text::buildRenderStyles(void)

{
  GlyphLine *pGVar1;
  AABB *pAVar2;
  AABB *pAVar3;
  uint uVar4;
  Text TVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  Text *in_x0;
  void *__s;
  long *plVar19;
  void *pvVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  undefined1 (*pauVar31) [12];
  undefined1 (*pauVar32) [16];
  uint uVar33;
  long *plVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  undefined8 *puVar38;
  long *plVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  long lVar42;
  ulong uVar43;
  undefined8 *puVar44;
  long *plVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  long lVar48;
  GlyphLine *pGVar49;
  TextModifierGroup *this;
  TextValueRun *this_00;
  TextStylePaint *this_01;
  long *plVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  float fVar53;
  undefined1 uVar54;
  undefined1 extraout_b0;
  undefined1 uVar55;
  undefined1 extraout_var;
  byte bVar56;
  undefined1 uVar57;
  undefined1 extraout_var_00;
  byte bVar58;
  undefined1 uVar59;
  undefined1 extraout_var_01;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  float fVar65;
  undefined8 *in_d1;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined1 in_q2 [16];
  undefined1 auVar70 [16];
  float in_s3;
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  long local_290;
  float local_264;
  int local_194;
  float local_174;
  float local_170;
  float local_16c;
  int local_168;
  char local_164;
  undefined2 local_160;
  undefined2 uStack_15e;
  uint uStack_15c;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint uStack_138;
  undefined8 local_134;
  undefined4 uStack_12c;
  undefined4 local_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined4 local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined2 local_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  long local_b8;
  
  lVar7 = tpidr_el0;
  local_b8 = *(long *)(lVar7 + 0x28);
  puVar44 = *(undefined8 **)(in_x0 + 0x218);
  puVar41 = *(undefined8 **)(in_x0 + 0x220);
  if (puVar44 != puVar41) {
    do {
      puVar52 = puVar44 + 1;
      TextStylePaint::rewindPath((TextStylePaint *)*puVar44);
      puVar44 = puVar52;
    } while (puVar52 != puVar41);
    puVar44 = *(undefined8 **)(in_x0 + 0x218);
  }
  lVar48 = *(long *)(in_x0 + 0x238);
  lVar42 = *(long *)(in_x0 + 0x230);
  *(undefined8 **)(in_x0 + 0x220) = puVar44;
  for (; lVar48 != lVar42; lVar48 = lVar48 + -0x40) {
    plVar22 = *(long **)(lVar48 + -0x30);
    if ((plVar22 != (long *)0x0) && (iVar17 = FUN_00340fe0(0xffffffff,plVar22 + 1), iVar17 == 1)) {
      (**(code **)(*plVar22 + 8))(plVar22);
    }
  }
  plVar22 = *(long **)(in_x0 + 0x200);
  plVar27 = *(long **)(in_x0 + 0x208);
  *(long *)(in_x0 + 0x238) = lVar42;
  uVar10 = _UNK_0024e258;
  uVar8 = _DAT_0024e250;
  for (; plVar22 != plVar27; plVar22 = plVar22 + 1) {
    lVar48 = *plVar22;
    *(undefined8 *)(lVar48 + 0xb8) = uVar10;
    *(undefined8 *)(lVar48 + 0xb0) = uVar8;
    *(undefined8 *)(lVar48 + 0xd0) = *(undefined8 *)(lVar48 + 200);
  }
  if (*(long *)(in_x0 + 0x250) == 0) {
    if (*(long *)(lVar7 + 0x28) == local_b8) {
      *(undefined8 *)(in_x0 + 0x3c8) = 0;
      *(undefined8 *)(in_x0 + 0x3d0) = 0;
      return;
    }
    goto LAB_004d13fc;
  }
  computeBoundsInfo();
  fVar68 = in_q2._0_4_;
  fVar77 = SUB84(in_d1,0);
  plVar22 = *(long **)(in_x0 + 0x3d8);
  plVar27 = *(long **)(in_x0 + 0x3e0);
  if (plVar22 != plVar27) {
    uVar43 = (ulong)(*(long *)(in_x0 + 0x3f8) - *(long *)(in_x0 + 0x3f0)) >> 2 & 0xffffffff;
    plVar45 = plVar22;
    do {
      lVar48 = *plVar45;
      if ((*(ushort *)(lVar48 + 0x60) >> 5 & 1) != 0) {
        __s = *(void **)(lVar48 + 0x128);
        pvVar20 = *(void **)(lVar48 + 0x130);
        *(undefined2 *)(lVar48 + 0x60) = 0;
        uVar28 = (long)pvVar20 - (long)__s >> 2;
        if (uVar43 < uVar28 || uVar43 - uVar28 == 0) {
          if (uVar43 < uVar28) {
            pvVar20 = (void *)((long)__s + uVar43 * 4);
            *(void **)(lVar48 + 0x130) = pvVar20;
          }
        }
        else {
          FUN_00380d20(lVar48 + 0x128,uVar43 - uVar28);
          __s = *(void **)(lVar48 + 0x128);
          pvVar20 = *(void **)(lVar48 + 0x130);
        }
        if (0 < (long)pvVar20 - (long)__s) {
          memset(__s,0,(long)pvVar20 - (long)__s);
        }
        puVar41 = *(undefined8 **)(lVar48 + 0xd0);
        for (puVar44 = *(undefined8 **)(lVar48 + 200); puVar44 != puVar41; puVar44 = puVar44 + 1) {
          TextModifierRange::computeCoverage
                    ((TextModifierRange *)*puVar44,*(long *)(lVar48 + 0x128),
                     *(long *)(lVar48 + 0x130) - *(long *)(lVar48 + 0x128) >> 2);
        }
      }
      plVar19 = *(long **)(lVar48 + 0x30);
      if (((plVar19 != (long *)0x0) &&
          (uVar28 = (**(code **)(*plVar19 + 0x18))(plVar19,0x86), (uVar28 & 1) != 0)) &&
         (lVar42 = *(long *)(lVar48 + 0x30), lVar42 != 0)) {
        fVar67 = *(float *)(lVar42 + 0xa4);
        in_q2 = ZEXT416((uint)fVar67);
        fVar65 = *(float *)(lVar42 + 0xb0);
        in_d1 = (undefined8 *)(ulong)(uint)fVar65;
        fVar77 = (float)*(undefined8 *)(lVar42 + 0xa8);
        in_s3 = -fVar77;
        fVar68 = (float)((ulong)*(undefined8 *)(lVar42 + 0xa8) >> 0x20);
        fVar71 = (float)NEON_fmadd(fVar67,fVar65,in_s3 * fVar68);
        if (fVar71 != 0.0) {
          fVar71 = 1.0 / fVar71;
          puVar44 = *(undefined8 **)(lVar48 + 0x110);
          puVar41 = *(undefined8 **)(lVar48 + 0x118);
          fVar78 = (float)*(undefined8 *)(lVar42 + 0xb4);
          fVar76 = (float)((ulong)*(undefined8 *)(lVar42 + 0xb4) >> 0x20);
          uVar8 = NEON_rev64(CONCAT44(fVar76 * -fVar67,fVar78 * -fVar65),4);
          in_d1 = (undefined8 *)CONCAT44(in_s3 * fVar71,fVar65 * fVar71);
          uStack_f8 = (undefined8 *)CONCAT44(fVar67 * fVar71,-fVar68 * fVar71);
          in_s3 = (float)uVar8 + fVar78 * fVar77;
          fVar77 = fVar71 * ((float)((ulong)uVar8 >> 0x20) + fVar76 * fVar68);
          local_f0 = (long *)NEON_rev64(CONCAT17((char)((uint)fVar77 >> 0x18),
                                                 CONCAT16((char)((uint)fVar77 >> 0x10),
                                                          CONCAT15((char)((uint)fVar77 >> 8),
                                                                   CONCAT14(SUB41(fVar77,0),
                                                                            fVar71 * in_s3)))),4);
          local_100 = in_d1;
          for (; puVar44 != puVar41; puVar44 = puVar44 + 1) {
            TextFollowPathModifier::reset((TextFollowPathModifier *)*puVar44,(Mat2D *)&local_100);
          }
        }
      }
      fVar68 = in_q2._0_4_;
      fVar77 = SUB84(in_d1,0);
      plVar45 = plVar45 + 1;
    } while (plVar45 != plVar27);
  }
  if ((((in_x0[0x4c9] == (Text)0x2) || (in_x0[0x4c8] == (Text)0xff)) || (in_x0[0x4c8] == (Text)0x2))
     && (TVar5 = in_x0[0x178], TVar5 != (Text)0x2)) {
    if (TVar5 == (Text)0x1) {
      fVar77 = *(float *)(in_x0 + 0x4c0);
      fVar68 = local_16c - *(float *)(in_x0 + 400);
      uVar69 = *(undefined4 *)(in_x0 + 0x180);
      uVar54 = (undefined1)uVar69;
      uVar55 = (undefined1)((uint)uVar69 >> 8);
      uVar57 = (undefined1)((uint)uVar69 >> 0x10);
      uVar59 = (undefined1)((uint)uVar69 >> 0x18);
      if (!NAN(fVar77)) {
        uVar54 = SUB41(fVar77,0);
        uVar55 = (undefined1)((uint)fVar77 >> 8);
        uVar57 = (undefined1)((uint)fVar77 >> 0x10);
        uVar59 = (undefined1)((uint)fVar77 >> 0x18);
      }
      fVar77 = fVar68;
      if (fVar68 <= local_174) {
        fVar77 = local_174;
      }
      goto LAB_004d0384;
    }
    if (TVar5 == (Text)0x0) {
      fVar77 = local_16c - *(float *)(in_x0 + 400);
      if (fVar77 <= local_174) {
        fVar77 = local_174;
      }
      uVar54 = SUB41(local_170,0);
      uVar55 = (undefined1)((uint)local_170 >> 8);
      uVar57 = (undefined1)((uint)local_170 >> 0x10);
      uVar59 = (undefined1)((uint)local_170 >> 0x18);
      goto LAB_004d0384;
    }
  }
  else {
    fVar77 = *(float *)(in_x0 + 0x4c0);
    uVar69 = *(undefined4 *)(in_x0 + 0x180);
    fVar68 = *(float *)(in_x0 + 0x4c4);
    uVar54 = (undefined1)uVar69;
    uVar55 = (undefined1)((uint)uVar69 >> 8);
    uVar57 = (undefined1)((uint)uVar69 >> 0x10);
    uVar59 = (undefined1)((uint)uVar69 >> 0x18);
    if (!NAN(fVar77)) {
      uVar54 = SUB41(fVar77,0);
      uVar55 = (undefined1)((uint)fVar77 >> 8);
      uVar57 = (undefined1)((uint)fVar77 >> 0x10);
      uVar59 = (undefined1)((uint)fVar77 >> 0x18);
    }
    fVar77 = *(float *)(in_x0 + 0x184);
    if (!NAN(fVar68)) {
      fVar77 = fVar68;
    }
    fVar77 = local_174 + fVar77;
LAB_004d0384:
    *(undefined4 *)(in_x0 + 0x3c8) = 0;
    *(float *)(in_x0 + 0x3cc) = local_174;
    *(uint *)(in_x0 + 0x3d0) = CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar54)));
    *(float *)(in_x0 + 0x3d4) = fVar77;
  }
  if (in_x0[0x19c] == (Text)0x1) {
    fVar77 = *(float *)(in_x0 + 0x3cc);
    fVar65 = local_16c - (*(float *)(in_x0 + 0x3d4) - fVar77);
  }
  else {
    fVar65 = 0.0;
    if (in_x0[0x19c] == (Text)0x2) {
      fVar77 = 0.5;
      fVar65 = (local_16c - (*(float *)(in_x0 + 0x3d4) - *(float *)(in_x0 + 0x3cc))) * 0.5;
    }
  }
  if (in_x0[0x17c] == (Text)0x2) {
    in_x0[0x368] = (Text)0x0;
    *(undefined8 *)(in_x0 + 0x338) = *(undefined8 *)(in_x0 + 0x330);
    *(undefined8 *)(in_x0 + 0x350) = *(undefined8 *)(in_x0 + 0x348);
    (**(code **)(*(long *)in_x0 + 0xf0))();
    fVar68 = fVar68 - (float)CONCAT13(extraout_var_01,
                                      CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    fVar71 = (float)NEON_fmadd(in_s3 - fVar77,*(undefined4 *)(in_x0 + 0x18c),fVar77);
    fVar67 = (float)NEON_fmadd(fVar68,*(undefined4 *)(in_x0 + 0x188),
                               CONCAT13(extraout_var_01,
                                        CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))
                                       ));
    local_100 = (undefined8 *)CONCAT44(fVar65 + fVar71,fVar67);
    uStack_f8 = (undefined8 *)CONCAT44((in_s3 - fVar77) + fVar65 + fVar71,fVar68 + fVar67);
    RawPath::addRect((RawPath *)(in_x0 + 0x330),&local_100,0);
  }
  uVar15 = DAT_0024e780;
  uVar14 = DAT_0024e668;
  uVar13 = DAT_0024e658;
  uVar12 = _UNK_0024e3c8;
  uVar11 = _DAT_0024e3c0;
  uVar10 = _UNK_0024e318;
  uVar8 = _DAT_0024e310;
  if (*(long *)(in_x0 + 0x270) == 0) {
    local_264 = 3.4028235e+38;
  }
  else {
    plVar45 = *(long **)(in_x0 + 0x268);
    local_264 = 3.4028235e+38;
    iVar17 = 0;
    plVar19 = plVar45 + *(long *)(in_x0 + 0x270) * 2;
    local_290 = 0;
    do {
      if (plVar45[1] != 0) {
        lVar48 = *(long *)(in_x0 + 0x248);
        pGVar49 = (GlyphLine *)*plVar45;
        local_194 = 0;
        pGVar1 = pGVar49 + plVar45[1] * 0x20;
        do {
          cVar16 = shouldDrawLine(in_x0,local_174,local_16c,pGVar49);
          if (cVar16 != '\x01') {
            if (cVar16 == '\x02') goto LAB_004d10ac;
            fVar77 = *(float *)(in_x0 + 0x4c0);
            uVar69 = *(undefined4 *)(in_x0 + 0x180);
            fVar68 = local_174 + *(float *)(pGVar49 + 0x18);
            uVar54 = (undefined1)uVar69;
            uVar55 = (undefined1)((uint)uVar69 >> 8);
            uVar57 = (undefined1)((uint)uVar69 >> 0x10);
            uVar59 = (undefined1)((uint)uVar69 >> 0x18);
            if (!NAN(fVar77)) {
              uVar54 = SUB41(fVar77,0);
              uVar55 = (undefined1)((uint)fVar77 >> 8);
              uVar57 = (undefined1)((uint)fVar77 >> 0x10);
              uVar59 = (undefined1)((uint)fVar77 >> 0x18);
            }
            OrderedLine::OrderedLine
                      ((OrderedLine *)&local_100,(Paragraph *)(lVar48 + local_290 * 0x18),pGVar49,
                       (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar54))),
                       local_168 == iVar17,local_164 != '\0',(GlyphRun *)(in_x0 + 0x2a0),fVar68);
            puVar44 = *(undefined8 **)(in_x0 + 0x290);
            if (puVar44 < *(undefined8 **)(in_x0 + 0x298)) {
              puVar41 = puVar44 + 8;
              puVar44[4] = 0;
              puVar44[5] = 0;
              puVar44[1] = uStack_f8;
              *puVar44 = local_100;
              puVar44[2] = local_f0;
              puVar44[3] = 0;
              puVar44[4] = CONCAT44(iStack_dc,uStack_e0);
              puVar44[3] = CONCAT44(iStack_e4,local_e8);
              local_e8 = 0.0;
              iStack_e4 = 0;
              uStack_e0 = 0.0;
              iStack_dc = 0;
              puVar44[5] = CONCAT44(uStack_d4,CONCAT22(uStack_d6,local_d8));
              local_d8 = 0;
              uStack_d6 = 0;
              uStack_d4 = 0;
              puVar44[6] = CONCAT44(uStack_cc,uStack_d0);
              *(float *)(puVar44 + 7) = local_c8;
              *(undefined8 **)(in_x0 + 0x290) = puVar41;
            }
            else {
              puVar41 = (undefined8 *)FUN_004cb690(in_x0 + 0x288,&local_100);
              *(undefined8 **)(in_x0 + 0x290) = puVar41;
              if ((void *)CONCAT44(iStack_e4,local_e8) != (void *)0x0) {
                iStack_dc = iStack_e4;
                uStack_e0 = local_e8;
                operator_delete((void *)CONCAT44(iStack_e4,local_e8));
                puVar41 = *(undefined8 **)(in_x0 + 0x290);
              }
            }
            plVar29 = (long *)puVar41[-5];
            fVar77 = *(float *)(pGVar49 + 0x10);
            puVar44 = (undefined8 *)*plVar29;
            bVar56 = *(byte *)((long)puVar44 + 0x7a);
            uVar54 = SUB41(local_264,0);
            uVar55 = (undefined1)((uint)local_264 >> 8);
            uVar57 = (undefined1)((uint)local_264 >> 0x10);
            uVar59 = (undefined1)((uint)local_264 >> 0x18);
            if (fVar77 <= local_264) {
              uVar54 = SUB41(fVar77,0);
              uVar55 = (undefined1)((uint)fVar77 >> 8);
              uVar57 = (undefined1)((uint)fVar77 >> 0x10);
              uVar59 = (undefined1)((uint)fVar77 >> 0x18);
            }
            local_264 = (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar54)));
            if ((bVar56 & 1) == 0) {
              uVar21 = *(uint *)(puVar41 + -6);
              if ((undefined8 *)puVar41[-8] != puVar44) {
                uVar21 = 0;
              }
            }
            else {
              if ((undefined8 *)puVar41[-7] == puVar44) {
                iVar18 = *(int *)((long)puVar41 + -0x2c);
              }
              else {
                iVar18 = *(int *)(puVar44 + 4);
              }
              uVar21 = iVar18 - 1;
            }
            plVar34 = (long *)puVar41[-4];
            plVar39 = plVar29;
            while( true ) {
              if ((bVar56 & 1) == 0) {
                if ((undefined8 *)puVar41[-7] == puVar44) {
                  uVar25 = *(uint *)((long)puVar41 + -0x2c);
                }
                else {
                  uVar25 = *(uint *)(puVar44 + 4);
                }
              }
              else {
                uVar25 = *(int *)(puVar41 + -6) - 1;
                if ((undefined8 *)puVar41[-8] != puVar44) {
                  uVar25 = 0xffffffff;
                }
              }
              if ((uVar21 != uVar25) || (puVar44 == (undefined8 *)plVar34[-1])) break;
              plVar39 = plVar39 + 1;
              puVar44 = (undefined8 *)*plVar39;
              bVar56 = *(byte *)((long)puVar44 + 0x7a);
              if ((bVar56 & 1) == 0) {
                uVar21 = *(uint *)(puVar41 + -6);
                if ((undefined8 *)puVar41[-8] != puVar44) {
                  uVar21 = 0;
                }
              }
              else if ((undefined8 *)puVar41[-7] == puVar44) {
                uVar21 = *(int *)((long)puVar41 + -0x2c) - 1;
              }
              else {
                uVar21 = *(int *)(puVar44 + 4) - 1;
              }
            }
            lVar42 = 0;
            if (plVar34 != plVar29) {
              lVar42 = ((ulong)((long)plVar34 - (long)plVar29) >> 3) - 1;
            }
            lVar30 = plVar29[lVar42];
            if ((*(byte *)(lVar30 + 0x7a) & 1) == 0) {
              if (puVar41[-7] == lVar30) {
                uVar25 = *(uint *)((long)puVar41 + -0x2c);
              }
              else {
                uVar25 = *(uint *)(lVar30 + 0x20);
              }
            }
            else {
              uVar25 = *(int *)(puVar41 + -6) - 1;
              if (puVar41[-8] != lVar30) {
                uVar25 = 0xffffffff;
              }
            }
            while ((plVar39 != plVar29 + lVar42 || (uVar21 != uVar25))) {
              local_120 = *(float *)(puVar44 + 1);
              fVar78 = *(float *)(puVar44[7] + (ulong)uVar21 * 4);
              fStack_11c = (float)uVar15 * local_120;
              fStack_118 = (float)((ulong)uVar15 >> 0x20) * local_120;
              plVar34 = (long *)*puVar44;
              lVar30 = puVar44[0xb];
              fVar67 = -(fVar78 * 0.5);
              uVar6 = *(undefined2 *)(puVar44[3] + (ulong)uVar21 * 2);
              fVar71 = fVar78 * 0.5;
              uVar54 = SUB41(fVar67,0);
              uVar55 = (undefined1)((uint)fVar67 >> 8);
              uVar57 = (undefined1)((uint)fVar67 >> 0x10);
              uVar59 = (undefined1)((uint)fVar67 >> 0x18);
              fVar65 = 0.0;
              local_110 = (ulong)(uint)fVar67;
              fVar67 = 1.0;
              fStack_114 = local_120;
              if (plVar22 != plVar27) {
                lVar35 = *(long *)(in_x0 + 0x450);
                uVar4 = *(uint *)(puVar44[5] + (ulong)uVar21 * 4);
                uVar33 = uVar4 + 1;
                uVar37 = (uint)((ulong)(*(long *)(in_x0 + 0x458) - lVar35) >> 2);
                if (uVar33 < uVar37) {
                  lVar23 = 0;
                  uVar37 = uVar37 - uVar4;
                  do {
                    if (*(int *)(lVar35 + (ulong)uVar33 * 4 + lVar23 * 4) !=
                        *(int *)(lVar35 + (ulong)uVar4 * 4)) {
                      uVar37 = (int)lVar23 + 1;
                      break;
                    }
                    lVar23 = lVar23 + 1;
                  } while (((ulong)(*(long *)(in_x0 + 0x458) - lVar35) >> 2 & 0xffffffff) -
                           (ulong)uVar33 != lVar23);
                }
                else {
                  uVar37 = 1;
                }
                puVar52 = *(undefined8 **)(in_x0 + 0x3d8);
                puVar46 = *(undefined8 **)(in_x0 + 0x3e0);
                fVar67 = 1.0;
                if (puVar52 != puVar46) {
                  uVar43 = (ulong)uVar37 - 1;
                  fVar67 = 1.0;
                  uVar28 = uVar43 & 0xfffffffffffffff8;
                  do {
                    this = (TextModifierGroup *)*puVar52;
                    lVar35 = *(long *)(this + 0x128);
                    uVar69 = *(undefined4 *)(lVar35 + (ulong)uVar4 * 4);
                    uVar54 = (undefined1)uVar69;
                    uVar55 = (undefined1)((uint)uVar69 >> 8);
                    uVar57 = (undefined1)((uint)uVar69 >> 0x10);
                    uVar59 = (undefined1)((uint)uVar69 >> 0x18);
                    if (1 < uVar37) {
                      uVar24 = uVar28;
                      uVar26 = uVar33;
                      if (uVar37 < 0xd || -uVar4 - 2 < uVar37 - 2) {
                        uVar24 = 1;
                      }
                      else {
                        do {
                          puVar47 = (undefined8 *)(lVar35 + (ulong)uVar26 * 4);
                          uVar24 = uVar24 - 8;
                          fVar65 = (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar54)))
                                   + (float)*puVar47 + (float)((ulong)*puVar47 >> 0x20) +
                                   (float)puVar47[1] + (float)((ulong)puVar47[1] >> 0x20) +
                                   *(float *)(puVar47 + 2) + *(float *)((long)puVar47 + 0x14) +
                                   *(float *)(puVar47 + 3) + *(float *)((long)puVar47 + 0x1c);
                          uVar54 = SUB41(fVar65,0);
                          uVar55 = (undefined1)((uint)fVar65 >> 8);
                          uVar57 = (undefined1)((uint)fVar65 >> 0x10);
                          uVar59 = (undefined1)((uint)fVar65 >> 0x18);
                          uVar26 = uVar26 + 8;
                        } while (uVar24 != 0);
                        uVar24 = uVar28 | 1;
                        if (uVar43 == uVar28) goto LAB_004d09bc;
                      }
                      lVar23 = uVar37 - uVar24;
                      uVar26 = uVar4 + (int)uVar24;
                      do {
                        uVar24 = (ulong)uVar26;
                        lVar23 = lVar23 + -1;
                        uVar26 = uVar26 + 1;
                        fVar65 = (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar54))) +
                                 *(float *)(lVar35 + uVar24 * 4);
                        uVar54 = SUB41(fVar65,0);
                        uVar55 = (undefined1)((uint)fVar65 >> 8);
                        uVar57 = (undefined1)((uint)fVar65 >> 0x10);
                        uVar59 = (undefined1)((uint)fVar65 >> 0x18);
                      } while (lVar23 != 0);
                    }
LAB_004d09bc:
                    fVar65 = (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar54))) /
                             (float)uVar37;
                    local_100 = (undefined8 *)CONCAT44(fVar68,fVar77);
                    uStack_f8 = (undefined8 *)CONCAT44(fVar68,fVar77 + fVar71);
                    iStack_e4 = local_194;
                    uStack_e0._0_2_ = SUB82(plVar45,0);
                    uStack_e0._2_2_ = (undefined2)((ulong)plVar45 >> 0x10);
                    iStack_dc = (int)((ulong)plVar45 >> 0x20);
                    local_f0 = (long *)0x0;
                    local_e8 = fVar71;
                    TextModifierGroup::transform
                              (this,fVar65,(Mat2D *)&local_120,(TransformGlyphArg *)&local_100);
                    if ((*(uint *)(this + 0xa0) >> 5 & 1) != 0) {
                      if ((*(uint *)(this + 0xa0) >> 6 & 1) == 0) {
                        fVar67 = *(float *)(this + 0xac) * fVar67 * fVar65;
                      }
                      else {
                        fVar67 = (float)NEON_fmadd(fVar67,1.0 - fVar65,
                                                   *(float *)(this + 0xac) * fVar65);
                      }
                    }
                    puVar52 = puVar52 + 1;
                  } while (puVar52 != puVar46);
                  uVar54 = (undefined1)local_110;
                  uVar55 = (undefined1)(local_110 >> 8);
                  uVar57 = (undefined1)(local_110 >> 0x10);
                  uVar59 = (undefined1)(local_110 >> 0x18);
                  fVar65 = (float)(local_110 >> 0x20);
                }
              }
              this_00 = *(TextValueRun **)
                         (*(long *)(in_x0 + 0x200) + (ulong)*(ushort *)(puVar44 + 0xf) * 8);
              uVar72 = *(undefined8 *)(lVar30 + (ulong)uVar21 * 8);
              this_01 = *(TextStylePaint **)(this_00 + 0xe0);
              fVar76 = (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar54)));
              fVar53 = (float)((ulong)uVar12 >> 0x20) * fStack_118;
              fVar75 = fStack_11c * (float)uVar8 + (float)uVar11 * local_120;
              fStack_11c = fStack_11c * (float)((ulong)uVar8 >> 0x20) +
                           (float)((ulong)uVar11 >> 0x20) * local_120;
              fStack_118 = fStack_114 * (float)uVar10 + (float)uVar12 * fStack_118;
              fVar53 = fStack_114 * (float)((ulong)uVar10 >> 0x20) + fVar53;
              fVar71 = fVar77 + fVar71 + (float)uVar72 +
                       (float)uVar13 * fVar65 + (float)uVar14 * fVar76;
              fVar65 = fVar68 + (float)((ulong)uVar72 >> 0x20) +
                       (float)((ulong)uVar13 >> 0x20) * fVar65 +
                       (float)((ulong)uVar14 >> 0x20) * fVar76;
              uVar54 = (undefined1)((uint)fVar65 >> 8);
              uVar55 = (undefined1)((uint)fVar65 >> 0x10);
              uVar57 = (undefined1)((uint)fVar65 >> 0x18);
              local_110 = CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(SUB41(fVar65,0),
                                                                                   fVar71))));
              local_120 = fVar75;
              fStack_114 = fVar53;
              uVar43 = (**(code **)(*plVar34 + 0x68))(plVar34,uVar6);
              if ((uVar43 & 1) == 0) {
                (**(code **)(*plVar34 + 0x58))(&local_100,plVar34,uVar6);
                auVar70._4_4_ = fStack_118;
                auVar70._0_4_ = fStack_11c;
                uVar28 = (long)uStack_f8 - (long)local_100 >> 3;
                auVar70._8_4_ = fStack_11c;
                auVar70._12_4_ = fStack_118;
                auVar70 = NEON_rev64(auVar70,4);
                uVar72 = NEON_fcmeq(auVar70._0_8_,0,4);
                bVar56 = ~(byte)((ulong)uVar72 >> 8);
                bVar58 = ~(byte)((ulong)uVar72 >> 0x10);
                bVar60 = ~(byte)((ulong)uVar72 >> 0x18);
                bVar61 = ~(byte)((ulong)uVar72 >> 0x20);
                bVar62 = ~(byte)((ulong)uVar72 >> 0x28);
                bVar63 = ~(byte)((ulong)uVar72 >> 0x30);
                bVar64 = ~(byte)((ulong)uVar72 >> 0x38);
                uVar43 = NEON_umaxp(CONCAT17(bVar64,CONCAT16(bVar63,CONCAT15(bVar62,CONCAT14(bVar61,
                                                  CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(bVar56,~(
                                                  byte)uVar72))))))),
                                    CONCAT17(bVar64,CONCAT16(bVar63,CONCAT15(bVar62,CONCAT14(bVar61,
                                                  CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(bVar56,~(
                                                  byte)uVar72))))))),4);
                uVar33 = (uint)((long)uStack_f8 - (long)local_100);
                fVar65 = (float)(CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(SUB41(
                                                  fVar65,0),fVar71)))) >> 0x20);
                if ((uVar43 & 1) == 0) {
                  if ((uVar33 >> 3 & 1) == 0) {
                    uVar43 = 0;
                    if (uVar28 != 0) {
LAB_004d0d00:
                      pauVar32 = (undefined1 (*) [16])(local_100 + uVar43);
                      do {
                        auVar70 = *pauVar32;
                        uVar43 = uVar43 + 2;
                        *(ulong *)((long)*pauVar32 + 8) =
                             CONCAT44(fVar65 + auVar70._12_4_ * fVar53,
                                      fVar71 + auVar70._8_4_ * fVar75);
                        *(ulong *)*pauVar32 =
                             CONCAT44(fVar65 + auVar70._4_4_ * fVar53,
                                      fVar71 + auVar70._0_4_ * fVar75);
                        pauVar32 = pauVar32 + 1;
                      } while (uVar43 < uVar28);
                    }
                  }
                  else {
                    uVar43 = 1;
                    *local_100 = CONCAT44(fVar65 + (float)((ulong)*local_100 >> 0x20) * fVar53,
                                          fVar71 + (float)*local_100 * fVar75);
                    if (1 < uVar28) goto LAB_004d0d00;
                  }
                }
                else if ((uVar33 >> 3 & 1) == 0) {
                  uVar43 = 0;
                  if (uVar28 != 0) {
LAB_004d0cbc:
                    pauVar31 = (undefined1 (*) [12])(local_100 + uVar43);
                    do {
                      fVar76 = (float)((ulong)*(undefined8 *)((long)*pauVar31 + 8) >> 0x20);
                      uVar72 = *(undefined8 *)*pauVar31;
                      uVar43 = uVar43 + 2;
                      auVar74._12_4_ = fVar76;
                      auVar74._0_12_ = *pauVar31;
                      auVar74 = NEON_rev64(auVar74,4);
                      *(ulong *)((long)*pauVar31 + 8) =
                           CONCAT44(fVar65 + auVar74._12_4_ * auVar70._12_4_ + fVar76 * fVar53,
                                    fVar71 + auVar74._8_4_ * auVar70._8_4_ +
                                    (float)*(undefined8 *)((long)*pauVar31 + 8) * fVar75);
                      *(ulong *)*pauVar31 =
                           CONCAT44(fVar65 + auVar74._4_4_ * auVar70._4_4_ +
                                    (float)((ulong)uVar72 >> 0x20) * fVar53,
                                    fVar71 + auVar74._0_4_ * auVar70._0_4_ + (float)uVar72 * fVar75)
                      ;
                      pauVar31 = (undefined1 (*) [12])(pauVar31[1] + 4);
                    } while (uVar43 < uVar28);
                  }
                }
                else {
                  uVar72 = *local_100;
                  uVar43 = 1;
                  uVar73 = NEON_rev64(uVar72,4);
                  *local_100 = CONCAT44(fVar65 + (float)((ulong)uVar73 >> 0x20) * auVar70._4_4_ +
                                        (float)((ulong)uVar72 >> 0x20) * fVar53,
                                        fVar71 + (float)uVar73 * auVar70._0_4_ +
                                        (float)uVar72 * fVar75);
                  if (1 < uVar28) goto LAB_004d0cbc;
                }
                uVar43 = TextStylePaint::addPath(this_01,(RawPath *)&local_100,fVar67);
                if ((uVar43 & 1) != 0) {
                  puVar44 = *(undefined8 **)(in_x0 + 0x220);
                  if (puVar44 < *(undefined8 **)(in_x0 + 0x228)) {
                    puVar47 = puVar44 + 1;
                    *puVar44 = this_01;
                  }
                  else {
                    puVar52 = *(undefined8 **)(in_x0 + 0x218);
                    lVar30 = (long)puVar44 - (long)puVar52 >> 3;
                    uVar43 = lVar30 + 1;
                    if (uVar43 >> 0x3d != 0) {
                      FUN_004cbb98();
LAB_004d13f8:
                    /* WARNING: Subroutine does not return */
                      FUN_00324008();
                    }
                    uVar24 = (long)*(undefined8 **)(in_x0 + 0x228) - (long)puVar52;
                    uVar28 = (long)uVar24 >> 2;
                    if (uVar28 <= uVar43) {
                      uVar28 = uVar43;
                    }
                    if (0x7ffffffffffffff7 < uVar24) {
                      uVar28 = 0x1fffffffffffffff;
                    }
                    if (uVar28 == 0) {
                      pvVar20 = (void *)0x0;
                    }
                    else {
                      if (uVar28 >> 0x3d != 0) goto LAB_004d13f8;
                      pvVar20 = operator_new(uVar28 << 3);
                    }
                    puVar46 = (undefined8 *)((long)pvVar20 + lVar30 * 8);
                    puVar47 = puVar46 + 1;
                    *puVar46 = this_01;
                    if ((long)puVar44 - (long)puVar52 != 0) {
                      uVar43 = ((long)puVar44 - (long)puVar52) - 8;
                      puVar51 = puVar44;
                      if ((0x37 < uVar43) &&
                         (0x1f < (ulong)((long)puVar44 +
                                        (-((long)puVar44 - (long)puVar52) - (long)pvVar20)))) {
                        puVar38 = puVar46 + -2;
                        puVar40 = puVar44 + -2;
                        uVar43 = (uVar43 >> 3) + 1;
                        uVar36 = uVar43 & 0x3ffffffffffffffc;
                        puVar51 = puVar44 + -uVar36;
                        uVar24 = uVar36;
                        do {
                          puVar44 = puVar40 + -1;
                          uVar66 = puVar40[-2];
                          uVar73 = puVar40[1];
                          uVar72 = *puVar40;
                          uVar24 = uVar24 - 4;
                          puVar40 = puVar40 + -4;
                          puVar38[-1] = *puVar44;
                          puVar38[-2] = uVar66;
                          puVar38[1] = uVar73;
                          *puVar38 = uVar72;
                          puVar38 = puVar38 + -4;
                        } while (uVar24 != 0);
                        puVar46 = puVar46 + -uVar36;
                        puVar44 = puVar52;
                        if (uVar43 == uVar36) goto LAB_004d0e5c;
                      }
                      do {
                        puVar51 = puVar51 + -1;
                        puVar46 = puVar46 + -1;
                        *puVar46 = *puVar51;
                      } while (puVar51 != puVar52);
                      puVar44 = *(undefined8 **)(in_x0 + 0x218);
                    }
LAB_004d0e5c:
                    *(undefined8 **)(in_x0 + 0x218) = puVar46;
                    *(undefined8 **)(in_x0 + 0x220) = puVar47;
                    *(void **)(in_x0 + 0x228) = (void *)((long)pvVar20 + uVar28 * 8);
                    if (puVar44 != (undefined8 *)0x0) {
                      operator_delete(puVar44);
                    }
                  }
                  *(undefined8 **)(in_x0 + 0x220) = puVar47;
                  plVar34 = *(long **)(this_01 + 0x148);
                  plVar50 = *(long **)(this_01 + 0x150);
                  if (plVar34 != plVar50) {
                    fVar65 = *(float *)(in_x0 + 0xe8);
                    do {
                      puVar44 = *(undefined8 **)(*plVar34 + 0xd0);
                      if (*(float *)((long)puVar44 + 0xc) != fVar65) {
                        *(float *)((long)puVar44 + 0xc) = fVar65;
                        (**(code **)*puVar44)();
                      }
                      plVar34 = plVar34 + 1;
                    } while (plVar34 != plVar50);
                  }
                  plVar34 = *(long **)(in_x0 + 0x238);
                  local_134 = 0;
                  local_160 = 0;
                  uStack_15e = 0;
                  uStack_13c = (undefined4)_UNK_00281c00;
                  uStack_138 = (uint)((ulong)_UNK_00281c00 >> 0x20);
                  uStack_144 = (undefined4)_DAT_00281bf8;
                  uStack_140 = (undefined4)((ulong)_DAT_00281bf8 >> 0x20);
                  uStack_158 = SUB82(this_01,0);
                  uStack_156 = (undefined6)((ulong)this_01 >> 0x10);
                  uStack_150 = 0;
                  uStack_14e = 0;
                  if (plVar34 < *(long **)(in_x0 + 0x240)) {
                    auVar9._4_8_ = 0;
                    auVar9._0_4_ = uStack_138;
                    auVar9._12_4_ = uStack_12c;
                    plVar34[2] = 0;
                    plVar34[1] = (long)this_01;
                    *plVar34 = (ulong)uStack_15c << 0x20;
                    plVar34[4] = CONCAT44(uStack_13c,uStack_140);
                    plVar34[3] = CONCAT44(uStack_144,CONCAT22(uStack_146,uStack_148));
                    plVar34[6] = auVar9._8_8_;
                    plVar34[5] = (ulong)uStack_138;
                    *(undefined4 *)(plVar34 + 7) = local_128;
                    uStack_150 = 0;
                    uStack_14e = 0;
                    *(long **)(in_x0 + 0x238) = plVar34 + 8;
                  }
                  else {
                    uVar72 = FUN_004d17a4(in_x0 + 0x230,&local_160);
                    plVar34 = (long *)CONCAT62(uStack_14e,uStack_150);
                    *(undefined8 *)(in_x0 + 0x238) = uVar72;
                    if (plVar34 != (long *)0x0) {
                      iVar18 = FUN_00340fe0(0xffffffff,plVar34 + 1);
                      if (iVar18 == 1) {
                        (**(code **)(*plVar34 + 8))(plVar34);
                      }
                    }
                  }
                }
                if ((void *)CONCAT44(iStack_e4,local_e8) != (void *)0x0) {
                  iStack_dc = iStack_e4;
                  uStack_e0 = local_e8;
                  operator_delete((void *)CONCAT44(iStack_e4,local_e8));
                }
                if (local_100 != (undefined8 *)0x0) {
                  uStack_f8 = local_100;
                  operator_delete(local_100);
                }
              }
              else {
                uStack_f8 = (undefined8 *)0x0;
                local_f0 = (long *)0x0;
                uStack_d4 = 0;
                uStack_d0 = 0;
                iStack_dc = (int)_UNK_00281c00;
                local_d8 = (undefined2)((ulong)_UNK_00281c00 >> 0x20);
                uStack_d6 = (undefined2)((ulong)_UNK_00281c00 >> 0x30);
                iStack_e4 = (int)_DAT_00281bf8;
                uStack_e0._0_2_ = (undefined2)((ulong)_DAT_00281bf8 >> 0x20);
                uStack_e0._2_2_ = (undefined2)((ulong)_DAT_00281bf8 >> 0x30);
                local_100 = (undefined8 *)CONCAT44(local_100._4_4_,1);
                plVar34 = (long *)*puVar44;
                if (plVar34 != (long *)0x0) {
                  FUN_00340fb0(1,plVar34 + 1);
                }
                puVar44 = *(undefined8 **)(this_01 + 0x148);
                puVar52 = *(undefined8 **)(this_01 + 0x150);
                uStack_156 = (undefined6)CONCAT44(fStack_114,fStack_118);
                uStack_150 = (undefined2)((uint)fStack_114 >> 0x10);
                uStack_15e = SUB42(local_120,0);
                uStack_15c = (uint)(CONCAT44(fStack_11c,local_120) >> 0x10);
                uStack_158 = (undefined2)((uint)fStack_11c >> 0x10);
                uStack_14e = (undefined6)local_110;
                uStack_148 = (undefined2)(local_110 >> 0x30);
                for (; puVar44 != puVar52; puVar44 = puVar44 + 1) {
                  plVar50 = (long *)*puVar44;
                  uVar43 = (**(code **)(*plVar50 + 0x18))(plVar50,0x14);
                  if ((uVar43 & 1) != 0) {
                    uVar43 = (**(code **)(**(long **)(plVar50[0x1a] + 0x18) + 0x18))
                                       (*(long **)(plVar50[0x1a] + 0x18),0x12);
                    if ((uVar43 & 1) != 0) {
                      uStack_cc = *(undefined4 *)(*(long *)(plVar50[0x1a] + 0x18) + 0x88);
                      goto LAB_004d0b64;
                    }
                  }
                }
                uStack_cc = 0xff000000;
LAB_004d0b64:
                puVar44 = *(undefined8 **)(in_x0 + 0x238);
                uStack_e0._2_2_ = uStack_158;
                local_e8._2_2_ = local_160;
                iStack_e4 = (int)(CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160)) >> 0x10);
                uStack_e0._0_2_ = (undefined2)(uStack_15c >> 0x10);
                uStack_d4 = (undefined4)uStack_14e;
                uStack_d0 = (undefined4)(CONCAT26(uStack_148,uStack_14e) >> 0x20);
                iStack_dc = (int)uStack_156;
                local_d8 = (undefined2)((uint6)uStack_156 >> 0x20);
                uStack_d6 = uStack_150;
                local_c8 = fVar67;
                if (puVar44 < *(undefined8 **)(in_x0 + 0x240)) {
                  puVar44[1] = uStack_f8;
                  *puVar44 = local_100;
                  local_f0 = (long *)0x0;
                  puVar44[2] = plVar34;
                  puVar44[4] = CONCAT44(iStack_dc,CONCAT22(uStack_158,(undefined2)uStack_e0));
                  puVar44[3] = CONCAT44(iStack_e4,CONCAT22(local_160,uVar6));
                  puVar44[6] = CONCAT44(uStack_cc,uStack_d0);
                  puVar44[5] = CONCAT44(uStack_d4,CONCAT22(uStack_150,local_d8));
                  *(float *)(puVar44 + 7) = fVar67;
                  *(undefined8 **)(in_x0 + 0x238) = puVar44 + 8;
                  local_e8 = (float)CONCAT22(local_160,uVar6);
                  uStack_e0 = (float)CONCAT22(uStack_158,(undefined2)uStack_e0);
                }
                else {
                  local_f0 = plVar34;
                  local_e8._0_2_ = uVar6;
                  uVar72 = FUN_004d17a4(in_x0 + 0x230,&local_100);
                  plVar34 = local_f0;
                  *(undefined8 *)(in_x0 + 0x238) = uVar72;
                  if (local_f0 != (long *)0x0) {
                    iVar18 = FUN_00340fe0(0xffffffff,local_f0 + 1);
                    if (iVar18 == 1) {
                      (**(code **)(*plVar34 + 8))(plVar34);
                    }
                  }
                }
              }
              if (this_00[0xc0] != (TextValueRun)0x0) {
                local_100 = (undefined8 *)CONCAT44(local_174 + *(float *)(pGVar49 + 0x14),fVar77);
                uStack_f8 = (undefined8 *)
                            CONCAT44(local_174 + *(float *)(pGVar49 + 0x1c),fVar77 + fVar78);
                TextValueRun::addHitRect(this_00,(AABB *)&local_100);
              }
              fVar77 = fVar77 + fVar78;
              puVar44 = (undefined8 *)*plVar39;
              bVar56 = *(byte *)((long)puVar44 + 0x7a);
              uVar33 = uVar21 - 1;
              if ((bVar56 & 1) == 0) {
                uVar33 = uVar21 + 1;
              }
              while( true ) {
                uVar21 = uVar33;
                if ((bVar56 & 1) == 0) {
                  if ((undefined8 *)puVar41[-7] == puVar44) {
                    uVar33 = *(uint *)((long)puVar41 + -0x2c);
                  }
                  else {
                    uVar33 = *(uint *)(puVar44 + 4);
                  }
                }
                else {
                  uVar33 = *(int *)(puVar41 + -6) - 1;
                  if ((undefined8 *)puVar41[-8] != puVar44) {
                    uVar33 = 0xffffffff;
                  }
                }
                if ((uVar21 != uVar33) || (puVar44 == *(undefined8 **)(puVar41[-4] + -8))) break;
                plVar39 = plVar39 + 1;
                puVar44 = (undefined8 *)*plVar39;
                bVar56 = *(byte *)((long)puVar44 + 0x7a);
                if ((bVar56 & 1) == 0) {
                  uVar33 = *(uint *)(puVar41 + -6);
                  if ((undefined8 *)puVar41[-8] != puVar44) {
                    uVar33 = 0;
                  }
                }
                else if ((undefined8 *)puVar41[-7] == puVar44) {
                  uVar33 = *(int *)((long)puVar41 + -0x2c) - 1;
                }
                else {
                  uVar33 = *(int *)(puVar44 + 4) - 1;
                }
              }
            }
            if (local_168 == iVar17) goto LAB_004d10ac;
          }
          pGVar49 = pGVar49 + 0x20;
          iVar17 = iVar17 + 1;
          local_194 = local_194 + 1;
        } while (pGVar49 != pGVar1);
        if (plVar45[1] != 0) {
          local_174 = local_174 + *(float *)(*plVar45 + plVar45[1] * 0x20 + -4);
        }
      }
      plVar45 = plVar45 + 2;
      local_174 = local_174 + *(float *)(in_x0 + 400);
      local_290 = local_290 + 1;
    } while (plVar45 != plVar19);
  }
LAB_004d10ac:
  fVar67 = *(float *)(in_x0 + 0x3d0) - *(float *)(in_x0 + 0x3c8);
  fVar65 = *(float *)(in_x0 + 0x3d4) - *(float *)(in_x0 + 0x3cc);
  fVar77 = -(fVar67 * *(float *)(in_x0 + 0x188));
  uVar54 = SUB41(fVar77,0);
  uVar55 = (undefined1)((uint)fVar77 >> 8);
  uVar57 = (undefined1)((uint)fVar77 >> 0x10);
  uVar59 = (undefined1)((uint)fVar77 >> 0x18);
  fVar68 = -(fVar65 * *(float *)(in_x0 + 0x18c));
  if (in_x0[0x17c] == (Text)0x4) {
    if (((in_x0[0x4c9] == (Text)0x2) || (in_x0[0x4c8] == (Text)0xff)) || (in_x0[0x4c8] == (Text)0x2)
       ) {
      fVar71 = 1.0;
      if ((in_x0[0x178] != (Text)0x0) &&
         (fVar71 = 1.0, local_170 != fVar67 && local_170 < fVar67 == (NAN(local_170) || NAN(fVar67))
         )) goto LAB_004d1120;
    }
    else {
      fVar71 = 1.0;
      if (local_170 != fVar67 && local_170 < fVar67 == (NAN(local_170) || NAN(fVar67))) {
LAB_004d1120:
        fVar71 = fVar67 / local_170;
      }
    }
    if (in_x0[0x1a0] == (Text)0x0) {
      fVar78 = 0.0;
    }
    else {
      fVar78 = *(float *)(**(long **)(in_x0 + 0x268) + 0x18);
    }
    if (((in_x0[0x4c9] == (Text)0x2) || (in_x0[0x4c8] == (Text)0xff)) || (in_x0[0x4c8] == (Text)0x2)
       ) {
      fVar76 = 1.0;
      if ((in_x0[0x178] == (Text)0x2) &&
         (local_16c != fVar65 && local_16c < fVar65 == (NAN(local_16c) || NAN(fVar65))))
      goto LAB_004d1178;
    }
    else {
      fVar76 = 1.0;
      if (local_16c != fVar65 && local_16c < fVar65 == (NAN(local_16c) || NAN(fVar65))) {
LAB_004d1178:
        fVar76 = (fVar65 - fVar78) / (local_16c - fVar78);
      }
    }
    if ((fVar71 == 1.0) && (fVar76 == 1.0)) goto LAB_004d119c;
    if (fVar71 == fVar76 || fVar71 < fVar76 != (NAN(fVar71) || NAN(fVar76))) {
      fVar76 = fVar71;
    }
    TVar5 = in_x0[0x174];
    if (in_x0[0x174] != (Text)0x2 && in_x0[0x4ca] != (Text)0x0) {
      TVar5 = (Text)(in_x0[0x4ca] != (Text)0x1);
    }
    if (fVar76 <= 0.0) {
      fVar76 = 0.0;
    }
    fVar71 = (float)NEON_fmadd(fVar78,1.0 - fVar76,fVar68);
    if (TVar5 == (Text)0x1) {
      fVar67 = (float)NEON_fmsub(local_170,fVar76,fVar67);
LAB_004d13c0:
      fVar67 = (float)NEON_fmsub(local_264,fVar76,fVar67);
      fVar77 = fVar77 + fVar67;
      uVar54 = SUB41(fVar77,0);
      uVar55 = (undefined1)((uint)fVar77 >> 8);
      uVar57 = (undefined1)((uint)fVar77 >> 0x10);
      uVar59 = (undefined1)((uint)fVar77 >> 0x18);
    }
    else if (TVar5 == (Text)0x2) {
      fVar67 = (float)NEON_fmsub(local_170,fVar76,fVar67);
      fVar67 = fVar67 * 0.5;
      goto LAB_004d13c0;
    }
  }
  else {
LAB_004d119c:
    fVar76 = 1.0;
    fVar71 = fVar68;
  }
  TVar5 = in_x0[0x19c];
  if ((TVar5 != (Text)0x0) &&
     ((((in_x0[0x4c9] != (Text)0x2 && (in_x0[0x4c8] != (Text)0xff)) && (in_x0[0x4c8] != (Text)0x2))
      || (in_x0[0x178] == (Text)0x2)))) {
    if (TVar5 == (Text)0x1) {
      fVar77 = (float)NEON_fmsub(local_16c,fVar76,fVar65);
    }
    else {
      fVar71 = fVar68;
      if (TVar5 != (Text)0x2) goto LAB_004d125c;
      fVar77 = (float)NEON_fmsub(local_16c,fVar76,fVar65);
      fVar77 = fVar77 * 0.5;
    }
    fVar71 = fVar68 + fVar77;
  }
LAB_004d125c:
  plVar22 = *(long **)(in_x0 + 0x30);
  *(float *)(in_x0 + 0x1b8) = fVar76;
  *(undefined8 *)(in_x0 + 0x1bc) = 0;
  *(float *)(in_x0 + 0x1c4) = fVar76;
  *(uint *)(in_x0 + 0x1c8) = CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar54)));
  *(float *)(in_x0 + 0x1cc) = fVar71;
  for (; plVar22 != (long *)0x0; plVar22 = (long *)plVar22[6]) {
    uVar43 = (**(code **)(*plVar22 + 0x18))(plVar22,0x199);
    if ((uVar43 & 1) != 0) {
      (**(code **)(*plVar22 + 0x2e0))(plVar22,0);
    }
  }
  plVar27 = *(long **)(in_x0 + 0x208);
  for (plVar22 = *(long **)(in_x0 + 0x200); plVar22 != plVar27; plVar22 = plVar22 + 1) {
    lVar48 = *plVar22;
    if (*(char *)(lVar48 + 0xc0) != '\0') {
      lVar42 = *(long *)(lVar48 + 0xa8);
      if (lVar42 == 0) {
        puVar44 = (undefined8 *)operator_new(0x138);
        puVar44[0x26] = 0;
        puVar44[1] = 0;
        *puVar44 = 0;
        puVar44[3] = 0;
        puVar44[2] = 0;
        puVar44[5] = 0;
        puVar44[4] = 0;
        puVar44[7] = 0;
        puVar44[6] = 0;
        puVar44[9] = 0;
        puVar44[8] = 0;
        puVar44[0xb] = 0;
        puVar44[10] = 0;
        puVar44[0xd] = 0;
        puVar44[0xc] = 0;
        puVar44[0xf] = 0;
        puVar44[0xe] = 0;
        puVar44[0x11] = 0;
        puVar44[0x10] = 0;
        *(undefined4 *)(puVar44 + 7) = 0x3f800000;
        *(undefined4 *)(puVar44 + 0xc) = 0x3f800000;
        puVar44[0xe] = 0;
        puVar44[0xd] = 0;
        puVar44[0x10] = 0;
        puVar44[0xf] = 0;
        *(undefined4 *)(puVar44 + 0x11) = 0x3f800000;
        puVar44[0x13] = 0;
        puVar44[0x12] = 0;
        puVar44[0x15] = 0;
        puVar44[0x14] = 0;
        puVar44[0x17] = 0;
        puVar44[0x16] = 0;
        puVar44[0x19] = 0;
        puVar44[0x18] = 0;
        puVar44[0x1b] = 0;
        puVar44[0x1a] = 0;
        puVar44[0x1d] = 0;
        puVar44[0x1c] = 0;
        puVar44[0x1f] = 0;
        puVar44[0x1e] = 0;
        puVar44[0x21] = 0;
        puVar44[0x20] = 0;
        puVar44[0x23] = 0;
        puVar44[0x22] = 0;
        puVar44[0x25] = 0;
        puVar44[0x24] = 0;
        *(undefined8 **)(lVar48 + 0xa8) = puVar44;
      }
      else {
        *(undefined8 *)(lVar42 + 0x98) = *(undefined8 *)(lVar42 + 0x90);
      }
      pAVar3 = *(AABB **)(lVar48 + 0xd0);
      for (pAVar2 = *(AABB **)(lVar48 + 200); pAVar2 != pAVar3; pAVar2 = pAVar2 + 0x10) {
        RectanglesToContour::addRect(*(RectanglesToContour **)(lVar48 + 0xa8),pAVar2);
      }
      RectanglesToContour::computeContours(*(RectanglesToContour **)(lVar48 + 0xa8));
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_b8) {
    return;
  }
LAB_004d13fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d1400  rive::Text::computeBoundsInfo =====

/* rive::Text::computeBoundsInfo() */

void rive::Text::computeBoundsInfo(void)

{
  undefined8 *puVar1;
  bool bVar2;
  long in_x0;
  long lVar3;
  uint *puVar4;
  long lVar5;
  float *in_x8;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar11 = 0.0;
  lVar9 = *(long *)(in_x0 + 0x270);
  if (((*(char *)(in_x0 + 0x194) == '\x01') && (lVar9 != 0)) &&
     ((*(long **)(in_x0 + 0x268))[1] != 0)) {
    fVar11 = 0.0 - *(float *)(**(long **)(in_x0 + 0x268) + 0x18);
  }
  if (*(char *)(in_x0 + 0x17c) == '\x03') {
    if (((*(char *)(in_x0 + 0x4c9) == '\x02') || (*(char *)(in_x0 + 0x4c8) == -1)) ||
       (*(char *)(in_x0 + 0x4c8) == '\x02')) {
      bVar2 = *(char *)(in_x0 + 0x178) == '\x02';
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  fVar15 = fVar11;
  if (lVar9 == 0) {
    fVar13 = 0.0;
    fVar12 = 0.0;
    fVar8 = -NAN;
    fVar10 = -NAN;
  }
  else {
    puVar7 = *(undefined8 **)(in_x0 + 0x268);
    lVar6 = 0;
    fVar10 = -NAN;
    puVar1 = puVar7 + lVar9 * 2;
    fVar8 = -NAN;
    fVar14 = *(float *)(in_x0 + 0x184);
    if (!NAN(*(float *)(in_x0 + 0x4c4))) {
      fVar14 = *(float *)(in_x0 + 0x4c4);
    }
    fVar12 = 0.0;
    fVar13 = 0.0;
    do {
      lVar9 = puVar7[1];
      if (lVar9 != 0) {
        lVar3 = lVar9 * 0x20;
        lVar5 = *(long *)(*(long *)(in_x0 + 0x248) + lVar6 * 0x18);
        fVar8 = (float)((int)fVar8 + (int)(lVar3 - 0x20U >> 5) + 1);
        puVar4 = (uint *)*puVar7;
        do {
          fVar16 = *(float *)(*(long *)(lVar5 + (ulong)puVar4[2] * 0x90 + 0x48) +
                             (ulong)puVar4[3] * 4) -
                   *(float *)(*(long *)(lVar5 + (ulong)*puVar4 * 0x90 + 0x48) + (ulong)puVar4[1] * 4
                             );
          if (fVar16 == fVar12 || fVar16 < fVar12 != (NAN(fVar16) || NAN(fVar12))) {
            fVar16 = fVar12;
          }
          fVar12 = fVar16;
          if ((bVar2) && (fVar15 + (float)puVar4[7] <= fVar14)) {
            fVar10 = (float)((int)fVar10 + 1);
            fVar13 = fVar15 + (float)puVar4[7];
          }
          lVar3 = lVar3 + -0x20;
          puVar4 = puVar4 + 8;
        } while (lVar3 != 0);
        fVar15 = fVar15 + (float)((uint *)*puVar7)[lVar9 * 8 + -1];
      }
      fVar15 = *(float *)(in_x0 + 400) + fVar15;
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + 1;
    } while (puVar7 != puVar1);
  }
  *in_x8 = fVar11;
  in_x8[1] = fVar12;
  fVar11 = 0.0;
  if (!(bool)(bVar2 & fVar10 == -NAN)) {
    fVar11 = fVar10;
  }
  in_x8[3] = fVar11;
  if ((int)fVar11 < 1) {
    fVar13 = fVar15;
  }
  *(bool *)(in_x8 + 4) = fVar8 == fVar11;
  in_x8[2] = fVar13;
  return;
}


// ===== 004d15b0  rive::Text::shouldDrawLine =====

/* rive::Text::shouldDrawLine(float, float, rive::GlyphLine const&) */

undefined8 __thiscall
rive::Text::shouldDrawLine(Text *this,float param_1,float param_2,GlyphLine *param_3)

{
  Text TVar1;
  float fVar2;
  float fVar3;
  
  if (this[0x17c] == (Text)0x2) {
    if ((((this[0x4c9] != (Text)0x2) && (this[0x4c8] != (Text)0xff)) && (this[0x4c8] != (Text)0x2))
       || (this[0x178] == (Text)0x2)) {
      TVar1 = this[0x19c];
      if (TVar1 == (Text)0x2) {
        fVar3 = *(float *)(this + 0x184);
        if (!NAN(*(float *)(this + 0x4c4))) {
          fVar3 = *(float *)(this + 0x4c4);
        }
        if (*(float *)(param_3 + 0x1c) + param_1 < param_2 * 0.5 - fVar3 * 0.5) {
          return 1;
        }
        fVar2 = param_2 * 0.5 + fVar3 * 0.5;
        fVar3 = *(float *)(param_3 + 0x14) + param_1;
        if (fVar3 != fVar2 && fVar3 < fVar2 == (NAN(fVar3) || NAN(fVar2))) {
          return 2;
        }
      }
      else if (TVar1 == (Text)0x1) {
        fVar3 = *(float *)(this + 0x184);
        if (!NAN(*(float *)(this + 0x4c4))) {
          fVar3 = *(float *)(this + 0x4c4);
        }
        if (*(float *)(param_3 + 0x1c) + param_1 < param_2 - fVar3) {
          return 1;
        }
      }
      else if (TVar1 == (Text)0x0) {
        fVar2 = *(float *)(param_3 + 0x14) + param_1;
        fVar3 = *(float *)(this + 0x184);
        if (!NAN(*(float *)(this + 0x4c4))) {
          fVar3 = *(float *)(this + 0x4c4);
        }
        if (fVar2 != fVar3 && fVar2 < fVar3 == (NAN(fVar2) || NAN(fVar3))) {
          return 2;
        }
      }
    }
  }
  else if ((this[0x17c] == (Text)0x1) &&
          ((((this[0x4c9] != (Text)0x2 && (this[0x4c8] != (Text)0xff)) && (this[0x4c8] != (Text)0x2)
            ) || (this[0x178] == (Text)0x2)))) {
    TVar1 = this[0x19c];
    if (TVar1 == (Text)0x2) {
      fVar3 = *(float *)(this + 0x184);
      if (!NAN(*(float *)(this + 0x4c4))) {
        fVar3 = *(float *)(this + 0x4c4);
      }
      if (*(float *)(param_3 + 0x14) + param_1 < param_2 * 0.5 - fVar3 * 0.5) {
        return 1;
      }
      fVar2 = param_2 * 0.5 + fVar3 * 0.5;
      fVar3 = *(float *)(param_3 + 0x1c) + param_1;
      if (fVar3 != fVar2 && fVar3 < fVar2 == (NAN(fVar3) || NAN(fVar2))) {
        return 2;
      }
    }
    else if (TVar1 == (Text)0x1) {
      fVar3 = *(float *)(this + 0x184);
      if (!NAN(*(float *)(this + 0x4c4))) {
        fVar3 = *(float *)(this + 0x4c4);
      }
      if (*(float *)(param_3 + 0x14) + param_1 < param_2 - fVar3) {
        return 1;
      }
    }
    else if (TVar1 == (Text)0x0) {
      fVar2 = *(float *)(param_3 + 0x1c) + param_1;
      fVar3 = *(float *)(this + 0x184);
      if (!NAN(*(float *)(this + 0x4c4))) {
        fVar3 = *(float *)(this + 0x4c4);
      }
      if (fVar2 != fVar3 && fVar2 < fVar3 == (NAN(fVar2) || NAN(fVar3))) {
        return 2;
      }
    }
  }
  return 0;
}


// ===== 004d17a4  FUN_004d17a4 =====

undefined8 * FUN_004d17a4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar3 = *param_1;
  lVar12 = param_1[1];
  lVar14 = lVar12 - lVar3 >> 6;
  uVar1 = lVar14 + 1;
  if (uVar1 >> 0x3a != 0) {
    FUN_004d191c();
LAB_004d1918:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar10 = param_1[2] - lVar3 >> 5;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7fffffffffffffbf < (ulong)(param_1[2] - lVar3)) {
    uVar10 = 0x3ffffffffffffff;
  }
  if (uVar10 == 0) {
    pvVar8 = (void *)0x0;
  }
  else {
    if (uVar10 >> 0x3a != 0) goto LAB_004d1918;
    pvVar8 = operator_new(uVar10 << 6);
  }
  puVar2 = (undefined8 *)((long)pvVar8 + lVar14 * 0x40);
  uVar15 = *param_2;
  uVar9 = param_2[2];
  uVar5 = *(undefined4 *)(param_2 + 7);
  param_2[2] = 0;
  puVar2[1] = param_2[1];
  *puVar2 = uVar15;
  uVar16 = param_2[4];
  uVar15 = param_2[3];
  puVar2[2] = uVar9;
  puVar2[4] = uVar16;
  puVar2[3] = uVar15;
  uVar15 = param_2[6];
  uVar9 = param_2[5];
  *(undefined4 *)(puVar2 + 7) = uVar5;
  puVar2[6] = uVar15;
  puVar2[5] = uVar9;
  puVar6 = puVar2;
  for (; lVar12 != lVar3; lVar12 = lVar12 + -0x40) {
    uVar9 = *(undefined8 *)(lVar12 + -0x40);
    puVar6[-7] = *(undefined8 *)(lVar12 + -0x38);
    puVar6[-8] = uVar9;
    uVar9 = *(undefined8 *)(lVar12 + -0x30);
    *(undefined8 *)(lVar12 + -0x30) = 0;
    puVar6[-6] = uVar9;
    uVar15 = *(undefined8 *)(lVar12 + -0x10);
    uVar9 = *(undefined8 *)(lVar12 + -0x18);
    uVar17 = *(undefined8 *)(lVar12 + -0x20);
    uVar16 = *(undefined8 *)(lVar12 + -0x28);
    *(undefined4 *)(puVar6 + -1) = *(undefined4 *)(lVar12 + -8);
    puVar6[-2] = uVar15;
    puVar6[-3] = uVar9;
    puVar6[-4] = uVar17;
    puVar6[-5] = uVar16;
    puVar6 = puVar6 + -8;
  }
  pvVar4 = (void *)*param_1;
  pvVar13 = (void *)param_1[1];
  *param_1 = (long)puVar6;
  param_1[1] = (long)(puVar2 + 8);
  param_1[2] = (long)((long)pvVar8 + uVar10 * 0x40);
  for (; pvVar13 != pvVar4; pvVar13 = (void *)((long)pvVar13 + -0x40)) {
    plVar11 = *(long **)((long)pvVar13 + -0x30);
    if ((plVar11 != (long *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,plVar11 + 1), iVar7 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  return puVar2 + 8;
}


// ===== 004d191c  FUN_004d191c =====

void FUN_004d191c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004d1930  rive::Text::markShapeDirty =====

/* rive::Text::markShapeDirty(bool) */

void __thiscall rive::Text::markShapeDirty(Text *this,bool param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar4 = *(long *)(this + 0x80);
    uVar2 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar4 + 0xc32) = 1;
    *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
    if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
      *(uint *)(lVar4 + 0xbd4) = uVar2;
    }
  }
  puVar8 = *(undefined8 **)(this + 0x3e0);
  for (puVar7 = *(undefined8 **)(this + 0x3d8); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    plVar6 = (long *)*puVar7;
    plVar1 = (long *)plVar6[0x1a];
    for (plVar5 = (long *)plVar6[0x19]; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0xd0);
      *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(lVar4 + 0xe8);
    }
    if ((*(ushort *)(plVar6 + 0xc) >> 5 & 1) == 0) {
      *(ushort *)(plVar6 + 0xc) = *(ushort *)(plVar6 + 0xc) | 0x20;
      (**(code **)(*plVar6 + 0x70))(plVar6);
      lVar4 = plVar6[0x10];
      uVar2 = *(uint *)(plVar6 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar2;
      }
    }
  }
  Component::addDirt((Component *)this,0x80,1);
  if (param_1) {
    while (this = *(Text **)(this + 0x30), this != (Text *)0x0) {
      uVar3 = (**(code **)(*(long *)this + 0x18))(this,0x199);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*(long *)this + 0x2e0))(this,0);
      }
    }
  }
  return;
}


// ===== 004d1a94  rive::Text::effectiveSizing =====

/* rive::Text::effectiveSizing() const */

undefined4 __thiscall rive::Text::effectiveSizing(Text *this)

{
  if (((this[0x4c9] != (Text)0x2) && (this[0x4c8] != (Text)0xff)) && (this[0x4c8] != (Text)0x2)) {
    return 2;
  }
  return *(undefined4 *)(this + 0x178);
}


// ===== 004d1ac4  rive::Text::clearRenderStyles =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Text::clearRenderStyles() */

void __thiscall rive::Text::clearRenderStyles(Text *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = *(undefined8 **)(this + 0x218);
  puVar8 = *(undefined8 **)(this + 0x220);
  if (puVar6 != puVar8) {
    do {
      puVar7 = puVar6 + 1;
      TextStylePaint::rewindPath((TextStylePaint *)*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != puVar8);
    puVar6 = *(undefined8 **)(this + 0x218);
  }
  lVar10 = *(long *)(this + 0x238);
  lVar9 = *(long *)(this + 0x230);
  *(undefined8 **)(this + 0x220) = puVar6;
  for (; lVar10 != lVar9; lVar10 = lVar10 + -0x40) {
    plVar4 = *(long **)(lVar10 + -0x30);
    if ((plVar4 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar3 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x200);
  plVar5 = *(long **)(this + 0x208);
  *(long *)(this + 0x238) = lVar9;
  uVar2 = _UNK_0024e258;
  uVar1 = _DAT_0024e250;
  for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
    lVar10 = *plVar4;
    *(undefined8 *)(lVar10 + 0xb8) = uVar2;
    *(undefined8 *)(lVar10 + 0xb0) = uVar1;
    *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(lVar10 + 200);
  }
  return;
}


// ===== 004d1b90  rive::Text::align =====

/* rive::Text::align() const */

Text __thiscall rive::Text::align(Text *this)

{
  Text TVar1;
  
  TVar1 = this[0x174];
  if (this[0x174] != (Text)0x2 && this[0x4ca] != (Text)0x0) {
    TVar1 = (Text)(this[0x4ca] != (Text)0x1);
  }
  return TVar1;
}


// ===== 004d1bb0  rive::Text::styleFromShaperId =====

/* rive::Text::styleFromShaperId(unsigned short) const */

undefined8 __thiscall rive::Text::styleFromShaperId(Text *this,ushort param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(this + 0x1e8) + (ulong)param_1 * 8) + 0xe0);
}


// ===== 004d1bc4  rive::Text::addRun =====

/* rive::Text::addRun(rive::TextValueRun*) */

void __thiscall rive::Text::addRun(Text *this,TextValueRun *param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = *(undefined8 **)(this + 0x1f0);
  if (puVar13 < *(undefined8 **)(this + 0x1f8)) {
    puVar3 = puVar13 + 1;
    *puVar13 = param_1;
LAB_004d1d00:
    puVar13 = *(undefined8 **)(this + 0x208);
    *(undefined8 **)(this + 0x1f0) = puVar3;
    if (puVar13 < *(undefined8 **)(this + 0x210)) {
      puVar9 = puVar13 + 1;
      *puVar13 = param_1;
      goto LAB_004d1e28;
    }
    puVar10 = *(undefined8 **)(this + 0x200);
    lVar12 = (long)puVar13 - (long)puVar10 >> 3;
    uVar5 = lVar12 + 1;
    if (uVar5 >> 0x3d == 0) {
      uVar2 = (long)*(undefined8 **)(this + 0x210) - (long)puVar10;
      uVar4 = (long)uVar2 >> 2;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (0x7ffffffffffffff7 < uVar2) {
        uVar4 = 0x1fffffffffffffff;
      }
      if (uVar4 == 0) {
        pvVar1 = (void *)0x0;
      }
      else {
        if (uVar4 >> 0x3d != 0) goto LAB_004d1e48;
        pvVar1 = operator_new(uVar4 << 3);
      }
      puVar3 = (undefined8 *)((long)pvVar1 + lVar12 * 8);
      puVar9 = puVar3 + 1;
      *puVar3 = param_1;
      if ((long)puVar13 - (long)puVar10 != 0) {
        uVar5 = ((long)puVar13 - (long)puVar10) - 8;
        puVar11 = puVar13;
        if ((0x37 < uVar5) &&
           (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar10) - (long)pvVar1)))) {
          puVar7 = puVar3 + -2;
          puVar8 = puVar13 + -2;
          uVar5 = (uVar5 >> 3) + 1;
          uVar6 = uVar5 & 0x3ffffffffffffffc;
          puVar11 = puVar13 + -uVar6;
          uVar2 = uVar6;
          do {
            puVar13 = puVar8 + -1;
            uVar16 = puVar8[-2];
            uVar15 = puVar8[1];
            uVar14 = *puVar8;
            uVar2 = uVar2 - 4;
            puVar8 = puVar8 + -4;
            puVar7[-1] = *puVar13;
            puVar7[-2] = uVar16;
            puVar7[1] = uVar15;
            *puVar7 = uVar14;
            puVar7 = puVar7 + -4;
          } while (uVar2 != 0);
          puVar3 = puVar3 + -uVar6;
          puVar13 = puVar10;
          if (uVar5 == uVar6) goto LAB_004d1e10;
        }
        do {
          puVar11 = puVar11 + -1;
          puVar3 = puVar3 + -1;
          *puVar3 = *puVar11;
        } while (puVar11 != puVar10);
        puVar13 = *(undefined8 **)(this + 0x200);
      }
LAB_004d1e10:
      *(undefined8 **)(this + 0x200) = puVar3;
      *(undefined8 **)(this + 0x208) = puVar9;
      *(void **)(this + 0x210) = (void *)((long)pvVar1 + uVar4 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        operator_delete(puVar13);
      }
LAB_004d1e28:
      *(undefined8 **)(this + 0x208) = puVar9;
      return;
    }
  }
  else {
    puVar9 = *(undefined8 **)(this + 0x1e8);
    lVar12 = (long)puVar13 - (long)puVar9 >> 3;
    uVar5 = lVar12 + 1;
    if (uVar5 >> 0x3d == 0) {
      uVar2 = (long)*(undefined8 **)(this + 0x1f8) - (long)puVar9;
      uVar4 = (long)uVar2 >> 2;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (0x7ffffffffffffff7 < uVar2) {
        uVar4 = 0x1fffffffffffffff;
      }
      if (uVar4 == 0) {
        pvVar1 = (void *)0x0;
      }
      else {
        if (uVar4 >> 0x3d != 0) goto LAB_004d1e48;
        pvVar1 = operator_new(uVar4 << 3);
      }
      puVar10 = (undefined8 *)((long)pvVar1 + lVar12 * 8);
      puVar3 = puVar10 + 1;
      *puVar10 = param_1;
      if ((long)puVar13 - (long)puVar9 != 0) {
        uVar5 = ((long)puVar13 - (long)puVar9) - 8;
        puVar11 = puVar13;
        if ((0x37 < uVar5) &&
           (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar9) - (long)pvVar1)))) {
          puVar7 = puVar13 + -2;
          uVar5 = (uVar5 >> 3) + 1;
          uVar6 = uVar5 & 0x3ffffffffffffffc;
          puVar11 = puVar13 + -uVar6;
          puVar13 = puVar10 + -2;
          uVar2 = uVar6;
          do {
            puVar8 = puVar7 + -1;
            uVar16 = puVar7[-2];
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            uVar2 = uVar2 - 4;
            puVar7 = puVar7 + -4;
            puVar13[-1] = *puVar8;
            puVar13[-2] = uVar16;
            puVar13[1] = uVar15;
            *puVar13 = uVar14;
            puVar13 = puVar13 + -4;
          } while (uVar2 != 0);
          puVar10 = puVar10 + -uVar6;
          puVar13 = puVar9;
          if (uVar5 == uVar6) goto LAB_004d1cec;
        }
        do {
          puVar11 = puVar11 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar11;
        } while (puVar11 != puVar9);
        puVar13 = *(undefined8 **)(this + 0x1e8);
      }
LAB_004d1cec:
      *(undefined8 **)(this + 0x1e8) = puVar10;
      *(undefined8 **)(this + 0x1f0) = puVar3;
      *(void **)(this + 0x1f8) = (void *)((long)pvVar1 + uVar4 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        operator_delete(puVar13);
      }
      goto LAB_004d1d00;
    }
  }
  FUN_004cf7e4();
LAB_004d1e48:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 004d1e4c  rive::Text::addModifierGroup =====

/* rive::Text::addModifierGroup(rive::TextModifierGroup*) */

void __thiscall rive::Text::addModifierGroup(Text *this,TextModifierGroup *param_1)

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
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = *(undefined8 **)(this + 0x3e0);
  if (puVar13 < *(undefined8 **)(this + 1000)) {
    puVar12 = puVar13 + 1;
    *puVar13 = param_1;
    goto LAB_004d1f94;
  }
  puVar9 = *(undefined8 **)(this + 0x3d8);
  lVar11 = (long)puVar13 - (long)puVar9 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004d1fb8();
LAB_004d1fb4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 1000) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004d1fb4;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar11 * 8);
  puVar12 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar13 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar13 - (long)puVar9) - 8;
    puVar10 = puVar13;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar13 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar10 = puVar13 + -uVar7;
      puVar13 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar13[-1] = *puVar1;
        puVar13[-2] = uVar16;
        puVar13[1] = uVar15;
        *puVar13 = uVar14;
        puVar13 = puVar13 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar13 = puVar9;
      if (uVar6 == uVar7) goto LAB_004d1f7c;
    }
    do {
      puVar10 = puVar10 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar10;
    } while (puVar10 != puVar9);
    puVar13 = *(undefined8 **)(this + 0x3d8);
  }
LAB_004d1f7c:
  *(undefined8 **)(this + 0x3d8) = puVar4;
  *(undefined8 **)(this + 0x3e0) = puVar12;
  *(void **)(this + 1000) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
LAB_004d1f94:
  *(undefined8 **)(this + 0x3e0) = puVar12;
  return;
}


// ===== 004d1fb8  FUN_004d1fb8 =====

void FUN_004d1fb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004d1fcc  rive::Text::modifierShapeDirty =====

/* rive::Text::modifierShapeDirty() */

void __thiscall rive::Text::modifierShapeDirty(Text *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
    (**(code **)(*(long *)this + 0x70))();
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004d2030  rive::StyledText::clear =====

/* rive::StyledText::clear() */

void __thiscall rive::StyledText::clear(StyledText *this)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar4 = *(undefined8 **)(this + 0x20);
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -4;
    plVar3 = (long *)*puVar4;
    if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar2 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  *(undefined8 **)(this + 0x20) = puVar1;
  return;
}


// ===== 004d20a4  rive::StyledText::empty =====

/* rive::StyledText::empty() const */

bool __thiscall rive::StyledText::empty(StyledText *this)

{
  return *(long *)(this + 0x18) == *(long *)(this + 0x20);
}


// ===== 004d20b4  rive::Text::modifierRangesNeedShape =====

/* rive::Text::modifierRangesNeedShape() const */

bool __thiscall rive::Text::modifierRangesNeedShape(Text *this)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = *(long **)(this + 0x3d8);
  if (plVar3 == *(long **)(this + 0x3e0)) {
    return false;
  }
  do {
    lVar4 = *plVar3;
    if (*(long *)(lVar4 + 0xf8) != *(long *)(lVar4 + 0x100)) {
      return true;
    }
    plVar1 = *(long **)(lVar4 + 200);
    if (plVar1 == *(long **)(lVar4 + 0xd0)) {
      bVar2 = false;
    }
    else {
      do {
        plVar5 = plVar1 + 1;
        bVar2 = *(char *)(*plVar1 + 0xac) == '\x03';
        plVar1 = plVar5;
      } while (!bVar2 && plVar5 != *(long **)(lVar4 + 0xd0));
      if (bVar2) {
        return bVar2;
      }
    }
    plVar3 = plVar3 + 1;
    if (plVar3 == *(long **)(this + 0x3e0)) {
      return bVar2;
    }
  } while( true );
}


// ===== 004d2130  rive::GlyphLine::ComputeMaxWidth =====

/* rive::GlyphLine::ComputeMaxWidth(rive::Span<rive::GlyphLine>, rive::Span<rive::GlyphRun const>)
    */

void __thiscall rive::GlyphLine::ComputeMaxWidth(GlyphLine *this,long param_2,long param_3)

{
  GlyphLine *pGVar1;
  uint uVar2;
  GlyphLine *pGVar3;
  GlyphLine *pGVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 0.0;
  if (param_2 != 0) {
    param_2 = param_2 << 5;
    this = this + 8;
    do {
      uVar2 = *(uint *)this;
      pGVar3 = this + 4;
      pGVar1 = this + -8;
      pGVar4 = this + -4;
      this = this + 0x20;
      fVar6 = *(float *)(*(long *)(param_3 + (ulong)uVar2 * 0x90 + 0x48) +
                        (ulong)*(uint *)pGVar3 * 4) -
              *(float *)(*(long *)(param_3 + (ulong)*(uint *)pGVar1 * 0x90 + 0x48) +
                        (ulong)*(uint *)pGVar4 * 4);
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = fVar6;
      param_2 = param_2 + -0x20;
    } while (param_2 != 0);
  }
  return;
}


// ===== 004d2180  rive::GlyphLine::ComputeLineSpacing =====

/* rive::GlyphLine::ComputeLineSpacing(bool, rive::Span<rive::GlyphLine>, rive::Span<rive::GlyphRun
   const>, float, rive::TextAlign) */

void rive::GlyphLine::ComputeLineSpacing
               (float param_1,uint param_2,uint *param_3,long param_4,long param_5,
               undefined8 param_6,char param_7)

{
  uint uVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_4 != 0) {
    fVar8 = 0.0;
    puVar2 = param_3 + param_4 * 8;
    do {
      uVar1 = *param_3;
      fVar9 = 0.0;
      fVar4 = 0.0;
      fVar13 = 0.0;
      while (fVar5 = fVar13, uVar1 <= param_3[2]) {
        plVar7 = (long *)(param_5 + (ulong)uVar1 * 0x90);
        fVar10 = *(float *)(plVar7 + 1);
        fVar13 = *(float *)((long)plVar7 + 0xc);
        lVar6 = *plVar7;
        fVar11 = *(float *)(lVar6 + 0xc);
        if (0.0 <= fVar13) {
          fVar12 = fVar13 * (fVar11 / (*(float *)(lVar6 + 0x10) - fVar11));
          fVar13 = fVar13 + fVar12;
        }
        else {
          fVar12 = fVar10 * fVar11;
          fVar13 = fVar10 * *(float *)(lVar6 + 0x10);
        }
        uVar1 = uVar1 + 1;
        fVar3 = fVar10 * fVar11;
        if (fVar9 <= fVar10 * fVar11) {
          fVar3 = fVar9;
        }
        if (fVar4 <= fVar12) {
          fVar12 = fVar4;
        }
        fVar9 = fVar3;
        fVar4 = fVar12;
        if (fVar13 <= fVar5) {
          fVar13 = fVar5;
        }
      }
      fVar9 = -fVar9;
      if ((param_2 & 1) == 0) {
        fVar9 = fVar8 - fVar4;
      }
      param_3[5] = (uint)fVar8;
      param_3[6] = (uint)fVar9;
      fVar8 = fVar5 + fVar9;
      param_3[7] = (uint)fVar8;
      if (param_7 == '\0') {
        fVar9 = 0.0;
LAB_004d21a4:
        param_3[4] = (uint)fVar9;
      }
      else {
        fVar9 = *(float *)(*(long *)(param_5 + (ulong)param_3[2] * 0x90 + 0x48) +
                          (ulong)param_3[3] * 4) -
                *(float *)(*(long *)(param_5 + (ulong)*param_3 * 0x90 + 0x48) +
                          (ulong)param_3[1] * 4);
        if (param_7 == '\x01') {
          fVar9 = param_1 - fVar9;
          goto LAB_004d21a4;
        }
        if (param_7 == '\x02') {
          fVar9 = param_1 * 0.5 + fVar9 * -0.5;
          goto LAB_004d21a4;
        }
      }
      param_3 = param_3 + 8;
      param_2 = 0;
    } while (param_3 != puVar2);
  }
  return;
}


// ===== 004d22b8  rive::GlyphLine::BreakLines =====

/* rive::GlyphLine::BreakLines(rive::Span<rive::GlyphRun const>, float) */

void rive::GlyphLine::BreakLines(undefined8 *param_1,float param_2,long param_3,long param_4)

{
  bool bVar1;
  ulong *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  void *__ptr;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  size_t __size;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int local_f4;
  long local_b0;
  long local_a8;
  long local_a0;
  uint local_98;
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  fVar30 = 3.4028235e+38;
  if (0.0 <= param_2) {
    fVar30 = param_2;
  }
  if (param_4 != 0) {
    lVar16 = 0;
    lVar15 = param_4 * 0x90;
    do {
      lVar24 = param_3 + lVar16;
      if (*(long *)(lVar24 + 0x70) != 0) {
        lVar16 = 0;
        uVar27 = 1;
        goto LAB_004d2334;
      }
      lVar16 = lVar16 + 0x90;
    } while (lVar15 - lVar16 != 0);
  }
  goto LAB_004d2358;
LAB_004d2460:
  bVar10 = lVar29 == lVar24;
  bVar11 = (uint)uVar17 == uVar13;
  bVar9 = fVar31 == fVar32;
  bVar1 = fVar31 < fVar32 != (NAN(fVar31) || NAN(fVar32));
  uVar19 = (undefined4)uVar20;
  if ((bVar9 || bVar1) || bVar10 && bVar11) {
    uVar14 = *(uint *)(*(long *)(lVar29 + 0x68) + uVar27 * 4);
    uVar5 = (int)((ulong)(lVar29 - param_3) >> 4) * 0x38e38e39;
    uVar23 = (ulong)uVar5;
    if (bVar10 && bVar11) {
      pvVar12 = __ptr;
      if (puVar25 == (undefined4 *)((long)__ptr + uVar21 * 0x20)) {
        uVar23 = uVar21 * 2;
        if (uVar23 < 2) {
          uVar23 = 1;
        }
        uVar20 = uVar21;
        if ((uVar21 != uVar23) &&
           (pvVar12 = realloc(__ptr,uVar23 << 5), uVar20 = uVar23, (long)uVar21 < (long)uVar23)) {
          pvVar4 = (void *)((long)pvVar12 + uVar21 * 0x20);
          pvVar3 = (void *)((long)pvVar12 + uVar23 * 0x20);
          if (pvVar3 <= (void *)((long)pvVar4 + 0x20U)) {
            pvVar3 = (void *)((long)pvVar4 + 0x20U);
          }
          memset(pvVar4,0,((long)pvVar3 + ~(ulong)pvVar4 & 0xffffffffffffffe0) + 0x20);
        }
        uVar21 = uVar20;
        puVar25 = (undefined4 *)((long)pvVar12 + ((long)puVar25 - (long)__ptr));
      }
      *puVar25 = uVar19;
      puVar25[1] = uVar18;
      puVar25[2] = uVar5;
      puVar25[3] = uVar14;
      *(undefined8 *)(puVar25 + 6) = 0;
      *(undefined8 *)(puVar25 + 4) = 0;
      fVar32 = *(float *)(*(long *)(lVar24 + 0x48) +
                         (ulong)(*(int *)(*(long *)(lVar24 + 0x68) + (ulong)uVar28 * 4) + 1) * 4);
      __ptr = pvVar12;
      uVar20 = (ulong)(uint)((int)((ulong)(lVar24 - param_3) >> 4) * 0x38e38e39);
      puVar25 = puVar25 + 8;
      uVar5 = uVar13 + 1;
      goto LAB_004d291c;
    }
  }
  else {
    uVar22 = (ulong)(uint)((int)((ulong)(lVar24 - param_3) >> 4) * 0x38e38e39);
    if (uVar20 == uVar22 && uVar18 == uVar13) {
      do {
        local_98 = *(uint *)(*(long *)(lVar29 + 0x68) + uVar27 * 4);
        local_b0 = param_3;
        local_a8 = param_4;
        local_a0 = lVar29;
        do {
          uVar22 = FUN_004d2a78(&local_b0);
          if ((uVar22 & 1) == 0) goto LAB_004d2920;
          fVar33 = *(float *)(*(long *)(local_a0 + 0x48) + (ulong)local_98 * 4);
        } while (fVar32 < fVar33);
        if ((param_3 + uVar20 * 0x90 == local_a0) && (uVar18 == local_98)) {
          uVar22 = FUN_004d2c1c(&local_b0);
          if ((uVar22 & 1) == 0) break;
          fVar33 = *(float *)(*(long *)(local_a0 + 0x48) + (ulong)local_98 * 4);
        }
        uVar7 = local_98;
        uVar5 = (int)((ulong)(local_a0 - param_3) >> 4) * 0x38e38e39;
        if ((uVar20 != uVar5) || (uVar14 = uVar18, uVar18 != local_98)) {
          pvVar12 = __ptr;
          if (puVar25 == (undefined4 *)((long)__ptr + uVar21 * 0x20)) {
            uVar23 = uVar21 * 2;
            if (uVar23 < 2) {
              uVar23 = 1;
            }
            uVar22 = uVar21;
            if ((uVar21 != uVar23) &&
               (pvVar12 = realloc(__ptr,uVar23 << 5), uVar22 = uVar23, (long)uVar21 < (long)uVar23))
            {
              pvVar4 = (void *)((long)pvVar12 + uVar21 * 0x20);
              pvVar3 = (void *)((long)pvVar12 + uVar23 * 0x20);
              if (pvVar3 <= (void *)((long)pvVar4 + 0x20U)) {
                pvVar3 = (void *)((long)pvVar4 + 0x20U);
              }
              memset(pvVar4,0,((long)pvVar3 + ~(ulong)pvVar4 & 0xffffffffffffffe0) + 0x20);
            }
            uVar21 = uVar22;
            puVar25 = (undefined4 *)((long)pvVar12 + ((long)puVar25 - (long)__ptr));
          }
          *puVar25 = (int)uVar20;
          puVar25[1] = uVar18;
          puVar25[2] = uVar5;
          puVar25[3] = uVar7;
          *(undefined8 *)(puVar25 + 6) = 0;
          *(undefined8 *)(puVar25 + 4) = 0;
          puVar25 = puVar25 + 8;
          uVar20 = (ulong)(uint)((int)((ulong)(local_a0 - param_3) >> 4) * 0x38e38e39);
          __ptr = pvVar12;
          uVar14 = local_98;
        }
        fVar32 = fVar30 + fVar33;
        uVar23 = uVar20;
        uVar18 = uVar14;
      } while (fVar31 != fVar32 && fVar31 < fVar32 == (NAN(fVar31) || NAN(fVar32)));
    }
    else {
      fVar32 = *(float *)(*(long *)(lVar24 + 0x48) +
                         (ulong)*(uint *)(*(long *)(lVar24 + 0x68) + (ulong)uVar28 * 4) * 4);
      uVar5 = uVar13;
      if (((uVar20 != uVar23) || (uVar18 != uVar14)) || (uVar20 = uVar22, 1 < uVar28 - local_f4)) {
        pvVar12 = __ptr;
        if (puVar25 == (undefined4 *)((long)__ptr + uVar21 * 0x20)) {
          uVar20 = uVar21 * 2;
          if (uVar20 < 2) {
            uVar20 = 1;
          }
          uVar8 = uVar21;
          if ((uVar21 != uVar20) &&
             (pvVar12 = realloc(__ptr,uVar20 << 5), uVar8 = uVar20, (long)uVar21 < (long)uVar20)) {
            pvVar4 = (void *)((long)pvVar12 + uVar21 * 0x20);
            pvVar3 = (void *)((long)pvVar12 + uVar20 * 0x20);
            if (pvVar3 <= (void *)((long)pvVar4 + 0x20U)) {
              pvVar3 = (void *)((long)pvVar4 + 0x20U);
            }
            memset(pvVar4,0,((long)pvVar3 + ~(ulong)pvVar4 & 0xffffffffffffffe0) + 0x20);
          }
          uVar21 = uVar8;
          puVar25 = (undefined4 *)((long)pvVar12 + ((long)puVar25 - (long)__ptr));
        }
        *puVar25 = uVar19;
        puVar25[1] = uVar18;
        puVar25[2] = (int)uVar23;
        puVar25[3] = uVar14;
        *(undefined8 *)(puVar25 + 6) = 0;
        *(undefined8 *)(puVar25 + 4) = 0;
        __ptr = pvVar12;
        uVar20 = uVar22;
        puVar25 = puVar25 + 8;
      }
LAB_004d291c:
      uVar14 = uVar5;
      fVar32 = fVar30 + fVar32;
      uVar23 = uVar20;
      uVar18 = uVar14;
    }
  }
LAB_004d2920:
  if ((bVar9 || bVar1) || bVar10 && bVar11) {
    uVar28 = uVar28 + 2;
    while( true ) {
      puVar2 = (ulong *)(lVar24 + 0x70);
      if ((ulong)uVar28 < *puVar2) break;
      lVar24 = lVar24 + 0x90;
      uVar28 = uVar28 - (int)*puVar2;
      if (lVar24 == param_3 + lVar15) goto LAB_004d2930;
    }
    local_f4 = (int)uVar27;
    uVar13 = local_f4 + 2;
    while( true ) {
      puVar2 = (ulong *)(lVar29 + 0x70);
      if ((ulong)uVar13 < *puVar2) break;
      lVar29 = lVar29 + 0x90;
      uVar13 = uVar13 - (int)*puVar2;
      if (lVar29 == param_3 + lVar15) goto LAB_004d2930;
    }
    uVar27 = (ulong)uVar13;
    uVar17 = (ulong)*(uint *)(*(long *)(lVar29 + 0x68) + (ulong)uVar13 * 4);
    uVar13 = *(uint *)(*(long *)(lVar24 + 0x68) + (ulong)uVar28 * 4);
    fVar31 = *(float *)(*(long *)(lVar29 + 0x48) + uVar17 * 4);
  }
  goto LAB_004d2460;
LAB_004d2930:
  if ((uVar20 != uVar23) || (puVar26 = puVar25, uVar18 != uVar14)) {
    if (puVar25 == (undefined4 *)((long)__ptr + uVar21 * 0x20)) {
      uVar27 = uVar21 * 2;
      lVar16 = (long)puVar25 - (long)__ptr;
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      uVar17 = uVar21;
      if ((uVar21 != uVar27) &&
         (__ptr = realloc(__ptr,uVar27 << 5), uVar17 = uVar27, (long)uVar21 < (long)uVar27)) {
        pvVar12 = (void *)((long)__ptr + uVar21 * 0x20);
        pvVar4 = (void *)((long)__ptr + uVar27 * 0x20);
        if (pvVar4 <= (void *)((long)pvVar12 + 0x20U)) {
          pvVar4 = (void *)((long)pvVar12 + 0x20U);
        }
        memset(pvVar12,0,((long)pvVar4 + ~(ulong)pvVar12 & 0xffffffffffffffe0) + 0x20);
      }
      uVar21 = uVar17;
      puVar25 = (undefined4 *)((long)__ptr + lVar16);
    }
    *puVar25 = (int)uVar20;
    puVar25[1] = uVar18;
    puVar26 = puVar25 + 8;
    puVar25[2] = (int)uVar23;
    puVar25[3] = uVar14;
    *(undefined8 *)(puVar25 + 6) = 0;
    *(undefined8 *)(puVar25 + 4) = 0;
  }
  __size = (long)puVar26 - (long)__ptr;
  uVar27 = (long)__size >> 5;
  if ((uVar21 != uVar27) && (__ptr = realloc(__ptr,__size), (long)uVar21 < (long)uVar27)) {
    pvVar12 = (void *)((long)__ptr + uVar21 * 0x20);
    uVar23 = (long)__ptr + __size;
    if ((long)__ptr + __size <= (long)pvVar12 + 0x20U) {
      uVar23 = (long)pvVar12 + 0x20U;
    }
    memset(pvVar12,0,(uVar23 + ~(ulong)pvVar12 & 0xffffffffffffffe0) + 0x20);
  }
  *param_1 = __ptr;
  param_1[1] = uVar27;
  if (*(long *)(lVar6 + 0x28) == local_90) {
    return;
  }
  goto LAB_004d2a74;
  while( true ) {
    lVar16 = lVar16 + 0x90;
    uVar27 = (ulong)(uint)(local_f4 - (int)*(ulong *)(lVar29 + 0x70));
    if (lVar15 - lVar16 == 0) break;
LAB_004d2334:
    lVar29 = param_3 + lVar16;
    local_f4 = (int)uVar27;
    if (uVar27 < *(ulong *)(lVar29 + 0x70)) {
      uVar14 = 0;
      uVar23 = 0;
      uVar17 = (ulong)*(uint *)(*(long *)(lVar29 + 0x68) + uVar27 * 4);
      uVar13 = **(uint **)(lVar24 + 0x68);
      uVar18 = 0;
      uVar20 = 0;
      uVar28 = 0;
      fVar31 = *(float *)(*(long *)(lVar29 + 0x48) + uVar17 * 4);
      puVar25 = (undefined4 *)0x0;
      uVar21 = 0;
      __ptr = (void *)0x0;
      fVar32 = fVar30;
      goto LAB_004d2460;
    }
  }
LAB_004d2358:
  if (*(long *)(lVar6 + 0x28) == local_90) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
LAB_004d2a74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d2a78  FUN_004d2a78 =====

uint FUN_004d2a78(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *__dest;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  void *unaff_x21;
  ulong uVar10;
  
  uVar9 = (ulong)*(uint *)(param_1 + 3);
  if (*(uint *)(param_1 + 3) == 0) {
    lVar7 = *param_1;
    lVar5 = param_1[2];
    if (lVar5 == lVar7) {
      uVar8 = 0;
    }
    else {
      do {
        lVar4 = lVar5 + -0x90;
        uVar9 = *(ulong *)(lVar5 + -0x70);
        if (uVar9 != 0) {
          param_1[2] = lVar4;
          goto LAB_004d2aa0;
        }
        *(undefined4 *)(param_1 + 3) = 0;
        lVar5 = lVar4;
      } while (lVar4 != lVar7);
      uVar8 = 0;
      param_1[2] = lVar7;
    }
    goto LAB_004d2bf8;
  }
  lVar4 = param_1[2];
LAB_004d2aa0:
  uVar10 = *(ulong *)(lVar4 + 0x88);
  uVar8 = (int)uVar9 - 1;
  *(uint *)(param_1 + 3) = uVar8;
  if ((uVar10 == 0) || (iVar1 = *(int *)(*(long *)(lVar4 + 0x28) + (ulong)uVar8 * 4), iVar1 == 0)) {
    uVar8 = 1;
    goto LAB_004d2bf8;
  }
  if (uVar10 >> 0x3e == 0) {
    unaff_x21 = *(void **)(lVar4 + 0x80);
    __dest = (uint *)malloc(uVar10 << 2);
    if (__dest == (uint *)0x0) goto LAB_004d2b38;
    memcpy(__dest,unaff_x21,uVar10 << 2);
  }
  else {
    __dest = (uint *)0x0;
LAB_004d2b38:
    uVar10 = 0;
  }
  uVar3 = iVar1 - 1;
  if ((uVar3 < *__dest) || (__dest[uVar10 - 1] <= uVar3)) {
LAB_004d2be4:
    uVar8 = 1;
  }
  else {
    uVar9 = 0;
    do {
      while( true ) {
        uVar8 = (uint)unaff_x21;
        if (uVar10 <= uVar9) goto LAB_004d2be4;
        uVar6 = uVar10 + uVar9 >> 1;
        uVar2 = __dest[uVar6];
        if (uVar2 != uVar3) break;
        uVar8 = *(uint *)(param_1 + 3);
        do {
          uVar8 = uVar8 - 1;
          if ((uVar8 == 0xffffffff) ||
             (*(uint *)(*(long *)(param_1[2] + 0x28) + (ulong)uVar8 * 4) != __dest[uVar6])) break;
          uVar6 = uVar6 - 1;
          *(uint *)(param_1 + 3) = uVar8;
        } while (uVar6 != 0xffffffffffffffff);
        uVar6 = FUN_004d2a78(param_1);
        unaff_x21 = (void *)(uVar6 & 0xffffffff);
        uVar8 = (uint)uVar6;
        if (uVar2 == uVar3) goto LAB_004d2be8;
      }
      if (uVar2 < uVar3) {
        uVar9 = uVar6 + 1;
        uVar6 = uVar10;
      }
      uVar10 = uVar6;
    } while (uVar2 != uVar3);
  }
LAB_004d2be8:
  free(__dest);
LAB_004d2bf8:
  return uVar8 & 1;
}


// ===== 004d2c1c  FUN_004d2c1c =====

uint FUN_004d2c1c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *__dest;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  void *unaff_x21;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  
  plVar11 = (long *)param_1[2];
  uVar9 = *(uint *)(param_1 + 3);
  plVar12 = plVar11;
  if (plVar11[4] == (ulong)uVar9) {
    plVar3 = (long *)(*param_1 + param_1[1] * 0x90);
    if (plVar11 == plVar3) {
LAB_004d2cb8:
      uVar9 = 0;
      goto LAB_004d2dfc;
    }
    lVar5 = plVar11[0x16];
    plVar12 = plVar11 + 0x12;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = (long)plVar12;
    if (lVar5 == 0) {
      plVar12 = plVar11 + 0x28;
      do {
        plVar11 = plVar12;
        plVar12 = plVar11 + -0x16;
        if (plVar11[-0x12] != 0) {
          uVar9 = 0;
          goto LAB_004d2cc4;
        }
        if (plVar12 == plVar3) goto LAB_004d2cb8;
        lVar5 = *plVar11;
        param_1[2] = (long)(plVar11 + -4);
        *(undefined4 *)(param_1 + 3) = 0;
        plVar12 = plVar11 + 0x12;
      } while (lVar5 == 0);
      uVar13 = 0;
      plVar12 = plVar11 + -4;
    }
    else {
      uVar13 = 0;
    }
  }
  else {
LAB_004d2cc4:
    uVar13 = (ulong)(uVar9 + 1);
    *(uint *)(param_1 + 3) = uVar9 + 1;
  }
  uVar10 = plVar12[0x11];
  if ((uVar10 == 0) || ((ulong)plVar12[6] <= uVar13)) {
    uVar9 = 1;
    goto LAB_004d2dfc;
  }
  if (uVar10 >> 0x3e == 0) {
    unaff_x21 = (void *)plVar12[0x10];
    __dest = (uint *)malloc(uVar10 << 2);
    if (__dest == (uint *)0x0) goto LAB_004d2d20;
    memcpy(__dest,unaff_x21,uVar10 << 2);
  }
  else {
    __dest = (uint *)0x0;
LAB_004d2d20:
    uVar10 = 0;
  }
  uVar1 = *(uint *)(plVar12[5] + uVar13 * 4);
  if ((uVar1 < *__dest) || (__dest[uVar10 - 1] <= uVar1)) {
LAB_004d2df0:
    uVar9 = 1;
  }
  else {
    uVar13 = 0;
    uVar14 = uVar10;
    do {
      while( true ) {
        uVar9 = (uint)unaff_x21;
        if (uVar14 <= uVar13) goto LAB_004d2df0;
        uVar7 = uVar14 + uVar13 >> 1;
        uVar2 = __dest[uVar7];
        if (uVar2 != uVar1) break;
        uVar9 = *(uint *)(param_1 + 3);
        uVar6 = (ulong)uVar9;
        uVar4 = *(ulong *)(param_1[2] + 0x20);
        if (uVar4 != uVar6) {
          puVar8 = __dest + uVar7;
          lVar5 = 0;
          if (uVar7 <= uVar10) {
            lVar5 = uVar10 - uVar7;
          }
          do {
            uVar9 = uVar9 + 1;
            if ((lVar5 == 0) || (*(uint *)(*(long *)(param_1[2] + 0x28) + uVar6 * 4) != *puVar8))
            break;
            uVar6 = (ulong)uVar9;
            *(uint *)(param_1 + 3) = uVar9;
            puVar8 = puVar8 + 1;
            lVar5 = lVar5 + -1;
          } while (uVar4 != uVar6);
        }
        uVar7 = FUN_004d2c1c(param_1);
        unaff_x21 = (void *)(uVar7 & 0xffffffff);
        uVar9 = (uint)uVar7;
        if (uVar2 == uVar1) goto LAB_004d2df4;
      }
      if (uVar2 < uVar1) {
        uVar13 = uVar7 + 1;
        uVar7 = uVar14;
      }
      uVar14 = uVar7;
    } while (uVar2 != uVar1);
  }
LAB_004d2df4:
  free(__dest);
LAB_004d2dfc:
  return uVar9 & 1;
}


// ===== 004d2e18  rive::TextBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TextBase::clone() const */

long * __thiscall rive::TextBase::clone(TextBase *this)

{
  undefined4 uVar1;
  TextBase TVar2;
  undefined *puVar3;
  long *__s;
  void *pvVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  __s = (long *)operator_new(0x4d0);
  memset(__s,0,0x4d0);
  lVar6 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(__s + 0xc) = 0xfffe;
  lVar9 = _UNK_00281c00;
  lVar7 = _DAT_00281bf8;
  __s[6] = 0;
  __s[0x24] = lVar9;
  __s[0x23] = lVar7;
  *(undefined4 *)((long)__s + 0x134) = 3;
  *(undefined4 *)(__s + 1) = 0xffffffff;
  __s[9] = 0;
  __s[8] = 0;
  __s[0xb] = 0;
  __s[10] = 0;
  __s[0xe] = 0;
  __s[0xf] = 0;
  __s[0xd] = 0;
  __s[0x12] = 0;
  __s[0x13] = 0;
  __s[0x11] = 0;
  *(undefined4 *)(__s + 0x14) = 0x3f800000;
  *(undefined8 *)((long)__s + 0xb4) = 0;
  *(long *)((long)__s + 0xac) = lVar9;
  *(long *)((long)__s + 0xa4) = lVar7;
  __s[0x18] = lVar6;
  __s[0x1c] = 0;
  __s[0x1b] = lVar9;
  __s[0x1a] = lVar7;
  __s[0x22] = 0;
  __s[0x1f] = 0;
  __s[0x1e] = 0;
  __s[0x21] = 0;
  __s[0x20] = 0;
  __s[0x25] = 0;
  __s[0x29] = 0;
  __s[0x28] = 0;
  __s[0x2b] = 0;
  __s[0x2a] = 0;
  __s[0x2d] = 0;
  __s[0x2c] = 0;
  *(undefined1 *)(__s + 0x2e) = 1;
  *(undefined8 *)((long)__s + 0x17c) = 0;
  *(undefined8 *)((long)__s + 0x174) = 0;
  *(undefined8 *)((long)__s + 0x18c) = 0;
  *(undefined8 *)((long)__s + 0x184) = 0;
  __s[0x33] = 0;
  __s[0x32] = 0;
  puVar3 = PTR_vtable_0067d4e8;
  *(undefined4 *)((long)__s + 0x1a4) = 0xffffffff;
  *(undefined1 *)(__s + 0x34) = 1;
  __s[0x39] = 0;
  *__s = (long)(puVar3 + 0x10);
  __s[0x19] = (long)(puVar3 + 0x2e0);
  __s[0x35] = (long)(puVar3 + 0x308);
  __s[0x36] = (long)(puVar3 + 0x330);
  __s[0x38] = lVar9;
  __s[0x37] = lVar7;
  __s[0x3c] = 0;
  __s[0x3b] = lVar9;
  __s[0x3a] = lVar7;
  pvVar4 = malloc(4);
  __s[0x3e] = 0;
  __s[0x3d] = 0;
  __s[0x40] = 0;
  __s[0x3f] = 0;
  __s[0x42] = 0;
  __s[0x41] = 0;
  __s[0x44] = 0;
  __s[0x43] = 0;
  __s[0x46] = 0;
  __s[0x45] = 0;
  __s[0x48] = 0;
  __s[0x47] = 0;
  __s[0x4a] = 0;
  __s[0x49] = 0;
  __s[0x4c] = 0;
  __s[0x4b] = 0;
  __s[0x4e] = 0;
  __s[0x4d] = 0;
  __s[0x50] = 0;
  __s[0x4f] = 0;
  __s[0x52] = 0;
  __s[0x51] = 0;
  __s[0x54] = 0;
  __s[0x53] = 0;
  __s[0x5e] = 0;
  __s[0x5d] = 0;
  __s[0x58] = 0;
  __s[0x57] = 0;
  __s[0x5a] = 0;
  __s[0x59] = 0;
  __s[0x5c] = 0;
  __s[0x5b] = 0;
  __s[0x5d] = (long)pvVar4;
  if (pvVar4 != (void *)0x0) {
    __s[0x5e] = 1;
  }
  *(undefined1 *)(__s + 0x6d) = 0;
  __s[0x60] = 0;
  __s[0x5f] = 0;
  __s[0x62] = 0;
  __s[0x61] = 0;
  __s[0x65] = 0;
  __s[100] = 0;
  __s[0x67] = 0;
  __s[0x66] = 0;
  __s[0x69] = 0;
  __s[0x68] = 0;
  __s[0x6b] = 0;
  __s[0x6a] = 0;
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(__s + 0x6e),true);
  __s[0x93] = 0;
  *(undefined4 *)(__s + 0x94) = 0x3f800000;
  __s[0x95] = 0;
  __s[0x7c] = 0;
  __s[0x7b] = 0;
  __s[0x7e] = 0;
  __s[0x7d] = 0;
  __s[0x80] = 0;
  __s[0x7f] = 0;
  __s[0x82] = 0;
  __s[0x81] = 0;
  __s[0x84] = 0;
  __s[0x83] = 0;
  __s[0x86] = 0;
  __s[0x85] = 0;
  __s[0x88] = 0;
  __s[0x87] = 0;
  __s[0x8a] = 0;
  __s[0x89] = 0;
  __s[0x8c] = 0;
  __s[0x8b] = 0;
  __s[0x8e] = 0;
  __s[0x8d] = 0;
  __s[0x90] = 0;
  __s[0x8f] = 0;
  __s[0x92] = 0;
  __s[0x91] = 0;
  __s[0x7a] = 0;
  __s[0x79] = 0;
  __s[0x97] = 0;
  *(undefined2 *)(__s + 0x99) = 0xffff;
  uVar1 = *(undefined4 *)(this + 0x174);
  __s[0x96] = 0;
  *(undefined4 *)((long)__s + 0x174) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x194);
  __s[0x98] = 0x7fc000007fc00000;
  lVar7 = *(long *)(this + 0x178);
  *(undefined4 *)((long)__s + 0x194) = uVar1;
  TVar2 = this[0x1a0];
  __s[0x2f] = lVar7;
  lVar9 = *(long *)(this + 0x188);
  lVar7 = *(long *)(this + 0x180);
  *(TextBase *)(__s + 0x34) = TVar2;
  uVar1 = *(undefined4 *)(this + 0x1a4);
  __s[0x31] = lVar9;
  __s[0x30] = lVar7;
  uVar5 = *(undefined4 *)(this + 400);
  *(undefined4 *)((long)__s + 0x1a4) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x134);
  *(undefined4 *)(__s + 0x32) = uVar5;
  lVar7 = *(long *)(this + 0x198);
  *(undefined4 *)((long)__s + 0x134) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x138);
  __s[0x33] = lVar7;
  lVar7 = *(long *)(this + 0x110);
  *(undefined1 *)((long)__s + 0x4ca) = 0;
  __s[0x22] = lVar7;
  uVar8 = *(undefined8 *)(this + 0xbc);
  *(undefined4 *)(__s + 0x27) = uVar1;
  *(undefined8 *)((long)__s + 0xbc) = uVar8;
  *(undefined4 *)((long)__s + 0xc4) = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(__s + 0x14) = *(undefined4 *)(this + 0xa0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (__s + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(__s + 5) = *(undefined4 *)(this + 0x28);
  return __s;
}


// ===== 004d3070  FUN_004d3070 =====

void FUN_004d3070(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d3074);
  (*pcVar1)();
}


// ===== 004d3074  FUN_004d3074 =====

void FUN_004d3074(void)

{
  return;
}


// ===== 004d3078  FUN_004d3078 =====

void FUN_004d3078(void)

{
  return;
}


// ===== 004d307c  FUN_004d307c =====

void FUN_004d307c(void)

{
  return;
}


// ===== 004d3080  FUN_004d3080 =====

void FUN_004d3080(void)

{
  return;
}


// ===== 004d3084  FUN_004d3084 =====

void FUN_004d3084(void)

{
  return;
}


// ===== 004d3088  FUN_004d3088 =====

void FUN_004d3088(void)

{
  return;
}


// ===== 004d308c  FUN_004d308c =====

void FUN_004d308c(void)

{
  return;
}


// ===== 004d3090  FUN_004d3090 =====

void FUN_004d3090(void)

{
  return;
}


// ===== 004d3094  FUN_004d3094 =====

void FUN_004d3094(void)

{
  return;
}


// ===== 004d3098  rive::OrderedLine::OrderedLine =====

/* rive::OrderedLine::OrderedLine(rive::Paragraph const&, rive::GlyphLine const&, float, bool, bool,
   rive::GlyphRun*, float) */

void __thiscall
rive::OrderedLine::OrderedLine
          (OrderedLine *this,Paragraph *param_1,GlyphLine *param_2,float param_3,bool param_4,
          bool param_5,GlyphRun *param_6,float param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
  byte bVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  byte bVar18;
  uint uVar19;
  long *plVar20;
  ulong uVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(GlyphLine **)(this + 0x30) = param_2;
  *(float *)(this + 0x38) = param_7;
  local_70 = (long *)0x0;
  if ((param_4) &&
     (uVar8 = buildEllipsisRuns(this,(vector *)&local_80,param_1,param_2,param_3,param_5,param_6),
     (uVar8 & 1) != 0)) {
    plVar16 = local_78;
    if (local_80 == local_78) goto LAB_004d349c;
  }
  else {
    iVar26 = *(int *)(param_2 + 8);
    uVar8 = (ulong)*(uint *)param_2;
    if (*(uint *)param_2 < iVar26 + 1U) {
      do {
        plVar12 = local_78;
        plVar16 = local_80;
        lVar24 = *(long *)param_1 + uVar8 * 0x90;
        if (local_78 < local_70) {
          *local_78 = lVar24;
          plVar23 = local_78;
        }
        else {
          lVar25 = (long)local_78 - (long)local_80;
          uVar21 = (lVar25 >> 3) + 1;
          if (uVar21 >> 0x3d != 0) {
            FUN_004d3f7c();
LAB_004d34ec:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar17 = (long)local_70 - (long)local_80 >> 2;
          if (uVar17 <= uVar21) {
            uVar17 = uVar21;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
            uVar17 = 0x1fffffffffffffff;
          }
          if (uVar17 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar17 >> 0x3d != 0) goto LAB_004d34ec;
            pvVar9 = operator_new(uVar17 << 3);
          }
          plVar23 = (long *)((long)pvVar9 + (lVar25 >> 3) * 8);
          *plVar23 = lVar24;
          plVar10 = plVar23;
          plVar20 = plVar12;
          if ((long)plVar12 - (long)plVar16 != 0) {
            uVar21 = ((long)plVar12 - (long)plVar16) - 8;
            if ((((0x147 < uVar21) &&
                 (uVar14 = (long)pvVar9 + lVar25 + -8,
                 uVar14 - (uVar21 & 0xfffffffffffffff8) <= uVar14)) &&
                ((long *)((long)(plVar12 + -1) - (uVar21 & 0xfffffffffffffff8)) <= plVar12 + -1)) &&
               (0x1f < (ulong)((long)plVar12 + (-lVar25 - (long)pvVar9)))) {
              plVar10 = plVar23 + -2;
              plVar20 = plVar12 + -2;
              uVar21 = (uVar21 >> 3) + 1;
              uVar15 = uVar21 & 0x3ffffffffffffffc;
              plVar12 = plVar12 + -uVar15;
              uVar14 = uVar15;
              do {
                plVar5 = plVar20 + -1;
                lVar27 = plVar20[-2];
                lVar25 = plVar20[1];
                lVar24 = *plVar20;
                uVar14 = uVar14 - 4;
                plVar20 = plVar20 + -4;
                plVar10[-1] = *plVar5;
                plVar10[-2] = lVar27;
                plVar10[1] = lVar25;
                *plVar10 = lVar24;
                plVar10 = plVar10 + -4;
              } while (uVar14 != 0);
              plVar10 = plVar23 + -uVar15;
              plVar20 = plVar16;
              if (uVar21 == uVar15) goto LAB_004d3220;
            }
            do {
              plVar12 = plVar12 + -1;
              plVar10 = plVar10 + -1;
              *plVar10 = *plVar12;
              plVar20 = local_80;
            } while (plVar12 != plVar16);
          }
LAB_004d3220:
          local_70 = (long *)((long)pvVar9 + uVar17 * 8);
          local_80 = plVar10;
          if (plVar20 != (long *)0x0) {
            operator_delete(plVar20);
            iVar26 = *(int *)(param_2 + 8);
          }
        }
        local_78 = plVar23 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < iVar26 + 1);
    }
    plVar16 = local_78;
    if (local_80 == local_78) goto LAB_004d349c;
    *(long *)this = *local_80;
    *(long *)(this + 8) = local_78[-1];
    if (local_80 == local_78) goto LAB_004d349c;
  }
  uVar8 = ((long)local_78 - (long)local_80) - 8;
  if (uVar8 < 8) {
    bVar18 = 0;
    plVar16 = local_80;
LAB_004d3398:
    do {
      plVar12 = plVar16 + 1;
      bVar11 = *(byte *)(*plVar16 + 0x7a);
      if (*(byte *)(*plVar16 + 0x7a) <= bVar18) {
        bVar11 = bVar18;
      }
      bVar18 = bVar11;
      plVar16 = plVar12;
    } while (plVar12 != local_78);
  }
  else {
    bVar18 = 0;
    plVar16 = local_80 + 1;
    uVar8 = (uVar8 >> 3) + 1;
    uVar17 = uVar8 & 0x3ffffffffffffffe;
    uVar21 = uVar17;
    bVar11 = 0;
    do {
      plVar12 = plVar16 + -1;
      lVar24 = *plVar16;
      plVar16 = plVar16 + 2;
      bVar7 = *(byte *)(*plVar12 + 0x7a);
      if (*(byte *)(*plVar12 + 0x7a) <= bVar18) {
        bVar7 = bVar18;
      }
      bVar18 = bVar7;
      bVar7 = *(byte *)(lVar24 + 0x7a);
      if (*(byte *)(lVar24 + 0x7a) <= bVar11) {
        bVar7 = bVar11;
      }
      uVar21 = uVar21 - 2;
      bVar11 = bVar7;
    } while (uVar21 != 0);
    if (bVar18 <= bVar7) {
      bVar18 = bVar7;
    }
    if (uVar8 != uVar17) {
      plVar16 = local_80 + uVar17;
      goto LAB_004d3398;
    }
  }
  plVar16 = local_80;
  if (bVar18 != 0) {
    uVar8 = (ulong)((long)local_78 - (long)local_80) >> 3;
    do {
      uVar13 = (uint)uVar8;
      uVar21 = uVar8 & 0xffffffff;
      while (0 < (int)uVar13) {
        uVar19 = (uint)uVar21;
        uVar13 = uVar19 - 1;
        uVar21 = (ulong)uVar13;
        if (bVar18 <= *(byte *)(local_80[uVar21] + 0x7a)) {
          if (uVar19 < 2) break;
          uVar22 = 0;
          if (0 < (int)uVar13) {
            uVar13 = 1;
          }
          uVar19 = uVar19 - uVar13;
          uVar3 = uVar13 - 1;
          do {
            uVar22 = uVar22 + 1;
            uVar13 = (uint)uVar21;
            uVar6 = uVar22;
            if (*(byte *)(local_80[(uint)uVar21 - 1] + 0x7a) < bVar18) break;
            uVar21 = uVar21 - 1;
            uVar13 = uVar3;
            uVar6 = uVar19 + 1;
          } while (uVar19 != uVar22);
          if (1 < uVar6) {
            uVar21 = (ulong)(uVar6 >> 1);
            plVar12 = local_80 + uVar13;
            plVar23 = local_80 + (ulong)uVar6 + ((ulong)uVar13 - 1);
            do {
              lVar24 = *plVar12;
              uVar21 = uVar21 - 1;
              *plVar12 = *plVar23;
              *plVar23 = lVar24;
              plVar12 = plVar12 + 1;
              plVar23 = plVar23 + -1;
            } while (uVar21 != 0);
          }
        }
        uVar21 = (ulong)uVar13;
      }
      bVar18 = bVar18 - 1;
    } while (bVar18 != 0);
  }
LAB_004d349c:
  pvVar9 = *(void **)(this + 0x18);
  if (pvVar9 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar9;
    operator_delete(pvVar9);
  }
  *(long **)(this + 0x18) = plVar16;
  *(long **)(this + 0x20) = local_78;
  *(long **)(this + 0x28) = local_70;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d34f4  rive::OrderedLine::buildEllipsisRuns =====

/* rive::OrderedLine::buildEllipsisRuns(std::__ndk1::vector<rive::GlyphRun const*,
   std::__ndk1::allocator<rive::GlyphRun const*> >&, rive::Paragraph const&, rive::GlyphLine const&,
   float, bool, rive::GlyphRun*) */

void __thiscall
rive::OrderedLine::buildEllipsisRuns
          (OrderedLine *this,vector *param_1,Paragraph *param_2,GlyphLine *param_3,float param_4,
          bool param_5,GlyphRun *param_6)

{
  GlyphRun *pGVar1;
  long lVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  float *pfVar26;
  long *plVar27;
  uint *puVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  uint *puVar32;
  long *plVar33;
  long *plVar34;
  uint *puVar35;
  byte *pbVar36;
  byte *pbVar37;
  long *plVar38;
  undefined8 *puVar39;
  uint *puVar40;
  long lVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  long *local_160;
  long local_158;
  long *local_150 [3];
  void *local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  void *local_108;
  ulong uStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  void *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  float local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  if (!param_5) {
LAB_004d35c8:
    puVar28 = (uint *)0x0;
    puVar40 = (uint *)0x0;
    uVar29 = 0x2e;
    puVar32 = (uint *)0x0;
    puVar9 = (uint *)0x0;
    pbVar37 = &UNK_00244d48;
    do {
      while ((uVar29 >> 7 == 0 || ((uVar29 >> 6 & 1) == 0))) {
        pbVar36 = pbVar37 + 1;
        if (puVar9 < puVar40) goto LAB_004d35f4;
LAB_004d366c:
        lVar16 = (long)puVar9 - (long)puVar32;
        uVar15 = (lVar16 >> 2) + 1;
        if (uVar15 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003b1ebc();
        }
        uVar17 = (long)puVar40 - (long)puVar32 >> 1;
        if (uVar17 <= uVar15) {
          uVar17 = uVar15;
        }
        if (0x7ffffffffffffffb < (ulong)((long)puVar40 - (long)puVar32)) {
          uVar17 = 0x3fffffffffffffff;
        }
        if (uVar17 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar17 >> 0x3e != 0) goto LAB_004d3f70;
          pvVar7 = operator_new(uVar17 << 2);
        }
        puVar28 = (uint *)((long)pvVar7 + (lVar16 >> 2) * 4);
        puVar35 = puVar28 + 1;
        *puVar28 = uVar29;
        if ((long)puVar9 - (long)puVar32 != 0) {
          uVar15 = ((long)puVar9 - (long)puVar32) - 4;
          if ((((0xab < uVar15) &&
               (uVar13 = (long)pvVar7 + lVar16 + -4,
               uVar13 - (uVar15 & 0xfffffffffffffffc) <= uVar13)) &&
              ((uint *)((long)(puVar9 + -1) - (uVar15 & 0xfffffffffffffffc)) <= puVar9 + -1)) &&
             (0x1f < (ulong)((long)puVar9 + (-lVar16 - (long)pvVar7)))) {
            puVar40 = puVar28 + -4;
            puVar20 = puVar9 + -4;
            uVar15 = (uVar15 >> 2) + 1;
            uVar18 = uVar15 & 0x7ffffffffffffff8;
            puVar9 = puVar9 + -uVar18;
            uVar13 = uVar18;
            do {
              puVar3 = puVar20 + -2;
              uVar46 = *(undefined8 *)(puVar20 + -4);
              uVar44 = *(undefined8 *)(puVar20 + 2);
              uVar6 = *(undefined8 *)puVar20;
              uVar13 = uVar13 - 8;
              puVar20 = puVar20 + -8;
              *(undefined8 *)(puVar40 + -2) = *(undefined8 *)puVar3;
              *(undefined8 *)(puVar40 + -4) = uVar46;
              *(undefined8 *)(puVar40 + 2) = uVar44;
              *(undefined8 *)puVar40 = uVar6;
              puVar40 = puVar40 + -8;
            } while (uVar13 != 0);
            puVar28 = puVar28 + -uVar18;
            if (uVar15 == uVar18) goto LAB_004d36ec;
          }
          do {
            puVar9 = puVar9 + -1;
            puVar28 = puVar28 + -1;
            *puVar28 = *puVar9;
          } while (puVar9 != puVar32);
        }
LAB_004d36ec:
        puVar40 = (uint *)((long)pvVar7 + uVar17 * 4);
        if (puVar32 != (uint *)0x0) {
          operator_delete(puVar32);
        }
        uVar29 = (uint)*pbVar36;
        puVar32 = puVar28;
        puVar9 = puVar35;
        pbVar37 = pbVar36;
        if (uVar29 == 0) goto LAB_004d37ac;
      }
      lVar16 = 0;
      uVar8 = uVar29;
      do {
        lVar41 = lVar16;
        lVar16 = lVar41 + 1;
        uVar23 = uVar8 >> 5;
        uVar8 = uVar8 << 1;
      } while ((uVar23 & 1) != 0);
      uVar8 = (uint)lVar16;
      lVar16 = 0;
      pbVar36 = pbVar37 + lVar41 + 2;
      uVar29 = 0x7fU >> (ulong)(uVar8 & 0x1f) & uVar29;
      do {
        lVar41 = lVar16 + 1;
        lVar16 = lVar16 + 1;
        uVar29 = pbVar37[lVar41] & 0x3f | uVar29 << 6;
      } while (uVar8 != (uint)lVar16);
      if (puVar40 <= puVar9) goto LAB_004d366c;
LAB_004d35f4:
      puVar35 = puVar9 + 1;
      *puVar9 = uVar29;
      uVar29 = (uint)*pbVar36;
      puVar9 = puVar35;
      pbVar37 = pbVar36;
    } while (*pbVar36 != 0);
LAB_004d37ac:
    local_150[0] = (long *)0x0;
    local_108 = malloc(4);
    uStack_130 = 0;
    local_138 = (void *)0x0;
    uStack_120 = 0;
    local_128 = (void *)0x0;
    uStack_110 = 0;
    local_118 = (void *)0x0;
    uStack_100 = (ulong)(local_108 != (void *)0x0);
    plVar33 = (long *)0x0;
    local_d0 = (void *)0x0;
    uStack_c8 = 0;
    uVar29 = *(uint *)(param_3 + 8);
    uVar15 = (ulong)*(uint *)param_3;
    uStack_f0 = 0;
    local_f8 = (void *)0x0;
    uStack_e0 = 0;
    local_e8 = (void *)0x0;
    if (*(uint *)param_3 < uVar29 + 1) {
      uVar8 = *(uint *)(param_3 + 4);
      plVar33 = (long *)0x0;
      lVar16 = (long)puVar35 - (long)puVar28 >> 2;
      bVar4 = false;
      fVar43 = 0.0;
      fVar47 = 0.0;
      fVar42 = 0.0;
LAB_004d3830:
      lVar41 = *(long *)param_2;
      puVar31 = (undefined8 *)(lVar41 + uVar15 * 0x90);
      plVar34 = (long *)*puVar31;
      if ((plVar34 == plVar33) ||
         (pfVar26 = (float *)(lVar41 + uVar15 * 0x90 + 8), *pfVar26 == fVar42)) {
        if (uVar15 == uVar29) goto LAB_004d3920;
LAB_004d3a50:
        uVar29 = *(uint *)(lVar41 + uVar15 * 0x90 + 0x20);
      }
      else {
        if (plVar34 != (long *)0x0) {
          FUN_00340fb0(1,plVar34 + 1);
        }
        if ((plVar33 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,plVar33 + 1), iVar5 == 1))
        {
          (**(code **)(*plVar33 + 8))(plVar33);
        }
        fVar42 = *pfVar26;
        if (plVar34 != (long *)0x0) {
          FUN_00340fb0(1,plVar34 + 1);
        }
        lVar10 = lVar41 + uVar15 * 0x90;
        local_ac = (undefined4)lVar16;
        uStack_a8 = 0;
        local_a2 = 0;
        local_b4 = *(undefined8 *)(lVar10 + 0xc);
        local_a4 = *(undefined2 *)(lVar10 + 0x78);
        local_c0 = plVar34;
        local_b8 = fVar42;
        Font::shapeText((Font *)&local_160,plVar34,puVar28,lVar16,&local_c0,1,0xffffffff);
        uVar17 = *(ulong *)(*local_160 + 0x20);
        if (uVar17 == 0) {
          fVar48 = 0.0;
        }
        else {
          fVar48 = 0.0;
          lVar10 = *(long *)(*local_160 + 0x38);
          if (uVar17 < 8) {
            uVar18 = 0;
          }
          else {
            uVar18 = uVar17 & 0xfffffffffffffff8;
            puVar30 = (undefined8 *)(lVar10 + 0x10);
            uVar13 = uVar18;
            do {
              uVar13 = uVar13 - 8;
              fVar48 = fVar48 + (float)puVar30[-2] + (float)((ulong)puVar30[-2] >> 0x20) +
                       (float)puVar30[-1] + (float)((ulong)puVar30[-1] >> 0x20) + (float)*puVar30 +
                       (float)((ulong)*puVar30 >> 0x20) + (float)puVar30[1] +
                       (float)((ulong)puVar30[1] >> 0x20);
              puVar30 = puVar30 + 4;
            } while (uVar13 != 0);
            if (uVar17 == uVar18) goto LAB_004d39ac;
          }
          lVar11 = uVar17 - uVar18;
          pfVar26 = (float *)(lVar10 + uVar18 * 4);
          do {
            lVar11 = lVar11 + -1;
            fVar48 = fVar48 + *pfVar26;
            pfVar26 = pfVar26 + 1;
          } while (lVar11 != 0);
        }
LAB_004d39ac:
        if ((local_150[0] == (long *)0x0) || (fVar43 + fVar48 <= param_4)) {
          FUN_004c4d64(local_150);
          fVar47 = fVar48;
        }
        if (0 < local_158) {
          plVar27 = local_160 + local_158 * 3;
          plVar33 = local_160;
          do {
            FUN_004c53c0(*plVar33,*plVar33 + plVar33[1] * 0x90);
            plVar38 = plVar33 + 3;
            free((void *)*plVar33);
            plVar33 = plVar38;
          } while (plVar38 < plVar27);
        }
        free(local_160);
        plVar33 = local_c0;
        if ((local_c0 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,local_c0 + 1), iVar5 == 1)
           ) {
          (**(code **)(*plVar33 + 8))(plVar33);
        }
        plVar33 = plVar34;
        if (uVar15 != *(uint *)(param_3 + 8)) goto LAB_004d3a50;
LAB_004d3920:
        uVar29 = *(uint *)(param_3 + 0xc);
      }
      if (uVar8 != uVar29) {
        fVar48 = fVar43;
        do {
          fVar43 = fVar48 + *(float *)(*(long *)(lVar41 + uVar15 * 0x90 + 0x38) + (ulong)uVar8 * 4);
          fVar45 = fVar47 + fVar43;
          if (fVar45 != param_4 && fVar45 < param_4 == (NAN(fVar45) || NAN(param_4))) {
            *(uint *)(this + 0x14) = uVar8;
            bVar4 = true;
            fVar43 = fVar48;
            break;
          }
          uVar8 = uVar8 + 1;
          fVar48 = fVar43;
        } while (uVar29 != uVar8);
      }
      puVar30 = *(undefined8 **)(param_1 + 8);
      if (puVar30 < *(undefined8 **)(param_1 + 0x10)) {
        puVar25 = puVar30 + 1;
        *puVar30 = puVar31;
      }
      else {
        puVar39 = *(undefined8 **)param_1;
        lVar41 = (long)puVar30 - (long)puVar39 >> 3;
        uVar17 = lVar41 + 1;
        if (uVar17 >> 0x3d != 0) goto LAB_004d3f74;
        uVar18 = (long)*(undefined8 **)(param_1 + 0x10) - (long)puVar39;
        uVar13 = (long)uVar18 >> 2;
        if (uVar13 <= uVar17) {
          uVar13 = uVar17;
        }
        if (0x7ffffffffffffff7 < uVar18) {
          uVar13 = 0x1fffffffffffffff;
        }
        if (uVar13 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar13 >> 0x3d != 0) goto LAB_004d3f70;
          pvVar7 = operator_new(uVar13 << 3);
        }
        puVar12 = (undefined8 *)((long)pvVar7 + lVar41 * 8);
        puVar25 = puVar12 + 1;
        *puVar12 = puVar31;
        if ((long)puVar30 - (long)puVar39 != 0) {
          uVar17 = ((long)puVar30 - (long)puVar39) - 8;
          puVar24 = puVar30;
          if ((0x37 < uVar17) &&
             (0x1f < (ulong)((long)puVar30 + (-((long)puVar30 - (long)puVar39) - (long)pvVar7)))) {
            puVar21 = puVar12 + -2;
            puVar22 = puVar30 + -2;
            uVar17 = (uVar17 >> 3) + 1;
            uVar19 = uVar17 & 0x3ffffffffffffffc;
            puVar24 = puVar30 + -uVar19;
            uVar18 = uVar19;
            do {
              puVar30 = puVar22 + -1;
              uVar46 = puVar22[-2];
              uVar44 = puVar22[1];
              uVar6 = *puVar22;
              uVar18 = uVar18 - 4;
              puVar22 = puVar22 + -4;
              puVar21[-1] = *puVar30;
              puVar21[-2] = uVar46;
              puVar21[1] = uVar44;
              *puVar21 = uVar6;
              puVar21 = puVar21 + -4;
            } while (uVar18 != 0);
            puVar12 = puVar12 + -uVar19;
            puVar30 = puVar39;
            if (uVar17 == uVar19) goto LAB_004d3bac;
          }
          do {
            puVar24 = puVar24 + -1;
            puVar12 = puVar12 + -1;
            *puVar12 = *puVar24;
          } while (puVar24 != puVar39);
          puVar30 = *(undefined8 **)param_1;
        }
LAB_004d3bac:
        *(undefined8 **)param_1 = puVar12;
        *(undefined8 **)(param_1 + 8) = puVar25;
        *(void **)(param_1 + 0x10) = (void *)((long)pvVar7 + uVar13 * 8);
        if (puVar30 != (undefined8 *)0x0) {
          operator_delete(puVar30);
        }
      }
      *(undefined8 **)(param_1 + 8) = puVar25;
      *(undefined8 **)(this + 8) = puVar31;
      if (!(bool)(bVar4 & local_150[0] != (long *)0x0)) goto code_r0x004d3bf4;
      uVar6 = FUN_004c4d64(param_6,local_150);
      puVar31 = *(undefined8 **)(param_1 + 8);
      if (puVar31 < *(undefined8 **)(param_1 + 0x10)) goto LAB_004d3cb8;
      puVar30 = *(undefined8 **)param_1;
      lVar16 = (long)puVar31 - (long)puVar30 >> 3;
      uVar15 = lVar16 + 1;
      if (uVar15 >> 0x3d != 0) goto LAB_004d3f74;
      uVar13 = (long)*(undefined8 **)(param_1 + 0x10) - (long)puVar30;
      uVar17 = (long)uVar13 >> 2;
      if (uVar17 <= uVar15) {
        uVar17 = uVar15;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar17 = 0x1fffffffffffffff;
      }
      if (uVar17 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        if (uVar17 >> 0x3d != 0) goto LAB_004d3f70;
        pvVar7 = operator_new(uVar17 << 3);
      }
      puVar39 = (undefined8 *)((long)pvVar7 + lVar16 * 8);
      pvVar14 = (void *)((long)pvVar7 + uVar17 * 8);
      puVar25 = puVar39 + 1;
      *puVar39 = param_6;
      puVar12 = puVar31;
      if ((long)puVar31 - (long)puVar30 != 0) {
        uVar15 = ((long)puVar31 - (long)puVar30) - 8;
        if ((0x37 < uVar15) &&
           (0x1f < (ulong)((long)puVar31 + (-((long)puVar31 - (long)puVar30) - (long)pvVar7)))) {
          puVar12 = puVar39 + -2;
          puVar24 = puVar31 + -2;
          uVar15 = (uVar15 >> 3) + 1;
          uVar13 = uVar15 & 0x3ffffffffffffffc;
          puVar31 = puVar31 + -uVar13;
          uVar17 = uVar13;
          do {
            puVar21 = puVar24 + -1;
            uVar46 = puVar24[-2];
            uVar44 = puVar24[1];
            uVar6 = *puVar24;
            uVar17 = uVar17 - 4;
            puVar24 = puVar24 + -4;
            puVar12[-1] = *puVar21;
            puVar12[-2] = uVar46;
            puVar12[1] = uVar44;
            *puVar12 = uVar6;
            puVar12 = puVar12 + -4;
          } while (uVar17 != 0);
          puVar39 = puVar39 + -uVar13;
          puVar12 = puVar30;
          if (uVar15 == uVar13) goto LAB_004d3e58;
        }
        do {
          puVar31 = puVar31 + -1;
          puVar39 = puVar39 + -1;
          *puVar39 = *puVar31;
        } while (puVar31 != puVar30);
        goto LAB_004d3e4c;
      }
      goto LAB_004d3e58;
    }
    goto LAB_004d3e74;
  }
  uVar15 = (ulong)*(uint *)param_3;
  uVar29 = *(uint *)(param_3 + 8) + 1;
  if (*(uint *)param_3 < uVar29) {
    fVar42 = 0.0;
    uVar8 = *(uint *)(param_3 + 4);
    do {
      uVar23 = *(uint *)(param_3 + 0xc);
      if (uVar15 != *(uint *)(param_3 + 8)) {
        uVar23 = *(uint *)(*(long *)param_2 + uVar15 * 0x90 + 0x20);
      }
      if (uVar8 != uVar23) {
        do {
          fVar42 = fVar42 + *(float *)(*(long *)(*(long *)param_2 + uVar15 * 0x90 + 0x38) +
                                      (ulong)uVar8 * 4);
          if (fVar42 != param_4 && fVar42 < param_4 == (NAN(fVar42) || NAN(param_4)))
          goto LAB_004d35c8;
          uVar8 = uVar8 + 1;
        } while (uVar23 != uVar8);
      }
      uVar15 = uVar15 + 1;
      uVar8 = 0;
      uVar6 = 0;
    } while (uVar15 != uVar29);
  }
  else {
    uVar6 = 0;
  }
  goto LAB_004d3f30;
code_r0x004d3bf4:
  uVar29 = *(uint *)(param_3 + 8);
  uVar15 = uVar15 + 1;
  uVar8 = 0;
  if (uVar29 + 1 <= uVar15) goto code_r0x004d3c10;
  goto LAB_004d3830;
code_r0x004d3c10:
  if (!bVar4 && local_150[0] != (long *)0x0) {
    uVar6 = FUN_004c4d64(param_6,local_150);
    puVar31 = *(undefined8 **)(param_1 + 8);
    if (puVar31 < *(undefined8 **)(param_1 + 0x10)) {
LAB_004d3cb8:
      puVar25 = puVar31 + 1;
      *puVar31 = uVar6;
    }
    else {
      puVar30 = *(undefined8 **)param_1;
      lVar16 = (long)puVar31 - (long)puVar30 >> 3;
      uVar15 = lVar16 + 1;
      if (uVar15 >> 0x3d != 0) {
LAB_004d3f74:
        uVar6 = FUN_004d3f7c();
        goto LAB_004d3f78;
      }
      uVar13 = (long)*(undefined8 **)(param_1 + 0x10) - (long)puVar30;
      uVar17 = (long)uVar13 >> 2;
      if (uVar17 <= uVar15) {
        uVar17 = uVar15;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar17 = 0x1fffffffffffffff;
      }
      if (uVar17 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        if (uVar17 >> 0x3d != 0) {
LAB_004d3f70:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        pvVar7 = operator_new(uVar17 << 3);
      }
      puVar39 = (undefined8 *)((long)pvVar7 + lVar16 * 8);
      pvVar14 = (void *)((long)pvVar7 + uVar17 * 8);
      puVar25 = puVar39 + 1;
      *puVar39 = param_6;
      puVar12 = puVar31;
      if ((long)puVar31 - (long)puVar30 != 0) {
        uVar15 = ((long)puVar31 - (long)puVar30) - 8;
        if ((0x37 < uVar15) &&
           (0x1f < (ulong)((long)puVar31 + (-((long)puVar31 - (long)puVar30) - (long)pvVar7)))) {
          puVar12 = puVar39 + -2;
          puVar24 = puVar31 + -2;
          uVar15 = (uVar15 >> 3) + 1;
          uVar13 = uVar15 & 0x3ffffffffffffffc;
          puVar31 = puVar31 + -uVar13;
          uVar17 = uVar13;
          do {
            puVar21 = puVar24 + -1;
            uVar46 = puVar24[-2];
            uVar44 = puVar24[1];
            uVar6 = *puVar24;
            uVar17 = uVar17 - 4;
            puVar24 = puVar24 + -4;
            puVar12[-1] = *puVar21;
            puVar12[-2] = uVar46;
            puVar12[1] = uVar44;
            *puVar12 = uVar6;
            puVar12 = puVar12 + -4;
          } while (uVar17 != 0);
          puVar39 = puVar39 + -uVar13;
          puVar12 = puVar30;
          if (uVar15 == uVar13) goto LAB_004d3e58;
        }
        do {
          puVar31 = puVar31 + -1;
          puVar39 = puVar39 + -1;
          *puVar39 = *puVar31;
        } while (puVar31 != puVar30);
LAB_004d3e4c:
        puVar12 = *(undefined8 **)param_1;
      }
LAB_004d3e58:
      *(undefined8 **)param_1 = puVar39;
      *(undefined8 **)(param_1 + 8) = puVar25;
      *(void **)(param_1 + 0x10) = pvVar14;
      if (puVar12 != (undefined8 *)0x0) {
        operator_delete(puVar12);
      }
    }
    *(undefined8 **)(param_1 + 8) = puVar25;
  }
LAB_004d3e74:
  pGVar1 = (GlyphRun *)0x0;
  if ((GlyphRun *)**(undefined8 **)param_1 != param_6) {
    pGVar1 = (GlyphRun *)**(undefined8 **)param_1;
  }
  *(GlyphRun **)this = pGVar1;
  free(local_d0);
  free(local_e8);
  free(local_f8);
  free(local_108);
  free(local_118);
  free(local_128);
  free(local_138);
  plVar34 = local_150[0];
  if ((local_150[0] != (long *)0x0) &&
     (iVar5 = FUN_00340fe0(0xffffffff,local_150[0] + 1), iVar5 == 1)) {
    (**(code **)(*plVar34 + 8))(plVar34);
  }
  if ((plVar33 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,plVar33 + 1), iVar5 == 1)) {
    (**(code **)(*plVar33 + 8))(plVar33);
  }
  if (puVar28 != (uint *)0x0) {
    operator_delete(puVar28);
  }
  uVar6 = 1;
LAB_004d3f30:
  if (*(long *)(lVar2 + 0x28) == local_a0) {
    return;
  }
LAB_004d3f78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 004d3f7c  FUN_004d3f7c =====

void FUN_004d3f7c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004d3f90  rive::OrderedLine::firstCodePointIndex =====

/* rive::OrderedLine::firstCodePointIndex(rive::GlyphLookup const&) const */

uint __thiscall rive::OrderedLine::firstCodePointIndex(OrderedLine *this,GlyphLookup *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  
  lVar1 = **(long **)(this + 0x18);
  bVar2 = *(byte *)(lVar1 + 0x7a);
  if ((bVar2 & 1) == 0) {
    lVar8 = *(long *)this;
    lVar4 = *(long *)(this + 8);
    uVar5 = *(uint *)(this + 0x10);
    uVar7 = uVar5;
    if (lVar8 != lVar1) {
      uVar7 = 0;
    }
  }
  else {
    lVar4 = *(long *)(this + 8);
    if (lVar4 == lVar1) {
      iVar6 = *(int *)(this + 0x14);
    }
    else {
      iVar6 = *(int *)(lVar1 + 0x20);
    }
    lVar8 = *(long *)this;
    uVar5 = *(uint *)(this + 0x10);
    uVar7 = iVar6 - 1;
  }
  plVar9 = *(long **)(this + 0x18) + 1;
  if ((bVar2 & 1) != 0) goto LAB_004d4000;
  do {
    uVar3 = *(uint *)(this + 0x14);
    if (lVar4 != lVar1) {
      uVar3 = *(uint *)(lVar1 + 0x20);
    }
    while( true ) {
      if ((uVar7 != uVar3) || (lVar1 == *(long *)(*(long *)(this + 0x20) + -8))) {
        uVar7 = *(uint *)(*(long *)(lVar1 + 0x28) + (ulong)uVar7 * 4);
        if ((bVar2 & 1) == 0) {
          lVar1 = *(long *)param_1;
          lVar4 = *(long *)(param_1 + 8);
          uVar3 = (uint)((ulong)(lVar4 - lVar1) >> 2);
          uVar5 = uVar7;
          goto LAB_004d40d0;
        }
        lVar1 = *(long *)param_1;
        lVar4 = *(long *)(param_1 + 8);
        uVar5 = uVar7 + 1;
        uVar3 = (uint)((ulong)(lVar4 - lVar1) >> 2);
        if (uVar3 <= uVar5) goto LAB_004d40d0;
        lVar8 = 0;
        iVar6 = uVar3 - uVar7;
        goto LAB_004d40ac;
      }
      lVar1 = *plVar9;
      bVar2 = *(byte *)(lVar1 + 0x7a);
      if ((bVar2 & 1) == 0) {
        uVar7 = uVar5;
        if (lVar8 != lVar1) {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = *(uint *)(this + 0x14);
        if (lVar4 != lVar1) {
          uVar7 = *(uint *)(lVar1 + 0x20);
        }
        uVar7 = uVar7 - 1;
      }
      plVar9 = plVar9 + 1;
      if ((bVar2 & 1) == 0) break;
LAB_004d4000:
      uVar3 = uVar5 - 1;
      if (lVar8 != lVar1) {
        uVar3 = 0xffffffff;
      }
    }
  } while( true );
  while (lVar8 = lVar8 + 1, ((ulong)(lVar4 - lVar1) >> 2 & 0xffffffff) - (ulong)uVar5 != lVar8) {
LAB_004d40ac:
    if (*(int *)(lVar1 + (ulong)uVar5 * 4 + lVar8 * 4) != *(int *)(lVar1 + (ulong)uVar7 * 4)) {
      iVar6 = (int)lVar8 + 1;
      break;
    }
  }
  uVar5 = iVar6 + uVar7;
LAB_004d40d0:
  uVar3 = uVar3 - 2;
  if (lVar4 == lVar1) {
    uVar3 = 0xffffffff;
  }
  if (uVar5 <= uVar3) {
    uVar3 = uVar5;
  }
  return uVar3;
}


// ===== 004d40e8  rive::OrderedLine::lastCodePointIndex =====

/* rive::OrderedLine::lastCodePointIndex(rive::GlyphLookup const&) const */

uint __thiscall rive::OrderedLine::lastCodePointIndex(OrderedLine *this,GlyphLookup *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  
  plVar18 = *(long **)(this + 0x18);
  lVar10 = *plVar18;
  bVar2 = *(byte *)(lVar10 + 0x7a);
  if ((bVar2 & 1) == 0) {
    lVar16 = *(long *)this;
    lVar8 = *(long *)(this + 8);
    uVar13 = *(uint *)(this + 0x10);
    uVar19 = uVar13;
    if (lVar16 != lVar10) {
      uVar19 = 0;
    }
  }
  else {
    lVar8 = *(long *)(this + 8);
    if (lVar8 == lVar10) {
      iVar14 = *(int *)(this + 0x14);
    }
    else {
      iVar14 = *(int *)(lVar10 + 0x20);
    }
    lVar16 = *(long *)this;
    uVar13 = *(uint *)(this + 0x10);
    uVar19 = iVar14 - 1;
  }
  uVar9 = *(uint *)(this + 0x14);
  plVar15 = *(long **)(this + 0x20);
  uVar3 = uVar13 - 1;
  plVar17 = plVar18;
  while( true ) {
    if ((bVar2 & 1) == 0) {
      uVar4 = uVar9;
      if (lVar8 != lVar10) {
        uVar4 = *(uint *)(lVar10 + 0x20);
      }
    }
    else {
      uVar4 = uVar3;
      if (lVar16 != lVar10) {
        uVar4 = 0xffffffff;
      }
    }
    if ((uVar19 != uVar4) || (lVar10 == plVar15[-1])) break;
    plVar17 = plVar17 + 1;
    lVar10 = *plVar17;
    bVar2 = *(byte *)(lVar10 + 0x7a);
    if ((bVar2 & 1) == 0) {
      uVar19 = uVar13;
      if (lVar16 != lVar10) {
        uVar19 = 0;
      }
    }
    else {
      uVar19 = uVar9;
      if (lVar8 != lVar10) {
        uVar19 = *(uint *)(lVar10 + 0x20);
      }
      uVar19 = uVar19 - 1;
    }
  }
  lVar1 = 0;
  if (plVar15 != plVar18) {
    lVar1 = ((ulong)((long)plVar15 - (long)plVar18) >> 3) - 1;
  }
  lVar5 = plVar18[lVar1];
  uVar4 = uVar3;
  if (lVar16 != lVar5) {
    uVar4 = 0xffffffff;
  }
  lVar12 = lVar10;
  uVar7 = uVar19;
  if ((*(byte *)(lVar5 + 0x7a) & 1) == 0) {
    uVar4 = uVar9;
  }
LAB_004d4200:
  uVar6 = uVar7;
  lVar11 = lVar12;
  uVar7 = uVar4;
  if ((*(byte *)(lVar5 + 0x7a) & 1) == 0 && lVar8 != lVar5) {
    uVar7 = *(uint *)(lVar5 + 0x20);
  }
  if ((plVar17 != plVar18 + lVar1) || (uVar6 != uVar7)) {
    uVar7 = uVar6 - 1;
    if ((*(byte *)(lVar11 + 0x7a) & 1) == 0) {
      uVar7 = uVar6 + 1;
    }
    lVar12 = lVar11;
    if ((*(byte *)(lVar11 + 0x7a) & 1) != 0) goto LAB_004d4254;
    do {
      uVar20 = uVar9;
      if (lVar8 != lVar12) {
        uVar20 = *(uint *)(lVar12 + 0x20);
      }
      while( true ) {
        lVar10 = lVar11;
        uVar19 = uVar6;
        if ((uVar7 != uVar20) || (lVar12 == plVar15[-1])) goto LAB_004d4200;
        plVar17 = plVar17 + 1;
        lVar12 = *plVar17;
        if ((*(byte *)(lVar12 + 0x7a) & 1) == 0) {
          uVar7 = uVar13;
          if (lVar16 != lVar12) {
            uVar7 = 0;
          }
        }
        else {
          uVar19 = uVar9;
          if (lVar8 != lVar12) {
            uVar19 = *(uint *)(lVar12 + 0x20);
          }
          uVar7 = uVar19 - 1;
        }
        if ((*(byte *)(lVar12 + 0x7a) & 1) == 0) break;
LAB_004d4254:
        uVar20 = uVar3;
        if (lVar16 != lVar12) {
          uVar20 = 0xffffffff;
        }
      }
    } while( true );
  }
  uVar19 = *(uint *)(*(long *)(lVar10 + 0x28) + (ulong)uVar19 * 4);
  if ((*(byte *)(lVar10 + 0x7a) & 1) == 0) {
    lVar10 = *(long *)param_1;
    lVar8 = *(long *)(param_1 + 8);
    uVar13 = uVar19 + 1;
    uVar9 = (uint)((ulong)(lVar8 - lVar10) >> 2);
    if (uVar13 < uVar9) {
      lVar16 = 0;
      iVar14 = uVar9 - uVar19;
      do {
        if (*(int *)(lVar10 + (ulong)uVar13 * 4 + lVar16 * 4) !=
            *(int *)(lVar10 + (ulong)uVar19 * 4)) {
          iVar14 = (int)lVar16 + 1;
          break;
        }
        lVar16 = lVar16 + 1;
      } while (((ulong)(lVar8 - lVar10) >> 2 & 0xffffffff) - (ulong)uVar13 != lVar16);
      uVar13 = iVar14 + uVar19;
    }
  }
  else {
    lVar10 = *(long *)param_1;
    lVar8 = *(long *)(param_1 + 8);
    uVar9 = (uint)((ulong)(lVar8 - lVar10) >> 2);
    uVar13 = uVar19;
  }
  uVar9 = uVar9 - 2;
  if (lVar8 == lVar10) {
    uVar9 = 0xffffffff;
  }
  if (uVar13 <= uVar9) {
    uVar9 = uVar13;
  }
  return uVar9;
}


// ===== 004d433c  rive::GlyphItr::operator++ =====

/* rive::GlyphItr::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall rive::GlyphItr::operator++(GlyphItr *this)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  
  plVar1 = *(long **)this;
  plVar4 = *(long **)(this + 8);
  iVar6 = *(int *)(this + 0x10) + -1;
  lVar5 = *plVar4;
  bVar3 = *(byte *)(lVar5 + 0x7a);
  if ((bVar3 & 1) == 0) {
    iVar6 = *(int *)(this + 0x10) + 1;
  }
  *(int *)(this + 0x10) = iVar6;
  while( true ) {
    plVar4 = plVar4 + 1;
    if ((bVar3 & 1) == 0) {
      if (plVar1[1] == lVar5) {
        iVar2 = *(int *)((long)plVar1 + 0x14);
      }
      else {
        iVar2 = *(int *)(lVar5 + 0x20);
      }
    }
    else {
      iVar2 = (int)plVar1[2] + -1;
      if (*plVar1 != lVar5) {
        iVar2 = -1;
      }
    }
    if ((iVar6 != iVar2) || (lVar5 == *(long *)(plVar1[4] + -8))) break;
    *(long **)(this + 8) = plVar4;
    lVar5 = *plVar4;
    bVar3 = *(byte *)(lVar5 + 0x7a);
    if ((bVar3 & 1) == 0) {
      iVar6 = (int)plVar1[2];
      if (*plVar1 != lVar5) {
        iVar6 = 0;
      }
    }
    else {
      if (plVar1[1] == lVar5) {
        iVar6 = *(int *)((long)plVar1 + 0x14);
      }
      else {
        iVar6 = *(int *)(lVar5 + 0x20);
      }
      iVar6 = iVar6 + -1;
    }
    *(int *)(this + 0x10) = iVar6;
  }
  return;
}


// ===== 004d4408  rive::OrderedLine::containsCodePointIndex =====

/* rive::OrderedLine::containsCodePointIndex(rive::GlyphLookup const&, unsigned int) const */

bool __thiscall
rive::OrderedLine::containsCodePointIndex(OrderedLine *this,GlyphLookup *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = firstCodePointIndex(this,param_1);
  if (param_2 < uVar2) {
    bVar1 = false;
  }
  else {
    uVar2 = lastCodePointIndex(this,param_1);
    bVar1 = param_2 <= uVar2;
  }
  return bVar1;
}


// ===== 004d445c  rive::GlyphItr::tryAdvanceRun =====

/* rive::GlyphItr::tryAdvanceRun() */

void __thiscall rive::GlyphItr::tryAdvanceRun(GlyphItr *this)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  
  plVar1 = *(long **)this;
  plVar4 = *(long **)(this + 8);
  iVar6 = *(int *)(this + 0x10);
  lVar5 = *plVar4;
  bVar3 = *(byte *)(lVar5 + 0x7a);
  while( true ) {
    plVar4 = plVar4 + 1;
    if ((bVar3 & 1) == 0) {
      if (plVar1[1] == lVar5) {
        iVar2 = *(int *)((long)plVar1 + 0x14);
      }
      else {
        iVar2 = *(int *)(lVar5 + 0x20);
      }
    }
    else {
      iVar2 = (int)plVar1[2] + -1;
      if (*plVar1 != lVar5) {
        iVar2 = -1;
      }
    }
    if ((iVar6 != iVar2) || (lVar5 == *(long *)(plVar1[4] + -8))) break;
    *(long **)(this + 8) = plVar4;
    lVar5 = *plVar4;
    bVar3 = *(byte *)(lVar5 + 0x7a);
    if ((bVar3 & 1) == 0) {
      iVar6 = (int)plVar1[2];
      if (*plVar1 != lVar5) {
        iVar6 = 0;
      }
    }
    else {
      if (plVar1[1] == lVar5) {
        iVar6 = *(int *)((long)plVar1 + 0x14);
      }
      else {
        iVar6 = *(int *)(lVar5 + 0x20);
      }
      iVar6 = iVar6 + -1;
    }
    *(int *)(this + 0x10) = iVar6;
  }
  return;
}


// ===== 004d4518  rive::OrderedLine::bottom =====

/* rive::OrderedLine::bottom() const */

float __thiscall rive::OrderedLine::bottom(OrderedLine *this)

{
  return (*(float *)(this + 0x38) - *(float *)(*(long *)(this + 0x30) + 0x18)) +
         *(float *)(*(long *)(this + 0x30) + 0x1c);
}


// ===== 004d4530  rive::TextFollowPathModifier::buildDependencies =====

/* rive::TextFollowPathModifier::buildDependencies() */

void __thiscall rive::TextFollowPathModifier::buildDependencies(TextFollowPathModifier *this)

{
  long *plVar1;
  ulong uVar2;
  Component *pCVar3;
  long lVar4;
  
  plVar1 = *(long **)(this + 0x90);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,3);
    plVar1 = *(long **)(this + 0x90);
    if ((uVar2 & 1) == 0) {
      if ((plVar1 == (long *)0x0) ||
         (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0xc), (uVar2 & 1) == 0)) goto LAB_004d4590;
      pCVar3 = *(Component **)(this + 0x90);
    }
    else {
      pCVar3 = (Component *)(plVar1 + 0x34);
    }
    Component::addDependent(pCVar3,(Component *)this);
  }
LAB_004d4590:
  plVar1 = *(long **)(this + 0x30);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x9f), (uVar2 & 1) != 0)) {
    lVar4 = *(long *)(this + 0x30);
    plVar1 = *(long **)(lVar4 + 0x30);
    if ((plVar1 != (long *)0x0) &&
       ((uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x86), (uVar2 & 1) != 0 &&
        (pCVar3 = *(Component **)(lVar4 + 0x30), pCVar3 != (Component *)0x0)))) {
      Component::addDependent((Component *)this,pCVar3);
      return;
    }
  }
  return;
}


// ===== 004d45f0  rive::TextFollowPathModifier::onAddedClean =====

/* rive::TextFollowPathModifier::onAddedClean(rive::CoreContext*) */

undefined8 rive::TextFollowPathModifier::onAddedClean(CoreContext *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x90);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,3);
    plVar1 = *(long **)(param_1 + 0x90);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0xc);
      if ((uVar2 & 1) != 0) {
        *(byte *)(*(long *)(param_1 + 0x90) + 0x161) =
             *(byte *)(*(long *)(param_1 + 0x90) + 0x161) | 0x10;
      }
    }
    else {
      *(byte *)(plVar1 + 0x30) = *(byte *)(plVar1 + 0x30) | 0x10;
    }
  }
  return 0;
}


// ===== 004d4668  rive::TextFollowPathModifier::update =====

/* rive::TextFollowPathModifier::update(rive::ComponentDirt) */

void rive::TextFollowPathModifier::update(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  Mat2D *pMVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  plVar3 = *(long **)(param_1 + 0x90);
  if (plVar3 == (long *)0x0) {
LAB_004d486c:
    *(undefined1 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,3);
    plVar3 = *(long **)(param_1 + 0x90);
    if ((uVar4 & 1) == 0) {
      if ((plVar3 == (long *)0x0) ||
         (uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0xc), (uVar4 & 1) == 0)) goto LAB_004d486c;
      uVar14 = *(undefined8 *)(param_1 + 0x90);
      puVar6 = (undefined8 *)operator_new(8);
      uVar17 = *(undefined8 *)(param_1 + 0xb0);
      uVar8 = *(undefined8 *)(param_1 + 200);
      *(undefined1 *)(param_1 + 0xe8) = 0;
      puVar18 = puVar6 + 1;
      *puVar6 = uVar14;
      *(undefined8 *)(param_1 + 0xb8) = uVar17;
      *(undefined8 *)(param_1 + 0xd0) = uVar8;
LAB_004d48b8:
      puVar13 = puVar6;
      do {
        puVar15 = puVar13 + 1;
        plVar3 = (long *)*puVar13;
        pMVar7 = (Mat2D *)(**(code **)(*plVar3 + 0x1d8))(plVar3);
        RawPath::addPath((RawPath *)(param_1 + 0xb0),(RawPath *)(plVar3 + 0x2d),pMVar7);
        puVar13 = puVar15;
      } while (puVar15 != puVar18);
    }
    else {
      puVar13 = (undefined8 *)plVar3[0x68];
      puVar15 = (undefined8 *)plVar3[0x69];
      if (puVar13 == puVar15) goto LAB_004d486c;
      puVar19 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0x0;
      puVar12 = (undefined8 *)0x0;
      do {
        uVar17 = *puVar13;
        if (puVar18 < puVar19) {
          *puVar18 = uVar17;
          puVar6 = puVar12;
          puVar1 = puVar18;
        }
        else {
          lVar16 = (long)puVar18 - (long)puVar12;
          uVar4 = (lVar16 >> 3) + 1;
          if (uVar4 >> 0x3d != 0) {
            FUN_003dc2ec();
LAB_004d4910:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar9 = (long)puVar19 - (long)puVar12 >> 2;
          if (uVar9 <= uVar4) {
            uVar9 = uVar4;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar19 - (long)puVar12)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            if (uVar9 >> 0x3d != 0) goto LAB_004d4910;
            pvVar5 = operator_new(uVar9 << 3);
          }
          puVar1 = (undefined8 *)((long)pvVar5 + (lVar16 >> 3) * 8);
          *puVar1 = uVar17;
          puVar6 = puVar1;
          if ((long)puVar18 - (long)puVar12 != 0) {
            uVar4 = ((long)puVar18 - (long)puVar12) - 8;
            if ((((0x147 < uVar4) &&
                 (uVar10 = (long)pvVar5 + lVar16 + -8,
                 uVar10 - (uVar4 & 0xfffffffffffffff8) <= uVar10)) &&
                ((undefined8 *)((long)(puVar18 + -1) - (uVar4 & 0xfffffffffffffff8)) <= puVar18 + -1
                )) && (0x1f < (ulong)((long)puVar18 + (-lVar16 - (long)pvVar5)))) {
              puVar6 = puVar1 + -2;
              puVar19 = puVar18 + -2;
              uVar4 = (uVar4 >> 3) + 1;
              uVar11 = uVar4 & 0x3ffffffffffffffc;
              puVar18 = puVar18 + -uVar11;
              uVar10 = uVar11;
              do {
                puVar2 = puVar19 + -1;
                uVar14 = puVar19[-2];
                uVar8 = puVar19[1];
                uVar17 = *puVar19;
                uVar10 = uVar10 - 4;
                puVar19 = puVar19 + -4;
                puVar6[-1] = *puVar2;
                puVar6[-2] = uVar14;
                puVar6[1] = uVar8;
                *puVar6 = uVar17;
                puVar6 = puVar6 + -4;
              } while (uVar10 != 0);
              puVar6 = puVar1 + -uVar11;
              if (uVar4 == uVar11) goto LAB_004d476c;
            }
            do {
              puVar18 = puVar18 + -1;
              puVar6 = puVar6 + -1;
              *puVar6 = *puVar18;
            } while (puVar18 != puVar12);
          }
LAB_004d476c:
          puVar19 = (undefined8 *)((long)pvVar5 + uVar9 * 8);
          if (puVar12 != (undefined8 *)0x0) {
            operator_delete(puVar12);
          }
        }
        puVar18 = puVar1 + 1;
        puVar13 = puVar13 + 1;
        puVar12 = puVar6;
      } while (puVar13 != puVar15);
      *(undefined1 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
      if (puVar6 != puVar18) goto LAB_004d48b8;
    }
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
      return;
    }
  }
  return;
}


// ===== 004d4914  rive::TextFollowPathModifier::radialChanged =====

/* rive::TextFollowPathModifier::radialChanged() */

void __thiscall rive::TextFollowPathModifier::radialChanged(TextFollowPathModifier *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(this + 0x30);
    plVar2 = *(long **)(lVar4 + 0x30);
    if ((plVar2 != (long *)0x0) &&
       (((uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x86), (uVar3 & 1) != 0 &&
         (plVar2 = *(long **)(lVar4 + 0x30), plVar2 != (long *)0x0)) &&
        ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0)))) {
      *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
      (**(code **)(*plVar2 + 0x70))(plVar2);
      lVar4 = plVar2[0x10];
      uVar1 = *(uint *)(plVar2 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004d49c0  rive::TextFollowPathModifier::modifierShapeDirty =====

/* rive::TextFollowPathModifier::modifierShapeDirty() */

void __thiscall rive::TextFollowPathModifier::modifierShapeDirty(TextFollowPathModifier *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(this + 0x30);
    plVar2 = *(long **)(lVar4 + 0x30);
    if ((plVar2 != (long *)0x0) &&
       (((uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x86), (uVar3 & 1) != 0 &&
         (plVar2 = *(long **)(lVar4 + 0x30), plVar2 != (long *)0x0)) &&
        ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0)))) {
      *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
      (**(code **)(*plVar2 + 0x70))(plVar2);
      lVar4 = plVar2[0x10];
      uVar1 = *(uint *)(plVar2 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004d4a6c  rive::TextFollowPathModifier::orientChanged =====

/* rive::TextFollowPathModifier::orientChanged() */

void __thiscall rive::TextFollowPathModifier::orientChanged(TextFollowPathModifier *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(this + 0x30);
    plVar2 = *(long **)(lVar4 + 0x30);
    if ((plVar2 != (long *)0x0) &&
       (((uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x86), (uVar3 & 1) != 0 &&
         (plVar2 = *(long **)(lVar4 + 0x30), plVar2 != (long *)0x0)) &&
        ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0)))) {
      *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
      (**(code **)(*plVar2 + 0x70))(plVar2);
      lVar4 = plVar2[0x10];
      uVar1 = *(uint *)(plVar2 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004d4b18  rive::TextFollowPathModifier::startChanged =====

/* rive::TextFollowPathModifier::startChanged() */

void __thiscall rive::TextFollowPathModifier::startChanged(TextFollowPathModifier *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(this + 0x30);
    plVar2 = *(long **)(lVar4 + 0x30);
    if ((plVar2 != (long *)0x0) &&
       (((uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x86), (uVar3 & 1) != 0 &&
         (plVar2 = *(long **)(lVar4 + 0x30), plVar2 != (long *)0x0)) &&
        ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0)))) {
      *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
      (**(code **)(*plVar2 + 0x70))(plVar2);
      lVar4 = plVar2[0x10];
      uVar1 = *(uint *)(plVar2 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004d4bc4  rive::TextFollowPathModifier::endChanged =====

/* rive::TextFollowPathModifier::endChanged() */

void __thiscall rive::TextFollowPathModifier::endChanged(TextFollowPathModifier *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(this + 0x30);
    plVar2 = *(long **)(lVar4 + 0x30);
    if ((plVar2 != (long *)0x0) &&
       (((uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x86), (uVar3 & 1) != 0 &&
         (plVar2 = *(long **)(lVar4 + 0x30), plVar2 != (long *)0x0)) &&
        ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0)))) {
      *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
      (**(code **)(*plVar2 + 0x70))(plVar2);
      lVar4 = plVar2[0x10];
      uVar1 = *(uint *)(plVar2 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004d4c70  rive::TextFollowPathModifier::offsetChanged =====

/* rive::TextFollowPathModifier::offsetChanged() */

void __thiscall rive::TextFollowPathModifier::offsetChanged(TextFollowPathModifier *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(this + 0x30);
    plVar2 = *(long **)(lVar4 + 0x30);
    if ((plVar2 != (long *)0x0) &&
       (((uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x86), (uVar3 & 1) != 0 &&
         (plVar2 = *(long **)(lVar4 + 0x30), plVar2 != (long *)0x0)) &&
        ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0)))) {
      *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
      (**(code **)(*plVar2 + 0x70))(plVar2);
      lVar4 = plVar2[0x10];
      uVar1 = *(uint *)(plVar2 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004d4d1c  rive::TextFollowPathModifier::strengthChanged =====

/* rive::TextFollowPathModifier::strengthChanged() */

void __thiscall rive::TextFollowPathModifier::strengthChanged(TextFollowPathModifier *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(this + 0x30);
    plVar2 = *(long **)(lVar4 + 0x30);
    if ((plVar2 != (long *)0x0) &&
       (((uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x86), (uVar3 & 1) != 0 &&
         (plVar2 = *(long **)(lVar4 + 0x30), plVar2 != (long *)0x0)) &&
        ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0)))) {
      *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
      (**(code **)(*plVar2 + 0x70))(plVar2);
      lVar4 = plVar2[0x10];
      uVar1 = *(uint *)(plVar2 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004d4dc8  rive::TextFollowPathModifier::reset =====

/* rive::TextFollowPathModifier::reset(rive::Mat2D const*) */

void __thiscall rive::TextFollowPathModifier::reset(TextFollowPathModifier *this,Mat2D *param_1)

{
  long lVar1;
  RawPath *this_00;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x90) == 0) {
    PathMeasure::PathMeasure((PathMeasure *)local_60);
    *(undefined4 *)(this + 0x130) = local_60[0];
    FUN_003dc300(this + 0x138);
    *(undefined8 *)(this + 0x140) = uStack_50;
    *(undefined8 *)(this + 0x138) = local_58;
    *(undefined8 *)(this + 0x148) = local_48;
  }
  else {
    this_00 = (RawPath *)(this + 0xf0);
    *(undefined8 *)(this + 0xf8) = *(undefined8 *)this_00;
    *(undefined8 *)(this + 0x110) = *(undefined8 *)(this + 0x108);
    this[0x128] = (TextFollowPathModifier)0x0;
    RawPath::addPath(this_00,(RawPath *)(this + 0xb0),param_1);
    PathMeasure::PathMeasure((PathMeasure *)local_60,this_00,0.1);
    *(undefined4 *)(this + 0x130) = local_60[0];
    FUN_003dc300(this + 0x138);
    *(undefined8 *)(this + 0x140) = uStack_50;
    *(undefined8 *)(this + 0x138) = local_58;
    *(undefined8 *)(this + 0x148) = local_48;
  }
  local_48 = 0;
  local_40 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  FUN_003dc3a8(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d4ed0  rive::TextFollowPathModifier::transformGlyph =====

/* rive::TextFollowPathModifier::transformGlyph(rive::TransformComponents const&,
   rive::TransformGlyphArg const&) */

void rive::TextFollowPathModifier::transformGlyph
               (TransformComponents *param_1,TransformGlyphArg *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long in_x2;
  undefined8 *in_x8;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  fVar21 = *(float *)(param_1 + 0x130);
  if (fVar21 == 0.0) {
    uVar15 = *(undefined8 *)param_2;
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    in_x8[1] = *(undefined8 *)(param_2 + 8);
    *in_x8 = uVar15;
    in_x8[2] = uVar12;
    goto LAB_004d5228;
  }
  fVar8 = *(float *)(param_1 + 0x9c);
  fVar11 = *(float *)(param_1 + 0xa0);
  uVar1 = *(uint *)(in_x2 + 0x1c);
  fVar16 = fVar11;
  if (fVar8 <= fVar11) {
    fVar16 = fVar8;
  }
  if (fVar11 <= fVar8) {
    fVar11 = fVar8;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar16 = (float)NEON_fminnm(fVar16,0x3f800000);
  fVar8 = *(float *)(in_x2 + 8) + *(float *)(in_x2 + 0x10);
  fVar11 = (float)NEON_fminnm(fVar11,0x3f800000);
  if (*(long *)(param_1 + 0x110) == *(long *)(param_1 + 0x108)) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(*(long *)(param_1 + 0x110) + -1) == '\x05';
  }
  plVar7 = *(long **)(in_x2 + 0x20);
  fVar19 = *(float *)(in_x2 + 0xc);
  fVar20 = *(float *)(in_x2 + 0x14);
  bVar3 = false;
  if (fVar11 - fVar16 == 1.0) {
    bVar3 = bVar4;
  }
  fVar9 = fmodf(*(float *)(param_1 + 0xa8),1.0);
  fVar9 = fmodf(fVar9 + 1.0,1.0);
  fVar17 = fVar16 + fVar9;
  fVar9 = fVar11 + fVar9;
  if (fVar17 == fVar9 || (bool)(fVar8 < 0.0 & (bVar3 ^ 1U))) {
    fVar18 = 1.0;
    fVar11 = fmodf(fVar17,1.0);
    fVar16 = fVar11 + 1.0;
    if (0.0 <= fVar11) {
      fVar16 = fVar11;
    }
    bVar4 = true;
    if ((fVar16 == 0.0) && (bVar4 = false, !NAN(fVar17))) {
      bVar4 = fVar17 == 0.0;
    }
    fVar11 = fVar18;
    if (bVar4) {
      fVar11 = fVar16;
    }
    PathMeasure::atDistance(fVar11 * fVar21);
    fVar21 = (float)NEON_fmadd(local_a8,local_a8,fStack_a4 * fStack_a4);
    if (fVar21 != 0.0 && fVar21 < 0.0 == NAN(fVar21)) {
      fVar18 = 1.0 / SQRT(fVar21);
    }
    fVar21 = local_a8 * fVar18;
    fVar18 = fStack_a4 * fVar18;
    local_b0 = NEON_fmadd(fVar21,fVar8,local_b0);
    fStack_ac = (float)NEON_fmadd(fVar18,fVar8,fStack_ac);
  }
  else {
    fVar16 = fVar21 * (fVar11 - fVar16);
    if (fVar8 == fVar16 || fVar8 < fVar16 != (NAN(fVar8) || NAN(fVar16))) {
      bVar3 = true;
    }
    if (bVar3) {
      fVar18 = 1.0;
      fVar17 = fVar8 / fVar21 + fVar17;
      fVar11 = fmodf(fVar17,1.0);
      fVar16 = fVar11 + 1.0;
      if (0.0 <= fVar11) {
        fVar16 = fVar11;
      }
      bVar4 = true;
      if ((fVar16 == 0.0) && (bVar4 = false, !NAN(fVar17))) {
        bVar4 = fVar17 == 0.0;
      }
      fVar11 = fVar18;
      if (bVar4) {
        fVar11 = fVar16;
      }
      PathMeasure::atDistance(fVar11 * fVar21);
      fVar21 = (float)NEON_fmadd(local_a8,local_a8,fStack_a4 * fStack_a4);
      if (fVar21 != 0.0 && fVar21 < 0.0 == NAN(fVar21)) {
        fVar18 = 1.0 / SQRT(fVar21);
      }
      fVar21 = local_a8 * fVar18;
      fVar18 = fStack_a4 * fVar18;
    }
    else {
      fVar18 = 1.0;
      fVar17 = fmodf(fVar9,1.0);
      fVar11 = fVar17 + 1.0;
      if (0.0 <= fVar17) {
        fVar11 = fVar17;
      }
      bVar4 = true;
      if ((fVar11 == 0.0) && (bVar4 = false, !NAN(fVar9))) {
        bVar4 = fVar9 == 0.0;
      }
      fVar9 = fVar18;
      if (bVar4) {
        fVar9 = fVar11;
      }
      PathMeasure::atDistance(fVar9 * fVar21);
      fVar21 = (float)NEON_fmadd(local_a8,local_a8,fStack_a4 * fStack_a4);
      if (fVar21 != 0.0 && fVar21 < 0.0 == NAN(fVar21)) {
        fVar18 = 1.0 / SQRT(fVar21);
      }
      fVar21 = local_a8 * fVar18;
      fVar18 = fStack_a4 * fVar18;
      local_b0 = NEON_fmadd(fVar21,fVar8 - fVar16,local_b0);
      fStack_ac = (float)NEON_fmadd(fVar18,fVar8 - fVar16,fStack_ac);
    }
  }
  if ((int)uVar1 < 1) {
    fVar16 = 0.0;
    if (-1 < (int)uVar1) {
      uVar5 = plVar7[1];
      goto LAB_004d5188;
    }
    fVar11 = 0.0;
  }
  else {
    fVar16 = 0.0;
    uVar5 = plVar7[1];
    if (uVar1 - 1 < uVar5) {
      fVar16 = *(float *)(*plVar7 + (ulong)(uVar1 - 1) * 0x20 + 0x18);
    }
LAB_004d5188:
    fVar11 = 0.0;
    if (uVar1 < uVar5) {
      fVar11 = *(float *)(*plVar7 + (ulong)uVar1 * 0x20 + 0x18);
    }
  }
  fVar11 = (fVar19 + fVar20) - fVar11;
  if (param_1[0x98] == '\0') {
    fVar16 = fVar16 + fStack_ac + fVar11;
  }
  else {
    local_b0 = NEON_fmsub(fVar11,fVar18,local_b0);
    fVar16 = (float)NEON_fmadd(fVar11,fVar21,fStack_ac);
  }
  fVar11 = 0.0;
  if (param_1[0x99] != '\0') {
    fVar11 = atan2f(fVar18,fVar21);
  }
  fVar21 = *(float *)(param_1 + 0xa4);
  fVar20 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  *(undefined4 *)((long)in_x8 + 0x14) = 0;
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  fVar21 = (float)NEON_fminnm(fVar21,0x3f800000);
  fVar9 = 1.0 - fVar21;
  uVar15 = NEON_fmov(0x3f800000,4);
  uVar13 = NEON_fmadd(local_b0,fVar21,fVar8 * fVar9);
  uVar14 = NEON_fmadd(fVar16,fVar21,fVar19 * fVar9);
  uVar10 = NEON_fmadd(fVar11,fVar21,fVar9 * fVar20);
  in_x8[1] = uVar15;
  *(undefined4 *)in_x8 = uVar13;
  *(undefined4 *)((long)in_x8 + 4) = uVar14;
  *(undefined4 *)(in_x8 + 2) = uVar10;
LAB_004d5228:
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d5268  FUN_004d5268 =====

void FUN_004d5268(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1 + 0x27;
  *param_1 = (long)(PTR_vtable_0067d498 + 0x10);
  FUN_003dc3a8(&local_30);
  pvVar2 = (void *)param_1[0x21];
  if (pvVar2 != (void *)0x0) {
    param_1[0x22] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1e];
  if (pvVar2 != (void *)0x0) {
    param_1[0x1f] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x19];
  if (pvVar2 != (void *)0x0) {
    param_1[0x1a] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x16];
  if (pvVar2 != (void *)0x0) {
    param_1[0x17] = (long)pvVar2;
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
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
    operator_delete((void *)param_1[4]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d5374  FUN_004d5374 =====

void FUN_004d5374(void *param_1)

{
  FUN_004d5268();
  operator_delete(param_1);
  return;
}


// ===== 004d5398  FUN_004d5398 =====

undefined8 FUN_004d5398(void)

{
  return 0x223;
}


// ===== 004d53a0  FUN_004d53a0 =====

undefined8 FUN_004d53a0(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (((1 < param_2 - 0x222) && (param_2 != 10)) && (param_2 != 0xa0)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004d53cc  FUN_004d53cc =====

undefined8 FUN_004d53cc(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar10 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x30e) {
    if (param_2 < 0x30a) {
      if (param_2 == 4) {
        pcVar7 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004d5678;
          }
          pcVar13 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar13;
        } while (cVar2 < '\0');
        param_3[2] = (long)pcVar13;
        if ((char)param_3[3] == '\0') {
          rive::BinaryReader::readString((ulong)param_3);
        }
        else {
LAB_004d5678:
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
        if (param_2 != 5) goto LAB_004d5750;
        uVar14 = 0;
        uVar6 = 0;
        pbVar11 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_004d565c;
          }
          pbVar12 = pbVar11 + 1;
          bVar1 = *pbVar11;
          uVar3 = uVar14 & 0x3f;
          uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
          uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
          pbVar11 = pbVar12;
        } while ((char)bVar1 < '\0');
        param_3[2] = (long)pbVar12;
        if (uVar6 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004d565c:
          uVar6 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x28) = (int)uVar6;
      }
    }
    else if (param_2 == 0x30a) {
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004d56b0;
        }
        pbVar12 = pbVar11 + 1;
        bVar1 = *pbVar11;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar11 = pbVar12;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar12;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004d56b0:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x88) = (int)uVar6;
    }
    else {
      if (param_2 != 0x30b) goto LAB_004d5750;
      pcVar7 = (char *)param_3[2];
      if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        *(undefined1 *)(param_1 + 0x98) = 0;
      }
      else {
        param_3[2] = (long)(pcVar7 + 1);
        *(bool *)(param_1 + 0x98) = *pcVar7 == '\x01';
      }
    }
  }
  else {
    if (0x30f < param_2) {
      if (param_2 == 0x310) {
        puVar9 = (undefined4 *)param_3[2];
        puVar8 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar8 - (long)puVar9 < 4) {
          uVar15 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar8 = puVar9 + 1;
          uVar15 = *puVar9;
        }
        param_3[2] = (long)puVar8;
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0xa0) = uVar15;
      }
      else if (param_2 == 0x311) {
        puVar9 = (undefined4 *)param_3[2];
        puVar8 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar8 - (long)puVar9 < 4) {
          uVar15 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar8 = puVar9 + 1;
          uVar15 = *puVar9;
        }
        param_3[2] = (long)puVar8;
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0xa4) = uVar15;
      }
      else if (param_2 == 0x312) {
        puVar9 = (undefined4 *)param_3[2];
        puVar8 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar8 - (long)puVar9 < 4) {
          uVar15 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar8 = puVar9 + 1;
          uVar15 = *puVar9;
        }
        param_3[2] = (long)puVar8;
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0xa8) = uVar15;
      }
      goto LAB_004d5750;
    }
    if (param_2 != 0x30e) {
      if (param_2 == 0x30f) {
        puVar9 = (undefined4 *)param_3[2];
        puVar8 = (undefined4 *)(*param_3 + param_3[1]);
        if ((long)puVar8 - (long)puVar9 < 4) {
          uVar15 = 0;
          *(undefined1 *)(param_3 + 3) = 1;
        }
        else {
          puVar8 = puVar9 + 1;
          uVar15 = *puVar9;
        }
        param_3[2] = (long)puVar8;
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x9c) = uVar15;
      }
      goto LAB_004d5750;
    }
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x99) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0x99) = *pcVar7 == '\x01';
    }
  }
  uVar5 = 1;
LAB_004d5750:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d5778  FUN_004d5778 =====

void FUN_004d5778(void)

{
  return;
}


// ===== 004d577c  rive::TextFollowPathModifierBase::clone =====

/* rive::TextFollowPathModifierBase::clone() const */

long * __thiscall rive::TextFollowPathModifierBase::clone(TextFollowPathModifierBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar3 = (long *)operator_new(0x150);
  lVar6 = NEON_fmov(0x3f800000,4);
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[0x23] = 0;
  plVar3[0x22] = 0;
  plVar3[0x25] = 0;
  plVar3[0x24] = 0;
  plVar3[0x27] = 0;
  plVar3[0x26] = 0;
  plVar3[0x29] = 0;
  plVar3[0x28] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  *(undefined4 *)(plVar3 + 0x11) = 0xffffffff;
  puVar2 = PTR_vtable_0067d498;
  *(undefined1 *)((long)plVar3 + 0x99) = 1;
  plVar3[0x14] = lVar6;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[0x23] = 0;
  plVar3[0x22] = 0;
  PathMeasure::PathMeasure((PathMeasure *)(plVar3 + 0x26));
  uVar5 = *(undefined8 *)(this + 0xa4);
  uVar4 = *(undefined8 *)(this + 0x9c);
  uVar1 = *(undefined4 *)(this + 0x88);
  *(undefined2 *)(plVar3 + 0x13) = *(undefined2 *)(this + 0x98);
  *(undefined8 *)((long)plVar3 + 0xa4) = uVar5;
  *(undefined8 *)((long)plVar3 + 0x9c) = uVar4;
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004d586c  FUN_004d586c =====

void FUN_004d586c(long *param_1)

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


// ===== 004d58d8  FUN_004d58d8 =====

void FUN_004d58d8(void)

{
  return;
}


// ===== 004d58dc  FUN_004d58dc =====

void FUN_004d58dc(void)

{
  return;
}


// ===== 004d58e0  FUN_004d58e0 =====

void FUN_004d58e0(void)

{
  return;
}


// ===== 004d58e4  FUN_004d58e4 =====

void FUN_004d58e4(void)

{
  return;
}


// ===== 004d58e8  FUN_004d58e8 =====

void FUN_004d58e8(void)

{
  return;
}


// ===== 004d58ec  FUN_004d58ec =====

void FUN_004d58ec(void)

{
  return;
}


// ===== 004d58f0  rive::TextInput::draw =====

/* rive::TextInput::draw(rive::Renderer*) */

void rive::TextInput::draw(Renderer *param_1)

{
  return;
}


// ===== 004d58f4  rive::TextInput::hitTest =====

/* rive::TextInput::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::TextInput::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 004d58fc  rive::TextInput::hitTestPoint =====

/* rive::TextInput::hitTestPoint(rive::Vec2D const&, bool, bool) */

undefined8 __thiscall
rive::TextInput::hitTestPoint(TextInput *this,Vec2D *param_1,bool param_2,bool param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  TextInput *pTVar7;
  code *UNRECOVERED_JUMPTABLE;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar13 = *(float *)(this + 0xa4);
  fVar11 = *(float *)(this + 0xb0);
  fVar8 = (float)*(undefined8 *)(this + 0xa8);
  fVar15 = -fVar8;
  fVar9 = (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  fVar16 = (float)NEON_fmadd(fVar13,fVar11,fVar15 * fVar9);
  if (fVar16 != 0.0) {
    fVar16 = 1.0 / fVar16;
    fVar17 = (float)*(undefined8 *)(this + 0xb4);
    fVar18 = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20);
    fVar12 = fVar11 * fVar16;
    fVar15 = fVar15 * fVar16;
    uVar14 = NEON_rev64(CONCAT44(fVar18 * -fVar13,fVar17 * -fVar11),4);
    auVar10._4_4_ = fVar15;
    auVar10._0_4_ = fVar12;
    auVar10._8_4_ = -fVar9 * fVar16;
    auVar10._12_4_ = fVar13 * fVar16;
    auVar1._4_4_ = fVar15;
    auVar1._0_4_ = fVar12;
    auVar1._8_4_ = -fVar9 * fVar16;
    auVar1._12_4_ = fVar13 * fVar16;
    auVar10 = NEON_ext(auVar10,auVar1,8,1);
    fVar11 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    uVar14 = NEON_rev64(CONCAT44(fVar16 * ((float)((ulong)uVar14 >> 0x20) + fVar18 * fVar9),
                                 fVar16 * ((float)uVar14 + fVar17 * fVar8)),4);
    fVar9 = (float)*(undefined8 *)param_1;
    fVar8 = (float)uVar14 + auVar10._0_4_ * fVar11 + fVar12 * fVar9;
    fVar11 = (float)((ulong)uVar14 >> 0x20) + auVar10._4_4_ * fVar11 + fVar15 * fVar9;
    fVar9 = (float)(**(code **)(*(long *)this + 0xf0))();
    bVar3 = false;
    bVar4 = true;
    if (fVar8 < fVar9 == (NAN(fVar8) || NAN(fVar9))) {
      bVar3 = false;
      bVar4 = true;
      fVar9 = (float)uVar14;
      if (!NAN(fVar8) && !NAN(fVar9)) {
        bVar3 = fVar8 == fVar9;
        bVar4 = fVar9 <= fVar8;
      }
    }
    bVar2 = true;
    bVar5 = false;
    if (!bVar4 || bVar3) {
      bVar2 = false;
      bVar5 = true;
      if (!NAN(fVar11) && !NAN(fVar12)) {
        bVar2 = fVar11 < fVar12;
        bVar5 = false;
      }
    }
    bVar3 = false;
    bVar4 = true;
    if (bVar2 == bVar5) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar11) && !NAN(fVar16)) {
        bVar3 = fVar11 == fVar16;
        bVar4 = fVar16 <= fVar11;
      }
    }
    if ((!bVar4 || bVar3) && (uVar6 = (**(code **)(*(long *)this + 0x1e8))(this), (uVar6 & 1) == 0))
    {
      pTVar7 = (TextInput *)(**(code **)(*(long *)this + 0x220))(this);
      if ((pTVar7 == this) || (pTVar7 == (TextInput *)0x0)) {
        pTVar7 = *(TextInput **)(this + 0x30);
        if (pTVar7 == (TextInput *)0x0) {
          return 1;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar7 + 0x88);
        param_3 = false;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar7 + 0x88);
      }
                    /* WARNING: Could not recover jumptable at 0x004d5a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*UNRECOVERED_JUMPTABLE)(pTVar7,param_1,param_2,param_3);
      return uVar14;
    }
  }
  return 0;
}


// ===== 004d5a60  rive::TextInput::textChanged =====

/* rive::TextInput::textChanged() */

void __thiscall rive::TextInput::textChanged(TextInput *this)

{
  ulong uVar1;
  long *plVar2;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x1c0),(basic_string *)(this + 0x178));
  syncDisplayedTextFromSource(this,false);
  for (plVar2 = *(long **)(this + 0x30); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[6]) {
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0x199);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*plVar2 + 0x2e0))(plVar2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004d5aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x250))(this);
  return;
}


// ===== 004d5ae0  rive::TextInput::syncDisplayedTextFromSource =====

/* rive::TextInput::syncDisplayedTextFromSource(bool) */

void __thiscall rive::TextInput::syncDisplayedTextFromSource(TextInput *this,bool param_1)

{
  char *pcVar1;
  RawTextInput *pRVar2;
  ulong uVar3;
  char *__s2;
  char cVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  byte local_78;
  undefined7 uStack_77;
  ulong uStack_70;
  char *local_68;
  undefined8 local_60;
  size_t sStack_58;
  char *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  displayedText();
  pRVar2 = (RawTextInput *)(this + 0x200);
  RawTextInput::text();
  pcVar1 = local_50;
  uVar11 = (ulong)((byte)local_60._0_1_ >> 1);
  if ((local_60 & 1) != 0) {
    uVar11 = sStack_58;
  }
  uVar3 = (ulong)(local_78 >> 1);
  if ((local_78 & 1) != 0) {
    uVar3 = uStack_70;
  }
  if (uVar11 == uVar3) {
    __s2 = (char *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      __s2 = local_68;
    }
    if ((local_60 & 1) == 0) {
      if ((byte)local_60._0_1_ < 2) goto LAB_004d5d64;
      lVar8 = 0;
      do {
        pcVar1 = __s2 + lVar8;
        cVar4 = *(char *)((long)&local_60 + lVar8 + 1);
        bVar6 = (ulong)((byte)local_60._0_1_ >> 1) - 1 != lVar8;
        lVar8 = lVar8 + 1;
      } while (cVar4 == *pcVar1 && bVar6);
      if (cVar4 == *pcVar1) goto LAB_004d5d64;
    }
    else {
      iVar7 = memcmp(local_50,__s2,sStack_58);
      operator_delete(pcVar1);
      if (iVar7 == 0) goto LAB_004d5d64;
    }
  }
  else if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (param_1) {
    if ((local_78 & 1) == 0) {
      local_90 = CONCAT71(uStack_77,local_78);
      uStack_88 = uStack_70;
      local_80 = local_68;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,local_68,uStack_70);
    }
    uVar10 = *(undefined8 *)(this + 0x208);
    uVar9 = *(undefined8 *)(this + 0x200);
    *(undefined4 *)(this + 0x600) = 0xbf800000;
    if ((local_90 & 1) == 0) {
      sStack_58 = uStack_88;
      local_60 = local_90;
      local_50 = local_80;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_60,local_80,uStack_88);
    }
    RawTextInput::setTextPrivate(pRVar2,&local_60);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    iVar7 = 0;
    if (7 < (ulong)(*(long *)(this + 0x4d0) - *(long *)(this + 0x4c8))) {
      iVar7 = (int)((ulong)(*(long *)(this + 0x4d0) - *(long *)(this + 0x4c8)) >> 2) + -1;
    }
    this[0x5e0] = (TextInput)((byte)this[0x5e0] | 0xb);
    uVar11 = NEON_umin(CONCAT44(iVar7,iVar7),
                       CONCAT44((int)((ulong)uVar10 >> 0x20),(int)((ulong)uVar9 >> 0x20)),4);
    *(ulong *)(this + 0x208) = uVar11 & 0xffffffff00000000 | 0xffffffff;
    *(ulong *)(this + 0x200) = uVar11 << 0x20 | 0xffffffff;
    RawTextInput::captureJournalEntry(pRVar2,uVar9,uVar10);
    pcVar1 = local_80;
    local_b0._0_1_ = local_90._0_1_;
  }
  else {
    if ((local_78 & 1) == 0) {
      local_b0 = CONCAT71(uStack_77,local_78);
      uStack_a8 = uStack_70;
      local_a0 = local_68;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b0,local_68,uStack_70);
    }
    uVar9 = *(undefined8 *)(this + 0x200);
    uVar10 = *(undefined8 *)(this + 0x208);
    if ((local_b0 & 1) == 0) {
      sStack_58 = uStack_a8;
      local_60 = local_b0;
      local_50 = local_a0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_60,local_a0,uStack_a8);
    }
    RawTextInput::setTextPrivate(pRVar2,&local_60);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    *(undefined8 *)pRVar2 = 0;
    *(undefined8 *)(this + 0x208) = 0;
    this[0x5e0] = (TextInput)((byte)this[0x5e0] | 0xb);
    RawTextInput::captureJournalEntry(pRVar2,uVar9,uVar10);
    pcVar1 = local_a0;
  }
  if (((byte)local_b0._0_1_ & 1) != 0) {
    operator_delete(pcVar1);
  }
LAB_004d5d64:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d5da0  rive::TextInput::displayedText =====

/* rive::TextInput::displayedText() const */

void rive::TextInput::displayedText(void)

{
  bool bVar1;
  bool bVar2;
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  if (*(char *)(in_x0 + 0x194) == '\0') {
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)in_x8);
    uVar4 = (ulong)(*(byte *)(in_x0 + 0x1c0) >> 1);
    pcVar5 = (char *)(in_x0 + 0x1c1);
    if ((*(byte *)(in_x0 + 0x1c0) & 1) != 0) {
      uVar4 = *(ulong *)(in_x0 + 0x1c8);
      pcVar5 = *(char **)(in_x0 + 0x1d0);
    }
    if (uVar4 != 0) {
      bVar1 = false;
      do {
        if ((*pcVar5 == '\r') || (*pcVar5 == '\n')) {
          bVar2 = !bVar1;
          bVar1 = true;
          if (bVar2) goto LAB_004d5e2c;
        }
        else {
          bVar1 = false;
LAB_004d5e2c:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)in_x8);
        }
        uVar4 = uVar4 - 1;
        pcVar5 = pcVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  else {
    if ((*(byte *)(in_x0 + 0x1c0) & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(in_x8,*(char **)(in_x0 + 0x1d0),*(ulong *)(in_x0 + 0x1c8));
      return;
    }
    uVar6 = *(undefined8 *)(in_x0 + 0x1c0);
    uVar3 = *(undefined8 *)(in_x0 + 0x1d0);
    *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(in_x0 + 0x1c8);
    *(undefined8 *)in_x8 = uVar6;
    *(undefined8 *)(in_x8 + 0x10) = uVar3;
  }
  return;
}


// ===== 004d5e90  rive::TextInput::selectionRadiusChanged =====

/* rive::TextInput::selectionRadiusChanged() */

void __thiscall rive::TextInput::selectionRadiusChanged(TextInput *this)

{
  if (*(float *)(this + 0x630) != *(float *)(this + 400)) {
    *(float *)(this + 0x630) = *(float *)(this + 400);
    this[0x5e0] = (TextInput)((byte)this[0x5e0] | 2);
  }
                    /* WARNING: Could not recover jumptable at 0x004d5eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x250))();
  return;
}


// ===== 004d5ebc  rive::TextInput::multilineChanged =====

/* rive::TextInput::multilineChanged() */

void __thiscall rive::TextInput::multilineChanged(TextInput *this)

{
  updateMultiline(this,true);
  return;
}


// ===== 004d5ec4  rive::TextInput::updateMultiline =====

/* rive::TextInput::updateMultiline(bool) */

void __thiscall rive::TextInput::updateMultiline(TextInput *this,bool param_1)

{
  uint uVar1;
  TextInput TVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  
  TVar2 = this[0x194];
  fVar7 = 0.0;
  if (TVar2 != (TextInput)0x0) {
    fVar7 = *(float *)(this + 0x1fc);
  }
  if (*(float *)(this + 0x5f0) != fVar7) {
    *(float *)(this + 0x5f0) = fVar7;
    this[0x5e0] = (TextInput)((byte)this[0x5e0] | 0xb);
  }
  if (this[0x5e9] != TVar2) {
    this[0x5e9] = TVar2;
    this[0x5e0] = (TextInput)((byte)this[0x5e0] | 0xb);
  }
  plVar3 = *(long **)(this + 0x1e0);
  if (plVar3 == (long *)0x0) goto LAB_004d5fc0;
  if (TVar2 == (TextInput)0x0) {
    fVar7 = *(float *)((long)plVar3 + 0x9c);
    if (fVar7 == 0.0) goto LAB_004d5fc0;
    plVar5 = (long *)plVar3[0x20];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0xd8))(plVar5);
      plVar3 = *(long **)(this + 0x1e0);
      fVar7 = *(float *)((long)plVar3 + 0x9c);
    }
    if (fVar7 == 0.0) goto LAB_004d5fc0;
    lVar6 = 0x20;
    *(undefined4 *)((long)plVar3 + 0x9c) = 0;
  }
  else {
    fVar7 = *(float *)(plVar3 + 0x13);
    if (fVar7 == 0.0) goto LAB_004d5fc0;
    plVar5 = (long *)plVar3[0x20];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0xd8))(plVar5);
      plVar3 = *(long **)(this + 0x1e0);
      fVar7 = *(float *)(plVar3 + 0x13);
    }
    if (fVar7 == 0.0) goto LAB_004d5fc0;
    *(undefined4 *)(plVar3 + 0x13) = 0;
    lVar6 = 0x1f;
  }
  (**(code **)(*plVar3 + lVar6 * 8))();
LAB_004d5fc0:
  if (param_1) {
    syncDisplayedTextFromSource(this,true);
  }
  for (plVar3 = *(long **)(this + 0x30); plVar3 != (long *)0x0; plVar3 = (long *)plVar3[6]) {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x199);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x2e0))(plVar3,0);
    }
  }
  if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar6 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar6 + 0xc32) = 1;
    *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar6 + 0xbd4)) {
      *(uint *)(lVar6 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004d6068  rive::TextInput::markPaintDirty =====

/* rive::TextInput::markPaintDirty() */

void __thiscall rive::TextInput::markPaintDirty(TextInput *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 9 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x200;
    (**(code **)(*(long *)this + 0x70))();
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004d60cc  rive::TextInput::markPaintDirty =====

/* non-virtual thunk to rive::TextInput::markPaintDirty() */

void __thiscall rive::TextInput::markPaintDirty(TextInput *this)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  
  uVar2 = *(ushort *)(this + -0x138);
  if ((uVar2 >> 9 & 1) == 0) {
    *(ushort *)(this + -0x138) = uVar2 | 0x200;
    (**(code **)(*(long *)(this + -0x198) + 0x70))(this + -0x198);
    lVar3 = *(long *)(this + -0x118);
    uVar1 = *(uint *)(this + -0x160);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004d6144  rive::TextInput::markShapeDirty =====

/* rive::TextInput::markShapeDirty() */

void __thiscall rive::TextInput::markShapeDirty(TextInput *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
    (**(code **)(*(long *)this + 0x70))();
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004d61a8  rive::TextInput::markShapeDirty =====

/* non-virtual thunk to rive::TextInput::markShapeDirty() */

void __thiscall rive::TextInput::markShapeDirty(TextInput *this)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  
  uVar2 = *(ushort *)(this + -0x138);
  if ((uVar2 >> 4 & 1) == 0) {
    *(ushort *)(this + -0x138) = uVar2 | 0x10;
    (**(code **)(*(long *)(this + -0x198) + 0x70))(this + -0x198);
    lVar3 = *(long *)(this + -0x118);
    uVar1 = *(uint *)(this + -0x160);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004d6220  rive::TextInput::localBounds =====

/* rive::TextInput::localBounds() const */

undefined4 __thiscall rive::TextInput::localBounds(TextInput *this)

{
  return *(undefined4 *)(this + 0x5c0);
}


// ===== 004d6234  rive::TextInput::localBounds =====

/* non-virtual thunk to rive::TextInput::localBounds() const */

undefined4 __thiscall rive::TextInput::localBounds(TextInput *this)

{
  return *(undefined4 *)(this + 0x428);
}


// ===== 004d6248  rive::TextInput::onAddedClean =====

/* rive::TextInput::onAddedClean(rive::CoreContext*) */

bool rive::TextInput::onAddedClean(CoreContext *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  TextStyle *pTVar9;
  long *plVar10;
  long lVar11;
  
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x5b);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
  }
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  if (*(long *)(param_1 + 0x90) - lVar1 != 0) {
    lVar11 = *(long *)(param_1 + 0x90) - lVar1 >> 3;
    lVar8 = 0;
    do {
      plVar5 = *(long **)(lVar1 + lVar8 * 8);
      if ((plVar5 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x23d), (uVar6 & 1) != 0)) {
        if (lVar8 != lVar11) {
          uVar7 = *(undefined8 *)(lVar1 + lVar8 * 8);
          goto LAB_004d62d8;
        }
        break;
      }
      lVar8 = lVar8 + 1;
    } while (lVar11 != lVar8);
  }
  uVar7 = 0;
LAB_004d62d8:
  *(undefined8 *)(param_1 + 0x1d8) = uVar7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_1 + 0x1c0),(basic_string *)(param_1 + 0x178));
  pTVar9 = *(TextStyle **)(param_1 + 0x1d8);
  if (pTVar9 == (TextStyle *)0x0) goto LAB_004d645c;
  plVar5 = *(long **)(pTVar9 + 200);
  if (plVar5 == (long *)0x0) {
    if ((*(long *)(pTVar9 + 0xe8) != *(long *)(pTVar9 + 0xf0)) ||
       (*(long *)(pTVar9 + 0x100) != *(long *)(pTVar9 + 0x108))) {
      TextStyle::updateVariableFont(pTVar9);
      plVar5 = *(long **)(pTVar9 + 200);
      if (plVar5 != (long *)0x0) goto LAB_004d6330;
    }
    if ((*(long *)(pTVar9 + 0xb8) == 0) ||
       (plVar5 = *(long **)(*(long *)(pTVar9 + 0xb8) + 0x80), plVar5 == (long *)0x0))
    goto LAB_004d645c;
  }
LAB_004d6330:
  FUN_00340fb0(1,plVar5 + 1);
  iVar4 = FUN_00340fe0(0xffffffff,plVar5 + 1);
  if (iVar4 == 1) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  pTVar9 = *(TextStyle **)(param_1 + 0x1d8);
  plVar5 = *(long **)(pTVar9 + 200);
  if (plVar5 == (long *)0x0) {
    if ((*(long *)(pTVar9 + 0xe8) != *(long *)(pTVar9 + 0xf0)) ||
       (*(long *)(pTVar9 + 0x100) != *(long *)(pTVar9 + 0x108))) {
      TextStyle::updateVariableFont(pTVar9);
      plVar5 = *(long **)(pTVar9 + 200);
      if (plVar5 != (long *)0x0) goto LAB_004d63a4;
    }
    if (*(long *)(pTVar9 + 0xb8) == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = *(long **)(*(long *)(pTVar9 + 0xb8) + 0x80);
      if (plVar5 != (long *)0x0) goto LAB_004d63a4;
    }
  }
  else {
LAB_004d63a4:
    FUN_00340fb0(1,plVar5 + 1);
  }
  plVar10 = *(long **)(param_1 + 0x210);
  if (plVar10 != plVar5) {
    if (plVar5 != (long *)0x0) {
      FUN_00340fb0(1,plVar5 + 1);
      plVar10 = *(long **)(param_1 + 0x210);
    }
    *(long **)(param_1 + 0x210) = plVar5;
    if ((plVar10 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,plVar10 + 1), iVar4 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    param_1[0x5e0] = (CoreContext)((byte)param_1[0x5e0] | 0xb);
  }
  if ((plVar5 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,plVar5 + 1), iVar4 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (*(float *)(param_1 + 0x218) != *(float *)(*(long *)(param_1 + 0x1d8) + 0xa0)) {
    *(float *)(param_1 + 0x218) = *(float *)(*(long *)(param_1 + 0x1d8) + 0xa0);
    param_1[0x5e0] = (CoreContext)((byte)param_1[0x5e0] | 0xb);
  }
LAB_004d645c:
  syncDisplayedTextFromSource((TextInput *)param_1,false);
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (plVar5 = *(long **)(*(long *)(param_1 + 0x30) + 0x30), plVar5 != (long *)0x0)) &&
     (uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x26), (uVar6 & 1) != 0)) {
    puVar3 = (undefined8 *)plVar5[0x20];
    for (puVar2 = (undefined8 *)plVar5[0x1f]; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      plVar5 = (long *)*puVar2;
      uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x209);
      if ((uVar6 & 1) != 0) {
        *(long **)(param_1 + 0x1e0) = plVar5;
        break;
      }
    }
  }
  updateMultiline((TextInput *)param_1,false);
  return *(long *)(param_1 + 0x1d8) == 0;
}


// ===== 004d6504  rive::TextInput::update =====

/* rive::TextInput::update(rive::ComponentDirt) */

void __thiscall rive::TextInput::update(TextInput *this,uint param_2)

{
  undefined8 *puVar1;
  TextInput TVar2;
  uint3 uVar3;
  bool bVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  Factory *pFVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  float fVar17;
  undefined1 auVar18 [16];
  byte bVar19;
  byte bVar25;
  float fVar20;
  undefined8 uVar21;
  byte bVar23;
  byte bVar24;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  
  if ((param_2 >> 6 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this);
  }
  if (((param_2 & 0xffff) >> 7 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this);
  }
  if (((param_2 & 0xffff) >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xa0);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      fVar46 = (float)(**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      *(float *)(this + 0xe8) = fVar46 * *(float *)(this + 0xe8);
    }
  }
  if ((param_2 & 0x210) == 0) {
    return;
  }
  pFVar8 = *(Factory **)(*(long *)(this + 0x40) + 0xbd8);
  if (*(float *)(this + 0x218) != *(float *)(*(long *)(this + 0x1d8) + 0xa0)) {
    *(float *)(this + 0x218) = *(float *)(*(long *)(this + 0x1d8) + 0xa0);
    this[0x5e0] = (TextInput)((byte)this[0x5e0] | 0xb);
  }
  bVar5 = RawTextInput::update((RawTextInput *)(this + 0x200),pFVar8);
  if ((bVar5 & 1) != 0) {
    auVar26._0_8_ = *(undefined8 *)(this + 0xa8);
    fVar17 = *(float *)(this + 0x5c4);
    fVar43 = *(float *)(this + 0x5cc);
    auVar26._8_8_ = auVar26._0_8_;
    fVar46 = (float)*(undefined8 *)(this + 0xa4);
    fVar42 = *(float *)(this + 0xb0);
    auVar39._0_4_ = (float)*(undefined8 *)(this + 0x5c0);
    auVar39._4_4_ = fVar17;
    auVar26 = NEON_rev64(auVar26,4);
    auVar37._0_4_ = (float)*(undefined8 *)(this + 0x5c8);
    auVar37._4_4_ = fVar43;
    auVar39._8_8_ = *(undefined8 *)(this + 0x5c8);
    uVar48 = NEON_fcmeq(auVar26._0_8_,0,4);
    auVar37._8_8_ = *(undefined8 *)(this + 0x5c0);
    auVar35._0_12_ = auVar39._0_12_;
    auVar35._12_4_ = fVar17;
    uVar48 = CONCAT17(~(byte)((ulong)uVar48 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar48 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar48 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar48 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar48 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar48 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar48 >>
                                                                                   8),~(byte)uVar48)
                                                                  ))))));
    uVar7 = NEON_umaxp(uVar48,uVar48,4);
    auVar40._0_12_ = auVar37._0_12_;
    auVar40._12_4_ = fVar43;
    if ((uVar7 & 1) == 0) {
      auVar28._0_4_ = fVar46 * auVar39._0_4_;
      auVar28._4_4_ = fVar42 * fVar17;
      auVar28._8_4_ = fVar46 * auVar37._0_4_;
      auVar28._12_4_ = fVar42 * fVar17;
      auVar38._8_4_ = 0xff800000;
      auVar38._0_8_ = 0xff800000ff800000;
      auVar38._12_4_ = 0xff800000;
      auVar32._8_4_ = 0x7f800000;
      auVar32._0_8_ = 0x7f8000007f800000;
      auVar32._12_4_ = 0x7f800000;
      auVar22._0_4_ = fVar46 * auVar37._0_4_;
      auVar22._4_4_ = fVar42 * fVar43;
      auVar22._8_4_ = fVar46 * auVar39._0_4_;
      auVar22._12_4_ = fVar42 * fVar43;
      auVar26 = NEON_fminnm(auVar28,auVar32,4);
      auVar37 = NEON_fmaxnm(auVar28,auVar38,4);
      auVar26 = NEON_fminnm(auVar22,auVar26,4);
      auVar37 = NEON_fmaxnm(auVar22,auVar37,4);
    }
    else {
      auVar35 = NEON_rev64(auVar35,4);
      auVar40 = NEON_rev64(auVar40,4);
      auVar41._8_4_ = 0xff800000;
      auVar41._0_8_ = 0xff800000ff800000;
      auVar41._12_4_ = 0xff800000;
      auVar36._0_4_ = auVar26._0_4_ * auVar35._0_4_ + auVar39._0_4_ * fVar46;
      auVar36._4_4_ = auVar26._4_4_ * auVar35._4_4_ + fVar17 * fVar42;
      auVar36._8_4_ = auVar26._8_4_ * auVar35._8_4_ + auVar37._0_4_ * fVar46;
      auVar36._12_4_ = auVar26._12_4_ * auVar35._12_4_ + fVar17 * fVar42;
      auVar31._8_4_ = 0x7f800000;
      auVar31._0_8_ = 0x7f8000007f800000;
      auVar31._12_4_ = 0x7f800000;
      auVar27._0_4_ = auVar26._0_4_ * auVar40._0_4_ + auVar37._0_4_ * fVar46;
      auVar27._4_4_ = auVar26._4_4_ * auVar40._4_4_ + fVar43 * fVar42;
      auVar27._8_4_ = auVar26._8_4_ * auVar40._8_4_ + auVar39._0_4_ * fVar46;
      auVar27._12_4_ = auVar26._12_4_ * auVar40._12_4_ + fVar43 * fVar42;
      auVar26 = NEON_fminnm(auVar36,auVar31,4);
      auVar37 = NEON_fmaxnm(auVar36,auVar41,4);
      auVar26 = NEON_fminnm(auVar27,auVar26,4);
      auVar37 = NEON_fmaxnm(auVar27,auVar37,4);
    }
    auVar40 = NEON_ext(auVar26,auVar26,8,1);
    auVar39 = NEON_ext(auVar37,auVar37,8,1);
    uVar48 = NEON_fminnm(auVar26._0_8_,auVar40._0_8_,4);
    uVar21 = NEON_fmaxnm(auVar37._0_8_,auVar39._0_8_,4);
    fVar42 = (float)((ulong)uVar48 >> 0x20);
    fVar47 = (float)((ulong)uVar21 >> 0x20);
    uVar30 = NEON_fcmge(CONCAT44(fVar47 - fVar42,(float)uVar21 - (float)uVar48),0,4);
    iVar29 = CONCAT13((byte)((ulong)DAT_0024e7a8 >> 0x18) & ~(byte)((ulong)uVar30 >> 0x18),
                      CONCAT12((byte)((ulong)DAT_0024e7a8 >> 0x10) & ~(byte)((ulong)uVar30 >> 0x10),
                               CONCAT11((byte)((ulong)DAT_0024e7a8 >> 8) &
                                        ~(byte)((ulong)uVar30 >> 8),
                                        (byte)DAT_0024e7a8 & ~(byte)uVar30)));
    iVar34 = (int)(CONCAT17((byte)((ulong)DAT_0024e7a8 >> 0x38) & ~(byte)((ulong)uVar30 >> 0x38),
                            CONCAT16((byte)((ulong)DAT_0024e7a8 >> 0x30) &
                                     ~(byte)((ulong)uVar30 >> 0x30),
                                     CONCAT15((byte)((ulong)DAT_0024e7a8 >> 0x28) &
                                              ~(byte)((ulong)uVar30 >> 0x28),
                                              CONCAT14((byte)((ulong)DAT_0024e7a8 >> 0x20) &
                                                       ~(byte)((ulong)uVar30 >> 0x20),iVar29)))) >>
                  0x20);
    iVar16 = iVar29 + iVar34;
    auVar33._0_8_ =
         CONCAT17((char)((uint)iVar16 >> 0x18),
                  CONCAT16((char)((uint)iVar16 >> 0x10),
                           CONCAT15((char)((uint)iVar16 >> 8),CONCAT14((char)iVar16,iVar29 + iVar34)
                                   ))) & 0x303030303030303;
    auVar33._8_8_ = 0;
    auVar26 = NEON_cmeq(auVar33,ZEXT716(0),1);
    bVar25 = auVar26[0];
    uVar3 = CONCAT12(bVar25,CONCAT11(bVar25,bVar25));
    bVar19 = bVar25 & 3 | (byte)((uVar3 & 3) << 2) | (byte)(((uVar3 & 0xff00) >> 8 & 3) << 4) |
             (byte)((bVar25 & 3) << 6);
    bVar23 = bVar25 & 3 | (byte)(((bVar25 & 3) << 10) >> 8) | (byte)(((bVar25 & 3) << 0xc) >> 8) |
             (byte)(((bVar25 & 3) << 0xe) >> 8);
    bVar24 = bVar25 & 3 | (byte)(((bVar25 & 3) << 0x12) >> 0x10) |
             (byte)(((bVar25 & 3) << 0x14) >> 0x10) | (byte)(((bVar25 & 3) << 0x16) >> 0x10);
    bVar25 = bVar25 & 3 | (byte)(((bVar25 & 3) << 0x1a) >> 0x18) |
             (byte)(((bVar25 & 3) << 0x1c) >> 0x18) | (byte)(((uint)bVar25 << 0x1e) >> 0x18);
    fVar17 = (float)*(undefined8 *)(this + 0xb4);
    fVar46 = fVar17 + (float)uVar48;
    fVar43 = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20);
    fVar42 = fVar43 + fVar42;
    fVar17 = fVar17 + (float)uVar21;
    fVar43 = fVar43 + fVar47;
    auVar18._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & bVar25,
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & bVar24,
                           CONCAT15((byte)((uint)fVar42 >> 8) & bVar23,
                                    CONCAT14(SUB41(fVar42,0) & bVar19,
                                             CONCAT13((byte)((uint)fVar46 >> 0x18) & bVar25,
                                                      CONCAT12((byte)((uint)fVar46 >> 0x10) & bVar24
                                                               ,CONCAT11((byte)((uint)fVar46 >> 8) &
                                                                         bVar23,SUB41(fVar46,0) &
                                                                                bVar19)))))));
    auVar18[8] = SUB41(fVar17,0) & bVar19;
    auVar18[9] = (byte)((uint)fVar17 >> 8) & bVar23;
    auVar18[10] = (byte)((uint)fVar17 >> 0x10) & bVar24;
    auVar18[0xb] = (byte)((uint)fVar17 >> 0x18) & bVar25;
    auVar18[0xc] = SUB41(fVar43,0) & bVar19;
    auVar18[0xd] = (byte)((uint)fVar43 >> 8) & bVar23;
    auVar18[0xe] = (byte)((uint)fVar43 >> 0x10) & bVar24;
    auVar18[0xf] = (byte)((uint)fVar43 >> 0x18) & bVar25;
    *(long *)(this + 0x1b8) = auVar18._8_8_;
    *(undefined8 *)(this + 0x1b0) = auVar18._0_8_;
    if (this[0x5e9] == (TextInput)0x1) {
      for (plVar6 = *(long **)(this + 0x30); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[6]) {
        uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x199);
        if ((uVar7 & 1) != 0) {
          (**(code **)(*plVar6 + 0x2e0))(plVar6,0);
        }
      }
    }
  }
  if (1 < bVar5) {
    lVar10 = *(long *)(this + 0x88);
    lVar11 = *(long *)(this + 0x90) - lVar10;
    if (lVar11 == 0) {
      lVar14 = 0;
    }
    else {
      lVar13 = 0;
      do {
        plVar6 = *(long **)(lVar10 + lVar13 * 8);
        if ((plVar6 != (long *)0x0) &&
           (uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x23a), lVar14 = lVar13, (uVar7 & 1) != 0))
        break;
        lVar13 = lVar13 + 1;
        lVar14 = lVar11 >> 3;
      } while (lVar11 >> 3 != lVar13);
    }
    if (lVar14 * 8 - lVar11 != 0) {
      plVar6 = (long *)(lVar10 + lVar14 * 8);
      do {
        puVar1 = *(undefined8 **)(*plVar6 + 400);
        for (puVar15 = *(undefined8 **)(*plVar6 + 0x188); puVar15 != puVar1; puVar15 = puVar15 + 1)
        {
          plVar12 = (long *)*puVar15;
          uVar7 = (**(code **)(*plVar12 + 0x18))(plVar12,0x15);
          if ((uVar7 & 1) != 0) {
            (**(code **)(*plVar12 + 0xb8))(plVar12);
          }
        }
        do {
          plVar6 = plVar6 + 1;
          if (plVar6 == (long *)(lVar10 + lVar11)) goto LAB_004d675c;
          plVar12 = (long *)*plVar6;
        } while ((plVar12 == (long *)0x0) ||
                (uVar7 = (**(code **)(*plVar12 + 0x18))(plVar12,0x23a), (uVar7 & 1) == 0));
      } while (plVar6 != (long *)(lVar10 + lVar11));
    }
  }
LAB_004d675c:
  if (*(float *)(this + 500) != 0.0) {
    return;
  }
  if (*(float *)(this + 0x1f8) != 0.0) {
    return;
  }
  plVar6 = *(long **)(this + 0x1e0);
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (this[0x1e8] != (TextInput)0x0) {
    return;
  }
  lVar10 = plVar6[6];
  bVar5 = *(byte *)((long)plVar6 + 0x8c);
  lVar11 = *(long *)(lVar10 + 0x30);
  uVar9 = (uint)bVar5;
  fVar46 = *(float *)(lVar11 + 0x200);
  if (uVar9 == 1) {
    fVar42 = *(float *)(lVar11 + 0x204);
LAB_004d693c:
    fVar42 = fVar42 - *(float *)(lVar10 + 0x1fc);
    if (fVar42 <= 0.0) {
      fVar42 = 0.0;
    }
  }
  else {
    fVar42 = *(float *)(lVar11 + 0x204);
    fVar46 = fVar46 - *(float *)(lVar10 + 0x1f8);
    if (fVar46 <= 0.0) {
      fVar46 = 0.0;
    }
    if (uVar9 != 0) goto LAB_004d693c;
  }
  TVar2 = this[0x194];
  fVar17 = *(float *)(plVar6 + 0x13);
  fVar44 = *(float *)((long)plVar6 + 0x9c);
  fVar45 = *(float *)(this + 0x610);
  fVar47 = fVar17 + *(float *)(this + 0x608);
  fVar43 = fVar44 + *(float *)(this + 0x60c);
  bVar4 = 1 < uVar9 - 1;
  if ((TVar2 != (TextInput)0x0 || (bVar5 & 0xfd) != 0) || (0.0 <= fVar47)) {
    fVar20 = fVar46 + -1.0;
    if ((fVar47 != fVar20 && fVar47 < fVar20 == (NAN(fVar47) || NAN(fVar20))) &&
        (TVar2 == (TextInput)0x0 && (bVar5 & 0xfd) == 0)) {
      plVar12 = (long *)plVar6[0x20];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0xd8))(plVar12);
        plVar6 = *(long **)(this + 0x1e0);
        fVar17 = *(float *)(plVar6 + 0x13);
      }
      fVar47 = fVar17 - ((fVar47 - fVar46) + 1.0);
      if (fVar17 != fVar47) goto LAB_004d6a08;
    }
  }
  else {
    plVar12 = (long *)plVar6[0x20];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0xd8))(plVar12);
      plVar6 = *(long **)(this + 0x1e0);
      fVar17 = *(float *)(plVar6 + 0x13);
    }
    fVar47 = fVar17 - fVar47;
    if (fVar17 != fVar47) {
LAB_004d6a08:
      *(float *)(plVar6 + 0x13) = fVar47;
      (**(code **)(*plVar6 + 0xf8))();
    }
  }
  if (0.0 <= fVar43 || (bVar4 || TVar2 == (TextInput)0x0)) {
    fVar44 = fVar44 + fVar45;
    if ((fVar44 != fVar42 && fVar44 < fVar42 == (NAN(fVar44) || NAN(fVar42))) &&
        (!bVar4 && TVar2 != (TextInput)0x0)) {
      plVar6 = *(long **)(this + 0x1e0);
      plVar12 = (long *)plVar6[0x20];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0xd8))(plVar12);
        plVar6 = *(long **)(this + 0x1e0);
      }
      fVar43 = *(float *)((long)plVar6 + 0x9c) - (fVar44 - fVar42);
      if (*(float *)((long)plVar6 + 0x9c) != fVar43) goto LAB_004d6ac4;
    }
  }
  else {
    plVar6 = *(long **)(this + 0x1e0);
    plVar12 = (long *)plVar6[0x20];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0xd8))(plVar12);
      plVar6 = *(long **)(this + 0x1e0);
    }
    fVar43 = *(float *)((long)plVar6 + 0x9c) - fVar43;
    if (*(float *)((long)plVar6 + 0x9c) != fVar43) {
LAB_004d6ac4:
      *(float *)((long)plVar6 + 0x9c) = fVar43;
                    /* WARNING: Could not recover jumptable at 0x004d6af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x100))();
      return;
    }
  }
  return;
}


// ===== 004d6af4  rive::TextInput::measureLayout =====

/* rive::TextInput::measureLayout(float, rive::LayoutMeasureMode, float, rive::LayoutMeasureMode) */

float __thiscall
rive::TextInput::measureLayout
          (float param_1,float param_2,TextInput *this,char param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 3.4028235e+38;
  fVar2 = fVar1;
  if (param_4 != '\0') {
    fVar2 = param_1;
  }
  fVar3 = fVar1;
  if (param_5 != '\0') {
    fVar3 = param_2;
  }
  fVar2 = (float)RawTextInput::measure((RawTextInput *)(this + 0x200),fVar2,fVar3);
  return fVar1 - fVar2;
}


// ===== 004d6b2c  rive::TextInput::measureLayout =====

/* non-virtual thunk to rive::TextInput::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

float __thiscall
rive::TextInput::measureLayout
          (float param_1,float param_2,TextInput *this,char param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 3.4028235e+38;
  fVar2 = fVar1;
  if (param_4 != '\0') {
    fVar2 = param_1;
  }
  fVar3 = fVar1;
  if (param_5 != '\0') {
    fVar3 = param_2;
  }
  fVar2 = (float)RawTextInput::measure((RawTextInput *)(this + 0x138),fVar2,fVar3);
  return fVar1 - fVar2;
}


// ===== 004d6b64  rive::TextInput::controlSize =====

/* rive::TextInput::controlSize(rive::Vec2D, rive::LayoutScaleType, rive::LayoutScaleType,
   rive::LayoutDirection) */

void rive::TextInput::controlSize(undefined4 param_1,TextInput *param_2)

{
  *(undefined4 *)(param_2 + 0x1fc) = param_1;
  updateMultiline(param_2,false);
  return;
}


// ===== 004d6b70  rive::TextInput::controlSize =====

/* non-virtual thunk to rive::TextInput::controlSize(rive::Vec2D, rive::LayoutScaleType,
   rive::LayoutScaleType, rive::LayoutDirection) */

void __thiscall rive::TextInput::controlSize(undefined4 param_1,TextInput *this)

{
  *(undefined4 *)(this + 0x134) = param_1;
  updateMultiline(this + -200,false);
  return;
}


// ===== 004d6b84  rive::TextInput::strippedLineBreaks =====

/* rive::TextInput::strippedLineBreaks(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall rive::TextInput::strippedLineBreaks(TextInput *this,basic_string *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 *in_x8;
  TextInput *pTVar3;
  ulong uVar4;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)in_x8);
  uVar4 = *(ulong *)(this + 8);
  pTVar3 = *(TextInput **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    pTVar3 = this + 1;
    uVar4 = (ulong)((byte)*this >> 1);
  }
  if (uVar4 != 0) {
    bVar1 = false;
    do {
      if ((*pTVar3 == (TextInput)0xd) || (*pTVar3 == (TextInput)0xa)) {
        bVar2 = !bVar1;
        bVar1 = true;
        if (bVar2) goto LAB_004d6be8;
      }
      else {
        bVar1 = false;
LAB_004d6be8:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back((char)in_x8);
      }
      uVar4 = uVar4 - 1;
      pTVar3 = pTVar3 + 1;
    } while (uVar4 != 0);
  }
  return;
}


// ===== 004d6c34  rive::TextInput::syncSourceTextFromRaw =====

/* rive::TextInput::syncSourceTextFromRaw() */

void __thiscall rive::TextInput::syncSourceTextFromRaw(TextInput *this)

{
  size_t sVar1;
  size_t sVar2;
  TextInput TVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *__s2;
  TextInput *__s2_00;
  ulong uVar8;
  ulong uVar9;
  TextInput *pTVar10;
  char *pcVar11;
  ulong uVar12;
  byte bVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_d0;
  size_t sStack_c8;
  TextInput *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ulong local_98;
  size_t sStack_90;
  char *local_88;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  RawTextInput::text();
  if (this[0x194] == (TextInput)0x0) {
    local_98 = 0;
    sStack_90 = 0;
    local_88 = (char *)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)&local_98);
    uVar12 = (ulong)((byte)local_80 >> 1);
    uVar8 = uVar12;
    pcVar14 = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar8 = uStack_78;
      pcVar14 = local_70;
    }
    if (uVar8 != 0) {
      bVar5 = false;
      do {
        if ((*pcVar14 == '\r') || (*pcVar14 == '\n')) {
          bVar6 = !bVar5;
          bVar5 = true;
          if (bVar6) goto LAB_004d6cc4;
        }
        else {
          bVar5 = false;
LAB_004d6cc4:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)&local_98);
        }
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar14 + 1;
      } while (uVar8 != 0);
      uVar12 = (ulong)((byte)local_80 >> 1);
    }
    pcVar14 = local_88;
    sVar1 = sStack_90;
    uVar9 = (ulong)((byte)local_98 >> 1);
    uVar8 = uVar9;
    if ((local_98 & 1) != 0) {
      uVar8 = sStack_90;
    }
    if (((byte)local_80 & 1) != 0) {
      uVar12 = uStack_78;
    }
    if (uVar8 != uVar12) {
LAB_004d6d7c:
      if ((local_98 & 1) == 0) {
        uStack_a8 = sStack_90;
        local_b0 = local_98;
        local_a0 = local_88;
      }
      else {
LAB_004d6db0:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,pcVar14,sVar1);
      }
      uVar16 = *(undefined8 *)(this + 0x208);
      uVar15 = *(undefined8 *)(this + 0x200);
      *(undefined4 *)(this + 0x600) = 0xbf800000;
      if ((local_b0 & 1) == 0) {
        uStack_58 = uStack_a8;
        local_60 = local_b0;
        local_50 = local_a0;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_60,local_a0,uStack_a8);
      }
      RawTextInput::setTextPrivate((RawTextInput *)(this + 0x200),&local_60);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      iVar7 = 0;
      if (7 < (ulong)(*(long *)(this + 0x4d0) - *(long *)(this + 0x4c8))) {
        iVar7 = (int)((ulong)(*(long *)(this + 0x4d0) - *(long *)(this + 0x4c8)) >> 2) + -1;
      }
      this[0x5e0] = (TextInput)((byte)this[0x5e0] | 0xb);
      uVar8 = NEON_umin(CONCAT44(iVar7,iVar7),
                        CONCAT44((int)((ulong)uVar16 >> 0x20),(int)((ulong)uVar15 >> 0x20)),4);
      *(ulong *)(this + 0x208) = uVar8 & 0xffffffff00000000 | 0xffffffff;
      *(ulong *)(this + 0x200) = uVar8 << 0x20 | 0xffffffff;
      RawTextInput::captureJournalEntry(this + 0x200,uVar15,uVar16);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      uStack_78 = sStack_90;
      local_80 = local_98;
      local_70 = local_88;
      goto LAB_004d6ea0;
    }
    __s2 = (char *)((ulong)&local_80 | 1);
    if (((byte)local_80 & 1) != 0) {
      __s2 = local_70;
    }
    if ((local_98 & 1) == 0) {
      if (1 < (byte)local_98) {
        pcVar11 = (char *)((ulong)&local_98 | 1);
        do {
          if (*pcVar11 != *__s2) goto LAB_004d6d7c;
          uVar9 = uVar9 - 1;
          pcVar11 = pcVar11 + 1;
          __s2 = __s2 + 1;
        } while (uVar9 != 0);
        if ((local_98 & 1) != 0) goto LAB_004d6fd8;
      }
      goto LAB_004d6ea0;
    }
    iVar7 = memcmp(local_88,__s2,sStack_90);
    if (iVar7 != 0) goto LAB_004d6db0;
LAB_004d6fd8:
    operator_delete(local_88);
    TVar3 = this[0x1c0];
  }
  else {
LAB_004d6ea0:
    TVar3 = this[0x1c0];
  }
  if (((byte)TVar3 & 1) != 0) {
    operator_delete(*(void **)(this + 0x1d0));
  }
  uVar8 = local_80;
  local_80 = local_80 & 0xffffffffffff0000;
  *(ulong *)(this + 0x1c8) = uStack_78;
  *(ulong *)(this + 0x1c0) = uVar8;
  *(char **)(this + 0x1d0) = local_70;
  if (((byte)this[0x1c0] & 1) == 0) {
    sStack_c8 = *(size_t *)(this + 0x1c8);
    local_d0 = *(ulong *)(this + 0x1c0);
    local_c0 = *(TextInput **)(this + 0x1d0);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_d0,*(char **)(this + 0x1d0),*(ulong *)(this + 0x1c8));
  }
  TVar3 = this[0x178];
  uVar8 = (ulong)((byte)TVar3 >> 1);
  sVar1 = uVar8;
  if (((byte)TVar3 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x180);
  }
  bVar13 = (byte)local_d0._0_1_ & 1;
  sVar2 = (ulong)((byte)local_d0._0_1_ >> 1);
  if ((local_d0 & 1) != 0) {
    sVar2 = sStack_c8;
  }
  if (sVar1 == sVar2) {
    __s2_00 = (TextInput *)((ulong)&local_d0 | 1);
    if ((local_d0 & 1) != 0) {
      __s2_00 = local_c0;
    }
    if (((byte)TVar3 & 1) == 0) {
      if (1 < (byte)TVar3) {
        pTVar10 = this + 0x179;
        do {
          if (*pTVar10 != *__s2_00) goto LAB_004d6f70;
          uVar8 = uVar8 - 1;
          pTVar10 = pTVar10 + 1;
          __s2_00 = __s2_00 + 1;
        } while (uVar8 != 0);
      }
      goto LAB_004d6f94;
    }
    iVar7 = memcmp(*(void **)(this + 0x188),__s2_00,*(size_t *)(this + 0x180));
    if (iVar7 == 0) goto LAB_004d6f94;
  }
LAB_004d6f70:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x178),(basic_string *)&local_d0);
  (**(code **)(*(long *)this + 0x230))(this);
  bVar13 = (byte)local_d0._0_1_ & 1;
LAB_004d6f94:
  if (bVar13 != 0) {
    operator_delete(local_c0);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004d6ff0  rive::TextInput::keyInput =====

/* rive::TextInput::keyInput(rive::Key, rive::KeyModifiers, bool, bool) */

undefined4 rive::TextInput::keyInput(TextInput *param_1,ushort param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined2 local_50;
  undefined1 local_4e;
  long local_38;
  
  lVar2 = tpidr_el0;
  uVar4 = 0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_4 & 1) == 0) goto LAB_004d71f0;
  uVar1 = param_3 & 0xff;
  if (param_2 < 0x106) {
    if (param_2 < 0x103) {
      if (param_2 != 0x5a) {
        if (param_2 != 0x101) goto LAB_004d71f0;
        if (param_1[0x194] != (TextInput)0x0) {
          local_50 = 0xa02;
          local_4e = 0;
          RawTextInput::insert((RawTextInput *)(param_1 + 0x200),(basic_string *)&local_50);
          syncSourceTextFromRaw(param_1);
          goto LAB_004d71dc;
        }
LAB_004d715c:
        uVar4 = 0;
        goto LAB_004d71f0;
      }
      if (((uVar1 ^ 0xffffffff) & 9) == 0) {
        RawTextInput::redo((RawTextInput *)(param_1 + 0x200));
      }
      else {
        if ((uVar1 >> 3 & 1) == 0) goto LAB_004d715c;
        RawTextInput::undo((RawTextInput *)(param_1 + 0x200));
      }
    }
    else {
      if (param_2 != 0x103) {
        if (param_2 != 0x105) goto LAB_004d71f0;
        RawTextInput::backspace((RawTextInput *)(param_1 + 0x200),1);
        syncSourceTextFromRaw(param_1);
        pcVar3 = *(code **)(*(long *)param_1 + 0x250);
LAB_004d71a0:
        uVar4 = 1;
        (*pcVar3)(param_1);
        goto LAB_004d71f0;
      }
      RawTextInput::backspace((RawTextInput *)(param_1 + 0x200),-1);
    }
    syncSourceTextFromRaw(param_1);
    pcVar3 = *(code **)(*(long *)param_1 + 0x250);
  }
  else {
    if (param_2 < 0x108) {
      if (param_2 == 0x106) {
        if ((uVar1 >> 3 & 1) == 0) {
          if ((uVar1 >> 2 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
            if ((param_3 & 2) != 0) {
              uVar4 = 2;
            }
          }
        }
        else {
          uVar4 = 3;
        }
        RawTextInput::cursorHorizontal((RawTextInput *)(param_1 + 0x200),1,uVar4,param_3 & 1);
        pcVar3 = *(code **)(*(long *)param_1 + 0x248);
        goto LAB_004d71a0;
      }
      if (param_2 != 0x107) goto LAB_004d71f0;
      if ((uVar1 >> 3 & 1) == 0) {
        if ((uVar1 >> 2 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
          if ((param_3 & 2) != 0) {
            uVar4 = 2;
          }
        }
      }
      else {
        uVar4 = 3;
      }
      RawTextInput::cursorHorizontal((RawTextInput *)(param_1 + 0x200),0xffffffff,uVar4,param_3 & 1)
      ;
    }
    else if (param_2 == 0x108) {
      RawTextInput::cursorDown((RawTextInput *)(param_1 + 0x200),(bool)((byte)param_3 & 1));
    }
    else {
      if (param_2 != 0x109) goto LAB_004d71f0;
      RawTextInput::cursorUp((RawTextInput *)(param_1 + 0x200),(bool)((byte)param_3 & 1));
    }
LAB_004d71dc:
    pcVar3 = *(code **)(*(long *)param_1 + 0x248);
  }
  (*pcVar3)(param_1);
  uVar4 = 1;
LAB_004d71f0:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


// ===== 004d721c  rive::TextInput::keyInput =====

/* non-virtual thunk to rive::TextInput::keyInput(rive::Key, rive::KeyModifiers, bool, bool) */

void __thiscall rive::TextInput::keyInput(TextInput *this)

{
  keyInput(this + -0x1a0);
  return;
}


// ===== 004d7228  rive::TextInput::textInput =====

/* rive::TextInput::textInput(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall rive::TextInput::textInput(TextInput *this,basic_string *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  basic_string *pbVar5;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x194] == (TextInput)0x0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)&local_60);
    uVar4 = *(ulong *)(param_1 + 8);
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar5 = param_1 + 1;
      uVar4 = (ulong)((byte)*param_1 >> 1);
    }
    if (uVar4 != 0) {
      bVar2 = false;
      do {
        if ((*pbVar5 == (basic_string)0xd) || (*pbVar5 == (basic_string)0xa)) {
          bVar3 = !bVar2;
          bVar2 = true;
          if (bVar3) goto LAB_004d72c8;
        }
        else {
          bVar2 = false;
LAB_004d72c8:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)&local_60);
        }
        uVar4 = uVar4 - 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (((byte)*param_1 & 1) == 0) {
    uStack_58 = *(ulong *)(param_1 + 8);
    local_60 = *(ulong *)param_1;
    local_50 = *(void **)(param_1 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
  }
  uVar4 = (ulong)((byte)local_60._0_1_ >> 1);
  if ((local_60 & 1) != 0) {
    uVar4 = uStack_58;
  }
  if (uVar4 != 0) {
    RawTextInput::insert((RawTextInput *)(this + 0x200),(basic_string *)&local_60);
    syncSourceTextFromRaw(this);
    (**(code **)(*(long *)this + 0x250))(this);
  }
  if (((byte)local_60._0_1_ & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 004d7394  rive::TextInput::textInput =====

/* non-virtual thunk to rive::TextInput::textInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall rive::TextInput::textInput(TextInput *this,basic_string *param_1)

{
  textInput(this + -0x1a0,param_1);
  return 1;
}


// ===== 004d73b0  rive::TextInput::focused =====

/* rive::TextInput::focused() */

void rive::TextInput::focused(void)

{
  return;
}


// ===== 004d73b4  rive::TextInput::focused =====

/* non-virtual thunk to rive::TextInput::focused() */

void __thiscall rive::TextInput::focused(TextInput *this)

{
  return;
}


// ===== 004d73b8  rive::TextInput::blurred =====

/* rive::TextInput::blurred() */

void rive::TextInput::blurred(void)

{
  return;
}


// ===== 004d73bc  rive::TextInput::blurred =====

/* non-virtual thunk to rive::TextInput::blurred() */

void __thiscall rive::TextInput::blurred(TextInput *this)

{
  return;
}


// ===== 004d73c0  rive::TextInput::worldPosition =====

/* rive::TextInput::worldPosition(rive::Vec2D&) */

undefined8 rive::TextInput::worldPosition(Vec2D *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *in_x1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 in_s1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0xb4);
  local_30 = uVar4;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0xc38), plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,&local_30);
    uVar4 = CONCAT44(in_s1,uVar3);
  }
  *in_x1 = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d7438  rive::TextInput::worldPosition =====

/* non-virtual thunk to rive::TextInput::worldPosition(rive::Vec2D&) */

undefined8 __thiscall rive::TextInput::worldPosition(TextInput *this,Vec2D *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 in_s1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(this + -0xec);
  local_30 = uVar4;
  if ((*(long *)(this + -0x160) != 0) &&
     (plVar2 = *(long **)(*(long *)(this + -0x160) + 0xc38), plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,&local_30);
    uVar4 = CONCAT44(in_s1,uVar3);
  }
  *(undefined8 *)param_1 = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d74b4  rive::TextInput::worldBounds =====

/* rive::TextInput::worldBounds(rive::AABB&) */

void __thiscall rive::TextInput::worldBounds(TextInput *this,AABB *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  fVar12 = *(float *)(this + 0x1b0);
  fVar7 = *(float *)(this + 0x1b8) - fVar12;
  fVar10 = *(float *)(this + 0x1bc) - *(float *)(this + 0x1b4);
  bVar2 = fVar7 < 0.0 == NAN(fVar7);
  bVar4 = fVar10 != 0.0;
  bVar1 = fVar10 < 0.0 == NAN(fVar10);
  if ((bVar4 && bVar1) && (fVar7 != 0.0 && bVar2)) {
    lVar6 = *(long *)(this + 0x40);
    if (lVar6 == 0) {
      uVar9 = *(undefined8 *)(this + 0x1b0);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x1b8);
      *(undefined8 *)param_1 = uVar9;
    }
    else {
      plVar5 = *(long **)(lVar6 + 0xc38);
      if (plVar5 == (long *)0x0) {
        uVar9 = *(undefined8 *)(this + 0x1b8);
        fVar10 = *(float *)(this + 0x1b4);
        local_60 = uVar9;
      }
      else {
        local_60 = *(undefined8 *)(this + 0x1b0);
        fVar12 = (float)(**(code **)(*plVar5 + 0x50))(plVar5,&local_60,lVar6);
        plVar5 = *(long **)(lVar6 + 0xc38);
        uVar9 = *(undefined8 *)(this + 0x1b8);
        local_60 = uVar9;
        if (plVar5 != (long *)0x0) {
          fVar11 = fVar10;
          uVar8 = (**(code **)(*plVar5 + 0x50))(plVar5,&local_60,lVar6);
          uVar9 = CONCAT44(fVar11,uVar8);
        }
      }
      *(float *)param_1 = fVar12;
      *(float *)(param_1 + 4) = fVar10;
      *(undefined8 *)(param_1 + 8) = uVar9;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((bVar4 && bVar1) && (fVar7 != 0.0 && bVar2));
}


// ===== 004d75d0  rive::TextInput::worldBounds =====

/* non-virtual thunk to rive::TextInput::worldBounds(rive::AABB&) */

void __thiscall rive::TextInput::worldBounds(TextInput *this,AABB *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  TextInput *pTVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pTVar5 = this + 0x10;
  fVar13 = *(float *)pTVar5;
  fVar8 = *(float *)(this + 0x18) - fVar13;
  fVar11 = *(float *)(this + 0x1c) - *(float *)(this + 0x14);
  bVar2 = fVar8 < 0.0 == NAN(fVar8);
  bVar4 = fVar11 != 0.0;
  bVar1 = fVar11 < 0.0 == NAN(fVar11);
  if ((bVar4 && bVar1) && (fVar8 != 0.0 && bVar2)) {
    lVar7 = *(long *)(this + -0x160);
    if (lVar7 == 0) {
      uVar10 = *(undefined8 *)pTVar5;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x18);
      *(undefined8 *)param_1 = uVar10;
    }
    else {
      plVar6 = *(long **)(lVar7 + 0xc38);
      if (plVar6 == (long *)0x0) {
        uVar10 = *(undefined8 *)(this + 0x18);
        fVar11 = *(float *)(this + 0x14);
        local_60 = uVar10;
      }
      else {
        local_60 = *(undefined8 *)pTVar5;
        fVar13 = (float)(**(code **)(*plVar6 + 0x50))(plVar6,&local_60,lVar7);
        plVar6 = *(long **)(lVar7 + 0xc38);
        uVar10 = *(undefined8 *)(this + 0x18);
        local_60 = uVar10;
        if (plVar6 != (long *)0x0) {
          fVar12 = fVar11;
          uVar9 = (**(code **)(*plVar6 + 0x50))(plVar6,&local_60,lVar7);
          uVar10 = CONCAT44(fVar12,uVar9);
        }
      }
      *(float *)param_1 = fVar13;
      *(float *)(param_1 + 4) = fVar11;
      *(undefined8 *)(param_1 + 8) = uVar10;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((bVar4 && bVar1) && (fVar8 != 0.0 && bVar2));
}


// ===== 004d76f0  rive::TextInput::edgeScrollSpeedForDistance =====

/* rive::TextInput::edgeScrollSpeedForDistance(float) const */

float rive::TextInput::edgeScrollSpeedForDistance(float param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(param_1,0x40800000,0x42340000);
  fVar2 = (float)NEON_fminnm(uVar1,0x43c80000);
  if (fVar2 <= 45.0) {
    fVar2 = 45.0;
  }
  return fVar2;
}


// ===== 004d7714  rive::TextInput::edgeActivationDistance =====

/* rive::TextInput::edgeActivationDistance(float, float) const */

float rive::TextInput::edgeActivationDistance(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (param_1 < param_2 != (NAN(param_1) || NAN(param_2))) {
    fVar1 = param_2 - param_1;
  }
  return fVar1;
}


// ===== 004d7728  rive::TextInput::worldToLocalWithViewport =====

/* rive::TextInput::worldToLocalWithViewport(rive::Vec2D, rive::Vec2D&, bool) */

bool rive::TextInput::worldToLocalWithViewport
               (float param_1,float param_2,long param_3,undefined8 *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar13 = *(float *)(param_3 + 0xa4);
  fVar11 = *(float *)(param_3 + 0xb0);
  *(undefined4 *)(param_3 + 0x1f8) = 0;
  fVar6 = (float)*(undefined8 *)(param_3 + 0xa8);
  fVar15 = -fVar6;
  *(undefined4 *)(param_3 + 500) = 0;
  fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 0xa8) >> 0x20);
  fVar8 = (float)NEON_fmadd(fVar13,fVar11,fVar15 * fVar7);
  if (fVar8 == 0.0) goto LAB_004d793c;
  lVar2 = *(long *)(param_3 + 0x1e0);
  fVar17 = 1.0 / fVar8;
  fVar18 = (float)*(undefined8 *)(param_3 + 0xb4);
  fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0xb4) >> 0x20);
  fVar12 = fVar11 * fVar17;
  fVar15 = fVar15 * fVar17;
  uVar14 = NEON_rev64(CONCAT44(fVar16 * -fVar13,fVar18 * -fVar11),4);
  auVar10._4_4_ = fVar15;
  auVar10._0_4_ = fVar12;
  auVar10._8_4_ = -fVar7 * fVar17;
  auVar10._12_4_ = fVar13 * fVar17;
  auVar1._4_4_ = fVar15;
  auVar1._0_4_ = fVar12;
  auVar1._8_4_ = -fVar7 * fVar17;
  auVar1._12_4_ = fVar13 * fVar17;
  auVar10 = NEON_ext(auVar10,auVar1,8,1);
  uVar14 = NEON_rev64(CONCAT44(fVar17 * ((float)((ulong)uVar14 >> 0x20) + fVar16 * fVar7),
                               fVar17 * ((float)uVar14 + fVar18 * fVar6)),4);
  fVar6 = (float)uVar14 + auVar10._0_4_ * param_2 + fVar12 * param_1;
  fVar7 = (float)((ulong)uVar14 >> 0x20) + auVar10._4_4_ * param_2 + fVar15 * param_1;
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x30);
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar3 = (uint)*(byte *)(lVar2 + 0x8c);
    fVar11 = *(float *)(lVar5 + 0x200);
    if (uVar3 == 1) {
      fVar15 = *(float *)(lVar5 + 0x204);
LAB_004d77e8:
      fVar15 = fVar15 - *(float *)(lVar4 + 0x1fc);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
    }
    else {
      fVar11 = fVar11 - *(float *)(lVar4 + 0x1f8);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar15 = *(float *)(lVar5 + 0x204);
      if (uVar3 != 0) goto LAB_004d77e8;
    }
    if (*(char *)(param_3 + 0x194) == '\0') {
      if ((*(byte *)(lVar2 + 0x8c) & 0xfd) == 0) {
        fVar13 = *(float *)(lVar2 + 0x98);
        fVar12 = fVar6 + fVar13;
        fVar18 = fVar11 - fVar12;
        fVar15 = 0.0;
        if (fVar12 < 20.0 != NAN(fVar12)) {
          fVar15 = 20.0 - fVar12;
        }
        fVar16 = 0.0;
        if (fVar18 < 20.0 != NAN(fVar18)) {
          fVar16 = 20.0 - fVar18;
        }
        if ((fVar15 == 0.0 || fVar15 < 0.0 != NAN(fVar15)) || ((param_5 & 1) == 0)) {
          if ((fVar16 != 0.0 && fVar16 < 0.0 == NAN(fVar16)) && ((param_5 & 1) != 0)) {
            uVar9 = NEON_fmadd(fVar16,0x40800000,0x42340000);
            fVar15 = (float)NEON_fminnm(uVar9,0x43c80000);
            if (fVar15 <= 45.0) {
              fVar15 = 45.0;
            }
            *(float *)(param_3 + 500) = -fVar15;
            if (fVar12 != fVar11 && fVar12 < fVar11 == (NAN(fVar12) || NAN(fVar11))) {
              fVar6 = fVar11 - fVar13;
            }
          }
        }
        else {
          uVar9 = NEON_fmadd(fVar15,0x40800000,0x42340000);
          fVar11 = (float)NEON_fminnm(uVar9,0x43c80000);
          if (fVar11 <= 45.0) {
            fVar11 = 45.0;
          }
          *(float *)(param_3 + 500) = fVar11;
          if (fVar12 < 0.0) {
            fVar6 = -fVar13;
          }
        }
      }
    }
    else if (uVar3 - 1 < 2) {
      fVar13 = *(float *)(lVar2 + 0x9c);
      fVar12 = fVar7 + fVar13;
      fVar18 = fVar15 - fVar12;
      fVar11 = 0.0;
      if (fVar12 < 20.0 != NAN(fVar12)) {
        fVar11 = 20.0 - fVar12;
      }
      fVar16 = 0.0;
      if (fVar18 < 20.0 != NAN(fVar18)) {
        fVar16 = 20.0 - fVar18;
      }
      if ((fVar11 == 0.0 || fVar11 < 0.0 != NAN(fVar11)) || ((param_5 & 1) == 0)) {
        if ((fVar16 != 0.0 && fVar16 < 0.0 == NAN(fVar16)) && ((param_5 & 1) != 0)) {
          uVar9 = NEON_fmadd(fVar16,0x40800000,0x42340000);
          fVar11 = (float)NEON_fminnm(uVar9,0x43c80000);
          if (fVar11 <= 45.0) {
            fVar11 = 45.0;
          }
          *(float *)(param_3 + 0x1f8) = -fVar11;
          if (fVar12 != fVar15 && fVar12 < fVar15 == (NAN(fVar12) || NAN(fVar15))) {
            fVar7 = fVar15 - fVar13;
          }
        }
      }
      else {
        uVar9 = NEON_fmadd(fVar11,0x40800000,0x42340000);
        fVar11 = (float)NEON_fminnm(uVar9,0x43c80000);
        if (fVar11 <= 45.0) {
          fVar11 = 45.0;
        }
        *(float *)(param_3 + 0x1f8) = fVar11;
        if (fVar12 < 0.0) {
          fVar7 = -fVar13;
        }
      }
    }
  }
  *param_4 = CONCAT44(fVar7,fVar6);
LAB_004d793c:
  return fVar8 != 0.0;
}


// ===== 004d7990  rive::TextInput::startDrag =====

/* rive::TextInput::startDrag(rive::Vec2D) */

void rive::TextInput::startDrag(undefined4 param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_3 + 0x3d) = 1;
  *(undefined4 *)((long)param_3 + 0x1ec) = param_1;
  *(undefined4 *)(param_3 + 0x3e) = param_2;
  uVar2 = worldToLocalWithViewport(param_3,&local_30,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else {
    RawTextInput::moveCursorTo(local_30,uStack_2c,param_3 + 0x40,0);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x004d7a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x248))(param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d7a30  rive::TextInput::drag =====

/* rive::TextInput::drag(rive::Vec2D) */

void rive::TextInput::drag(undefined4 param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)((long)param_3 + 0x1ec) = param_1;
  *(undefined4 *)(param_3 + 0x3e) = param_2;
  uVar2 = worldToLocalWithViewport(param_3,&local_30,1);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else {
    RawTextInput::moveCursorTo(local_30,uStack_2c,param_3 + 0x40,1);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x004d7aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x248))(param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d7ac8  rive::TextInput::endDrag =====

/* rive::TextInput::endDrag(rive::Vec2D) */

void rive::TextInput::endDrag(long param_1)

{
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 500) = 0;
  return;
}


// ===== 004d7ae4  rive::TextInput::advanceDrag =====

/* rive::TextInput::advanceDrag(float) */

void __thiscall rive::TextInput::advanceDrag(TextInput *this,float param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (this[0x1e8] == (TextInput)0x0) {
    bVar3 = false;
    *(undefined8 *)(this + 500) = 0;
  }
  else {
    fVar7 = *(float *)(this + 500);
    if (((fVar7 == 0.0) && (*(float *)(this + 0x1f8) == 0.0)) || (*(long *)(this + 0x1e0) == 0)) {
      bVar3 = false;
    }
    else {
      plVar4 = *(long **)(*(long *)(this + 0x1e0) + 0x100);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0xd8))();
        fVar7 = *(float *)(this + 500);
      }
      if (fVar7 != 0.0) {
        plVar4 = *(long **)(this + 0x1e0);
        fVar8 = *(float *)(plVar4 + 0x13);
        fVar7 = fVar7 * param_1 + fVar8;
        if (*(char *)((long)plVar4 + 0xad) == '\0') {
          fVar8 = *(float *)(*(long *)(plVar4[6] + 0x30) + 0x200);
          if ((*(char *)((long)plVar4 + 0x8c) != '\x01') &&
             (fVar8 = fVar8 - *(float *)(plVar4[6] + 0x1f8), fVar8 <= 0.0)) {
            fVar8 = 0.0;
          }
          fVar6 = (float)ScrollConstraint::contentWidth();
          plVar1 = plVar4 + 6;
          plVar4 = *(long **)(this + 0x1e0);
          fVar8 = (float)NEON_fminnm((fVar8 - fVar6) - *(float *)(*(long *)(*plVar1 + 0x30) + 0x210)
                                     ,0);
          fVar7 = (float)NEON_fminnm(fVar7,0);
          if (fVar7 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = *(float *)(plVar4 + 0x13);
        }
        if (fVar8 != fVar7) {
          *(float *)(plVar4 + 0x13) = fVar7;
          (**(code **)(*plVar4 + 0xf8))(plVar4);
        }
      }
      if (*(float *)(this + 0x1f8) != 0.0) {
        plVar4 = *(long **)(this + 0x1e0);
        fVar8 = *(float *)((long)plVar4 + 0x9c);
        fVar7 = *(float *)(this + 0x1f8) * param_1 + fVar8;
        if (*(char *)((long)plVar4 + 0xad) == '\0') {
          fVar8 = *(float *)(*(long *)(plVar4[6] + 0x30) + 0x204);
          if ((*(char *)((long)plVar4 + 0x8c) != '\0') &&
             (fVar8 = fVar8 - *(float *)(plVar4[6] + 0x1fc), fVar8 <= 0.0)) {
            fVar8 = 0.0;
          }
          fVar6 = (float)ScrollConstraint::contentHeight();
          plVar1 = plVar4 + 6;
          plVar4 = *(long **)(this + 0x1e0);
          fVar8 = (float)NEON_fminnm((fVar8 - fVar6) - *(float *)(*(long *)(*plVar1 + 0x30) + 0x214)
                                     ,0);
          fVar7 = (float)NEON_fminnm(fVar7,0);
          if (fVar7 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = *(float *)((long)plVar4 + 0x9c);
        }
        if (fVar8 != fVar7) {
          *(float *)((long)plVar4 + 0x9c) = fVar7;
          (**(code **)(*plVar4 + 0x100))(plVar4);
        }
      }
      if ((((ABS(*(float *)(this + 0x1ec)) != INFINITY) && (!NAN(ABS(*(float *)(this + 0x1ec))))) &&
          (ABS(*(float *)(this + 0x1f0)) != INFINITY)) &&
         ((!NAN(ABS(*(float *)(this + 0x1f0))) &&
          (uVar5 = worldToLocalWithViewport(this,&local_50,1), (uVar5 & 1) != 0)))) {
        RawTextInput::moveCursorTo(local_50,uStack_4c,this + 0x200,1);
        (**(code **)(*(long *)this + 0x248))(this);
      }
      bVar3 = this[0x1e8] != (TextInput)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


// ===== 004d7d5c  rive::TextInput::advanceComponent =====

/* rive::TextInput::advanceComponent(float, rive::AdvanceFlags) */

void rive::TextInput::advanceComponent(void)

{
  (*(code *)PTR_advanceDrag_00680d20)();
  return;
}


// ===== 004d7d60  rive::TextInput::advanceComponent =====

/* non-virtual thunk to rive::TextInput::advanceComponent(float, rive::AdvanceFlags) */

void __thiscall rive::TextInput::advanceComponent(float param_1,TextInput *this)

{
  advanceDrag(this + -0x1a8,param_1);
  return;
}


// ===== 004d7d68  FUN_004d7d68 =====

void FUN_004d7d68(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_0067d4d0;
  puVar1 = PTR_vtable_0067d4d0 + 0x2d0;
  *param_1 = (long)(PTR_vtable_0067d4d0 + 0x10);
  param_1[0x19] = (long)puVar1;
  param_1[0x33] = (long)(puVar2 + 0x2f8);
  param_1[0x34] = (long)(puVar2 + 800);
  param_1[0x35] = (long)(puVar2 + 0x388);
  FUN_004d7df4(param_1 + 0x40);
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete((void *)param_1[0x3a]);
  }
  puVar1 = PTR_vtable_0067d580 + 0x268;
  *param_1 = (long)(PTR_vtable_0067d580 + 0x10);
  param_1[0x19] = (long)puVar1;
  if ((*(byte *)(param_1 + 0x2f) & 1) != 0) {
    operator_delete((void *)param_1[0x31]);
  }
  FUN_0035e448(param_1);
  return;
}


// ===== 004d7df4  FUN_004d7df4 =====

void FUN_004d7df4(long param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  
  pvVar3 = *(void **)(param_1 + 0x438);
  if (pvVar3 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 0x440);
    pvVar2 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -8));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x38);
      } while (pvVar5 != pvVar3);
      pvVar2 = *(void **)(param_1 + 0x438);
    }
    *(void **)(param_1 + 0x440) = pvVar3;
    operator_delete(pvVar2);
  }
  pvVar3 = *(void **)(param_1 + 0x418);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x420) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(param_1 + 0x3f8);
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pvVar3 = *(void **)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_004d8040(pvVar3);
    operator_delete(pvVar3);
  }
  FUN_004d8040(param_1 + 0x2e0);
  pvVar3 = *(void **)(param_1 + 0x2c8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x2d0) = pvVar3;
    operator_delete(pvVar3);
  }
  FUN_004d818c(param_1 + 400);
  pvVar3 = *(void **)(param_1 + 0x160);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x168) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x148);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x150) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(param_1 + 0x140);
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pvVar3 = *(void **)(param_1 + 0x108);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x110) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0xf0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0xf8) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(param_1 + 0xe8);
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pvVar3 = *(void **)(param_1 + 0xb0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0xb8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x98);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0xa0) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(param_1 + 0x90);
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x40);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x48) = pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x004d802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4);
    return;
  }
  return;
}


// ===== 004d8040  FUN_004d8040 =====

void FUN_004d8040(long *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *__ptr;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 *puVar7;
  
  free((void *)param_1[0x1a]);
  free((void *)param_1[0x17]);
  free((void *)param_1[0x15]);
  free((void *)param_1[0x13]);
  free((void *)param_1[0x11]);
  free((void *)param_1[0xf]);
  free((void *)param_1[0xd]);
  plVar5 = (long *)param_1[10];
  if ((plVar5 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 1), iVar2 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  pvVar3 = (void *)param_1[7];
  if (pvVar3 != (void *)0x0) {
    param_1[8] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[4];
  if (pvVar3 != (void *)0x0) {
    pvVar10 = (void *)param_1[5];
    pvVar4 = pvVar3;
    if (pvVar10 != pvVar3) {
      do {
        pvVar4 = *(void **)((long)pvVar10 + -0x28);
        if (pvVar4 != (void *)0x0) {
          *(void **)((long)pvVar10 + -0x20) = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar10 = (void *)((long)pvVar10 + -0x40);
      } while (pvVar10 != pvVar3);
      pvVar4 = (void *)param_1[4];
    }
    param_1[5] = (long)pvVar3;
    operator_delete(pvVar4);
  }
  __ptr = (undefined8 *)param_1[2];
  lVar1 = param_1[3];
  if (0 < lVar1) {
    puVar6 = __ptr;
    do {
      puVar7 = puVar6 + 2;
      free((void *)*puVar6);
      puVar6 = puVar7;
    } while (puVar7 < __ptr + lVar1 * 2);
    __ptr = (undefined8 *)param_1[2];
  }
  free(__ptr);
  plVar5 = (long *)*param_1;
  lVar1 = param_1[1];
  if (0 < lVar1) {
    plVar8 = plVar5;
    do {
      FUN_004c53c0(*plVar8,*plVar8 + plVar8[1] * 0x90);
      plVar9 = plVar8 + 3;
      free((void *)*plVar8);
      plVar8 = plVar9;
    } while (plVar9 < plVar5 + lVar1 * 3);
    plVar5 = (long *)*param_1;
  }
  free(plVar5);
  return;
}


// ===== 004d818c  FUN_004d818c =====

void FUN_004d818c(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x24];
  if (pvVar2 != (void *)0x0) {
    param_1[0x25] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x21];
  if (pvVar2 != (void *)0x0) {
    param_1[0x22] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1e];
  if (pvVar2 != (void *)0x0) {
    param_1[0x1f] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1b];
  if (pvVar2 != (void *)0x0) {
    param_1[0x1c] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x18];
  if (pvVar2 != (void *)0x0) {
    param_1[0x19] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x15];
  if (pvVar2 != (void *)0x0) {
    param_1[0x16] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x12];
  if (pvVar2 != (void *)0x0) {
    param_1[0x13] = pvVar2;
    operator_delete(pvVar2);
  }
  puVar1 = (undefined8 *)param_1[0xf];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (undefined8 *)param_1[10];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (undefined8 *)param_1[5];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar2);
  return;
}


// ===== 004d82a8  FUN_004d82a8 =====

void FUN_004d82a8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_0067d4d0;
  puVar1 = PTR_vtable_0067d4d0 + 0x2d0;
  *param_1 = (long)(PTR_vtable_0067d4d0 + 0x10);
  param_1[0x19] = (long)puVar1;
  param_1[0x33] = (long)(puVar2 + 0x2f8);
  param_1[0x34] = (long)(puVar2 + 800);
  param_1[0x35] = (long)(puVar2 + 0x388);
  FUN_004d7df4(param_1 + 0x40);
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete((void *)param_1[0x3a]);
  }
  puVar1 = PTR_vtable_0067d580 + 0x268;
  *param_1 = (long)(PTR_vtable_0067d580 + 0x10);
  param_1[0x19] = (long)puVar1;
  if ((*(byte *)(param_1 + 0x2f) & 1) != 0) {
    operator_delete((void *)param_1[0x31]);
  }
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004d833c  FUN_004d833c =====

undefined8 FUN_004d833c(void)

{
  return 0x239;
}


// ===== 004d8344  FUN_004d8344 =====

undefined8 FUN_004d8344(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x239)) {
    return 0;
  }
  return 1;
}


// ===== 004d838c  FUN_004d838c =====

undefined8 FUN_004d838c(long param_1,ushort param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x81) {
    if (param_2 == 0xd) {
      puVar10 = (undefined4 *)param_3[2];
      puVar8 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar8 - (long)puVar10 < 4) {
        uVar15 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar8 = puVar10 + 1;
        uVar15 = *puVar10;
      }
      param_3[2] = (long)puVar8;
      *(undefined4 *)(param_1 + 0x110) = uVar15;
    }
    else if (param_2 == 0xe) {
      puVar10 = (undefined4 *)param_3[2];
      puVar8 = (undefined4 *)(*param_3 + param_3[1]);
      if ((long)puVar8 - (long)puVar10 < 4) {
        uVar15 = 0;
        *(undefined1 *)(param_3 + 3) = 1;
      }
      else {
        puVar8 = puVar10 + 1;
        uVar15 = *puVar10;
      }
      param_3[2] = (long)puVar8;
      *(undefined4 *)(param_1 + 0x114) = uVar15;
    }
    else {
      if (param_2 != 0x17) goto LAB_004d84fc;
      uVar14 = 0;
      uVar7 = 0;
      pbVar12 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar12) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004d8618;
        }
        pbVar13 = pbVar12 + 1;
        bVar2 = *pbVar12;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
        pbVar12 = pbVar13;
      } while ((char)bVar2 < '\0');
      param_3[2] = (long)pbVar13;
      if (uVar7 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004d8618:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x134) = (int)uVar7;
    }
  }
  else if (param_2 < 0x332) {
    if (param_2 == 0x81) {
      uVar14 = 0;
      uVar7 = 0;
      pbVar12 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar12) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004d85c4;
        }
        pbVar13 = pbVar12 + 1;
        bVar2 = *pbVar12;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
        pbVar12 = pbVar13;
      } while ((char)bVar2 < '\0');
      param_3[2] = (long)pbVar13;
      if (uVar7 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004d85c4:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x138) = (int)uVar7;
    }
    else {
      if (param_2 != 0x331) {
LAB_004d84fc:
        if (*(long *)(lVar4 + 0x28) == lVar9) {
          uVar5 = FUN_0035ea44();
          return uVar5;
        }
        goto LAB_004d8698;
      }
      pcVar6 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar6) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004d85e0;
        }
        pcVar11 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar11;
      } while (cVar1 < '\0');
      param_3[2] = (long)pcVar11;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004d85e0:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      if ((*(byte *)(param_1 + 0x178) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x188));
      }
      *(undefined8 *)(param_1 + 0x180) = uStack_38;
      *(undefined8 *)(param_1 + 0x178) = local_40;
      *(undefined8 *)(param_1 + 0x188) = local_30;
    }
  }
  else if (param_2 == 0x332) {
    puVar10 = (undefined4 *)param_3[2];
    puVar8 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar8 - (long)puVar10 < 4) {
      uVar15 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar8 = puVar10 + 1;
      uVar15 = *puVar10;
    }
    param_3[2] = (long)puVar8;
    *(undefined4 *)(param_1 + 400) = uVar15;
  }
  else {
    if (param_2 != 0x3d3) goto LAB_004d84fc;
    pcVar6 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar6 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x194) = 0;
    }
    else {
      param_3[2] = (long)(pcVar6 + 1);
      *(bool *)(param_1 + 0x194) = *pcVar6 == '\x01';
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return 1;
  }
LAB_004d8698:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d869c  FUN_004d869c =====

undefined8 FUN_004d869c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 004d86a4  FUN_004d86a4 =====

undefined8 FUN_004d86a4(void)

{
  return 1;
}


// ===== 004d86ac  FUN_004d86ac =====

void FUN_004d86ac(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_vtable_0067d4d0;
  plVar3 = param_1 + -0x34;
  puVar1 = PTR_vtable_0067d4d0 + 0x2d0;
  *plVar3 = (long)(PTR_vtable_0067d4d0 + 0x10);
  param_1[-0x1b] = (long)puVar1;
  param_1[-1] = (long)(puVar2 + 0x2f8);
  *param_1 = (long)(puVar2 + 800);
  param_1[1] = (long)(puVar2 + 0x388);
  FUN_004d7df4(param_1 + 0xc);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  puVar1 = PTR_vtable_0067d580 + 0x268;
  *plVar3 = (long)(PTR_vtable_0067d580 + 0x10);
  param_1[-0x1b] = (long)puVar1;
  if ((*(byte *)(param_1 + -5) & 1) != 0) {
    operator_delete((void *)param_1[-3]);
  }
  FUN_0035e448(plVar3);
  return;
}


// ===== 004d873c  FUN_004d873c =====

void FUN_004d873c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_vtable_0067d4d0;
  plVar3 = param_1 + -0x34;
  puVar1 = PTR_vtable_0067d4d0 + 0x2d0;
  *plVar3 = (long)(PTR_vtable_0067d4d0 + 0x10);
  param_1[-0x1b] = (long)puVar1;
  param_1[-1] = (long)(puVar2 + 0x2f8);
  *param_1 = (long)(puVar2 + 800);
  param_1[1] = (long)(puVar2 + 0x388);
  FUN_004d7df4(param_1 + 0xc);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  puVar1 = PTR_vtable_0067d580 + 0x268;
  *plVar3 = (long)(PTR_vtable_0067d580 + 0x10);
  param_1[-0x1b] = (long)puVar1;
  if ((*(byte *)(param_1 + -5) & 1) != 0) {
    operator_delete((void *)param_1[-3]);
  }
  FUN_0035e448(plVar3);
  operator_delete(plVar3);
  return;
}


// ===== 004d87d4  FUN_004d87d4 =====

undefined8 FUN_004d87d4(long param_1)

{
  return *(undefined8 *)(param_1 + -0x160);
}


// ===== 004d87e0  FUN_004d87e0 =====

undefined8 FUN_004d87e0(void)

{
  return 1;
}


// ===== 004d87e8  rive::TextInputBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TextInputBase::clone() const */

long * __thiscall rive::TextInputBase::clone(TextInputBase *this)

{
  undefined4 uVar1;
  TextInputBase TVar2;
  long lVar3;
  undefined *puVar4;
  long *__s;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  __s = (long *)operator_new(0x658);
  memset(__s,0,0x658);
  lVar7 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(__s + 1) = 0xffffffff;
  *(undefined4 *)(__s + 0x14) = 0x3f800000;
  lVar3 = _UNK_00281c00;
  lVar8 = _DAT_00281bf8;
  __s[6] = 0;
  *(undefined2 *)(__s + 0xc) = 0xfffe;
  __s[0x24] = lVar3;
  __s[0x23] = lVar8;
  *(undefined4 *)((long)__s + 0x134) = 3;
  __s[9] = 0;
  __s[8] = 0;
  __s[0xb] = 0;
  __s[10] = 0;
  __s[0xe] = 0;
  __s[0xf] = 0;
  __s[0xd] = 0;
  __s[0x12] = 0;
  __s[0x13] = 0;
  __s[0x11] = 0;
  *(undefined8 *)((long)__s + 0xb4) = 0;
  *(long *)((long)__s + 0xac) = lVar3;
  *(long *)((long)__s + 0xa4) = lVar8;
  __s[0x18] = lVar7;
  __s[0x1c] = 0;
  __s[0x1b] = lVar3;
  __s[0x1a] = lVar8;
  __s[0x22] = 0;
  __s[0x1f] = 0;
  __s[0x1e] = 0;
  __s[0x21] = 0;
  __s[0x20] = 0;
  __s[0x25] = 0;
  __s[0x29] = 0;
  __s[0x28] = 0;
  __s[0x2b] = 0;
  __s[0x2a] = 0;
  __s[0x2d] = 0;
  __s[0x2c] = 0;
  *(undefined1 *)(__s + 0x2e) = 1;
  puVar4 = PTR_vtable_0067d4d0;
  *(undefined1 *)((long)__s + 0x194) = 1;
  *(undefined4 *)(__s + 0x32) = 0x40a00000;
  __s[0x37] = 0;
  __s[0x36] = 0;
  *__s = (long)(puVar4 + 0x10);
  __s[0x19] = (long)(puVar4 + 0x2d0);
  __s[0x33] = (long)(puVar4 + 0x2f8);
  __s[0x34] = (long)(puVar4 + 800);
  __s[0x35] = (long)(puVar4 + 0x388);
  *(undefined8 *)((long)__s + 0x1e1) = 0;
  *(undefined8 *)((long)__s + 0x1d9) = 0;
  __s[0x39] = 0;
  __s[0x38] = 0;
  __s[0x3b] = 0;
  __s[0x3a] = 0;
  lVar8 = DAT_0024e6d0;
  *(undefined8 *)((long)__s + 0x1ec) = 0x7fc000007fc00000;
  __s[0x3f] = lVar8;
  RawTextInput::RawTextInput((RawTextInput *)(__s + 0x40));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (__s + 0x2f),(basic_string *)(this + 0x178));
  TVar2 = this[0x194];
  lVar8 = *(long *)(this + 0x110);
  *(undefined4 *)(__s + 0x32) = *(undefined4 *)(this + 400);
  uVar6 = *(undefined8 *)(this + 0xbc);
  *(TextInputBase *)((long)__s + 0x194) = TVar2;
  uVar1 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)((long)__s + 0xbc) = uVar6;
  uVar5 = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)((long)__s + 0x134) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x138);
  *(undefined4 *)((long)__s + 0xc4) = uVar5;
  uVar5 = *(undefined4 *)(this + 0xa0);
  __s[0x22] = lVar8;
  *(undefined4 *)(__s + 0x27) = uVar1;
  *(undefined4 *)(__s + 0x14) = uVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (__s + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(__s + 5) = *(undefined4 *)(this + 0x28);
  return __s;
}


// ===== 004d896c  FUN_004d896c =====

void FUN_004d896c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d580 + 0x268;
  *param_1 = (long)(PTR_vtable_0067d580 + 0x10);
  param_1[0x19] = (long)puVar1;
  if ((*(byte *)(param_1 + 0x2f) & 1) != 0) {
    operator_delete((void *)param_1[0x31]);
  }
  FUN_0035e448(param_1);
  return;
}


// ===== 004d89b8  FUN_004d89b8 =====

void FUN_004d89b8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d89bc);
  (*pcVar1)();
}


// ===== 004d89bc  FUN_004d89bc =====

void FUN_004d89bc(void)

{
  return;
}


// ===== 004d89c0  FUN_004d89c0 =====

void FUN_004d89c0(void)

{
  return;
}


// ===== 004d89c4  FUN_004d89c4 =====

void FUN_004d89c4(void)

{
  return;
}


