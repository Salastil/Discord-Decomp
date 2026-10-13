// ===== 004d89c8  rive::TextInputCursor::hitTest =====

/* rive::TextInputCursor::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::TextInputCursor::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 004d89d0  rive::TextInputCursor::localClockwisePath =====

/* rive::TextInputCursor::localClockwisePath() */

long __thiscall rive::TextInputCursor::localClockwisePath(TextInputCursor *this)

{
  return *(long *)(this + 0x30) + 0x2e0;
}


// ===== 004d89dc  rive::TextInputCursor::localClockwisePath =====

/* non-virtual thunk to rive::TextInputCursor::localClockwisePath() */

long __thiscall rive::TextInputCursor::localClockwisePath(TextInputCursor *this)

{
  return *(long *)(this + -0x148) + 0x2e0;
}


// ===== 004d89ec  FUN_004d89ec =====

void FUN_004d89ec(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x188);
  *(undefined ***)(param_1 + 0x178) = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 400) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1);
  return;
}


// ===== 004d8a2c  FUN_004d8a2c =====

void FUN_004d8a2c(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x188);
  *(undefined ***)((long)param_1 + 0x178) = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 400) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004d8a70  FUN_004d8a70 =====

undefined8 FUN_004d8a70(void)

{
  return 0x23b;
}


// ===== 004d8a78  FUN_004d8a78 =====

undefined8 FUN_004d8a78(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) &&
      (1 < uVar1 - 0x23a)) && (uVar1 != 0x5b)) {
    return 0;
  }
  return 1;
}


// ===== 004d8ac4  FUN_004d8ac4 =====

undefined8 FUN_004d8ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 004d8acc  FUN_004d8acc =====

void FUN_004d8acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004d8ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x178) + 0x38))(param_1 + 0x178);
  return;
}


// ===== 004d8adc  FUN_004d8adc =====

undefined8 FUN_004d8adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 004d8ae4  FUN_004d8ae4 =====

undefined8 FUN_004d8ae4(long param_1)

{
  return *(undefined8 *)(param_1 + -0x138);
}


// ===== 004d8af0  FUN_004d8af0 =====

undefined8 FUN_004d8af0(long param_1)

{
  return *(undefined8 *)(param_1 + -0x148);
}


// ===== 004d8afc  FUN_004d8afc =====

void FUN_004d8afc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d8b38  FUN_004d8b38 =====

void FUN_004d8b38(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  operator_delete(param_1 + -0x2f);
  return;
}


// ===== 004d8b80  FUN_004d8b80 =====

void FUN_004d8b80(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004d8b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


// ===== 004d8b8c  rive::TextInputCursorBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TextInputCursorBase::clone() const */

long * __thiscall rive::TextInputCursorBase::clone(TextInputCursorBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  plVar5 = (long *)operator_new(0x1a0);
  plVar5[0x33] = 0;
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
  plVar5[0x27] = 0;
  plVar5[0x26] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x31] = 0;
  plVar5[0x30] = 0;
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  lVar3 = _UNK_00281c00;
  lVar7 = _DAT_00281bf8;
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x2e] = 0;
  plVar5[6] = 0;
  plVar5[0x24] = lVar3;
  plVar5[0x23] = lVar7;
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
  *(long *)((long)plVar5 + 0xa4) = lVar7;
  plVar5[0x1b] = lVar3;
  plVar5[0x1a] = lVar7;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  plVar5[0x25] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  *(undefined1 *)(plVar5 + 0x2e) = 1;
  puVar4 = PTR_vtable_0067d4a0;
  lVar7 = *(long *)(this + 0x110);
  uVar9 = *(undefined8 *)(this + 0xbc);
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  plVar5[0x22] = lVar7;
  uVar6 = *(undefined4 *)(this + 0xc4);
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[0x19] = (long)(puVar4 + 0x280);
  uVar1 = *(undefined4 *)(this + 0x134);
  plVar5[0x2f] = (long)(puVar4 + 0x2a8);
  uVar2 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)((long)plVar5 + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)plVar5 + 0x134) = uVar1;
  *(undefined4 *)(plVar5 + 0x27) = uVar2;
  *(undefined4 *)((long)plVar5 + 0xc4) = uVar6;
  *(undefined4 *)(plVar5 + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 004d8cbc  FUN_004d8cbc =====

void FUN_004d8cbc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d8cc0);
  (*pcVar1)();
}


// ===== 004d8cc0  FUN_004d8cc0 =====

void FUN_004d8cc0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d8cfc  FUN_004d8cfc =====

void FUN_004d8cfc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d8d00);
  (*pcVar1)();
}


// ===== 004d8d00  rive::TextInputDrawable::textInput =====

/* rive::TextInputDrawable::textInput() const */

undefined8 __thiscall rive::TextInputDrawable::textInput(TextInputDrawable *this)

{
  return *(undefined8 *)(this + 0x30);
}


// ===== 004d8d08  rive::TextInputDrawable::worldPath =====

/* non-virtual thunk to rive::TextInputDrawable::worldPath() */

undefined4 __thiscall rive::TextInputDrawable::worldPath(TextInputDrawable *this)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x239);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


// ===== 004d8d38  rive::TextInputDrawable::shapeWorldTransform =====

/* rive::TextInputDrawable::shapeWorldTransform() const */

TextInputDrawable * __thiscall rive::TextInputDrawable::shapeWorldTransform(TextInputDrawable *this)

{
  return this + 0xa4;
}


// ===== 004d8d40  rive::TextInputDrawable::shapeWorldTransform =====

/* non-virtual thunk to rive::TextInputDrawable::shapeWorldTransform() const */

TextInputDrawable * __thiscall rive::TextInputDrawable::shapeWorldTransform(TextInputDrawable *this)

{
  return this + -0xd4;
}


// ===== 004d8d48  rive::TextInputDrawable::draw =====

/* rive::TextInputDrawable::draw(rive::Renderer*) */

void __thiscall rive::TextInputDrawable::draw(TextInputDrawable *this,Renderer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = *(undefined8 **)(this + 400);
  for (puVar1 = *(undefined8 **)(this + 0x188); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar5 = (long *)*puVar1;
    uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
    if (((uVar3 & 1) != 0) &&
       (lVar4 = (**(code **)(*plVar5 + 0xf0))(plVar5,this + 0x178), lVar4 != 0)) {
      (**(code **)(*plVar5 + 0xe0))(plVar5,param_1,lVar4,*(long *)(this + 0x30) + 0xa4,0,0,1);
    }
  }
  return;
}


// ===== 004d8df4  rive::TextInputDrawable::willDraw =====

/* rive::TextInputDrawable::willDraw() */

byte __thiscall rive::TextInputDrawable::willDraw(TextInputDrawable *this)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)this + 0x1e8))();
  return *(float *)(this + 0xe8) != 0.0 & (bVar1 ^ 0xff);
}


// ===== 004d8e2c  FUN_004d8e2c =====

void FUN_004d8e2c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d8e30);
  (*pcVar1)();
}


// ===== 004d8e30  FUN_004d8e30 =====

undefined8 FUN_004d8e30(void)

{
  return 0x23a;
}


// ===== 004d8e38  FUN_004d8e38 =====

undefined8 FUN_004d8e38(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x23a)) {
    return 0;
  }
  return 1;
}


// ===== 004d8e80  FUN_004d8e80 =====

void FUN_004d8e80(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d8ebc  FUN_004d8ebc =====

void FUN_004d8ebc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d8ec0);
  (*pcVar1)();
}


// ===== 004d8ec0  rive::TextInputSelectedText::hitTest =====

/* rive::TextInputSelectedText::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::TextInputSelectedText::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 004d8ec8  rive::TextInputSelectedText::onAddedClean =====

/* rive::TextInputSelectedText::onAddedClean(rive::CoreContext*) */

undefined8 rive::TextInputSelectedText::onAddedClean(CoreContext *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),0x239);
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
    *(byte *)(*(long *)(param_1 + 0x30) + 0x5e0) =
         *(byte *)(*(long *)(param_1 + 0x30) + 0x5e0) | 0xf;
  }
  return uVar2;
}


// ===== 004d8f18  rive::TextInputSelectedText::localClockwisePath =====

/* rive::TextInputSelectedText::localClockwisePath() */

long __thiscall rive::TextInputSelectedText::localClockwisePath(TextInputSelectedText *this)

{
  return *(long *)(this + 0x30) + 0x288;
}


// ===== 004d8f24  rive::TextInputSelectedText::localClockwisePath =====

/* non-virtual thunk to rive::TextInputSelectedText::localClockwisePath() */

long __thiscall rive::TextInputSelectedText::localClockwisePath(TextInputSelectedText *this)

{
  return *(long *)(this + -0x148) + 0x288;
}


// ===== 004d8f34  FUN_004d8f34 =====

void FUN_004d8f34(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x188);
  *(undefined ***)((long)param_1 + 0x178) = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 400) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004d8f78  FUN_004d8f78 =====

undefined8 FUN_004d8f78(void)

{
  return 0x23f;
}


// ===== 004d8f80  FUN_004d8f80 =====

undefined8 FUN_004d8f80(undefined8 param_1,uint param_2)

{
  param_2 = param_2 & 0xffff;
  if (param_2 < 0x5b) {
    if ((0x26 < param_2) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) {
      return 0;
    }
  }
  else if (((param_2 != 0x5b) && (param_2 != 0x23a)) && (param_2 != 0x23f)) {
    return 0;
  }
  return 1;
}


// ===== 004d8fd4  FUN_004d8fd4 =====

void FUN_004d8fd4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d9010  FUN_004d9010 =====

void FUN_004d9010(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  operator_delete(param_1 + -0x2f);
  return;
}


// ===== 004d9058  rive::TextInputSelectedTextBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TextInputSelectedTextBase::clone() const */

long * __thiscall rive::TextInputSelectedTextBase::clone(TextInputSelectedTextBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  plVar5 = (long *)operator_new(0x1a0);
  plVar5[0x33] = 0;
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
  plVar5[0x27] = 0;
  plVar5[0x26] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x31] = 0;
  plVar5[0x30] = 0;
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  lVar3 = _UNK_00281c00;
  lVar7 = _DAT_00281bf8;
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x2e] = 0;
  plVar5[6] = 0;
  plVar5[0x24] = lVar3;
  plVar5[0x23] = lVar7;
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
  *(long *)((long)plVar5 + 0xa4) = lVar7;
  plVar5[0x1b] = lVar3;
  plVar5[0x1a] = lVar7;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  plVar5[0x25] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  *(undefined1 *)(plVar5 + 0x2e) = 1;
  puVar4 = PTR_vtable_0067d4c8;
  lVar7 = *(long *)(this + 0x110);
  uVar9 = *(undefined8 *)(this + 0xbc);
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  plVar5[0x22] = lVar7;
  uVar6 = *(undefined4 *)(this + 0xc4);
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[0x19] = (long)(puVar4 + 0x280);
  uVar1 = *(undefined4 *)(this + 0x134);
  plVar5[0x2f] = (long)(puVar4 + 0x2a8);
  uVar2 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)((long)plVar5 + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)plVar5 + 0x134) = uVar1;
  *(undefined4 *)(plVar5 + 0x27) = uVar2;
  *(undefined4 *)((long)plVar5 + 0xc4) = uVar6;
  *(undefined4 *)(plVar5 + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 004d9188  FUN_004d9188 =====

void FUN_004d9188(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d918c);
  (*pcVar1)();
}


// ===== 004d918c  FUN_004d918c =====

void FUN_004d918c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d91c8  FUN_004d91c8 =====

void FUN_004d91c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d91cc);
  (*pcVar1)();
}


// ===== 004d91cc  rive::TextInputSelection::hitTest =====

/* rive::TextInputSelection::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::TextInputSelection::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 004d91d4  rive::TextInputSelection::localClockwisePath =====

/* rive::TextInputSelection::localClockwisePath() */

long __thiscall rive::TextInputSelection::localClockwisePath(TextInputSelection *this)

{
  return *(long *)(this + 0x30) + 0x338;
}


// ===== 004d91e0  rive::TextInputSelection::localClockwisePath =====

/* non-virtual thunk to rive::TextInputSelection::localClockwisePath() */

long __thiscall rive::TextInputSelection::localClockwisePath(TextInputSelection *this)

{
  return *(long *)(this + -0x148) + 0x338;
}


// ===== 004d91f0  FUN_004d91f0 =====

void FUN_004d91f0(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x188);
  *(undefined ***)((long)param_1 + 0x178) = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 400) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004d9234  FUN_004d9234 =====

undefined8 FUN_004d9234(void)

{
  return 0x23e;
}


// ===== 004d923c  FUN_004d923c =====

undefined8 FUN_004d923c(undefined8 param_1,uint param_2)

{
  param_2 = param_2 & 0xffff;
  if (param_2 < 0x5b) {
    if ((0x26 < param_2) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) {
      return 0;
    }
  }
  else if (((param_2 != 0x5b) && (param_2 != 0x23a)) && (param_2 != 0x23e)) {
    return 0;
  }
  return 1;
}


// ===== 004d9290  FUN_004d9290 =====

void FUN_004d9290(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d92cc  FUN_004d92cc =====

void FUN_004d92cc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  operator_delete(param_1 + -0x2f);
  return;
}


// ===== 004d9314  rive::TextInputSelectionBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TextInputSelectionBase::clone() const */

long * __thiscall rive::TextInputSelectionBase::clone(TextInputSelectionBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  plVar5 = (long *)operator_new(0x1a0);
  plVar5[0x33] = 0;
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
  plVar5[0x27] = 0;
  plVar5[0x26] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x31] = 0;
  plVar5[0x30] = 0;
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  lVar3 = _UNK_00281c00;
  lVar7 = _DAT_00281bf8;
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x2e] = 0;
  plVar5[6] = 0;
  plVar5[0x24] = lVar3;
  plVar5[0x23] = lVar7;
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
  *(long *)((long)plVar5 + 0xa4) = lVar7;
  plVar5[0x1b] = lVar3;
  plVar5[0x1a] = lVar7;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  plVar5[0x25] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  *(undefined1 *)(plVar5 + 0x2e) = 1;
  puVar4 = PTR_vtable_0067d4e0;
  lVar7 = *(long *)(this + 0x110);
  uVar9 = *(undefined8 *)(this + 0xbc);
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  plVar5[0x22] = lVar7;
  uVar6 = *(undefined4 *)(this + 0xc4);
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[0x19] = (long)(puVar4 + 0x280);
  uVar1 = *(undefined4 *)(this + 0x134);
  plVar5[0x2f] = (long)(puVar4 + 0x2a8);
  uVar2 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)((long)plVar5 + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)plVar5 + 0x134) = uVar1;
  *(undefined4 *)(plVar5 + 0x27) = uVar2;
  *(undefined4 *)((long)plVar5 + 0xc4) = uVar6;
  *(undefined4 *)(plVar5 + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 004d9444  FUN_004d9444 =====

void FUN_004d9444(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d9448);
  (*pcVar1)();
}


// ===== 004d9448  FUN_004d9448 =====

void FUN_004d9448(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d9484  FUN_004d9484 =====

void FUN_004d9484(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d9488);
  (*pcVar1)();
}


// ===== 004d9488  rive::TextInputText::hitTest =====

/* rive::TextInputText::hitTest(rive::HitInfo*, rive::Mat2D const&) */

undefined8 rive::TextInputText::hitTest(HitInfo *param_1,Mat2D *param_2)

{
  return 0;
}


// ===== 004d9490  rive::TextInputText::localClockwisePath =====

/* rive::TextInputText::localClockwisePath() */

long __thiscall rive::TextInputText::localClockwisePath(TextInputText *this)

{
  return *(long *)(this + 0x30) + 0x230;
}


// ===== 004d949c  rive::TextInputText::localClockwisePath =====

/* non-virtual thunk to rive::TextInputText::localClockwisePath() */

long __thiscall rive::TextInputText::localClockwisePath(TextInputText *this)

{
  return *(long *)(this + -0x148) + 0x230;
}


// ===== 004d94ac  FUN_004d94ac =====

void FUN_004d94ac(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x188);
  *(undefined ***)((long)param_1 + 0x178) = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 400) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004d94f0  FUN_004d94f0 =====

undefined8 FUN_004d94f0(void)

{
  return 0x23c;
}


// ===== 004d94f8  FUN_004d94f8 =====

undefined8 FUN_004d94f8(undefined8 param_1,uint param_2)

{
  param_2 = param_2 & 0xffff;
  if (param_2 < 0x5b) {
    if ((0x26 < param_2) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c04U) == 0)) {
      return 0;
    }
  }
  else if (((param_2 != 0x5b) && (param_2 != 0x23a)) && (param_2 != 0x23c)) {
    return 0;
  }
  return 1;
}


// ===== 004d954c  FUN_004d954c =====

void FUN_004d954c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d9588  FUN_004d9588 =====

void FUN_004d9588(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  operator_delete(param_1 + -0x2f);
  return;
}


// ===== 004d95d0  rive::TextInputTextBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TextInputTextBase::clone() const */

long * __thiscall rive::TextInputTextBase::clone(TextInputTextBase *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  plVar5 = (long *)operator_new(0x1a0);
  plVar5[0x33] = 0;
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
  plVar5[0x27] = 0;
  plVar5[0x26] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x31] = 0;
  plVar5[0x30] = 0;
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  lVar3 = _UNK_00281c00;
  lVar7 = _DAT_00281bf8;
  plVar5[0x2d] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x2e] = 0;
  plVar5[6] = 0;
  plVar5[0x24] = lVar3;
  plVar5[0x23] = lVar7;
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
  *(long *)((long)plVar5 + 0xa4) = lVar7;
  plVar5[0x1b] = lVar3;
  plVar5[0x1a] = lVar7;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  plVar5[0x25] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  *(undefined1 *)(plVar5 + 0x2e) = 1;
  puVar4 = PTR_vtable_0067d4a8;
  lVar7 = *(long *)(this + 0x110);
  uVar9 = *(undefined8 *)(this + 0xbc);
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  plVar5[0x22] = lVar7;
  uVar6 = *(undefined4 *)(this + 0xc4);
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[0x19] = (long)(puVar4 + 0x280);
  uVar1 = *(undefined4 *)(this + 0x134);
  plVar5[0x2f] = (long)(puVar4 + 0x2a8);
  uVar2 = *(undefined4 *)(this + 0x138);
  *(undefined8 *)((long)plVar5 + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)plVar5 + 0x134) = uVar1;
  *(undefined4 *)(plVar5 + 0x27) = uVar2;
  *(undefined4 *)((long)plVar5 + 0xc4) = uVar6;
  *(undefined4 *)(plVar5 + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 004d9700  FUN_004d9700 =====

void FUN_004d9700(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d9704);
  (*pcVar1)();
}


// ===== 004d9704  FUN_004d9704 =====

void FUN_004d9704(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR___cxa_pure_virtual_00675f40;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004d9740  FUN_004d9740 =====

void FUN_004d9740(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d9744);
  (*pcVar1)();
}


// ===== 004d9744  rive::TextModifierGroup::textComponent =====

/* rive::TextModifierGroup::textComponent() const */

long * __thiscall rive::TextModifierGroup::textComponent(TextModifierGroup *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x30);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x86);
    plVar1 = *(long **)(this + 0x30);
    if ((uVar2 & 1) == 0) {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}


// ===== 004d9784  rive::TextModifierGroup::onAddedDirty =====

/* rive::TextModifierGroup::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::TextModifierGroup::onAddedDirty(TextModifierGroup *this,CoreContext *param_1)

{
  TextModifierGroup *pTVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pTVar1 = (TextModifierGroup *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TextModifierGroup *)(param_1 + -0x998);
  }
  *(TextModifierGroup **)(this + 0x40) = pTVar1;
  *(TextModifierGroup **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x86), (uVar3 & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    Text::addModifierGroup(*(Text **)(this + 0x30),this);
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 004d981c  rive::TextModifierGroup::addModifierRange =====

/* rive::TextModifierGroup::addModifierRange(rive::TextModifierRange*) */

void __thiscall
rive::TextModifierGroup::addModifierRange(TextModifierGroup *this,TextModifierRange *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xd0);
  if (puVar10 < *(undefined8 **)(this + 0xd8)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004d995c;
  }
  puVar9 = *(undefined8 **)(this + 200);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004d9980();
LAB_004d997c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xd8) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004d997c;
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
      if (uVar6 == uVar7) goto LAB_004d9948;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 200);
  }
LAB_004d9948:
  *(undefined8 **)(this + 200) = puVar4;
  *(undefined8 **)(this + 0xd0) = puVar13;
  *(void **)(this + 0xd8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004d995c:
  *(undefined8 **)(this + 0xd0) = puVar13;
  return;
}


// ===== 004d9980  FUN_004d9980 =====

void FUN_004d9980(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004d9994  rive::TextModifierGroup::addModifier =====

/* rive::TextModifierGroup::addModifier(rive::TextModifier*) */

void __thiscall rive::TextModifierGroup::addModifier(TextModifierGroup *this,TextModifier *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = *(undefined8 **)(this + 0xe8);
  if (*(undefined8 **)(this + 0xf0) <= puVar11) {
    puVar10 = *(undefined8 **)(this + 0xe0);
    lVar3 = (long)puVar11 - (long)puVar10 >> 3;
    uVar1 = lVar3 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar4 = (long)*(undefined8 **)(this + 0xf0) - (long)puVar10;
      uVar6 = (long)uVar4 >> 2;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar6 = 0x1fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3d != 0) goto LAB_004d9d5c;
        pvVar2 = operator_new(uVar6 << 3);
      }
      puVar5 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
      puVar13 = puVar5 + 1;
      *puVar5 = param_1;
      if ((long)puVar11 - (long)puVar10 != 0) {
        uVar1 = ((long)puVar11 - (long)puVar10) - 8;
        puVar12 = puVar11;
        if ((0x37 < uVar1) &&
           (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar2)))) {
          puVar8 = puVar11 + -2;
          uVar1 = (uVar1 >> 3) + 1;
          uVar7 = uVar1 & 0x3ffffffffffffffc;
          puVar12 = puVar11 + -uVar7;
          puVar11 = puVar5 + -2;
          uVar4 = uVar7;
          do {
            puVar9 = puVar8 + -1;
            uVar16 = puVar8[-2];
            uVar15 = puVar8[1];
            uVar14 = *puVar8;
            uVar4 = uVar4 - 4;
            puVar8 = puVar8 + -4;
            puVar11[-1] = *puVar9;
            puVar11[-2] = uVar16;
            puVar11[1] = uVar15;
            *puVar11 = uVar14;
            puVar11 = puVar11 + -4;
          } while (uVar4 != 0);
          puVar5 = puVar5 + -uVar7;
          puVar11 = puVar10;
          if (uVar1 == uVar7) goto LAB_004d9abc;
        }
        do {
          puVar12 = puVar12 + -1;
          puVar5 = puVar5 + -1;
          *puVar5 = *puVar12;
        } while (puVar12 != puVar10);
        puVar11 = *(undefined8 **)(this + 0xe0);
      }
LAB_004d9abc:
      *(undefined8 **)(this + 0xe0) = puVar5;
      *(undefined8 **)(this + 0xe8) = puVar13;
      *(void **)(this + 0xf0) = (void *)((long)pvVar2 + uVar6 * 8);
      if (puVar11 != (undefined8 *)0x0) {
        operator_delete(puVar11);
      }
      goto LAB_004d9ad0;
    }
    FUN_004d9d6c();
LAB_004d9d64:
    FUN_004d9d80();
    goto LAB_004d9d68;
  }
  puVar13 = puVar11 + 1;
  *puVar11 = param_1;
LAB_004d9ad0:
  lVar3 = *(long *)param_1;
  *(undefined8 **)(this + 0xe8) = puVar13;
  uVar1 = (**(code **)(lVar3 + 0x18))(param_1,0xa1);
  if ((uVar1 & 1) != 0) {
    puVar11 = *(undefined8 **)(this + 0x100);
    if (puVar11 < *(undefined8 **)(this + 0x108)) {
      puVar13 = puVar11 + 1;
      *puVar11 = param_1;
    }
    else {
      puVar10 = *(undefined8 **)(this + 0xf8);
      lVar3 = (long)puVar11 - (long)puVar10 >> 3;
      uVar1 = lVar3 + 1;
      if (uVar1 >> 0x3d != 0) goto LAB_004d9d64;
      uVar4 = (long)*(undefined8 **)(this + 0x108) - (long)puVar10;
      uVar6 = (long)uVar4 >> 2;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar6 = 0x1fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3d != 0) goto LAB_004d9d5c;
        pvVar2 = operator_new(uVar6 << 3);
      }
      puVar5 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
      puVar13 = puVar5 + 1;
      *puVar5 = param_1;
      if ((long)puVar11 - (long)puVar10 != 0) {
        uVar1 = ((long)puVar11 - (long)puVar10) - 8;
        puVar12 = puVar11;
        if ((0x37 < uVar1) &&
           (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar2)))) {
          puVar8 = puVar5 + -2;
          puVar9 = puVar11 + -2;
          uVar1 = (uVar1 >> 3) + 1;
          uVar7 = uVar1 & 0x3ffffffffffffffc;
          puVar12 = puVar11 + -uVar7;
          uVar4 = uVar7;
          do {
            puVar11 = puVar9 + -1;
            uVar16 = puVar9[-2];
            uVar15 = puVar9[1];
            uVar14 = *puVar9;
            uVar4 = uVar4 - 4;
            puVar9 = puVar9 + -4;
            puVar8[-1] = *puVar11;
            puVar8[-2] = uVar16;
            puVar8[1] = uVar15;
            *puVar8 = uVar14;
            puVar8 = puVar8 + -4;
          } while (uVar4 != 0);
          puVar5 = puVar5 + -uVar7;
          puVar11 = puVar10;
          if (uVar1 == uVar7) goto LAB_004d9bf4;
        }
        do {
          puVar12 = puVar12 + -1;
          puVar5 = puVar5 + -1;
          *puVar5 = *puVar12;
        } while (puVar12 != puVar10);
        puVar11 = *(undefined8 **)(this + 0xf8);
      }
LAB_004d9bf4:
      *(undefined8 **)(this + 0xf8) = puVar5;
      *(undefined8 **)(this + 0x100) = puVar13;
      *(void **)(this + 0x108) = (void *)((long)pvVar2 + uVar6 * 8);
      if (puVar11 != (undefined8 *)0x0) {
        operator_delete(puVar11);
      }
    }
    *(undefined8 **)(this + 0x100) = puVar13;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x223);
  if ((uVar1 & 1) == 0) {
    return;
  }
  puVar11 = *(undefined8 **)(this + 0x118);
  if (puVar11 < *(undefined8 **)(this + 0x120)) {
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
    goto LAB_004d9d40;
  }
  puVar10 = *(undefined8 **)(this + 0x110);
  lVar3 = (long)puVar11 - (long)puVar10 >> 3;
  uVar1 = lVar3 + 1;
  if (uVar1 >> 0x3d != 0) {
LAB_004d9d68:
    FUN_004d9d94();
                    /* WARNING: Subroutine does not return */
    FUN_0031fb04("vector");
  }
  uVar4 = (long)*(undefined8 **)(this + 0x120) - (long)puVar10;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) {
LAB_004d9d5c:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar2 = operator_new(uVar6 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
  puVar13 = puVar5 + 1;
  *puVar5 = param_1;
  if ((long)puVar11 - (long)puVar10 != 0) {
    uVar1 = ((long)puVar11 - (long)puVar10) - 8;
    puVar12 = puVar11;
    if ((0x37 < uVar1) &&
       (0x1f < (ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar2)))) {
      puVar8 = puVar5 + -2;
      puVar9 = puVar11 + -2;
      uVar1 = (uVar1 >> 3) + 1;
      uVar7 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar11 + -uVar7;
      uVar4 = uVar7;
      do {
        puVar11 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar4 = uVar4 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar11;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar4 != 0);
      puVar5 = puVar5 + -uVar7;
      puVar11 = puVar10;
      if (uVar1 == uVar7) goto LAB_004d9d2c;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar12;
    } while (puVar12 != puVar10);
    puVar11 = *(undefined8 **)(this + 0x110);
  }
LAB_004d9d2c:
  *(undefined8 **)(this + 0x110) = puVar5;
  *(undefined8 **)(this + 0x118) = puVar13;
  *(void **)(this + 0x120) = (void *)((long)pvVar2 + uVar6 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
LAB_004d9d40:
  *(undefined8 **)(this + 0x118) = puVar13;
  return;
}


// ===== 004d9d6c  FUN_004d9d6c =====

void FUN_004d9d6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004d9d80  FUN_004d9d80 =====

void FUN_004d9d80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004d9d94  FUN_004d9d94 =====

void FUN_004d9d94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004d9da8  rive::TextModifierGroup::rangeTypeChanged =====

/* rive::TextModifierGroup::rangeTypeChanged() */

void __thiscall rive::TextModifierGroup::rangeTypeChanged(TextModifierGroup *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((*(ushort *)(plVar3 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x10;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(this + 0x60) >> 5 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x20;
    (**(code **)(*(long *)this + 0x70))(this);
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


// ===== 004d9e60  rive::TextModifierGroup::shapeModifierChanged =====

/* rive::TextModifierGroup::shapeModifierChanged() */

void __thiscall rive::TextModifierGroup::shapeModifierChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004d9e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x298))();
  return;
}


// ===== 004d9e70  rive::TextModifierGroup::rangeChanged =====

/* rive::TextModifierGroup::rangeChanged() */

void __thiscall rive::TextModifierGroup::rangeChanged(TextModifierGroup *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if (*(long *)(this + 0xf8) == *(long *)(this + 0x100)) {
    (**(code **)(*plVar3 + 0x2a0))(plVar3);
  }
  else if ((*(ushort *)(plVar3 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x10;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(this + 0x60) >> 5 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x20;
    (**(code **)(*(long *)this + 0x70))(this);
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


// ===== 004d9f48  rive::TextModifierGroup::clearRangeMaps =====

/* rive::TextModifierGroup::clearRangeMaps() */

void __thiscall rive::TextModifierGroup::clearRangeMaps(TextModifierGroup *this)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = *(long **)(this + 0xd0);
  for (plVar3 = *(long **)(this + 200); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0xd0);
    *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(lVar4 + 0xe8);
  }
  if ((*(ushort *)(this + 0x60) >> 5 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x20;
    (**(code **)(*(long *)this + 0x70))();
    lVar4 = *(long *)(this + 0x80);
    uVar2 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar4 + 0xc32) = 1;
    *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
    if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
      *(uint *)(lVar4 + 0xbd4) = uVar2;
    }
  }
  return;
}


// ===== 004d9fd4  rive::TextModifierGroup::computeRangeMap =====

/* rive::TextModifierGroup::computeRangeMap(rive::Span<unsigned int const>,
   rive::SimpleArray<rive::Paragraph> const&, rive::SimpleArray<rive::SimpleArray<rive::GlyphLine> >
   const&, rive::GlyphLookup const&) */

void rive::TextModifierGroup::computeRangeMap
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xd0);
  for (puVar2 = *(undefined8 **)(param_1 + 200); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    TextModifierRange::computeRange(*puVar2,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


// ===== 004da048  rive::TextModifierGroup::computeCoverage =====

/* rive::TextModifierGroup::computeCoverage(unsigned int) */

void __thiscall rive::TextModifierGroup::computeCoverage(TextModifierGroup *this,uint param_1)

{
  undefined8 *puVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((*(ushort *)(this + 0x60) >> 5 & 1) != 0) {
    __s = *(void **)(this + 0x128);
    pvVar2 = *(void **)(this + 0x130);
    *(undefined2 *)(this + 0x60) = 0;
    uVar4 = (long)pvVar2 - (long)__s >> 2;
    uVar3 = (ulong)param_1;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      if (uVar3 < uVar4) {
        pvVar2 = (void *)((long)__s + uVar3 * 4);
        *(void **)(this + 0x130) = pvVar2;
      }
    }
    else {
      FUN_00380d20(this + 0x128,uVar3 - uVar4);
      __s = *(void **)(this + 0x128);
      pvVar2 = *(void **)(this + 0x130);
    }
    if (0 < (long)pvVar2 - (long)__s) {
      memset(__s,0,(long)pvVar2 - (long)__s);
    }
    puVar1 = *(undefined8 **)(this + 0xd0);
    for (puVar5 = *(undefined8 **)(this + 200); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      TextModifierRange::computeCoverage
                ((TextModifierRange *)*puVar5,*(long *)(this + 0x128),
                 *(long *)(this + 0x130) - *(long *)(this + 0x128) >> 2);
    }
  }
  return;
}


// ===== 004da0e8  rive::TextModifierGroup::glyphCoverage =====

/* rive::TextModifierGroup::glyphCoverage(unsigned int, unsigned int) */

float __thiscall
rive::TextModifierGroup::glyphCoverage(TextModifierGroup *this,uint param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  
  lVar2 = *(long *)(this + 0x128);
  fVar8 = *(float *)(lVar2 + (ulong)param_1 * 4);
  if (1 < param_2) {
    if ((param_2 < 0xd) || (-param_1 - 2 < param_2 - 2)) {
      uVar5 = 1;
    }
    else {
      uVar6 = (ulong)param_2 - 1;
      uVar4 = param_1 + 1;
      uVar5 = uVar6 & 0xfffffffffffffff8;
      uVar7 = uVar5;
      do {
        puVar1 = (undefined8 *)(lVar2 + (ulong)uVar4 * 4);
        uVar7 = uVar7 - 8;
        uVar4 = uVar4 + 8;
        fVar8 = fVar8 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) + (float)puVar1[1] +
                (float)((ulong)puVar1[1] >> 0x20) + (float)puVar1[2] +
                (float)((ulong)puVar1[2] >> 0x20) + (float)puVar1[3] +
                (float)((ulong)puVar1[3] >> 0x20);
      } while (uVar7 != 0);
      if (uVar6 == uVar5) goto LAB_004da134;
      uVar5 = uVar5 | 1;
    }
    lVar3 = param_2 - uVar5;
    uVar4 = param_1 + (int)uVar5;
    do {
      uVar7 = (ulong)uVar4;
      lVar3 = lVar3 + -1;
      uVar4 = uVar4 + 1;
      fVar8 = fVar8 + *(float *)(lVar2 + uVar7 * 4);
    } while (lVar3 != 0);
  }
LAB_004da134:
  return fVar8 / (float)param_2;
}


// ===== 004da1ac  rive::TextModifierGroup::onTextWorldTransformDirty =====

/* rive::TextModifierGroup::onTextWorldTransformDirty() */

void __thiscall rive::TextModifierGroup::onTextWorldTransformDirty(TextModifierGroup *this)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(this + 0x110) != *(long *)(this + 0x118)) {
    uVar2 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x86);
    plVar3 = *(long **)(this + 0x30);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
    if ((*(ushort *)(plVar3 + 0xc) >> 4 & 1) == 0) {
      *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x10;
      (**(code **)(*plVar3 + 0x70))(plVar3);
      lVar4 = plVar3[0x10];
      uVar1 = *(uint *)(plVar3 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004da244  rive::TextModifierGroup::resetTextFollowPath =====

/* rive::TextModifierGroup::resetTextFollowPath() */

void __thiscall rive::TextModifierGroup::resetTextFollowPath(TextModifierGroup *this)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 0x30);
  if (((plVar3 != (long *)0x0) &&
      (uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x86), (uVar4 & 1) != 0)) &&
     (lVar5 = *(long *)(this + 0x30), lVar5 != 0)) {
    fVar10 = *(float *)(lVar5 + 0xa4);
    fVar9 = *(float *)(lVar5 + 0xb0);
    fVar7 = (float)*(undefined8 *)(lVar5 + 0xa8);
    fVar11 = -fVar7;
    fVar8 = (float)((ulong)*(undefined8 *)(lVar5 + 0xa8) >> 0x20);
    fVar13 = (float)NEON_fmadd(fVar10,fVar9,fVar11 * fVar8);
    if (fVar13 != 0.0) {
      puVar6 = *(undefined8 **)(this + 0x110);
      puVar1 = *(undefined8 **)(this + 0x118);
      fVar13 = 1.0 / fVar13;
      fVar14 = (float)*(undefined8 *)(lVar5 + 0xb4);
      fVar15 = (float)((ulong)*(undefined8 *)(lVar5 + 0xb4) >> 0x20);
      uVar12 = NEON_rev64(CONCAT44(fVar15 * -fVar10,fVar14 * -fVar9),4);
      uStack_48 = CONCAT44(fVar10 * fVar13,-fVar8 * fVar13);
      local_50 = CONCAT44(fVar11 * fVar13,fVar9 * fVar13);
      local_40 = NEON_rev64(CONCAT44(fVar13 * ((float)((ulong)uVar12 >> 0x20) + fVar15 * fVar8),
                                     fVar13 * ((float)uVar12 + fVar14 * fVar7)),4);
      for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        TextFollowPathModifier::reset((TextFollowPathModifier *)*puVar6,(Mat2D *)&local_50);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004da344  rive::TextModifierGroup::transform =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TextModifierGroup::transform(float, rive::Mat2D&, rive::TransformGlyphArg&) */

void __thiscall
rive::TextModifierGroup::transform
          (TextModifierGroup *this,float param_1,Mat2D *param_2,TransformGlyphArg *param_3)

{
  Mat2D *pMVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 in_register_00005004;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 *puVar5;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0.0) goto LAB_004da5c0;
  puVar4 = *(undefined8 **)(this + 0x110);
  puVar6 = *(undefined8 **)(this + 0x118);
  uVar3 = *(uint *)(this + 0xa0);
  if ((puVar4 == puVar6) && ((uVar3 & 0x1d) == 0)) goto LAB_004da5c0;
  if (puVar4 == puVar6) {
    uVar21 = 0;
    uVar15 = 0;
    uVar22 = _DAT_0024deb0;
    uVar23 = _UNK_0024deb8;
    if ((uVar3 >> 2 & 1) != 0) {
      uVar22 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20) * param_1,
                        (float)*(undefined8 *)(this + 0xb0) * param_1);
      uVar23 = NEON_fmov(0x3f800000,4);
      uVar7 = (undefined4)uVar23;
      uVar17 = (undefined4)((ulong)uVar23 >> 0x20);
      goto LAB_004da464;
    }
  }
  else {
    local_70 = *(undefined8 *)(param_3 + 8);
    fVar8 = (float)local_70;
    fVar13 = (float)((ulong)local_70 >> 0x20);
    uStack_60 = _UNK_0024e1d8;
    local_68 = _DAT_0024e1d0;
    if ((uVar3 >> 2 & 1) != 0) {
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(this + 0xb0);
      puVar4 = *(undefined8 **)(this + 0x110);
      puVar6 = *(undefined8 **)(this + 0x118);
    }
    uVar7 = 0;
    fVar12 = fVar8;
    fVar14 = fVar13;
    if (puVar4 != puVar6) {
      do {
        puVar5 = puVar4 + 1;
        TextFollowPathModifier::transformGlyph
                  ((TransformComponents *)*puVar4,(TransformGlyphArg *)&local_70);
        fVar12 = (float)local_88;
        fVar14 = (float)((ulong)local_88 >> 0x20);
        uStack_60 = uStack_78;
        local_68 = local_80;
        local_70 = local_88;
        puVar4 = puVar5;
      } while (puVar5 != puVar6);
      uVar7 = (undefined4)uStack_78;
      fVar8 = (float)*(undefined8 *)(param_3 + 8);
      fVar13 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
    }
    uVar21 = NEON_fmadd(uVar7,param_1,0);
    uVar3 = *(uint *)(this + 0xa0);
    uVar22 = CONCAT44((fVar14 - fVar13) * param_1,(fVar12 - fVar8) * param_1);
    uVar23 = NEON_fmov(0x3f800000,4);
    uVar7 = (undefined4)uVar23;
    uVar17 = (undefined4)((ulong)uVar23 >> 0x20);
    uVar15 = (ulong)uVar21;
LAB_004da464:
    uVar23 = CONCAT44(uVar17,uVar7);
  }
  if ((uVar3 >> 4 & 1) != 0) {
    uVar23 = CONCAT44((1.0 - param_1) +
                      (float)((ulong)*(undefined8 *)(this + 0xbc) >> 0x20) * param_1,
                      (1.0 - param_1) + (float)*(undefined8 *)(this + 0xbc) * param_1);
  }
  uVar7 = NEON_fmadd(*(undefined4 *)(this + 0xb8),param_1,uVar21);
  uVar11 = NEON_cmeq((ulong)(uVar3 & 8),0,4);
  uVar10 = NEON_bit(CONCAT44(in_register_00005004,uVar7),uVar15,uVar11,1);
  uVar11 = DAT_0024e668;
  if ((float)uVar10 != 0.0) {
    sincosf((float)uVar10,(float *)((long)&local_90 + 4),(float *)&local_90);
    uVar11 = local_90;
  }
  fVar13 = (float)((ulong)uVar11 >> 0x20);
  fVar8 = (float)uVar11 * (float)uVar23;
  fVar12 = fVar13 * (float)uVar23;
  fVar16 = (float)((ulong)uVar23 >> 0x20);
  fVar14 = -fVar13 * fVar16;
  fVar16 = (float)uVar11 * fVar16;
  fVar13 = (float)((ulong)uVar22 >> 0x20);
  if ((uVar3 & 1) == 0) {
    pMVar1 = param_2 + 4;
    fVar9 = (float)((ulong)*(undefined8 *)pMVar1 >> 0x20);
    fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar18 = (float)*(undefined8 *)(param_2 + 0x10);
    *(ulong *)(param_2 + 8) =
         CONCAT44(fVar16 * SUB124(*(undefined1 (*) [12])pMVar1,8) + fVar9 * fVar12,
                  fVar14 * SUB124(*(undefined1 (*) [12])pMVar1,8) + fVar9 * fVar8);
    *(ulong *)param_2 =
         CONCAT44(fVar16 * SUB124(*(undefined1 (*) [12])pMVar1,0) +
                  (float)*(undefined8 *)param_2 * fVar12,
                  fVar14 * SUB124(*(undefined1 (*) [12])pMVar1,0) +
                  (float)*(undefined8 *)param_2 * fVar8);
    *(ulong *)(param_2 + 0x10) =
         CONCAT44(fVar13 + fVar16 * fVar19 + fVar12 * fVar18,
                  (float)uVar22 + fVar14 * fVar19 + fVar8 * fVar18);
  }
  else {
    *(float *)(param_2 + 0x10) = *(float *)(this + 0xa4) + *(float *)(param_2 + 0x10);
    pMVar1 = param_2 + 4;
    fVar18 = (float)((ulong)*(undefined8 *)pMVar1 >> 0x20);
    *(float *)(param_2 + 0x14) = *(float *)(this + 0xa8) + *(float *)(param_2 + 0x14);
    fVar20 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar19 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar9 = (float)uVar22 + fVar14 * fVar20 + fVar8 * fVar19;
    fVar13 = fVar13 + fVar16 * fVar20 + fVar12 * fVar19;
    *(ulong *)(param_2 + 8) =
         CONCAT44(fVar16 * SUB124(*(undefined1 (*) [12])pMVar1,8) + fVar18 * fVar12,
                  fVar14 * SUB124(*(undefined1 (*) [12])pMVar1,8) + fVar18 * fVar8);
    *(ulong *)param_2 =
         CONCAT44(fVar16 * SUB124(*(undefined1 (*) [12])pMVar1,0) +
                  (float)*(undefined8 *)param_2 * fVar12,
                  fVar14 * SUB124(*(undefined1 (*) [12])pMVar1,0) +
                  (float)*(undefined8 *)param_2 * fVar8);
    *(ulong *)(param_2 + 0x10) = CONCAT44(fVar13,fVar9);
    *(float *)(param_2 + 0x10) = fVar9 - *(float *)(this + 0xa4);
    *(float *)(param_2 + 0x14) = fVar13 - *(float *)(this + 0xa8);
  }
LAB_004da5c0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004da5f0  rive::TextModifierGroup::computeOpacity =====

/* rive::TextModifierGroup::computeOpacity(float, float) const */

undefined1  [16] __thiscall
rive::TextModifierGroup::computeOpacity(TextModifierGroup *this,float param_1,float param_2)

{
  undefined4 in_register_00005004;
  undefined8 in_register_00005008;
  undefined1 auVar1 [16];
  
  if (((byte)this[0xa0] >> 6 & 1) == 0) {
    return ZEXT416((uint)(*(float *)(this + 0xac) * param_1 * param_2));
  }
  auVar1._0_4_ = NEON_fmadd(param_1,1.0 - param_2,*(float *)(this + 0xac) * param_2);
  auVar1._4_4_ = in_register_00005004;
  auVar1._8_8_ = in_register_00005008;
  return auVar1;
}


// ===== 004da620  rive::TextModifierGroup::modifierFlagsChanged =====

/* rive::TextModifierGroup::modifierFlagsChanged() */

void __thiscall rive::TextModifierGroup::modifierFlagsChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da630  rive::TextModifierGroup::originXChanged =====

/* rive::TextModifierGroup::originXChanged() */

void __thiscall rive::TextModifierGroup::originXChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da640  rive::TextModifierGroup::originYChanged =====

/* rive::TextModifierGroup::originYChanged() */

void __thiscall rive::TextModifierGroup::originYChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da650  rive::TextModifierGroup::opacityChanged =====

/* rive::TextModifierGroup::opacityChanged() */

void __thiscall rive::TextModifierGroup::opacityChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da660  rive::TextModifierGroup::xChanged =====

/* rive::TextModifierGroup::xChanged() */

void __thiscall rive::TextModifierGroup::xChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da670  rive::TextModifierGroup::yChanged =====

/* rive::TextModifierGroup::yChanged() */

void __thiscall rive::TextModifierGroup::yChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da680  rive::TextModifierGroup::rotationChanged =====

/* rive::TextModifierGroup::rotationChanged() */

void __thiscall rive::TextModifierGroup::rotationChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da690  rive::TextModifierGroup::scaleXChanged =====

/* rive::TextModifierGroup::scaleXChanged() */

void __thiscall rive::TextModifierGroup::scaleXChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da6a0  rive::TextModifierGroup::scaleYChanged =====

/* rive::TextModifierGroup::scaleYChanged() */

void __thiscall rive::TextModifierGroup::scaleYChanged(TextModifierGroup *this)

{
                    /* WARNING: Could not recover jumptable at 0x004da6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x30) + 0x2a0))();
  return;
}


// ===== 004da6b0  rive::TextModifierGroup::modifyShape =====

/* rive::TextModifierGroup::modifyShape(rive::Text const&, rive::TextRun, float) */

void rive::TextModifierGroup::modifyShape
               (long *param_1_00,undefined4 param_2,long param_1,long param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  void *pvVar14;
  long *plVar15;
  long *plVar16;
  TextStyle *this;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  long *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  long local_88;
  undefined4 local_80;
  long local_78;
  
  lVar21 = tpidr_el0;
  local_78 = *(long *)(lVar21 + 0x28);
  this = *(TextStyle **)
          (*(long *)(*(long *)(param_4 + 0x1e8) + (ulong)*(ushort *)((long)param_5 + 0x1c) * 8) +
          0xe0);
  if (this == (TextStyle *)0x0) {
LAB_004da9bc:
    lVar18 = *param_5;
    *param_5 = 0;
    *param_1_00 = lVar18;
    if (*(long *)(lVar21 + 0x28) == local_78) {
      lVar21 = param_5[1];
      uVar26 = *(undefined8 *)((long)param_5 + 0x17);
      param_1_00[2] = param_5[2];
      param_1_00[1] = lVar21;
      *(undefined8 *)((long)param_1_00 + 0x17) = uVar26;
      return;
    }
    goto LAB_004dab90;
  }
  plVar15 = *(long **)(this + 200);
  if (plVar15 == (long *)0x0) {
    if ((*(long *)(this + 0xe8) != *(long *)(this + 0xf0)) ||
       (*(long *)(this + 0x100) != *(long *)(this + 0x108))) {
      TextStyle::updateVariableFont(this);
      plVar15 = *(long **)(this + 200);
      if (plVar15 != (long *)0x0) goto LAB_004da744;
    }
    if ((*(long *)(this + 0xb8) == 0) ||
       (plVar15 = *(long **)(*(long *)(this + 0xb8) + 0x80), plVar15 == (long *)0x0))
    goto LAB_004da9bc;
  }
LAB_004da744:
  FUN_00340fb0(1,plVar15 + 1);
  iVar6 = FUN_00340fe0(0xffffffff,plVar15 + 1);
  if (iVar6 == 1) {
    (**(code **)(*plVar15 + 8))(plVar15);
  }
  plVar15 = *(long **)(this + 200);
  if (plVar15 == (long *)0x0) {
    if ((*(long *)(this + 0xe8) != *(long *)(this + 0xf0)) ||
       (*(long *)(this + 0x100) != *(long *)(this + 0x108))) {
      TextStyle::updateVariableFont(this);
      plVar15 = *(long **)(this + 200);
      if (plVar15 != (long *)0x0) goto LAB_004da7b4;
    }
    if (*(long *)(this + 0xb8) == 0) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = *(long **)(*(long *)(this + 0xb8) + 0x80);
      if (plVar15 != (long *)0x0) goto LAB_004da7b4;
    }
  }
  else {
LAB_004da7b4:
    FUN_00340fb0(1,plVar15 + 1);
    iVar6 = FUN_00340fe0(0xffffffff,plVar15 + 1);
    if (iVar6 == 1) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x100);
  local_80 = 0x3f800000;
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_88 = 0;
  local_90 = (undefined8 *)0x0;
  if (*(undefined8 **)(param_1 + 0xf8) == puVar9) {
LAB_004da9ec:
    plVar15 = *(long **)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = 0;
    if ((plVar15 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,plVar15 + 1), iVar6 == 1)) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    lVar18 = *param_5;
    lVar24 = param_5[2];
    lVar22 = param_5[1];
    uVar26 = *(undefined8 *)((long)param_5 + 0x17);
    *param_5 = 0;
    *param_1_00 = lVar18;
    param_1_00[2] = lVar24;
    param_1_00[1] = lVar22;
    *(undefined8 *)((long)param_1_00 + 0x17) = uVar26;
    pvVar7 = local_a0;
    puVar9 = local_90;
  }
  else {
    uVar20 = (ulong)*(uint *)(param_5 + 1);
    puVar17 = *(undefined8 **)(param_1 + 0xf8);
    do {
      puVar19 = puVar17 + 1;
      uVar20 = (**(code **)(*(long *)*puVar17 + 0x90))
                         (uVar20,param_2,(long *)*puVar17,plVar15,&local_a0);
      puVar17 = puVar19;
    } while (puVar19 != puVar9);
    if (local_88 == 0) goto LAB_004da9ec;
    puVar19 = *(undefined8 **)(param_1 + 0x148);
    *(undefined8 **)(param_1 + 0x150) = puVar19;
    puVar17 = local_90;
    puVar9 = puVar19;
    if (local_90 != (undefined8 *)0x0) {
      do {
        uVar2 = *(undefined4 *)(puVar17 + 2);
        uVar27 = *(undefined4 *)((long)puVar17 + 0x14);
        if (puVar9 < *(undefined8 **)(param_1 + 0x158)) {
          *(undefined4 *)puVar9 = uVar2;
          *(undefined4 *)((long)puVar9 + 4) = uVar27;
          puVar9 = puVar9 + 1;
        }
        else {
          puVar19 = *(undefined8 **)(param_1 + 0x148);
          lVar18 = (long)puVar9 - (long)puVar19;
          uVar20 = (lVar18 >> 3) + 1;
          if (uVar20 >> 0x3d != 0) {
            FUN_004dab94();
LAB_004dab8c:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar8 = (long)*(undefined8 **)(param_1 + 0x158) - (long)puVar19;
          uVar10 = (long)uVar8 >> 2;
          if (uVar10 <= uVar20) {
            uVar10 = uVar20;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (uVar10 >> 0x3d != 0) goto LAB_004dab8c;
            pvVar7 = operator_new(uVar10 << 3);
          }
          puVar1 = (undefined8 *)((long)pvVar7 + (lVar18 >> 3) * 8);
          *(undefined4 *)puVar1 = uVar2;
          *(undefined4 *)((long)puVar1 + 4) = uVar27;
          puVar11 = puVar1;
          puVar13 = puVar9;
          if ((long)puVar9 - (long)puVar19 != 0) {
            uVar20 = ((long)puVar9 - (long)puVar19) - 8;
            if ((((0x147 < uVar20) &&
                 (uVar8 = (long)pvVar7 + lVar18 + -8, uVar8 - (uVar20 & 0xfffffffffffffff8) <= uVar8
                 )) && ((undefined8 *)((long)(puVar9 + -1) - (uVar20 & 0xfffffffffffffff8)) <=
                        puVar9 + -1)) && (0x1f < (ulong)((long)puVar9 + (-lVar18 - (long)pvVar7))))
            {
              puVar11 = puVar1 + -2;
              puVar13 = puVar9 + -2;
              uVar20 = (uVar20 >> 3) + 1;
              uVar12 = uVar20 & 0x3ffffffffffffffc;
              puVar9 = puVar9 + -uVar12;
              uVar8 = uVar12;
              do {
                puVar5 = puVar13 + -1;
                uVar25 = puVar13[-2];
                uVar23 = puVar13[1];
                uVar26 = *puVar13;
                uVar8 = uVar8 - 4;
                puVar13 = puVar13 + -4;
                puVar11[-1] = *puVar5;
                puVar11[-2] = uVar25;
                puVar11[1] = uVar23;
                *puVar11 = uVar26;
                puVar11 = puVar11 + -4;
              } while (uVar8 != 0);
              puVar11 = puVar1 + -uVar12;
              puVar13 = puVar19;
              if (uVar20 == uVar12) goto LAB_004da918;
            }
            do {
              puVar9 = puVar9 + -1;
              puVar11 = puVar11 + -1;
              *puVar11 = *puVar9;
            } while (puVar9 != puVar19);
            puVar13 = *(undefined8 **)(param_1 + 0x148);
          }
LAB_004da918:
          puVar9 = puVar1 + 1;
          *(undefined8 **)(param_1 + 0x148) = puVar11;
          *(undefined8 **)(param_1 + 0x150) = puVar9;
          *(void **)(param_1 + 0x158) = (void *)((long)pvVar7 + uVar10 * 8);
          if (puVar13 != (undefined8 *)0x0) {
            operator_delete(puVar13);
          }
        }
        puVar17 = (undefined8 *)*puVar17;
        *(undefined8 **)(param_1 + 0x150) = puVar9;
      } while (puVar17 != (undefined8 *)0x0);
      puVar19 = *(undefined8 **)(param_1 + 0x148);
    }
    (**(code **)(*plVar15 + 0x50))(&local_a8,plVar15,puVar19,(long)puVar9 - (long)puVar19 >> 3,0,0);
    plVar15 = local_a8;
    plVar16 = *(long **)(param_1 + 0x140);
    local_a8 = (long *)0x0;
    *(long **)(param_1 + 0x140) = plVar15;
    if (plVar16 != (long *)0x0) {
      iVar6 = FUN_00340fe0(0xffffffff,plVar16 + 1);
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      plVar15 = local_a8;
      if ((local_a8 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,local_a8 + 1), iVar6 == 1))
      {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
      plVar15 = *(long **)(param_1 + 0x140);
    }
    if (plVar15 != (long *)0x0) {
      FUN_00340fb0(1,plVar15 + 1);
    }
    lVar22 = param_5[1];
    lVar18 = param_5[2];
    uVar26 = *(undefined8 *)((long)param_5 + 0x14);
    uVar4 = *(undefined2 *)((long)param_5 + 0x1c);
    uVar3 = *(undefined1 *)((long)param_5 + 0x1e);
    *param_1_00 = (long)plVar15;
    param_1_00[1] = lVar22;
    *(int *)(param_1_00 + 2) = (int)lVar18;
    *(undefined8 *)((long)param_1_00 + 0x14) = uVar26;
    *(undefined2 *)((long)param_1_00 + 0x1c) = uVar4;
    *(undefined1 *)((long)param_1_00 + 0x1e) = uVar3;
    pvVar7 = local_a0;
    puVar9 = local_90;
  }
  while (puVar9 != (undefined8 *)0x0) {
    pvVar14 = (void *)*puVar9;
    local_a0 = pvVar7;
    operator_delete(puVar9);
    pvVar7 = local_a0;
    puVar9 = (undefined8 *)pvVar14;
  }
  local_a0 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  if (*(long *)(lVar21 + 0x28) == local_78) {
    return;
  }
LAB_004dab90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004dab94  FUN_004dab94 =====

void FUN_004dab94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004daba8  rive::TextModifierGroup::applyShapeModifiers =====

/* rive::TextModifierGroup::applyShapeModifiers(rive::Text const&, rive::StyledText&) */

void __thiscall
rive::TextModifierGroup::applyShapeModifiers
          (TextModifierGroup *this,Text *param_1,StyledText *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  float fVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  float fVar22;
  long *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined4 uStack_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  long *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  undefined4 uStack_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  long *local_98;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0xf8) != *(long *)(this + 0x100)) {
    puVar16 = *(undefined8 **)(this + 0x160);
    puVar17 = *(undefined8 **)(this + 0x168);
    if (puVar17 != puVar16) {
      do {
        puVar17 = puVar17 + -4;
        plVar12 = (long *)*puVar17;
        if ((plVar12 != (long *)0x0) && (iVar13 = FUN_00340fe0(0xffffffff,plVar12 + 1), iVar13 == 1)
           ) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      } while (puVar17 != puVar16);
      puVar17 = *(undefined8 **)(this + 0x160);
    }
    *(undefined8 **)(this + 0x168) = puVar16;
    uVar15 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18);
    if ((ulong)(*(long *)(this + 0x170) - (long)puVar17 >> 5) < (ulong)((long)uVar15 >> 5)) {
      if ((ulong)((long)uVar15 >> 5) >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c5570();
      }
      pvVar6 = operator_new(uVar15);
      puVar2 = (undefined8 *)((long)pvVar6 + ((long)puVar16 - (long)puVar17));
      puVar9 = puVar2;
      if ((long)puVar16 - (long)puVar17 == 0) {
        *(undefined8 **)(this + 0x160) = puVar2;
        *(undefined8 **)(this + 0x168) = puVar2;
        *(ulong *)(this + 0x170) = (long)pvVar6 + uVar15;
      }
      else {
        do {
          puVar14 = puVar16 + -4;
          uVar11 = *puVar14;
          *puVar14 = 0;
          puVar10 = puVar9 + -4;
          *puVar10 = uVar11;
          uVar21 = puVar16[-2];
          uVar11 = puVar16[-3];
          *(undefined8 *)((long)puVar9 + -9) = *(undefined8 *)((long)puVar16 + -9);
          puVar9[-2] = uVar21;
          puVar9[-3] = uVar11;
          puVar9 = puVar10;
          puVar16 = puVar14;
        } while (puVar14 != puVar17);
        puVar16 = *(undefined8 **)(this + 0x160);
        puVar17 = *(undefined8 **)(this + 0x168);
        *(undefined8 **)(this + 0x160) = puVar10;
        *(undefined8 **)(this + 0x168) = puVar2;
        *(ulong *)(this + 0x170) = (long)pvVar6 + uVar15;
        while (puVar17 != puVar16) {
          puVar17 = puVar17 + -4;
          plVar12 = (long *)*puVar17;
          if ((plVar12 != (long *)0x0) &&
             (iVar13 = FUN_00340fe0(0xffffffff,plVar12 + 1), iVar13 == 1)) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      if (puVar16 != (undefined8 *)0x0) {
        operator_delete(puVar16);
      }
    }
    puVar16 = *(undefined8 **)(param_2 + 0x18);
    puVar17 = *(undefined8 **)(param_2 + 0x20);
    if (puVar16 != puVar17) {
      uVar19 = 0;
      fVar7 = 3.4028235e+38;
      uVar15 = 0;
      do {
        uVar20 = (ulong)uVar19;
        uVar1 = *(int *)((long)puVar16 + 0x14) + uVar19;
        uVar18 = (ulong)uVar1;
        uVar8 = *(long *)(this + 0x130) - *(long *)(this + 0x128) >> 2;
        if (uVar19 < uVar1 && uVar20 < uVar8) {
          uVar3 = uVar18;
          if (uVar8 <= uVar18) {
            uVar3 = uVar8;
          }
          do {
            fVar22 = *(float *)(*(long *)(this + 0x128) + uVar20 * 4);
            if (fVar22 != fVar7) {
              if (uVar20 != uVar15) {
                iVar13 = (int)uVar20 - (int)uVar15;
                if (fVar7 == 0.0) {
                  plVar12 = (long *)*puVar16;
                  if (plVar12 != (long *)0x0) {
                    FUN_00340fb0(1,plVar12 + 1);
                  }
                  uStack_80 = *(undefined4 *)(puVar16 + 3);
                  local_90 = puVar16[1];
                  uStack_7c = *(undefined2 *)((long)puVar16 + 0x1c);
                  puVar2 = *(undefined8 **)(this + 0x168);
                  uStack_88 = *(undefined4 *)(puVar16 + 2);
                  uStack_7a = *(undefined1 *)((long)puVar16 + 0x1e);
                  uStack_84 = iVar13;
                  if (puVar2 < *(undefined8 **)(this + 0x170)) {
                    uStack_84._3_1_ = (undefined1)((uint)iVar13 >> 0x18);
                    *puVar2 = plVar12;
                    local_98 = (long *)0x0;
                    puVar2[2] = CONCAT44(iVar13,uStack_88);
                    puVar2[1] = local_90;
                    *(ulong *)((long)puVar2 + 0x17) =
                         CONCAT17(uStack_7a,CONCAT25(uStack_7c,CONCAT41(uStack_80,uStack_84._3_1_)))
                    ;
                    *(undefined8 **)(this + 0x168) = puVar2 + 4;
                    goto LAB_004dadb0;
                  }
                  local_98 = plVar12;
                  uVar11 = FUN_004cf4d8(this + 0x160,&local_98);
                  *(undefined8 *)(this + 0x168) = uVar11;
                  plVar12 = local_98;
                }
                else {
                  plVar12 = (long *)*puVar16;
                  if (plVar12 != (long *)0x0) {
                    FUN_00340fb0(1,plVar12 + 1);
                  }
                  local_b0 = puVar16[1];
                  uStack_a0 = *(undefined4 *)(puVar16 + 3);
                  local_a8 = *(undefined4 *)(puVar16 + 2);
                  local_9c = *(undefined2 *)((long)puVar16 + 0x1c);
                  local_9a = *(undefined1 *)((long)puVar16 + 0x1e);
                  local_b8 = plVar12;
                  local_a4 = iVar13;
                  modifyShape(&local_98,fVar7,this,param_1,&local_b8);
                  plVar5 = local_98;
                  plVar12 = *(long **)(this + 0x168);
                  if (plVar12 < *(long **)(this + 0x170)) {
                    local_98 = (long *)0x0;
                    *plVar12 = (long)plVar5;
                    plVar12[2] = CONCAT44(uStack_84,uStack_88);
                    plVar12[1] = local_90;
                    *(ulong *)((long)plVar12 + 0x17) =
                         CONCAT17(uStack_7a,CONCAT25(uStack_7c,CONCAT41(uStack_80,uStack_84._3_1_)))
                    ;
                    *(long **)(this + 0x168) = plVar12 + 4;
                    plVar12 = local_b8;
                  }
                  else {
                    uVar11 = FUN_004cf4d8(this + 0x160,&local_98);
                    plVar5 = local_98;
                    *(undefined8 *)(this + 0x168) = uVar11;
                    plVar12 = local_b8;
                    if ((local_98 != (long *)0x0) &&
                       (iVar13 = FUN_00340fe0(0xffffffff,local_98 + 1), plVar12 = local_b8,
                       iVar13 == 1)) {
                      (**(code **)(*plVar5 + 8))(plVar5);
                      plVar12 = local_b8;
                    }
                  }
                }
                if ((plVar12 != (long *)0x0) &&
                   (iVar13 = FUN_00340fe0(0xffffffff,plVar12 + 1), iVar13 == 1)) {
                  (**(code **)(*plVar12 + 8))(plVar12);
                }
              }
LAB_004dadb0:
              uVar15 = uVar20 & 0xffffffff;
              fVar7 = fVar22;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar3);
          uVar19 = (uint)uVar20;
        }
        iVar13 = uVar1 - (int)uVar15;
        if (fVar7 == 0.0) {
          plVar12 = (long *)*puVar16;
          if (plVar12 != (long *)0x0) {
            FUN_00340fb0(1,plVar12 + 1);
          }
          uStack_80 = *(undefined4 *)(puVar16 + 3);
          local_90 = puVar16[1];
          uStack_7c = *(undefined2 *)((long)puVar16 + 0x1c);
          puVar2 = *(undefined8 **)(this + 0x168);
          uStack_88 = *(undefined4 *)(puVar16 + 2);
          uStack_7a = *(undefined1 *)((long)puVar16 + 0x1e);
          uStack_84 = iVar13;
          if (*(undefined8 **)(this + 0x170) <= puVar2) {
            local_98 = plVar12;
            uVar11 = FUN_004cf4d8(this + 0x160,&local_98);
            *(undefined8 *)(this + 0x168) = uVar11;
            plVar12 = local_98;
            goto joined_r0x004db098;
          }
          uStack_84._3_1_ = (undefined1)((uint)iVar13 >> 0x18);
          *puVar2 = plVar12;
          local_98 = (long *)0x0;
          puVar2[2] = CONCAT44(iVar13,uStack_88);
          puVar2[1] = local_90;
          *(ulong *)((long)puVar2 + 0x17) =
               CONCAT17(uStack_7a,CONCAT25(uStack_7c,CONCAT41(uStack_80,uStack_84._3_1_)));
          *(undefined8 **)(this + 0x168) = puVar2 + 4;
        }
        else {
          plVar12 = (long *)*puVar16;
          if (plVar12 != (long *)0x0) {
            FUN_00340fb0(1,plVar12 + 1);
          }
          local_d0 = puVar16[1];
          uStack_c0 = *(undefined4 *)(puVar16 + 3);
          local_c8 = *(undefined4 *)(puVar16 + 2);
          local_bc = *(undefined2 *)((long)puVar16 + 0x1c);
          local_ba = *(undefined1 *)((long)puVar16 + 0x1e);
          local_d8 = plVar12;
          local_c4 = iVar13;
          modifyShape(&local_98,fVar7,this,param_1,&local_d8);
          plVar5 = local_98;
          plVar12 = *(long **)(this + 0x168);
          if (plVar12 < *(long **)(this + 0x170)) {
            local_98 = (long *)0x0;
            *plVar12 = (long)plVar5;
            plVar12[2] = CONCAT44(uStack_84,uStack_88);
            plVar12[1] = local_90;
            *(ulong *)((long)plVar12 + 0x17) =
                 CONCAT17(uStack_7a,CONCAT25(uStack_7c,CONCAT41(uStack_80,uStack_84._3_1_)));
            *(long **)(this + 0x168) = plVar12 + 4;
            plVar12 = local_d8;
          }
          else {
            uVar11 = FUN_004cf4d8(this + 0x160,&local_98);
            plVar5 = local_98;
            *(undefined8 *)(this + 0x168) = uVar11;
            plVar12 = local_d8;
            if ((local_98 != (long *)0x0) &&
               (iVar13 = FUN_00340fe0(0xffffffff,local_98 + 1), plVar12 = local_d8, iVar13 == 1)) {
              (**(code **)(*plVar5 + 8))(plVar5);
              plVar12 = local_d8;
            }
          }
joined_r0x004db098:
          if ((plVar12 != (long *)0x0) &&
             (iVar13 = FUN_00340fe0(0xffffffff,plVar12 + 1), iVar13 == 1)) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
        puVar16 = puVar16 + 4;
        uVar15 = uVar18;
      } while (puVar16 != puVar17);
      puVar16 = *(undefined8 **)(param_2 + 0x18);
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(this + 0x160);
    *(undefined8 **)(this + 0x160) = puVar16;
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(this + 0x168);
    *(undefined8 *)(this + 0x168) = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(this + 0x170);
    *(undefined8 *)(this + 0x170) = uVar11;
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004db134  rive::TextModifierGroup::needsShape =====

/* rive::TextModifierGroup::needsShape() const */

bool __thiscall rive::TextModifierGroup::needsShape(TextModifierGroup *this)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  if (*(long *)(this + 0xf8) != *(long *)(this + 0x100)) {
    return true;
  }
  plVar1 = *(long **)(this + 200);
  if (plVar1 != *(long **)(this + 0xd0)) {
    do {
      plVar3 = plVar1 + 1;
      bVar2 = *(char *)(*plVar1 + 0xac) == '\x03';
      plVar1 = plVar3;
    } while (!bVar2 && plVar3 != *(long **)(this + 0xd0));
    return bVar2;
  }
  return false;
}


// ===== 004db180  FUN_004db180 =====

void FUN_004db180(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)param_1[0x2c];
  *param_1 = (long)(PTR_vtable_0067d4c0 + 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x2d];
    puVar2 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -4;
        plVar4 = (long *)*puVar6;
        if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      } while (puVar6 != puVar5);
      puVar2 = (undefined8 *)param_1[0x2c];
    }
    param_1[0x2d] = (long)puVar5;
    operator_delete(puVar2);
  }
  pvVar3 = (void *)param_1[0x29];
  if (pvVar3 != (void *)0x0) {
    param_1[0x2a] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = (long *)param_1[0x28];
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pvVar3 = (void *)param_1[0x25];
  if (pvVar3 != (void *)0x0) {
    param_1[0x26] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x22];
  if (pvVar3 != (void *)0x0) {
    param_1[0x23] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x1f];
  if (pvVar3 != (void *)0x0) {
    param_1[0x20] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x1c];
  if (pvVar3 != (void *)0x0) {
    param_1[0x1d] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x19];
  if (pvVar3 != (void *)0x0) {
    param_1[0x1a] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x11];
  *param_1 = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x12] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0xe] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[9];
  if (pvVar3 != (void *)0x0) {
    param_1[10] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 004db318  FUN_004db318 =====

void FUN_004db318(void *param_1)

{
  FUN_004db180();
  operator_delete(param_1);
  return;
}


// ===== 004db33c  FUN_004db33c =====

undefined8 FUN_004db33c(void)

{
  return 0x9f;
}


// ===== 004db344  FUN_004db344 =====

bool FUN_004db344(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x9f;
}


// ===== 004db364  FUN_004db364 =====

undefined8 FUN_004db364(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x148) {
    if (0x141 < param_2) {
      if (param_2 == 0x142) {
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
      }
      else if (param_2 == 0x143) {
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
      }
      else if (param_2 == 0x144) {
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
      goto LAB_004db760;
    }
    if (param_2 == 4) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004db640;
        }
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar13;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004db640:
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
      if (param_2 != 5) goto LAB_004db760;
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004db678;
        }
        pbVar11 = pbVar10 + 1;
        bVar1 = *pbVar10;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar10 = pbVar11;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar11;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004db678:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 < 0x14b) {
      if (param_2 == 0x148) {
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
        *(undefined4 *)(param_1 + 0xa4) = uVar15;
      }
      else if (param_2 == 0x149) {
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
        *(undefined4 *)(param_1 + 0xa8) = uVar15;
      }
      else if (param_2 == 0x14a) {
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
        *(undefined4 *)(param_1 + 0xbc) = uVar15;
      }
      goto LAB_004db760;
    }
    if (param_2 == 0x14b) {
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
      *(undefined4 *)(param_1 + 0xc0) = uVar15;
      goto LAB_004db760;
    }
    if (param_2 == 0x14c) {
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
      *(undefined4 *)(param_1 + 0xb8) = uVar15;
      goto LAB_004db760;
    }
    if (param_2 != 0x14f) goto LAB_004db760;
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004db690;
      }
      pbVar11 = pbVar10 + 1;
      bVar1 = *pbVar10;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar10 = pbVar11;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar11;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004db690:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xa0) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004db760:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004db788  rive::TextModifierGroupBase::clone =====

/* rive::TextModifierGroupBase::clone() const */

long * __thiscall rive::TextModifierGroupBase::clone(TextModifierGroupBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)operator_new(0x178);
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
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[6] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x24] = 0;
  plVar3[0x23] = 0;
  plVar3[0x26] = 0;
  plVar3[0x25] = 0;
  plVar3[0x28] = 0;
  plVar3[0x27] = 0;
  plVar3[0x2a] = 0;
  plVar3[0x29] = 0;
  plVar3[0x2c] = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2e] = 0;
  plVar3[0x2d] = 0;
  plVar3[0x22] = 0;
  plVar3[0x21] = 0;
  puVar2 = PTR_vtable_0067d4c0;
  plVar3[0x20] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  uVar5 = *(undefined8 *)(this + 0xac);
  uVar4 = *(undefined8 *)(this + 0xa4);
  *plVar3 = (long)(puVar2 + 0x10);
  uVar1 = *(undefined4 *)(this + 0xa0);
  *(undefined8 *)((long)plVar3 + 0xac) = uVar5;
  *(undefined8 *)((long)plVar3 + 0xa4) = uVar4;
  uVar5 = *(undefined8 *)(this + 0xbc);
  uVar4 = *(undefined8 *)(this + 0xb4);
  *(undefined4 *)(plVar3 + 0x14) = uVar1;
  *(undefined8 *)((long)plVar3 + 0xbc) = uVar5;
  *(undefined8 *)((long)plVar3 + 0xb4) = uVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004db858  FUN_004db858 =====

void FUN_004db858(long *param_1)

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


// ===== 004db8e4  FUN_004db8e4 =====

void FUN_004db8e4(void)

{
  return;
}


// ===== 004db8e8  FUN_004db8e8 =====

void FUN_004db8e8(void)

{
  return;
}


// ===== 004db8ec  FUN_004db8ec =====

void FUN_004db8ec(void)

{
  return;
}


// ===== 004db8f0  FUN_004db8f0 =====

void FUN_004db8f0(void)

{
  return;
}


// ===== 004db8f4  FUN_004db8f4 =====

void FUN_004db8f4(void)

{
  return;
}


// ===== 004db8f8  FUN_004db8f8 =====

void FUN_004db8f8(void)

{
  return;
}


// ===== 004db8fc  FUN_004db8fc =====

void FUN_004db8fc(void)

{
  return;
}


// ===== 004db900  FUN_004db900 =====

void FUN_004db900(void)

{
  return;
}


// ===== 004db904  FUN_004db904 =====

void FUN_004db904(void)

{
  return;
}


// ===== 004db908  rive::TextModifierRange::onAddedDirty =====

/* rive::TextModifierRange::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::TextModifierRange::onAddedDirty(TextModifierRange *this,CoreContext *param_1)

{
  TextModifierRange *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  pTVar1 = (TextModifierRange *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TextModifierRange *)(param_1 + -0x998);
  }
  *(TextModifierRange **)(this + 0x40) = pTVar1;
  *(TextModifierRange **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar4 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar4 + 0x90))(plVar2,this);
  }
  if (*(int *)(this + 200) != *(int *)(this + 8)) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (plVar2 == (long *)0x0) {
      return 1;
    }
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x87);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    *(long **)(this + 0x118) = plVar2;
  }
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) != 0)) {
    TextModifierGroup::addModifierRange(*(TextModifierGroup **)(this + 0x30),this);
    return 0;
  }
  return 1;
}


// ===== 004db9e0  rive::TextModifierRange::addChild =====

/* rive::TextModifierRange::addChild(rive::Component*) */

void __thiscall rive::TextModifierRange::addChild(TextModifierRange *this,Component *param_1)

{
  ulong uVar1;
  
  ContainerComponent::addChild((ContainerComponent *)this,param_1);
  uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0xa3);
  if ((uVar1 & 1) != 0) {
    *(Component **)(this + 0x110) = param_1;
  }
  return;
}


// ===== 004dba20  rive::TextModifierRange::clearRangeMap =====

/* rive::TextModifierRange::clearRangeMap() */

void __thiscall rive::TextModifierRange::clearRangeMap(TextModifierRange *this)

{
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(this + 0xd0);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(this + 0xe8);
  return;
}


// ===== 004dba34  rive::RangeMapper::clear =====

/* rive::RangeMapper::clear() */

void __thiscall rive::RangeMapper::clear(RangeMapper *this)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  return;
}


// ===== 004dba48  rive::TextModifierRange::computeRange =====

/* rive::TextModifierRange::computeRange(rive::Span<unsigned int const>,
   rive::SimpleArray<rive::Paragraph> const&, rive::SimpleArray<rive::SimpleArray<rive::GlyphLine> >
   const&, rive::GlyphLookup const&) */

void rive::TextModifierRange::computeRange
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    return;
  }
  if (*(TextValueRun **)(param_1 + 0x118) == (TextValueRun *)0x0) {
    iVar3 = 0;
    uVar4 = param_3 & 0xffffffff;
  }
  else {
    iVar3 = TextValueRun::offset(*(TextValueRun **)(param_1 + 0x118));
    lVar5 = *(long *)(param_1 + 0x118);
    iVar6 = *(int *)(lVar5 + 0xe8);
    if (iVar6 == -1) {
      pbVar7 = (byte *)(lVar5 + 0x91);
      if ((*(byte *)(lVar5 + 0x90) & 1) != 0) {
        pbVar7 = *(byte **)(lVar5 + 0xa0);
      }
      bVar2 = *pbVar7;
      if (bVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0;
        do {
          if (((char)bVar2 < '\0') && ((bVar2 >> 6 & 1) != 0)) {
            pbVar7 = pbVar7 + 1;
            uVar8 = (uint)bVar2;
            do {
              pbVar7 = pbVar7 + 1;
              uVar1 = uVar8 >> 5;
              uVar8 = uVar8 << 1;
            } while ((uVar1 & 1) != 0);
          }
          else {
            pbVar7 = pbVar7 + 1;
          }
          bVar2 = *pbVar7;
          iVar6 = iVar6 + 1;
        } while (bVar2 != 0);
      }
      *(int *)(lVar5 + 0xe8) = iVar6;
    }
    uVar4 = (ulong)(uint)(iVar6 + iVar3);
  }
  if (*(char *)(param_1 + 0xac) != '\x03') {
    if (*(char *)(param_1 + 0xac) != '\x02') {
      RangeMapper::fromCharacters();
      return;
    }
    RangeMapper::fromWords();
    return;
  }
  RangeMapper::fromLines(param_1 + 0xd0,param_2,param_3,iVar3,uVar4,param_4,param_5,param_6);
  return;
}


// ===== 004dbba8  rive::RangeMapper::fromCharacters =====

/* rive::RangeMapper::fromCharacters(rive::Span<unsigned int const>, unsigned int, unsigned int,
   rive::GlyphLookup const&, bool) */

void rive::RangeMapper::fromCharacters
               (long *param_1,long param_2,long param_3,uint param_4,uint param_5,long *param_6,
               uint param_7)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  void *pvVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if (param_3 == 0) {
    return;
  }
  if (param_4 < param_5) {
    do {
      if (((param_7 & 1) == 0) ||
         (((uVar1 = *(uint *)(param_2 + (ulong)param_4 * 4), 0x20 < uVar1 && (uVar1 != 0x2028)) &&
          (uVar1 != 0x200b)))) {
        lVar17 = *param_6;
        uVar1 = param_4 + 1;
        uVar12 = (uint)((ulong)(param_6[1] - lVar17) >> 2);
        if (uVar1 < uVar12) {
          lVar5 = 0;
          iVar23 = uVar12 - param_4;
          do {
            if (*(int *)(lVar17 + (ulong)uVar1 * 4 + lVar5 * 4) !=
                *(int *)(lVar17 + (ulong)param_4 * 4)) {
              iVar23 = (int)lVar5 + 1;
              break;
            }
            lVar5 = lVar5 + 1;
          } while (((ulong)(param_6[1] - lVar17) >> 2 & 0xffffffff) - (ulong)uVar1 != lVar5);
        }
        else {
          iVar23 = 1;
        }
        puVar19 = (uint *)param_1[1];
        if (puVar19 < (uint *)param_1[2]) {
          puVar20 = puVar19 + 1;
          *puVar19 = param_4;
        }
        else {
          puVar18 = (uint *)*param_1;
          lVar17 = (long)puVar19 - (long)puVar18 >> 2;
          uVar10 = lVar17 + 1;
          if (uVar10 >> 0x3e != 0) goto LAB_004dbff4;
          uVar8 = param_1[2] - (long)puVar18;
          uVar9 = (long)uVar8 >> 1;
          if (uVar9 <= uVar10) {
            uVar9 = uVar10;
          }
          if (0x7ffffffffffffffb < uVar8) {
            uVar9 = 0x3fffffffffffffff;
          }
          if (uVar9 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            if (uVar9 >> 0x3e != 0) goto LAB_004dbff8;
            pvVar4 = operator_new(uVar9 << 2);
          }
          puVar6 = (uint *)((long)pvVar4 + lVar17 * 4);
          puVar20 = puVar6 + 1;
          *puVar6 = param_4;
          if ((long)puVar19 - (long)puVar18 != 0) {
            uVar10 = ((long)puVar19 - (long)puVar18) - 4;
            if ((0x1b < uVar10) &&
               (0x1f < (ulong)((long)puVar19 + (-((long)puVar19 - (long)puVar18) - (long)pvVar4))))
            {
              puVar13 = puVar6 + -4;
              puVar15 = puVar19 + -4;
              uVar10 = (uVar10 >> 2) + 1;
              uVar11 = uVar10 & 0x7ffffffffffffff8;
              puVar19 = puVar19 + -uVar11;
              uVar8 = uVar11;
              do {
                puVar2 = puVar15 + -2;
                uVar27 = *(undefined8 *)(puVar15 + -4);
                uVar26 = *(undefined8 *)(puVar15 + 2);
                uVar25 = *(undefined8 *)puVar15;
                uVar8 = uVar8 - 8;
                puVar15 = puVar15 + -8;
                *(undefined8 *)(puVar13 + -2) = *(undefined8 *)puVar2;
                *(undefined8 *)(puVar13 + -4) = uVar27;
                *(undefined8 *)(puVar13 + 2) = uVar26;
                *(undefined8 *)puVar13 = uVar25;
                puVar13 = puVar13 + -8;
              } while (uVar8 != 0);
              puVar6 = puVar6 + -uVar11;
              if (uVar10 == uVar11) goto LAB_004dbd78;
            }
            do {
              puVar19 = puVar19 + -1;
              puVar6 = puVar6 + -1;
              *puVar6 = *puVar19;
            } while (puVar19 != puVar18);
          }
LAB_004dbd78:
          *param_1 = (long)puVar6;
          param_1[1] = (long)puVar20;
          param_1[2] = (long)((long)pvVar4 + uVar9 * 4);
          if (puVar18 != (uint *)0x0) {
            operator_delete(puVar18);
          }
        }
        piVar24 = (int *)param_1[4];
        param_1[1] = (long)puVar20;
        if (piVar24 < (int *)param_1[5]) {
          piVar21 = piVar24 + 1;
          *piVar24 = iVar23;
        }
        else {
          piVar22 = (int *)param_1[3];
          lVar17 = (long)piVar24 - (long)piVar22 >> 2;
          uVar10 = lVar17 + 1;
          if (uVar10 >> 0x3e != 0) goto LAB_004dbff4;
          uVar8 = param_1[5] - (long)piVar22;
          uVar9 = (long)uVar8 >> 1;
          if (uVar9 <= uVar10) {
            uVar9 = uVar10;
          }
          if (0x7ffffffffffffffb < uVar8) {
            uVar9 = 0x3fffffffffffffff;
          }
          if (uVar9 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            if (uVar9 >> 0x3e != 0) goto LAB_004dbff8;
            pvVar4 = operator_new(uVar9 << 2);
          }
          piVar7 = (int *)((long)pvVar4 + lVar17 * 4);
          piVar21 = piVar7 + 1;
          *piVar7 = iVar23;
          if ((long)piVar24 - (long)piVar22 != 0) {
            uVar10 = ((long)piVar24 - (long)piVar22) - 4;
            if ((0x1b < uVar10) &&
               (0x1f < (ulong)((long)piVar24 + (-((long)piVar24 - (long)piVar22) - (long)pvVar4))))
            {
              piVar14 = piVar7 + -4;
              piVar16 = piVar24 + -4;
              uVar10 = (uVar10 >> 2) + 1;
              uVar11 = uVar10 & 0x7ffffffffffffff8;
              piVar24 = piVar24 + -uVar11;
              uVar8 = uVar11;
              do {
                piVar3 = piVar16 + -2;
                uVar27 = *(undefined8 *)(piVar16 + -4);
                uVar26 = *(undefined8 *)(piVar16 + 2);
                uVar25 = *(undefined8 *)piVar16;
                uVar8 = uVar8 - 8;
                piVar16 = piVar16 + -8;
                *(undefined8 *)(piVar14 + -2) = *(undefined8 *)piVar3;
                *(undefined8 *)(piVar14 + -4) = uVar27;
                *(undefined8 *)(piVar14 + 2) = uVar26;
                *(undefined8 *)piVar14 = uVar25;
                piVar14 = piVar14 + -8;
              } while (uVar8 != 0);
              piVar7 = piVar7 + -uVar11;
              if (uVar10 == uVar11) goto LAB_004dbe90;
            }
            do {
              piVar24 = piVar24 + -1;
              piVar7 = piVar7 + -1;
              *piVar7 = *piVar24;
            } while (piVar24 != piVar22);
          }
LAB_004dbe90:
          param_1[3] = (long)piVar7;
          param_1[4] = (long)piVar21;
          param_1[5] = (long)((long)pvVar4 + uVar9 * 4);
          if (piVar22 != (int *)0x0) {
            operator_delete(piVar22);
          }
        }
        param_4 = iVar23 + param_4;
        param_1[4] = (long)piVar21;
      }
      else {
        param_4 = param_4 + 1;
      }
    } while (param_4 < param_5);
  }
  puVar19 = (uint *)param_1[1];
  if (puVar19 < (uint *)param_1[2]) {
    puVar20 = puVar19 + 1;
    *puVar19 = param_5;
    goto LAB_004dbfd0;
  }
  puVar18 = (uint *)*param_1;
  lVar17 = (long)puVar19 - (long)puVar18 >> 2;
  uVar10 = lVar17 + 1;
  if (uVar10 >> 0x3e != 0) {
LAB_004dbff4:
                    /* WARNING: Subroutine does not return */
    FUN_003b1ebc();
  }
  uVar8 = param_1[2] - (long)puVar18;
  uVar9 = (long)uVar8 >> 1;
  if (uVar9 <= uVar10) {
    uVar9 = uVar10;
  }
  if (0x7ffffffffffffffb < uVar8) {
    uVar9 = 0x3fffffffffffffff;
  }
  if (uVar9 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar9 >> 0x3e != 0) {
LAB_004dbff8:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar4 = operator_new(uVar9 << 2);
  }
  puVar6 = (uint *)((long)pvVar4 + lVar17 * 4);
  puVar20 = puVar6 + 1;
  *puVar6 = param_5;
  if ((long)puVar19 - (long)puVar18 != 0) {
    uVar10 = ((long)puVar19 - (long)puVar18) - 4;
    if ((0x1b < uVar10) &&
       (0x1f < (ulong)((long)puVar19 + (-((long)puVar19 - (long)puVar18) - (long)pvVar4)))) {
      puVar13 = puVar6 + -4;
      puVar15 = puVar19 + -4;
      uVar10 = (uVar10 >> 2) + 1;
      uVar11 = uVar10 & 0x7ffffffffffffff8;
      puVar19 = puVar19 + -uVar11;
      uVar8 = uVar11;
      do {
        puVar2 = puVar15 + -2;
        uVar27 = *(undefined8 *)(puVar15 + -4);
        uVar26 = *(undefined8 *)(puVar15 + 2);
        uVar25 = *(undefined8 *)puVar15;
        uVar8 = uVar8 - 8;
        puVar15 = puVar15 + -8;
        *(undefined8 *)(puVar13 + -2) = *(undefined8 *)puVar2;
        *(undefined8 *)(puVar13 + -4) = uVar27;
        *(undefined8 *)(puVar13 + 2) = uVar26;
        *(undefined8 *)puVar13 = uVar25;
        puVar13 = puVar13 + -8;
      } while (uVar8 != 0);
      puVar6 = puVar6 + -uVar11;
      if (uVar10 == uVar11) goto LAB_004dbfbc;
    }
    do {
      puVar19 = puVar19 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar19;
    } while (puVar19 != puVar18);
  }
LAB_004dbfbc:
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar20;
  param_1[2] = (long)((long)pvVar4 + uVar9 * 4);
  if (puVar18 != (uint *)0x0) {
    operator_delete(puVar18);
  }
LAB_004dbfd0:
  param_1[1] = (long)puVar20;
  return;
}


// ===== 004dbffc  rive::RangeMapper::fromWords =====

/* rive::RangeMapper::fromWords(rive::Span<unsigned int const>, unsigned int, unsigned int) */

void rive::RangeMapper::fromWords
               (RangeMapper *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (param_3 == 0) {
    return;
  }
  param_3 = param_3 << 2;
  lVar16 = 0;
  uVar17 = 0;
  iVar4 = 0;
  uVar15 = 0;
  do {
    uVar1 = *(uint *)(param_2 + lVar16 * 4);
    if (uVar17 == ((uVar1 == 0x2028 || uVar1 == 0x200b) || uVar1 < 0x21)) {
      if (uVar17 == 0) {
        uVar15 = (uint)lVar16;
      }
      else {
        addRange(param_1,uVar15,iVar4 + uVar15,param_4,param_5);
        iVar4 = 0;
      }
      uVar17 = uVar17 ^ 1;
    }
    param_3 = param_3 + -4;
    lVar16 = lVar16 + 1;
    iVar4 = iVar4 + uVar17;
  } while (param_3 != 0);
  if (iVar4 != 0) {
    addRange(param_1,uVar15,iVar4 + uVar15,param_4,param_5);
  }
  puVar13 = *(uint **)(param_1 + 8);
  if (puVar13 < *(uint **)(param_1 + 0x10)) {
    puVar14 = puVar13 + 1;
    *puVar13 = param_5;
    goto LAB_004dc1e8;
  }
  puVar12 = *(uint **)param_1;
  lVar16 = (long)puVar13 - (long)puVar12 >> 2;
  uVar8 = lVar16 + 1;
  if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003b1ebc();
  }
  uVar5 = (long)*(uint **)(param_1 + 0x10) - (long)puVar12;
  uVar7 = (long)uVar5 >> 1;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar7 = 0x3fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar3 = operator_new(uVar7 << 2);
  }
  puVar6 = (uint *)((long)pvVar3 + lVar16 * 4);
  puVar14 = puVar6 + 1;
  *puVar6 = param_5;
  if ((long)puVar13 - (long)puVar12 != 0) {
    uVar8 = ((long)puVar13 - (long)puVar12) - 4;
    if ((0x1b < uVar8) &&
       (0x1f < (ulong)((long)puVar13 + (-((long)puVar13 - (long)puVar12) - (long)pvVar3)))) {
      puVar10 = puVar6 + -4;
      puVar11 = puVar13 + -4;
      uVar8 = (uVar8 >> 2) + 1;
      uVar9 = uVar8 & 0x7ffffffffffffff8;
      puVar13 = puVar13 + -uVar9;
      uVar5 = uVar9;
      do {
        puVar2 = puVar11 + -2;
        uVar20 = *(undefined8 *)(puVar11 + -4);
        uVar19 = *(undefined8 *)(puVar11 + 2);
        uVar18 = *(undefined8 *)puVar11;
        uVar5 = uVar5 - 8;
        puVar11 = puVar11 + -8;
        *(undefined8 *)(puVar10 + -2) = *(undefined8 *)puVar2;
        *(undefined8 *)(puVar10 + -4) = uVar20;
        *(undefined8 *)(puVar10 + 2) = uVar19;
        *(undefined8 *)puVar10 = uVar18;
        puVar10 = puVar10 + -8;
      } while (uVar5 != 0);
      puVar6 = puVar6 + -uVar9;
      if (uVar8 == uVar9) goto LAB_004dc1d4;
    }
    do {
      puVar13 = puVar13 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar13;
    } while (puVar13 != puVar12);
  }
LAB_004dc1d4:
  *(uint **)param_1 = puVar6;
  *(uint **)(param_1 + 8) = puVar14;
  *(void **)(param_1 + 0x10) = (void *)((long)pvVar3 + uVar7 * 4);
  if (puVar12 != (uint *)0x0) {
    operator_delete(puVar12);
  }
LAB_004dc1e8:
  *(uint **)(param_1 + 8) = puVar14;
  return;
}


// ===== 004dc214  rive::RangeMapper::fromLines =====

/* rive::RangeMapper::fromLines(rive::Span<unsigned int const>, unsigned int, unsigned int,
   rive::SimpleArray<rive::Paragraph> const&, rive::SimpleArray<rive::SimpleArray<rive::GlyphLine> >
   const&, rive::GlyphLookup const&) */

void rive::RangeMapper::fromLines
               (RangeMapper *param_1,undefined8 param_2,long param_3,uint param_4,uint param_5,
               long *param_6,undefined8 *param_7,long *param_8)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if (param_3 == 0) {
    return;
  }
  if (param_7[1] != 0) {
    puVar23 = (undefined8 *)*param_7;
    uVar22 = 0;
    puVar1 = puVar23 + param_7[1] * 2;
    do {
      lVar7 = puVar23[1];
      if (lVar7 != 0) {
        puVar24 = (uint *)*puVar23;
        lVar10 = *param_6;
        puVar20 = puVar24;
        do {
          lVar8 = *(long *)(lVar10 + (ulong)uVar22 * 0x18);
          lVar2 = *param_8;
          uVar6 = 0;
          if (puVar20[3] != 0) {
            uVar6 = puVar20[3] - 1;
          }
          uVar3 = *(uint *)(*(long *)(lVar8 + (ulong)puVar20[2] * 0x90 + 0x28) + (ulong)uVar6 * 4);
          uVar6 = uVar3 + 1;
          uVar17 = (uint)((ulong)(param_8[1] - lVar2) >> 2);
          if (uVar6 < uVar17) {
            lVar12 = 0;
            iVar15 = uVar17 - uVar3;
            do {
              if (*(int *)(lVar2 + (ulong)uVar6 * 4 + lVar12 * 4) !=
                  *(int *)(lVar2 + (ulong)uVar3 * 4)) {
                iVar15 = (int)lVar12 + 1;
                break;
              }
              lVar12 = lVar12 + 1;
            } while (((ulong)(param_8[1] - lVar2) >> 2 & 0xffffffff) - (ulong)uVar6 != lVar12);
            uVar6 = iVar15 + uVar3;
          }
          puVar11 = puVar20 + 8;
          addRange(param_1,*(uint *)(*(long *)(lVar8 + (ulong)*puVar20 * 0x90 + 0x28) +
                                    (ulong)puVar20[1] * 4),uVar6,param_4,param_5);
          puVar20 = puVar11;
        } while (puVar11 != puVar24 + lVar7 * 8);
      }
      puVar23 = puVar23 + 2;
      uVar22 = uVar22 + 1;
    } while (puVar23 != puVar1);
  }
  puVar20 = *(uint **)(param_1 + 8);
  if (puVar20 < *(uint **)(param_1 + 0x10)) {
    puVar21 = puVar20 + 1;
    *puVar20 = param_5;
    goto LAB_004dc454;
  }
  puVar24 = *(uint **)param_1;
  lVar7 = (long)puVar20 - (long)puVar24 >> 2;
  uVar14 = lVar7 + 1;
  if (uVar14 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003b1ebc();
  }
  uVar9 = (long)*(uint **)(param_1 + 0x10) - (long)puVar24;
  uVar13 = (long)uVar9 >> 1;
  if (uVar13 <= uVar14) {
    uVar13 = uVar14;
  }
  if (0x7ffffffffffffffb < uVar9) {
    uVar13 = 0x3fffffffffffffff;
  }
  if (uVar13 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar13 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar5 = operator_new(uVar13 << 2);
  }
  puVar11 = (uint *)((long)pvVar5 + lVar7 * 4);
  puVar21 = puVar11 + 1;
  *puVar11 = param_5;
  if ((long)puVar20 - (long)puVar24 != 0) {
    uVar14 = ((long)puVar20 - (long)puVar24) - 4;
    if ((0x1b < uVar14) &&
       (0x1f < (ulong)((long)puVar20 + (-((long)puVar20 - (long)puVar24) - (long)pvVar5)))) {
      puVar18 = puVar11 + -4;
      puVar19 = puVar20 + -4;
      uVar14 = (uVar14 >> 2) + 1;
      uVar16 = uVar14 & 0x7ffffffffffffff8;
      puVar20 = puVar20 + -uVar16;
      uVar9 = uVar16;
      do {
        puVar4 = puVar19 + -2;
        uVar27 = *(undefined8 *)(puVar19 + -4);
        uVar26 = *(undefined8 *)(puVar19 + 2);
        uVar25 = *(undefined8 *)puVar19;
        uVar9 = uVar9 - 8;
        puVar19 = puVar19 + -8;
        *(undefined8 *)(puVar18 + -2) = *(undefined8 *)puVar4;
        *(undefined8 *)(puVar18 + -4) = uVar27;
        *(undefined8 *)(puVar18 + 2) = uVar26;
        *(undefined8 *)puVar18 = uVar25;
        puVar18 = puVar18 + -8;
      } while (uVar9 != 0);
      puVar11 = puVar11 + -uVar16;
      if (uVar14 == uVar16) goto LAB_004dc440;
    }
    do {
      puVar20 = puVar20 + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *puVar20;
    } while (puVar20 != puVar24);
  }
LAB_004dc440:
  *(uint **)param_1 = puVar11;
  *(uint **)(param_1 + 8) = puVar21;
  *(void **)(param_1 + 0x10) = (void *)((long)pvVar5 + uVar13 * 4);
  if (puVar24 != (uint *)0x0) {
    operator_delete(puVar24);
  }
LAB_004dc454:
  *(uint **)(param_1 + 8) = puVar21;
  return;
}


// ===== 004dc480  rive::RangeMapper::addRange =====

/* rive::RangeMapper::addRange(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
rive::RangeMapper::addRange(RangeMapper *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  void *pvVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  long lVar18;
  int *piVar19;
  uint *puVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_2 <= param_3) {
    return;
  }
  if (param_4 <= param_1) {
    return;
  }
  if (param_3 <= param_1) {
    param_3 = param_1;
  }
  if (param_4 <= param_2) {
    param_2 = param_4;
  }
  iVar1 = param_2 - param_3;
  if (param_2 < param_3 || iVar1 == 0) {
    return;
  }
  puVar20 = *(uint **)(this + 8);
  if (puVar20 < *(uint **)(this + 0x10)) {
    puVar17 = puVar20 + 1;
    *puVar20 = param_3;
  }
  else {
    puVar15 = *(uint **)this;
    lVar18 = (long)puVar20 - (long)puVar15 >> 2;
    uVar9 = lVar18 + 1;
    if (uVar9 >> 0x3e != 0) goto LAB_004dc728;
    uVar5 = (long)*(uint **)(this + 0x10) - (long)puVar15;
    uVar7 = (long)uVar5 >> 1;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar7 = 0x3fffffffffffffff;
    }
    if (uVar7 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar7 >> 0x3e != 0) goto LAB_004dc72c;
      pvVar4 = operator_new(uVar7 << 2);
    }
    puVar6 = (uint *)((long)pvVar4 + lVar18 * 4);
    puVar17 = puVar6 + 1;
    *puVar6 = param_3;
    if ((long)puVar20 - (long)puVar15 != 0) {
      uVar9 = ((long)puVar20 - (long)puVar15) - 4;
      if ((0x1b < uVar9) &&
         (0x1f < (ulong)((long)puVar20 + (-((long)puVar20 - (long)puVar15) - (long)pvVar4)))) {
        puVar11 = puVar6 + -4;
        puVar13 = puVar20 + -4;
        uVar9 = (uVar9 >> 2) + 1;
        uVar10 = uVar9 & 0x7ffffffffffffff8;
        puVar20 = puVar20 + -uVar10;
        uVar5 = uVar10;
        do {
          puVar2 = puVar13 + -2;
          uVar24 = *(undefined8 *)(puVar13 + -4);
          uVar23 = *(undefined8 *)(puVar13 + 2);
          uVar22 = *(undefined8 *)puVar13;
          uVar5 = uVar5 - 8;
          puVar13 = puVar13 + -8;
          *(undefined8 *)(puVar11 + -2) = *(undefined8 *)puVar2;
          *(undefined8 *)(puVar11 + -4) = uVar24;
          *(undefined8 *)(puVar11 + 2) = uVar23;
          *(undefined8 *)puVar11 = uVar22;
          puVar11 = puVar11 + -8;
        } while (uVar5 != 0);
        puVar6 = puVar6 + -uVar10;
        if (uVar9 == uVar10) goto LAB_004dc5c8;
      }
      do {
        puVar20 = puVar20 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *puVar20;
      } while (puVar20 != puVar15);
    }
LAB_004dc5c8:
    *(uint **)this = puVar6;
    *(uint **)(this + 8) = puVar17;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar7 * 4);
    if (puVar15 != (uint *)0x0) {
      operator_delete(puVar15);
    }
  }
  piVar21 = *(int **)(this + 0x20);
  *(uint **)(this + 8) = puVar17;
  if (piVar21 < *(int **)(this + 0x28)) {
    piVar19 = piVar21 + 1;
    *piVar21 = iVar1;
    goto LAB_004dc70c;
  }
  piVar16 = *(int **)(this + 0x18);
  lVar18 = (long)piVar21 - (long)piVar16 >> 2;
  uVar9 = lVar18 + 1;
  if (uVar9 >> 0x3e != 0) {
LAB_004dc728:
                    /* WARNING: Subroutine does not return */
    FUN_003b1ebc();
  }
  uVar5 = (long)*(int **)(this + 0x28) - (long)piVar16;
  uVar7 = (long)uVar5 >> 1;
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar7 = 0x3fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3e != 0) {
LAB_004dc72c:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar4 = operator_new(uVar7 << 2);
  }
  piVar8 = (int *)((long)pvVar4 + lVar18 * 4);
  piVar19 = piVar8 + 1;
  *piVar8 = iVar1;
  if ((long)piVar21 - (long)piVar16 != 0) {
    uVar9 = ((long)piVar21 - (long)piVar16) - 4;
    if ((0x1b < uVar9) &&
       (0x1f < (ulong)((long)piVar21 + (-((long)piVar21 - (long)piVar16) - (long)pvVar4)))) {
      piVar12 = piVar8 + -4;
      piVar14 = piVar21 + -4;
      uVar9 = (uVar9 >> 2) + 1;
      uVar10 = uVar9 & 0x7ffffffffffffff8;
      piVar21 = piVar21 + -uVar10;
      uVar5 = uVar10;
      do {
        piVar3 = piVar14 + -2;
        uVar24 = *(undefined8 *)(piVar14 + -4);
        uVar23 = *(undefined8 *)(piVar14 + 2);
        uVar22 = *(undefined8 *)piVar14;
        uVar5 = uVar5 - 8;
        piVar14 = piVar14 + -8;
        *(undefined8 *)(piVar12 + -2) = *(undefined8 *)piVar3;
        *(undefined8 *)(piVar12 + -4) = uVar24;
        *(undefined8 *)(piVar12 + 2) = uVar23;
        *(undefined8 *)piVar12 = uVar22;
        piVar12 = piVar12 + -8;
      } while (uVar5 != 0);
      piVar8 = piVar8 + -uVar10;
      if (uVar9 == uVar10) goto LAB_004dc6f0;
    }
    do {
      piVar21 = piVar21 + -1;
      piVar8 = piVar8 + -1;
      *piVar8 = *piVar21;
    } while (piVar21 != piVar16);
  }
LAB_004dc6f0:
  *(int **)(this + 0x18) = piVar8;
  *(int **)(this + 0x20) = piVar19;
  *(void **)(this + 0x28) = (void *)((long)pvVar4 + uVar7 * 4);
  if (piVar16 != (int *)0x0) {
    operator_delete(piVar16);
  }
LAB_004dc70c:
  *(int **)(this + 0x20) = piVar19;
  return;
}


// ===== 004dc730  rive::TextModifierRange::coverageAt =====

/* rive::TextModifierRange::coverageAt(float) */

float __thiscall rive::TextModifierRange::coverageAt(TextModifierRange *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  fVar7 = *(float *)(this + 0x104);
  fVar5 = *(float *)(this + 0x100);
  fVar3 = 0.0;
  if (((fVar7 < fVar5 == (NAN(fVar7) || NAN(fVar5))) && (param_1 <= fVar7)) &&
     (fVar5 == param_1 || fVar5 < param_1 != (NAN(fVar5) || NAN(param_1)))) {
    fVar2 = *(float *)(this + 0x108);
    if (fVar2 == param_1 || fVar2 < param_1 != (NAN(fVar2) || NAN(param_1))) {
      fVar5 = *(float *)(this + 0x10c);
      if (param_1 <= fVar5) {
        return 1.0;
      }
      fVar3 = 1.0;
      if (fVar7 - fVar5 != 0.0) {
        fVar3 = (float)NEON_fminnm((param_1 - fVar5) / (fVar7 - fVar5),0x3f800000);
        fVar3 = 1.0 - fVar3;
      }
    }
    else {
      fVar2 = fVar2 - fVar5;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      fVar3 = 1.0;
      if (fVar2 != 0.0) {
        fVar3 = param_1 - fVar5;
        if (param_1 - fVar5 <= 0.0) {
          fVar3 = 0.0;
        }
        fVar3 = fVar3 / fVar2;
      }
    }
    lVar1 = *(long *)(this + 0x110);
    if (lVar1 != 0) {
      fVar5 = (float)CubicInterpolatorSolver::getT((CubicInterpolatorSolver *)(lVar1 + 0x98),fVar3);
      fVar3 = *(float *)(lVar1 + 0x8c);
      uVar4 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x94),0xc0400000,0x3f800000);
      uVar4 = NEON_fmadd(fVar3,0x40400000,uVar4);
      uVar6 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x94),0x40400000,fVar3 * -6.0);
      uVar4 = NEON_fmadd(uVar4,fVar5,uVar6);
      fVar3 = (float)NEON_fmadd(uVar4,fVar5,fVar3 * 3.0);
      fVar3 = fVar3 * fVar5;
    }
  }
  return fVar3;
}


// ===== 004dc82c  rive::TextModifierRange::computeCoverage =====

/* rive::TextModifierRange::computeCoverage(rive::Span<float>) */

void __thiscall rive::TextModifierRange::computeCoverage(TextModifierRange *this,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  TextModifierRange TVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar3 = *(long *)(this + 0xe8);
  if (lVar3 == *(long *)(this + 0xf0)) {
    return;
  }
  uVar10 = *(long *)(this + 0xf0) - lVar3;
  uVar11 = uVar10 >> 2;
  if (this[0xb0] == (TextModifierRange)0x0) {
    fVar13 = *(float *)(this + 0xc4);
    fVar17 = (float)(uVar11 & 0xffffffff);
    fVar15 = (*(float *)(this + 0xa0) + fVar13) * fVar17;
    fVar16 = (fVar13 + *(float *)(this + 0xa4)) * fVar17;
    fVar14 = (fVar13 + *(float *)(this + 0xc0)) * fVar17;
    *(float *)(this + 0x108) = (fVar13 + *(float *)(this + 0xbc)) * fVar17;
  }
  else {
    if (this[0xb0] != (TextModifierRange)0x1) goto LAB_004dc8ec;
    fVar13 = *(float *)(this + 0xc4);
    fVar15 = *(float *)(this + 0xa0) + fVar13;
    fVar16 = fVar13 + *(float *)(this + 0xa4);
    fVar14 = fVar13 + *(float *)(this + 0xc0);
    *(float *)(this + 0x108) = fVar13 + *(float *)(this + 0xbc);
  }
  *(float *)(this + 0x100) = fVar15;
  *(float *)(this + 0x104) = fVar16;
  *(float *)(this + 0x10c) = fVar14;
LAB_004dc8ec:
  if ((int)uVar11 != 0) {
    lVar4 = *(long *)(this + 0xd0);
    lVar5 = *(long *)(this + 0xd8);
    TVar8 = this[0xb8];
    uVar11 = 0;
    uVar2 = *(uint *)(this + 0xb4) & 0xff;
    do {
      fVar14 = *(float *)(this + 0xa8);
      uVar6 = *(uint *)(lVar3 + uVar11 * 4);
      uVar12 = (ulong)uVar6;
      uVar7 = *(uint *)(lVar4 + uVar11 * 4);
      fVar13 = (float)coverageAt(this,(float)(uVar11 & 0xffffffff) + 0.5);
      if (uVar6 != 0) {
        fVar14 = fVar14 * fVar13;
        uVar1 = uVar7;
        do {
          fVar13 = *(float *)(param_2 + (ulong)uVar1 * 4);
          if (uVar2 < 3) {
            if (uVar2 == 0) {
              fVar15 = fVar14 + fVar13;
            }
            else if (uVar2 == 1) {
              fVar15 = fVar13 - fVar14;
            }
            else {
              fVar15 = fVar14 * fVar13;
              if (uVar2 != 2) {
                fVar15 = fVar13;
              }
            }
          }
          else {
            if (uVar2 == 3) {
              bVar9 = fVar14 < fVar13;
            }
            else {
              if (uVar2 != 4) {
                fVar15 = ABS(fVar13 - fVar14);
                if (uVar2 != 5) {
                  fVar15 = fVar13;
                }
                goto LAB_004dc964;
              }
              bVar9 = false;
              if (!NAN(fVar13) && !NAN(fVar14)) {
                bVar9 = fVar13 < fVar14;
              }
            }
            fVar15 = fVar14;
            if (!bVar9) {
              fVar15 = fVar13;
            }
          }
LAB_004dc964:
          fVar13 = (float)NEON_fminnm(fVar15,0x3f800000);
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          if (TVar8 != (TextModifierRange)0x0) {
            fVar15 = fVar13;
          }
          uVar12 = uVar12 - 1;
          *(float *)(param_2 + (ulong)uVar1 * 4) = fVar15;
          uVar1 = uVar1 + 1;
        } while (uVar12 != 0);
      }
      uVar11 = uVar11 + 1;
      if (uVar11 < ((ulong)(lVar5 - lVar4) >> 2 & 0xffffffff)) {
        uVar1 = *(uint *)(lVar4 + uVar11 * 4);
        if (uVar7 + uVar6 < uVar1) {
          memset((void *)(param_2 + (ulong)(uVar7 + uVar6) * 4),0,
                 (ulong)((uVar1 + ~uVar7) - uVar6) * 4 + 4);
        }
      }
    } while (uVar11 != (uVar10 >> 2 & 0xffffffff));
  }
  return;
}


// ===== 004dca54  rive::TextModifierRange::modifyFromChanged =====

/* rive::TextModifierRange::modifyFromChanged() */

void __thiscall rive::TextModifierRange::modifyFromChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dcb2c  rive::TextModifierRange::modifyToChanged =====

/* rive::TextModifierRange::modifyToChanged() */

void __thiscall rive::TextModifierRange::modifyToChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dcc04  rive::TextModifierRange::strengthChanged =====

/* rive::TextModifierRange::strengthChanged() */

void __thiscall rive::TextModifierRange::strengthChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dccdc  rive::TextModifierRange::unitsValueChanged =====

/* rive::TextModifierRange::unitsValueChanged() */

void __thiscall rive::TextModifierRange::unitsValueChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dcd94  rive::TextModifierRange::typeValueChanged =====

/* rive::TextModifierRange::typeValueChanged() */

void __thiscall rive::TextModifierRange::typeValueChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dce6c  rive::TextModifierRange::modeValueChanged =====

/* rive::TextModifierRange::modeValueChanged() */

void __thiscall rive::TextModifierRange::modeValueChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dcf44  rive::TextModifierRange::clampChanged =====

/* rive::TextModifierRange::clampChanged() */

void __thiscall rive::TextModifierRange::clampChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dd01c  rive::TextModifierRange::falloffFromChanged =====

/* rive::TextModifierRange::falloffFromChanged() */

void __thiscall rive::TextModifierRange::falloffFromChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dd0f4  rive::TextModifierRange::falloffToChanged =====

/* rive::TextModifierRange::falloffToChanged() */

void __thiscall rive::TextModifierRange::falloffToChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dd1cc  rive::TextModifierRange::offsetChanged =====

/* rive::TextModifierRange::offsetChanged() */

void __thiscall rive::TextModifierRange::offsetChanged(TextModifierRange *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x30);
  plVar4 = (long *)plVar3[6];
  if (plVar3[0x1f] == plVar3[0x20]) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4);
  }
  else if ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar2 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar3 + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x20;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004dd2a4  rive::TextModifierRange::needsShape =====

/* rive::TextModifierRange::needsShape() const */

bool __thiscall rive::TextModifierRange::needsShape(TextModifierRange *this)

{
  return this[0xac] == (TextModifierRange)0x3;
}


// ===== 004dd2b4  rive::RangeMapper::unitToCharacterRange =====

/* rive::RangeMapper::unitToCharacterRange(float) const */

undefined4 __thiscall rive::RangeMapper::unitToCharacterRange(RangeMapper *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  lVar1 = *(long *)this;
  if (lVar1 != *(long *)(this + 8)) {
    fVar5 = (float)((*(long *)(this + 8) - lVar1 >> 2) - 1);
    fVar3 = 0.0;
    if (0.0 <= param_1) {
      fVar3 = param_1;
    }
    if (fVar3 == fVar5 || fVar3 < fVar5 != (NAN(fVar3) || NAN(fVar5))) {
      fVar5 = fVar3;
    }
    uVar2 = (ulong)fVar5;
    uVar4 = NEON_ucvtf(*(undefined4 *)(lVar1 + uVar2 * 4));
    if (uVar2 < (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 2)) {
      uVar6 = NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0x18) + uVar2 * 4));
      uVar4 = NEON_fmadd(uVar6,fVar5 - (float)uVar2,uVar4);
    }
    return uVar4;
  }
  return 0;
}


// ===== 004dd320  FUN_004dd320 =====

void FUN_004dd320(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x1d];
  *param_1 = (long)(PTR_vtable_0067d490 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x1e] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1a];
  if (pvVar1 != (void *)0x0) {
    param_1[0x1b] = (long)pvVar1;
    operator_delete(pvVar1);
  }
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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004dd3e0  FUN_004dd3e0 =====

void FUN_004dd3e0(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x1d];
  *param_1 = (long)(PTR_vtable_0067d490 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x1e] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1a];
  if (pvVar1 != (void *)0x0) {
    param_1[0x1b] = (long)pvVar1;
    operator_delete(pvVar1);
  }
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


// ===== 004dd49c  FUN_004dd49c =====

undefined8 FUN_004dd49c(void)

{
  return 0x9e;
}


// ===== 004dd4a4  FUN_004dd4a4 =====

bool FUN_004dd4a4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x9e;
}


// ===== 004dd4c4  FUN_004dd4c4 =====

undefined8 FUN_004dd4c4(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x145) {
    if (0x13c < param_2) {
      if (param_2 == 0x13d) {
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
        *(undefined4 *)(param_1 + 0xbc) = uVar15;
      }
      else if (param_2 == 0x13e) {
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
        *(undefined4 *)(param_1 + 0xc0) = uVar15;
      }
      else if (param_2 == 0x13f) {
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
        *(undefined4 *)(param_1 + 0xc4) = uVar15;
      }
      goto LAB_004dd9dc;
    }
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004dd8d4;
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
LAB_004dd8d4:
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
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004dd90c;
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
LAB_004dd90c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
    else {
      if (param_2 != 0x13c) goto LAB_004dd9dc;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004dd924;
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
LAB_004dd924:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xac) = (int)uVar6;
    }
  }
  else if (param_2 < 0x14d) {
    if (param_2 == 0x145) {
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004dd888;
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
LAB_004dd888:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xb0) = (int)uVar6;
    }
    else {
      if (param_2 != 0x146) {
        if (param_2 == 0x147) {
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
        goto LAB_004dd9dc;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004dd8b8;
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
LAB_004dd8b8:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xb4) = (int)uVar6;
    }
  }
  else if (param_2 < 0x150) {
    if (param_2 != 0x14d) {
      if (param_2 == 0x14e) {
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
      goto LAB_004dd9dc;
    }
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0xb8) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0xb8) = *pcVar7 == '\x01';
    }
  }
  else {
    if (param_2 == 0x150) {
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
      goto LAB_004dd9dc;
    }
    if (param_2 != 0x17a) goto LAB_004dd9dc;
    uVar14 = 0;
    uVar6 = 0;
    pbVar11 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004dd8a0;
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
LAB_004dd8a0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 200) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004dd9dc:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004dda04  FUN_004dda04 =====

void FUN_004dda04(void)

{
  return;
}


// ===== 004dda08  rive::TextModifierRangeBase::clone =====

/* rive::TextModifierRangeBase::clone() const */

long * __thiscall rive::TextModifierRangeBase::clone(TextModifierRangeBase *this)

{
  TextModifierRangeBase TVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  plVar3 = (long *)operator_new(0x120);
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
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
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
  lVar6 = *(long *)(this + 0xa0);
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  puVar2 = PTR_vtable_0067d490;
  plVar3[0x14] = lVar6;
  uVar4 = *(undefined4 *)(this + 0xa8);
  plVar3[0x13] = 0;
  *(undefined4 *)(plVar3 + 0x15) = uVar4;
  uVar7 = *(undefined8 *)(this + 0xac);
  *plVar3 = (long)(puVar2 + 0x10);
  uVar4 = *(undefined4 *)(this + 0xb4);
  *(undefined8 *)((long)plVar3 + 0xac) = uVar7;
  uVar7 = *(undefined8 *)(this + 0xbc);
  *(undefined4 *)((long)plVar3 + 0xb4) = uVar4;
  TVar1 = this[0xb8];
  *(undefined8 *)((long)plVar3 + 0xbc) = uVar7;
  uVar5 = *(undefined4 *)(this + 0xc4);
  *(TextModifierRangeBase *)(plVar3 + 0x17) = TVar1;
  uVar4 = *(undefined4 *)(this + 200);
  *(undefined4 *)((long)plVar3 + 0xc4) = uVar5;
  *(undefined4 *)(plVar3 + 0x19) = uVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004ddae4  FUN_004ddae4 =====

void FUN_004ddae4(long *param_1)

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


// ===== 004ddb70  FUN_004ddb70 =====

void FUN_004ddb70(void)

{
  return;
}


// ===== 004ddb74  FUN_004ddb74 =====

void FUN_004ddb74(void)

{
  return;
}


// ===== 004ddb78  FUN_004ddb78 =====

void FUN_004ddb78(void)

{
  return;
}


// ===== 004ddb7c  FUN_004ddb7c =====

void FUN_004ddb7c(void)

{
  return;
}


// ===== 004ddb80  FUN_004ddb80 =====

void FUN_004ddb80(void)

{
  return;
}


// ===== 004ddb84  FUN_004ddb84 =====

void FUN_004ddb84(void)

{
  return;
}


// ===== 004ddb88  FUN_004ddb88 =====

void FUN_004ddb88(void)

{
  return;
}


// ===== 004ddb8c  FUN_004ddb8c =====

void FUN_004ddb8c(void)

{
  return;
}


// ===== 004ddb90  FUN_004ddb90 =====

void FUN_004ddb90(void)

{
  return;
}


// ===== 004ddb94  FUN_004ddb94 =====

void FUN_004ddb94(void)

{
  return;
}


// ===== 004ddb98  rive::TextSelectionPath::update =====

/* rive::TextSelectionPath::update(rive::Span<rive::AABB>, float) */

void rive::TextSelectionPath::update(float param_1,undefined1 *param_2,AABB *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  TextSelectionPath *pTVar4;
  RawPath *pRVar5;
  long lVar6;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *param_2 = 1;
  pRVar5 = (RawPath *)(param_2 + 0x10);
  param_2[0x48] = 0;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)pRVar5;
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_2 + 0xe8);
  if (param_4 != 0) {
    param_4 = param_4 << 4;
    do {
      RectanglesToContour::addRect((RectanglesToContour *)(param_2 + 0x58),param_3);
      param_4 = param_4 + -0x10;
      param_3 = param_3 + 0x10;
    } while (param_4 != 0);
  }
  pTVar4 = (TextSelectionPath *)
           RectanglesToContour::computeContours((RectanglesToContour *)(param_2 + 0x58));
  lVar2 = *(long *)(param_2 + 0x180) - *(long *)(param_2 + 0x178);
  if (lVar2 != 0) {
    local_68 = *(long *)(param_2 + 0x160);
    lStack_60 = **(long **)(param_2 + 0x178);
    pTVar4 = (TextSelectionPath *)addRoundedPath(pTVar4,(Contour *)&local_68,param_1,pRVar5);
    if (lVar2 != 8) {
      lVar6 = 0;
      do {
        plVar1 = (long *)(*(long *)(param_2 + 0x178) + lVar6 * 8);
        lStack_60 = *plVar1;
        local_68 = *(long *)(param_2 + 0x160) + lStack_60 * 0xc;
        lStack_60 = plVar1[1] - lStack_60;
        pTVar4 = (TextSelectionPath *)addRoundedPath(pTVar4,(Contour *)&local_68,param_1,pRVar5);
        lVar6 = lVar6 + 1;
      } while ((lVar2 >> 3) + -1 != lVar6);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ddccc  rive::TextSelectionPath::addRoundedPath =====

/* rive::TextSelectionPath::addRoundedPath(rive::Contour const&, float, rive::RawPath&) */

void __thiscall
rive::TextSelectionPath::addRoundedPath
          (TextSelectionPath *this,Contour *param_1,float param_2,RawPath *param_3)

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar2 = Contour::isClockwise(param_1);
  uVar8 = *(ulong *)(param_1 + 8);
  if (uVar8 < 2) {
    return;
  }
  pfVar3 = *(float **)param_1;
  if ((uVar2 & 1) == 0) {
    fVar24 = pfVar3[uVar8 * 3 + -3];
    fVar23 = pfVar3[uVar8 * 3 + -2];
    pfVar5 = pfVar3;
    if (param_2 == 0.0 || param_2 < 0.0 != NAN(param_2)) goto LAB_004dde54;
  }
  else {
    fVar24 = *pfVar3;
    fVar23 = pfVar3[1];
    if (param_2 == 0.0 || param_2 < 0.0 != NAN(param_2)) {
LAB_004dde54:
      RawPath::move(fVar24,fVar23,param_3);
      bVar1 = false;
      goto LAB_004ddf00;
    }
    pfVar5 = pfVar3 + uVar8 * 3 + -3;
  }
  fVar10 = pfVar5[1] - fVar23;
  fVar12 = *pfVar5 - fVar24;
  pfVar5 = pfVar3 + 3;
  if ((uVar2 & 1) == 0) {
    pfVar5 = pfVar3 + uVar8 * 3 + -6;
  }
  fVar14 = (float)NEON_fmadd(fVar12,fVar12,fVar10 * fVar10);
  fVar16 = pfVar5[1] - fVar23;
  fVar18 = *pfVar5 - fVar24;
  fVar14 = SQRT(fVar14);
  fVar20 = (float)NEON_fmadd(fVar18,fVar18,fVar16 * fVar16);
  fVar20 = SQRT(fVar20);
  fVar12 = fVar12 / fVar14;
  fVar10 = fVar10 / fVar14;
  fVar18 = fVar18 / fVar20;
  fVar16 = fVar16 / fVar20;
  fVar20 = fVar20 * 0.5;
  fVar22 = param_2;
  if (fVar20 == param_2 || fVar20 < param_2 != (NAN(fVar20) || NAN(param_2))) {
    fVar22 = fVar20;
  }
  if (fVar14 * 0.5 <= fVar22) {
    fVar22 = fVar14 * 0.5;
  }
  fVar20 = (float)NEON_fmadd(fVar12,fVar16,-fVar10 * fVar18);
  fVar14 = (float)NEON_fmadd(fVar12,fVar18,fVar10 * fVar16);
  fVar20 = atan2f(fVar20,fVar14);
  fVar14 = ABS(fVar20);
  if (1.5707964 <= fVar14) {
    fVar20 = sinf(fVar14);
    fVar20 = 2.0 - fVar20;
  }
  else {
    fVar20 = cosf(fVar20);
    fVar20 = fVar20 + 1.0;
  }
  fVar14 = tanf(3.1415927 / (6.2831855 / fVar14 + 6.2831855 / fVar14));
  uVar13 = NEON_fmadd(fVar10,fVar22,fVar23);
  fVar20 = (float)NEON_fminnm(fVar22,fVar20 * fVar14 * 1.3333334 * fVar22);
  uVar11 = NEON_fmadd(fVar12,fVar22,fVar24);
  RawPath::move(CONCAT44(fVar10,uVar11),uVar13,param_3);
  fVar20 = fVar22 - fVar20;
  uVar21 = NEON_fmadd(fVar16,fVar22,fVar23);
  uVar11 = NEON_fmadd(fVar12,fVar20,fVar24);
  uVar13 = NEON_fmadd(fVar10,fVar20,fVar23);
  uVar15 = NEON_fmadd(fVar18,fVar20,fVar24);
  uVar17 = NEON_fmadd(fVar16,fVar20,fVar23);
  uVar19 = NEON_fmadd(fVar18,fVar22,fVar24);
  RawPath::cubic(CONCAT44(fVar10,uVar11),uVar13,uVar15,uVar17,CONCAT44(fVar16,uVar19),uVar21,param_3
                );
  bVar1 = true;
LAB_004ddf00:
  uVar9 = 1;
  do {
    while ((uVar2 & 1) == 0) {
      lVar4 = *(long *)param_1;
      lVar6 = lVar4 + *(long *)(param_1 + 8) * 0xc;
      pfVar3 = (float *)(lVar6 + ~uVar9 * 0xc);
      fVar24 = *pfVar3;
      fVar23 = pfVar3[1];
      if (!bVar1) goto LAB_004ddf24;
      pfVar3 = (float *)(lVar6 + uVar9 * -0xc);
LAB_004ddf80:
      uVar9 = uVar9 + 1;
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar9 / uVar8;
      }
      uVar7 = uVar9 - uVar7 * uVar8;
      if ((uVar2 & 1) == 0) {
        uVar7 = ~uVar7;
        lVar4 = lVar4 + *(long *)(param_1 + 8) * 0xc;
      }
      pfVar5 = (float *)(lVar4 + uVar7 * 0xc);
      fVar12 = pfVar3[1] - fVar23;
      fVar20 = *pfVar3 - fVar24;
      fVar16 = pfVar5[1] - fVar23;
      fVar18 = *pfVar5 - fVar24;
      fVar14 = (float)NEON_fmadd(fVar20,fVar20,fVar12 * fVar12);
      fVar14 = SQRT(fVar14);
      fVar22 = (float)NEON_fmadd(fVar18,fVar18,fVar16 * fVar16);
      fVar22 = SQRT(fVar22);
      fVar20 = fVar20 / fVar14;
      fVar12 = fVar12 / fVar14;
      fVar18 = fVar18 / fVar22;
      fVar16 = fVar16 / fVar22;
      fVar22 = fVar22 * 0.5;
      fVar10 = param_2;
      if (fVar22 == param_2 || fVar22 < param_2 != (NAN(fVar22) || NAN(param_2))) {
        fVar10 = fVar22;
      }
      if (fVar14 * 0.5 <= fVar10) {
        fVar10 = fVar14 * 0.5;
      }
      fVar22 = (float)NEON_fmadd(fVar20,fVar16,-fVar12 * fVar18);
      fVar14 = (float)NEON_fmadd(fVar20,fVar18,fVar12 * fVar16);
      fVar22 = atan2f(fVar22,fVar14);
      fVar14 = ABS(fVar22);
      if (1.5707964 <= fVar14) {
        fVar22 = sinf(fVar14);
        fVar22 = 2.0 - fVar22;
      }
      else {
        fVar22 = cosf(fVar22);
        fVar22 = fVar22 + 1.0;
      }
      fVar14 = tanf(3.1415927 / (6.2831855 / fVar14 + 6.2831855 / fVar14));
      uVar13 = NEON_fmadd(fVar12,fVar10,fVar23);
      fVar22 = (float)NEON_fminnm(fVar10,fVar22 * fVar14 * 1.3333334 * fVar10);
      uVar11 = NEON_fmadd(fVar20,fVar10,fVar24);
      RawPath::line(CONCAT44(fVar12,uVar11),uVar13,param_3);
      fVar22 = fVar10 - fVar22;
      uVar21 = NEON_fmadd(fVar16,fVar10,fVar23);
      uVar11 = NEON_fmadd(fVar20,fVar22,fVar24);
      uVar13 = NEON_fmadd(fVar12,fVar22,fVar23);
      uVar15 = NEON_fmadd(fVar18,fVar22,fVar24);
      uVar17 = NEON_fmadd(fVar16,fVar22,fVar23);
      uVar19 = NEON_fmadd(fVar18,fVar10,fVar24);
      RawPath::cubic(CONCAT44(fVar12,uVar11),uVar13,uVar15,uVar17,CONCAT44(fVar16,uVar19),uVar21,
                     param_3);
      if (uVar9 == uVar8) goto LAB_004de0d4;
    }
    lVar4 = *(long *)param_1;
    pfVar3 = (float *)(lVar4 + uVar9 * 0xc);
    fVar24 = *pfVar3;
    fVar23 = pfVar3[1];
    if (bVar1) {
      pfVar3 = pfVar3 + -3;
      goto LAB_004ddf80;
    }
LAB_004ddf24:
    RawPath::line(fVar24,fVar23,param_3);
    uVar9 = uVar9 + 1;
  } while (uVar9 != uVar8);
LAB_004de0d4:
  RawPath::close(param_3);
  return;
}


// ===== 004de108  rive::RectanglesToContour::isRectIncluded =====

/* rive::RectanglesToContour::isRectIncluded(unsigned long) */

byte __thiscall rive::RectanglesToContour::isRectIncluded(RectanglesToContour *this,ulong param_1)

{
  return *(byte *)(*(long *)(this + 0xc0) + (param_1 >> 3)) >> (ulong)((uint)param_1 & 7) & 1;
}


// ===== 004de124  rive::RectanglesToContour::markRectIncluded =====

/* rive::RectanglesToContour::markRectIncluded(unsigned long, bool) */

void __thiscall
rive::RectanglesToContour::markRectIncluded(RectanglesToContour *this,ulong param_1,bool param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = param_1 >> 3;
  bVar1 = (byte)(1 << (param_1 & 7));
  if (param_2) {
    *(byte *)(*(long *)(this + 0xc0) + uVar2) = *(byte *)(*(long *)(this + 0xc0) + uVar2) | bVar1;
    return;
  }
  *(byte *)(*(long *)(this + 0xc0) + uVar2) =
       *(byte *)(*(long *)(this + 0xc0) + uVar2) & (bVar1 ^ 0xff);
  return;
}


// ===== 004de160  rive::RectanglesToContour::subdivideRectangles =====

/* rive::RectanglesToContour::subdivideRectangles() */

void __thiscall rive::RectanglesToContour::subdivideRectangles(RectanglesToContour *this)

{
  float *pfVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  int iVar16;
  void *pvVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  ulong *puVar21;
  RectanglesToContour *pRVar22;
  long lVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 0xa8);
  if (*(long *)(this + 0x80) != 0) {
    puVar2 = (undefined8 *)*(void **)(this + 0x78);
    while (puVar2 != (undefined8 *)0x0) {
      pvVar17 = (void *)*puVar2;
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar17;
    }
    lVar5 = *(long *)(this + 0x70);
    *(undefined8 *)(this + 0x78) = 0;
    if (lVar5 != 0) {
      lVar8 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x68) + lVar8 * 8) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
    }
    *(undefined8 *)(this + 0x80) = 0;
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  if (*(long *)(this + 0x90) != *(long *)(this + 0x98)) {
    auVar29 = FUN_004de588(*(long *)(this + 0x90),*(long *)(this + 0x98),this,0,1);
    auVar30 = FUN_004de588(*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),this,1,0);
    uVar3 = auVar30._8_8_;
    lVar5 = *(long *)this;
    puVar9 = (ulong *)(lVar5 + auVar29._0_8_ * 0x18);
    pRVar22 = this + 0xc0;
    pvVar17 = *(void **)pRVar22;
    uVar12 = (ulong)(*(long *)(this + 0x98) - *(long *)(this + 0x90) >> 4) >> 3;
    uVar10 = uVar12 + 1;
    uVar6 = *(long *)(this + 200) - (long)pvVar17;
    if (uVar12 < uVar6) {
      if (uVar10 < uVar6) {
        *(ulong *)(this + 200) = (long)pvVar17 + uVar10;
      }
    }
    else {
      FUN_00356ff8(pRVar22,uVar10 - uVar6);
      pvVar17 = *(void **)pRVar22;
    }
    memset(pvVar17,0,uVar10);
    uVar10 = *puVar9 >> 3;
    *(byte *)(*(long *)pRVar22 + uVar10) =
         (byte)(1 << (*puVar9 & 7)) | *(byte *)(*(long *)pRVar22 + uVar10);
    if (auVar29._8_8_ != 1) {
      lVar23 = lVar5 + auVar30._0_8_ * 0x18;
      fVar25 = 0.0;
      iVar16 = 0;
      lVar8 = 0;
      do {
        uVar10 = puVar9[lVar8 * 3];
        uVar6 = uVar10 >> 3;
        bVar4 = (byte)(1 << (uVar10 & 7));
        if (*(char *)((long)(puVar9 + lVar8 * 3) + 0xc) == '\0') {
          lVar13 = *(long *)pRVar22;
          bVar4 = *(byte *)(lVar13 + uVar6) | bVar4;
        }
        else {
          lVar13 = *(long *)pRVar22;
          bVar4 = *(byte *)(lVar13 + uVar6) & (bVar4 ^ 0xff);
        }
        *(byte *)(lVar13 + uVar6) = bVar4;
        fVar26 = *(float *)(puVar9 + lVar8 * 3 + 2);
        fVar27 = *(float *)(puVar9 + lVar8 * 3 + 5);
        if (fVar27 - fVar26 != 0.0 && uVar3 != 0) {
          uVar10 = 0;
          uVar6 = 1;
          puVar21 = (ulong *)(lVar5 + auVar30._0_8_ * 0x18);
          do {
            puVar21 = puVar21 + 3;
            uVar12 = *(ulong *)(lVar23 + uVar10 * 0x18);
            if ((*(byte *)(*(long *)pRVar22 + (uVar12 >> 3)) >> (ulong)((uint)uVar12 & 7) & 1) != 0)
            {
              if (*(char *)(lVar23 + uVar10 * 0x18 + 0xc) == '\0') {
                if (iVar16 == 0) {
                  iVar16 = 1;
                  fVar25 = *(float *)(lVar23 + uVar10 * 0x18 + 0x14);
                }
                else {
                  iVar16 = iVar16 + 1;
                }
              }
              else {
                iVar16 = iVar16 + -1;
                uVar12 = uVar6;
                puVar14 = puVar21;
                if (uVar10 + 1 < uVar3) {
                  do {
                    if ((*(byte *)(*(long *)pRVar22 + (*puVar14 >> 3)) >>
                         (ulong)((uint)*puVar14 & 7) & 1) != 0) {
                      if (iVar16 != 0) goto LAB_004de3ac;
                      if (*(float *)(lVar23 + uVar12 * 0x18 + 0x14) ==
                          *(float *)(lVar23 + uVar10 * 0x18 + 0x14)) {
                        iVar16 = 0;
                        goto LAB_004de3ac;
                      }
                      break;
                    }
                    uVar12 = uVar12 + 1;
                    puVar14 = puVar14 + 3;
                  } while (uVar3 != uVar12);
                }
                pfVar20 = *(float **)(this + 0xb0);
                fVar28 = *(float *)(lVar23 + uVar10 * 0x18 + 0x14);
                if (pfVar20 < *(float **)(this + 0xb8)) {
                  *pfVar20 = fVar26;
                  pfVar20[1] = fVar25;
                  pfVar18 = pfVar20 + 4;
                  pfVar20[2] = fVar27;
                  pfVar20[3] = fVar28;
                }
                else {
                  pfVar19 = *(float **)(this + 0xa8);
                  lVar13 = (long)pfVar20 - (long)pfVar19 >> 4;
                  uVar12 = lVar13 + 1;
                  if (uVar12 >> 0x3c != 0) {
                    FUN_004caee0();
LAB_004de584:
                    /* WARNING: Subroutine does not return */
                    FUN_00324008();
                  }
                  uVar7 = (long)*(float **)(this + 0xb8) - (long)pfVar19;
                  uVar15 = (long)uVar7 >> 3;
                  if (uVar15 <= uVar12) {
                    uVar15 = uVar12;
                  }
                  if (0x7fffffffffffffef < uVar7) {
                    uVar15 = 0xfffffffffffffff;
                  }
                  if (uVar15 == 0) {
                    pvVar17 = (void *)0x0;
                  }
                  else {
                    if (uVar15 >> 0x3c != 0) goto LAB_004de584;
                    pvVar17 = operator_new(uVar15 << 4);
                  }
                  pfVar18 = (float *)((long)pvVar17 + lVar13 * 0x10);
                  *pfVar18 = fVar26;
                  pfVar18[1] = fVar25;
                  pfVar18[2] = fVar27;
                  pfVar18[3] = fVar28;
                  pfVar11 = pfVar18;
                  if (pfVar20 != pfVar19) {
                    do {
                      pfVar1 = pfVar20 + -2;
                      uVar24 = *(undefined8 *)(pfVar20 + -4);
                      pfVar20 = pfVar20 + -4;
                      *(undefined8 *)(pfVar11 + -2) = *(undefined8 *)pfVar1;
                      *(undefined8 *)(pfVar11 + -4) = uVar24;
                      pfVar11 = pfVar11 + -4;
                    } while (pfVar20 != pfVar19);
                    pfVar20 = *(float **)(this + 0xa8);
                  }
                  pfVar18 = pfVar18 + 4;
                  *(float **)(this + 0xa8) = pfVar11;
                  *(float **)(this + 0xb0) = pfVar18;
                  *(void **)(this + 0xb8) = (void *)((long)pvVar17 + uVar15 * 0x10);
                  if (pfVar20 != (float *)0x0) {
                    operator_delete(pfVar20);
                  }
                }
                *(float **)(this + 0xb0) = pfVar18;
              }
            }
LAB_004de3ac:
            uVar10 = uVar10 + 1;
            uVar6 = uVar6 + 1;
          } while (uVar10 != uVar3);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != auVar29._8_8_ + -1);
    }
  }
  return;
}


// ===== 004de588  FUN_004de588 =====

void FUN_004de588(float *param_1,float *param_2,ulong *param_3,char param_4,char param_5)

{
  long *plVar1;
  float *pfVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  char local_98 [4];
  char local_94 [4];
  char *local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  uVar3 = *param_3;
  plVar4 = (long *)param_3[1];
  uVar8 = uVar3;
  plVar13 = plVar4;
  local_98[0] = param_5;
  local_94[0] = param_4;
  if (param_1 != param_2) {
    lVar15 = 0;
    do {
      fVar16 = *param_1;
      fVar17 = param_1[1];
      fVar18 = fVar16;
      if (param_5 != '\0' || param_4 != '\0') {
        fVar18 = fVar17;
      }
      fVar19 = fVar16;
      if (param_5 != '\0' && param_4 != '\0') {
        fVar19 = fVar17;
      }
      pfVar2 = param_1 + 2;
      if (param_5 != '\0') {
        pfVar2 = param_1 + 3;
        fVar16 = fVar17;
      }
      fVar17 = *pfVar2;
      if ((long *)param_3[2] <= plVar13) {
        plVar12 = (long *)*param_3;
        lVar9 = (long)plVar13 - (long)plVar12 >> 3;
        uVar8 = lVar9 * -0x5555555555555555 + 1;
        if (uVar8 < 0xaaaaaaaaaaaaaab) {
          lVar7 = (long)param_3[2] - (long)plVar12 >> 3;
          uVar11 = lVar7 * 0x5555555555555556;
          if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
            uVar11 = uVar8;
          }
          if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
            uVar11 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar11 == 0) {
            pvVar6 = (void *)0x0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_004de988;
            pvVar6 = operator_new(uVar11 * 0x18);
          }
          plVar14 = (long *)((long)pvVar6 + lVar9 * 8);
          *plVar14 = lVar15;
          *(float *)(plVar14 + 1) = fVar17 - fVar16;
          *(undefined1 *)((long)plVar14 + 0xc) = 0;
          *(float *)(plVar14 + 2) = fVar19;
          *(float *)((long)plVar14 + 0x14) = fVar18;
          plVar10 = plVar14;
          if (plVar13 != plVar12) {
            do {
              plVar1 = plVar13 + -1;
              lVar7 = plVar13[-2];
              lVar9 = plVar13[-3];
              plVar13 = plVar13 + -3;
              plVar10[-1] = *plVar1;
              plVar10[-2] = lVar7;
              plVar10[-3] = lVar9;
              plVar10 = plVar10 + -3;
            } while (plVar13 != plVar12);
            plVar13 = (long *)*param_3;
          }
          plVar14 = plVar14 + 3;
          *param_3 = (ulong)plVar10;
          param_3[1] = (ulong)plVar14;
          param_3[2] = (ulong)((long)pvVar6 + uVar11 * 0x18);
          if (plVar13 != (long *)0x0) {
            operator_delete(plVar13);
          }
          goto LAB_004de774;
        }
LAB_004de984:
        FUN_004e0148();
LAB_004de988:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      *plVar13 = lVar15;
      plVar14 = plVar13 + 3;
      *(float *)(plVar13 + 1) = fVar17 - fVar16;
      *(undefined1 *)((long)plVar13 + 0xc) = 0;
      *(float *)(plVar13 + 2) = fVar19;
      *(float *)((long)plVar13 + 0x14) = fVar18;
LAB_004de774:
      param_3[1] = (ulong)plVar14;
      fVar16 = param_1[2];
      fVar17 = param_1[3];
      fVar18 = fVar16;
      if (param_5 != '\0' || param_4 != '\0') {
        fVar18 = fVar17;
      }
      fVar19 = fVar16;
      if (param_5 != '\0' && param_4 != '\0') {
        fVar19 = fVar17;
      }
      pfVar2 = param_1;
      if (param_5 != '\0') {
        pfVar2 = param_1 + 1;
        fVar16 = fVar17;
      }
      fVar17 = *pfVar2;
      if (plVar14 < (long *)param_3[2]) {
        plVar13 = plVar14 + 3;
        *plVar14 = lVar15;
        *(float *)(plVar14 + 1) = fVar16 - fVar17;
        *(undefined1 *)((long)plVar14 + 0xc) = 1;
        *(float *)(plVar14 + 2) = fVar19;
        *(float *)((long)plVar14 + 0x14) = fVar18;
      }
      else {
        plVar12 = (long *)*param_3;
        lVar9 = (long)plVar14 - (long)plVar12 >> 3;
        uVar8 = lVar9 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar8) goto LAB_004de984;
        lVar7 = (long)param_3[2] - (long)plVar12 >> 3;
        uVar11 = lVar7 * 0x5555555555555556;
        if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
          uVar11 = uVar8;
        }
        if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
          uVar11 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar11 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_004de988;
          pvVar6 = operator_new(uVar11 * 0x18);
        }
        plVar10 = (long *)((long)pvVar6 + lVar9 * 8);
        pvVar6 = (void *)((long)pvVar6 + uVar11 * 0x18);
        plVar13 = plVar10 + 3;
        *plVar10 = lVar15;
        *(float *)(plVar10 + 1) = fVar16 - fVar17;
        *(undefined1 *)((long)plVar10 + 0xc) = 1;
        *(float *)(plVar10 + 2) = fVar19;
        *(float *)((long)plVar10 + 0x14) = fVar18;
        if (plVar14 == plVar12) {
          *param_3 = (ulong)plVar10;
          param_3[1] = (ulong)plVar13;
          param_3[2] = (ulong)pvVar6;
        }
        else {
          do {
            plVar1 = plVar14 + -1;
            lVar7 = plVar14[-2];
            lVar9 = plVar14[-3];
            plVar14 = plVar14 + -3;
            plVar10[-1] = *plVar1;
            plVar10[-2] = lVar7;
            plVar10[-3] = lVar9;
            plVar10 = plVar10 + -3;
          } while (plVar14 != plVar12);
          plVar14 = (long *)*param_3;
          *param_3 = (ulong)plVar10;
          param_3[1] = (ulong)plVar13;
          param_3[2] = (ulong)pvVar6;
          if (plVar14 == (long *)0x0) goto LAB_004de62c;
        }
        operator_delete(plVar14);
      }
LAB_004de62c:
      param_1 = param_1 + 4;
      lVar15 = lVar15 + 1;
      param_3[1] = (ulong)plVar13;
    } while (param_1 != param_2);
    uVar8 = *param_3;
  }
  plVar12 = (long *)((long)plVar4 + (uVar8 - uVar3));
  local_90 = local_98;
  lVar15 = 0;
  if (plVar13 != plVar12) {
    lVar15 = LZCOUNT(((long)plVar13 - (long)plVar12 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  FUN_004de990(plVar12,plVar13,&local_90,lVar15,1);
  uVar8 = param_3[1];
  local_90 = local_94;
  uVar3 = (long)plVar4 + (*param_3 - uVar3);
  lVar15 = 0;
  if (uVar8 != uVar3) {
    lVar15 = LZCOUNT(((long)(uVar8 - uVar3) >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  FUN_004df56c(uVar3,uVar8,&local_90,lVar15,1);
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004de990  FUN_004de990 =====

void FUN_004de990(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  float *pfVar4;
  char cVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  char *pcVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x28);
LAB_004de9dc:
  puVar19 = param_2 + -3;
  puVar17 = param_1;
LAB_004de9f0:
  while( true ) {
    param_1 = puVar17;
    uVar10 = (long)param_2 - (long)param_1;
    uVar16 = ((long)uVar10 >> 3) * -0x5555555555555555;
    if (uVar16 - 2 == 0 || (long)uVar16 < 2) {
      if (uVar16 < 2) goto LAB_004df498;
      if (uVar16 == 2) {
        pfVar4 = (float *)(param_1 + 2);
        pfVar7 = (float *)(param_2 + -1);
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)param_1 + 0x14);
          pfVar7 = (float *)((long)param_2 - 4);
        }
        if (*pfVar7 < *pfVar4) {
          uVar14 = param_1[2];
          uVar24 = param_1[1];
          uVar11 = *param_1;
          uVar28 = param_2[-2];
          uVar13 = *puVar19;
          param_1[2] = param_2[-1];
          param_1[1] = uVar28;
          *param_1 = uVar13;
          param_2[-1] = uVar14;
          param_2[-2] = uVar24;
          *puVar19 = uVar11;
        }
        goto LAB_004df498;
      }
    }
    else {
      if (uVar16 == 3) {
        if (*(long *)(lVar6 + 0x28) == lVar9) {
          FUN_004e08e0(param_1,param_1 + 3,puVar19,param_3);
          return;
        }
        goto LAB_004df568;
      }
      if (uVar16 == 4) {
        FUN_004e08e0(param_1,param_1 + 3,param_1 + 6,param_3);
        pfVar4 = (float *)(param_1 + 8);
        pfVar7 = (float *)(param_2 + -1);
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)param_1 + 0x44U);
          pfVar7 = (float *)((long)param_2 - 4);
        }
        if (*pfVar7 < *pfVar4) {
          uVar24 = param_1[7];
          uVar13 = param_1[6];
          uVar14 = param_1[8];
          uVar28 = *puVar19;
          uVar11 = param_2[-1];
          param_1[7] = param_2[-2];
          param_1[6] = uVar28;
          param_1[8] = uVar11;
          param_2[-1] = uVar14;
          param_2[-2] = uVar24;
          *puVar19 = uVar13;
          pfVar4 = (float *)(param_1 + 5);
          pfVar7 = (float *)(param_1 + 8);
          if (*(char *)*param_3 != '\0') {
            pfVar4 = (float *)((long)param_1 + 0x2cU);
            pfVar7 = (float *)((long)param_1 + 0x44U);
          }
          if (*pfVar7 < *pfVar4) {
            uVar13 = param_1[4];
            uVar11 = param_1[3];
            uVar14 = param_1[5];
            param_1[4] = param_1[7];
            param_1[3] = param_1[6];
            param_1[5] = param_1[8];
            param_1[7] = uVar13;
            param_1[6] = uVar11;
            param_1[8] = uVar14;
            pfVar4 = (float *)(param_1 + 2);
            pfVar7 = (float *)(param_1 + 5);
            if (*(char *)*param_3 != '\0') {
              pfVar4 = (float *)((long)param_1 + 0x14);
              pfVar7 = (float *)((long)param_1 + 0x2cU);
            }
            if (*pfVar7 < *pfVar4) {
              uVar14 = param_1[2];
              uVar13 = param_1[1];
              uVar11 = *param_1;
              param_1[1] = param_1[4];
              *param_1 = param_1[3];
              param_1[2] = param_1[5];
              param_1[4] = uVar13;
              param_1[3] = uVar11;
              param_1[5] = uVar14;
            }
          }
        }
        goto LAB_004df498;
      }
      if (uVar16 == 5) {
        if (*(long *)(lVar6 + 0x28) == lVar9) {
          FUN_004e0a74(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar19,param_3);
          return;
        }
        goto LAB_004df568;
      }
    }
    if ((long)uVar10 < 0x240) {
      puVar17 = param_1 + 3;
      if ((param_5 & 1) == 0) {
        if (param_1 != param_2 && puVar17 != param_2) {
          pcVar23 = (char *)*param_3;
          do {
            puVar19 = puVar17;
            fVar29 = *(float *)(param_1 + 5);
            fVar27 = *(float *)((long)param_1 + 0x2c);
            pfVar4 = (float *)(param_1 + 2);
            fVar30 = fVar29;
            if (*pcVar23 != '\0') {
              pfVar4 = (float *)((long)param_1 + 0x14);
              fVar30 = fVar27;
            }
            if (fVar30 < *pfVar4) {
              uVar11 = puVar19[1];
              uVar14 = *puVar19;
              puVar17 = puVar19;
              do {
                puVar18 = puVar17;
                puVar18[1] = puVar18[-2];
                *puVar18 = puVar18[-3];
                puVar18[2] = puVar18[-1];
                pfVar4 = (float *)(puVar18 + -4);
                fVar30 = fVar29;
                if (*(char *)*param_3 != '\0') {
                  pfVar4 = (float *)((long)puVar18 - 0x1c);
                  fVar30 = fVar27;
                }
                puVar17 = puVar18 + -3;
              } while (fVar30 < *pfVar4);
              *(float *)(puVar18 + -1) = fVar29;
              *(float *)((long)puVar18 - 4) = fVar27;
              puVar18[-2] = uVar11;
              puVar18[-3] = uVar14;
              pcVar23 = (char *)*param_3;
            }
            puVar17 = puVar19 + 3;
            param_1 = puVar19;
          } while (puVar19 + 3 != param_2);
        }
        goto LAB_004df498;
      }
      if (param_1 == param_2 || puVar17 == param_2) goto LAB_004df498;
      pcVar23 = (char *)*param_3;
      lVar15 = 0;
      puVar19 = param_1;
      goto LAB_004df0d4;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) goto LAB_004df498;
      uVar22 = uVar16 - 2 >> 1;
      uVar25 = uVar22;
      goto LAB_004df188;
    }
    uVar16 = uVar16 >> 1;
    puVar17 = param_1 + uVar16 * 3;
    if (uVar10 < 0xc01) break;
    FUN_004e08e0(param_1,puVar17,puVar19,param_3);
    puVar18 = param_1 + 3;
    FUN_004e08e0(puVar18,param_1 + uVar16 * 3 + -3,param_2 + -6,param_3);
    FUN_004e08e0(param_1 + 6,puVar18 + uVar16 * 3,param_2 + -9,param_3);
    FUN_004e08e0(param_1 + uVar16 * 3 + -3,puVar17,puVar18 + uVar16 * 3,param_3);
    uVar14 = param_1[2];
    uVar28 = param_1[1];
    uVar13 = *param_1;
    uVar24 = *puVar17;
    uVar11 = puVar17[2];
    param_1[1] = puVar17[1];
    *param_1 = uVar24;
    param_1[2] = uVar11;
    puVar17[2] = uVar14;
    puVar17[1] = uVar28;
    *puVar17 = uVar13;
    if ((param_5 & 1) != 0) goto LAB_004deb8c;
LAB_004deaf4:
    fVar29 = *(float *)(param_1 + 2);
    fVar27 = *(float *)((long)param_1 + 0x14);
    cVar5 = *(char *)*param_3;
    pfVar4 = (float *)(param_1 + -1);
    fVar30 = fVar29;
    if (cVar5 != '\0') {
      pfVar4 = (float *)((long)param_1 - 4);
      fVar30 = fVar27;
    }
    if (*pfVar4 < fVar30) goto LAB_004deb98;
    uVar11 = param_1[1];
    uVar14 = *param_1;
    pfVar4 = (float *)(param_2 + -1);
    if (cVar5 != '\0') {
      pfVar4 = (float *)((long)param_2 - 4);
    }
    puVar17 = param_1;
    puVar18 = param_1;
    if (*pfVar4 <= fVar30) {
      do {
        puVar17 = puVar18 + 3;
        if (param_2 <= puVar17) break;
        pfVar4 = (float *)(puVar18 + 5);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar18 + 0x2c);
        }
        puVar18 = puVar17;
      } while (*pfVar4 <= fVar30);
    }
    else {
      do {
        pfVar4 = (float *)(puVar17 + 5);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar17 + 0x2c);
        }
        puVar17 = puVar17 + 3;
      } while (*pfVar4 <= fVar30);
    }
    puVar18 = param_2;
    if (puVar17 < param_2) {
      do {
        pfVar4 = (float *)(puVar18 + -1);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar18 - 4);
        }
        puVar18 = puVar18 + -3;
      } while (fVar30 < *pfVar4);
    }
    while (puVar17 < puVar18) {
      uVar13 = puVar17[2];
      uVar31 = puVar17[1];
      uVar24 = *puVar17;
      uVar32 = puVar18[1];
      uVar28 = *puVar18;
      puVar17[2] = puVar18[2];
      puVar17[1] = uVar32;
      *puVar17 = uVar28;
      puVar18[2] = uVar13;
      puVar18[1] = uVar31;
      *puVar18 = uVar24;
      cVar5 = *(char *)*param_3;
      fVar30 = fVar29;
      if (cVar5 != '\0') {
        fVar30 = fVar27;
      }
      do {
        pfVar4 = (float *)(puVar17 + 5);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar17 + 0x2c);
        }
        puVar17 = puVar17 + 3;
      } while (*pfVar4 <= fVar30);
      do {
        pfVar4 = (float *)(puVar18 + -1);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar18 - 4);
        }
        puVar18 = puVar18 + -3;
      } while (fVar30 < *pfVar4);
    }
    puVar18 = puVar17 + -3;
    if (puVar18 != param_1) {
      uVar24 = puVar17[-2];
      uVar13 = *puVar18;
      param_1[2] = puVar17[-1];
      param_1[1] = uVar24;
      *param_1 = uVar13;
    }
    param_5 = 0;
    *(float *)(puVar17 + -1) = fVar29;
    *(float *)((long)puVar17 - 4) = fVar27;
    puVar17[-2] = uVar11;
    *puVar18 = uVar14;
    param_4 = param_4 + -1;
  }
  FUN_004e08e0(puVar17,param_1,puVar19,param_3);
  if ((param_5 & 1) == 0) goto LAB_004deaf4;
LAB_004deb8c:
  fVar29 = *(float *)(param_1 + 2);
  fVar27 = *(float *)((long)param_1 + 0x14);
  cVar5 = *(char *)*param_3;
LAB_004deb98:
  param_4 = param_4 + -1;
  uVar11 = param_1[1];
  uVar14 = *param_1;
  puVar18 = param_1;
  fVar30 = fVar29;
  if (cVar5 != '\0') {
    fVar30 = fVar27;
  }
  do {
    puVar17 = puVar18;
    pfVar4 = (float *)(puVar17 + 5);
    if (cVar5 != '\0') {
      pfVar4 = (float *)((long)puVar17 + 0x2c);
    }
    puVar18 = puVar17 + 3;
  } while (*pfVar4 < fVar30);
  puVar21 = param_2;
  if (puVar17 == param_1) {
    do {
      if (puVar21 <= puVar18) break;
      pfVar4 = (float *)(puVar21 + -1);
      if (cVar5 != '\0') {
        pfVar4 = (float *)((long)puVar21 - 4);
      }
      puVar21 = puVar21 + -3;
    } while (fVar30 <= *pfVar4);
  }
  else {
    do {
      pfVar4 = (float *)(puVar21 + -1);
      if (cVar5 != '\0') {
        pfVar4 = (float *)((long)puVar21 - 4);
      }
      puVar21 = puVar21 + -3;
    } while (fVar30 <= *pfVar4);
  }
  puVar12 = puVar21;
  puVar17 = puVar18;
  if (puVar18 < puVar21) {
    do {
      uVar31 = puVar17[1];
      uVar28 = *puVar17;
      uVar13 = puVar17[2];
      uVar32 = *puVar12;
      uVar24 = puVar12[2];
      puVar17[1] = puVar12[1];
      *puVar17 = uVar32;
      puVar17[2] = uVar24;
      puVar12[2] = uVar13;
      puVar12[1] = uVar31;
      *puVar12 = uVar28;
      cVar5 = *(char *)*param_3;
      fVar30 = fVar29;
      if (cVar5 != '\0') {
        fVar30 = fVar27;
      }
      do {
        pfVar4 = (float *)(puVar17 + 5);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar17 + 0x2c);
        }
        puVar17 = puVar17 + 3;
      } while (*pfVar4 < fVar30);
      do {
        pfVar4 = (float *)(puVar12 + -1);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar12 - 4);
        }
        puVar12 = puVar12 + -3;
      } while (fVar30 <= *pfVar4);
    } while (puVar17 < puVar12);
  }
  puVar12 = puVar17 + -3;
  if (puVar12 != param_1) {
    uVar24 = puVar17[-2];
    uVar13 = *puVar12;
    param_1[2] = puVar17[-1];
    param_1[1] = uVar24;
    *param_1 = uVar13;
  }
  *(float *)(puVar17 + -1) = fVar29;
  *(float *)((long)puVar17 - 4) = fVar27;
  puVar17[-2] = uVar11;
  *puVar12 = uVar14;
  if (puVar21 <= puVar18) {
    uVar10 = FUN_004e0d20(param_1,puVar12,param_3);
    uVar16 = FUN_004e0d20(puVar17,param_2,param_3);
    if ((uVar16 & 1) != 0) goto LAB_004dee68;
    if ((uVar10 & 1) != 0) goto LAB_004de9f0;
  }
  FUN_004de990(param_1,puVar12,param_3,param_4,param_5 & 1);
  param_5 = 0;
  goto LAB_004de9f0;
LAB_004df0d4:
  do {
    puVar18 = puVar17;
    fVar27 = *(float *)(puVar19 + 5);
    fVar29 = *(float *)((long)puVar19 + 0x2c);
    pfVar4 = (float *)(puVar19 + 2);
    fVar30 = fVar27;
    if (*pcVar23 != '\0') {
      pfVar4 = (float *)((long)puVar19 + 0x14);
      fVar30 = fVar29;
    }
    if (fVar30 < *pfVar4) {
      uVar11 = puVar18[1];
      uVar14 = *puVar18;
      lVar8 = lVar15;
      do {
        lVar20 = lVar8;
        puVar17 = (undefined8 *)((long)param_1 + lVar20);
        puVar17[4] = puVar17[1];
        puVar17[3] = *puVar17;
        puVar17[5] = puVar17[2];
        puVar19 = param_1;
        if (lVar20 == 0) goto LAB_004df0b4;
        pfVar4 = (float *)(puVar17 + -1);
        fVar30 = fVar27;
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)puVar17 + -4);
          fVar30 = fVar29;
        }
        lVar8 = lVar20 + -0x18;
      } while (fVar30 < *pfVar4);
      puVar19 = (undefined8 *)((long)param_1 + lVar20);
LAB_004df0b4:
      *(float *)(puVar19 + 2) = fVar27;
      *(float *)((long)puVar19 + 0x14) = fVar29;
      puVar19[1] = uVar11;
      *puVar19 = uVar14;
      pcVar23 = (char *)*param_3;
    }
    lVar15 = lVar15 + 0x18;
    puVar17 = puVar18 + 3;
    puVar19 = puVar18;
  } while (puVar18 + 3 != param_2);
  goto LAB_004df498;
LAB_004dee68:
  param_2 = puVar12;
  if ((uVar10 & 1) != 0) goto LAB_004df498;
  goto LAB_004de9dc;
LAB_004df188:
  do {
    if ((long)uVar25 <= (long)uVar22) {
      uVar26 = uVar25 << 1 | 1;
      uVar1 = uVar25 * 2 + 2;
      cVar5 = *(char *)*param_3;
      puVar17 = param_1 + uVar26 * 3;
      if ((long)uVar1 < (long)uVar16) {
        pfVar4 = (float *)(puVar17 + 5);
        pfVar7 = (float *)(param_1 + uVar26 * 3 + 2);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar17 + 0x2c);
          pfVar7 = (float *)((long)param_1 + uVar26 * 0x18 + 0x14);
        }
        if (*pfVar7 < *pfVar4) {
          puVar17 = puVar17 + 3;
          uVar26 = uVar1;
        }
      }
      uVar14 = param_1[uVar25 * 3 + 2];
      pfVar4 = (float *)(puVar17 + 2);
      if (cVar5 != '\0') {
        pfVar4 = (float *)((long)puVar17 + 0x14);
      }
      fVar27 = (float)((ulong)uVar14 >> 0x20);
      fVar30 = (float)uVar14;
      if (cVar5 != '\0') {
        fVar30 = fVar27;
      }
      if (fVar30 <= *pfVar4) {
        puVar19 = param_1 + uVar25 * 3;
        uVar13 = puVar19[1];
        uVar11 = *puVar19;
        do {
          puVar18 = puVar17;
          uVar28 = puVar18[1];
          uVar24 = *puVar18;
          puVar19[2] = puVar18[2];
          puVar19[1] = uVar28;
          *puVar19 = uVar24;
          if ((long)uVar22 < (long)uVar26) break;
          uVar2 = uVar26 << 1 | 1;
          puVar17 = param_1 + uVar2 * 3;
          uVar1 = uVar26 * 2 + 2;
          uVar26 = uVar2;
          if ((long)uVar1 < (long)uVar16) {
            pfVar4 = (float *)(puVar17 + 5);
            pfVar7 = (float *)(param_1 + uVar2 * 3 + 2);
            if (*(char *)*param_3 != '\0') {
              pfVar4 = (float *)((long)puVar17 + 0x2c);
              pfVar7 = (float *)((long)param_1 + uVar2 * 0x18 + 0x14);
            }
            if (*pfVar7 < *pfVar4) {
              puVar17 = puVar17 + 3;
              uVar26 = uVar1;
            }
          }
          pfVar4 = (float *)(puVar17 + 2);
          fVar30 = (float)uVar14;
          if (*(char *)*param_3 != '\0') {
            pfVar4 = (float *)((long)puVar17 + 0x14);
            fVar30 = fVar27;
          }
          puVar19 = puVar18;
        } while (fVar30 <= *pfVar4);
        puVar18[2] = uVar14;
        puVar18[1] = uVar13;
        *puVar18 = uVar11;
      }
    }
    bVar3 = uVar25 != 0;
    uVar25 = uVar25 - 1;
  } while (bVar3);
  uVar10 = uVar10 / 0x18;
  do {
    uVar14 = param_1[2];
    uVar13 = param_1[1];
    uVar11 = *param_1;
    puVar17 = param_1;
    uVar16 = 0;
    do {
      uVar22 = uVar16 << 1 | 1;
      uVar25 = uVar16 * 2 + 2;
      puVar19 = puVar17 + uVar16 * 3 + 3;
      if ((long)uVar25 < (long)uVar10) {
        pfVar4 = (float *)(puVar17 + uVar16 * 3 + 8);
        pfVar7 = (float *)(puVar17 + uVar16 * 3 + 5);
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)puVar17 + uVar16 * 0x18 + 0x44);
          pfVar7 = (float *)((long)puVar17 + uVar16 * 0x18 + 0x2c);
        }
        if (*pfVar7 < *pfVar4) {
          puVar19 = puVar17 + uVar16 * 3 + 6;
          uVar22 = uVar25;
        }
      }
      uVar28 = puVar19[1];
      uVar24 = *puVar19;
      puVar17[2] = puVar19[2];
      puVar17[1] = uVar28;
      *puVar17 = uVar24;
      puVar17 = puVar19;
      uVar16 = uVar22;
    } while ((long)uVar22 <= (long)(uVar10 - 2 >> 1));
    puVar17 = param_2 + -3;
    if (puVar19 == puVar17) {
      puVar19[2] = uVar14;
      puVar19[1] = uVar13;
      *puVar19 = uVar11;
    }
    else {
      uVar28 = param_2[-2];
      uVar24 = *puVar17;
      puVar19[2] = param_2[-1];
      puVar19[1] = uVar28;
      *puVar19 = uVar24;
      uVar16 = (long)puVar19 + (0x18 - (long)param_1);
      param_2[-1] = uVar14;
      param_2[-2] = uVar13;
      *puVar17 = uVar11;
      if (0x18 < (long)uVar16) {
        fVar29 = *(float *)(puVar19 + 2);
        fVar27 = *(float *)((long)puVar19 + 0x14);
        fVar30 = fVar29;
        if (*(char *)*param_3 != '\0') {
          fVar30 = fVar27;
        }
        uVar16 = uVar16 / 0x18 - 2 >> 1;
        pfVar4 = (float *)(param_1 + uVar16 * 3 + 2);
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)param_1 + uVar16 * 0x18 + 0x14);
        }
        if (*pfVar4 < fVar30) {
          uVar11 = puVar19[1];
          uVar14 = *puVar19;
          do {
            puVar18 = param_1 + uVar16 * 3;
            uVar24 = puVar18[1];
            uVar13 = *puVar18;
            puVar19[2] = puVar18[2];
            puVar19[1] = uVar24;
            *puVar19 = uVar13;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            fVar30 = fVar29;
            if (*(char *)*param_3 != '\0') {
              fVar30 = fVar27;
            }
            pfVar4 = (float *)(param_1 + uVar16 * 3 + 2);
            if (*(char *)*param_3 != '\0') {
              pfVar4 = (float *)((long)param_1 + uVar16 * 0x18 + 0x14);
            }
            puVar19 = puVar18;
          } while (*pfVar4 < fVar30);
          *(float *)(puVar18 + 2) = fVar29;
          *(float *)((long)puVar18 + 0x14) = fVar27;
          puVar18[1] = uVar11;
          *puVar18 = uVar14;
        }
      }
    }
    bVar3 = 2 < (long)uVar10;
    uVar10 = uVar10 - 1;
    param_2 = puVar17;
  } while (bVar3);
LAB_004df498:
  if (*(long *)(lVar6 + 0x28) == lVar9) {
    return;
  }
LAB_004df568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004df56c  FUN_004df56c =====

void FUN_004df56c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  float *pfVar4;
  char cVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  char *pcVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x28);
LAB_004df5b8:
  puVar19 = param_2 + -3;
  puVar17 = param_1;
LAB_004df5cc:
  while( true ) {
    param_1 = puVar17;
    uVar10 = (long)param_2 - (long)param_1;
    uVar16 = ((long)uVar10 >> 3) * -0x5555555555555555;
    if (uVar16 - 2 == 0 || (long)uVar16 < 2) {
      if (uVar16 < 2) goto LAB_004e0074;
      if (uVar16 == 2) {
        pfVar4 = (float *)(param_1 + 2);
        pfVar7 = (float *)(param_2 + -1);
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)param_1 + 0x14);
          pfVar7 = (float *)((long)param_2 - 4);
        }
        if (*pfVar7 < *pfVar4) {
          uVar14 = param_1[2];
          uVar24 = param_1[1];
          uVar11 = *param_1;
          uVar28 = param_2[-2];
          uVar13 = *puVar19;
          param_1[2] = param_2[-1];
          param_1[1] = uVar28;
          *param_1 = uVar13;
          param_2[-1] = uVar14;
          param_2[-2] = uVar24;
          *puVar19 = uVar11;
        }
        goto LAB_004e0074;
      }
    }
    else {
      if (uVar16 == 3) {
        if (*(long *)(lVar6 + 0x28) == lVar9) {
          FUN_004e015c(param_1,param_1 + 3,puVar19,param_3);
          return;
        }
        goto LAB_004e0144;
      }
      if (uVar16 == 4) {
        FUN_004e015c(param_1,param_1 + 3,param_1 + 6,param_3);
        pfVar4 = (float *)(param_1 + 8);
        pfVar7 = (float *)(param_2 + -1);
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)param_1 + 0x44U);
          pfVar7 = (float *)((long)param_2 - 4);
        }
        if (*pfVar7 < *pfVar4) {
          uVar24 = param_1[7];
          uVar13 = param_1[6];
          uVar14 = param_1[8];
          uVar28 = *puVar19;
          uVar11 = param_2[-1];
          param_1[7] = param_2[-2];
          param_1[6] = uVar28;
          param_1[8] = uVar11;
          param_2[-1] = uVar14;
          param_2[-2] = uVar24;
          *puVar19 = uVar13;
          pfVar4 = (float *)(param_1 + 5);
          pfVar7 = (float *)(param_1 + 8);
          if (*(char *)*param_3 != '\0') {
            pfVar4 = (float *)((long)param_1 + 0x2cU);
            pfVar7 = (float *)((long)param_1 + 0x44U);
          }
          if (*pfVar7 < *pfVar4) {
            uVar13 = param_1[4];
            uVar11 = param_1[3];
            uVar14 = param_1[5];
            param_1[4] = param_1[7];
            param_1[3] = param_1[6];
            param_1[5] = param_1[8];
            param_1[7] = uVar13;
            param_1[6] = uVar11;
            param_1[8] = uVar14;
            pfVar4 = (float *)(param_1 + 2);
            pfVar7 = (float *)(param_1 + 5);
            if (*(char *)*param_3 != '\0') {
              pfVar4 = (float *)((long)param_1 + 0x14);
              pfVar7 = (float *)((long)param_1 + 0x2cU);
            }
            if (*pfVar7 < *pfVar4) {
              uVar14 = param_1[2];
              uVar13 = param_1[1];
              uVar11 = *param_1;
              param_1[1] = param_1[4];
              *param_1 = param_1[3];
              param_1[2] = param_1[5];
              param_1[4] = uVar13;
              param_1[3] = uVar11;
              param_1[5] = uVar14;
            }
          }
        }
        goto LAB_004e0074;
      }
      if (uVar16 == 5) {
        if (*(long *)(lVar6 + 0x28) == lVar9) {
          FUN_004e02f0(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar19,param_3);
          return;
        }
        goto LAB_004e0144;
      }
    }
    if ((long)uVar10 < 0x240) {
      puVar17 = param_1 + 3;
      if ((param_5 & 1) == 0) {
        if (param_1 != param_2 && puVar17 != param_2) {
          pcVar23 = (char *)*param_3;
          do {
            puVar19 = puVar17;
            fVar29 = *(float *)(param_1 + 5);
            fVar27 = *(float *)((long)param_1 + 0x2c);
            pfVar4 = (float *)(param_1 + 2);
            fVar30 = fVar29;
            if (*pcVar23 != '\0') {
              pfVar4 = (float *)((long)param_1 + 0x14);
              fVar30 = fVar27;
            }
            if (fVar30 < *pfVar4) {
              uVar11 = puVar19[1];
              uVar14 = *puVar19;
              puVar17 = puVar19;
              do {
                puVar18 = puVar17;
                puVar18[1] = puVar18[-2];
                *puVar18 = puVar18[-3];
                puVar18[2] = puVar18[-1];
                pfVar4 = (float *)(puVar18 + -4);
                fVar30 = fVar29;
                if (*(char *)*param_3 != '\0') {
                  pfVar4 = (float *)((long)puVar18 - 0x1c);
                  fVar30 = fVar27;
                }
                puVar17 = puVar18 + -3;
              } while (fVar30 < *pfVar4);
              *(float *)(puVar18 + -1) = fVar29;
              *(float *)((long)puVar18 - 4) = fVar27;
              puVar18[-2] = uVar11;
              puVar18[-3] = uVar14;
              pcVar23 = (char *)*param_3;
            }
            puVar17 = puVar19 + 3;
            param_1 = puVar19;
          } while (puVar19 + 3 != param_2);
        }
        goto LAB_004e0074;
      }
      if (param_1 == param_2 || puVar17 == param_2) goto LAB_004e0074;
      pcVar23 = (char *)*param_3;
      lVar15 = 0;
      puVar19 = param_1;
      goto LAB_004dfcb0;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) goto LAB_004e0074;
      uVar22 = uVar16 - 2 >> 1;
      uVar25 = uVar22;
      goto LAB_004dfd64;
    }
    uVar16 = uVar16 >> 1;
    puVar17 = param_1 + uVar16 * 3;
    if (uVar10 < 0xc01) break;
    FUN_004e015c(param_1,puVar17,puVar19,param_3);
    puVar18 = param_1 + 3;
    FUN_004e015c(puVar18,param_1 + uVar16 * 3 + -3,param_2 + -6,param_3);
    FUN_004e015c(param_1 + 6,puVar18 + uVar16 * 3,param_2 + -9,param_3);
    FUN_004e015c(param_1 + uVar16 * 3 + -3,puVar17,puVar18 + uVar16 * 3,param_3);
    uVar14 = param_1[2];
    uVar28 = param_1[1];
    uVar13 = *param_1;
    uVar24 = *puVar17;
    uVar11 = puVar17[2];
    param_1[1] = puVar17[1];
    *param_1 = uVar24;
    param_1[2] = uVar11;
    puVar17[2] = uVar14;
    puVar17[1] = uVar28;
    *puVar17 = uVar13;
    if ((param_5 & 1) != 0) goto LAB_004df768;
LAB_004df6d0:
    fVar29 = *(float *)(param_1 + 2);
    fVar27 = *(float *)((long)param_1 + 0x14);
    cVar5 = *(char *)*param_3;
    pfVar4 = (float *)(param_1 + -1);
    fVar30 = fVar29;
    if (cVar5 != '\0') {
      pfVar4 = (float *)((long)param_1 - 4);
      fVar30 = fVar27;
    }
    if (*pfVar4 < fVar30) goto LAB_004df774;
    uVar11 = param_1[1];
    uVar14 = *param_1;
    pfVar4 = (float *)(param_2 + -1);
    if (cVar5 != '\0') {
      pfVar4 = (float *)((long)param_2 - 4);
    }
    puVar17 = param_1;
    puVar18 = param_1;
    if (*pfVar4 <= fVar30) {
      do {
        puVar17 = puVar18 + 3;
        if (param_2 <= puVar17) break;
        pfVar4 = (float *)(puVar18 + 5);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar18 + 0x2c);
        }
        puVar18 = puVar17;
      } while (*pfVar4 <= fVar30);
    }
    else {
      do {
        pfVar4 = (float *)(puVar17 + 5);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar17 + 0x2c);
        }
        puVar17 = puVar17 + 3;
      } while (*pfVar4 <= fVar30);
    }
    puVar18 = param_2;
    if (puVar17 < param_2) {
      do {
        pfVar4 = (float *)(puVar18 + -1);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar18 - 4);
        }
        puVar18 = puVar18 + -3;
      } while (fVar30 < *pfVar4);
    }
    while (puVar17 < puVar18) {
      uVar13 = puVar17[2];
      uVar31 = puVar17[1];
      uVar24 = *puVar17;
      uVar32 = puVar18[1];
      uVar28 = *puVar18;
      puVar17[2] = puVar18[2];
      puVar17[1] = uVar32;
      *puVar17 = uVar28;
      puVar18[2] = uVar13;
      puVar18[1] = uVar31;
      *puVar18 = uVar24;
      cVar5 = *(char *)*param_3;
      fVar30 = fVar29;
      if (cVar5 != '\0') {
        fVar30 = fVar27;
      }
      do {
        pfVar4 = (float *)(puVar17 + 5);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar17 + 0x2c);
        }
        puVar17 = puVar17 + 3;
      } while (*pfVar4 <= fVar30);
      do {
        pfVar4 = (float *)(puVar18 + -1);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar18 - 4);
        }
        puVar18 = puVar18 + -3;
      } while (fVar30 < *pfVar4);
    }
    puVar18 = puVar17 + -3;
    if (puVar18 != param_1) {
      uVar24 = puVar17[-2];
      uVar13 = *puVar18;
      param_1[2] = puVar17[-1];
      param_1[1] = uVar24;
      *param_1 = uVar13;
    }
    param_5 = 0;
    *(float *)(puVar17 + -1) = fVar29;
    *(float *)((long)puVar17 - 4) = fVar27;
    puVar17[-2] = uVar11;
    *puVar18 = uVar14;
    param_4 = param_4 + -1;
  }
  FUN_004e015c(puVar17,param_1,puVar19,param_3);
  if ((param_5 & 1) == 0) goto LAB_004df6d0;
LAB_004df768:
  fVar29 = *(float *)(param_1 + 2);
  fVar27 = *(float *)((long)param_1 + 0x14);
  cVar5 = *(char *)*param_3;
LAB_004df774:
  param_4 = param_4 + -1;
  uVar11 = param_1[1];
  uVar14 = *param_1;
  puVar18 = param_1;
  fVar30 = fVar29;
  if (cVar5 != '\0') {
    fVar30 = fVar27;
  }
  do {
    puVar17 = puVar18;
    pfVar4 = (float *)(puVar17 + 5);
    if (cVar5 != '\0') {
      pfVar4 = (float *)((long)puVar17 + 0x2c);
    }
    puVar18 = puVar17 + 3;
  } while (*pfVar4 < fVar30);
  puVar21 = param_2;
  if (puVar17 == param_1) {
    do {
      if (puVar21 <= puVar18) break;
      pfVar4 = (float *)(puVar21 + -1);
      if (cVar5 != '\0') {
        pfVar4 = (float *)((long)puVar21 - 4);
      }
      puVar21 = puVar21 + -3;
    } while (fVar30 <= *pfVar4);
  }
  else {
    do {
      pfVar4 = (float *)(puVar21 + -1);
      if (cVar5 != '\0') {
        pfVar4 = (float *)((long)puVar21 - 4);
      }
      puVar21 = puVar21 + -3;
    } while (fVar30 <= *pfVar4);
  }
  puVar12 = puVar21;
  puVar17 = puVar18;
  if (puVar18 < puVar21) {
    do {
      uVar31 = puVar17[1];
      uVar28 = *puVar17;
      uVar13 = puVar17[2];
      uVar32 = *puVar12;
      uVar24 = puVar12[2];
      puVar17[1] = puVar12[1];
      *puVar17 = uVar32;
      puVar17[2] = uVar24;
      puVar12[2] = uVar13;
      puVar12[1] = uVar31;
      *puVar12 = uVar28;
      cVar5 = *(char *)*param_3;
      fVar30 = fVar29;
      if (cVar5 != '\0') {
        fVar30 = fVar27;
      }
      do {
        pfVar4 = (float *)(puVar17 + 5);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar17 + 0x2c);
        }
        puVar17 = puVar17 + 3;
      } while (*pfVar4 < fVar30);
      do {
        pfVar4 = (float *)(puVar12 + -1);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar12 - 4);
        }
        puVar12 = puVar12 + -3;
      } while (fVar30 <= *pfVar4);
    } while (puVar17 < puVar12);
  }
  puVar12 = puVar17 + -3;
  if (puVar12 != param_1) {
    uVar24 = puVar17[-2];
    uVar13 = *puVar12;
    param_1[2] = puVar17[-1];
    param_1[1] = uVar24;
    *param_1 = uVar13;
  }
  *(float *)(puVar17 + -1) = fVar29;
  *(float *)((long)puVar17 - 4) = fVar27;
  puVar17[-2] = uVar11;
  *puVar12 = uVar14;
  if (puVar21 <= puVar18) {
    uVar10 = FUN_004e059c(param_1,puVar12,param_3);
    uVar16 = FUN_004e059c(puVar17,param_2,param_3);
    if ((uVar16 & 1) != 0) goto LAB_004dfa44;
    if ((uVar10 & 1) != 0) goto LAB_004df5cc;
  }
  FUN_004df56c(param_1,puVar12,param_3,param_4,param_5 & 1);
  param_5 = 0;
  goto LAB_004df5cc;
LAB_004dfcb0:
  do {
    puVar18 = puVar17;
    fVar27 = *(float *)(puVar19 + 5);
    fVar29 = *(float *)((long)puVar19 + 0x2c);
    pfVar4 = (float *)(puVar19 + 2);
    fVar30 = fVar27;
    if (*pcVar23 != '\0') {
      pfVar4 = (float *)((long)puVar19 + 0x14);
      fVar30 = fVar29;
    }
    if (fVar30 < *pfVar4) {
      uVar11 = puVar18[1];
      uVar14 = *puVar18;
      lVar8 = lVar15;
      do {
        lVar20 = lVar8;
        puVar17 = (undefined8 *)((long)param_1 + lVar20);
        puVar17[4] = puVar17[1];
        puVar17[3] = *puVar17;
        puVar17[5] = puVar17[2];
        puVar19 = param_1;
        if (lVar20 == 0) goto LAB_004dfc90;
        pfVar4 = (float *)(puVar17 + -1);
        fVar30 = fVar27;
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)puVar17 + -4);
          fVar30 = fVar29;
        }
        lVar8 = lVar20 + -0x18;
      } while (fVar30 < *pfVar4);
      puVar19 = (undefined8 *)((long)param_1 + lVar20);
LAB_004dfc90:
      *(float *)(puVar19 + 2) = fVar27;
      *(float *)((long)puVar19 + 0x14) = fVar29;
      puVar19[1] = uVar11;
      *puVar19 = uVar14;
      pcVar23 = (char *)*param_3;
    }
    lVar15 = lVar15 + 0x18;
    puVar17 = puVar18 + 3;
    puVar19 = puVar18;
  } while (puVar18 + 3 != param_2);
  goto LAB_004e0074;
LAB_004dfa44:
  param_2 = puVar12;
  if ((uVar10 & 1) != 0) goto LAB_004e0074;
  goto LAB_004df5b8;
LAB_004dfd64:
  do {
    if ((long)uVar25 <= (long)uVar22) {
      uVar26 = uVar25 << 1 | 1;
      uVar1 = uVar25 * 2 + 2;
      cVar5 = *(char *)*param_3;
      puVar17 = param_1 + uVar26 * 3;
      if ((long)uVar1 < (long)uVar16) {
        pfVar4 = (float *)(puVar17 + 5);
        pfVar7 = (float *)(param_1 + uVar26 * 3 + 2);
        if (cVar5 != '\0') {
          pfVar4 = (float *)((long)puVar17 + 0x2c);
          pfVar7 = (float *)((long)param_1 + uVar26 * 0x18 + 0x14);
        }
        if (*pfVar7 < *pfVar4) {
          puVar17 = puVar17 + 3;
          uVar26 = uVar1;
        }
      }
      uVar14 = param_1[uVar25 * 3 + 2];
      pfVar4 = (float *)(puVar17 + 2);
      if (cVar5 != '\0') {
        pfVar4 = (float *)((long)puVar17 + 0x14);
      }
      fVar27 = (float)((ulong)uVar14 >> 0x20);
      fVar30 = (float)uVar14;
      if (cVar5 != '\0') {
        fVar30 = fVar27;
      }
      if (fVar30 <= *pfVar4) {
        puVar19 = param_1 + uVar25 * 3;
        uVar13 = puVar19[1];
        uVar11 = *puVar19;
        do {
          puVar18 = puVar17;
          uVar28 = puVar18[1];
          uVar24 = *puVar18;
          puVar19[2] = puVar18[2];
          puVar19[1] = uVar28;
          *puVar19 = uVar24;
          if ((long)uVar22 < (long)uVar26) break;
          uVar2 = uVar26 << 1 | 1;
          puVar17 = param_1 + uVar2 * 3;
          uVar1 = uVar26 * 2 + 2;
          uVar26 = uVar2;
          if ((long)uVar1 < (long)uVar16) {
            pfVar4 = (float *)(puVar17 + 5);
            pfVar7 = (float *)(param_1 + uVar2 * 3 + 2);
            if (*(char *)*param_3 != '\0') {
              pfVar4 = (float *)((long)puVar17 + 0x2c);
              pfVar7 = (float *)((long)param_1 + uVar2 * 0x18 + 0x14);
            }
            if (*pfVar7 < *pfVar4) {
              puVar17 = puVar17 + 3;
              uVar26 = uVar1;
            }
          }
          pfVar4 = (float *)(puVar17 + 2);
          fVar30 = (float)uVar14;
          if (*(char *)*param_3 != '\0') {
            pfVar4 = (float *)((long)puVar17 + 0x14);
            fVar30 = fVar27;
          }
          puVar19 = puVar18;
        } while (fVar30 <= *pfVar4);
        puVar18[2] = uVar14;
        puVar18[1] = uVar13;
        *puVar18 = uVar11;
      }
    }
    bVar3 = uVar25 != 0;
    uVar25 = uVar25 - 1;
  } while (bVar3);
  uVar10 = uVar10 / 0x18;
  do {
    uVar14 = param_1[2];
    uVar13 = param_1[1];
    uVar11 = *param_1;
    puVar17 = param_1;
    uVar16 = 0;
    do {
      uVar22 = uVar16 << 1 | 1;
      uVar25 = uVar16 * 2 + 2;
      puVar19 = puVar17 + uVar16 * 3 + 3;
      if ((long)uVar25 < (long)uVar10) {
        pfVar4 = (float *)(puVar17 + uVar16 * 3 + 8);
        pfVar7 = (float *)(puVar17 + uVar16 * 3 + 5);
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)puVar17 + uVar16 * 0x18 + 0x44);
          pfVar7 = (float *)((long)puVar17 + uVar16 * 0x18 + 0x2c);
        }
        if (*pfVar7 < *pfVar4) {
          puVar19 = puVar17 + uVar16 * 3 + 6;
          uVar22 = uVar25;
        }
      }
      uVar28 = puVar19[1];
      uVar24 = *puVar19;
      puVar17[2] = puVar19[2];
      puVar17[1] = uVar28;
      *puVar17 = uVar24;
      puVar17 = puVar19;
      uVar16 = uVar22;
    } while ((long)uVar22 <= (long)(uVar10 - 2 >> 1));
    puVar17 = param_2 + -3;
    if (puVar19 == puVar17) {
      puVar19[2] = uVar14;
      puVar19[1] = uVar13;
      *puVar19 = uVar11;
    }
    else {
      uVar28 = param_2[-2];
      uVar24 = *puVar17;
      puVar19[2] = param_2[-1];
      puVar19[1] = uVar28;
      *puVar19 = uVar24;
      uVar16 = (long)puVar19 + (0x18 - (long)param_1);
      param_2[-1] = uVar14;
      param_2[-2] = uVar13;
      *puVar17 = uVar11;
      if (0x18 < (long)uVar16) {
        fVar29 = *(float *)(puVar19 + 2);
        fVar27 = *(float *)((long)puVar19 + 0x14);
        fVar30 = fVar29;
        if (*(char *)*param_3 != '\0') {
          fVar30 = fVar27;
        }
        uVar16 = uVar16 / 0x18 - 2 >> 1;
        pfVar4 = (float *)(param_1 + uVar16 * 3 + 2);
        if (*(char *)*param_3 != '\0') {
          pfVar4 = (float *)((long)param_1 + uVar16 * 0x18 + 0x14);
        }
        if (*pfVar4 < fVar30) {
          uVar11 = puVar19[1];
          uVar14 = *puVar19;
          do {
            puVar18 = param_1 + uVar16 * 3;
            uVar24 = puVar18[1];
            uVar13 = *puVar18;
            puVar19[2] = puVar18[2];
            puVar19[1] = uVar24;
            *puVar19 = uVar13;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            fVar30 = fVar29;
            if (*(char *)*param_3 != '\0') {
              fVar30 = fVar27;
            }
            pfVar4 = (float *)(param_1 + uVar16 * 3 + 2);
            if (*(char *)*param_3 != '\0') {
              pfVar4 = (float *)((long)param_1 + uVar16 * 0x18 + 0x14);
            }
            puVar19 = puVar18;
          } while (*pfVar4 < fVar30);
          *(float *)(puVar18 + 2) = fVar29;
          *(float *)((long)puVar18 + 0x14) = fVar27;
          puVar18[1] = uVar11;
          *puVar18 = uVar14;
        }
      }
    }
    bVar3 = 2 < (long)uVar10;
    uVar10 = uVar10 - 1;
    param_2 = puVar17;
  } while (bVar3);
LAB_004e0074:
  if (*(long *)(lVar6 + 0x28) == lVar9) {
    return;
  }
LAB_004e0144:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e0148  FUN_004e0148 =====

void FUN_004e0148(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004e015c  FUN_004e015c =====

void FUN_004e015c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pfVar4 = (float *)(param_1 + 2);
  pfVar6 = (float *)(param_2 + 2);
  if (*(char *)*param_4 != '\0') {
    pfVar4 = (float *)((long)param_1 + 0x14);
    pfVar6 = (float *)((long)param_2 + 0x14);
  }
  fVar7 = *pfVar6;
  pfVar6 = (float *)(param_3 + 2);
  if (*(char *)*param_4 != '\0') {
    pfVar6 = (float *)((long)param_3 + 0x14);
  }
  if (*pfVar4 <= fVar7) {
    if (*pfVar6 < fVar7) {
      uVar8 = *param_3;
      uVar3 = param_3[2];
      uVar10 = param_2[1];
      uVar9 = *param_2;
      pfVar6 = (float *)(param_2 + 2);
      uVar5 = *(undefined8 *)pfVar6;
      param_2[1] = param_3[1];
      *param_2 = uVar8;
      *(undefined8 *)pfVar6 = uVar3;
      param_3[1] = uVar10;
      *param_3 = uVar9;
      param_3[2] = uVar5;
      pfVar4 = (float *)(param_1 + 2);
      if (*(char *)*param_4 != '\0') {
        pfVar4 = (float *)((long)param_1 + 0x14);
        pfVar6 = (float *)((long)param_2 + 0x14);
      }
      if (*pfVar6 < *pfVar4) {
        uVar8 = *param_2;
        uVar3 = param_2[2];
        uVar10 = param_1[1];
        uVar9 = *param_1;
        uVar5 = param_1[2];
        param_1[1] = param_2[1];
        *param_1 = uVar8;
        param_1[2] = uVar3;
        param_2[1] = uVar10;
        *param_2 = uVar9;
        param_2[2] = uVar5;
      }
    }
  }
  else {
    if (fVar7 <= *pfVar6) {
      uVar8 = *param_2;
      uVar10 = param_1[1];
      uVar9 = *param_1;
      pfVar4 = (float *)(param_2 + 2);
      uVar3 = *(undefined8 *)pfVar4;
      uVar5 = param_1[2];
      param_1[1] = param_2[1];
      *param_1 = uVar8;
      param_1[2] = uVar3;
      param_2[1] = uVar10;
      *param_2 = uVar9;
      *(undefined8 *)pfVar4 = uVar5;
      pfVar6 = (float *)(param_3 + 2);
      if (*(char *)*param_4 != '\0') {
        pfVar4 = (float *)((long)param_2 + 0x14);
        pfVar6 = (float *)((long)param_3 + 0x14);
      }
      if (*pfVar4 <= *pfVar6) goto LAB_004e02d0;
      uVar8 = *param_3;
      uVar3 = param_3[2];
      uVar10 = param_2[1];
      uVar9 = *param_2;
      uVar5 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = uVar8;
      param_2[2] = uVar3;
    }
    else {
      uVar8 = *param_3;
      uVar3 = param_3[2];
      uVar10 = param_1[1];
      uVar9 = *param_1;
      uVar5 = param_1[2];
      param_1[1] = param_3[1];
      *param_1 = uVar8;
      param_1[2] = uVar3;
    }
    param_3[1] = uVar10;
    *param_3 = uVar9;
    param_3[2] = uVar5;
  }
LAB_004e02d0:
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e02f0  FUN_004e02f0 =====

void FUN_004e02f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  FUN_004e015c();
  cVar4 = *(char *)*param_6;
  pfVar1 = (float *)(param_3 + 2);
  pfVar7 = (float *)(param_4 + 2);
  if (cVar4 != '\0') {
    pfVar1 = (float *)((long)param_3 + 0x14);
    pfVar7 = (float *)((long)param_4 + 0x14);
  }
  if (*pfVar7 < *pfVar1) {
    uVar8 = *param_4;
    uVar5 = param_4[2];
    uVar10 = param_3[1];
    uVar9 = *param_3;
    pfVar7 = (float *)(param_3 + 2);
    uVar6 = *(undefined8 *)pfVar7;
    param_3[1] = param_4[1];
    *param_3 = uVar8;
    *(undefined8 *)pfVar7 = uVar5;
    param_4[1] = uVar10;
    *param_4 = uVar9;
    param_4[2] = uVar6;
    cVar4 = *(char *)*param_6;
    pfVar1 = (float *)(param_2 + 2);
    if (cVar4 != '\0') {
      pfVar1 = (float *)((long)param_2 + 0x14);
      pfVar7 = (float *)((long)param_3 + 0x14);
    }
    if (*pfVar7 < *pfVar1) {
      uVar8 = *param_3;
      uVar5 = param_3[2];
      uVar10 = param_2[1];
      uVar9 = *param_2;
      pfVar7 = (float *)(param_2 + 2);
      uVar6 = *(undefined8 *)pfVar7;
      param_2[1] = param_3[1];
      *param_2 = uVar8;
      *(undefined8 *)pfVar7 = uVar5;
      param_3[1] = uVar10;
      *param_3 = uVar9;
      param_3[2] = uVar6;
      cVar4 = *(char *)*param_6;
      pfVar1 = (float *)(param_1 + 2);
      if (cVar4 != '\0') {
        pfVar1 = (float *)((long)param_1 + 0x14);
        pfVar7 = (float *)((long)param_2 + 0x14);
      }
      if (*pfVar7 < *pfVar1) {
        uVar8 = *param_2;
        uVar5 = param_2[2];
        uVar10 = param_1[1];
        uVar9 = *param_1;
        uVar6 = param_1[2];
        param_1[1] = param_2[1];
        *param_1 = uVar8;
        param_1[2] = uVar5;
        param_2[1] = uVar10;
        *param_2 = uVar9;
        param_2[2] = uVar6;
        cVar4 = *(char *)*param_6;
      }
    }
  }
  pfVar1 = (float *)(param_4 + 2);
  pfVar7 = (float *)(param_5 + 2);
  if (cVar4 != '\0') {
    pfVar1 = (float *)((long)param_4 + 0x14);
    pfVar7 = (float *)((long)param_5 + 0x14);
  }
  if (*pfVar7 < *pfVar1) {
    uVar8 = *param_5;
    uVar5 = param_5[2];
    uVar10 = param_4[1];
    uVar9 = *param_4;
    pfVar7 = (float *)(param_4 + 2);
    uVar6 = *(undefined8 *)pfVar7;
    param_4[1] = param_5[1];
    *param_4 = uVar8;
    *(undefined8 *)pfVar7 = uVar5;
    param_5[1] = uVar10;
    *param_5 = uVar9;
    param_5[2] = uVar6;
    pfVar1 = (float *)(param_3 + 2);
    if (*(char *)*param_6 != '\0') {
      pfVar1 = (float *)((long)param_3 + 0x14);
      pfVar7 = (float *)((long)param_4 + 0x14);
    }
    if (*pfVar7 < *pfVar1) {
      uVar8 = *param_4;
      uVar5 = param_4[2];
      uVar10 = param_3[1];
      uVar9 = *param_3;
      pfVar7 = (float *)(param_3 + 2);
      uVar6 = *(undefined8 *)pfVar7;
      param_3[1] = param_4[1];
      *param_3 = uVar8;
      *(undefined8 *)pfVar7 = uVar5;
      param_4[1] = uVar10;
      *param_4 = uVar9;
      param_4[2] = uVar6;
      pfVar1 = (float *)(param_2 + 2);
      if (*(char *)*param_6 != '\0') {
        pfVar1 = (float *)((long)param_2 + 0x14);
        pfVar7 = (float *)((long)param_3 + 0x14);
      }
      if (*pfVar7 < *pfVar1) {
        uVar8 = *param_3;
        uVar5 = param_3[2];
        uVar10 = param_2[1];
        uVar9 = *param_2;
        pfVar7 = (float *)(param_2 + 2);
        uVar6 = *(undefined8 *)pfVar7;
        param_2[1] = param_3[1];
        *param_2 = uVar8;
        *(undefined8 *)pfVar7 = uVar5;
        param_3[1] = uVar10;
        *param_3 = uVar9;
        param_3[2] = uVar6;
        pfVar1 = (float *)(param_1 + 2);
        if (*(char *)*param_6 != '\0') {
          pfVar1 = (float *)((long)param_1 + 0x14);
          pfVar7 = (float *)((long)param_2 + 0x14);
        }
        if (*pfVar7 < *pfVar1) {
          uVar8 = *param_2;
          uVar5 = param_2[2];
          uVar10 = param_1[1];
          uVar9 = *param_1;
          uVar6 = param_1[2];
          param_1[1] = param_2[1];
          *param_1 = uVar8;
          param_1[2] = uVar5;
          param_2[1] = uVar10;
          *param_2 = uVar9;
          param_2[2] = uVar6;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e059c  FUN_004e059c =====

void FUN_004e059c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  char *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar2 = tpidr_el0;
  uVar8 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  lVar10 = *(long *)(lVar2 + 0x28);
  if ((long)uVar8 < 3) {
    if (1 < uVar8) {
      if (uVar8 == 2) {
        pfVar1 = (float *)(param_1 + 2);
        pfVar3 = (float *)(param_2 + -1);
        if (*(char *)*param_3 != '\0') {
          pfVar1 = (float *)((long)param_1 + 0x14);
          pfVar3 = (float *)((long)param_2 + -4);
        }
        if (*pfVar3 < *pfVar1) {
          uVar20 = param_2[-3];
          uVar9 = param_2[-1];
          uVar23 = param_1[1];
          uVar22 = *param_1;
          uVar11 = param_1[2];
          param_1[1] = param_2[-2];
          *param_1 = uVar20;
          param_1[2] = uVar9;
          bVar7 = true;
          param_2[-2] = uVar23;
          param_2[-3] = uVar22;
          param_2[-1] = uVar11;
          goto LAB_004e08a4;
        }
      }
      else {
LAB_004e0690:
        FUN_004e015c(param_1,param_1 + 3,param_1 + 6,param_3);
        if (param_1 + 9 != param_2) {
          pcVar15 = (char *)*param_3;
          lVar13 = 0;
          iVar14 = 0;
          puVar17 = param_1 + 9;
          puVar18 = param_1 + 6;
          do {
            puVar12 = puVar17;
            fVar19 = *(float *)(puVar12 + 2);
            fVar21 = *(float *)((long)puVar12 + 0x14);
            pfVar1 = (float *)(puVar18 + 2);
            fVar4 = fVar19;
            if (*pcVar15 != '\0') {
              pfVar1 = (float *)((long)puVar18 + 0x14);
              fVar4 = fVar21;
            }
            if (fVar4 < *pfVar1) {
              uVar11 = puVar12[1];
              uVar9 = *puVar12;
              lVar6 = lVar13;
              do {
                lVar16 = lVar6;
                *(undefined8 *)((long)param_1 + lVar16 + 0x50) =
                     *(undefined8 *)((long)param_1 + lVar16 + 0x38);
                *(undefined8 *)((long)param_1 + lVar16 + 0x48) =
                     *(undefined8 *)((long)param_1 + lVar16 + 0x30);
                *(undefined8 *)((long)param_1 + lVar16 + 0x58) =
                     *(undefined8 *)((long)param_1 + lVar16 + 0x40);
                puVar17 = param_1;
                if (lVar16 == -0x30) goto LAB_004e0770;
                fVar4 = fVar19;
                lVar5 = lVar16 + 0x28;
                if (*(char *)*param_3 != '\0') {
                  fVar4 = fVar21;
                  lVar5 = lVar16 + 0x2c;
                }
                lVar6 = lVar16 + -0x18;
              } while (fVar4 < *(float *)((long)param_1 + lVar5));
              puVar17 = (undefined8 *)((long)param_1 + lVar16 + 0x30);
LAB_004e0770:
              iVar14 = iVar14 + 1;
              *(float *)(puVar17 + 2) = fVar19;
              *(float *)((long)puVar17 + 0x14) = fVar21;
              puVar17[1] = uVar11;
              *puVar17 = uVar9;
              if (iVar14 == 8) {
                bVar7 = puVar12 + 3 == param_2;
                goto LAB_004e08a4;
              }
              pcVar15 = (char *)*param_3;
            }
            lVar13 = lVar13 + 0x18;
            puVar17 = puVar12 + 3;
            puVar18 = puVar12;
          } while (puVar12 + 3 != param_2);
        }
      }
    }
  }
  else if (uVar8 == 3) {
    FUN_004e015c(param_1,param_1 + 3,param_2 + -3,param_3);
  }
  else if (uVar8 == 4) {
    FUN_004e015c(param_1,param_1 + 3,param_1 + 6,param_3);
    pfVar1 = (float *)(param_1 + 8);
    pfVar3 = (float *)(param_2 + -1);
    if (*(char *)*param_3 != '\0') {
      pfVar1 = (float *)((long)param_1 + 0x44);
      pfVar3 = (float *)((long)param_2 + -4);
    }
    if (*pfVar3 < *pfVar1) {
      uVar20 = param_2[-3];
      uVar9 = param_2[-1];
      uVar23 = param_1[7];
      uVar22 = param_1[6];
      uVar11 = param_1[8];
      param_1[7] = param_2[-2];
      param_1[6] = uVar20;
      param_1[8] = uVar9;
      param_2[-2] = uVar23;
      param_2[-3] = uVar22;
      param_2[-1] = uVar11;
      pfVar1 = (float *)(param_1 + 5);
      pfVar3 = (float *)(param_1 + 8);
      if (*(char *)*param_3 != '\0') {
        pfVar1 = (float *)((long)param_1 + 0x2c);
        pfVar3 = (float *)((long)param_1 + 0x44);
      }
      if (*pfVar3 < *pfVar1) {
        uVar20 = param_1[4];
        uVar11 = param_1[3];
        uVar9 = param_1[5];
        param_1[4] = param_1[7];
        param_1[3] = param_1[6];
        param_1[5] = param_1[8];
        param_1[7] = uVar20;
        param_1[6] = uVar11;
        param_1[8] = uVar9;
        pfVar1 = (float *)(param_1 + 2);
        pfVar3 = (float *)(param_1 + 5);
        if (*(char *)*param_3 != '\0') {
          pfVar1 = (float *)((long)param_1 + 0x14);
          pfVar3 = (float *)((long)param_1 + 0x2c);
        }
        if (*pfVar3 < *pfVar1) {
          bVar7 = true;
          uVar20 = param_1[1];
          uVar11 = *param_1;
          uVar9 = param_1[2];
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[4] = uVar20;
          param_1[3] = uVar11;
          param_1[5] = uVar9;
          goto LAB_004e08a4;
        }
      }
    }
  }
  else {
    if (uVar8 != 5) goto LAB_004e0690;
    FUN_004e02f0(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3,param_3);
  }
  bVar7 = true;
LAB_004e08a4:
  if (*(long *)(lVar2 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar7);
  }
  return;
}


// ===== 004e08e0  FUN_004e08e0 =====

void FUN_004e08e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pfVar4 = (float *)(param_1 + 2);
  pfVar6 = (float *)(param_2 + 2);
  if (*(char *)*param_4 != '\0') {
    pfVar4 = (float *)((long)param_1 + 0x14);
    pfVar6 = (float *)((long)param_2 + 0x14);
  }
  fVar7 = *pfVar6;
  pfVar6 = (float *)(param_3 + 2);
  if (*(char *)*param_4 != '\0') {
    pfVar6 = (float *)((long)param_3 + 0x14);
  }
  if (*pfVar4 <= fVar7) {
    if (*pfVar6 < fVar7) {
      uVar8 = *param_3;
      uVar3 = param_3[2];
      uVar10 = param_2[1];
      uVar9 = *param_2;
      pfVar6 = (float *)(param_2 + 2);
      uVar5 = *(undefined8 *)pfVar6;
      param_2[1] = param_3[1];
      *param_2 = uVar8;
      *(undefined8 *)pfVar6 = uVar3;
      param_3[1] = uVar10;
      *param_3 = uVar9;
      param_3[2] = uVar5;
      pfVar4 = (float *)(param_1 + 2);
      if (*(char *)*param_4 != '\0') {
        pfVar4 = (float *)((long)param_1 + 0x14);
        pfVar6 = (float *)((long)param_2 + 0x14);
      }
      if (*pfVar6 < *pfVar4) {
        uVar8 = *param_2;
        uVar3 = param_2[2];
        uVar10 = param_1[1];
        uVar9 = *param_1;
        uVar5 = param_1[2];
        param_1[1] = param_2[1];
        *param_1 = uVar8;
        param_1[2] = uVar3;
        param_2[1] = uVar10;
        *param_2 = uVar9;
        param_2[2] = uVar5;
      }
    }
  }
  else {
    if (fVar7 <= *pfVar6) {
      uVar8 = *param_2;
      uVar10 = param_1[1];
      uVar9 = *param_1;
      pfVar4 = (float *)(param_2 + 2);
      uVar3 = *(undefined8 *)pfVar4;
      uVar5 = param_1[2];
      param_1[1] = param_2[1];
      *param_1 = uVar8;
      param_1[2] = uVar3;
      param_2[1] = uVar10;
      *param_2 = uVar9;
      *(undefined8 *)pfVar4 = uVar5;
      pfVar6 = (float *)(param_3 + 2);
      if (*(char *)*param_4 != '\0') {
        pfVar4 = (float *)((long)param_2 + 0x14);
        pfVar6 = (float *)((long)param_3 + 0x14);
      }
      if (*pfVar4 <= *pfVar6) goto LAB_004e0a54;
      uVar8 = *param_3;
      uVar3 = param_3[2];
      uVar10 = param_2[1];
      uVar9 = *param_2;
      uVar5 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = uVar8;
      param_2[2] = uVar3;
    }
    else {
      uVar8 = *param_3;
      uVar3 = param_3[2];
      uVar10 = param_1[1];
      uVar9 = *param_1;
      uVar5 = param_1[2];
      param_1[1] = param_3[1];
      *param_1 = uVar8;
      param_1[2] = uVar3;
    }
    param_3[1] = uVar10;
    *param_3 = uVar9;
    param_3[2] = uVar5;
  }
LAB_004e0a54:
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e0a74  FUN_004e0a74 =====

void FUN_004e0a74(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  FUN_004e08e0();
  cVar4 = *(char *)*param_6;
  pfVar1 = (float *)(param_3 + 2);
  pfVar7 = (float *)(param_4 + 2);
  if (cVar4 != '\0') {
    pfVar1 = (float *)((long)param_3 + 0x14);
    pfVar7 = (float *)((long)param_4 + 0x14);
  }
  if (*pfVar7 < *pfVar1) {
    uVar8 = *param_4;
    uVar5 = param_4[2];
    uVar10 = param_3[1];
    uVar9 = *param_3;
    pfVar7 = (float *)(param_3 + 2);
    uVar6 = *(undefined8 *)pfVar7;
    param_3[1] = param_4[1];
    *param_3 = uVar8;
    *(undefined8 *)pfVar7 = uVar5;
    param_4[1] = uVar10;
    *param_4 = uVar9;
    param_4[2] = uVar6;
    cVar4 = *(char *)*param_6;
    pfVar1 = (float *)(param_2 + 2);
    if (cVar4 != '\0') {
      pfVar1 = (float *)((long)param_2 + 0x14);
      pfVar7 = (float *)((long)param_3 + 0x14);
    }
    if (*pfVar7 < *pfVar1) {
      uVar8 = *param_3;
      uVar5 = param_3[2];
      uVar10 = param_2[1];
      uVar9 = *param_2;
      pfVar7 = (float *)(param_2 + 2);
      uVar6 = *(undefined8 *)pfVar7;
      param_2[1] = param_3[1];
      *param_2 = uVar8;
      *(undefined8 *)pfVar7 = uVar5;
      param_3[1] = uVar10;
      *param_3 = uVar9;
      param_3[2] = uVar6;
      cVar4 = *(char *)*param_6;
      pfVar1 = (float *)(param_1 + 2);
      if (cVar4 != '\0') {
        pfVar1 = (float *)((long)param_1 + 0x14);
        pfVar7 = (float *)((long)param_2 + 0x14);
      }
      if (*pfVar7 < *pfVar1) {
        uVar8 = *param_2;
        uVar5 = param_2[2];
        uVar10 = param_1[1];
        uVar9 = *param_1;
        uVar6 = param_1[2];
        param_1[1] = param_2[1];
        *param_1 = uVar8;
        param_1[2] = uVar5;
        param_2[1] = uVar10;
        *param_2 = uVar9;
        param_2[2] = uVar6;
        cVar4 = *(char *)*param_6;
      }
    }
  }
  pfVar1 = (float *)(param_4 + 2);
  pfVar7 = (float *)(param_5 + 2);
  if (cVar4 != '\0') {
    pfVar1 = (float *)((long)param_4 + 0x14);
    pfVar7 = (float *)((long)param_5 + 0x14);
  }
  if (*pfVar7 < *pfVar1) {
    uVar8 = *param_5;
    uVar5 = param_5[2];
    uVar10 = param_4[1];
    uVar9 = *param_4;
    pfVar7 = (float *)(param_4 + 2);
    uVar6 = *(undefined8 *)pfVar7;
    param_4[1] = param_5[1];
    *param_4 = uVar8;
    *(undefined8 *)pfVar7 = uVar5;
    param_5[1] = uVar10;
    *param_5 = uVar9;
    param_5[2] = uVar6;
    pfVar1 = (float *)(param_3 + 2);
    if (*(char *)*param_6 != '\0') {
      pfVar1 = (float *)((long)param_3 + 0x14);
      pfVar7 = (float *)((long)param_4 + 0x14);
    }
    if (*pfVar7 < *pfVar1) {
      uVar8 = *param_4;
      uVar5 = param_4[2];
      uVar10 = param_3[1];
      uVar9 = *param_3;
      pfVar7 = (float *)(param_3 + 2);
      uVar6 = *(undefined8 *)pfVar7;
      param_3[1] = param_4[1];
      *param_3 = uVar8;
      *(undefined8 *)pfVar7 = uVar5;
      param_4[1] = uVar10;
      *param_4 = uVar9;
      param_4[2] = uVar6;
      pfVar1 = (float *)(param_2 + 2);
      if (*(char *)*param_6 != '\0') {
        pfVar1 = (float *)((long)param_2 + 0x14);
        pfVar7 = (float *)((long)param_3 + 0x14);
      }
      if (*pfVar7 < *pfVar1) {
        uVar8 = *param_3;
        uVar5 = param_3[2];
        uVar10 = param_2[1];
        uVar9 = *param_2;
        pfVar7 = (float *)(param_2 + 2);
        uVar6 = *(undefined8 *)pfVar7;
        param_2[1] = param_3[1];
        *param_2 = uVar8;
        *(undefined8 *)pfVar7 = uVar5;
        param_3[1] = uVar10;
        *param_3 = uVar9;
        param_3[2] = uVar6;
        pfVar1 = (float *)(param_1 + 2);
        if (*(char *)*param_6 != '\0') {
          pfVar1 = (float *)((long)param_1 + 0x14);
          pfVar7 = (float *)((long)param_2 + 0x14);
        }
        if (*pfVar7 < *pfVar1) {
          uVar8 = *param_2;
          uVar5 = param_2[2];
          uVar10 = param_1[1];
          uVar9 = *param_1;
          uVar6 = param_1[2];
          param_1[1] = param_2[1];
          *param_1 = uVar8;
          param_1[2] = uVar5;
          param_2[1] = uVar10;
          *param_2 = uVar9;
          param_2[2] = uVar6;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e0d20  FUN_004e0d20 =====

void FUN_004e0d20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  char *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar2 = tpidr_el0;
  uVar8 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  lVar10 = *(long *)(lVar2 + 0x28);
  if ((long)uVar8 < 3) {
    if (1 < uVar8) {
      if (uVar8 == 2) {
        pfVar1 = (float *)(param_1 + 2);
        pfVar3 = (float *)(param_2 + -1);
        if (*(char *)*param_3 != '\0') {
          pfVar1 = (float *)((long)param_1 + 0x14);
          pfVar3 = (float *)((long)param_2 + -4);
        }
        if (*pfVar3 < *pfVar1) {
          uVar20 = param_2[-3];
          uVar9 = param_2[-1];
          uVar23 = param_1[1];
          uVar22 = *param_1;
          uVar11 = param_1[2];
          param_1[1] = param_2[-2];
          *param_1 = uVar20;
          param_1[2] = uVar9;
          bVar7 = true;
          param_2[-2] = uVar23;
          param_2[-3] = uVar22;
          param_2[-1] = uVar11;
          goto LAB_004e1028;
        }
      }
      else {
LAB_004e0e14:
        FUN_004e08e0(param_1,param_1 + 3,param_1 + 6,param_3);
        if (param_1 + 9 != param_2) {
          pcVar15 = (char *)*param_3;
          lVar13 = 0;
          iVar14 = 0;
          puVar17 = param_1 + 9;
          puVar18 = param_1 + 6;
          do {
            puVar12 = puVar17;
            fVar19 = *(float *)(puVar12 + 2);
            fVar21 = *(float *)((long)puVar12 + 0x14);
            pfVar1 = (float *)(puVar18 + 2);
            fVar4 = fVar19;
            if (*pcVar15 != '\0') {
              pfVar1 = (float *)((long)puVar18 + 0x14);
              fVar4 = fVar21;
            }
            if (fVar4 < *pfVar1) {
              uVar11 = puVar12[1];
              uVar9 = *puVar12;
              lVar6 = lVar13;
              do {
                lVar16 = lVar6;
                *(undefined8 *)((long)param_1 + lVar16 + 0x50) =
                     *(undefined8 *)((long)param_1 + lVar16 + 0x38);
                *(undefined8 *)((long)param_1 + lVar16 + 0x48) =
                     *(undefined8 *)((long)param_1 + lVar16 + 0x30);
                *(undefined8 *)((long)param_1 + lVar16 + 0x58) =
                     *(undefined8 *)((long)param_1 + lVar16 + 0x40);
                puVar17 = param_1;
                if (lVar16 == -0x30) goto LAB_004e0ef4;
                fVar4 = fVar19;
                lVar5 = lVar16 + 0x28;
                if (*(char *)*param_3 != '\0') {
                  fVar4 = fVar21;
                  lVar5 = lVar16 + 0x2c;
                }
                lVar6 = lVar16 + -0x18;
              } while (fVar4 < *(float *)((long)param_1 + lVar5));
              puVar17 = (undefined8 *)((long)param_1 + lVar16 + 0x30);
LAB_004e0ef4:
              iVar14 = iVar14 + 1;
              *(float *)(puVar17 + 2) = fVar19;
              *(float *)((long)puVar17 + 0x14) = fVar21;
              puVar17[1] = uVar11;
              *puVar17 = uVar9;
              if (iVar14 == 8) {
                bVar7 = puVar12 + 3 == param_2;
                goto LAB_004e1028;
              }
              pcVar15 = (char *)*param_3;
            }
            lVar13 = lVar13 + 0x18;
            puVar17 = puVar12 + 3;
            puVar18 = puVar12;
          } while (puVar12 + 3 != param_2);
        }
      }
    }
  }
  else if (uVar8 == 3) {
    FUN_004e08e0(param_1,param_1 + 3,param_2 + -3,param_3);
  }
  else if (uVar8 == 4) {
    FUN_004e08e0(param_1,param_1 + 3,param_1 + 6,param_3);
    pfVar1 = (float *)(param_1 + 8);
    pfVar3 = (float *)(param_2 + -1);
    if (*(char *)*param_3 != '\0') {
      pfVar1 = (float *)((long)param_1 + 0x44);
      pfVar3 = (float *)((long)param_2 + -4);
    }
    if (*pfVar3 < *pfVar1) {
      uVar20 = param_2[-3];
      uVar9 = param_2[-1];
      uVar23 = param_1[7];
      uVar22 = param_1[6];
      uVar11 = param_1[8];
      param_1[7] = param_2[-2];
      param_1[6] = uVar20;
      param_1[8] = uVar9;
      param_2[-2] = uVar23;
      param_2[-3] = uVar22;
      param_2[-1] = uVar11;
      pfVar1 = (float *)(param_1 + 5);
      pfVar3 = (float *)(param_1 + 8);
      if (*(char *)*param_3 != '\0') {
        pfVar1 = (float *)((long)param_1 + 0x2c);
        pfVar3 = (float *)((long)param_1 + 0x44);
      }
      if (*pfVar3 < *pfVar1) {
        uVar20 = param_1[4];
        uVar11 = param_1[3];
        uVar9 = param_1[5];
        param_1[4] = param_1[7];
        param_1[3] = param_1[6];
        param_1[5] = param_1[8];
        param_1[7] = uVar20;
        param_1[6] = uVar11;
        param_1[8] = uVar9;
        pfVar1 = (float *)(param_1 + 2);
        pfVar3 = (float *)(param_1 + 5);
        if (*(char *)*param_3 != '\0') {
          pfVar1 = (float *)((long)param_1 + 0x14);
          pfVar3 = (float *)((long)param_1 + 0x2c);
        }
        if (*pfVar3 < *pfVar1) {
          bVar7 = true;
          uVar20 = param_1[1];
          uVar11 = *param_1;
          uVar9 = param_1[2];
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[4] = uVar20;
          param_1[3] = uVar11;
          param_1[5] = uVar9;
          goto LAB_004e1028;
        }
      }
    }
  }
  else {
    if (uVar8 != 5) goto LAB_004e0e14;
    FUN_004e0a74(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3,param_3);
  }
  bVar7 = true;
LAB_004e1028:
  if (*(long *)(lVar2 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar7);
  }
  return;
}


// ===== 004e1064  rive::RectanglesToContour::reset =====

/* rive::RectanglesToContour::reset() */

void __thiscall rive::RectanglesToContour::reset(RectanglesToContour *this)

{
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
  return;
}


// ===== 004e1070  rive::RectanglesToContour::addRect =====

/* rive::RectanglesToContour::addRect(rive::AABB const&) */

void __thiscall rive::RectanglesToContour::addRect(RectanglesToContour *this,AABB *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  puVar8 = *(undefined8 **)(this + 0x90);
  puVar9 = *(undefined8 **)(this + 0x98);
  if ((((puVar8 == puVar9) ||
       (fVar14 = *(float *)((long)puVar9 - 0xc), fVar14 != *(float *)(param_1 + 4))) ||
      (fVar13 = *(float *)((long)puVar9 - 4), fVar13 != *(float *)(param_1 + 0xc))) ||
     (*(float *)(puVar9 + -1) != *(float *)param_1)) {
    if (puVar9 < *(undefined8 **)(this + 0xa0)) {
      uVar12 = *(undefined8 *)param_1;
      puVar10 = puVar9 + 2;
      puVar9[1] = *(undefined8 *)(param_1 + 8);
      *puVar9 = uVar12;
LAB_004e11b4:
      *(undefined8 **)(this + 0x98) = puVar10;
      return;
    }
    lVar11 = (long)puVar9 - (long)puVar8 >> 4;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3c == 0) {
      uVar4 = (long)*(undefined8 **)(this + 0xa0) - (long)puVar8;
      uVar7 = (long)uVar4 >> 3;
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      if (0x7fffffffffffffef < uVar4) {
        uVar7 = 0xfffffffffffffff;
      }
      if (uVar7 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar7 >> 0x3c != 0) goto LAB_004e1284;
        pvVar3 = operator_new(uVar7 << 4);
      }
      puVar5 = (undefined8 *)((long)pvVar3 + lVar11 * 0x10);
      uVar12 = *(undefined8 *)param_1;
      puVar10 = puVar5 + 2;
      puVar5[1] = *(undefined8 *)(param_1 + 8);
      *puVar5 = uVar12;
      if (puVar8 != puVar9) {
        do {
          puVar2 = puVar9 + -1;
          uVar12 = puVar9[-2];
          puVar9 = puVar9 + -2;
          puVar5[-1] = *puVar2;
          puVar5[-2] = uVar12;
          puVar5 = puVar5 + -2;
        } while (puVar9 != puVar8);
        puVar8 = *(undefined8 **)(this + 0x90);
      }
      *(undefined8 **)(this + 0x90) = puVar5;
      *(undefined8 **)(this + 0x98) = puVar10;
      *(void **)(this + 0xa0) = (void *)((long)pvVar3 + uVar7 * 0x10);
      if (puVar8 != (undefined8 *)0x0) {
        operator_delete(puVar8);
      }
      goto LAB_004e11b4;
    }
  }
  else {
    puVar5 = puVar9 + -2;
    uVar15 = *(undefined4 *)(param_1 + 8);
    uVar16 = *(undefined4 *)puVar5;
    *(undefined8 **)(this + 0x98) = puVar5;
    if (puVar5 < *(undefined8 **)(this + 0xa0)) {
      *(undefined4 *)(puVar9 + -2) = uVar16;
      *(float *)((long)puVar9 - 0xc) = fVar14;
      *(undefined4 *)(puVar9 + -1) = uVar15;
      *(float *)((long)puVar9 - 4) = fVar13;
      puVar10 = puVar9;
      goto LAB_004e11b4;
    }
    lVar11 = (long)puVar5 - (long)puVar8 >> 4;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3c == 0) {
      uVar4 = (long)*(undefined8 **)(this + 0xa0) - (long)puVar8;
      uVar7 = (long)uVar4 >> 3;
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      if (0x7fffffffffffffef < uVar4) {
        uVar7 = 0xfffffffffffffff;
      }
      if (uVar7 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar7 >> 0x3c != 0) goto LAB_004e1284;
        pvVar3 = operator_new(uVar7 << 4);
      }
      puVar6 = (undefined4 *)((long)pvVar3 + lVar11 * 0x10);
      pvVar3 = (void *)((long)pvVar3 + uVar7 * 0x10);
      puVar10 = (undefined8 *)(puVar6 + 4);
      *puVar6 = uVar16;
      puVar6[1] = fVar14;
      puVar6[2] = uVar15;
      puVar6[3] = fVar13;
      if (puVar5 == puVar8) {
        *(undefined4 **)(this + 0x90) = puVar6;
        *(undefined8 **)(this + 0x98) = puVar10;
        *(void **)(this + 0xa0) = pvVar3;
      }
      else {
        do {
          puVar9 = puVar5 + -1;
          uVar12 = puVar5[-2];
          puVar5 = puVar5 + -2;
          *(undefined8 *)(puVar6 + -2) = *puVar9;
          *(undefined8 *)(puVar6 + -4) = uVar12;
          puVar6 = puVar6 + -4;
        } while (puVar5 != puVar8);
        puVar8 = *(undefined8 **)(this + 0x90);
        *(undefined4 **)(this + 0x90) = puVar6;
        *(undefined8 **)(this + 0x98) = puVar10;
        *(void **)(this + 0xa0) = pvVar3;
        if (puVar8 == (undefined8 *)0x0) goto LAB_004e11b4;
      }
      operator_delete(puVar8);
      goto LAB_004e11b4;
    }
  }
  FUN_004caee0();
LAB_004e1284:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 004e1288  extractPolygons =====

/* extractPolygons(std::__ndk1::vector<rive::ContourPoint,
   std::__ndk1::allocator<rive::ContourPoint> >&, std::__ndk1::vector<unsigned long,
   std::__ndk1::allocator<unsigned long> >&, std::__ndk1::unordered_map<rive::Vec2D, rive::Vec2D,
   std::__ndk1::hash<rive::Vec2D>, std::__ndk1::equal_to<rive::Vec2D>,
   std::__ndk1::allocator<std::__ndk1::pair<rive::Vec2D const, rive::Vec2D> > >&,
   std::__ndk1::unordered_map<rive::Vec2D, rive::Vec2D, std::__ndk1::hash<rive::Vec2D>,
   std::__ndk1::equal_to<rive::Vec2D>, std::__ndk1::allocator<std::__ndk1::pair<rive::Vec2D const,
   rive::Vec2D> > >&) */

void extractPolygons(vector *param_1,vector *param_2,unordered_map *param_3,unordered_map *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  float *pfVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  undefined8 *puVar25;
  long *plVar26;
  float *pfVar27;
  ulong uVar28;
  float *pfVar29;
  long lVar30;
  float fVar31;
  float extraout_s0;
  float fVar32;
  float fVar33;
  undefined2 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  ulong local_80;
  
  if (*(long *)(param_3 + 0x18) == 0) {
    return;
  }
  lVar4 = *(long *)param_1;
  lVar30 = *(long *)(param_1 + 8);
LAB_004e12d8:
  fVar36 = *(float *)(*(long *)(param_3 + 0x10) + 0x10);
  fVar38 = *(float *)(*(long *)(param_3 + 0x10) + 0x14);
  fVar33 = fVar38;
  FUN_004e1990(fVar36,param_3);
  pfVar24 = *(float **)(param_1 + 8);
  if (pfVar24 < *(float **)(param_1 + 0x10)) {
    *pfVar24 = fVar36;
    pfVar24[1] = fVar38;
    pfVar29 = pfVar24 + 3;
    pfVar24[2] = 0.0;
LAB_004e13e0:
    *(float **)(param_1 + 8) = pfVar29;
    lVar7 = lVar30 - lVar4 >> 2;
    fVar33 = pfVar29[-1];
    uVar8 = (ulong)(uint)pfVar29[-3];
    uVar16 = (ulong)(uint)pfVar29[-2];
    uVar28 = lVar7 * -0x5555555555555555;
LAB_004e1400:
    fVar31 = (float)uVar8;
    fVar32 = (float)uVar16;
    uVar15 = 0;
    if (fVar31 != 0.0) {
      uVar15 = uVar8;
    }
    uVar8 = 0;
    if (fVar32 != 0.0) {
      uVar8 = uVar16 << 1;
    }
    uVar8 = uVar8 ^ uVar15;
    if (fVar33 == 0.0) {
      uVar15 = *(ulong *)(param_4 + 8);
      if (uVar15 != 0) {
        uVar35 = NEON_cnt(uVar15,1);
        uVar34 = NEON_uaddlv(uVar35,1);
        uVar17 = CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) & 0xffffffff;
        if (uVar17 < 2) {
          uVar22 = uVar8 & uVar15 + 0x1ffffffff;
        }
        else {
          uVar22 = uVar8;
          if (uVar15 <= uVar8) {
            uVar22 = 0;
            if (uVar15 != 0) {
              uVar22 = uVar8 / uVar15;
            }
            uVar22 = uVar8 - uVar22 * uVar15;
          }
        }
        plVar18 = *(long **)(*(long *)param_4 + uVar22 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          do {
            uVar20 = plVar18[1];
            if (uVar20 == uVar8) {
              if ((*(float *)(plVar18 + 2) == fVar31) &&
                 (*(float *)((long)plVar18 + 0x14) == fVar32)) goto LAB_004e15cc;
            }
            else {
              if (uVar17 < 2) {
                uVar20 = uVar20 & uVar15 - 1;
              }
              else if (uVar15 <= uVar20) {
                uVar2 = 0;
                if (uVar15 != 0) {
                  uVar2 = uVar20 / uVar15;
                }
                uVar20 = uVar20 - uVar2 * uVar15;
              }
              if (uVar20 != uVar22) break;
            }
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) break;
          } while( true );
        }
      }
    }
    else {
      uVar15 = *(ulong *)(param_3 + 8);
      if (uVar15 != 0) {
        uVar35 = NEON_cnt(uVar15,1);
        uVar34 = NEON_uaddlv(uVar35,1);
        uVar17 = CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) & 0xffffffff;
        if (uVar17 < 2) {
          uVar22 = uVar8 & uVar15 + 0x1ffffffff;
        }
        else {
          uVar22 = uVar8;
          if (uVar15 <= uVar8) {
            uVar22 = 0;
            if (uVar15 != 0) {
              uVar22 = uVar8 / uVar15;
            }
            uVar22 = uVar8 - uVar22 * uVar15;
          }
        }
        plVar18 = *(long **)(*(long *)param_3 + uVar22 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          do {
            uVar20 = plVar18[1];
            if (uVar20 == uVar8) {
              if ((*(float *)(plVar18 + 2) == fVar31) &&
                 (*(float *)((long)plVar18 + 0x14) == fVar32)) goto LAB_004e1598;
            }
            else {
              if (uVar17 < 2) {
                uVar20 = uVar20 & uVar15 - 1;
              }
              else if (uVar15 <= uVar20) {
                uVar2 = 0;
                if (uVar15 != 0) {
                  uVar2 = uVar20 / uVar15;
                }
                uVar20 = uVar20 - uVar2 * uVar15;
              }
              if (uVar20 != uVar22) break;
            }
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) break;
          } while( true );
        }
      }
    }
    goto LAB_004e17b4;
  }
  pfVar27 = *(float **)param_1;
  lVar7 = (long)pfVar24 - (long)pfVar27 >> 2;
  uVar28 = lVar7 * -0x5555555555555555 + 1;
  if (uVar28 < 0x1555555555555556) {
    lVar6 = (long)*(float **)(param_1 + 0x10) - (long)pfVar27 >> 2;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar28 || uVar8 - uVar28 == 0) {
      uVar8 = uVar28;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0x1555555555555555;
    }
    if (uVar8 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < uVar8) goto LAB_004e1984;
      pvVar5 = operator_new(uVar8 * 0xc);
    }
    pfVar29 = (float *)((long)pvVar5 + lVar7 * 4);
    *pfVar29 = fVar36;
    pfVar29[1] = fVar38;
    pfVar29[2] = 0.0;
    pfVar13 = pfVar29;
    pfVar14 = pfVar29;
    if (pfVar24 != pfVar27) {
      do {
        pfVar23 = pfVar24 + -3;
        fVar33 = pfVar24[-1];
        pfVar14 = pfVar13 + -3;
        *(undefined8 *)pfVar14 = *(undefined8 *)pfVar23;
        pfVar13[-1] = fVar33;
        pfVar13 = pfVar14;
        pfVar24 = pfVar23;
      } while (pfVar23 != pfVar27);
      pfVar24 = *(float **)param_1;
    }
    pfVar29 = pfVar29 + 3;
    *(float **)param_1 = pfVar14;
    *(float **)(param_1 + 8) = pfVar29;
    *(void **)(param_1 + 0x10) = (void *)((long)pvVar5 + uVar8 * 0xc);
    if (pfVar24 != (float *)0x0) {
      operator_delete(pfVar24);
    }
    goto LAB_004e13e0;
  }
LAB_004e1988:
  FUN_004e1b70();
  goto LAB_004e198c;
LAB_004e15cc:
  lVar4 = FUN_004e1b84(param_4,pfVar29 + -3);
  fVar33 = pfVar29[-2];
  uVar35 = *(undefined8 *)(lVar4 + 0x18);
  FUN_004e1990(pfVar29[-3],param_4);
  puVar11 = *(undefined8 **)(param_1 + 8);
  if (*(undefined8 **)(param_1 + 0x10) <= puVar11) {
    puVar25 = *(undefined8 **)param_1;
    lVar4 = (long)puVar11 - (long)puVar25 >> 2;
    uVar8 = lVar4 * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar8) goto LAB_004e1988;
    lVar30 = (long)*(undefined8 **)(param_1 + 0x10) - (long)puVar25 >> 2;
    local_80 = lVar30 * 0x5555555555555556;
    if (local_80 < uVar8 || local_80 - uVar8 == 0) {
      local_80 = uVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar30 * -0x5555555555555555)) {
      local_80 = 0x1555555555555555;
    }
    if (0x1555555555555555 < local_80) goto LAB_004e1984;
    local_80 = local_80 * 0xc;
    pvVar5 = operator_new(local_80);
    puVar1 = (undefined8 *)((long)pvVar5 + ((long)puVar11 - (long)puVar25));
    *puVar1 = uVar35;
    *(undefined4 *)((long)pvVar5 + lVar4 * 4 + 8) = 1;
    puVar9 = puVar1;
    while (puVar11 != puVar25) {
      uVar37 = *(undefined4 *)((long)puVar11 - 4);
      *(undefined8 *)((long)puVar9 + -0xc) = *(undefined8 *)((long)puVar11 - 0xcU);
      *(undefined4 *)((long)puVar9 + -4) = uVar37;
      puVar11 = (undefined8 *)((long)puVar11 - 0xcU);
      puVar9 = (undefined8 *)((long)puVar9 + -0xc);
    }
    goto LAB_004e1764;
  }
  *puVar11 = uVar35;
  pfVar29 = (float *)((long)puVar11 + 0xc);
  *(undefined4 *)(puVar11 + 1) = 1;
  goto LAB_004e1788;
LAB_004e1598:
  lVar4 = FUN_004e1b84(param_3,pfVar29 + -3);
  fVar33 = pfVar29[-2];
  uVar35 = *(undefined8 *)(lVar4 + 0x18);
  FUN_004e1990(pfVar29[-3],param_3);
  puVar11 = *(undefined8 **)(param_1 + 8);
  if (puVar11 < *(undefined8 **)(param_1 + 0x10)) {
    *puVar11 = uVar35;
    pfVar29 = (float *)((long)puVar11 + 0xc);
    *(undefined4 *)(puVar11 + 1) = 0;
  }
  else {
    puVar25 = *(undefined8 **)param_1;
    lVar4 = (long)puVar11 - (long)puVar25 >> 2;
    uVar8 = lVar4 * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar8) goto LAB_004e1988;
    lVar30 = (long)*(undefined8 **)(param_1 + 0x10) - (long)puVar25 >> 2;
    local_80 = lVar30 * 0x5555555555555556;
    if (local_80 < uVar8 || local_80 - uVar8 == 0) {
      local_80 = uVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar30 * -0x5555555555555555)) {
      local_80 = 0x1555555555555555;
    }
    if (0x1555555555555555 < local_80) goto LAB_004e1984;
    local_80 = local_80 * 0xc;
    pvVar5 = operator_new(local_80);
    puVar1 = (undefined8 *)((long)pvVar5 + ((long)puVar11 - (long)puVar25));
    *puVar1 = uVar35;
    *(undefined4 *)((long)pvVar5 + lVar4 * 4 + 8) = 0;
    puVar9 = puVar1;
    while (puVar11 != puVar25) {
      uVar37 = *(undefined4 *)((long)puVar11 - 4);
      *(undefined8 *)((long)puVar9 + -0xc) = *(undefined8 *)((long)puVar11 - 0xcU);
      *(undefined4 *)((long)puVar9 + -4) = uVar37;
      puVar11 = (undefined8 *)((long)puVar11 - 0xcU);
      puVar9 = (undefined8 *)((long)puVar9 + -0xc);
    }
LAB_004e1764:
    pfVar29 = (float *)((long)puVar1 + 0xc);
    *(undefined8 **)param_1 = puVar9;
    *(float **)(param_1 + 8) = pfVar29;
    *(ulong *)(param_1 + 0x10) = (long)pvVar5 + local_80;
    if (puVar25 != (undefined8 *)0x0) {
      operator_delete(puVar25);
    }
  }
LAB_004e1788:
  fVar31 = pfVar29[-3];
  uVar8 = (ulong)(uint)fVar31;
  *(float **)(param_1 + 8) = pfVar29;
  uVar16 = (ulong)(uint)pfVar29[-2];
  fVar33 = pfVar29[-1];
  if (((fVar36 != fVar31) || (fVar38 != pfVar29[-2])) || (fVar33 != 0.0)) goto LAB_004e1400;
  pfVar29 = pfVar29 + -3;
  *(float **)(param_1 + 8) = pfVar29;
LAB_004e17b4:
  fVar33 = (float)uVar16;
  lVar4 = ((long)pfVar29 - *(long *)param_1 >> 2) * -0x5555555555555555;
  plVar18 = *(long **)(param_2 + 8);
  if (plVar18 < *(long **)(param_2 + 0x10)) {
    plVar12 = plVar18 + 1;
    *plVar18 = lVar4;
    goto LAB_004e18f0;
  }
  plVar26 = *(long **)param_2;
  lVar30 = (long)plVar18 - (long)plVar26 >> 3;
  uVar8 = lVar30 + 1;
  if (uVar8 >> 0x3d != 0) {
LAB_004e198c:
    plVar18 = (long *)FUN_00341b10();
    uVar28 = 0;
    if (extraout_s0 != 0.0) {
      uVar28 = (ulong)(uint)extraout_s0;
    }
    uVar16 = plVar18[1];
    uVar8 = 0;
    if (fVar33 != 0.0) {
      uVar8 = (ulong)(uint)fVar33 << 1;
    }
    if (uVar16 == 0) {
      return;
    }
    uVar8 = uVar8 ^ uVar28;
    uVar35 = NEON_cnt(uVar16,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    uVar28 = CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) & 0xffffffff;
    if (uVar28 < 2) {
      uVar15 = uVar8 & uVar16 + 0x1ffffffff;
    }
    else {
      uVar15 = uVar8;
      if (uVar16 <= uVar8) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = uVar8 / uVar16;
        }
        uVar15 = uVar8 - uVar15 * uVar16;
      }
    }
    lVar4 = *plVar18;
    puVar11 = *(undefined8 **)(lVar4 + uVar15 * 8);
    if (puVar11 == (undefined8 *)0x0) {
      return;
    }
    plVar12 = (long *)*puVar11;
    if (plVar12 == (long *)0x0) {
      return;
    }
    uVar17 = uVar16 - 1;
    goto LAB_004e1a24;
  }
  uVar15 = (long)*(long **)(param_2 + 0x10) - (long)plVar26;
  uVar16 = (long)uVar15 >> 2;
  if (uVar16 <= uVar8) {
    uVar16 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar15) {
    uVar16 = 0x1fffffffffffffff;
  }
  if (uVar16 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar16 >> 0x3d != 0) {
LAB_004e1984:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar5 = operator_new(uVar16 << 3);
  }
  plVar10 = (long *)((long)pvVar5 + lVar30 * 8);
  plVar12 = plVar10 + 1;
  *plVar10 = lVar4;
  if ((long)plVar18 - (long)plVar26 != 0) {
    uVar8 = ((long)plVar18 - (long)plVar26) - 8;
    if ((0x37 < uVar8) &&
       (0x1f < (ulong)((long)plVar18 + (-((long)plVar18 - (long)plVar26) - (long)pvVar5)))) {
      plVar19 = plVar10 + -2;
      plVar21 = plVar18 + -2;
      uVar8 = (uVar8 >> 3) + 1;
      uVar17 = uVar8 & 0x3ffffffffffffffc;
      plVar18 = plVar18 + -uVar17;
      uVar15 = uVar17;
      do {
        plVar3 = plVar21 + -1;
        lVar6 = plVar21[-2];
        lVar30 = plVar21[1];
        lVar4 = *plVar21;
        uVar15 = uVar15 - 4;
        plVar21 = plVar21 + -4;
        plVar19[-1] = *plVar3;
        plVar19[-2] = lVar6;
        plVar19[1] = lVar30;
        *plVar19 = lVar4;
        plVar19 = plVar19 + -4;
      } while (uVar15 != 0);
      plVar10 = plVar10 + -uVar17;
      if (uVar8 == uVar17) goto LAB_004e18d0;
    }
    do {
      plVar18 = plVar18 + -1;
      plVar10 = plVar10 + -1;
      *plVar10 = *plVar18;
    } while (plVar18 != plVar26);
  }
LAB_004e18d0:
  *(long **)param_2 = plVar10;
  *(long **)(param_2 + 8) = plVar12;
  *(void **)(param_2 + 0x10) = (void *)((long)pvVar5 + uVar16 * 8);
  if (plVar26 != (long *)0x0) {
    operator_delete(plVar26);
  }
LAB_004e18f0:
  lVar4 = *(long *)param_1;
  lVar30 = *(long *)(param_1 + 8);
  *(long **)(param_2 + 8) = plVar12;
  if (uVar28 < (ulong)((lVar30 - lVar4 >> 2) * -0x5555555555555555)) {
    lVar7 = lVar7 * 4;
    do {
      uVar37 = *(undefined4 *)(lVar4 + lVar7);
      uVar39 = ((undefined4 *)(lVar4 + lVar7))[1];
      FUN_004e1990(uVar37,uVar39,param_3);
      FUN_004e1990(uVar37,uVar39,param_4);
      lVar4 = *(long *)param_1;
      lVar30 = *(long *)(param_1 + 8);
      uVar28 = uVar28 + 1;
      lVar7 = lVar7 + 0xc;
    } while (uVar28 < (ulong)((lVar30 - lVar4 >> 2) * -0x5555555555555555));
  }
  if (*(long *)(param_3 + 0x18) == 0) {
    return;
  }
  goto LAB_004e12d8;
LAB_004e1a24:
  uVar22 = plVar12[1];
  if (uVar22 == uVar8) {
    if ((*(float *)(plVar12 + 2) == extraout_s0) && (*(float *)((long)plVar12 + 0x14) == fVar33)) {
      if (uVar28 < 2) {
        uVar8 = uVar17 & uVar8;
      }
      else if (uVar16 <= uVar8) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = uVar8 / uVar16;
        }
        uVar8 = uVar8 - uVar15 * uVar16;
      }
      plVar26 = *(long **)(lVar4 + uVar8 * 8);
      do {
        plVar10 = plVar26;
        plVar26 = (long *)*plVar10;
      } while ((long *)*plVar10 != plVar12);
      if (plVar10 != plVar18 + 2) {
        uVar15 = plVar10[1];
        if (uVar28 < 2) {
          uVar15 = uVar15 & uVar17;
        }
        else if (uVar16 <= uVar15) {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = uVar15 / uVar16;
          }
          uVar15 = uVar15 - uVar22 * uVar16;
        }
        if (uVar15 == uVar8) goto LAB_004e1b10;
      }
      if (*plVar12 != 0) {
        uVar15 = *(ulong *)(*plVar12 + 8);
        if (uVar28 < 2) {
          uVar15 = uVar15 & uVar17;
        }
        else if (uVar16 <= uVar15) {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = uVar15 / uVar16;
          }
          uVar15 = uVar15 - uVar22 * uVar16;
        }
        if (uVar15 == uVar8) goto LAB_004e1b10;
      }
      *(undefined8 *)(lVar4 + uVar8 * 8) = 0;
LAB_004e1b10:
      lVar4 = *plVar12;
      if (lVar4 != 0) {
        uVar15 = *(ulong *)(lVar4 + 8);
        if (uVar28 < 2) {
          uVar15 = uVar15 & uVar17;
        }
        else if (uVar16 <= uVar15) {
          uVar28 = 0;
          if (uVar16 != 0) {
            uVar28 = uVar15 / uVar16;
          }
          uVar15 = uVar15 - uVar28 * uVar16;
        }
        if (uVar15 != uVar8) {
          *(long **)(*plVar18 + uVar15 * 8) = plVar10;
          lVar4 = *plVar12;
        }
      }
      lVar30 = plVar18[3];
      *plVar10 = lVar4;
      *plVar12 = 0;
      plVar18[3] = lVar30 + -1;
      operator_delete(plVar12);
      return;
    }
  }
  else {
    if (uVar28 < 2) {
      uVar22 = uVar22 & uVar17;
    }
    else if (uVar16 <= uVar22) {
      uVar20 = 0;
      if (uVar16 != 0) {
        uVar20 = uVar22 / uVar16;
      }
      uVar22 = uVar22 - uVar20 * uVar16;
    }
    if (uVar22 != uVar15) {
      return;
    }
  }
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) {
    return;
  }
  goto LAB_004e1a24;
}


// ===== 004e1990  FUN_004e1990 =====

void FUN_004e1990(float param_1,float param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  uVar8 = 0;
  if (param_1 != 0.0) {
    uVar8 = (ulong)(uint)param_1;
  }
  uVar5 = param_3[1];
  uVar7 = 0;
  if (param_2 != 0.0) {
    uVar7 = (ulong)(uint)param_2 << 1;
  }
  if (uVar5 != 0) {
    uVar7 = uVar7 ^ uVar8;
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar8 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar8 < 2) {
      uVar13 = uVar7 & uVar5 + 0x1ffffffff;
    }
    else {
      uVar13 = uVar7;
      if (uVar5 <= uVar7) {
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar7 / uVar5;
        }
        uVar13 = uVar7 - uVar13 * uVar5;
      }
    }
    lVar9 = *param_3;
    puVar3 = *(undefined8 **)(lVar9 + uVar13 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
      uVar10 = uVar5 - 1;
      do {
        uVar11 = plVar4[1];
        if (uVar11 == uVar7) {
          if ((*(float *)(plVar4 + 2) == param_1) && (*(float *)((long)plVar4 + 0x14) == param_2)) {
            if (uVar8 < 2) {
              uVar7 = uVar10 & uVar7;
            }
            else if (uVar5 <= uVar7) {
              uVar13 = 0;
              if (uVar5 != 0) {
                uVar13 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar13 * uVar5;
            }
            plVar2 = *(long **)(lVar9 + uVar7 * 8);
            do {
              plVar12 = plVar2;
              plVar2 = (long *)*plVar12;
            } while ((long *)*plVar12 != plVar4);
            if (plVar12 != param_3 + 2) {
              uVar13 = plVar12[1];
              if (uVar8 < 2) {
                uVar13 = uVar13 & uVar10;
              }
              else if (uVar5 <= uVar13) {
                uVar11 = 0;
                if (uVar5 != 0) {
                  uVar11 = uVar13 / uVar5;
                }
                uVar13 = uVar13 - uVar11 * uVar5;
              }
              if (uVar13 == uVar7) goto LAB_004e1b10;
            }
            if (*plVar4 != 0) {
              uVar13 = *(ulong *)(*plVar4 + 8);
              if (uVar8 < 2) {
                uVar13 = uVar13 & uVar10;
              }
              else if (uVar5 <= uVar13) {
                uVar11 = 0;
                if (uVar5 != 0) {
                  uVar11 = uVar13 / uVar5;
                }
                uVar13 = uVar13 - uVar11 * uVar5;
              }
              if (uVar13 == uVar7) goto LAB_004e1b10;
            }
            *(undefined8 *)(lVar9 + uVar7 * 8) = 0;
LAB_004e1b10:
            lVar9 = *plVar4;
            if (lVar9 != 0) {
              uVar13 = *(ulong *)(lVar9 + 8);
              if (uVar8 < 2) {
                uVar13 = uVar13 & uVar10;
              }
              else if (uVar5 <= uVar13) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar13 / uVar5;
                }
                uVar13 = uVar13 - uVar8 * uVar5;
              }
              if (uVar13 != uVar7) {
                *(long **)(*param_3 + uVar13 * 8) = plVar12;
                lVar9 = *plVar4;
              }
            }
            lVar6 = param_3[3];
            *plVar12 = lVar9;
            *plVar4 = 0;
            param_3[3] = lVar6 + -1;
            operator_delete(plVar4);
            return;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar10;
          }
          else if (uVar5 <= uVar11) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar1 * uVar5;
          }
          if (uVar11 != uVar13) {
            return;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return;
}


// ===== 004e1b70  FUN_004e1b70 =====

void FUN_004e1b70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004e1b84  FUN_004e1b84 =====

void FUN_004e1b84(float param_1,float param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  float fVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  uVar14 = param_3[1];
  uVar8 = 0;
  if (param_1 != 0.0) {
    uVar8 = (ulong)(uint)param_1;
  }
  uVar13 = 0;
  if (param_2 != 0.0) {
    uVar13 = (ulong)(uint)param_2 << 1;
  }
  uVar13 = uVar13 ^ uVar8;
  if (uVar14 != 0) {
    uVar17 = NEON_cnt(uVar14,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar8 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x23 = uVar13 & uVar14 + 0x1ffffffff;
    }
    else {
      unaff_x23 = uVar13;
      if (uVar14 <= uVar13) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar13 / uVar14;
        }
        unaff_x23 = uVar13 - uVar10 * uVar14;
      }
    }
    plVar6 = *(long **)(*param_3 + unaff_x23 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar10 = plVar6[1];
        if (uVar10 == uVar13) {
          if ((*(float *)(plVar6 + 2) == param_1) && (*(float *)((long)plVar6 + 0x14) == param_2)) {
            return;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar14 - 1;
          }
          else if (uVar14 <= uVar10) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar10 / uVar14;
            }
            uVar10 = uVar10 - uVar5 * uVar14;
          }
          if (uVar10 != unaff_x23) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = (long *)operator_new(0x20);
  lVar3 = param_3[3];
  lVar7 = *param_4;
  fVar15 = *(float *)(param_3 + 4);
  *plVar6 = 0;
  plVar6[1] = uVar13;
  plVar6[2] = lVar7;
  plVar6[3] = 0;
  if ((uVar14 == 0) || (fVar15 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar8 = uVar8 | uVar14 << 1;
    uVar10 = (ulong)((float)(lVar3 + 1) / fVar15);
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__ndk1::__next_prime(uVar8);
      uVar14 = param_3[1];
    }
    if (uVar14 < uVar8) {
LAB_004e1d20:
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar8 << 3);
      pvVar4 = (void *)*param_3;
      *param_3 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_3[1] = uVar8;
      do {
        *(undefined8 *)(*param_3 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar8 != uVar14);
      plVar9 = (long *)param_3[2];
      uVar14 = uVar8;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar17 = NEON_cnt(uVar8,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar5 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar8 - 1;
        }
        else if (uVar8 <= uVar10) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar12 * uVar8;
        }
        *(long **)(*param_3 + uVar10 * 8) = param_3 + 2;
        plVar11 = (long *)*plVar9;
        if (plVar11 != (long *)0x0) {
          do {
            uVar12 = plVar11[1];
            if (uVar5 < 2) {
              uVar12 = uVar12 & uVar8 - 1;
            }
            else if (uVar8 <= uVar12) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar1 * uVar8;
            }
            if (uVar12 != uVar10) {
              if (*(long *)(*param_3 + uVar12 * 8) == 0) {
                *(long **)(*param_3 + uVar12 * 8) = plVar9;
                uVar10 = uVar12;
              }
              else {
                *plVar9 = *plVar11;
                *plVar11 = **(long **)(*param_3 + uVar12 * 8);
                **(undefined8 **)(*param_3 + uVar12 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar9 = plVar11;
            plVar11 = (long *)*plVar9;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    else if (uVar8 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
      if (uVar14 < 3) {
LAB_004e1f54:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar17 = NEON_cnt(uVar14,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16)) goto LAB_004e1f54;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar14) {
        if (uVar8 != 0) goto LAB_004e1d20;
        pvVar2 = (void *)*param_3;
        *param_3 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_3[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_3[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x23 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x23 = uVar13 - uVar8 * uVar14;
      }
    }
  }
  lVar3 = *param_3;
  plVar9 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_3 + 2;
    lVar7 = *plVar9;
    *plVar9 = (long)plVar6;
    *plVar6 = lVar7;
    *(long **)(lVar3 + unaff_x23 * 8) = plVar9;
    if (*plVar6 == 0) goto LAB_004e1f34;
    uVar8 = *(ulong *)(*plVar6 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar8 = uVar8 & uVar14 - 1;
    }
    else if (uVar14 <= uVar8) {
      uVar13 = 0;
      if (uVar14 != 0) {
        uVar13 = uVar8 / uVar14;
      }
      uVar8 = uVar8 - uVar13 * uVar14;
    }
    plVar9 = (long *)(*param_3 + uVar8 * 8);
  }
  else {
    *plVar6 = *plVar9;
  }
  *plVar9 = (long)plVar6;
LAB_004e1f34:
  param_3[3] = param_3[3] + 1;
  return;
}


// ===== 004e1fb0  rive::RectanglesToContour::computeContours =====

/* rive::RectanglesToContour::computeContours() */

void __thiscall rive::RectanglesToContour::computeContours(RectanglesToContour *this)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  
  subdivideRectangles(this);
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar14 = *(undefined8 **)(this + 0xa8); puVar14 != puVar1; puVar14 = puVar14 + 2) {
    uVar22 = *puVar14;
    uVar25 = (undefined4)((ulong)uVar22 >> 0x20);
    uVar3 = FUN_004e25c0(uVar22,uVar25,this + 0x68,uVar22);
    if ((uVar3 & 1) == 0) {
      FUN_004e29c8(uVar22,uVar25,this + 0x68);
    }
    uVar23 = *(undefined8 *)((long)puVar14 + 4);
    uVar22 = NEON_rev64(uVar23,4);
    uVar25 = (undefined4)((ulong)uVar23 >> 0x20);
    uVar3 = FUN_004e25c0(uVar25,this + 0x68,uVar22);
    if ((uVar3 & 1) == 0) {
      FUN_004e29c8(uVar25,uVar23,this + 0x68);
    }
    uVar22 = puVar14[1];
    uVar25 = (undefined4)((ulong)uVar22 >> 0x20);
    uVar3 = FUN_004e25c0(uVar22,uVar25,this + 0x68,uVar22);
    if ((uVar3 & 1) == 0) {
      FUN_004e29c8(uVar22,uVar25,this + 0x68);
    }
    uVar25 = *(undefined4 *)puVar14;
    uVar27 = *(undefined4 *)((long)puVar14 + 0xc);
    uVar3 = FUN_004e25c0(uVar25,uVar27,this + 0x68,CONCAT44(uVar27,uVar25));
    if ((uVar3 & 1) == 0) {
      FUN_004e29c8(uVar25,uVar27,this + 0x68);
    }
  }
  lVar5 = *(long *)(this + 0xd8);
  plVar18 = *(long **)(this + 0x78);
  *(long *)(this + 0xe0) = lVar5;
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0xf0);
  lVar19 = lVar5;
  if (plVar18 != (long *)0x0) {
    do {
      plVar17 = *(long **)(this + 0xe0);
      lVar5 = plVar18[2];
      if (plVar17 < *(long **)(this + 0xe8)) {
        plVar8 = plVar17 + 1;
        *plVar17 = lVar5;
      }
      else {
        plVar15 = *(long **)(this + 0xd8);
        lVar19 = (long)plVar17 - (long)plVar15 >> 3;
        uVar3 = lVar19 + 1;
        if (uVar3 >> 0x3d != 0) goto LAB_004e25b8;
        uVar7 = (long)*(long **)(this + 0xe8) - (long)plVar15;
        uVar10 = (long)uVar7 >> 2;
        if (uVar10 <= uVar3) {
          uVar10 = uVar3;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar10 >> 0x3d != 0) goto LAB_004e25bc;
          pvVar4 = operator_new(uVar10 << 3);
        }
        plVar16 = (long *)((long)pvVar4 + lVar19 * 8);
        plVar8 = plVar16 + 1;
        *plVar16 = lVar5;
        if ((long)plVar17 - (long)plVar15 != 0) {
          uVar3 = ((long)plVar17 - (long)plVar15) - 8;
          plVar20 = plVar17;
          if ((0x37 < uVar3) &&
             (0x1f < (ulong)((long)plVar17 + (-((long)plVar17 - (long)plVar15) - (long)pvVar4)))) {
            plVar12 = plVar16 + -2;
            plVar13 = plVar17 + -2;
            uVar3 = (uVar3 >> 3) + 1;
            uVar11 = uVar3 & 0x3ffffffffffffffc;
            plVar20 = plVar17 + -uVar11;
            uVar7 = uVar11;
            do {
              plVar17 = plVar13 + -1;
              lVar24 = plVar13[-2];
              lVar9 = plVar13[1];
              lVar19 = *plVar13;
              uVar7 = uVar7 - 4;
              plVar13 = plVar13 + -4;
              plVar12[-1] = *plVar17;
              plVar12[-2] = lVar24;
              plVar12[1] = lVar9;
              *plVar12 = lVar19;
              plVar12 = plVar12 + -4;
            } while (uVar7 != 0);
            plVar16 = plVar16 + -uVar11;
            plVar17 = plVar15;
            if (uVar3 == uVar11) goto LAB_004e21f8;
          }
          do {
            plVar20 = plVar20 + -1;
            plVar16 = plVar16 + -1;
            *plVar16 = *plVar20;
          } while (plVar20 != plVar15);
          plVar17 = *(long **)(this + 0xd8);
        }
LAB_004e21f8:
        *(long **)(this + 0xd8) = plVar16;
        *(long **)(this + 0xe0) = plVar8;
        *(void **)(this + 0xe8) = (void *)((long)pvVar4 + uVar10 * 8);
        if (plVar17 != (long *)0x0) {
          operator_delete(plVar17);
        }
      }
      plVar17 = *(long **)(this + 0xf8);
      *(long **)(this + 0xe0) = plVar8;
      if (plVar17 < *(long **)(this + 0x100)) {
        plVar15 = plVar17 + 1;
        *plVar17 = lVar5;
      }
      else {
        plVar16 = *(long **)(this + 0xf0);
        lVar19 = (long)plVar17 - (long)plVar16 >> 3;
        uVar3 = lVar19 + 1;
        if (uVar3 >> 0x3d != 0) {
LAB_004e25b8:
                    /* WARNING: Subroutine does not return */
          FUN_00371ef8();
        }
        uVar7 = (long)*(long **)(this + 0x100) - (long)plVar16;
        uVar10 = (long)uVar7 >> 2;
        if (uVar10 <= uVar3) {
          uVar10 = uVar3;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar10 >> 0x3d != 0) {
LAB_004e25bc:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar4 = operator_new(uVar10 << 3);
        }
        plVar8 = (long *)((long)pvVar4 + lVar19 * 8);
        plVar15 = plVar8 + 1;
        *plVar8 = lVar5;
        if ((long)plVar17 - (long)plVar16 != 0) {
          uVar3 = ((long)plVar17 - (long)plVar16) - 8;
          plVar20 = plVar17;
          if ((0x37 < uVar3) &&
             (0x1f < (ulong)((long)plVar17 + (-((long)plVar17 - (long)plVar16) - (long)pvVar4)))) {
            plVar12 = plVar8 + -2;
            plVar13 = plVar17 + -2;
            uVar3 = (uVar3 >> 3) + 1;
            uVar11 = uVar3 & 0x3ffffffffffffffc;
            plVar20 = plVar17 + -uVar11;
            uVar7 = uVar11;
            do {
              plVar17 = plVar13 + -1;
              lVar9 = plVar13[-2];
              lVar19 = plVar13[1];
              lVar5 = *plVar13;
              uVar7 = uVar7 - 4;
              plVar13 = plVar13 + -4;
              plVar12[-1] = *plVar17;
              plVar12[-2] = lVar9;
              plVar12[1] = lVar19;
              *plVar12 = lVar5;
              plVar12 = plVar12 + -4;
            } while (uVar7 != 0);
            plVar8 = plVar8 + -uVar11;
            plVar17 = plVar16;
            if (uVar3 == uVar11) goto LAB_004e2304;
          }
          do {
            plVar20 = plVar20 + -1;
            plVar8 = plVar8 + -1;
            *plVar8 = *plVar20;
          } while (plVar20 != plVar16);
          plVar17 = *(long **)(this + 0xf0);
        }
LAB_004e2304:
        *(long **)(this + 0xf0) = plVar8;
        *(long **)(this + 0xf8) = plVar15;
        *(void **)(this + 0x100) = (void *)((long)pvVar4 + uVar10 * 8);
        if (plVar17 != (long *)0x0) {
          operator_delete(plVar17);
        }
      }
      plVar18 = (long *)*plVar18;
      *(long **)(this + 0xf8) = plVar15;
    } while (plVar18 != (long *)0x0);
    lVar5 = *(long *)(this + 0xd8);
    lVar19 = *(long *)(this + 0xe0);
  }
  lVar9 = 0;
  if (lVar19 != lVar5) {
    lVar9 = LZCOUNT(lVar19 - lVar5 >> 3) * -2 + 0x7e;
  }
  FUN_004e2ba8(lVar5,lVar19,lVar9,1);
  lVar19 = *(long *)(this + 0xf0);
  lVar9 = *(long *)(this + 0xf8);
  lVar5 = 0;
  if (lVar9 != lVar19) {
    lVar5 = LZCOUNT(lVar9 - lVar19 >> 3) * -2 + 0x7e;
  }
  FUN_004e3504(lVar19,lVar9,lVar5,1);
  if (*(long *)(this + 0x30) != 0) {
    puVar14 = (undefined8 *)*(void **)(this + 0x28);
    while (puVar14 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar14;
      operator_delete(puVar14);
      puVar14 = (undefined8 *)pvVar4;
    }
    lVar5 = *(long *)(this + 0x20);
    *(undefined8 *)(this + 0x28) = 0;
    if (lVar5 != 0) {
      lVar19 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x18) + lVar19 * 8) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar5 != lVar19);
    }
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (*(long *)(this + 0x58) != 0) {
    puVar14 = (undefined8 *)*(void **)(this + 0x50);
    while (puVar14 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar14;
      operator_delete(puVar14);
      puVar14 = (undefined8 *)pvVar4;
    }
    lVar5 = *(long *)(this + 0x48);
    *(undefined8 *)(this + 0x50) = 0;
    if (lVar5 != 0) {
      lVar19 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x40) + lVar19 * 8) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar5 != lVar19);
    }
    *(undefined8 *)(this + 0x58) = 0;
  }
  lVar5 = *(long *)(this + 0xf0);
  lVar19 = *(long *)(this + 0xf8);
  if (lVar19 != lVar5) {
    uVar3 = 0;
    do {
      uVar10 = lVar19 - lVar5 >> 3;
      fVar26 = *(float *)(lVar5 + uVar3 * 8 + 4);
      bVar2 = true;
      if ((uVar3 < uVar10) && (bVar2 = true, !NAN(fVar26))) {
        bVar2 = false;
      }
      if (!bVar2) {
        lVar9 = uVar3 * 8 + 0x14;
        do {
          uVar3 = uVar3 + 2;
          lVar5 = lVar5 + lVar9;
          lVar19 = FUN_004e1b84(*(undefined4 *)(lVar5 + -0x14),*(undefined4 *)(lVar5 + -0x10),
                                this + 0x18,(undefined4 *)(lVar5 + -0x14));
          *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(lVar5 + -0xc);
          lVar5 = *(long *)(this + 0xf0) + lVar9;
          lVar19 = FUN_004e1b84(*(undefined4 *)(lVar5 + -0xc),*(undefined4 *)(lVar5 + -8),
                                this + 0x18,(undefined4 *)(lVar5 + -0xc));
          *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(lVar5 + -0x14);
          lVar5 = *(long *)(this + 0xf0);
          lVar19 = *(long *)(this + 0xf8);
          uVar10 = lVar19 - lVar5 >> 3;
          if (uVar10 <= uVar3) break;
          pfVar6 = (float *)(lVar5 + lVar9);
          lVar9 = lVar9 + 0x10;
        } while (*pfVar6 == fVar26);
      }
    } while (uVar3 < uVar10);
  }
  lVar5 = *(long *)(this + 0xd8);
  lVar19 = *(long *)(this + 0xe0);
  if (lVar19 != lVar5) {
    uVar3 = 0;
    do {
      pfVar6 = (float *)(lVar5 + uVar3 * 8);
      uVar10 = lVar19 - lVar5 >> 3;
      fVar26 = *pfVar6;
      bVar2 = true;
      if ((uVar3 < uVar10) && (bVar2 = true, !NAN(fVar26))) {
        bVar2 = false;
      }
      uVar7 = uVar3;
      if (!bVar2) {
        lVar9 = uVar3 * 8;
        fVar21 = fVar26;
        do {
          lVar9 = lVar9 + 0x10;
          uVar7 = uVar7 + 2;
          lVar19 = FUN_004e1b84(fVar21,pfVar6[1],this + 0x40);
          *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(lVar5 + lVar9 + -8);
          lVar5 = *(long *)(this + 0xd8) + lVar9;
          lVar19 = FUN_004e1b84(*(undefined4 *)(lVar5 + -8),*(undefined4 *)(lVar5 + -4),this + 0x40,
                                (undefined4 *)(lVar5 + -8));
          *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(lVar5 + -0x10);
          lVar5 = *(long *)(this + 0xd8);
          lVar19 = *(long *)(this + 0xe0);
          uVar10 = lVar19 - lVar5 >> 3;
          if (uVar10 <= uVar7) break;
          fVar21 = *(float *)(lVar5 + lVar9);
          uVar3 = uVar3 + 2;
          pfVar6 = (float *)(lVar5 + uVar3 * 8);
        } while (fVar21 == fVar26);
      }
      uVar3 = uVar7;
    } while (uVar3 < uVar10);
  }
  *(undefined8 *)(this + 0x110) = *(undefined8 *)(this + 0x108);
  *(undefined8 *)(this + 0x128) = *(undefined8 *)(this + 0x120);
  extractPolygons(this + 0x108,this + 0x120,(unordered_map *)(this + 0x18),
                  (unordered_map *)(this + 0x40));
  return;
}


// ===== 004e25c0  FUN_004e25c0 =====

undefined8 FUN_004e25c0(float param_1,float param_2,long *param_3,long param_4)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  float fVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  uVar14 = param_3[1];
  uVar8 = 0;
  if (param_1 != 0.0) {
    uVar8 = (ulong)(uint)param_1;
  }
  uVar13 = 0;
  if (param_2 != 0.0) {
    uVar13 = (ulong)(uint)param_2 << 1;
  }
  uVar13 = uVar13 ^ uVar8;
  if (uVar14 != 0) {
    uVar17 = NEON_cnt(uVar14,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar8 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x24 = uVar13 & uVar14 + 0x1ffffffff;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar10 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x24 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar13) {
          if ((*(float *)(plVar7 + 2) == param_1) && (*(float *)((long)plVar7 + 0x14) == param_2)) {
            return 0;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar14 - 1;
          }
          else if (uVar14 <= uVar10) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar10 / uVar14;
            }
            uVar10 = uVar10 - uVar5 * uVar14;
          }
          if (uVar10 != unaff_x24) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x18);
  lVar3 = param_3[3];
  fVar15 = *(float *)(param_3 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar13;
  plVar7[2] = param_4;
  if ((uVar14 == 0) || (fVar15 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar8 = uVar8 | uVar14 << 1;
    uVar10 = (ulong)((float)(lVar3 + 1) / fVar15);
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__ndk1::__next_prime(uVar8);
      uVar14 = param_3[1];
    }
    if (uVar14 < uVar8) {
LAB_004e2754:
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar8 << 3);
      pvVar4 = (void *)*param_3;
      *param_3 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_3[1] = uVar8;
      do {
        *(undefined8 *)(*param_3 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar8 != uVar14);
      plVar9 = (long *)param_3[2];
      uVar14 = uVar8;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar17 = NEON_cnt(uVar8,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar5 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar8 - 1;
        }
        else if (uVar8 <= uVar10) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar12 * uVar8;
        }
        *(long **)(*param_3 + uVar10 * 8) = param_3 + 2;
        plVar11 = (long *)*plVar9;
        if (plVar11 != (long *)0x0) {
          do {
            uVar12 = plVar11[1];
            if (uVar5 < 2) {
              uVar12 = uVar12 & uVar8 - 1;
            }
            else if (uVar8 <= uVar12) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar1 * uVar8;
            }
            if (uVar12 != uVar10) {
              if (*(long *)(*param_3 + uVar12 * 8) == 0) {
                *(long **)(*param_3 + uVar12 * 8) = plVar9;
                uVar10 = uVar12;
              }
              else {
                *plVar9 = *plVar11;
                *plVar11 = **(long **)(*param_3 + uVar12 * 8);
                **(undefined8 **)(*param_3 + uVar12 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar9 = plVar11;
            plVar11 = (long *)*plVar9;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    else if (uVar8 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
      if (uVar14 < 3) {
LAB_004e2988:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar17 = NEON_cnt(uVar14,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16)) goto LAB_004e2988;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar14) {
        if (uVar8 != 0) goto LAB_004e2754;
        pvVar2 = (void *)*param_3;
        *param_3 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_3[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_3[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar8 * uVar14;
      }
    }
  }
  lVar3 = *param_3;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_3 + 2;
    lVar6 = *plVar9;
    *plVar9 = (long)plVar7;
    *plVar7 = lVar6;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (lVar6 == 0) goto LAB_004e295c;
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar8 = uVar8 & uVar14 - 1;
    }
    else if (uVar14 <= uVar8) {
      uVar13 = 0;
      if (uVar14 != 0) {
        uVar13 = uVar8 / uVar14;
      }
      uVar8 = uVar8 - uVar13 * uVar14;
    }
    plVar9 = (long *)(*param_3 + uVar8 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_004e295c:
  param_3[3] = param_3[3] + 1;
  return 1;
}


// ===== 004e29c8  FUN_004e29c8 =====

void FUN_004e29c8(float param_1,float param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  uVar8 = 0;
  if (param_1 != 0.0) {
    uVar8 = (ulong)(uint)param_1;
  }
  uVar5 = param_3[1];
  uVar7 = 0;
  if (param_2 != 0.0) {
    uVar7 = (ulong)(uint)param_2 << 1;
  }
  if (uVar5 != 0) {
    uVar7 = uVar7 ^ uVar8;
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar8 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar8 < 2) {
      uVar13 = uVar7 & uVar5 + 0x1ffffffff;
    }
    else {
      uVar13 = uVar7;
      if (uVar5 <= uVar7) {
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar7 / uVar5;
        }
        uVar13 = uVar7 - uVar13 * uVar5;
      }
    }
    lVar9 = *param_3;
    puVar3 = *(undefined8 **)(lVar9 + uVar13 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
      uVar10 = uVar5 - 1;
      do {
        uVar11 = plVar4[1];
        if (uVar11 == uVar7) {
          if ((*(float *)(plVar4 + 2) == param_1) && (*(float *)((long)plVar4 + 0x14) == param_2)) {
            if (uVar8 < 2) {
              uVar7 = uVar10 & uVar7;
            }
            else if (uVar5 <= uVar7) {
              uVar13 = 0;
              if (uVar5 != 0) {
                uVar13 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar13 * uVar5;
            }
            plVar2 = *(long **)(lVar9 + uVar7 * 8);
            do {
              plVar12 = plVar2;
              plVar2 = (long *)*plVar12;
            } while ((long *)*plVar12 != plVar4);
            if (plVar12 != param_3 + 2) {
              uVar13 = plVar12[1];
              if (uVar8 < 2) {
                uVar13 = uVar13 & uVar10;
              }
              else if (uVar5 <= uVar13) {
                uVar11 = 0;
                if (uVar5 != 0) {
                  uVar11 = uVar13 / uVar5;
                }
                uVar13 = uVar13 - uVar11 * uVar5;
              }
              if (uVar13 == uVar7) goto LAB_004e2b48;
            }
            if (*plVar4 != 0) {
              uVar13 = *(ulong *)(*plVar4 + 8);
              if (uVar8 < 2) {
                uVar13 = uVar13 & uVar10;
              }
              else if (uVar5 <= uVar13) {
                uVar11 = 0;
                if (uVar5 != 0) {
                  uVar11 = uVar13 / uVar5;
                }
                uVar13 = uVar13 - uVar11 * uVar5;
              }
              if (uVar13 == uVar7) goto LAB_004e2b48;
            }
            *(undefined8 *)(lVar9 + uVar7 * 8) = 0;
LAB_004e2b48:
            lVar9 = *plVar4;
            if (lVar9 != 0) {
              uVar13 = *(ulong *)(lVar9 + 8);
              if (uVar8 < 2) {
                uVar13 = uVar13 & uVar10;
              }
              else if (uVar5 <= uVar13) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar13 / uVar5;
                }
                uVar13 = uVar13 - uVar8 * uVar5;
              }
              if (uVar13 != uVar7) {
                *(long **)(*param_3 + uVar13 * 8) = plVar12;
                lVar9 = *plVar4;
              }
            }
            lVar6 = param_3[3];
            *plVar12 = lVar9;
            *plVar4 = 0;
            param_3[3] = lVar6 + -1;
            operator_delete(plVar4);
            return;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar10;
          }
          else if (uVar5 <= uVar11) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar1 * uVar5;
          }
          if (uVar11 != uVar13) {
            return;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return;
}


// ===== 004e2ba8  FUN_004e2ba8 =====

void FUN_004e2ba8(float *param_1,float *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  do {
    pfVar9 = param_2 + -2;
    pfVar11 = param_1;
LAB_004e2bec:
    param_1 = pfVar11;
    uVar6 = (long)param_2 - (long)param_1 >> 3;
    if (uVar6 - 2 == 0 || (long)uVar6 < 2) {
      if (uVar6 < 2) {
        return;
      }
      if (uVar6 == 2) {
        if (*param_1 <= *pfVar9) {
          if (*pfVar9 != *param_1) {
            return;
          }
          if (param_1[1] <= param_2[-1]) {
            return;
          }
        }
        uVar8 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar9;
        *(undefined8 *)pfVar9 = uVar8;
        return;
      }
    }
    else {
      if (uVar6 == 3) {
        FUN_004e4404(param_1,param_1 + 2,pfVar9);
        return;
      }
      if (uVar6 == 4) {
        pfVar11 = param_1 + 4;
        FUN_004e4404(param_1,param_1 + 2,pfVar11);
        if (param_1[4] <= *pfVar9) {
          if (*pfVar9 != param_1[4]) {
            return;
          }
          if (param_1[5] <= param_2[-1]) {
            return;
          }
        }
        uVar8 = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = *(undefined8 *)pfVar9;
        *(undefined8 *)pfVar9 = uVar8;
        fVar19 = param_1[2];
        if (fVar19 <= *pfVar11) {
          if (*pfVar11 != fVar19) {
            return;
          }
          if (param_1[3] <= param_1[5]) {
            return;
          }
        }
        uVar8 = *(undefined8 *)(param_1 + 2);
        uVar5 = *(undefined8 *)(param_1 + 4);
        fVar20 = *param_1;
        fVar19 = (float)uVar5;
        *(undefined8 *)(param_1 + 2) = uVar5;
        *(undefined8 *)(param_1 + 4) = uVar8;
        if (fVar20 == fVar19 || fVar20 < fVar19 != (NAN(fVar20) || NAN(fVar19))) {
          if (fVar20 != fVar19) {
            return;
          }
          fVar20 = param_1[1];
          fVar19 = (float)((ulong)uVar5 >> 0x20);
          if (fVar20 == fVar19 || fVar20 < fVar19 != (NAN(fVar20) || NAN(fVar19))) {
            return;
          }
        }
        uVar8 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar5;
        *(undefined8 *)(param_1 + 2) = uVar8;
        return;
      }
      if (uVar6 == 5) {
        FUN_004e450c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar9);
        return;
      }
    }
    if ((long)uVar6 < 0x18) {
      pfVar11 = param_1 + 2;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || pfVar11 == param_2) {
          return;
        }
        break;
      }
      if (param_1 == param_2 || pfVar11 == param_2) {
        return;
      }
      lVar16 = 0;
      pfVar9 = param_1;
      goto LAB_004e3144;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar10 = uVar6 - 2 >> 1;
      uVar18 = uVar10;
      goto LAB_004e3200;
    }
    uVar18 = uVar6 >> 1;
    pfVar11 = param_1 + uVar18 * 2;
    if (uVar6 < 0x81) {
      FUN_004e4404(pfVar11,param_1,pfVar9);
    }
    else {
      FUN_004e4404(param_1,pfVar11,pfVar9);
      pfVar7 = param_1 + 2;
      pfVar12 = param_1 + uVar18 * 2;
      FUN_004e4404(pfVar7,pfVar12 + -2,param_2 + -4);
      FUN_004e4404(param_1 + 4,pfVar7 + uVar18 * 2,param_2 + -6);
      FUN_004e4404(pfVar12 + -2,pfVar11,pfVar7 + uVar18 * 2);
      uVar8 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)pfVar12;
      *(undefined8 *)pfVar12 = uVar8;
    }
    if ((param_4 & 1) == 0) {
      fVar19 = *param_1;
      if (fVar19 <= param_1[-2]) {
        if (param_1[-2] == fVar19) {
          fVar20 = param_1[1];
          if (param_1[-1] < fVar20) goto LAB_004e2cf0;
        }
        else {
          fVar20 = param_1[1];
        }
        fVar21 = *pfVar9;
        pfVar11 = param_1;
        if ((fVar21 != fVar19 && fVar21 < fVar19 == (NAN(fVar21) || NAN(fVar19))) ||
           ((fVar21 == fVar19 &&
            (fVar22 = param_2[-1],
            fVar22 != fVar20 && fVar22 < fVar20 == (NAN(fVar22) || NAN(fVar20)))))) {
          do {
            pfVar7 = pfVar11;
            pfVar11 = pfVar7 + 2;
            fVar22 = *pfVar11;
            if (fVar22 != fVar19 && fVar22 < fVar19 == (NAN(fVar22) || NAN(fVar19))) break;
          } while ((fVar22 != fVar19) ||
                  (fVar22 = pfVar7[3],
                  fVar22 == fVar20 || fVar22 < fVar20 != (NAN(fVar22) || NAN(fVar20))));
        }
        else {
          while (pfVar7 = pfVar11, pfVar11 = pfVar7 + 2, pfVar11 < param_2) {
            fVar22 = *pfVar11;
            if ((fVar22 != fVar19 && fVar22 < fVar19 == (NAN(fVar22) || NAN(fVar19))) ||
               ((fVar22 == fVar19 &&
                (fVar22 = pfVar7[3],
                fVar22 != fVar20 && fVar22 < fVar20 == (NAN(fVar22) || NAN(fVar20)))))) break;
          }
        }
        pfVar7 = param_2;
        pfVar12 = pfVar9;
        if (pfVar11 < param_2) {
          while ((pfVar7 = pfVar12,
                 fVar21 != fVar19 && fVar21 < fVar19 == (NAN(fVar21) || NAN(fVar19)) ||
                 ((fVar21 == fVar19 &&
                  (fVar21 = pfVar7[1],
                  fVar21 != fVar20 && fVar21 < fVar20 == (NAN(fVar21) || NAN(fVar20))))))) {
            fVar21 = pfVar7[-2];
            pfVar12 = pfVar7 + -2;
          }
        }
        while (pfVar11 < pfVar7) {
          uVar8 = *(undefined8 *)pfVar11;
          *(undefined8 *)pfVar11 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = uVar8;
          do {
            pfVar12 = pfVar11;
            pfVar11 = pfVar12 + 2;
            fVar21 = *pfVar11;
            if (fVar21 != fVar19 && fVar21 < fVar19 == (NAN(fVar21) || NAN(fVar19))) break;
          } while ((fVar21 != fVar19) ||
                  (fVar21 = pfVar12[3],
                  fVar21 == fVar20 || fVar21 < fVar20 != (NAN(fVar21) || NAN(fVar20))));
          do {
            do {
              pfVar12 = pfVar7;
              pfVar7 = pfVar12 + -2;
              fVar21 = *pfVar7;
            } while (fVar21 != fVar19 && fVar21 < fVar19 == (NAN(fVar21) || NAN(fVar19)));
          } while ((fVar21 == fVar19) &&
                  (fVar21 = pfVar12[-1],
                  fVar21 != fVar20 && fVar21 < fVar20 == (NAN(fVar21) || NAN(fVar20))));
        }
        if (pfVar11 + -2 != param_1) {
          *(undefined8 *)param_1 = *(undefined8 *)(pfVar11 + -2);
        }
        param_4 = 0;
        pfVar11[-2] = fVar19;
        pfVar11[-1] = fVar20;
        param_3 = param_3 + -1;
        goto LAB_004e2bec;
      }
    }
    else {
      fVar19 = *param_1;
    }
LAB_004e2cf0:
    param_3 = param_3 + -1;
    fVar20 = param_1[1];
    pfVar7 = param_1;
    do {
      do {
        pfVar11 = pfVar7;
        pfVar7 = pfVar11 + 2;
      } while (*pfVar7 < fVar19);
    } while ((*pfVar7 == fVar19) && (pfVar11[3] < fVar20));
    if (pfVar11 == param_1) {
      pfVar12 = param_2;
      if (pfVar7 < param_2) {
        fVar21 = *pfVar9;
        pfVar12 = pfVar9;
        while (fVar19 <= fVar21) {
          if (fVar21 == fVar19) {
            if ((pfVar12 <= pfVar7) || (pfVar12[1] < fVar20)) break;
          }
          else if (pfVar12 <= pfVar7) break;
          pfVar12 = pfVar12 + -2;
          fVar21 = *pfVar12;
        }
      }
    }
    else {
      fVar21 = *pfVar9;
      pfVar12 = pfVar9;
      while ((fVar19 <= fVar21 && ((fVar21 != fVar19 || (fVar20 <= pfVar12[1]))))) {
        pfVar12 = pfVar12 + -2;
        fVar21 = *pfVar12;
      }
    }
    pfVar13 = pfVar12;
    pfVar11 = pfVar7;
    if (pfVar7 < pfVar12) {
      do {
        uVar8 = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = *(undefined8 *)pfVar13;
        *(undefined8 *)pfVar13 = uVar8;
        do {
          do {
            pfVar14 = pfVar11;
            pfVar11 = pfVar14 + 2;
          } while (*pfVar11 < fVar19);
        } while ((*pfVar11 == fVar19) && (pfVar14[3] < fVar20));
        do {
          pfVar14 = pfVar13;
          pfVar13 = pfVar14 + -2;
          if (*pfVar13 < fVar19) break;
        } while ((*pfVar13 != fVar19) || (fVar20 <= pfVar14[-1]));
      } while (pfVar11 < pfVar13);
    }
    pfVar13 = pfVar11 + -2;
    if (pfVar13 != param_1) {
      *(undefined8 *)param_1 = *(undefined8 *)pfVar13;
    }
    pfVar11[-2] = fVar19;
    pfVar11[-1] = fVar20;
    if (pfVar7 < pfVar12) goto LAB_004e2e40;
    uVar6 = FUN_004e46b8(param_1,pfVar13);
    uVar18 = FUN_004e46b8(pfVar11,param_2);
    if ((uVar18 & 1) == 0) goto code_r0x004e2e3c;
    param_2 = pfVar13;
    if ((uVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_004e34a4:
  pfVar9 = pfVar11;
  fVar19 = param_1[2];
  if (*param_1 <= fVar19) {
    if ((fVar19 == *param_1) && (fVar20 = param_1[3], fVar20 < param_1[1])) goto LAB_004e34d8;
  }
  else {
    fVar20 = param_1[3];
LAB_004e34d8:
    do {
      do {
        pfVar11 = param_1;
        param_1 = pfVar11 + -2;
        fVar21 = *param_1;
        *(undefined8 *)(pfVar11 + 2) = *(undefined8 *)pfVar11;
      } while (fVar21 != fVar19 && fVar21 < fVar19 == (NAN(fVar21) || NAN(fVar19)));
    } while ((fVar21 == fVar19) &&
            (fVar21 = pfVar11[-1],
            fVar21 != fVar20 && fVar21 < fVar20 == (NAN(fVar21) || NAN(fVar20))));
    *pfVar11 = fVar19;
    pfVar11[1] = fVar20;
  }
  pfVar11 = pfVar9 + 2;
  param_1 = pfVar9;
  if (pfVar11 == param_2) {
    return;
  }
  goto LAB_004e34a4;
LAB_004e3144:
  fVar19 = pfVar9[2];
  if (*pfVar9 <= fVar19) {
    if ((fVar19 == *pfVar9) && (fVar20 = pfVar9[3], fVar20 < pfVar9[1])) goto LAB_004e3178;
  }
  else {
    fVar20 = pfVar9[3];
LAB_004e3178:
    *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)pfVar9;
    pfVar7 = param_1;
    lVar15 = lVar16;
    if (pfVar9 != param_1) {
      do {
        puVar2 = (undefined8 *)((long)param_1 + lVar15);
        fVar21 = *(float *)(puVar2 + -1);
        if (fVar21 == fVar19 || fVar21 < fVar19 != (NAN(fVar21) || NAN(fVar19))) {
          if (fVar21 != fVar19) {
            pfVar7 = (float *)((long)param_1 + lVar15);
            break;
          }
          fVar21 = *(float *)((long)param_1 + lVar15 + -4);
          pfVar7 = pfVar9;
          if (fVar21 == fVar20 || fVar21 < fVar20 != (NAN(fVar21) || NAN(fVar20))) break;
        }
        lVar15 = lVar15 + -8;
        pfVar9 = pfVar9 + -2;
        *puVar2 = puVar2[-1];
        pfVar7 = param_1;
      } while (lVar15 != 0);
    }
    *pfVar7 = fVar19;
    pfVar7[1] = fVar20;
  }
  pfVar7 = pfVar11 + 2;
  lVar16 = lVar16 + 8;
  pfVar9 = pfVar11;
  pfVar11 = pfVar7;
  if (pfVar7 == param_2) {
    return;
  }
  goto LAB_004e3144;
LAB_004e3200:
  do {
    if ((long)uVar18 <= (long)uVar10) {
      uVar17 = uVar18 << 1 | 1;
      uVar1 = uVar18 * 2 + 2;
      pfVar11 = param_1 + uVar17 * 2;
      if ((long)uVar1 < (long)uVar6) {
        fVar19 = pfVar11[2];
        if ((*pfVar11 < fVar19) || ((*pfVar11 == fVar19 && (pfVar11[1] < pfVar11[3])))) {
          pfVar11 = pfVar11 + 2;
          uVar17 = uVar1;
        }
      }
      pfVar9 = param_1 + uVar18 * 2;
      fVar19 = *pfVar9;
      if (fVar19 <= *pfVar11) {
        if (*pfVar11 == fVar19) {
          fVar20 = pfVar9[1];
          if (pfVar11[1] < fVar20) goto LAB_004e31f8;
        }
        else {
          fVar20 = pfVar9[1];
        }
        *(undefined8 *)pfVar9 = *(undefined8 *)pfVar11;
        while ((long)uVar17 <= (long)uVar10) {
          uVar3 = uVar17 << 1 | 1;
          uVar1 = uVar17 * 2 + 2;
          pfVar9 = param_1 + uVar3 * 2;
          uVar17 = uVar3;
          if ((long)uVar1 < (long)uVar6) {
            fVar21 = pfVar9[2];
            if ((*pfVar9 < fVar21) || ((*pfVar9 == fVar21 && (pfVar9[1] < pfVar9[3])))) {
              uVar17 = uVar1;
              pfVar9 = pfVar9 + 2;
            }
          }
          if ((*pfVar9 < fVar19) || ((*pfVar9 == fVar19 && (pfVar9[1] < fVar20)))) break;
          *(undefined8 *)pfVar11 = *(undefined8 *)pfVar9;
          pfVar11 = pfVar9;
        }
        *pfVar11 = fVar19;
        pfVar11[1] = fVar20;
      }
    }
LAB_004e31f8:
    bVar4 = uVar18 != 0;
    uVar18 = uVar18 - 1;
  } while (bVar4);
  do {
    uVar8 = *(undefined8 *)param_1;
    pfVar11 = param_1;
    uVar18 = 0;
    do {
      uVar1 = uVar18 << 1 | 1;
      uVar10 = uVar18 * 2 + 2;
      pfVar9 = pfVar11 + uVar18 * 2 + 2;
      pfVar7 = pfVar9;
      uVar17 = uVar1;
      if ((long)uVar10 < (long)uVar6) {
        pfVar12 = pfVar11 + uVar18 * 2 + 4;
        pfVar7 = pfVar12;
        uVar17 = uVar10;
        if (((*pfVar12 <= pfVar11[uVar18 * 2 + 2]) &&
            (pfVar7 = pfVar9, uVar17 = uVar1, pfVar11[uVar18 * 2 + 2] == *pfVar12)) &&
           (pfVar7 = pfVar12, uVar17 = uVar10, pfVar11[uVar18 * 2 + 5] <= pfVar11[uVar18 * 2 + 3]))
        {
          pfVar7 = pfVar9;
          uVar17 = uVar1;
        }
      }
      *(undefined8 *)pfVar11 = *(undefined8 *)pfVar7;
      pfVar11 = pfVar7;
      uVar18 = uVar17;
    } while ((long)uVar17 <= (long)(uVar6 - 2 >> 1));
    param_2 = param_2 + -2;
    if (pfVar7 == param_2) {
      *(undefined8 *)pfVar7 = uVar8;
    }
    else {
      lVar16 = (long)pfVar7 + (8 - (long)param_1) >> 3;
      *(undefined8 *)pfVar7 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar8;
      uVar18 = lVar16 - 2;
      if (1 < lVar16) {
        uVar10 = uVar18 >> 1;
        fVar19 = *pfVar7;
        pfVar11 = param_1 + uVar10 * 2;
        if (fVar19 <= *pfVar11) {
          if ((*pfVar11 != fVar19) || (fVar20 = pfVar7[1], fVar20 <= pfVar11[1])) goto LAB_004e3324;
        }
        else {
          fVar20 = pfVar7[1];
        }
        *(undefined8 *)pfVar7 = *(undefined8 *)pfVar11;
        while (1 < uVar18) {
          uVar18 = uVar10 - 1;
          uVar10 = uVar18 >> 1;
          pfVar9 = param_1 + uVar10 * 2;
          if ((fVar19 <= *pfVar9) && ((*pfVar9 != fVar19 || (fVar20 <= pfVar9[1])))) break;
          *(undefined8 *)pfVar11 = *(undefined8 *)pfVar9;
          pfVar11 = pfVar9;
        }
        *pfVar11 = fVar19;
        pfVar11[1] = fVar20;
      }
    }
LAB_004e3324:
    bVar4 = (long)uVar6 < 3;
    uVar6 = uVar6 - 1;
    if (bVar4) {
      return;
    }
  } while( true );
code_r0x004e2e3c:
  if ((uVar6 & 1) == 0) {
LAB_004e2e40:
    FUN_004e2ba8(param_1,pfVar13,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_004e2bec;
}


// ===== 004e3504  FUN_004e3504 =====

void FUN_004e3504(float *param_1,float *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
LAB_004e3534:
  pfVar11 = param_2 + -2;
  pfVar13 = param_2 + -3;
  pfVar6 = param_1;
LAB_004e3550:
  while( true ) {
    param_1 = pfVar6;
    uVar5 = (long)param_2 - (long)param_1 >> 3;
    if (uVar5 - 2 == 0 || (long)uVar5 < 2) {
      if (uVar5 < 2) {
        return;
      }
      if (uVar5 == 2) {
        if (param_1[1] <= param_2[-1]) {
          if (param_2[-1] != param_1[1]) {
            return;
          }
          if (*param_1 <= *pfVar11) {
            return;
          }
        }
        uVar10 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = uVar10;
        return;
      }
    }
    else {
      if (uVar5 == 3) {
        FUN_004e3ef0(param_1,param_1 + 2,pfVar11);
        return;
      }
      if (uVar5 == 4) {
        pfVar6 = param_1 + 4;
        FUN_004e3ef0(param_1,param_1 + 2,pfVar6);
        if (param_1[5] <= param_2[-1]) {
          if (param_2[-1] != param_1[5]) {
            return;
          }
          if (*pfVar6 <= *pfVar11) {
            return;
          }
        }
        uVar10 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = uVar10;
        if (param_1[3] <= param_1[5]) {
          if (param_1[5] != param_1[3]) {
            return;
          }
          if (param_1[2] <= *pfVar6) {
            return;
          }
        }
        uVar10 = *(undefined8 *)(param_1 + 4);
        fVar22 = param_1[1];
        fVar21 = (float)((ulong)uVar10 >> 0x20);
        uVar9 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = uVar10;
        *(undefined8 *)(param_1 + 4) = uVar9;
        if (fVar22 == fVar21 || fVar22 < fVar21 != (NAN(fVar22) || NAN(fVar21))) {
          if (fVar22 != fVar21) {
            return;
          }
          fVar21 = (float)uVar10;
          fVar22 = *param_1;
          if (fVar22 == fVar21 || fVar22 < fVar21 != (NAN(fVar22) || NAN(fVar21))) {
            return;
          }
        }
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar10;
        *(undefined8 *)(param_1 + 2) = uVar9;
        return;
      }
      if (uVar5 == 5) {
        FUN_004e3ff8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar11);
        return;
      }
    }
    if ((long)uVar5 < 0x18) {
      pfVar6 = param_1 + 2;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || pfVar6 == param_2) {
          return;
        }
        goto LAB_004e3e8c;
      }
      if (param_1 == param_2 || pfVar6 == param_2) {
        return;
      }
      lVar17 = 0;
      pfVar11 = param_1;
      goto LAB_004e3b38;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar12 = uVar5 - 2 >> 1;
      uVar20 = uVar12;
      goto LAB_004e3bf0;
    }
    uVar20 = uVar5 >> 1;
    pfVar6 = param_1 + uVar20 * 2;
    if (uVar5 < 0x81) {
      FUN_004e3ef0(pfVar6,param_1,pfVar11);
    }
    else {
      FUN_004e3ef0(param_1,pfVar6,pfVar11);
      pfVar8 = param_1 + 2;
      pfVar7 = param_1 + uVar20 * 2;
      FUN_004e3ef0(pfVar8,pfVar7 + -2,param_2 + -4);
      FUN_004e3ef0(param_1 + 4,pfVar8 + uVar20 * 2,param_2 + -6);
      FUN_004e3ef0(pfVar7 + -2,pfVar6,pfVar8 + uVar20 * 2);
      uVar10 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)pfVar7;
      *(undefined8 *)pfVar7 = uVar10;
    }
    if ((param_4 & 1) != 0) break;
    fVar21 = param_1[1];
    if (param_1[-1] < fVar21) goto LAB_004e3670;
    if (param_1[-1] == fVar21) {
      fVar22 = *param_1;
      if (param_1[-2] < fVar22) goto LAB_004e3670;
    }
    else {
      fVar22 = *param_1;
    }
    fVar23 = param_2[-1];
    if ((fVar23 != fVar21 && fVar23 < fVar21 == (NAN(fVar23) || NAN(fVar21))) ||
       ((pfVar8 = param_1, fVar23 == fVar21 &&
        (fVar24 = *pfVar11, fVar24 != fVar22 && fVar24 < fVar22 == (NAN(fVar24) || NAN(fVar22))))))
    {
      fVar24 = param_1[3];
      if (fVar24 == fVar21 || fVar24 < fVar21 != (NAN(fVar24) || NAN(fVar21))) {
        pfVar8 = param_1 + 5;
        do {
          if ((fVar24 == fVar21) &&
             (fVar24 = pfVar8[-3], pfVar6 = pfVar8,
             fVar24 != fVar22 && fVar24 < fVar22 == (NAN(fVar24) || NAN(fVar22)))) break;
          pfVar6 = pfVar8 + 2;
          fVar24 = *pfVar8;
          pfVar8 = pfVar6;
        } while (fVar24 == fVar21 || fVar24 < fVar21 != (NAN(fVar24) || NAN(fVar21)));
        pfVar6 = pfVar6 + -3;
      }
      else {
        pfVar6 = param_1 + 2;
      }
    }
    else {
      while (pfVar6 = pfVar8 + 2, pfVar6 < param_2) {
        fVar24 = pfVar8[3];
        if ((fVar24 != fVar21 && fVar24 < fVar21 == (NAN(fVar24) || NAN(fVar21))) ||
           ((pfVar8 = pfVar6, fVar24 == fVar21 &&
            (fVar24 = *pfVar6, fVar24 != fVar22 && fVar24 < fVar22 == (NAN(fVar24) || NAN(fVar22))))
           )) break;
      }
    }
    pfVar8 = param_2;
    pfVar7 = pfVar13;
    if (pfVar6 < param_2) {
      for (; (fVar23 != fVar21 && fVar23 < fVar21 == (NAN(fVar23) || NAN(fVar21)) ||
             ((fVar23 == fVar21 &&
              (fVar23 = pfVar7[1],
              fVar23 != fVar22 && fVar23 < fVar22 == (NAN(fVar23) || NAN(fVar22))))));
          pfVar7 = pfVar7 + -2) {
        fVar23 = *pfVar7;
      }
      pfVar8 = pfVar7 + 1;
    }
    while (pfVar6 < pfVar8) {
      uVar10 = *(undefined8 *)pfVar6;
      *(undefined8 *)pfVar6 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = uVar10;
      fVar23 = pfVar6[3];
      if (fVar23 == fVar21 || fVar23 < fVar21 != (NAN(fVar23) || NAN(fVar21))) {
        pfVar7 = pfVar6 + 5;
        do {
          if ((fVar23 == fVar21) &&
             (fVar23 = pfVar7[-3], pfVar6 = pfVar7,
             fVar23 != fVar22 && fVar23 < fVar22 == (NAN(fVar23) || NAN(fVar22)))) break;
          pfVar6 = pfVar7 + 2;
          fVar23 = *pfVar7;
          pfVar7 = pfVar6;
        } while (fVar23 == fVar21 || fVar23 < fVar21 != (NAN(fVar23) || NAN(fVar21)));
        pfVar6 = pfVar6 + -3;
        pfVar7 = pfVar8;
      }
      else {
        pfVar6 = pfVar6 + 2;
        pfVar7 = pfVar8;
      }
      do {
        do {
          pfVar8 = pfVar7 + -2;
          fVar23 = pfVar7[-1];
          pfVar7 = pfVar8;
        } while (fVar23 != fVar21 && fVar23 < fVar21 == (NAN(fVar23) || NAN(fVar21)));
      } while ((fVar23 == fVar21) &&
              (fVar23 = *pfVar8, fVar23 != fVar22 && fVar23 < fVar22 == (NAN(fVar23) || NAN(fVar22))
              ));
    }
    if (pfVar6 + -2 != param_1) {
      *(undefined8 *)param_1 = *(undefined8 *)(pfVar6 + -2);
    }
    param_4 = 0;
    pfVar6[-2] = fVar22;
    pfVar6[-1] = fVar21;
    param_3 = param_3 + -1;
  }
  fVar21 = param_1[1];
LAB_004e3670:
  param_3 = param_3 + -1;
  fVar22 = *param_1;
  pfVar8 = param_1;
  do {
    do {
      pfVar6 = pfVar8;
      pfVar8 = pfVar6 + 2;
    } while (pfVar6[3] < fVar21);
  } while ((pfVar6[3] == fVar21) && (*pfVar8 < fVar22));
  if (pfVar6 == param_1) {
    pfVar7 = param_2;
    if ((pfVar8 < param_2) &&
       (fVar23 = param_2[-1], pfVar7 = pfVar11, pfVar6 = pfVar13, fVar21 <= fVar23)) {
      do {
        pfVar14 = pfVar6 + 1;
        if (fVar23 == fVar21) {
          if (*pfVar14 < fVar22 || pfVar14 <= pfVar8) goto LAB_004e3748;
        }
        else if (pfVar14 <= pfVar8) break;
        pfVar14 = pfVar6 + -2;
        fVar23 = *pfVar6;
        pfVar7 = pfVar7 + -2;
        pfVar6 = pfVar14;
      } while (fVar21 <= fVar23);
      goto LAB_004e36e4;
    }
  }
  else {
    fVar23 = param_2[-1];
    pfVar7 = pfVar11;
    pfVar14 = pfVar13;
    if (fVar21 <= fVar23) {
      do {
        if ((fVar23 == fVar21) && (pfVar6 = pfVar14, pfVar14[1] < fVar22)) break;
        fVar23 = *pfVar14;
        pfVar6 = pfVar14 + -2;
        pfVar14 = pfVar14 + -2;
      } while (fVar21 <= fVar23);
LAB_004e36e4:
      pfVar7 = pfVar6 + 1;
    }
  }
LAB_004e3748:
  pfVar14 = pfVar7;
  pfVar6 = pfVar8;
  pfVar19 = pfVar8;
  if (pfVar8 < pfVar7) {
    do {
      uVar10 = *(undefined8 *)pfVar19;
      *(undefined8 *)pfVar19 = *(undefined8 *)pfVar14;
      *(undefined8 *)pfVar14 = uVar10;
      do {
        do {
          pfVar6 = pfVar19 + 2;
          pfVar15 = pfVar19 + 3;
          pfVar19 = pfVar6;
        } while (*pfVar15 < fVar21);
      } while ((*pfVar15 == fVar21) && (*pfVar6 < fVar22));
      fVar23 = pfVar14[-1];
      if (fVar23 < fVar21) {
        pfVar14 = pfVar14 + -2;
      }
      else {
        pfVar15 = pfVar14 + -3;
        do {
          if ((fVar23 == fVar21) && (pfVar14 = pfVar15, pfVar15[1] < fVar22)) break;
          pfVar14 = pfVar15 + -2;
          fVar23 = *pfVar15;
          pfVar15 = pfVar14;
        } while (fVar21 <= fVar23);
        pfVar14 = pfVar14 + 1;
      }
    } while (pfVar6 < pfVar14);
  }
  pfVar14 = pfVar6 + -2;
  if (pfVar14 != param_1) {
    *(undefined8 *)param_1 = *(undefined8 *)pfVar14;
  }
  pfVar6[-2] = fVar22;
  pfVar6[-1] = fVar21;
  if (pfVar7 <= pfVar8) {
    uVar5 = FUN_004e41a4(param_1,pfVar14);
    uVar20 = FUN_004e41a4(pfVar6,param_2);
    if ((uVar20 & 1) != 0) goto LAB_004e39a8;
    if ((uVar5 & 1) != 0) goto LAB_004e3550;
  }
  FUN_004e3504(param_1,pfVar14,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_004e3550;
LAB_004e3e8c:
  pfVar11 = pfVar6;
  fVar21 = param_1[3];
  if (param_1[1] <= fVar21) {
    if ((fVar21 == param_1[1]) && (fVar22 = *pfVar11, fVar22 < *param_1)) goto LAB_004e3ec0;
  }
  else {
    fVar22 = *pfVar11;
LAB_004e3ec0:
    do {
      do {
        pfVar6 = param_1;
        fVar23 = pfVar6[-1];
        *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)pfVar6;
        param_1 = pfVar6 + -2;
      } while (fVar23 != fVar21 && fVar23 < fVar21 == (NAN(fVar23) || NAN(fVar21)));
    } while ((fVar23 == fVar21) &&
            (fVar23 = pfVar6[-2],
            fVar23 != fVar22 && fVar23 < fVar22 == (NAN(fVar23) || NAN(fVar22))));
    *pfVar6 = fVar22;
    pfVar6[1] = fVar21;
  }
  pfVar6 = pfVar11 + 2;
  param_1 = pfVar11;
  if (pfVar11 + 2 == param_2) {
    return;
  }
  goto LAB_004e3e8c;
LAB_004e3b38:
  fVar21 = pfVar11[3];
  if (pfVar11[1] <= fVar21) {
    if ((fVar21 == pfVar11[1]) && (fVar22 = *pfVar6, fVar22 < *pfVar11)) goto LAB_004e3b6c;
  }
  else {
    fVar22 = *pfVar6;
LAB_004e3b6c:
    *(undefined8 *)(pfVar11 + 2) = *(undefined8 *)pfVar11;
    pfVar13 = param_1;
    lVar16 = lVar17;
    if (pfVar11 != param_1) {
      do {
        puVar2 = (undefined8 *)((long)param_1 + lVar16);
        fVar23 = *(float *)((long)puVar2 + -4);
        if (fVar23 == fVar21 || fVar23 < fVar21 != (NAN(fVar23) || NAN(fVar21))) {
          if (fVar23 != fVar21) {
            pfVar13 = (float *)((long)param_1 + lVar16);
            break;
          }
          fVar23 = *(float *)(puVar2 + -1);
          pfVar13 = pfVar11;
          if (fVar23 == fVar22 || fVar23 < fVar22 != (NAN(fVar23) || NAN(fVar22))) break;
        }
        lVar16 = lVar16 + -8;
        pfVar11 = pfVar11 + -2;
        *puVar2 = puVar2[-1];
        pfVar13 = param_1;
      } while (lVar16 != 0);
    }
    *pfVar13 = fVar22;
    pfVar13[1] = fVar21;
  }
  pfVar13 = pfVar6 + 2;
  lVar17 = lVar17 + 8;
  pfVar11 = pfVar6;
  pfVar6 = pfVar13;
  if (pfVar13 == param_2) {
    return;
  }
  goto LAB_004e3b38;
LAB_004e3bf0:
  do {
    if ((long)uVar20 <= (long)uVar12) {
      uVar18 = uVar20 << 1 | 1;
      uVar1 = uVar20 * 2 + 2;
      pfVar6 = param_1 + uVar18 * 2;
      if (((long)uVar1 < (long)uVar5) &&
         ((pfVar6[1] < pfVar6[3] || ((pfVar6[1] == pfVar6[3] && (*pfVar6 < pfVar6[2])))))) {
        pfVar6 = pfVar6 + 2;
        uVar18 = uVar1;
      }
      pfVar11 = param_1 + uVar20 * 2;
      fVar21 = pfVar11[1];
      if (fVar21 <= pfVar6[1]) {
        if (pfVar6[1] == fVar21) {
          fVar22 = *pfVar11;
          if (*pfVar6 < fVar22) goto LAB_004e3be8;
        }
        else {
          fVar22 = *pfVar11;
        }
        *(undefined8 *)pfVar11 = *(undefined8 *)pfVar6;
        while ((long)uVar18 <= (long)uVar12) {
          uVar3 = uVar18 << 1 | 1;
          uVar1 = uVar18 * 2 + 2;
          pfVar11 = param_1 + uVar3 * 2;
          uVar18 = uVar3;
          if (((long)uVar1 < (long)uVar5) &&
             ((pfVar11[1] < pfVar11[3] || ((pfVar11[1] == pfVar11[3] && (*pfVar11 < pfVar11[2]))))))
          {
            pfVar11 = pfVar11 + 2;
            uVar18 = uVar1;
          }
          if ((pfVar11[1] < fVar21) || ((pfVar11[1] == fVar21 && (*pfVar11 < fVar22)))) break;
          *(undefined8 *)pfVar6 = *(undefined8 *)pfVar11;
          pfVar6 = pfVar11;
        }
        *pfVar6 = fVar22;
        pfVar6[1] = fVar21;
      }
    }
LAB_004e3be8:
    bVar4 = uVar20 != 0;
    uVar20 = uVar20 - 1;
  } while (bVar4);
  do {
    uVar10 = *(undefined8 *)param_1;
    pfVar6 = param_1;
    uVar20 = 0;
    do {
      uVar1 = uVar20 << 1 | 1;
      uVar12 = uVar20 * 2 + 2;
      pfVar11 = pfVar6 + uVar20 * 2 + 2;
      pfVar13 = pfVar11;
      uVar18 = uVar1;
      if ((long)uVar12 < (long)uVar5) {
        pfVar8 = pfVar6 + uVar20 * 2 + 4;
        pfVar13 = pfVar8;
        uVar18 = uVar12;
        if (((pfVar6[uVar20 * 2 + 5] <= pfVar6[uVar20 * 2 + 3]) &&
            (pfVar13 = pfVar11, uVar18 = uVar1, pfVar6[uVar20 * 2 + 3] == pfVar6[uVar20 * 2 + 5]))
           && (pfVar13 = pfVar8, uVar18 = uVar12, *pfVar8 <= *pfVar11)) {
          pfVar13 = pfVar11;
          uVar18 = uVar1;
        }
      }
      *(undefined8 *)pfVar6 = *(undefined8 *)pfVar13;
      pfVar6 = pfVar13;
      uVar20 = uVar18;
    } while ((long)uVar18 <= (long)(uVar5 - 2 >> 1));
    param_2 = param_2 + -2;
    if (pfVar13 == param_2) {
      *(undefined8 *)pfVar13 = uVar10;
    }
    else {
      lVar17 = (long)pfVar13 + (8 - (long)param_1) >> 3;
      *(undefined8 *)pfVar13 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar10;
      uVar20 = lVar17 - 2;
      if (1 < lVar17) {
        uVar12 = uVar20 >> 1;
        fVar21 = pfVar13[1];
        pfVar6 = param_1 + uVar12 * 2;
        if (fVar21 <= pfVar6[1]) {
          if ((pfVar6[1] != fVar21) || (fVar22 = *pfVar13, fVar22 <= *pfVar6)) goto LAB_004e3d0c;
        }
        else {
          fVar22 = *pfVar13;
        }
        *(undefined8 *)pfVar13 = *(undefined8 *)pfVar6;
        while (1 < uVar20) {
          uVar20 = uVar12 - 1;
          uVar12 = uVar20 >> 1;
          pfVar11 = param_1 + uVar12 * 2;
          if ((fVar21 <= pfVar11[1]) && ((pfVar11[1] != fVar21 || (fVar22 <= *pfVar11)))) break;
          *(undefined8 *)pfVar6 = *(undefined8 *)pfVar11;
          pfVar6 = pfVar11;
        }
        *pfVar6 = fVar22;
        pfVar6[1] = fVar21;
      }
    }
LAB_004e3d0c:
    bVar4 = (long)uVar5 < 3;
    uVar5 = uVar5 - 1;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_004e39a8:
  param_2 = pfVar14;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_004e3534;
}


// ===== 004e3ef0  FUN_004e3ef0 =====

void FUN_004e3ef0(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = param_2[1];
  if ((fVar2 < param_1[1]) || ((fVar2 == param_1[1] && (*param_2 < *param_1)))) {
    if ((param_3[1] < fVar2) || ((param_3[1] == fVar2 && (*param_3 < *param_2)))) {
      uVar1 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      return;
    }
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar1;
    fVar2 = (float)((ulong)uVar1 >> 0x20);
    if ((param_3[1] < fVar2) || ((param_3[1] == fVar2 && (*param_3 < (float)uVar1)))) {
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
    }
  }
  else if ((param_3[1] < fVar2) || ((param_3[1] == fVar2 && (*param_3 < *param_2)))) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar1;
    if ((param_2[1] < param_1[1]) || ((param_2[1] == param_1[1] && (*param_2 < *param_1)))) {
      uVar1 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar1;
      return;
    }
  }
  return;
}


// ===== 004e3ff8  FUN_004e3ff8 =====

void FUN_004e3ff8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  
  FUN_004e3ef0();
  if ((param_4[1] < param_3[1]) || ((param_4[1] == param_3[1] && (*param_4 < *param_3)))) {
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar1;
    if ((param_3[1] < param_2[1]) || ((param_3[1] == param_2[1] && (*param_3 < *param_2)))) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      if ((param_2[1] < param_1[1]) || ((param_2[1] == param_1[1] && (*param_2 < *param_1)))) {
        uVar1 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar1;
      }
    }
  }
  if ((param_5[1] < param_4[1]) || ((param_5[1] == param_4[1] && (*param_5 < *param_4)))) {
    uVar1 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)param_5 = uVar1;
    if ((param_4[1] < param_3[1]) || ((param_4[1] == param_3[1] && (*param_4 < *param_3)))) {
      uVar1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      *(undefined8 *)param_4 = uVar1;
      if ((param_3[1] < param_2[1]) || ((param_3[1] == param_2[1] && (*param_3 < *param_2)))) {
        uVar1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)param_3 = uVar1;
        if ((param_2[1] < param_1[1]) || ((param_2[1] == param_1[1] && (*param_2 < *param_1)))) {
          uVar1 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar1;
        }
      }
    }
  }
  return;
}


// ===== 004e41a4  FUN_004e41a4 =====

bool FUN_004e41a4(float *param_1,float *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar1 < 3) {
    if (uVar1 < 2) {
      return true;
    }
    if (uVar1 == 2) {
      if (param_1[1] <= param_2[-1]) {
        if (param_2[-1] != param_1[1]) {
          return true;
        }
        if (*param_1 <= param_2[-2]) {
          return true;
        }
      }
      uVar2 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar2;
      return true;
    }
  }
  else {
    if (uVar1 == 3) {
      FUN_004e3ef0(param_1,param_1 + 2,param_2 + -2);
      return true;
    }
    if (uVar1 == 4) {
      pfVar9 = param_1 + 4;
      FUN_004e3ef0(param_1,param_1 + 2,pfVar9);
      if (param_1[5] <= param_2[-1]) {
        if (param_2[-1] != param_1[5]) {
          return true;
        }
        if (*pfVar9 <= param_2[-2]) {
          return true;
        }
      }
      uVar2 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar2;
      if (param_1[3] <= param_1[5]) {
        if (param_1[5] != param_1[3]) {
          return true;
        }
        if (param_1[2] <= *pfVar9) {
          return true;
        }
      }
      uVar2 = *(undefined8 *)(param_1 + 4);
      fVar12 = param_1[1];
      fVar11 = (float)((ulong)uVar2 >> 0x20);
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar2;
      *(undefined8 *)(param_1 + 4) = uVar4;
      if (fVar12 == fVar11 || fVar12 < fVar11 != (NAN(fVar12) || NAN(fVar11))) {
        if (fVar12 != fVar11) {
          return true;
        }
        fVar11 = (float)uVar2;
        fVar12 = *param_1;
        if (fVar12 == fVar11 || fVar12 < fVar11 != (NAN(fVar12) || NAN(fVar11))) {
          return true;
        }
      }
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 2) = uVar4;
      return true;
    }
    if (uVar1 == 5) {
      FUN_004e3ff8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
      return true;
    }
  }
  FUN_004e3ef0(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar5 = 0;
    iVar6 = 0;
    pfVar9 = param_1 + 6;
    pfVar10 = param_1 + 4;
    do {
      pfVar3 = pfVar9;
      fVar11 = pfVar3[1];
      if (pfVar10[1] <= fVar11) {
        if ((fVar11 == pfVar10[1]) && (fVar12 = *pfVar3, fVar12 < *pfVar10)) goto LAB_004e42d4;
      }
      else {
        fVar12 = *pfVar3;
LAB_004e42d4:
        *(undefined8 *)pfVar3 = *(undefined8 *)pfVar10;
        lVar8 = lVar5;
        do {
          fVar13 = *(float *)((long)param_1 + lVar8 + 0xc);
          if (fVar13 == fVar11 || fVar13 < fVar11 != (NAN(fVar13) || NAN(fVar11))) {
            if (fVar13 != fVar11) {
              pfVar9 = (float *)((long)param_1 + lVar8 + 0x10);
              break;
            }
            fVar13 = *(float *)((long)param_1 + lVar8 + 8);
            pfVar9 = pfVar10;
            if (fVar13 == fVar12 || fVar13 < fVar12 != (NAN(fVar13) || NAN(fVar12))) break;
          }
          lVar7 = lVar8 + -8;
          pfVar10 = pfVar10 + -2;
          *(undefined8 *)((long)param_1 + lVar8 + 0x10) = *(undefined8 *)((long)param_1 + lVar8 + 8)
          ;
          lVar8 = lVar7;
          pfVar9 = param_1;
        } while (lVar7 != -0x10);
        iVar6 = iVar6 + 1;
        *pfVar9 = fVar12;
        pfVar9[1] = fVar11;
        if (iVar6 == 8) {
          return pfVar3 + 2 == param_2;
        }
      }
      lVar5 = lVar5 + 8;
      pfVar9 = pfVar3 + 2;
      pfVar10 = pfVar3;
    } while (pfVar3 + 2 != param_2);
  }
  return true;
}


// ===== 004e4404  FUN_004e4404 =====

void FUN_004e4404(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *param_2;
  if ((fVar2 < *param_1) || ((fVar2 == *param_1 && (param_2[1] < param_1[1])))) {
    if ((*param_3 < fVar2) || ((*param_3 == fVar2 && (param_3[1] < param_2[1])))) {
      uVar1 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      return;
    }
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar1;
    if ((*param_3 < (float)uVar1) ||
       ((*param_3 == (float)uVar1 && (param_3[1] < (float)((ulong)uVar1 >> 0x20))))) {
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
    }
  }
  else if ((*param_3 < fVar2) || ((*param_3 == fVar2 && (param_3[1] < param_2[1])))) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar1;
    if ((*param_2 < *param_1) || ((*param_2 == *param_1 && (param_2[1] < param_1[1])))) {
      uVar1 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar1;
      return;
    }
  }
  return;
}


// ===== 004e450c  FUN_004e450c =====

void FUN_004e450c(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  
  FUN_004e4404();
  if ((*param_4 < *param_3) || ((*param_4 == *param_3 && (param_4[1] < param_3[1])))) {
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar1;
    if ((*param_3 < *param_2) || ((*param_3 == *param_2 && (param_3[1] < param_2[1])))) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      if ((*param_2 < *param_1) || ((*param_2 == *param_1 && (param_2[1] < param_1[1])))) {
        uVar1 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar1;
      }
    }
  }
  if ((*param_5 < *param_4) || ((*param_5 == *param_4 && (param_5[1] < param_4[1])))) {
    uVar1 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)param_5 = uVar1;
    if ((*param_4 < *param_3) || ((*param_4 == *param_3 && (param_4[1] < param_3[1])))) {
      uVar1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      *(undefined8 *)param_4 = uVar1;
      if ((*param_3 < *param_2) || ((*param_3 == *param_2 && (param_3[1] < param_2[1])))) {
        uVar1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)param_3 = uVar1;
        if ((*param_2 < *param_1) || ((*param_2 == *param_1 && (param_2[1] < param_1[1])))) {
          uVar1 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar1;
        }
      }
    }
  }
  return;
}


// ===== 004e46b8  FUN_004e46b8 =====

bool FUN_004e46b8(float *param_1,float *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      if (*param_1 <= param_2[-2]) {
        if (param_2[-2] != *param_1) {
          return true;
        }
        if (param_1[1] <= param_2[-1]) {
          return true;
        }
      }
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar3;
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      FUN_004e4404(param_1,param_1 + 2,param_2 + -2);
      return true;
    }
    if (uVar2 == 4) {
      pfVar9 = param_1 + 4;
      FUN_004e4404(param_1,param_1 + 2,pfVar9);
      if (param_1[4] <= param_2[-2]) {
        if (param_2[-2] != param_1[4]) {
          return true;
        }
        if (param_1[5] <= param_2[-1]) {
          return true;
        }
      }
      uVar3 = *(undefined8 *)pfVar9;
      *(undefined8 *)pfVar9 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar3;
      fVar11 = param_1[2];
      if (fVar11 <= *pfVar9) {
        if (*pfVar9 != fVar11) {
          return true;
        }
        if (param_1[3] <= param_1[5]) {
          return true;
        }
      }
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar1 = *(undefined8 *)(param_1 + 4);
      fVar12 = *param_1;
      fVar11 = (float)uVar1;
      *(undefined8 *)(param_1 + 2) = uVar1;
      *(undefined8 *)(param_1 + 4) = uVar3;
      if (fVar12 == fVar11 || fVar12 < fVar11 != (NAN(fVar12) || NAN(fVar11))) {
        if (fVar12 != fVar11) {
          return true;
        }
        fVar12 = param_1[1];
        fVar11 = (float)((ulong)uVar1 >> 0x20);
        if (fVar12 == fVar11 || fVar12 < fVar11 != (NAN(fVar12) || NAN(fVar11))) {
          return true;
        }
      }
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 2) = uVar3;
      return true;
    }
    if (uVar2 == 5) {
      FUN_004e450c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
      return true;
    }
  }
  FUN_004e4404(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar5 = 0;
    iVar6 = 0;
    pfVar9 = param_1 + 6;
    pfVar10 = param_1 + 4;
    do {
      pfVar4 = pfVar9;
      fVar11 = *pfVar4;
      if (*pfVar10 <= fVar11) {
        if ((fVar11 == *pfVar10) && (fVar12 = pfVar4[1], fVar12 < pfVar10[1])) goto LAB_004e47e8;
      }
      else {
        fVar12 = pfVar4[1];
LAB_004e47e8:
        *(undefined8 *)pfVar4 = *(undefined8 *)pfVar10;
        lVar8 = lVar5;
        do {
          fVar13 = *(float *)((long)param_1 + lVar8 + 8);
          if (fVar13 == fVar11 || fVar13 < fVar11 != (NAN(fVar13) || NAN(fVar11))) {
            if (fVar13 != fVar11) {
              pfVar9 = (float *)((long)param_1 + lVar8 + 0x10);
              break;
            }
            fVar13 = *(float *)((long)param_1 + lVar8 + 0xc);
            pfVar9 = pfVar10;
            if (fVar13 == fVar12 || fVar13 < fVar12 != (NAN(fVar13) || NAN(fVar12))) break;
          }
          lVar7 = lVar8 + -8;
          pfVar10 = pfVar10 + -2;
          *(undefined8 *)((long)param_1 + lVar8 + 0x10) = *(undefined8 *)((long)param_1 + lVar8 + 8)
          ;
          lVar8 = lVar7;
          pfVar9 = param_1;
        } while (lVar7 != -0x10);
        iVar6 = iVar6 + 1;
        *pfVar9 = fVar11;
        pfVar9[1] = fVar12;
        if (iVar6 == 8) {
          return pfVar4 + 2 == param_2;
        }
      }
      lVar5 = lVar5 + 8;
      pfVar9 = pfVar4 + 2;
      pfVar10 = pfVar4;
    } while (pfVar4 + 2 != param_2);
  }
  return true;
}


// ===== 004e4918  rive::RectanglesToContour::addUniquePoint =====

/* rive::RectanglesToContour::addUniquePoint(rive::Vec2D const&) */

void __thiscall rive::RectanglesToContour::addUniquePoint(RectanglesToContour *this,Vec2D *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_004e25c0(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),this + 0x68,
                       *(undefined8 *)param_1);
  if ((uVar1 & 1) == 0) {
    FUN_004e29c8(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),this + 0x68);
    return;
  }
  return;
}


// ===== 004e4960  rive::ContourItr::operator++ =====

/* rive::ContourItr::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall rive::ContourItr::operator++(ContourItr *this)

{
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  return;
}


// ===== 004e4970  rive::ContourItr::operator* =====

/* rive::ContourItr::TEMPNAMEPLACEHOLDERVALUE() const */

undefined1  [16] __thiscall rive::ContourItr::operator*(ContourItr *this)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  plVar1 = (long *)(*(long *)(*(long *)this + 0x120) + *(long *)(this + 8) * 8);
  if (*(long *)(this + 8) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[-1];
  }
  auVar3._8_8_ = *plVar1 - lVar2;
  auVar3._0_8_ = *(long *)(*(long *)this + 0x108) + lVar2 * 0xc;
  return auVar3;
}


// ===== 004e49a4  rive::RectanglesToContour::contour =====

/* rive::RectanglesToContour::contour(unsigned long) const */

undefined1  [16] __thiscall
rive::RectanglesToContour::contour(RectanglesToContour *this,ulong param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  plVar1 = (long *)(*(long *)(this + 0x120) + param_1 * 8);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[-1];
  }
  auVar3._8_8_ = *plVar1 - lVar2;
  auVar3._0_8_ = *(long *)(this + 0x108) + lVar2 * 0xc;
  return auVar3;
}


// ===== 004e49d4  rive::ContourPointItr::operator++ =====

/* rive::ContourPointItr::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall rive::ContourPointItr::operator++(ContourPointItr *this)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = 0.0;
  uVar1 = *(ulong *)(this + 0x10);
  fVar4 = 0.0;
  if (uVar1 < *(ulong *)(this + 8)) {
    pfVar2 = (float *)(*(long *)this + uVar1 * 0xc);
    fVar3 = *pfVar2;
    fVar4 = pfVar2[1];
  }
  pfVar2 = (float *)(*(long *)this + uVar1 * 0xc + 0x10);
  while( true ) {
    uVar1 = uVar1 + 1;
    *(ulong *)(this + 0x10) = uVar1;
    if (*(ulong *)(this + 8) <= uVar1) {
      return;
    }
    if (pfVar2[-1] != fVar3) break;
    fVar5 = *pfVar2;
    pfVar2 = pfVar2 + 3;
    if (fVar5 != fVar4) {
      return;
    }
  }
  return;
}


// ===== 004e4a34  rive::ContourPointItr::operator* =====

/* rive::ContourPointItr::TEMPNAMEPLACEHOLDERVALUE() const */

undefined4 __thiscall rive::ContourPointItr::operator*(ContourPointItr *this)

{
  return *(undefined4 *)(*(long *)this + *(long *)(this + 0x10) * 0xc);
}


// ===== 004e4a50  rive::Contour::isClockwise =====

/* rive::Contour::isClockwise() const */

bool __thiscall rive::Contour::isClockwise(Contour *this)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = *(ulong *)(this + 8);
  if (uVar6 == 0) {
    return true;
  }
  fVar12 = 0.0;
  pfVar7 = *(float **)this;
  uVar9 = uVar6 - 1;
  if (uVar9 != 0) {
    if (uVar6 < 3) {
      uVar9 = 1;
    }
    else {
      pfVar8 = pfVar7 + 4;
      uVar11 = uVar9 & 0xfffffffffffffffe;
      do {
        pfVar1 = pfVar8 + -1;
        fVar14 = *pfVar8;
        uVar11 = uVar11 - 2;
        pfVar2 = pfVar8 + -4;
        pfVar4 = pfVar8 + -3;
        pfVar3 = pfVar8 + 2;
        pfVar5 = pfVar8 + 3;
        pfVar8 = pfVar8 + 6;
        fVar13 = (float)NEON_fmadd(*pfVar2,fVar14,-(*pfVar4 * *pfVar1));
        fVar14 = (float)NEON_fmadd(*pfVar1,*pfVar5,-(fVar14 * *pfVar3));
        fVar12 = fVar12 + fVar13 + fVar14;
      } while (uVar11 != 0);
      if (uVar9 == (uVar9 & 0xfffffffffffffffe)) goto LAB_004e4af8;
      uVar9 = uVar9 | 1;
    }
    pfVar8 = pfVar7 + uVar9 * 3;
    lVar10 = uVar6 - uVar9;
    do {
      fVar14 = *pfVar8;
      pfVar3 = pfVar8 + 1;
      lVar10 = lVar10 + -1;
      pfVar1 = pfVar8 + -2;
      pfVar2 = pfVar8 + -3;
      pfVar8 = pfVar8 + 3;
      fVar14 = (float)NEON_fmadd(*pfVar2,*pfVar3,-(*pfVar1 * fVar14));
      fVar12 = fVar12 + fVar14;
    } while (lVar10 != 0);
  }
LAB_004e4af8:
  fVar14 = (float)NEON_fmadd(pfVar7[uVar6 * 3 + -3],pfVar7[1],-(pfVar7[uVar6 * 3 + -2] * *pfVar7));
  fVar12 = (fVar12 + fVar14) * 0.5;
  return fVar12 < 0.0 == NAN(fVar12);
}


// ===== 004e4b30  rive::TextStyle::TextStyle =====

/* rive::TextStyle::TextStyle() */

void __thiscall rive::TextStyle::TextStyle(TextStyle *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  *(undefined4 *)(this + 0x28) = 0;
  uVar1 = DAT_0024e738;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  puVar2 = PTR_vtable_0067d7b8;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0xa8) = 0xffffffff00000000;
  *(undefined **)(this + 0xb0) = puVar2 + 0xe8;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  return;
}


// ===== 004e4ba8  FUN_004e4ba8 =====

void FUN_004e4ba8(long *param_1)

{
  undefined *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *__dest;
  
  pvVar3 = (void *)param_1[0x23];
  puVar1 = PTR_vtable_0067d7b8 + 0xe8;
  *param_1 = (long)(PTR_vtable_0067d7b8 + 0x10);
  param_1[0x16] = (long)puVar1;
  if (pvVar3 != (void *)0x0) {
    param_1[0x24] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x20];
  if (pvVar3 != (void *)0x0) {
    param_1[0x21] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x1d];
  if (pvVar3 != (void *)0x0) {
    param_1[0x1e] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x1a];
  if (pvVar3 != (void *)0x0) {
    param_1[0x1b] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  plVar5 = (long *)param_1[0x19];
  if ((plVar5 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 1), iVar2 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  plVar5 = (long *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = (long *)param_1[0x17];
  param_1[0x16] = (long)(PTR_vtable_0067d008 + 0x10);
  if (plVar5 != (long *)0x0) {
    __dest = (undefined8 *)plVar5[0xd];
    puVar4 = (undefined8 *)plVar5[0xe];
    if (__dest != puVar4) {
      do {
        while ((long *)*__dest != param_1 + 0x16) {
          __dest = __dest + 1;
          if (__dest == puVar4) goto LAB_004e4cc8;
        }
        __n = (long)puVar4 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        puVar4 = (undefined8 *)((long)__dest + __n);
        plVar5[0xe] = (long)puVar4;
      } while (__dest != puVar4);
LAB_004e4cc8:
      plVar5 = (long *)param_1[0x17];
      if (plVar5 == (long *)0x0) goto LAB_004e4cf4;
    }
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 9);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
LAB_004e4cf4:
  pvVar3 = (void *)param_1[0x11];
  *param_1 = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x12] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0xe] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[9];
  if (pvVar3 != (void *)0x0) {
    param_1[10] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 004e4d84  FUN_004e4d84 =====

void FUN_004e4d84(void *param_1)

{
  FUN_004e4ba8();
  operator_delete(param_1);
  return;
}


// ===== 004e4da8  FUN_004e4da8 =====

undefined8 FUN_004e4da8(void)

{
  return 0x23d;
}


// ===== 004e4db0  FUN_004e4db0 =====

bool FUN_004e4db0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x23d;
}


// ===== 004e4dd0  FUN_004e4dd0 =====

undefined8 FUN_004e4dd0(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x117) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e4fac;
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
LAB_004e4fac:
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
        if (param_2 == 0x112) {
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
          *(undefined4 *)(param_1 + 0xa0) = uVar15;
        }
        goto LAB_004e5054;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar12 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar12) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e4ffc;
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
LAB_004e4ffc:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 != 0x117) {
      if (param_2 == 0x172) {
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
        *(undefined4 *)(param_1 + 0xa4) = uVar15;
      }
      else if (param_2 == 0x186) {
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
        *(undefined4 *)(param_1 + 0xa8) = uVar15;
      }
      goto LAB_004e5054;
    }
    uVar14 = 0;
    uVar6 = 0;
    pbVar12 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar12) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004e4fe4;
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
LAB_004e4fe4:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xac) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004e5054:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e507c  rive::TextStyle::clone =====

/* rive::TextStyle::clone() const */

TextStyle * __thiscall rive::TextStyle::clone(TextStyle *this)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  TextStyle *this_00;
  long *plVar4;
  undefined4 uVar5;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (TextStyle *)operator_new(0x138);
  TextStyle(this_00);
  uVar5 = *(undefined4 *)(this + 0xa8);
  uVar1 = *(undefined4 *)(this + 0xac);
  *(undefined8 *)(this_00 + 0xa0) = *(undefined8 *)(this + 0xa0);
  *(undefined4 *)(this_00 + 0xa8) = uVar5;
  *(undefined4 *)(this_00 + 0xac) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  plVar4 = *(long **)(this + 0xb8);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  if (plVar4 != (long *)0x0) {
    FUN_00340fb0(1,plVar4 + 9);
    local_40 = plVar4;
    (**(code **)(*(long *)this_00 + 0xb8))(this_00,&local_40);
    plVar4 = local_40;
    if ((local_40 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40 + 9), iVar3 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e5160  rive::TextStyle::validate =====

/* rive::TextStyle::validate(rive::CoreContext*) */

long * __thiscall rive::TextStyle::validate(TextStyle *this,CoreContext *param_1)

{
  short sVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
  if (plVar2 != (long *)0x0) {
    sVar1 = (**(code **)(*plVar2 + 0x10))();
    plVar2 = (long *)(ulong)(sVar1 == 0x86 || sVar1 == 0x239);
  }
  return plVar2;
}


// ===== 004e51ac  rive::TextStyle::onAddedClean =====

/* rive::TextStyle::onAddedClean(rive::CoreContext*) */

ulong __thiscall rive::TextStyle::onAddedClean(TextStyle *this,CoreContext *param_1)

{
  undefined *puVar1;
  short sVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x30);
  if (plVar5 != (long *)0x0) {
    sVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (sVar2 == 0x239) {
      plVar5 = plVar5 + 0x33;
      goto LAB_004e5204;
    }
    if (sVar2 == 0x86) {
      plVar5 = plVar5 + 0x35;
      goto LAB_004e5204;
    }
  }
  plVar5 = (long *)0x0;
LAB_004e5204:
  *(long **)(this + 0x130) = plVar5;
  if ((*(long *)(this + 0xe8) != *(long *)(this + 0xf0)) ||
     (*(long *)(this + 0x100) != *(long *)(this + 0x108))) {
    plVar5 = (long *)operator_new(0x90);
    *(undefined2 *)(plVar5 + 2) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffffffff;
    *(undefined4 *)(plVar5 + 5) = 0;
    plVar5[6] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
    plVar5[0xf] = 0;
    puVar1 = PTR_vtable_0067d7c0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0x11] = (long)this;
    *plVar5 = (long)(puVar1 + 0x10);
    plVar3 = *(long **)(this + 0xc0);
    *(long **)(this + 0xc0) = plVar5;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar5 = *(long **)(this + 0xc0);
  if ((plVar5 == (long *)0x0) ||
     ((uVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,param_1), (uVar4 & 0xff) == 0 &&
      (uVar4 = (**(code **)(**(long **)(this + 0xc0) + 0x40))(*(long **)(this + 0xc0),param_1),
      (uVar4 & 0xff) == 0)))) {
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 004e52d4  rive::TextStyle::import =====

/* rive::TextStyle::import(rive::ImportStack&) */

undefined8 __thiscall rive::TextStyle::import(TextStyle *this,ImportStack *param_1)

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
  if (uVar4 != 0) {
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
            BackboardImporter::addFileAssetReferencer
                      ((BackboardImporter *)plVar6[3],(FileAssetReferencer *)(this + 0xb0));
            uVar9 = Component::import((Component *)this,param_1);
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
      } while (plVar6 != (long *)0x0);
    }
  }
  return 1;
}


// ===== 004e53d0  rive::TextStyle::buildDependencies =====

/* rive::TextStyle::buildDependencies() */

void __thiscall rive::TextStyle::buildDependencies(TextStyle *this)

{
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 0x68))();
  }
  Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
  return;
}


// ===== 004e5408  rive::TextStyle::onDirty =====

/* rive::TextStyle::onDirty(rive::ComponentDirt) */

void __thiscall rive::TextStyle::onDirty(TextStyle *this,uint param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  if (((param_2 >> 4 & 1) != 0) && (*(long **)(this + 0x130) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x130) + 8))();
    plVar3 = *(long **)(this + 0xc0);
    if ((plVar3 != (long *)0x0) && ((*(ushort *)(plVar3 + 0xc) >> 4 & 1) == 0)) {
      *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x10;
      (**(code **)(*plVar3 + 0x70))(plVar3);
      lVar2 = plVar3[0x10];
      uVar1 = *(uint *)(plVar3 + 7);
      *(undefined1 *)(lVar2 + 0xc32) = 1;
      *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
      if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
        *(uint *)(lVar2 + 0xbd4) = uVar1;
      }
    }
  }
  return;
}


// ===== 004e5490  rive::TextStyle::fontSizeChanged =====

/* rive::TextStyle::fontSizeChanged() */

void __thiscall rive::TextStyle::fontSizeChanged(TextStyle *this)

{
                    /* WARNING: Could not recover jumptable at 0x004e549c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x130) + 8))();
  return;
}


// ===== 004e54a0  rive::TextStyle::lineHeightChanged =====

/* rive::TextStyle::lineHeightChanged() */

void __thiscall rive::TextStyle::lineHeightChanged(TextStyle *this)

{
                    /* WARNING: Could not recover jumptable at 0x004e54ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x130) + 8))();
  return;
}


// ===== 004e54b0  rive::TextStyle::letterSpacingChanged =====

/* rive::TextStyle::letterSpacingChanged() */

void __thiscall rive::TextStyle::letterSpacingChanged(TextStyle *this)

{
                    /* WARNING: Could not recover jumptable at 0x004e54bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x130) + 8))();
  return;
}


// ===== 004e54c0  FUN_004e54c0 =====

void FUN_004e54c0(void)

{
  return;
}


// ===== 004e54c4  rive::TextStyle::setAsset =====

/* rive::TextStyle::setAsset(rive::rcp<rive::FileAsset>) */

void __thiscall rive::TextStyle::setAsset(TextStyle *this,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,0x8d);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)*param_2;
    local_40 = plVar4;
    if (plVar4 == (long *)0x0) {
      FileAssetReferencer::setAsset((FileAssetReferencer *)(this + 0xb0),&local_40);
    }
    else {
      FUN_00340fb0(1,plVar4 + 9);
      FileAssetReferencer::setAsset((FileAssetReferencer *)(this + 0xb0),&local_40);
      iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 9);
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e558c  rive::TextStyle::assetId =====

/* rive::TextStyle::assetId() */

undefined4 __thiscall rive::TextStyle::assetId(TextStyle *this)

{
  return *(undefined4 *)(this + 0xac);
}


// ===== 004e5594  FUN_004e5594 =====

void FUN_004e5594(long param_1)

{
  FUN_004e4ba8(param_1 + -0xb0);
  return;
}


// ===== 004e559c  FUN_004e559c =====

void FUN_004e559c(long param_1)

{
  FUN_004e4ba8((void *)(param_1 + -0xb0));
  operator_delete((void *)(param_1 + -0xb0));
  return;
}


// ===== 004e55c4  rive::TextStyle::setAsset =====

/* non-virtual thunk to rive::TextStyle::setAsset(rive::rcp<rive::FileAsset>) */

void __thiscall rive::TextStyle::setAsset(TextStyle *this,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,0x8d);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)*param_2;
    local_40 = plVar4;
    if (plVar4 == (long *)0x0) {
      FileAssetReferencer::setAsset((FileAssetReferencer *)this,&local_40);
    }
    else {
      FUN_00340fb0(1,plVar4 + 9);
      FileAssetReferencer::setAsset((FileAssetReferencer *)this,&local_40);
      iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 9);
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e568c  rive::TextStyle::assetId =====

/* non-virtual thunk to rive::TextStyle::assetId() */

undefined4 __thiscall rive::TextStyle::assetId(TextStyle *this)

{
  return *(undefined4 *)(this + -4);
}


// ===== 004e5694  rive::TextStyle::addVariation =====

/* rive::TextStyle::addVariation(rive::TextStyleAxis*) */

void __thiscall rive::TextStyle::addVariation(TextStyle *this,TextStyleAxis *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xf0);
  if (puVar10 < *(undefined8 **)(this + 0xf8)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004e57d4;
  }
  puVar9 = *(undefined8 **)(this + 0xe8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004e57f8();
LAB_004e57f4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xf8) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004e57f4;
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
      if (uVar6 == uVar7) goto LAB_004e57c0;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xe8);
  }
LAB_004e57c0:
  *(undefined8 **)(this + 0xe8) = puVar4;
  *(undefined8 **)(this + 0xf0) = puVar13;
  *(void **)(this + 0xf8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004e57d4:
  *(undefined8 **)(this + 0xf0) = puVar13;
  return;
}


// ===== 004e57f8  FUN_004e57f8 =====

void FUN_004e57f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004e580c  rive::TextStyle::addFeature =====

/* rive::TextStyle::addFeature(rive::TextStyleFeature*) */

void __thiscall rive::TextStyle::addFeature(TextStyle *this,TextStyleFeature *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x108);
  if (puVar10 < *(undefined8 **)(this + 0x110)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004e594c;
  }
  puVar9 = *(undefined8 **)(this + 0x100);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004e5970();
LAB_004e596c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x110) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004e596c;
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
      if (uVar6 == uVar7) goto LAB_004e5938;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x100);
  }
LAB_004e5938:
  *(undefined8 **)(this + 0x100) = puVar4;
  *(undefined8 **)(this + 0x108) = puVar13;
  *(void **)(this + 0x110) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004e594c:
  *(undefined8 **)(this + 0x108) = puVar13;
  return;
}


// ===== 004e5970  FUN_004e5970 =====

void FUN_004e5970(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004e5984  rive::TextStyle::font =====

/* rive::TextStyle::font() const */

void rive::TextStyle::font(void)

{
  TextStyle *in_x0;
  long *in_x8;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 200);
  if (lVar1 == 0) {
    if ((*(long *)(in_x0 + 0xe8) != *(long *)(in_x0 + 0xf0)) ||
       (*(long *)(in_x0 + 0x100) != *(long *)(in_x0 + 0x108))) {
      updateVariableFont(in_x0);
      lVar1 = *(long *)(in_x0 + 200);
      if (lVar1 != 0) goto LAB_004e59d8;
    }
    if (*(long *)(in_x0 + 0xb8) == 0) {
      lVar1 = 0;
      goto LAB_004e59e4;
    }
    lVar1 = *(long *)(*(long *)(in_x0 + 0xb8) + 0x80);
    if (lVar1 == 0) goto LAB_004e59e4;
  }
LAB_004e59d8:
  FUN_00340fb0(1,lVar1 + 8);
LAB_004e59e4:
  *in_x8 = lVar1;
  return;
}


// ===== 004e59fc  rive::TextStyle::updateVariableFont =====

/* rive::TextStyle::updateVariableFont() const */

void __thiscall rive::TextStyle::updateVariableFont(TextStyle *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  long *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0xb8) != 0) &&
     (plVar6 = *(long **)(*(long *)(this + 0xb8) + 0x80), plVar6 != (long *)0x0)) {
    FUN_00340fb0(1,plVar6 + 1);
    plVar16 = *(long **)(this + 0xe8);
    plVar15 = *(long **)(this + 0xf0);
    if (plVar16 == plVar15) {
      plVar16 = *(long **)(this + 0x100);
      plVar15 = *(long **)(this + 0x108);
      if (plVar16 != plVar15) {
        puVar18 = *(undefined8 **)(this + 0xd0);
        *(undefined8 **)(this + 0xd8) = puVar18;
        goto LAB_004e5c00;
      }
      plVar16 = *(long **)(this + 200);
      *(undefined8 *)(this + 200) = 0;
      if ((plVar16 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,plVar16 + 1), iVar4 == 1)) {
        lVar17 = *plVar16;
        goto LAB_004e5e5c;
      }
    }
    else {
      puVar18 = *(undefined8 **)(this + 0xd0);
      *(undefined8 **)(this + 0xd8) = puVar18;
      do {
        uVar1 = *(undefined4 *)(*plVar16 + 0x88);
        uVar23 = *(undefined4 *)(*plVar16 + 0x8c);
        if (puVar18 < *(undefined8 **)(this + 0xe0)) {
          *(undefined4 *)puVar18 = uVar1;
          *(undefined4 *)((long)puVar18 + 4) = uVar23;
          puVar18 = puVar18 + 1;
        }
        else {
          puVar14 = *(undefined8 **)(this + 0xd0);
          lVar17 = (long)puVar18 - (long)puVar14;
          uVar9 = (lVar17 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
            FUN_004dab94();
            goto LAB_004e5ec4;
          }
          uVar7 = (long)*(undefined8 **)(this + 0xe0) - (long)puVar14;
          uVar10 = (long)uVar7 >> 2;
          if (uVar10 <= uVar9) {
            uVar10 = uVar9;
          }
          if (0x7ffffffffffffff7 < uVar7) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            if (uVar10 >> 0x3d != 0) goto LAB_004e5ebc;
            pvVar5 = operator_new(uVar10 << 3);
          }
          puVar19 = (undefined8 *)((long)pvVar5 + (lVar17 >> 3) * 8);
          *(undefined4 *)puVar19 = uVar1;
          *(undefined4 *)((long)puVar19 + 4) = uVar23;
          puVar8 = puVar19;
          puVar12 = puVar18;
          if ((long)puVar18 - (long)puVar14 != 0) {
            uVar9 = ((long)puVar18 - (long)puVar14) - 8;
            if ((((0x147 < uVar9) &&
                 (uVar7 = (long)pvVar5 + lVar17 + -8, uVar7 - (uVar9 & 0xfffffffffffffff8) <= uVar7)
                 ) && ((undefined8 *)((long)(puVar18 + -1) - (uVar9 & 0xfffffffffffffff8)) <=
                       puVar18 + -1)) && (0x1f < (ulong)((long)puVar18 + (-lVar17 - (long)pvVar5))))
            {
              puVar8 = puVar19 + -2;
              puVar12 = puVar18 + -2;
              uVar9 = (uVar9 >> 3) + 1;
              uVar11 = uVar9 & 0x3ffffffffffffffc;
              puVar18 = puVar18 + -uVar11;
              uVar7 = uVar11;
              do {
                puVar13 = puVar12 + -1;
                uVar22 = puVar12[-2];
                uVar21 = puVar12[1];
                uVar20 = *puVar12;
                uVar7 = uVar7 - 4;
                puVar12 = puVar12 + -4;
                puVar8[-1] = *puVar13;
                puVar8[-2] = uVar22;
                puVar8[1] = uVar21;
                *puVar8 = uVar20;
                puVar8 = puVar8 + -4;
              } while (uVar7 != 0);
              puVar8 = puVar19 + -uVar11;
              puVar12 = puVar14;
              if (uVar9 == uVar11) goto LAB_004e5b3c;
            }
            do {
              puVar18 = puVar18 + -1;
              puVar8 = puVar8 + -1;
              *puVar8 = *puVar18;
            } while (puVar18 != puVar14);
            puVar12 = *(undefined8 **)(this + 0xd0);
          }
LAB_004e5b3c:
          puVar18 = puVar19 + 1;
          *(undefined8 **)(this + 0xd0) = puVar8;
          *(undefined8 **)(this + 0xd8) = puVar18;
          *(void **)(this + 0xe0) = (void *)((long)pvVar5 + uVar10 * 8);
          if (puVar12 != (undefined8 *)0x0) {
            operator_delete(puVar12);
          }
        }
        plVar16 = plVar16 + 1;
        *(undefined8 **)(this + 0xd8) = puVar18;
      } while (plVar16 != plVar15);
      plVar16 = *(long **)(this + 0x100);
      plVar15 = *(long **)(this + 0x108);
LAB_004e5c00:
      puVar14 = *(undefined8 **)(this + 0x118);
      *(undefined8 **)(this + 0x120) = puVar14;
      puVar19 = puVar14;
      if (plVar16 != plVar15) {
        do {
          uVar20 = *(undefined8 *)(*plVar16 + 0x88);
          if (puVar14 < *(undefined8 **)(this + 0x128)) {
            puVar19 = puVar14 + 1;
            *puVar14 = *(undefined8 *)(*plVar16 + 0x88);
          }
          else {
            puVar18 = *(undefined8 **)(this + 0x118);
            lVar17 = (long)puVar14 - (long)puVar18;
            uVar9 = (lVar17 >> 3) + 1;
            if (uVar9 >> 0x3d != 0) goto LAB_004e5ec4;
            uVar7 = (long)*(undefined8 **)(this + 0x128) - (long)puVar18;
            uVar10 = (long)uVar7 >> 2;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7ffffffffffffff7 < uVar7) {
              uVar10 = 0x1fffffffffffffff;
            }
            if (uVar10 == 0) {
              pvVar5 = (void *)0x0;
            }
            else {
              if (uVar10 >> 0x3d != 0) {
LAB_004e5ebc:
                    /* WARNING: Subroutine does not return */
                FUN_00324008();
              }
              pvVar5 = operator_new(uVar10 << 3);
            }
            puVar8 = (undefined8 *)((long)pvVar5 + (lVar17 >> 3) * 8);
            puVar19 = puVar8 + 1;
            *puVar8 = uVar20;
            puVar12 = puVar14;
            if ((long)puVar14 - (long)puVar18 != 0) {
              uVar9 = ((long)puVar14 - (long)puVar18) - 8;
              if (((0x147 < uVar9) &&
                  (uVar7 = (long)pvVar5 + lVar17 + -8, uVar7 - (uVar9 & 0xfffffffffffffff8) <= uVar7
                  )) && (((undefined8 *)((long)(puVar14 + -1) - (uVar9 & 0xfffffffffffffff8)) <=
                          puVar14 + -1 && (0x1f < (ulong)((long)puVar14 + (-lVar17 - (long)pvVar5)))
                         ))) {
                puVar12 = puVar8 + -2;
                puVar13 = puVar14 + -2;
                uVar9 = (uVar9 >> 3) + 1;
                uVar11 = uVar9 & 0x3ffffffffffffffc;
                puVar14 = puVar14 + -uVar11;
                uVar7 = uVar11;
                do {
                  puVar3 = puVar13 + -1;
                  uVar22 = puVar13[-2];
                  uVar21 = puVar13[1];
                  uVar20 = *puVar13;
                  uVar7 = uVar7 - 4;
                  puVar13 = puVar13 + -4;
                  puVar12[-1] = *puVar3;
                  puVar12[-2] = uVar22;
                  puVar12[1] = uVar21;
                  *puVar12 = uVar20;
                  puVar12 = puVar12 + -4;
                } while (uVar7 != 0);
                puVar8 = puVar8 + -uVar11;
                puVar12 = puVar18;
                if (uVar9 == uVar11) goto LAB_004e5cdc;
              }
              do {
                puVar14 = puVar14 + -1;
                puVar8 = puVar8 + -1;
                *puVar8 = *puVar14;
              } while (puVar14 != puVar18);
              puVar12 = *(undefined8 **)(this + 0x118);
            }
LAB_004e5cdc:
            *(undefined8 **)(this + 0x118) = puVar8;
            *(undefined8 **)(this + 0x120) = puVar19;
            *(void **)(this + 0x128) = (void *)((long)pvVar5 + uVar10 * 8);
            if (puVar12 != (undefined8 *)0x0) {
              operator_delete(puVar12);
            }
          }
          plVar16 = plVar16 + 1;
          *(undefined8 **)(this + 0x120) = puVar19;
          puVar14 = puVar19;
        } while (plVar16 != plVar15);
        puVar18 = *(undefined8 **)(this + 0xd8);
        puVar14 = *(undefined8 **)(this + 0x118);
      }
      (**(code **)(*plVar6 + 0x50))
                (&local_80,plVar6,*(long *)(this + 0xd0),(long)puVar18 - *(long *)(this + 0xd0) >> 3
                 ,puVar14,(long)puVar19 - (long)puVar14 >> 3);
      plVar16 = local_80;
      plVar15 = *(long **)(this + 200);
      local_80 = (long *)0x0;
      *(long **)(this + 200) = plVar16;
      if (plVar15 != (long *)0x0) {
        iVar4 = FUN_00340fe0(0xffffffff,plVar15 + 1);
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
        plVar16 = local_80;
        if ((local_80 != (long *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_80 + 1), iVar4 == 1)
           ) {
          lVar17 = *plVar16;
LAB_004e5e5c:
          (**(code **)(lVar17 + 8))(plVar16);
        }
      }
    }
    iVar4 = FUN_00340fe0(0xffffffff,plVar6 + 1);
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
LAB_004e5ec8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_004e5ec4:
  FUN_004e5ecc();
  goto LAB_004e5ec8;
}


// ===== 004e5ecc  FUN_004e5ecc =====

void FUN_004e5ecc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004e5ee0  rive::TextInterface::from =====

/* rive::TextInterface::from(rive::Core*) */

Core * rive::TextInterface::from(Core *param_1)

{
  short sVar1;
  
  if (param_1 != (Core *)0x0) {
    sVar1 = (**(code **)(*(long *)param_1 + 0x10))();
    if (sVar1 == 0x239) {
      param_1 = param_1 + 0x198;
    }
    else if (sVar1 == 0x86) {
      param_1 = param_1 + 0x1a8;
    }
    else {
      param_1 = (Core *)0x0;
    }
  }
  return param_1;
}


// ===== 004e5f34  rive::TextStyleBase::clone =====

/* rive::TextStyleBase::clone() const */

TextStyle * __thiscall rive::TextStyleBase::clone(TextStyleBase *this)

{
  undefined4 uVar1;
  TextStyle *this_00;
  undefined4 uVar2;
  
  this_00 = (TextStyle *)operator_new(0x138);
  TextStyle::TextStyle(this_00);
  uVar2 = *(undefined4 *)(this + 0xa8);
  uVar1 = *(undefined4 *)(this + 0xac);
  *(undefined8 *)(this_00 + 0xa0) = *(undefined8 *)(this + 0xa0);
  *(undefined4 *)(this_00 + 0xa8) = uVar2;
  *(undefined4 *)(this_00 + 0xac) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004e5f90  FUN_004e5f90 =====

void FUN_004e5f90(long *param_1)

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


// ===== 004e601c  FUN_004e601c =====

void FUN_004e601c(void)

{
  return;
}


// ===== 004e6020  FUN_004e6020 =====

void FUN_004e6020(void)

{
  return;
}


// ===== 004e6024  FUN_004e6024 =====

void FUN_004e6024(void)

{
  return;
}


// ===== 004e6028  rive::TextStyleAxis::onAddedDirty =====

/* rive::TextStyleAxis::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::TextStyleAxis::onAddedDirty(TextStyleAxis *this,CoreContext *param_1)

{
  TextStyleAxis *pTVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pTVar1 = (TextStyleAxis *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TextStyleAxis *)(param_1 + -0x998);
  }
  *(TextStyleAxis **)(this + 0x40) = pTVar1;
  *(TextStyleAxis **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x23d);
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    TextStyle::addVariation(*(TextStyle **)(this + 0x30),this);
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 004e60bc  rive::TextStyleAxis::tagChanged =====

/* rive::TextStyleAxis::tagChanged() */

void __thiscall rive::TextStyleAxis::tagChanged(TextStyleAxis *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((*(ushort *)(plVar3 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x10;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004e6124  rive::TextStyleAxis::axisValueChanged =====

/* rive::TextStyleAxis::axisValueChanged() */

void __thiscall rive::TextStyleAxis::axisValueChanged(TextStyleAxis *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((*(ushort *)(plVar3 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x10;
    (**(code **)(*plVar3 + 0x70))(plVar3);
    lVar2 = plVar3[0x10];
    uVar1 = *(uint *)(plVar3 + 7);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004e618c  FUN_004e618c =====

void FUN_004e618c(long *param_1)

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


// ===== 004e61f8  FUN_004e61f8 =====

undefined8 FUN_004e61f8(void)

{
  return 0x90;
}


// ===== 004e6200  FUN_004e6200 =====

bool FUN_004e6200(undefined8 param_1,short param_2)

{
  return param_2 == 0x90 || param_2 == 10;
}


// ===== 004e6214  FUN_004e6214 =====

undefined8 FUN_004e6214(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x120) {
    if (param_2 == 4) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e63c0;
        }
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar13;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004e63c0:
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
      if (param_2 != 5) goto LAB_004e6408;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e638c;
        }
        pbVar10 = pbVar11 + 1;
        bVar1 = *pbVar11;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar11 = pbVar10;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar10;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e638c:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 == 0x120) {
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
      goto LAB_004e6408;
    }
    if (param_2 != 0x121) goto LAB_004e6408;
    uVar14 = 0;
    uVar6 = 0;
    pbVar11 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004e63a4;
      }
      pbVar10 = pbVar11 + 1;
      bVar1 = *pbVar11;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar11 = pbVar10;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar10;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e63a4:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004e6408:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e6430  rive::TextStyleAxisBase::clone =====

/* rive::TextStyleAxisBase::clone() const */

long * __thiscall rive::TextStyleAxisBase::clone(TextStyleAxisBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  
  plVar2 = (long *)operator_new(0x90);
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
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  puVar1 = PTR_vtable_0067d4d8;
  uVar3 = *(undefined4 *)(this + 0x8c);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  *(undefined4 *)((long)plVar2 + 0x8c) = uVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0x11) = *(undefined4 *)(this + 0x88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004e64c4  FUN_004e64c4 =====

void FUN_004e64c4(long *param_1)

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


// ===== 004e6530  FUN_004e6530 =====

void FUN_004e6530(void)

{
  return;
}


// ===== 004e6534  FUN_004e6534 =====

void FUN_004e6534(void)

{
  return;
}


// ===== 004e6538  rive::TextStyleFeature::onAddedDirty =====

/* rive::TextStyleFeature::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::TextStyleFeature::onAddedDirty(TextStyleFeature *this,CoreContext *param_1)

{
  TextStyleFeature *pTVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pTVar1 = (TextStyleFeature *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TextStyleFeature *)(param_1 + -0x998);
  }
  *(TextStyleFeature **)(this + 0x40) = pTVar1;
  *(TextStyleFeature **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x23d);
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    TextStyle::addFeature(*(TextStyle **)(this + 0x30),this);
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 004e65cc  FUN_004e65cc =====

void FUN_004e65cc(long *param_1)

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


// ===== 004e6638  FUN_004e6638 =====

undefined8 FUN_004e6638(void)

{
  return 0xa4;
}


// ===== 004e6640  FUN_004e6640 =====

bool FUN_004e6640(undefined8 param_1,short param_2)

{
  return param_2 == 0xa4 || param_2 == 10;
}


// ===== 004e6654  FUN_004e6654 =====

undefined8 FUN_004e6654(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x164) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e6828;
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
LAB_004e6828:
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
      if (param_2 != 5) goto LAB_004e6870;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e67f4;
        }
        pbVar8 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar8;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar8;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e67f4:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x165) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004e6860;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e6860:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x8c) = (int)uVar6;
  }
  else {
    if (param_2 != 0x164) goto LAB_004e6870;
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004e680c;
      }
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar8;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e680c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004e6870:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e6898  FUN_004e6898 =====

void FUN_004e6898(void)

{
  return;
}


// ===== 004e689c  FUN_004e689c =====

void FUN_004e689c(void)

{
  return;
}


// ===== 004e68a0  rive::TextStyleFeatureBase::clone =====

/* rive::TextStyleFeatureBase::clone() const */

long * __thiscall rive::TextStyleFeatureBase::clone(TextStyleFeatureBase *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)operator_new(0x90);
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
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  puVar1 = PTR_vtable_0067d4b0;
  lVar3 = *(long *)(this + 0x88);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x11] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004e692c  FUN_004e692c =====

void FUN_004e692c(long *param_1)

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


// ===== 004e6998  rive::TextStylePaint::TextStylePaint =====

/* rive::TextStylePaint::TextStylePaint() */

void __thiscall rive::TextStylePaint::TextStylePaint(TextStylePaint *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  uVar1 = DAT_0024e738;
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
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  this[0x140] = (TextStylePaint)0x0;
  *(undefined8 *)(this + 0x158) = 0;
  puVar2 = PTR_vtable_0067d7c8;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined **)(this + 0x138) = puVar2 + 0x148;
  *(undefined8 *)(this + 0xa8) = 0xffffffff00000000;
  *(undefined **)(this + 0xb0) = puVar2 + 0x110;
  *(undefined4 *)(this + 0x180) = 0x3f800000;
  *(undefined8 *)(this + 0x188) = 0;
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(this + 0x1a0),1,2);
  this[0x1f8] = (TextStylePaint)0x0;
  return;
}


// ===== 004e6a60  FUN_004e6a60 =====

void FUN_004e6a60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  
  pvVar4 = (void *)param_1[0x39];
  puVar1 = PTR_vtable_0067d7c8 + 0x110;
  puVar2 = PTR_vtable_0067d7c8 + 0x148;
  *param_1 = (long)(PTR_vtable_0067d7c8 + 0x10);
  param_1[0x16] = (long)puVar1;
  param_1[0x27] = (long)puVar2;
  if (pvVar4 != (void *)0x0) {
    param_1[0x3a] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x36];
  if (pvVar4 != (void *)0x0) {
    param_1[0x37] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  plVar6 = (long *)param_1[0x35];
  if ((plVar6 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar3 == 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  puVar7 = (undefined8 *)param_1[0x31];
  if (puVar7 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)param_1[0x32];
    puVar5 = puVar7;
    if (puVar8 != puVar7) {
      do {
        puVar8 = puVar8 + -1;
        plVar6 = (long *)*puVar8;
        if ((plVar6 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar3 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      } while (puVar8 != puVar7);
      puVar5 = (undefined8 *)param_1[0x31];
    }
    param_1[0x32] = (long)puVar7;
    operator_delete(puVar5);
  }
  puVar7 = (undefined8 *)param_1[0x2e];
  while (puVar7 != (undefined8 *)0x0) {
    pvVar4 = (void *)puVar7[8];
    pvVar9 = (void *)*puVar7;
    if (pvVar4 != (void *)0x0) {
      puVar7[9] = pvVar4;
      operator_delete(pvVar4);
    }
    pvVar4 = (void *)puVar7[5];
    if (pvVar4 != (void *)0x0) {
      puVar7[6] = pvVar4;
      operator_delete(pvVar4);
    }
    plVar6 = (long *)puVar7[4];
    if ((plVar6 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar3 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    operator_delete(puVar7);
    puVar7 = (undefined8 *)pvVar9;
  }
  pvVar4 = (void *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x29];
  param_1[0x27] = (long)&PTR___cxa_pure_virtual_00675f40;
  if (pvVar4 != (void *)0x0) {
    param_1[0x2a] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_004e4ba8(param_1);
  return;
}


// ===== 004e6bec  FUN_004e6bec =====

void FUN_004e6bec(void *param_1)

{
  FUN_004e6a60();
  operator_delete(param_1);
  return;
}


// ===== 004e6c10  FUN_004e6c10 =====

undefined8 FUN_004e6c10(void)

{
  return 0x89;
}


// ===== 004e6c18  FUN_004e6c18 =====

undefined8 FUN_004e6c18(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (((1 < param_2 - 10) && (param_2 != 0x89)) && (param_2 != 0x23d)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004e6c44  rive::TextStylePaint::clone =====

/* rive::TextStylePaint::clone() const */

TextStylePaint * __thiscall rive::TextStylePaint::clone(TextStylePaint *this)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  TextStylePaint *this_00;
  long *plVar4;
  undefined4 uVar5;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (TextStylePaint *)operator_new(0x200);
  TextStylePaint(this_00);
  uVar5 = *(undefined4 *)(this + 0xa8);
  uVar1 = *(undefined4 *)(this + 0xac);
  *(undefined8 *)(this_00 + 0xa0) = *(undefined8 *)(this + 0xa0);
  *(undefined4 *)(this_00 + 0xa8) = uVar5;
  *(undefined4 *)(this_00 + 0xac) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  plVar4 = *(long **)(this + 0xb8);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  if (plVar4 != (long *)0x0) {
    FUN_00340fb0(1,plVar4 + 9);
    local_40 = plVar4;
    (**(code **)(*(long *)this_00 + 0xb8))(this_00,&local_40);
    plVar4 = local_40;
    if ((local_40 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40 + 9), iVar3 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e6d28  rive::TextStylePaint::shapeWorldTransform =====

/* rive::TextStylePaint::shapeWorldTransform() const */

long __thiscall rive::TextStylePaint::shapeWorldTransform(TextStylePaint *this)

{
  return *(long *)(this + 0x30) + 0x1d0;
}


// ===== 004e6d34  rive::TextStylePaint::pathBuilder =====

/* rive::TextStylePaint::pathBuilder() */

undefined8 __thiscall rive::TextStylePaint::pathBuilder(TextStylePaint *this)

{
  return *(undefined8 *)(this + 0x30);
}


// ===== 004e6d3c  FUN_004e6d3c =====

long FUN_004e6d3c(long param_1)

{
  return param_1 + 0x1a0;
}


// ===== 004e6d44  FUN_004e6d44 =====

long FUN_004e6d44(long param_1)

{
  return param_1 + 0x1a0;
}


// ===== 004e6d4c  FUN_004e6d4c =====

undefined8 FUN_004e6d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 004e6d54  FUN_004e6d54 =====

void FUN_004e6d54(long param_1)

{
  FUN_004e6a60(param_1 + -0xb0);
  return;
}


// ===== 004e6d5c  FUN_004e6d5c =====

void FUN_004e6d5c(long param_1)

{
  FUN_004e6a60((void *)(param_1 + -0xb0));
  operator_delete((void *)(param_1 + -0xb0));
  return;
}


// ===== 004e6d84  FUN_004e6d84 =====

undefined8 FUN_004e6d84(long param_1)

{
  return *(undefined8 *)(param_1 + -0xf8);
}


// ===== 004e6d8c  rive::TextStylePaint::pathBuilder =====

/* non-virtual thunk to rive::TextStylePaint::pathBuilder() */

undefined8 __thiscall rive::TextStylePaint::pathBuilder(TextStylePaint *this)

{
  return *(undefined8 *)(this + -0x108);
}


// ===== 004e6d98  FUN_004e6d98 =====

void FUN_004e6d98(long param_1)

{
  FUN_004e6a60(param_1 + -0x138);
  return;
}


// ===== 004e6da0  FUN_004e6da0 =====

void FUN_004e6da0(long param_1)

{
  FUN_004e6a60((void *)(param_1 + -0x138));
  operator_delete((void *)(param_1 + -0x138));
  return;
}


// ===== 004e6dc8  rive::TextStylePaint::shapeWorldTransform =====

/* non-virtual thunk to rive::TextStylePaint::shapeWorldTransform() const */

long __thiscall rive::TextStylePaint::shapeWorldTransform(TextStylePaint *this)

{
  return *(long *)(this + -0x108) + 0x1d0;
}


// ===== 004e6dd8  FUN_004e6dd8 =====

long FUN_004e6dd8(long param_1)

{
  return param_1 + 0x68;
}


// ===== 004e6de0  FUN_004e6de0 =====

long FUN_004e6de0(long param_1)

{
  return param_1 + 0x68;
}


// ===== 004e6de8  rive::TextStylePaint::rewindPath =====

/* rive::TextStylePaint::rewindPath() */

void __thiscall rive::TextStylePaint::rewindPath(TextStylePaint *this)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  
  this[0x1a0] = (TextStylePaint)0x1;
  this[0x1e8] = (TextStylePaint)0x0;
  *(undefined8 *)(this + 0x1b8) = *(undefined8 *)(this + 0x1b0);
  *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(this + 0x1c8);
  this[0x1f8] = (TextStylePaint)0x0;
  if (*(long *)(this + 0x178) != 0) {
    puVar1 = (undefined8 *)*(void **)(this + 0x170);
    while (puVar1 != (undefined8 *)0x0) {
      pvVar3 = (void *)puVar1[8];
      pvVar7 = (void *)*puVar1;
      if (pvVar3 != (void *)0x0) {
        puVar1[9] = pvVar3;
        operator_delete(pvVar3);
      }
      pvVar3 = (void *)puVar1[5];
      if (pvVar3 != (void *)0x0) {
        puVar1[6] = pvVar3;
        operator_delete(pvVar3);
      }
      plVar6 = (long *)puVar1[4];
      if ((plVar6 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar2 == 1)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar7;
    }
    lVar4 = *(long *)(this + 0x168);
    *(undefined8 *)(this + 0x170) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x160) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(this + 0x178) = 0;
  }
  return;
}


// ===== 004e6ec8  rive::TextStylePaint::addPath =====

/* rive::TextStylePaint::addPath(rive::RawPath const&, float) */

void __thiscall rive::TextStylePaint::addPath(TextStylePaint *this,RawPath *param_1,float param_2)

{
  ulong uVar1;
  TextStylePaint TVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x22;
  undefined2 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  ShapePaintPath local_c0 [8];
  long *local_b8;
  void *local_b0;
  void *pvStack_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  undefined1 local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  TVar2 = this[0x1f8];
  this[0x1f8] = (TextStylePaint)0x1;
  if (param_2 == 0.0 || param_2 < 0.0 != NAN(param_2)) goto LAB_004e756c;
  fVar21 = (float)RawPath::computeCoarseArea(param_1);
  if (0.0 <= fVar21) {
    auVar23 = RawPath::addPath((RawPath *)(this + 0x1b0),param_1,(Mat2D *)0x0);
  }
  else {
    auVar23 = RawPath::addPathBackwards((RawPath *)(this + 0x1b0),param_1,(Mat2D *)0x0);
  }
  RawPath::pruneEmptySegments(this + 0x1b0,auVar23._0_8_,auVar23._8_8_);
  uVar8 = *(ulong *)(this + 0x168);
  this[0x1a0] = (TextStylePaint)0x1;
  uVar1 = 0;
  if (param_2 != 0.0) {
    uVar1 = (ulong)(uint)param_2;
  }
  if (uVar8 != 0) {
    uVar22 = NEON_cnt(uVar8,1);
    uVar20 = NEON_uaddlv(uVar22,1);
    uVar13 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar20) & 0xffffffff;
    if (uVar13 < 2) {
      uVar15 = uVar1 & uVar8 + 0xffffffff;
    }
    else {
      uVar15 = uVar1;
      if (uVar8 <= uVar1) {
        uVar15 = 0;
        if (uVar8 != 0) {
          uVar15 = uVar1 / uVar8;
        }
        uVar15 = uVar1 - uVar15 * uVar8;
      }
    }
    plVar16 = *(long **)(*(long *)(this + 0x160) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      do {
        uVar18 = plVar16[1];
        if (uVar18 == uVar1) {
          if (*(float *)(plVar16 + 2) == param_2) goto LAB_004e7524;
        }
        else {
          if (uVar13 < 2) {
            uVar18 = uVar18 & uVar8 - 1;
          }
          else if (uVar8 <= uVar18) {
            uVar19 = 0;
            if (uVar8 != 0) {
              uVar19 = uVar18 / uVar8;
            }
            uVar18 = uVar18 - uVar19 * uVar8;
          }
          if (uVar18 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  ShapePaintPath::ShapePaintPath(local_c0,1,2);
  uVar8 = *(ulong *)(this + 0x168);
  if (uVar8 != 0) {
    uVar22 = NEON_cnt(uVar8,1);
    uVar20 = NEON_uaddlv(uVar22,1);
    uVar13 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar20) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x22 = uVar1 & uVar8 + 0xffffffff;
    }
    else {
      unaff_x22 = uVar1;
      if (uVar8 <= uVar1) {
        uVar15 = 0;
        if (uVar8 != 0) {
          uVar15 = uVar1 / uVar8;
        }
        unaff_x22 = uVar1 - uVar15 * uVar8;
      }
    }
    puVar12 = *(undefined8 **)(*(long *)(this + 0x160) + unaff_x22 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar12, plVar16 != (long *)0x0)) {
      do {
        uVar15 = plVar16[1];
        if (uVar15 == uVar1) {
          if (*(float *)(plVar16 + 2) == param_2) goto LAB_004e7390;
        }
        else {
          if (uVar13 < 2) {
            uVar15 = uVar15 & uVar8 - 1;
          }
          else if (uVar8 <= uVar15) {
            uVar18 = 0;
            if (uVar8 != 0) {
              uVar18 = uVar15 / uVar8;
            }
            uVar15 = uVar15 - uVar18 * uVar8;
          }
          if (uVar15 != unaff_x22) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  plVar16 = (long *)operator_new(0x70);
  *plVar16 = 0;
  plVar16[1] = uVar1;
  *(float *)(plVar16 + 2) = param_2;
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar16 + 3),true);
  if ((uVar8 == 0) ||
     (*(float *)(this + 0x180) * (float)uVar8 < (float)(*(long *)(this + 0x178) + 1))) {
    if (uVar8 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar13 = uVar13 | uVar8 << 1;
    uVar8 = (ulong)((float)(*(long *)(this + 0x178) + 1) / *(float *)(this + 0x180));
    if (uVar13 <= uVar8) {
      uVar13 = uVar8;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
      uVar13 = std::__ndk1::__next_prime(uVar13);
    }
    uVar8 = *(ulong *)(this + 0x168);
    if (uVar8 < uVar13) {
LAB_004e7174:
      if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar7 = operator_new(uVar13 << 3);
      pvVar9 = *(void **)(this + 0x160);
      *(void **)(this + 0x160) = pvVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      uVar8 = 0;
      *(ulong *)(this + 0x168) = uVar13;
      do {
        *(undefined8 *)(*(long *)(this + 0x160) + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar13 != uVar8);
      plVar10 = *(long **)(this + 0x170);
      uVar8 = uVar13;
      if (plVar10 != (long *)0x0) {
        uVar15 = plVar10[1];
        uVar22 = NEON_cnt(uVar13,1);
        uVar20 = NEON_uaddlv(uVar22,1);
        uVar18 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar20) & 0xffffffff;
        if (uVar18 < 2) {
          uVar15 = uVar15 & uVar13 - 1;
        }
        else if (uVar13 <= uVar15) {
          uVar19 = 0;
          if (uVar13 != 0) {
            uVar19 = uVar15 / uVar13;
          }
          uVar15 = uVar15 - uVar19 * uVar13;
        }
        *(TextStylePaint **)(*(long *)(this + 0x160) + uVar15 * 8) = this + 0x170;
        plVar17 = (long *)*plVar10;
        if (plVar17 != (long *)0x0) {
          do {
            uVar19 = plVar17[1];
            if (uVar18 < 2) {
              uVar19 = uVar19 & uVar13 - 1;
            }
            else if (uVar13 <= uVar19) {
              uVar3 = 0;
              if (uVar13 != 0) {
                uVar3 = uVar19 / uVar13;
              }
              uVar19 = uVar19 - uVar3 * uVar13;
            }
            if (uVar19 != uVar15) {
              if (*(long *)(*(long *)(this + 0x160) + uVar19 * 8) == 0) {
                *(long **)(*(long *)(this + 0x160) + uVar19 * 8) = plVar10;
                uVar15 = uVar19;
              }
              else {
                *plVar10 = *plVar17;
                *plVar17 = **(long **)(*(long *)(this + 0x160) + uVar19 * 8);
                **(undefined8 **)(*(long *)(this + 0x160) + uVar19 * 8) = plVar17;
                plVar17 = plVar10;
              }
            }
            plVar10 = plVar17;
            plVar17 = (long *)*plVar10;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    else if (uVar13 < uVar8) {
      uVar15 = (ulong)((float)*(ulong *)(this + 0x178) / *(float *)(this + 0x180));
      if (uVar8 < 3) {
LAB_004e75a4:
        uVar15 = std::__ndk1::__next_prime(uVar15);
      }
      else {
        uVar22 = NEON_cnt(uVar8,1);
        uVar20 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar20)) goto LAB_004e75a4;
        if (1 < uVar15) {
          uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar15) {
        uVar13 = uVar15;
      }
      if (uVar13 < uVar8) {
        if (uVar13 != 0) goto LAB_004e7174;
        pvVar7 = *(void **)(this + 0x160);
        *(undefined8 *)(this + 0x160) = 0;
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
        *(undefined8 *)(this + 0x168) = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulong *)(this + 0x168);
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x22 = (int)uVar8 - 1 & uVar1;
    }
    else {
      unaff_x22 = uVar1;
      if (uVar8 <= uVar1) {
        uVar13 = 0;
        if (uVar8 != 0) {
          uVar13 = uVar1 / uVar8;
        }
        unaff_x22 = uVar1 - uVar13 * uVar8;
      }
    }
  }
  lVar14 = *(long *)(this + 0x160);
  plVar10 = *(long **)(lVar14 + unaff_x22 * 8);
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)(this + 0x170);
    *(long **)(this + 0x170) = plVar16;
    *plVar16 = lVar11;
    *(TextStylePaint **)(lVar14 + unaff_x22 * 8) = this + 0x170;
    if (*plVar16 == 0) goto LAB_004e7384;
    uVar13 = *(ulong *)(*plVar16 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar13 = uVar13 & uVar8 - 1;
    }
    else if (uVar8 <= uVar13) {
      uVar15 = 0;
      if (uVar8 != 0) {
        uVar15 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar15 * uVar8;
    }
    plVar10 = (long *)(*(long *)(this + 0x160) + uVar13 * 8);
  }
  else {
    *plVar16 = *plVar10;
  }
  *plVar10 = (long)plVar16;
LAB_004e7384:
  *(long *)(this + 0x178) = *(long *)(this + 0x178) + 1;
LAB_004e7390:
  plVar10 = local_b8;
  plVar17 = (long *)plVar16[4];
  local_b8 = (long *)0x0;
  *(ShapePaintPath *)(plVar16 + 3) = local_c0[0];
  plVar16[4] = (long)plVar10;
  if ((plVar17 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,plVar17 + 1), iVar6 == 1)) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  pvVar7 = (void *)plVar16[5];
  if (pvVar7 != (void *)0x0) {
    plVar16[6] = (long)pvVar7;
    operator_delete(pvVar7);
  }
  lVar14 = local_a0;
  pvVar7 = pvStack_a8;
  pvVar9 = (void *)plVar16[8];
  pvStack_a8 = (void *)0x0;
  local_a0 = 0;
  plVar16[6] = (long)pvVar7;
  plVar16[5] = (long)local_b0;
  plVar16[7] = lVar14;
  local_b0 = (void *)0x0;
  if (pvVar9 != (void *)0x0) {
    plVar16[9] = (long)pvVar9;
    operator_delete(pvVar9);
    pvVar9 = local_b0;
  }
  lVar5 = local_88;
  lVar11 = lStack_90;
  lVar14 = local_98;
  local_98 = 0;
  lStack_90 = 0;
  plVar16[9] = lVar11;
  plVar16[8] = lVar14;
  local_88 = 0;
  *(undefined1 *)(plVar16 + 0xc) = local_78;
  plVar16[10] = lVar5;
  plVar16[0xb] = lStack_80;
  plVar16[0xd] = local_70;
  if (pvVar9 != (void *)0x0) {
    pvStack_a8 = pvVar9;
    operator_delete(pvVar9);
  }
  plVar16 = local_b8;
  if ((local_b8 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,local_b8 + 1), iVar6 == 1)) {
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  uVar8 = *(ulong *)(this + 0x168);
  if (uVar8 != 0) {
    uVar22 = NEON_cnt(uVar8,1);
    uVar20 = NEON_uaddlv(uVar22,1);
    uVar13 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar20) & 0xffffffff;
    if (uVar13 < 2) {
      uVar15 = uVar1 & uVar8 + 0xffffffff;
    }
    else {
      uVar15 = uVar1;
      if (uVar8 <= uVar1) {
        uVar15 = 0;
        if (uVar8 != 0) {
          uVar15 = uVar1 / uVar8;
        }
        uVar15 = uVar1 - uVar15 * uVar8;
      }
    }
    puVar12 = *(undefined8 **)(*(long *)(this + 0x160) + uVar15 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar12, plVar16 != (long *)0x0)) {
      do {
        uVar18 = plVar16[1];
        if (uVar18 == uVar1) {
          if (*(float *)(plVar16 + 2) == param_2) goto LAB_004e7524;
        }
        else {
          if (uVar13 < 2) {
            uVar18 = uVar18 & uVar8 - 1;
          }
          else if (uVar8 <= uVar18) {
            uVar19 = 0;
            if (uVar8 != 0) {
              uVar19 = uVar18 / uVar8;
            }
            uVar18 = uVar18 - uVar19 * uVar8;
          }
          if (uVar18 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00366188("unordered_map::at: key not found");
LAB_004e7524:
  fVar21 = (float)RawPath::computeCoarseArea(param_1);
  if (0.0 <= fVar21) {
    auVar23 = RawPath::addPath((RawPath *)(plVar16 + 5),param_1,(Mat2D *)0x0);
  }
  else {
    auVar23 = RawPath::addPathBackwards((RawPath *)(plVar16 + 5),param_1,(Mat2D *)0x0);
  }
  RawPath::pruneEmptySegments(plVar16 + 5,auVar23._0_8_,auVar23._8_8_);
  *(undefined1 *)(plVar16 + 3) = 1;
LAB_004e756c:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(TVar2 == (TextStylePaint)0x0);
}


// ===== 004e75e8  rive::TextStylePaint::draw =====

/* rive::TextStylePaint::draw(rive::Renderer*, rive::Mat2D const&) */

void __thiscall rive::TextStylePaint::draw(TextStylePaint *this,Renderer *param_1,Mat2D *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined2 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x148);
  puVar2 = *(undefined8 **)(this + 0x150);
  do {
    if (puVar1 == puVar2) {
      if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    plVar21 = (long *)*puVar1;
    uVar7 = (**(code **)(*plVar21 + 0x98))(plVar21);
    if (((uVar7 & 1) != 0) && ((*(byte *)(plVar21[0x1a] + 8) & 1) != 0)) {
      iVar6 = *(int *)(*(long *)(this + 0x30) + 0x134);
      if (*(int *)((long)plVar21 + 0xa4) != 0x7f) {
        iVar6 = *(int *)((long)plVar21 + 0xa4);
      }
      (**(code **)(*(long *)plVar21[0x19] + 0x40))((long *)plVar21[0x19],iVar6);
      uVar7 = *(ulong *)(this + 0x168);
      if (uVar7 != 0) {
        uVar26 = NEON_cnt(uVar7,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        uVar14 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
        uVar10 = (uint)uVar7;
        if (uVar14 < 2) {
          uVar12 = (ulong)(uVar10 - 1) & 0x3f800000;
        }
        else {
          uVar12 = 0x3f800000;
          if (uVar7 < 0x3f800001) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = 0x3f800000 / uVar10;
            }
            uVar12 = (ulong)(0x3f800000 - uVar3 * uVar10);
          }
        }
        plVar15 = *(long **)(*(long *)(this + 0x160) + uVar12 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          do {
            uVar16 = plVar15[1];
            if (uVar16 == 0x3f800000) {
              if (*(float *)(plVar15 + 2) == 1.0) {
                (**(code **)(*plVar21 + 0xe0))(plVar21,param_1,plVar15 + 3,param_2,1,0,1);
                break;
              }
            }
            else {
              if (uVar14 < 2) {
                uVar16 = uVar16 & uVar7 - 1;
              }
              else if (uVar7 <= uVar16) {
                uVar4 = 0;
                if (uVar7 != 0) {
                  uVar4 = uVar16 / uVar7;
                }
                uVar16 = uVar16 - uVar4 * uVar7;
              }
              if (uVar16 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
      puVar20 = *(undefined8 **)(this + 0x188);
      puVar23 = *(undefined8 **)(this + 400);
      uVar7 = *(ulong *)(this + 0x178);
      lVar24 = (long)puVar23 - (long)puVar20;
      if ((ulong)(lVar24 >> 3) < uVar7) {
        if ((ulong)(*(long *)(this + 0x198) - (long)puVar20 >> 3) < uVar7) {
          if (uVar7 >> 0x3d != 0) {
LAB_004e7b84:
            FUN_004e7b90();
LAB_004e7b88:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar8 = operator_new(uVar7 * 8);
          puVar11 = (undefined8 *)((long)pvVar8 + lVar24);
          pvVar9 = (void *)((long)pvVar8 + uVar7 * 8);
          if ((long)puVar23 - (long)puVar20 == 0) {
            *(undefined8 **)(this + 0x188) = puVar11;
            *(undefined8 **)(this + 400) = puVar11;
            *(void **)(this + 0x198) = pvVar9;
          }
          else {
            uVar7 = ((long)puVar23 - (long)puVar20) - 8;
            puVar13 = puVar11;
            if ((uVar7 < 0x68) ||
               (((undefined8 *)((long)puVar23 + ((uVar7 ^ 0xffffffffffffffff) & 0xfffffffffffffff8))
                 < puVar11 && ((undefined8 *)((long)pvVar8 + (uVar7 & 7)) < puVar23)))) {
LAB_004e784c:
              do {
                puVar23 = puVar23 + -1;
                uVar26 = *puVar23;
                *puVar23 = 0;
                puVar13 = puVar13 + -1;
                *puVar13 = uVar26;
              } while (puVar23 != puVar20);
            }
            else {
              puVar18 = (undefined8 *)((long)pvVar8 + lVar24 + -0x10);
              uVar7 = (uVar7 >> 3) + 1;
              uVar12 = uVar7 & 0x3ffffffffffffffc;
              uVar14 = uVar12;
              puVar13 = puVar23;
              do {
                puVar17 = puVar13 + -4;
                uVar29 = puVar13[-3];
                uVar28 = *puVar17;
                uVar27 = puVar13[-1];
                uVar26 = puVar13[-2];
                uVar14 = uVar14 - 4;
                puVar13[-3] = 0;
                *puVar17 = 0;
                puVar13[-1] = 0;
                puVar13[-2] = 0;
                puVar18[-1] = uVar29;
                puVar18[-2] = uVar28;
                puVar18[1] = uVar27;
                *puVar18 = uVar26;
                puVar18 = puVar18 + -4;
                puVar13 = puVar17;
              } while (uVar14 != 0);
              puVar13 = puVar11 + -uVar12;
              puVar23 = puVar23 + -uVar12;
              if (uVar7 != uVar12) goto LAB_004e784c;
            }
            puVar23 = *(undefined8 **)(this + 0x188);
            puVar20 = *(undefined8 **)(this + 400);
            *(undefined8 **)(this + 0x188) = puVar13;
            *(undefined8 **)(this + 400) = puVar11;
            *(void **)(this + 0x198) = pvVar9;
            while (puVar20 != puVar23) {
              puVar20 = puVar20 + -1;
              plVar15 = (long *)*puVar20;
              if ((plVar15 != (long *)0x0) &&
                 (iVar6 = FUN_00340fe0(0xffffffff,plVar15 + 1), iVar6 == 1)) {
                (**(code **)(*plVar15 + 8))(plVar15);
              }
            }
          }
          if (puVar23 != (undefined8 *)0x0) {
            operator_delete(puVar23);
          }
        }
        if ((ulong)(*(long *)(this + 400) - *(long *)(this + 0x188) >> 3) < *(ulong *)(this + 0x178)
           ) {
          plVar15 = *(long **)(*(long *)(this + 0x40) + 0xbd8);
          do {
            (**(code **)(*plVar15 + 0x38))(&local_80,plVar15);
            plVar22 = local_80;
            puVar20 = *(undefined8 **)(this + 400);
            if (puVar20 < *(undefined8 **)(this + 0x198)) {
              local_80 = (long *)0x0;
              puVar13 = puVar20 + 1;
              *puVar20 = plVar22;
            }
            else {
              puVar23 = *(undefined8 **)(this + 0x188);
              lVar24 = (long)puVar20 - (long)puVar23 >> 3;
              uVar7 = lVar24 + 1;
              if (uVar7 >> 0x3d != 0) goto LAB_004e7b84;
              uVar12 = (long)*(undefined8 **)(this + 0x198) - (long)puVar23;
              uVar14 = (long)uVar12 >> 2;
              if (uVar14 <= uVar7) {
                uVar14 = uVar7;
              }
              if (0x7ffffffffffffff7 < uVar12) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (uVar14 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar14 >> 0x3d != 0) goto LAB_004e7b88;
                pvVar9 = operator_new(uVar14 << 3);
              }
              plVar22 = local_80;
              puVar11 = (undefined8 *)((long)pvVar9 + lVar24 * 8);
              local_80 = (long *)0x0;
              puVar13 = puVar11 + 1;
              *puVar11 = plVar22;
              if ((long)puVar20 - (long)puVar23 != 0) {
                uVar7 = ((long)puVar20 - (long)puVar23) - 8;
                puVar18 = puVar20;
                if ((0x77 < uVar7) &&
                   ((puVar11 <= (undefined8 *)((long)puVar20 + (-8 - (uVar7 & 0xfffffffffffffff8)))
                    || (puVar20 <=
                        (undefined8 *)
                        ((long)pvVar9 +
                        (((long)puVar20 - (long)puVar23) - (uVar7 & 0xfffffffffffffff8)) + -8))))) {
                  puVar17 = puVar11 + -2;
                  uVar7 = (uVar7 >> 3) + 1;
                  uVar16 = uVar7 & 0x3ffffffffffffffc;
                  puVar18 = puVar20 + -uVar16;
                  uVar12 = uVar16;
                  do {
                    puVar19 = puVar20 + -4;
                    uVar29 = puVar20[-3];
                    uVar28 = *puVar19;
                    uVar27 = puVar20[-1];
                    uVar26 = puVar20[-2];
                    uVar12 = uVar12 - 4;
                    puVar20[-3] = 0;
                    *puVar19 = 0;
                    puVar20[-1] = 0;
                    puVar20[-2] = 0;
                    puVar17[-1] = uVar29;
                    puVar17[-2] = uVar28;
                    puVar17[1] = uVar27;
                    *puVar17 = uVar26;
                    puVar17 = puVar17 + -4;
                    puVar20 = puVar19;
                  } while (uVar12 != 0);
                  puVar11 = puVar11 + -uVar16;
                  if (uVar7 == uVar16) goto LAB_004e79f4;
                }
                do {
                  puVar18 = puVar18 + -1;
                  uVar26 = *puVar18;
                  *puVar18 = 0;
                  puVar11 = puVar11 + -1;
                  *puVar11 = uVar26;
                } while (puVar18 != puVar23);
              }
LAB_004e79f4:
              puVar20 = *(undefined8 **)(this + 0x188);
              puVar23 = *(undefined8 **)(this + 400);
              *(undefined8 **)(this + 0x188) = puVar11;
              *(undefined8 **)(this + 400) = puVar13;
              *(void **)(this + 0x198) = (void *)((long)pvVar9 + uVar14 * 8);
              while (puVar23 != puVar20) {
                puVar23 = puVar23 + -1;
                plVar22 = (long *)*puVar23;
                if ((plVar22 != (long *)0x0) &&
                   (iVar6 = FUN_00340fe0(0xffffffff,plVar22 + 1), iVar6 == 1)) {
                  (**(code **)(*plVar22 + 8))(plVar22);
                }
              }
              if (puVar20 != (undefined8 *)0x0) {
                operator_delete(puVar20);
              }
            }
            plVar22 = local_80;
            *(undefined8 **)(this + 400) = puVar13;
            if ((local_80 != (long *)0x0) &&
               (iVar6 = FUN_00340fe0(0xffffffff,local_80 + 1), iVar6 == 1)) {
              (**(code **)(*plVar22 + 8))(plVar22);
            }
          } while ((ulong)(*(long *)(this + 400) - *(long *)(this + 0x188) >> 3) <
                   *(ulong *)(this + 0x178));
        }
      }
      plVar15 = *(long **)(this + 0x170);
      if (plVar15 != (long *)0x0) {
        uVar10 = 0;
        do {
          if (*(float *)(plVar15 + 2) != 1.0) {
            plVar22 = *(long **)(*(long *)(this + 0x188) + (ulong)uVar10 * 8);
            (**(code **)(*plVar21 + 0xe8))(plVar21,plVar22);
            if (plVar21[0x1b] != 0) {
              (**(code **)(*plVar22 + 0x38))(*(undefined4 *)(plVar21[0x1b] + 0xa4),plVar22);
            }
            uVar10 = uVar10 + 1;
            (**(code **)(*plVar21 + 0xe0))(plVar21,param_1,plVar15 + 3,param_2,1,plVar22,1);
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


// ===== 004e7b90  FUN_004e7b90 =====

void FUN_004e7b90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004e7ba4  rive::TextStylePaint::foregroundColor =====

/* rive::TextStylePaint::foregroundColor() const */

undefined4 __thiscall rive::TextStylePaint::foregroundColor(TextStylePaint *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x148);
  puVar1 = *(undefined8 **)(this + 0x150);
  while( true ) {
    if (puVar4 == puVar1) {
      return 0xff000000;
    }
    plVar3 = (long *)*puVar4;
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,0x14);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)(**(long **)(plVar3[0x1a] + 0x18) + 0x18))
                          (*(long **)(plVar3[0x1a] + 0x18),0x12), (uVar2 & 1) != 0)) break;
    puVar4 = puVar4 + 1;
  }
  return *(undefined4 *)(*(long *)(plVar3[0x1a] + 0x18) + 0x88);
}


// ===== 004e7c24  rive::TextStylePaintBase::clone =====

/* rive::TextStylePaintBase::clone() const */

TextStylePaint * __thiscall rive::TextStylePaintBase::clone(TextStylePaintBase *this)

{
  undefined4 uVar1;
  TextStylePaint *this_00;
  undefined4 uVar2;
  
  this_00 = (TextStylePaint *)operator_new(0x200);
  TextStylePaint::TextStylePaint(this_00);
  uVar2 = *(undefined4 *)(this + 0xa8);
  uVar1 = *(undefined4 *)(this + 0xac);
  *(undefined8 *)(this_00 + 0xa0) = *(undefined8 *)(this + 0xa0);
  *(undefined4 *)(this_00 + 0xa8) = uVar2;
  *(undefined4 *)(this_00 + 0xac) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004e7c80  FUN_004e7c80 =====

void FUN_004e7c80(void *param_1)

{
  FUN_004e4ba8();
  operator_delete(param_1);
  return;
}


// ===== 004e7ca4  FUN_004e7ca4 =====

void FUN_004e7ca4(long param_1)

{
  FUN_004e4ba8(param_1 + -0xb0);
  return;
}


// ===== 004e7cac  FUN_004e7cac =====

void FUN_004e7cac(long param_1)

{
  FUN_004e4ba8((void *)(param_1 + -0xb0));
  operator_delete((void *)(param_1 + -0xb0));
  return;
}


// ===== 004e7cd4  rive::TextTargetModifier::onAddedDirty =====

/* rive::TextTargetModifier::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall
rive::TextTargetModifier::onAddedDirty(TextTargetModifier *this,CoreContext *param_1)

{
  TextTargetModifier *pTVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pTVar1 = (TextTargetModifier *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TextTargetModifier *)(param_1 + -0x998);
  }
  *(TextTargetModifier **)(this + 0x40) = pTVar1;
  *(TextTargetModifier **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar6 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar6 + 0x90))(plVar2,this);
  }
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) == 0)) {
    uVar5 = 1;
  }
  else {
    TextModifierGroup::addModifier(*(TextModifierGroup **)(this + 0x30),(TextModifier *)this);
    uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x88));
    uVar5 = 0;
    *(undefined8 *)(this + 0x90) = uVar4;
  }
  return uVar5;
}


// ===== 004e7d88  rive::TextTargetModifier::textComponent =====

/* rive::TextTargetModifier::textComponent() const */

long * __thiscall rive::TextTargetModifier::textComponent(TextTargetModifier *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = *(long **)(this + 0x30);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x9f);
    if ((uVar2 & 1) == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      lVar3 = *(long *)(this + 0x30);
      plVar1 = *(long **)(lVar3 + 0x30);
      if (plVar1 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x86);
        plVar1 = *(long **)(lVar3 + 0x30);
        if ((uVar2 & 1) == 0) {
          plVar1 = (long *)0x0;
        }
      }
    }
  }
  return plVar1;
}


// ===== 004e7df0  FUN_004e7df0 =====

void FUN_004e7df0(long *param_1)

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


// ===== 004e7e5c  FUN_004e7e5c =====

undefined8 FUN_004e7e5c(void)

{
  return 0x222;
}


// ===== 004e7e64  FUN_004e7e64 =====

undefined8 FUN_004e7e64(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_2 != 10) && (param_2 != 0xa0)) && (param_2 != 0x222)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004e7e8c  FUN_004e7e8c =====

void FUN_004e7e8c(long param_1,short param_2,long *param_3)

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
        goto LAB_004e7fec;
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
LAB_004e7fec:
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
        goto LAB_004e7fd0;
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
LAB_004e7fd0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x30a) {
      uVar5 = 0;
      goto LAB_004e8034;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004e8024;
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
LAB_004e8024:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004e8034:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 004e8058  rive::TextModifier::onAddedDirty =====

/* rive::TextModifier::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::TextModifier::onAddedDirty(TextModifier *this,CoreContext *param_1)

{
  TextModifier *pTVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pTVar1 = (TextModifier *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TextModifier *)(param_1 + -0x998);
  }
  *(TextModifier **)(this + 0x40) = pTVar1;
  *(TextModifier **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  plVar2 = *(long **)(this + 0x30);
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x9f), (uVar3 & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    TextModifierGroup::addModifier(*(TextModifierGroup **)(this + 0x30),this);
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 004e80f0  FUN_004e80f0 =====

void FUN_004e80f0(long *param_1)

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


// ===== 004e815c  FUN_004e815c =====

undefined8 FUN_004e815c(void)

{
  return 0xa0;
}


// ===== 004e8164  FUN_004e8164 =====

bool FUN_004e8164(undefined8 param_1,short param_2)

{
  return param_2 == 0xa0 || param_2 == 10;
}


// ===== 004e8178  rive::TextValueRun::textChanged =====

/* rive::TextValueRun::textChanged() */

void __thiscall rive::TextValueRun::textChanged(TextValueRun *this)

{
  long *plVar1;
  
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  plVar1 = *(long **)(this + 0x30);
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    plVar1 = *(long **)(this + 0xf0);
  }
                    /* WARNING: Could not recover jumptable at 0x004e819c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x298))(plVar1);
  return;
}


// ===== 004e81a0  rive::TextValueRun::textComponent =====

/* rive::TextValueRun::textComponent() const */

long __thiscall rive::TextValueRun::textComponent(TextValueRun *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x30);
  if (*(long *)(this + 0xf0) != 0) {
    lVar1 = *(long *)(this + 0xf0);
  }
  return lVar1;
}


// ===== 004e81b4  rive::TextValueRun::onAddedClean =====

/* rive::TextValueRun::onAddedClean(rive::CoreContext*) */

undefined8 rive::TextValueRun::onAddedClean(CoreContext *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if ((plVar1 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x86), (uVar2 & 1) == 0)) {
    uVar3 = 1;
  }
  else {
    Text::addRun(*(Text **)(param_1 + 0x30),(TextValueRun *)param_1);
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 004e8204  rive::TextValueRun::onAddedDirty =====

/* rive::TextValueRun::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::TextValueRun::onAddedDirty(TextValueRun *this,CoreContext *param_1)

{
  TextValueRun *pTVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pTVar1 = (TextValueRun *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TextValueRun *)(param_1 + -0x998);
  }
  *(TextValueRun **)(this + 0x40) = pTVar1;
  *(TextValueRun **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x88));
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x89), (uVar3 & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    *(long **)(this + 0xe0) = plVar2;
  }
  return uVar4;
}


// ===== 004e82a8  rive::TextValueRun::styleIdChanged =====

/* rive::TextValueRun::styleIdChanged() */

void __thiscall rive::TextValueRun::styleIdChanged(TextValueRun *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)(**(code **)(**(long **)(this + 0x40) + 0x348))
                             (*(long **)(this + 0x40),*(undefined4 *)(this + 0x88));
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x89), (uVar2 & 1) != 0)) {
    *(long **)(this + 0xe0) = plVar1;
    plVar1 = *(long **)(this + 0x30);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      plVar1 = *(long **)(this + 0xf0);
    }
                    /* WARNING: Could not recover jumptable at 0x004e830c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x298))();
    return;
  }
  return;
}


// ===== 004e831c  rive::TextValueRun::offset =====

/* rive::TextValueRun::offset() const */

int __thiscall rive::TextValueRun::offset(TextValueRun *this)

{
  uint uVar1;
  long lVar2;
  TextValueRun TVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  TextValueRun *pTVar7;
  TextValueRun *pTVar8;
  int iVar9;
  uint uVar10;
  
  lVar2 = *(long *)(this + 0x30);
  if (*(long *)(this + 0xf0) != 0) {
    lVar2 = *(long *)(this + 0xf0);
  }
  puVar5 = *(undefined8 **)(lVar2 + 0x200);
  puVar6 = *(undefined8 **)(lVar2 + 0x208);
  if (puVar5 != puVar6) {
    iVar4 = 0;
    do {
      pTVar7 = (TextValueRun *)*puVar5;
      if (pTVar7 == this) {
        return iVar4;
      }
      if (*(int *)(pTVar7 + 0xe8) == -1) {
        pTVar8 = pTVar7 + 0x91;
        if (((byte)pTVar7[0x90] & 1) != 0) {
          pTVar8 = *(TextValueRun **)(pTVar7 + 0xa0);
        }
        TVar3 = *pTVar8;
        if (TVar3 == (TextValueRun)0x0) {
          *(undefined4 *)(pTVar7 + 0xe8) = 0;
        }
        else {
          iVar9 = 0;
          do {
            if (((char)TVar3 < '\0') && (((byte)TVar3 >> 6 & 1) != 0)) {
              pTVar8 = pTVar8 + 1;
              uVar10 = (uint)(byte)TVar3;
              do {
                pTVar8 = pTVar8 + 1;
                uVar1 = uVar10 >> 5;
                uVar10 = uVar10 << 1;
              } while ((uVar1 & 1) != 0);
            }
            else {
              pTVar8 = pTVar8 + 1;
            }
            TVar3 = *pTVar8;
            iVar9 = iVar9 + 1;
          } while (TVar3 != (TextValueRun)0x0);
          iVar4 = iVar9 + iVar4;
          *(int *)(pTVar7 + 0xe8) = iVar9;
        }
      }
      else {
        iVar4 = *(int *)(pTVar7 + 0xe8) + iVar4;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar6);
    return iVar4;
  }
  return 0;
}


// ===== 004e83e4  rive::TextValueRun::canHitTest =====

/* rive::TextValueRun::canHitTest() const */

uint __thiscall rive::TextValueRun::canHitTest(TextValueRun *this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (ulong)(byte)this[0xc0];
  if ((this[0xc0] != (TextValueRun)0x0) &&
     (uVar1 = *(ulong *)(this + 0xf0) | *(ulong *)(this + 0x30), uVar1 != 0)) {
    uVar2 = NEON_fcmgt(CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) -
                                (float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20),
                                (float)*(undefined8 *)(this + 0xb8) -
                                (float)*(undefined8 *)(this + 0xb0)),0,4);
    uVar1 = (ulong)((uint)uVar2 & (uint)((ulong)uVar2 >> 0x20));
  }
  return (uint)uVar1 & 1;
}


// ===== 004e841c  rive::TextValueRun::resetHitTest =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::TextValueRun::resetHitTest() */

void __thiscall rive::TextValueRun::resetHitTest(TextValueRun *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_0024e258;
  uVar1 = _DAT_0024e250;
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(this + 200);
  *(undefined8 *)(this + 0xb8) = uVar2;
  *(undefined8 *)(this + 0xb0) = uVar1;
  return;
}


// ===== 004e8434  rive::TextValueRun::addHitRect =====

/* rive::TextValueRun::addHitRect(rive::AABB const&) */

void __thiscall rive::TextValueRun::addHitRect(TextValueRun *this,AABB *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  
  uVar14 = *(undefined8 *)param_1;
  fVar11 = *(float *)(this + 0xb0);
  fVar13 = (float)uVar14;
  if (fVar11 != fVar13 && fVar11 < fVar13 == (NAN(fVar11) || NAN(fVar13))) {
    *(float *)(this + 0xb0) = fVar13;
    fVar11 = fVar13;
  }
  fVar15 = (float)((ulong)uVar14 >> 0x20);
  fVar12 = *(float *)(this + 0xb8);
  if (*(float *)(this + 0xb8) < fVar13) {
    *(float *)(this + 0xb8) = fVar13;
    fVar12 = fVar13;
  }
  fVar13 = *(float *)(this + 0xb4);
  if (fVar13 != fVar15 && fVar13 < fVar15 == (NAN(fVar13) || NAN(fVar15))) {
    *(float *)(this + 0xb4) = fVar15;
    fVar13 = fVar15;
  }
  fVar16 = *(float *)(this + 0xbc);
  if (*(float *)(this + 0xbc) < fVar15) {
    *(float *)(this + 0xbc) = fVar15;
    fVar16 = fVar15;
  }
  uVar14 = *(undefined8 *)(param_1 + 8);
  fVar15 = (float)uVar14;
  if (fVar11 != fVar15 && fVar11 < fVar15 == (NAN(fVar11) || NAN(fVar15))) {
    *(float *)(this + 0xb0) = fVar15;
  }
  fVar11 = (float)((ulong)uVar14 >> 0x20);
  if (fVar12 < fVar15) {
    *(float *)(this + 0xb8) = fVar15;
    if (fVar13 != fVar11 && fVar13 < fVar11 == (NAN(fVar13) || NAN(fVar11))) goto LAB_004e84fc;
  }
  else if (fVar13 != fVar11 && fVar13 < fVar11 == (NAN(fVar13) || NAN(fVar11))) {
LAB_004e84fc:
    *(float *)(this + 0xb4) = fVar11;
  }
  if (fVar16 < fVar11) {
    *(float *)(this + 0xbc) = fVar11;
  }
  puVar7 = *(undefined8 **)(this + 0xd0);
  if (puVar7 < *(undefined8 **)(this + 0xd8)) {
    uVar14 = *(undefined8 *)param_1;
    puVar10 = puVar7 + 2;
    puVar7[1] = *(undefined8 *)(param_1 + 8);
    *puVar7 = uVar14;
  }
  else {
    puVar8 = *(undefined8 **)(this + 200);
    lVar9 = (long)puVar7 - (long)puVar8 >> 4;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_004caee0();
LAB_004e85d0:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    uVar4 = (long)*(undefined8 **)(this + 0xd8) - (long)puVar8;
    uVar6 = (long)uVar4 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_004e85d0;
      pvVar3 = operator_new(uVar6 << 4);
    }
    puVar5 = (undefined8 *)((long)pvVar3 + lVar9 * 0x10);
    uVar14 = *(undefined8 *)param_1;
    puVar10 = puVar5 + 2;
    puVar5[1] = *(undefined8 *)(param_1 + 8);
    *puVar5 = uVar14;
    if (puVar7 != puVar8) {
      do {
        puVar2 = puVar7 + -1;
        uVar14 = puVar7[-2];
        puVar7 = puVar7 + -2;
        puVar5[-1] = *puVar2;
        puVar5[-2] = uVar14;
        puVar5 = puVar5 + -2;
      } while (puVar7 != puVar8);
      puVar7 = *(undefined8 **)(this + 200);
    }
    *(undefined8 **)(this + 200) = puVar5;
    *(undefined8 **)(this + 0xd0) = puVar10;
    *(void **)(this + 0xd8) = (void *)((long)pvVar3 + uVar6 * 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      operator_delete(puVar7);
    }
  }
  *(undefined8 **)(this + 0xd0) = puVar10;
  return;
}


// ===== 004e85d4  rive::TextValueRun::computeHitContours =====

/* rive::TextValueRun::computeHitContours() */

void __thiscall rive::TextValueRun::computeHitContours(TextValueRun *this)

{
  AABB *pAVar1;
  AABB *pAVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0xa8);
  if (lVar4 == 0) {
    puVar3 = (undefined8 *)operator_new(0x138);
    puVar3[0x26] = 0;
    *(undefined8 **)(this + 0xa8) = puVar3;
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
    *(undefined4 *)(puVar3 + 7) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
    puVar3[0xe] = 0;
    puVar3[0xd] = 0;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    *(undefined4 *)(puVar3 + 0x11) = 0x3f800000;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x21] = 0;
    puVar3[0x20] = 0;
    puVar3[0x23] = 0;
    puVar3[0x22] = 0;
    puVar3[0x25] = 0;
    puVar3[0x24] = 0;
  }
  else {
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar4 + 0x90);
  }
  pAVar2 = *(AABB **)(this + 0xd0);
  for (pAVar1 = *(AABB **)(this + 200); pAVar1 != pAVar2; pAVar1 = pAVar1 + 0x10) {
    RectanglesToContour::addRect(*(RectanglesToContour **)(this + 0xa8),pAVar1);
  }
  RectanglesToContour::computeContours(*(RectanglesToContour **)(this + 0xa8));
  return;
}


// ===== 004e8688  rive::TextValueRun::hitTestAABB =====

/* rive::TextValueRun::hitTestAABB(rive::Vec2D const&) */

bool __thiscall rive::TextValueRun::hitTestAABB(TextValueRun *this,Vec2D *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  
  if (this[0xc0] == (TextValueRun)0x0) {
    return false;
  }
  plVar8 = *(long **)(this + 0xf0);
  plVar9 = *(long **)(this + 0x30);
  if (plVar8 == (long *)0x0 && plVar9 == (long *)0x0) {
    return false;
  }
  uVar11 = NEON_fcmgt(CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20),
                               (float)*(undefined8 *)(this + 0xb8) -
                               (float)*(undefined8 *)(this + 0xb0)),0,4);
  if (((uint)uVar11 & (uint)((ulong)uVar11 >> 0x20) & 1) == 0) {
    return false;
  }
  plVar1 = plVar9;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8;
  }
  if (*(char *)((long)plVar1 + 0x17c) != '\0') {
    fVar16 = *(float *)((long)plVar1 + 0xa4);
    fVar13 = *(float *)(plVar1 + 0x16);
    fVar14 = (float)plVar1[0x15];
    fVar17 = -fVar14;
    fVar21 = (float)((ulong)plVar1[0x15] >> 0x20);
    fVar20 = (float)NEON_fmadd(fVar16,fVar13,fVar17 * fVar21);
    if (fVar20 == 0.0) {
      return false;
    }
    fVar20 = 1.0 / fVar20;
    fVar10 = (float)*(undefined8 *)((long)plVar1 + 0xb4);
    fVar24 = (float)((ulong)*(undefined8 *)((long)plVar1 + 0xb4) >> 0x20);
    uVar19 = NEON_rev64(CONCAT44(fVar24 * -fVar16,fVar10 * -fVar13),4);
    fVar13 = fVar13 * fVar20;
    fVar17 = fVar17 * fVar20;
    fVar15 = fVar16 * fVar20;
    fVar18 = (float)uVar19 + fVar10 * fVar14;
    uVar11 = CONCAT44(fVar17,fVar13);
    uVar19 = NEON_rev64(CONCAT44(fVar20 * ((float)((ulong)uVar19 >> 0x20) + fVar24 * fVar21),
                                 fVar20 * fVar18),4);
    fVar14 = fVar13;
    fVar10 = (float)(**(code **)(*plVar1 + 0xf0))(plVar1);
    auVar23._8_4_ = -fVar21 * fVar20;
    auVar23._0_8_ = uVar11;
    auVar22._8_4_ = -fVar21 * fVar20;
    auVar22._0_8_ = uVar11;
    auVar22._12_4_ = fVar15;
    auVar23._12_4_ = fVar15;
    auVar22 = NEON_ext(auVar22,auVar23,8,1);
    fVar15 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar20 = (float)*(undefined8 *)param_1;
    fVar21 = (float)uVar19 + auVar22._0_4_ * fVar15 + fVar13 * fVar20;
    fVar13 = (float)((ulong)uVar19 >> 0x20) + auVar22._4_4_ * fVar15 + fVar17 * fVar20;
    bVar5 = false;
    bVar6 = true;
    if (fVar21 < fVar10 == (NAN(fVar21) || NAN(fVar10))) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar21) && !NAN(fVar16)) {
        bVar5 = fVar21 == fVar16;
        bVar6 = fVar16 <= fVar21;
      }
    }
    bVar4 = true;
    bVar7 = false;
    if (!bVar6 || bVar5) {
      bVar4 = false;
      bVar7 = true;
      if (!NAN(fVar13) && !NAN(fVar14)) {
        bVar4 = fVar13 < fVar14;
        bVar7 = false;
      }
    }
    bVar5 = false;
    bVar6 = true;
    if (bVar4 == bVar7) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar13) && !NAN(fVar18)) {
        bVar5 = fVar13 == fVar18;
        bVar6 = fVar18 <= fVar13;
      }
    }
    if (bVar6 && !bVar5) {
      return false;
    }
    plVar8 = *(long **)(this + 0xf0);
    plVar9 = *(long **)(this + 0x30);
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8;
  }
  fVar17 = (float)*(undefined8 *)((long)plVar9 + 0xa4);
  fVar16 = (float)((ulong)*(undefined8 *)((long)plVar9 + 0xa4) >> 0x20);
  fVar14 = (float)*(undefined8 *)((long)plVar9 + 0xac);
  fVar21 = (float)((ulong)*(undefined8 *)((long)plVar9 + 0xac) >> 0x20);
  auVar12._0_4_ = fVar14 * *(float *)((long)plVar9 + 0x1bc) + (float)plVar9[0x37] * fVar17;
  auVar12._4_4_ = fVar21 * *(float *)((long)plVar9 + 0x1bc) + (float)plVar9[0x37] * fVar16;
  auVar12._8_4_ = fVar14 * *(float *)((long)plVar9 + 0x1c4) + *(float *)(plVar9 + 0x38) * fVar17;
  auVar12._12_4_ = fVar21 * *(float *)((long)plVar9 + 0x1c4) + *(float *)(plVar9 + 0x38) * fVar16;
  fVar13 = (float)NEON_fmadd(auVar12._0_4_,auVar12._12_4_,-auVar12._4_4_ * auVar12._8_4_);
  if (fVar13 != 0.0) {
    fVar20 = (float)plVar9[0x39];
    fVar10 = (float)((ulong)plVar9[0x39] >> 0x20);
    fVar13 = 1.0 / fVar13;
    auVar23 = NEON_ext(auVar12,auVar12,0xc,1);
    auVar22 = NEON_ext(auVar12,auVar12,4,1);
    fVar17 = (float)*(undefined8 *)((long)plVar9 + 0xb4) + fVar14 * fVar10 + fVar17 * fVar20;
    fVar16 = (float)((ulong)*(undefined8 *)((long)plVar9 + 0xb4) >> 0x20) +
             fVar21 * fVar10 + fVar16 * fVar20;
    uVar11 = NEON_rev64(CONCAT44(fVar16 * -auVar23._4_4_,fVar17 * -auVar23._0_4_),4);
    fVar14 = auVar12._12_4_ * fVar13;
    fVar21 = -auVar12._4_4_ * fVar13;
    auVar2._4_4_ = fVar21;
    auVar2._0_4_ = fVar14;
    auVar2._8_4_ = -auVar12._8_4_ * fVar13;
    auVar2._12_4_ = auVar12._0_4_ * fVar13;
    auVar3._4_4_ = fVar21;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = -auVar12._8_4_ * fVar13;
    auVar3._12_4_ = auVar12._0_4_ * fVar13;
    auVar23 = NEON_ext(auVar2,auVar3,8,1);
    fVar20 = *(float *)(this + 0xb8);
    fVar10 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    uVar11 = NEON_rev64(CONCAT44(fVar13 * ((float)((ulong)uVar11 >> 0x20) + fVar16 * auVar22._4_4_),
                                 fVar13 * ((float)uVar11 + fVar17 * auVar22._0_4_)),4);
    fVar13 = (float)*(undefined8 *)param_1;
    fVar14 = (float)uVar11 + auVar23._0_4_ * fVar10 + fVar14 * fVar13;
    fVar21 = (float)((ulong)uVar11 >> 0x20) + auVar23._4_4_ * fVar10 + fVar21 * fVar13;
    bVar5 = false;
    bVar6 = true;
    if (fVar14 < *(float *)(this + 0xb0) == (NAN(fVar14) || NAN(*(float *)(this + 0xb0)))) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar14) && !NAN(fVar20)) {
        bVar5 = fVar14 == fVar20;
        bVar6 = fVar20 <= fVar14;
      }
    }
    bVar4 = true;
    bVar7 = false;
    if (!bVar6 || bVar5) {
      bVar4 = false;
      bVar7 = true;
      if (!NAN(fVar21) && !NAN(*(float *)(this + 0xb4))) {
        bVar4 = fVar21 < *(float *)(this + 0xb4);
        bVar7 = false;
      }
    }
    if (bVar4 == bVar7) {
      return fVar21 <= *(float *)(this + 0xbc);
    }
  }
  return false;
}


// ===== 004e88b4  rive::TextValueRun::hitTestHiFi =====

/* rive::TextValueRun::hitTestHiFi(rive::Vec2D const&, float) */

void __thiscall rive::TextValueRun::hitTestHiFi(TextValueRun *this,Vec2D *param_1,float param_2)

{
  unkbyte9 *pVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  bool bVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  float *pfVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  byte bVar28;
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
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  byte bVar47;
  int iVar48;
  float fVar49;
  byte bVar52;
  byte bVar53;
  byte bVar55;
  byte bVar58;
  byte bVar59;
  undefined8 uVar50;
  byte bVar54;
  int iVar56;
  float fVar57;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined1 auVar51 [16];
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  float fVar78;
  undefined8 uVar79;
  undefined4 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_a8 [2];
  uint *local_98;
  uint *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  int local_64;
  char local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_30;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  if (((this[0xc0] == (TextValueRun)0x0) ||
      (*(long *)(this + 0xf0) == 0 && *(long *)(this + 0x30) == 0)) ||
     (uVar50 = NEON_fcmgt(CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) -
                                   (float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20),
                                   (float)*(undefined8 *)(this + 0xb8) -
                                   (float)*(undefined8 *)(this + 0xb0)),0,4),
     ((uint)uVar50 & (uint)((ulong)uVar50 >> 0x20) & 1) == 0)) {
    bVar11 = false;
    goto LAB_004e8e08;
  }
  fVar57 = (float)*(undefined8 *)param_1;
  fVar49 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  iVar48 = (int)(float)(int)((fVar49 - param_2) + 0.5);
  iVar56 = (int)(float)(int)(fVar49 + param_2 + 0.5);
  uStack_b8 = CONCAT17((char)((uint)iVar56 >> 0x18),
                       CONCAT16((char)((uint)iVar56 >> 0x10),
                                CONCAT15((char)((uint)iVar56 >> 8),
                                         CONCAT14((char)iVar56,
                                                  (int)(float)(int)(fVar57 + param_2 + 0.5)))));
  local_c0 = CONCAT17((char)((uint)iVar48 >> 0x18),
                      CONCAT16((char)((uint)iVar48 >> 0x10),
                               CONCAT15((char)((uint)iVar48 >> 8),
                                        CONCAT14((char)iVar48,
                                                 (int)(float)(int)((fVar57 - param_2) + 0.5)))));
  HitTestCommandPath::HitTestCommandPath((HitTestCommandPath *)local_a8,(TAABB *)&local_c0);
  lVar4 = *(long *)(this + 0x30);
  if (*(long *)(this + 0xf0) != 0) {
    lVar4 = *(long *)(this + 0xf0);
  }
  pVar1 = (unkbyte9 *)(lVar4 + 0x1bc);
  uVar50 = *(undefined8 *)(lVar4 + 0x1c4);
  uVar41 = (undefined1)((ulong)uVar50 >> 8);
  uVar43 = (undefined1)((ulong)uVar50 >> 0x10);
  uVar45 = (undefined1)((ulong)uVar50 >> 0x18);
  auVar9[9] = uVar41;
  auVar9._0_9_ = *pVar1;
  auVar9[10] = uVar43;
  auVar9[0xb] = uVar45;
  auVar10[9] = uVar41;
  auVar10._0_9_ = *pVar1;
  auVar10[10] = uVar43;
  auVar10[0xb] = uVar45;
  fVar8 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  fVar88 = (float)((ulong)*(undefined8 *)(lVar4 + 0x1c8) >> 0x20);
  fVar49 = (float)*(undefined8 *)(lVar4 + 0xac);
  fVar57 = (float)((ulong)*(undefined8 *)(lVar4 + 0xac) >> 0x20);
  fVar84 = (float)*(undefined8 *)(lVar4 + 0x1c8);
  fVar86 = (float)*(undefined8 *)(lVar4 + 0xa4);
  fVar85 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa4) >> 0x20);
  lVar19 = *(long *)(this + 0xa8);
  lVar3 = *(long *)(lVar19 + 0x120);
  fVar78 = fVar49 * (float)*pVar1 + *(float *)(lVar4 + 0x1b8) * fVar86;
  fVar83 = fVar57 * (float)*pVar1 + *(float *)(lVar4 + 0x1b8) * fVar85;
  fVar7 = fVar49 * auVar10._8_4_ + fVar8 * fVar86;
  fVar8 = fVar57 * auVar9._8_4_ + fVar8 * fVar85;
  uVar41 = (undefined1)((uint)fVar8 >> 8);
  uVar43 = (undefined1)((uint)fVar8 >> 0x10);
  uVar45 = (undefined1)((uint)fVar8 >> 0x18);
  fVar49 = (float)*(undefined8 *)(lVar4 + 0xb4) + fVar49 * fVar88 + fVar86 * fVar84;
  fVar57 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb4) >> 0x20) + fVar57 * fVar88 + fVar85 * fVar84
  ;
  local_48 = CONCAT44(fVar57,fVar49);
  lVar4 = *(long *)(lVar19 + 0x128) - lVar3;
  uStack_50 = CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(SUB41(fVar8,0),fVar7))));
  local_58 = CONCAT17((char)((uint)fVar83 >> 0x18),
                      CONCAT16((char)((uint)fVar83 >> 0x10),
                               CONCAT15((char)((uint)fVar83 >> 8),CONCAT14(SUB41(fVar83,0),fVar78)))
                     );
  if (lVar4 != 0) {
    bVar11 = local_5c == '\0';
    lVar21 = 0;
LAB_004e8a2c:
    plVar2 = (long *)(lVar3 + lVar21 * 8);
    if (lVar21 == 0) {
      lVar26 = 0;
    }
    else {
      lVar26 = plVar2[-1];
    }
    lVar13 = *(long *)(lVar19 + 0x108);
    pfVar23 = (float *)(lVar13 + lVar26 * 0xc);
    lVar12 = *plVar2;
    fVar84 = *pfVar23;
    fVar88 = pfVar23[1];
    if (bVar11) {
      if (local_78._4_4_ != local_80._4_4_) {
        if (local_78._4_4_ == local_80._4_4_ ||
            local_78._4_4_ < local_80._4_4_ != (NAN(local_78._4_4_) || NAN(local_80._4_4_))) {
          iVar48 = 1;
          fVar86 = local_80._4_4_;
          fVar85 = (float)local_80;
          local_80._4_4_ = local_78._4_4_;
          local_80._0_4_ = (float)local_78;
          if (local_78._4_4_ < local_68 == (NAN(local_78._4_4_) || NAN(local_68)))
          goto LAB_004e8a8c;
        }
        else {
          iVar48 = -1;
          fVar86 = local_78._4_4_;
          fVar85 = (float)local_78;
          if (local_80._4_4_ < local_68 == (NAN(local_80._4_4_) || NAN(local_68)))
          goto LAB_004e8a8c;
        }
        if (0.0 < fVar86) {
          fVar87 = 0.0;
          if (0.0 <= local_80._4_4_) {
            fVar87 = local_80._4_4_;
          }
          fVar93 = local_68;
          if (fVar86 == local_68 || fVar86 < local_68 != (NAN(fVar86) || NAN(local_68))) {
            fVar93 = fVar86;
          }
          iVar16 = (int)(fVar87 + 0.5);
          iVar56 = (int)(fVar93 + 0.5) - iVar16;
          if (iVar56 != 0 && iVar16 <= (int)(fVar93 + 0.5)) {
            fVar85 = (fVar85 - (float)local_80) / (fVar86 - local_80._4_4_);
            puVar14 = local_98 + local_64 * iVar16;
            fVar86 = (float)NEON_fmadd(fVar85,0.0 - local_80._4_4_,(float)local_80);
            if (0.0 <= local_80._4_4_) {
              fVar86 = (float)local_80;
            }
            fVar86 = (float)NEON_fmadd(fVar85,((float)iVar16 - fVar87) + 0.5,fVar86);
            fVar86 = fVar86 + 0.5;
            do {
              fVar87 = 0.0;
              if (0.0 <= fVar86) {
                fVar87 = fVar86;
              }
              uVar17 = (uint)fVar87;
              if ((int)uVar17 < local_64) {
                uVar24 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
                *(int *)((long)puVar14 + uVar24) = *(int *)((long)puVar14 + uVar24) + iVar48;
              }
              fVar86 = fVar85 + fVar86;
              iVar56 = iVar56 + -1;
              puVar14 = puVar14 + local_64;
            } while (iVar56 != 0);
          }
        }
      }
    }
LAB_004e8a8c:
    uVar27 = lVar12 - lVar26;
    uVar24 = 0;
    fVar85 = (fVar49 + fVar7 * fVar88 + fVar78 * fVar84) - (float)local_70;
    fVar86 = (float)((ulong)local_70 >> 0x20);
    fVar87 = (fVar57 + (float)(CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(SUB41(fVar8,
                                                  0),fVar7)))) >> 0x20) * fVar88 + fVar83 * fVar84)
             - fVar86;
    local_80 = CONCAT44(fVar87,fVar85);
    fVar84 = fVar87;
    fVar88 = fVar85;
    local_78 = local_80;
LAB_004e8ae0:
    do {
      fVar93 = fVar88;
      fVar89 = fVar84;
      fVar84 = 0.0;
      fVar88 = 0.0;
      if (uVar24 < uVar27) {
        fVar84 = pfVar23[uVar24 * 3];
        fVar88 = (pfVar23 + uVar24 * 3)[1];
      }
      uVar18 = uVar27;
      if (uVar27 <= uVar24 + 1) {
        uVar18 = uVar24 + 1;
      }
      pfVar15 = (float *)(lVar13 + lVar26 * 0xc + 0x10 + uVar24 * 0xc);
      uVar25 = uVar24;
      do {
        uVar24 = uVar18;
        if ((uVar18 - 1 == uVar25) || (uVar24 = uVar25 + 1, pfVar15[-1] != fVar84)) break;
        fVar90 = *pfVar15;
        pfVar15 = pfVar15 + 3;
        uVar25 = uVar24;
      } while (fVar90 == fVar88);
      if (uVar24 == uVar27) goto LAB_004e8a10;
      fVar90 = pfVar23[uVar24 * 3];
      fVar84 = (pfVar23 + uVar24 * 3)[1];
      fVar88 = (fVar49 + fVar7 * fVar84 + fVar78 * fVar90) - (float)local_70;
      fVar84 = (fVar57 + (float)((ulong)uStack_50 >> 0x20) * fVar84 +
                         (float)((ulong)local_58 >> 0x20) * fVar90) - fVar86;
      local_78 = CONCAT44(fVar84,fVar88);
      if (fVar89 != fVar84) {
        if (fVar89 == fVar84 || fVar89 < fVar84 != (NAN(fVar89) || NAN(fVar84))) {
          iVar48 = 1;
          fVar90 = fVar84;
          fVar92 = fVar93;
          fVar93 = fVar88;
          if (fVar89 < local_68 == (NAN(fVar89) || NAN(local_68))) goto LAB_004e8ae0;
        }
        else {
          iVar48 = -1;
          fVar90 = fVar89;
          fVar92 = fVar88;
          fVar89 = fVar84;
          if (fVar84 < local_68 == (NAN(fVar84) || NAN(local_68))) goto LAB_004e8ae0;
        }
        if (0.0 < fVar90) {
          fVar91 = 0.0;
          if (0.0 <= fVar89) {
            fVar91 = fVar89;
          }
          fVar94 = local_68;
          if (fVar90 == local_68 || fVar90 < local_68 != (NAN(fVar90) || NAN(local_68))) {
            fVar94 = fVar90;
          }
          iVar16 = (int)(fVar91 + 0.5);
          iVar56 = (int)(fVar94 + 0.5) - iVar16;
          if (iVar56 != 0 && iVar16 <= (int)(fVar94 + 0.5)) {
            fVar90 = (fVar93 - fVar92) / (fVar90 - fVar89);
            puVar14 = local_98 + local_64 * iVar16;
            fVar93 = (float)NEON_fmadd(fVar90,0.0 - fVar89,fVar92);
            if (0.0 <= fVar89) {
              fVar93 = fVar92;
            }
            fVar93 = (float)NEON_fmadd(fVar90,((float)iVar16 - fVar91) + 0.5,fVar93);
            fVar93 = fVar93 + 0.5;
            do {
              fVar89 = 0.0;
              if (0.0 <= fVar93) {
                fVar89 = fVar93;
              }
              uVar17 = (uint)fVar89;
              if ((int)uVar17 < local_64) {
                uVar18 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
                *(int *)((long)puVar14 + uVar18) = *(int *)((long)puVar14 + uVar18) + iVar48;
              }
              fVar93 = fVar90 + fVar93;
              iVar56 = iVar56 + -1;
              puVar14 = puVar14 + local_64;
            } while (iVar56 != 0);
          }
        }
      }
    } while( true );
  }
  if (local_5c == '\0') {
    if (local_78._4_4_ != local_80._4_4_) {
      if (local_78._4_4_ == local_80._4_4_ ||
          local_78._4_4_ < local_80._4_4_ != (NAN(local_78._4_4_) || NAN(local_80._4_4_))) {
        iVar48 = 1;
        uVar41 = (undefined1)(local_78 >> 0x20);
        uVar43 = (undefined1)(local_78 >> 0x28);
        uVar45 = (undefined1)(local_78 >> 0x30);
        uVar76 = (undefined1)(local_78 >> 0x38);
        fVar57 = (float)local_80;
        fVar78 = (float)local_78;
        fVar49 = local_80._4_4_;
      }
      else {
        uVar41 = (undefined1)(local_80 >> 0x20);
        uVar43 = (undefined1)(local_80 >> 0x28);
        uVar45 = (undefined1)(local_80 >> 0x30);
        uVar76 = (undefined1)(local_80 >> 0x38);
        iVar48 = -1;
        fVar57 = (float)local_78;
        fVar78 = (float)local_80;
        fVar49 = local_78._4_4_;
      }
      if (((float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) < local_68 !=
           (NAN((float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) || NAN(local_68)))
         && (0.0 < fVar49)) {
        fVar83 = 0.0;
        if (NAN((float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) ||
            0.0 <= (float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) {
          fVar83 = (float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)));
        }
        if (fVar49 == local_68 || fVar49 < local_68 != (NAN(fVar49) || NAN(local_68))) {
          local_68 = fVar49;
        }
        iVar16 = (int)(fVar83 + 0.5);
        iVar56 = (int)(local_68 + 0.5) - iVar16;
        if (iVar56 != 0 && iVar16 <= (int)(local_68 + 0.5)) {
          fVar49 = (fVar57 - fVar78) /
                   (fVar49 - (float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))));
          puVar14 = local_98 + local_64 * iVar16;
          uVar80 = NEON_fmadd(fVar49,0.0 - (float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,
                                                  uVar41))),fVar78);
          uVar70 = (undefined1)uVar80;
          uVar72 = (undefined1)((uint)uVar80 >> 8);
          uVar74 = (undefined1)((uint)uVar80 >> 0x10);
          uVar77 = (undefined1)((uint)uVar80 >> 0x18);
          if (NAN((float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) ||
              0.0 <= (float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) {
            uVar70 = SUB41(fVar78,0);
            uVar72 = (undefined1)((uint)fVar78 >> 8);
            uVar74 = (undefined1)((uint)fVar78 >> 0x10);
            uVar77 = (undefined1)((uint)fVar78 >> 0x18);
          }
          fVar57 = (float)NEON_fmadd(fVar49,((float)iVar16 - fVar83) + 0.5,
                                     CONCAT13(uVar77,CONCAT12(uVar74,CONCAT11(uVar72,uVar70))));
          fVar57 = fVar57 + 0.5;
          uVar41 = SUB41(fVar57,0);
          uVar43 = (undefined1)((uint)fVar57 >> 8);
          uVar45 = (undefined1)((uint)fVar57 >> 0x10);
          uVar76 = (undefined1)((uint)fVar57 >> 0x18);
          do {
            fVar57 = 0.0;
            if (NAN((float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) ||
                0.0 <= (float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)))) {
              fVar57 = (float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)));
            }
            uVar17 = (uint)fVar57;
            if ((int)uVar17 < local_64) {
              uVar24 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
              *(int *)((long)puVar14 + uVar24) = *(int *)((long)puVar14 + uVar24) + iVar48;
            }
            fVar57 = fVar49 + (float)CONCAT13(uVar76,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)));
            uVar41 = SUB41(fVar57,0);
            uVar43 = (undefined1)((uint)fVar57 >> 8);
            uVar45 = (undefined1)((uint)fVar57 >> 0x10);
            uVar76 = (undefined1)((uint)fVar57 >> 0x18);
            iVar56 = iVar56 + -1;
            puVar14 = puVar14 + local_64;
          } while (iVar56 != 0);
        }
      }
    }
    local_5c = '\x01';
  }
LAB_004e8e58:
  uVar17 = 1;
  if (local_30 == 0) {
    uVar17 = 0xffffffff;
  }
  if (local_98 == local_90) {
    bVar11 = false;
  }
  else {
    uVar24 = (long)local_90 + (-4 - (long)local_98);
    if (uVar24 < 0x1c) {
      uVar20 = 0;
      puVar14 = local_98;
LAB_004e8efc:
      do {
        puVar22 = puVar14 + 1;
        uVar20 = *puVar14 & uVar17 | uVar20;
        puVar14 = puVar22;
      } while (puVar22 != local_90);
    }
    else {
      bVar28 = 0;
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
      bVar42 = 0;
      bVar44 = 0;
      bVar46 = 0;
      bVar47 = 0;
      bVar52 = 0;
      bVar53 = 0;
      bVar54 = 0;
      bVar55 = 0;
      bVar58 = 0;
      bVar59 = 0;
      bVar60 = 0;
      bVar61 = 0;
      bVar62 = 0;
      bVar63 = 0;
      bVar64 = 0;
      bVar65 = 0;
      bVar66 = 0;
      bVar67 = 0;
      bVar68 = 0;
      bVar69 = (byte)uVar17;
      bVar71 = (byte)(uVar17 >> 8);
      bVar73 = (byte)(uVar17 >> 0x10);
      bVar75 = (byte)(uVar17 >> 0x18);
      puVar14 = local_98 + 4;
      uVar24 = (uVar24 >> 2) + 1;
      uVar18 = uVar24 & 0x7ffffffffffffff8;
      uVar27 = uVar18;
      do {
        uVar79 = *(undefined8 *)(puVar14 + -2);
        uVar50 = *(undefined8 *)(puVar14 + -4);
        uVar82 = *(undefined8 *)(puVar14 + 2);
        uVar81 = *(undefined8 *)puVar14;
        uVar27 = uVar27 - 8;
        puVar14 = puVar14 + 8;
        bVar28 = (byte)uVar50 & bVar69 | bVar28;
        bVar29 = (byte)((ulong)uVar50 >> 8) & bVar71 | bVar29;
        bVar30 = (byte)((ulong)uVar50 >> 0x10) & bVar73 | bVar30;
        bVar31 = (byte)((ulong)uVar50 >> 0x18) & bVar75 | bVar31;
        bVar32 = (byte)((ulong)uVar50 >> 0x20) & bVar69 | bVar32;
        bVar33 = (byte)((ulong)uVar50 >> 0x28) & bVar71 | bVar33;
        bVar34 = (byte)((ulong)uVar50 >> 0x30) & bVar73 | bVar34;
        bVar35 = (byte)((ulong)uVar50 >> 0x38) & bVar75 | bVar35;
        bVar36 = (byte)uVar79 & bVar69 | bVar36;
        bVar37 = (byte)((ulong)uVar79 >> 8) & bVar71 | bVar37;
        bVar38 = (byte)((ulong)uVar79 >> 0x10) & bVar73 | bVar38;
        bVar39 = (byte)((ulong)uVar79 >> 0x18) & bVar75 | bVar39;
        bVar40 = (byte)((ulong)uVar79 >> 0x20) & bVar69 | bVar40;
        bVar42 = (byte)((ulong)uVar79 >> 0x28) & bVar71 | bVar42;
        bVar44 = (byte)((ulong)uVar79 >> 0x30) & bVar73 | bVar44;
        bVar46 = (byte)((ulong)uVar79 >> 0x38) & bVar75 | bVar46;
        bVar47 = (byte)uVar81 & bVar69 | bVar47;
        bVar52 = (byte)((ulong)uVar81 >> 8) & bVar71 | bVar52;
        bVar53 = (byte)((ulong)uVar81 >> 0x10) & bVar73 | bVar53;
        bVar54 = (byte)((ulong)uVar81 >> 0x18) & bVar75 | bVar54;
        bVar55 = (byte)((ulong)uVar81 >> 0x20) & bVar69 | bVar55;
        bVar58 = (byte)((ulong)uVar81 >> 0x28) & bVar71 | bVar58;
        bVar59 = (byte)((ulong)uVar81 >> 0x30) & bVar73 | bVar59;
        bVar60 = (byte)((ulong)uVar81 >> 0x38) & bVar75 | bVar60;
        bVar61 = (byte)uVar82 & bVar69 | bVar61;
        bVar62 = (byte)((ulong)uVar82 >> 8) & bVar71 | bVar62;
        bVar63 = (byte)((ulong)uVar82 >> 0x10) & bVar73 | bVar63;
        bVar64 = (byte)((ulong)uVar82 >> 0x18) & bVar75 | bVar64;
        bVar65 = (byte)((ulong)uVar82 >> 0x20) & bVar69 | bVar65;
        bVar66 = (byte)((ulong)uVar82 >> 0x28) & bVar71 | bVar66;
        bVar67 = (byte)((ulong)uVar82 >> 0x30) & bVar73 | bVar67;
        bVar68 = (byte)((ulong)uVar82 >> 0x38) & bVar75 | bVar68;
      } while (uVar27 != 0);
      bVar47 = bVar47 | bVar28;
      bVar52 = bVar52 | bVar29;
      bVar53 = bVar53 | bVar30;
      bVar54 = bVar54 | bVar31;
      bVar55 = bVar55 | bVar32;
      bVar58 = bVar58 | bVar33;
      bVar59 = bVar59 | bVar34;
      bVar60 = bVar60 | bVar35;
      auVar51[1] = bVar52;
      auVar51[0] = bVar47;
      auVar51[2] = bVar53;
      auVar51[3] = bVar54;
      auVar51[4] = bVar55;
      auVar51[5] = bVar58;
      auVar51[6] = bVar59;
      auVar51[7] = bVar60;
      auVar51[8] = bVar61 | bVar36;
      auVar51[9] = bVar62 | bVar37;
      auVar51[10] = bVar63 | bVar38;
      auVar51[0xb] = bVar64 | bVar39;
      auVar51[0xc] = bVar65 | bVar40;
      auVar51[0xd] = bVar66 | bVar42;
      auVar51[0xe] = bVar67 | bVar44;
      auVar51[0xf] = bVar68 | bVar46;
      auVar6[1] = bVar52;
      auVar6[0] = bVar47;
      auVar6[2] = bVar53;
      auVar6[3] = bVar54;
      auVar6[4] = bVar55;
      auVar6[5] = bVar58;
      auVar6[6] = bVar59;
      auVar6[7] = bVar60;
      auVar6[8] = bVar61 | bVar36;
      auVar6[9] = bVar62 | bVar37;
      auVar6[10] = bVar63 | bVar38;
      auVar6[0xb] = bVar64 | bVar39;
      auVar6[0xc] = bVar65 | bVar40;
      auVar6[0xd] = bVar66 | bVar42;
      auVar6[0xe] = bVar67 | bVar44;
      auVar6[0xf] = bVar68 | bVar46;
      auVar51 = NEON_ext(auVar51,auVar6,8,1);
      uVar20 = CONCAT13(bVar54 | auVar51[3],
                        CONCAT12(bVar53 | auVar51[2],
                                 CONCAT11(bVar52 | auVar51[1],bVar47 | auVar51[0])));
      uVar20 = uVar20 | (uint)(CONCAT17(bVar60 | auVar51[7],
                                        CONCAT16(bVar59 | auVar51[6],
                                                 CONCAT15(bVar58 | auVar51[5],
                                                          CONCAT14(bVar55 | auVar51[4],uVar20)))) >>
                              0x20);
      if (uVar24 != uVar18) {
        puVar14 = local_98 + uVar18;
        goto LAB_004e8efc;
      }
    }
    bVar11 = uVar20 != 0;
  }
  local_a8[0] = PTR_vtable_0067d5a0 + 0x10;
  if (local_98 != (uint *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
LAB_004e8e08:
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar11);
LAB_004e8a10:
  if (fVar89 != fVar87) {
    if (fVar89 == fVar87 || fVar89 < fVar87 != (NAN(fVar89) || NAN(fVar87))) {
      iVar48 = 1;
      uVar24 = local_80;
      fVar84 = fVar87;
      if (fVar89 < local_68 == (NAN(fVar89) || NAN(local_68))) goto LAB_004e8a18;
    }
    else {
      iVar48 = -1;
      uVar24 = (ulong)(uint)fVar93;
      fVar84 = fVar89;
      fVar89 = fVar87;
      fVar93 = fVar85;
      if (fVar87 < local_68 == (NAN(fVar87) || NAN(local_68))) goto LAB_004e8a18;
    }
    if (0.0 < fVar84) {
      fVar88 = 0.0;
      if (0.0 <= fVar89) {
        fVar88 = fVar89;
      }
      fVar86 = local_68;
      if (fVar84 == local_68 || fVar84 < local_68 != (NAN(fVar84) || NAN(local_68))) {
        fVar86 = fVar84;
      }
      iVar16 = (int)(fVar88 + 0.5);
      iVar56 = (int)(fVar86 + 0.5) - iVar16;
      if (iVar56 != 0 && iVar16 <= (int)(fVar86 + 0.5)) {
        fVar86 = ((float)uVar24 - fVar93) / (fVar84 - fVar89);
        puVar14 = local_98 + local_64 * iVar16;
        fVar84 = (float)NEON_fmadd(fVar86,0.0 - fVar89,fVar93);
        if (0.0 <= fVar89) {
          fVar84 = fVar93;
        }
        fVar84 = (float)NEON_fmadd(fVar86,((float)iVar16 - fVar88) + 0.5,fVar84);
        fVar84 = fVar84 + 0.5;
        do {
          fVar88 = 0.0;
          if (0.0 <= fVar84) {
            fVar88 = fVar84;
          }
          uVar17 = (uint)fVar88;
          if ((int)uVar17 < local_64) {
            uVar24 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
            *(int *)((long)puVar14 + uVar24) = *(int *)((long)puVar14 + uVar24) + iVar48;
          }
          fVar84 = fVar86 + fVar84;
          iVar56 = iVar56 + -1;
          puVar14 = puVar14 + local_64;
        } while (iVar56 != 0);
      }
    }
  }
LAB_004e8a18:
  lVar21 = lVar21 + 1;
  bVar11 = false;
  local_5c = '\x01';
  if (lVar21 == lVar4 >> 3) goto LAB_004e8e58;
  goto LAB_004e8a2c;
}


// ===== 004e9030  rive::TextValueRun::isHitTarget =====

/* rive::TextValueRun::isHitTarget(bool) */

void __thiscall rive::TextValueRun::isHitTarget(TextValueRun *this,bool param_1)

{
  this[0xc0] = (TextValueRun)param_1;
  return;
}


// ===== 004e9038  rive::TextValueRun::hitTestPoint =====

/* rive::TextValueRun::hitTestPoint(rive::Vec2D const&, bool, bool) */

undefined8 rive::TextValueRun::hitTestPoint(Vec2D *param_1,bool param_2,bool param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  Vec2D *pVVar4;
  
  pVVar4 = (Vec2D *)(ulong)param_2;
  uVar1 = hitTestAABB((TextValueRun *)param_1,pVVar4);
  if (((uVar1 & 1) != 0) &&
     ((plVar2 = *(long **)(param_1 + 0x30), plVar2 == (long *)0x0 ||
      (uVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,pVVar4,param_3,0), (uVar1 & 1) != 0)))) {
    uVar3 = hitTestHiFi((TextValueRun *)param_1,pVVar4,2.0);
    return uVar3;
  }
  return 0;
}


// ===== 004e90b0  FUN_004e90b0 =====

void FUN_004e90b0(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x19];
  *param_1 = (long)(PTR_vtable_0067d4f0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[0x1a] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x15];
  param_1[0x15] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_004d818c(pvVar1);
    operator_delete(pvVar1);
  }
  *param_1 = (long)(PTR_vtable_0067d588 + 0x10);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004e917c  FUN_004e917c =====

void FUN_004e917c(void *param_1)

{
  FUN_004e90b0();
  operator_delete(param_1);
  return;
}


// ===== 004e91a0  FUN_004e91a0 =====

undefined8 FUN_004e91a0(void)

{
  return 0x87;
}


// ===== 004e91a8  FUN_004e91a8 =====

bool FUN_004e91a8(undefined8 param_1,short param_2)

{
  return param_2 == 0x87 || param_2 == 10;
}


// ===== 004e91bc  FUN_004e91bc =====

undefined8 FUN_004e91bc(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar6 = 0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x10c) {
    if (param_2 == 4) {
      pcVar11 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar11) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e939c;
        }
        pcVar10 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar10;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar10;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004e939c:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      pbVar13 = (byte *)(param_1 + 0x10);
      if ((*pbVar13 & 1) != 0) {
        pvVar5 = *(void **)(param_1 + 0x20);
LAB_004e93dc:
        operator_delete(pvVar5);
      }
LAB_004e93e0:
      *(undefined8 *)(pbVar13 + 8) = uStack_38;
      *(undefined8 *)pbVar13 = local_40;
      *(undefined8 *)(pbVar13 + 0x10) = local_30;
    }
    else {
      if (param_2 != 5) goto LAB_004e93f4;
      uVar12 = 0;
      uVar7 = 0;
      pbVar13 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e9368;
        }
        pbVar9 = pbVar13 + 1;
        bVar1 = *pbVar13;
        uVar3 = uVar12 & 0x3f;
        uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
        uVar7 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar7;
        pbVar13 = pbVar9;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar9;
      if (uVar7 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e9368:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar7;
    }
  }
  else {
    if (param_2 == 0x10c) {
      pcVar11 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar11) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e93c4;
        }
        pcVar10 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar10;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar10;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004e93c4:
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
      }
      pbVar13 = (byte *)(param_1 + 0x90);
      if ((*pbVar13 & 1) != 0) {
        pvVar5 = *(void **)(param_1 + 0xa0);
        goto LAB_004e93dc;
      }
      goto LAB_004e93e0;
    }
    if (param_2 != 0x110) goto LAB_004e93f4;
    uVar12 = 0;
    uVar7 = 0;
    pbVar13 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar13) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004e9380;
      }
      pbVar9 = pbVar13 + 1;
      bVar1 = *pbVar13;
      uVar3 = uVar12 & 0x3f;
      uVar12 = (ulong)(((uint)uVar12 & 0xff) + 7);
      uVar7 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar7;
      pbVar13 = pbVar9;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar9;
    if (uVar7 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e9380:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar7;
  }
  uVar6 = 1;
LAB_004e93f4:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e941c  rive::TextValueRunBase::clone =====

/* rive::TextValueRunBase::clone() const */

long * __thiscall rive::TextValueRunBase::clone(TextValueRunBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0xf8);
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
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1c] = 0;
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  plVar3[0x13] = 0;
  *(undefined8 *)(plVar3 + 0x12) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[0xf] = 0;
  puVar2 = PTR_vtable_0067d4f0;
  *(undefined4 *)(plVar3 + 0x1d) = 0xffffffff;
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  *(undefined1 *)(plVar3 + 0x18) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1e] = 0;
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 0x12),(basic_string *)(this + 0x90));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004e94ec  FUN_004e94ec =====

void FUN_004e94ec(long *param_1)

{
  void *pvVar1;
  
  *param_1 = (long)(PTR_vtable_0067d588 + 0x10);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004e957c  FUN_004e957c =====

void FUN_004e957c(long *param_1)

{
  void *pvVar1;
  
  *param_1 = (long)(PTR_vtable_0067d588 + 0x10);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
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


// ===== 004e9608  FUN_004e9608 =====

void FUN_004e9608(void)

{
  return;
}


// ===== 004e960c  FUN_004e960c =====

void FUN_004e960c(void)

{
  return;
}


// ===== 004e9610  rive::TextVariationHelper::buildDependencies =====

/* rive::TextVariationHelper::buildDependencies() */

void __thiscall rive::TextVariationHelper::buildDependencies(TextVariationHelper *this)

{
  Component *pCVar1;
  
  pCVar1 = *(Component **)(*(long *)(this + 0x88) + 0x30);
  Component::addDependent(*(Component **)(pCVar1 + 0x40),(Component *)this);
  Component::addDependent((Component *)this,pCVar1);
  return;
}


// ===== 004e9648  rive::TextVariationHelper::update =====

/* rive::TextVariationHelper::update(rive::ComponentDirt) */

void rive::TextVariationHelper::update(long param_1)

{
  TextStyle::updateVariableFont(*(TextStyle **)(param_1 + 0x88));
  return;
}


// ===== 004e9650  FUN_004e9650 =====

void FUN_004e9650(long *param_1)

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


// ===== 004e96bc  rive::TextVariationModifier::modify =====

/* rive::TextVariationModifier::modify(rive::Font*, std::__ndk1::unordered_map<unsigned int, float,
   std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, float> > >&, float, float) const */

float __thiscall
rive::TextVariationModifier::modify
          (TextVariationModifier *this,Font *param_1,unordered_map *param_2,float param_3,
          float param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  unordered_map *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x23;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  
  uVar13 = *(ulong *)(param_2 + 8);
  uVar1 = *(uint *)(this + 0x88);
  uVar12 = (ulong)uVar1;
  if (uVar13 != 0) {
    uVar16 = NEON_cnt(uVar13,1);
    uVar14 = NEON_uaddlv(uVar16,1);
    uVar7 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar14) & 0xffffffff;
    if (uVar7 < 2) {
      uVar9 = (ulong)((int)uVar13 - 1U & uVar1);
    }
    else {
      uVar9 = uVar12;
      if (uVar13 <= uVar12) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar12 / uVar13;
        }
        uVar9 = uVar12 - uVar9 * uVar13;
      }
    }
    plVar8 = *(long **)(*(long *)param_2 + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar11 = plVar8[1];
        if (uVar11 == uVar12) {
          if (*(uint *)(plVar8 + 2) == uVar1) {
            uVar15 = *(undefined4 *)((long)plVar8 + 0x14);
            fVar18 = *(float *)(this + 0x8c);
            if (uVar13 == 0) goto LAB_004e9864;
            goto LAB_004e97b8;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar13 - 1;
          }
          else if (uVar13 <= uVar11) {
            uVar2 = 0;
            if (uVar13 != 0) {
              uVar2 = uVar11 / uVar13;
            }
            uVar11 = uVar11 - uVar2 * uVar13;
          }
          if (uVar11 != uVar9) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  uVar15 = (**(code **)(*(long *)param_1 + 0x20))(param_1,uVar12);
  uVar12 = (ulong)*(uint *)(this + 0x88);
  uVar13 = *(ulong *)(param_2 + 8);
  fVar18 = *(float *)(this + 0x8c);
  if (uVar13 != 0) {
LAB_004e97b8:
    uVar16 = NEON_cnt(uVar13,1);
    uVar14 = NEON_uaddlv(uVar16,1);
    uVar7 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar14) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x23 = (int)uVar13 - 1 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar13 <= uVar12) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar12 / uVar13;
        }
        unaff_x23 = uVar12 - uVar9 * uVar13;
      }
    }
    puVar6 = *(undefined8 **)(*(long *)param_2 + unaff_x23 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar6, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar12) {
          if ((int)plVar8[2] == (int)uVar12) goto LAB_004e9a24;
        }
        else {
          if (uVar7 < 2) {
            uVar9 = uVar9 & uVar13 - 1;
          }
          else if (uVar13 <= uVar9) {
            uVar11 = 0;
            if (uVar13 != 0) {
              uVar11 = uVar9 / uVar13;
            }
            uVar9 = uVar9 - uVar11 * uVar13;
          }
          if (uVar9 != unaff_x23) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_004e9864:
  plVar8 = (long *)operator_new(0x18);
  lVar3 = *(long *)(param_2 + 0x18);
  fVar17 = *(float *)(param_2 + 0x20);
  plVar8[1] = uVar12;
  *(int *)(plVar8 + 2) = (int)uVar12;
  *(undefined4 *)((long)plVar8 + 0x14) = 0;
  if ((uVar13 == 0) || (fVar17 * (float)uVar13 < (float)(lVar3 + 1))) {
    if (uVar13 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar7 = uVar7 | uVar13 << 1;
    uVar9 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__ndk1::__next_prime(uVar7);
      uVar13 = *(ulong *)(param_2 + 8);
    }
    if (uVar13 < uVar7) {
LAB_004e9900:
      FUN_004c1020(param_2);
    }
    else if (uVar7 < uVar13) {
      uVar9 = (ulong)((float)*(ulong *)(param_2 + 0x18) / *(float *)(param_2 + 0x20));
      if (uVar13 < 3) {
LAB_004e9964:
        uVar9 = std::__ndk1::__next_prime(uVar9);
      }
      else {
        uVar16 = NEON_cnt(uVar13,1);
        uVar14 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar14)) goto LAB_004e9964;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (uVar7 < uVar13) goto LAB_004e9900;
    }
    uVar13 = *(ulong *)(param_2 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x23 = (int)uVar13 - 1 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar13 <= uVar12) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar12 / uVar13;
        }
        unaff_x23 = uVar12 - uVar7 * uVar13;
      }
    }
  }
  lVar3 = *(long *)param_2;
  plVar4 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar4 == (long *)0x0) {
    puVar10 = param_2 + 0x10;
    lVar5 = *(long *)puVar10;
    *(long **)puVar10 = plVar8;
    *plVar8 = lVar5;
    *(unordered_map **)(lVar3 + unaff_x23 * 8) = puVar10;
    if (lVar5 == 0) goto LAB_004e9a18;
    uVar12 = *(ulong *)(lVar5 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar12 = uVar12 & uVar13 - 1;
    }
    else if (uVar13 <= uVar12) {
      uVar7 = 0;
      if (uVar13 != 0) {
        uVar7 = uVar12 / uVar13;
      }
      uVar12 = uVar12 - uVar7 * uVar13;
    }
    plVar4 = (long *)(*(long *)param_2 + uVar12 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_004e9a18:
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 1;
LAB_004e9a24:
  uVar15 = NEON_fmadd(uVar15,1.0 - param_4,fVar18 * param_4);
  *(undefined4 *)((long)plVar8 + 0x14) = uVar15;
  return param_3;
}


// ===== 004e9a58  rive::TextVariationModifier::axisValueChanged =====

/* rive::TextVariationModifier::axisValueChanged() */

void __thiscall rive::TextVariationModifier::axisValueChanged(TextVariationModifier *this)

{
                    /* WARNING: Could not recover jumptable at 0x004e9a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(this + 0x30) + 0x30) + 0x298))();
  return;
}


// ===== 004e9a6c  FUN_004e9a6c =====

void FUN_004e9a6c(long *param_1)

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


// ===== 004e9ad8  FUN_004e9ad8 =====

undefined8 FUN_004e9ad8(void)

{
  return 0xa2;
}


// ===== 004e9ae0  FUN_004e9ae0 =====

bool FUN_004e9ae0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 0xa0 < 3 || (param_2 & 0xffff) == 10;
}


// ===== 004e9b00  FUN_004e9b00 =====

undefined8 FUN_004e9b00(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x140) {
    if (param_2 == 4) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e9cac;
        }
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 < '\0');
      param_3[2] = (long)pcVar13;
      if ((char)param_3[3] == '\0') {
        rive::BinaryReader::readString((ulong)param_3);
      }
      else {
LAB_004e9cac:
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
      if (param_2 != 5) goto LAB_004e9cf4;
      uVar14 = 0;
      uVar6 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004e9c78;
        }
        pbVar10 = pbVar11 + 1;
        bVar1 = *pbVar11;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar11 = pbVar10;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar10;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e9c78:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 == 0x141) {
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
      goto LAB_004e9cf4;
    }
    if (param_2 != 0x140) goto LAB_004e9cf4;
    uVar14 = 0;
    uVar6 = 0;
    pbVar11 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004e9c90;
      }
      pbVar10 = pbVar11 + 1;
      bVar1 = *pbVar11;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar11 = pbVar10;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar10;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004e9c90:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004e9cf4:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e9d1c  FUN_004e9d1c =====

void FUN_004e9d1c(void)

{
  return;
}


// ===== 004e9d20  rive::TextVariationModifierBase::clone =====

/* rive::TextVariationModifierBase::clone() const */

long * __thiscall rive::TextVariationModifierBase::clone(TextVariationModifierBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  
  plVar2 = (long *)operator_new(0x90);
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
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  puVar1 = PTR_vtable_0067d4b8;
  uVar3 = *(undefined4 *)(this + 0x8c);
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  *(undefined4 *)((long)plVar2 + 0x8c) = uVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0x11) = *(undefined4 *)(this + 0x88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004e9db4  FUN_004e9db4 =====

void FUN_004e9db4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4e9db8);
  (*pcVar1)();
}


// ===== 004e9db8  FUN_004e9db8 =====

void FUN_004e9db8(void)

{
  return;
}


// ===== 004e9dbc  rive::UTF::CountUTF8Length =====

/* rive::UTF::CountUTF8Length(unsigned char const*) */

int rive::UTF::CountUTF8Length(uchar *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  bVar2 = *param_1;
  iVar3 = 1;
  if (((char)bVar2 < '\0') && (uVar4 = (uint)bVar2, (bVar2 >> 6 & 1) != 0)) {
    do {
      iVar3 = iVar3 + 1;
      uVar1 = uVar4 >> 5;
      uVar4 = uVar4 << 1;
    } while ((uVar1 & 1) != 0);
  }
  return iVar3;
}


// ===== 004e9de0  rive::UTF::NextUTF8 =====

/* rive::UTF::NextUTF8(unsigned char const**) */

uint rive::UTF::NextUTF8(uchar **param_1)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  
  pbVar6 = *param_1;
  bVar4 = *pbVar6;
  if (((char)bVar4 < '\0') && ((bVar4 >> 6 & 1) != 0)) {
    lVar1 = 0;
    uVar7 = (uint)bVar4;
    do {
      lVar9 = lVar1;
      lVar1 = lVar9 + 1;
      uVar3 = uVar7 >> 5;
      uVar7 = uVar7 << 1;
    } while ((uVar3 & 1) != 0);
    pbVar2 = pbVar6 + lVar9 + 2;
    uVar7 = (uint)lVar1;
    iVar8 = -uVar7;
    uVar7 = 0x7fU >> (ulong)(uVar7 & 0x1f) & (uint)bVar4;
    do {
      pbVar6 = pbVar6 + 1;
      bVar5 = iVar8 != -1;
      iVar8 = iVar8 + 1;
      uVar7 = *pbVar6 & 0x3f | uVar7 << 6;
    } while (bVar5);
    *param_1 = pbVar2;
    return uVar7;
  }
  *param_1 = pbVar6 + 1;
  return (uint)bVar4;
}


// ===== 004e9e50  rive::UTF::ToUTF16 =====

/* rive::UTF::ToUTF16(unsigned int, unsigned short*) */

undefined8 rive::UTF::ToUTF16(uint param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  
  if (param_1 < 0x10000) {
    uVar2 = 1;
  }
  else {
    uVar1 = (ushort)param_1;
    param_1 = param_1 >> 10 | 0xffffd7c0;
    param_2[1] = uVar1 & 0x3ff | 0xdc00;
    uVar2 = 2;
  }
  *param_2 = (ushort)param_1;
  return uVar2;
}


// ===== 004e9e88  rive::UTF::CountCodePointLength =====

/* rive::UTF::CountCodePointLength(rive::Span<unsigned int const>) */

int __thiscall rive::UTF::CountCodePointLength(UTF *this,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    param_2 = param_2 << 2;
    iVar3 = 0;
    do {
      uVar1 = *(uint *)this;
      if (uVar1 < 0x80) {
        iVar2 = iVar3 + 1;
      }
      else if (uVar1 < 0x800) {
        iVar2 = iVar3 + 2;
      }
      else if (uVar1 >> 0x10 == 0) {
        iVar2 = iVar3 + 3;
      }
      else {
        iVar2 = iVar3 + 4;
        if (0x10ffff < uVar1) {
          iVar2 = iVar3;
        }
      }
      iVar3 = iVar2;
      param_2 = param_2 + -4;
      this = this + 4;
    } while (param_2 != 0);
  }
  return iVar3;
}


// ===== 004e9ef0  rive::UTF::Encode =====

/* rive::UTF::Encode(unsigned char*, unsigned int) */

undefined8 rive::UTF::Encode(uchar *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = bVar1;
    return 1;
  }
  if (param_2 < 0x800) {
    *param_1 = (byte)(param_2 >> 6) | 0xc0;
    param_1[1] = bVar1 & 0x3f | 0x80;
    return 2;
  }
  if (param_2 >> 0x10 == 0) {
    *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
    param_1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[2] = bVar1 & 0x3f | 0x80;
    return 3;
  }
  if (param_2 >> 0x10 < 0x11) {
    *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
    param_1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
    param_1[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[3] = bVar1 & 0x3f | 0x80;
    return 4;
  }
  return 0;
}


// ===== 004e9fa8  rive::TransformComponent::onAddedClean =====

/* rive::TransformComponent::onAddedClean(rive::CoreContext*) */

undefined8 rive::TransformComponent::onAddedClean(CoreContext *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0x5b);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  return 0;
}


// ===== 004e9ff8  rive::TransformComponent::collapse =====

/* rive::TransformComponent::collapse(bool) */

uint __thiscall rive::TransformComponent::collapse(TransformComponent *this,bool param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  Component *pCVar4;
  undefined8 *puVar5;
  
  uVar2 = Component::collapse((Component *)this,param_1);
  if ((uVar2 & 1) != 0) {
    puVar1 = *(undefined8 **)(this + 0x90);
    for (puVar5 = *(undefined8 **)(this + 0x88); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x60))((long *)*puVar5,param_1);
    }
    puVar1 = *(undefined8 **)(this + 0x70);
    for (puVar5 = *(undefined8 **)(this + 0x68); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      pCVar4 = (Component *)*puVar5;
      uVar3 = (**(code **)(*(long *)pCVar4 + 0x18))(pCVar4,0x26);
      if (((uVar3 & 1) != 0) && (*(long *)(pCVar4 + 0x100) != *(long *)(pCVar4 + 0xf8))) {
        Component::addDirt(pCVar4,0x80,1);
      }
    }
  }
  return uVar2 & 1;
}


// ===== 004ea0b0  rive::TransformComponent::markDirtyIfConstrained =====

/* rive::TransformComponent::markDirtyIfConstrained() */

void __thiscall rive::TransformComponent::markDirtyIfConstrained(TransformComponent *this)

{
  if (*(long *)(this + 0x100) != *(long *)(this + 0xf8)) {
    Component::addDirt((Component *)this,0x80,1);
    return;
  }
  return;
}


// ===== 004ea0cc  rive::TransformComponent::buildDependencies =====

/* rive::TransformComponent::buildDependencies() */

void __thiscall rive::TransformComponent::buildDependencies(TransformComponent *this)

{
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
    return;
  }
  return;
}


// ===== 004ea0e0  rive::TransformComponent::markTransformDirty =====

/* rive::TransformComponent::markTransformDirty() */

void __thiscall rive::TransformComponent::markTransformDirty(TransformComponent *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 6 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x40;
    (**(code **)(*(long *)this + 0x70))();
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
    Component::addDirt((Component *)this,0x80,1);
    return;
  }
  return;
}


// ===== 004ea154  rive::TransformComponent::updateTransform =====

/* rive::TransformComponent::updateTransform() */

void __thiscall rive::TransformComponent::updateTransform(TransformComponent *this)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined4 uVar3;
  float local_8;
  float fStack_4;
  
  if (*(float *)(this + 0xbc) == 0.0) {
    fStack_4 = 0.0;
    local_8 = 1.0;
  }
  else {
    sincosf(*(float *)(this + 0xbc),&fStack_4,&local_8);
  }
  *(float *)(this + 0xd0) = local_8;
  *(float *)(this + 0xd4) = fStack_4;
  *(undefined8 *)(this + 0xe0) = 0;
  *(float *)(this + 0xd8) = -fStack_4;
  *(float *)(this + 0xdc) = local_8;
  uVar3 = (**(code **)(*(long *)this + 0xd8))(this);
  *(undefined4 *)(this + 0xe0) = uVar3;
  uVar3 = (**(code **)(*(long *)this + 0xe0))(this);
  auVar2 = *(undefined1 (*) [12])(this + 0xc0);
  auVar1 = *(undefined1 (*) [12])(this + 0xc0);
  *(undefined4 *)(this + 0xe4) = uVar3;
  *(ulong *)(this + 0xd8) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xd8) >> 0x20) * auVar1._4_4_,
                (float)*(undefined8 *)(this + 0xd8) * auVar2._4_4_);
  *(ulong *)(this + 0xd0) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xd0) >> 0x20) * auVar1._0_4_,
                (float)*(undefined8 *)(this + 0xd0) * auVar2._0_4_);
  return;
}


// ===== 004ea1e0  rive::TransformComponent::localBounds =====

/* rive::TransformComponent::localBounds() const */

undefined1  [16] rive::TransformComponent::localBounds(void)

{
  return ZEXT816(0);
}


// ===== 004ea1f4  rive::TransformComponent::updateWorldTransform =====

/* rive::TransformComponent::updateWorldTransform() */

void __thiscall rive::TransformComponent::updateWorldTransform(TransformComponent *this)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar2 = *(long *)(this + 0xf0);
  if (lVar2 == 0) {
    *(undefined8 *)(this + 0xac) = *(undefined8 *)(this + 0xd8);
    *(undefined8 *)(this + 0xa4) = *(undefined8 *)(this + 0xd0);
    *(undefined8 *)(this + 0xb4) = *(undefined8 *)(this + 0xe0);
  }
  else {
    fVar7 = (float)((ulong)*(undefined8 *)(this + 0xd4) >> 0x20);
    fVar3 = (float)*(undefined8 *)(this + 0xd4);
    fVar6 = (float)*(undefined8 *)(lVar2 + 0xa4);
    fVar8 = (float)((ulong)*(undefined8 *)(lVar2 + 0xa4) >> 0x20);
    fVar10 = (float)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20);
    fVar4 = (float)*(undefined8 *)(lVar2 + 0xac);
    fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 0xac) >> 0x20);
    fVar9 = (float)*(undefined8 *)(this + 0xe0);
    uVar1 = *(undefined8 *)(lVar2 + 0xb4);
    *(ulong *)(this + 0xac) =
         CONCAT44(fVar5 * (float)*(undefined8 *)(this + 0xdc) + fVar7 * fVar8,
                  fVar4 * (float)*(undefined8 *)(this + 0xdc) + fVar7 * fVar6);
    *(ulong *)(this + 0xa4) =
         CONCAT44(fVar5 * fVar3 + (float)*(undefined8 *)(this + 0xd0) * fVar8,
                  fVar4 * fVar3 + (float)*(undefined8 *)(this + 0xd0) * fVar6);
    *(ulong *)(this + 0xb4) =
         CONCAT44((float)((ulong)uVar1 >> 0x20) + fVar5 * fVar10 + fVar8 * fVar9,
                  (float)uVar1 + fVar4 * fVar10 + fVar6 * fVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x004ea268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xc0))();
  return;
}


// ===== 004ea26c  rive::TransformComponent::updateConstraints =====

/* rive::TransformComponent::updateConstraints() */

void __thiscall rive::TransformComponent::updateConstraints(TransformComponent *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x100);
  for (puVar2 = *(undefined8 **)(this + 0xf8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0xa0))((long *)*puVar2,this);
  }
  return;
}


// ===== 004ea2b8  rive::TransformComponent::update =====

/* rive::TransformComponent::update(rive::ComponentDirt) */

void __thiscall rive::TransformComponent::update(TransformComponent *this,uint param_2)

{
  float fVar1;
  
  if ((param_2 >> 6 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this);
  }
  if (((param_2 & 0xffff) >> 7 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this);
  }
  if (((param_2 & 0xffff) >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xa0);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      fVar1 = (float)(**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      *(float *)(this + 0xe8) = fVar1 * *(float *)(this + 0xe8);
    }
  }
  return;
}


// ===== 004ea338  rive::TransformComponent::transform =====

/* rive::TransformComponent::transform() const */

TransformComponent * __thiscall rive::TransformComponent::transform(TransformComponent *this)

{
  return this + 0xd0;
}


// ===== 004ea340  rive::TransformComponent::mutableTransform =====

/* rive::TransformComponent::mutableTransform() */

TransformComponent * __thiscall rive::TransformComponent::mutableTransform(TransformComponent *this)

{
  return this + 0xd0;
}


// ===== 004ea348  rive::TransformComponent::rotationChanged =====

/* rive::TransformComponent::rotationChanged() */

void __thiscall rive::TransformComponent::rotationChanged(TransformComponent *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 6 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x40;
    (**(code **)(*(long *)this + 0x70))();
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
    Component::addDirt((Component *)this,0x80,1);
    return;
  }
  return;
}


// ===== 004ea3bc  rive::TransformComponent::scaleXChanged =====

/* rive::TransformComponent::scaleXChanged() */

void __thiscall rive::TransformComponent::scaleXChanged(TransformComponent *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 6 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x40;
    (**(code **)(*(long *)this + 0x70))();
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
    Component::addDirt((Component *)this,0x80,1);
    return;
  }
  return;
}


// ===== 004ea430  rive::TransformComponent::scaleYChanged =====

/* rive::TransformComponent::scaleYChanged() */

void __thiscall rive::TransformComponent::scaleYChanged(TransformComponent *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + 0x60) >> 6 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x40;
    (**(code **)(*(long *)this + 0x70))();
    lVar2 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
    Component::addDirt((Component *)this,0x80,1);
    return;
  }
  return;
}


// ===== 004ea4a4  rive::TransformComponent::addConstraint =====

/* rive::TransformComponent::addConstraint(rive::Constraint*) */

void __thiscall
rive::TransformComponent::addConstraint(TransformComponent *this,Constraint *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x100);
  if (puVar10 < *(undefined8 **)(this + 0x108)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004ea5e4;
  }
  puVar9 = *(undefined8 **)(this + 0xf8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003deac4();
LAB_004ea604:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x108) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004ea604;
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
      if (uVar6 == uVar7) goto LAB_004ea5d0;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xf8);
  }
LAB_004ea5d0:
  *(undefined8 **)(this + 0xf8) = puVar4;
  *(undefined8 **)(this + 0x100) = puVar13;
  *(void **)(this + 0x108) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004ea5e4:
  *(undefined8 **)(this + 0x100) = puVar13;
  return;
}


// ===== 004ea608  FUN_004ea608 =====

void FUN_004ea608(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4ea60c);
  (*pcVar1)();
}


// ===== 004ea60c  FUN_004ea60c =====

undefined8 FUN_004ea60c(void)

{
  return 0x26;
}


// ===== 004ea614  FUN_004ea614 =====

undefined8 FUN_004ea614(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (((1 < param_2 - 10) && (param_2 != 0x26)) && (param_2 != 0x5b)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004ea640  rive::DataEnum::~DataEnum =====

/* rive::DataEnum::~DataEnum() */

void __thiscall rive::DataEnum::~DataEnum(DataEnum *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar1 = *(long **)(this + 0x10);
  plVar2 = *(long **)(this + 0x18);
  *(undefined **)this = PTR_vtable_0067d298 + 0x10;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x18) = pvVar3;
  operator_delete(pvVar3);
  return;
}


// ===== 004ea6d0  rive::DataEnum::~DataEnum =====

/* rive::DataEnum::~DataEnum() */

void __thiscall rive::DataEnum::~DataEnum(DataEnum *this)

{
  ~DataEnum(this);
  operator_delete(this);
  return;
}


// ===== 004ea6f4  FUN_004ea6f4 =====

undefined8 FUN_004ea6f4(void)

{
  return 0x1fe;
}


// ===== 004ea6fc  FUN_004ea6fc =====

bool FUN_004ea6fc(undefined8 param_1,short param_2)

{
  return param_2 == 0x1fe;
}


// ===== 004ea70c  FUN_004ea70c =====

undefined8 FUN_004ea70c(void)

{
  return 0;
}


// ===== 004ea714  rive::DataEnum::addValue =====

/* rive::DataEnum::addValue(rive::DataEnumValue*) */

void __thiscall rive::DataEnum::addValue(DataEnum *this,DataEnumValue *param_1)

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
    goto LAB_004ea854;
  }
  puVar9 = *(undefined8 **)(this + 0x10);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003ab68c();
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
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
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
      if (uVar6 == uVar7) goto LAB_004ea840;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x10);
  }
LAB_004ea840:
  *(undefined8 **)(this + 0x10) = puVar4;
  *(undefined8 **)(this + 0x18) = puVar13;
  *(void **)(this + 0x20) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004ea854:
  *(undefined8 **)(this + 0x18) = puVar13;
  return;
}


// ===== 004ea878  rive::DataEnum::value =====

/* rive::DataEnum::value(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void rive::DataEnum::value
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                *param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong __n;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  plVar13 = *(long **)(param_2 + 0x10);
  plVar3 = *(long **)(param_2 + 0x18);
  if (plVar13 != plVar3) {
    bVar4 = *param_3;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_3 + 8);
    }
    do {
      lVar12 = *plVar13;
      bVar5 = *(byte *)(lVar12 + 0x10);
      __n = *(size_t *)(lVar12 + 0x18);
      uVar9 = (ulong)(bVar5 >> 1);
      bVar6 = (bVar5 & 1) == 0;
      uVar1 = uVar9;
      if (!bVar6) {
        uVar1 = __n;
      }
      if (uVar1 == uVar2) {
        pbVar10 = param_3 + 1;
        if ((bVar4 & 1) != 0) {
          pbVar10 = *(byte **)(param_3 + 0x10);
        }
        if ((bVar5 & 1) == 0) {
          if (bVar5 < 2) {
LAB_004ea944:
            pbVar10 = (byte *)(lVar12 + 0x28);
            bVar4 = *pbVar10;
            uVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar2 = *(ulong *)(lVar12 + 0x30);
            }
            if (uVar2 == 0) {
              if (!bVar6) {
                pcVar8 = *(char **)(lVar12 + 0x20);
                goto LAB_004ea9b8;
              }
              pbVar10 = (byte *)(lVar12 + 0x10);
            }
            else if ((bVar4 & 1) != 0) {
              pcVar8 = *(char **)(lVar12 + 0x38);
              __n = *(ulong *)(lVar12 + 0x30);
LAB_004ea9b8:
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external(param_1,pcVar8,__n);
              return;
            }
            uVar15 = *(undefined8 *)(pbVar10 + 8);
            uVar14 = *(undefined8 *)pbVar10;
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pbVar10 + 0x10);
            *(undefined8 *)(param_1 + 8) = uVar15;
            *(undefined8 *)param_1 = uVar14;
            return;
          }
          pbVar11 = (byte *)(lVar12 + 0x11);
          while (*pbVar11 == *pbVar10) {
            uVar9 = uVar9 - 1;
            pbVar11 = pbVar11 + 1;
            pbVar10 = pbVar10 + 1;
            if (uVar9 == 0) {
              bVar6 = true;
              goto LAB_004ea944;
            }
          }
        }
        else {
          iVar7 = memcmp(*(void **)(lVar12 + 0x20),pbVar10,__n);
          if (iVar7 == 0) goto LAB_004ea944;
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
  }
  *(undefined2 *)param_1 = 0;
  return;
}


// ===== 004ea9d4  rive::DataEnum::value =====

/* rive::DataEnum::value(unsigned int) */

void rive::DataEnum::value(uint param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)((ulong)param_1 + 0x10);
  if ((ulong)(*(long *)((ulong)param_1 + 0x18) - lVar3 >> 3) <= (in_x1 & 0xffffffff)) {
    *(undefined2 *)in_x8 = 0;
    return;
  }
  lVar3 = *(long *)(lVar3 + (in_x1 & 0xffffffff) * 8);
  pbVar4 = (byte *)(lVar3 + 0x28);
  bVar2 = *pbVar4;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(lVar3 + 0x30);
  }
  if (uVar1 == 0) {
    pbVar4 = (byte *)(lVar3 + 0x10);
    if ((*pbVar4 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(in_x8,*(char **)(lVar3 + 0x20),*(ulong *)(lVar3 + 0x18));
      return;
    }
  }
  else if ((bVar2 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(in_x8,*(char **)(lVar3 + 0x38),*(ulong *)(lVar3 + 0x30));
    return;
  }
  uVar6 = *(undefined8 *)(pbVar4 + 8);
  uVar5 = *(undefined8 *)pbVar4;
  *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(pbVar4 + 0x10);
  *(undefined8 *)(in_x8 + 8) = uVar6;
  *(undefined8 *)in_x8 = uVar5;
  return;
}


// ===== 004eaa4c  rive::DataEnum::value =====

/* rive::DataEnum::value(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall rive::DataEnum::value(DataEnum *this,byte *param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  byte *__s2;
  char *__s2_00;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  long *plVar12;
  byte bVar13;
  undefined8 *puVar14;
  ulong local_80;
  size_t sStack_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar14 = *(undefined8 **)(this + 0x10);
  puVar3 = *(undefined8 **)(this + 0x18);
  if (puVar14 != puVar3) {
    bVar13 = *param_2;
    sVar1 = (ulong)(bVar13 >> 1);
    if ((bVar13 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 8);
    }
    do {
      plVar12 = (long *)*puVar14;
      bVar5 = *(byte *)(plVar12 + 2);
      uVar9 = (ulong)(bVar5 >> 1);
      sVar2 = uVar9;
      if ((bVar5 & 1) != 0) {
        sVar2 = plVar12[3];
      }
      if (sVar2 == sVar1) {
        __s2 = param_2 + 1;
        if ((bVar13 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if ((bVar5 & 1) == 0) {
          if (bVar5 < 2) {
LAB_004eab1c:
            if ((*param_3 & 1) == 0) {
              sStack_78 = param_3[1];
              local_80 = *param_3;
              local_70 = (char *)param_3[2];
            }
            else {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_80,(char *)param_3[2],param_3[1]);
            }
            bVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(plVar12 + 5);
            uVar9 = (ulong)((byte)bVar4 >> 1);
            sVar1 = uVar9;
            if (((byte)bVar4 & 1) != 0) {
              sVar1 = plVar12[6];
            }
            bVar13 = (byte)local_80._0_1_ & 1;
            sVar2 = (ulong)((byte)local_80._0_1_ >> 1);
            if ((local_80 & 1) != 0) {
              sVar2 = sStack_78;
            }
            if (sVar1 != sVar2) goto LAB_004eabe4;
            __s2_00 = (char *)((ulong)&local_80 | 1);
            if ((local_80 & 1) != 0) {
              __s2_00 = local_70;
            }
            if (((byte)bVar4 & 1) != 0) {
              iVar7 = memcmp((void *)plVar12[7],__s2_00,plVar12[6]);
              if (iVar7 == 0) goto LAB_004eac04;
              goto LAB_004eabe4;
            }
            if ((byte)bVar4 < 2) goto LAB_004eac04;
            pcVar11 = (char *)((long)plVar12 + 0x29);
            goto LAB_004eaba4;
          }
          pbVar10 = (byte *)((long)plVar12 + 0x11);
          while (*pbVar10 == *__s2) {
            uVar9 = uVar9 - 1;
            pbVar10 = pbVar10 + 1;
            __s2 = __s2 + 1;
            if (uVar9 == 0) goto LAB_004eab1c;
          }
        }
        else {
          iVar7 = memcmp((void *)plVar12[4],__s2,plVar12[3]);
          if (iVar7 == 0) goto LAB_004eab1c;
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar3);
  }
  uVar8 = 0;
  goto LAB_004eac14;
LAB_004eabe4:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar12 + 5),(basic_string *)&local_80);
  (**(code **)(*plVar12 + 0x58))(plVar12);
  bVar13 = (byte)local_80._0_1_ & 1;
  goto LAB_004eac04;
  while( true ) {
    uVar9 = uVar9 - 1;
    pcVar11 = pcVar11 + 1;
    __s2_00 = __s2_00 + 1;
    if (uVar9 == 0) break;
LAB_004eaba4:
    if (*pcVar11 != *__s2_00) goto LAB_004eabe4;
  }
LAB_004eac04:
  if (bVar13 != 0) {
    operator_delete(local_70);
  }
  uVar8 = 1;
LAB_004eac14:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


// ===== 004eac48  rive::DataEnum::value =====

/* rive::DataEnum::value(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall rive::DataEnum::value(DataEnum *this,ulong param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  int iVar5;
  char *__s2;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  byte bVar10;
  ulong local_60;
  size_t sStack_58;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  param_2 = param_2 & 0xffffffff;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar9 = *(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3;
  if (uVar9 <= param_2) goto LAB_004ead74;
  plVar8 = *(long **)(*(long *)(this + 0x10) + param_2 * 8);
  if ((*param_3 & 1) == 0) {
    sStack_58 = param_3[1];
    local_60 = *param_3;
    local_50 = (char *)param_3[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,(char *)param_3[2],param_3[1]);
  }
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (plVar8 + 5);
  uVar6 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar6;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = plVar8[6];
  }
  bVar10 = (byte)local_60._0_1_ & 1;
  sVar2 = (ulong)((byte)local_60._0_1_ >> 1);
  if ((local_60 & 1) != 0) {
    sVar2 = sStack_58;
  }
  if (sVar1 == sVar2) {
    __s2 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      __s2 = local_50;
    }
    if (((byte)bVar3 & 1) == 0) {
      if (1 < (byte)bVar3) {
        pcVar7 = (char *)((long)plVar8 + 0x29);
        do {
          if (*pcVar7 != *__s2) goto LAB_004ead48;
          uVar6 = uVar6 - 1;
          pcVar7 = pcVar7 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
    }
    else {
      iVar5 = memcmp((void *)plVar8[7],__s2,plVar8[6]);
      if (iVar5 != 0) goto LAB_004ead48;
    }
  }
  else {
LAB_004ead48:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (plVar8 + 5),(basic_string *)&local_60);
    (**(code **)(*plVar8 + 0x58))(plVar8);
    bVar10 = (byte)local_60._0_1_ & 1;
  }
  if (bVar10 != 0) {
    operator_delete(local_50);
  }
LAB_004ead74:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2 < uVar9);
  }
  return;
}


// ===== 004eada8  rive::DataEnum::valueIndex =====

/* rive::DataEnum::valueIndex(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

int __thiscall rive::DataEnum::valueIndex(DataEnum *this,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *__s2;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  int iVar10;
  long *plVar11;
  
  plVar11 = *(long **)(this + 0x10);
  plVar3 = *(long **)(this + 0x18);
  if (plVar11 != plVar3) {
    bVar4 = *param_2;
    iVar10 = 0;
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 8);
    }
    do {
      lVar8 = *plVar11;
      bVar5 = *(byte *)(lVar8 + 0x10);
      uVar7 = (ulong)(bVar5 >> 1);
      sVar2 = uVar7;
      if ((bVar5 & 1) != 0) {
        sVar2 = *(size_t *)(lVar8 + 0x18);
      }
      if (sVar2 == sVar1) {
        __s2 = param_2 + 1;
        if ((bVar4 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if ((bVar5 & 1) == 0) {
          if (bVar5 < 2) {
            return iVar10;
          }
          pbVar9 = (byte *)(lVar8 + 0x11);
          while (*pbVar9 == *__s2) {
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            __s2 = __s2 + 1;
            if (uVar7 == 0) {
              return iVar10;
            }
          }
        }
        else {
          iVar6 = memcmp(*(void **)(lVar8 + 0x20),__s2,*(size_t *)(lVar8 + 0x18));
          if (iVar6 == 0) {
            return iVar10;
          }
        }
      }
      plVar11 = plVar11 + 1;
      iVar10 = iVar10 + 1;
    } while (plVar11 != plVar3);
  }
  return -1;
}


// ===== 004eae8c  rive::DataEnum::valueIndex =====

/* rive::DataEnum::valueIndex(unsigned int) */

uint __thiscall rive::DataEnum::valueIndex(DataEnum *this,uint param_1)

{
  if ((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3) <= (ulong)param_1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}


// ===== 004eaea4  rive::DataEnumBase::clone =====

/* rive::DataEnumBase::clone() const */

void rive::DataEnumBase::clone(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x40);
  puVar2 = PTR_vtable_0067d298;
  lVar1 = DAT_0024e6c8;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[1] = lVar1;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined2 *)(plVar3 + 5) = 0;
  plVar3[4] = 0;
  return;
}


// ===== 004eaeec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004eaef0  rive::DataEnumValue::import =====

/* rive::DataEnumValue::import(rive::ImportStack&) */

undefined8 __thiscall rive::DataEnumValue::import(DataEnumValue *this,ImportStack *param_1)

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
    uVar5 = (ulong)((uint)uVar4 - 1) & 0x1b6;
  }
  else {
    uVar5 = 0x1b6;
    if (uVar4 < 0x1b7) {
      uVar1 = (uint)uVar4 & 0xffff;
      uVar2 = 0;
      if ((uVar4 & 0xffff) != 0) {
        uVar2 = 0x1b6 / uVar1;
      }
      uVar5 = (ulong)(0x1b6 - uVar2 * uVar1);
    }
  }
  plVar6 = *(long **)(*(long *)param_1 + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == 0x1b6) {
        if ((short)plVar6[2] == 0x1b6) {
          if (plVar6[3] == 0) {
            return 1;
          }
          DataEnum::addValue(*(DataEnum **)(plVar6[3] + 8),this);
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


// ===== 004eafe0  FUN_004eafe0 =====

void FUN_004eafe0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d590 + 0x10);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004eb034  FUN_004eb034 =====

void FUN_004eb034(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d590 + 0x10);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004eb084  FUN_004eb084 =====

undefined8 FUN_004eb084(void)

{
  return 0x1bd;
}


// ===== 004eb08c  FUN_004eb08c =====

bool FUN_004eb08c(undefined8 param_1,short param_2)

{
  return param_2 == 0x1bd;
}


// ===== 004eb09c  FUN_004eb09c =====

void FUN_004eb09c(long param_1,short param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0x243) {
    pcVar6 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar6) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004eb1c0;
      }
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 < '\0');
    param_3[2] = (long)pcVar7;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_004eb1c0:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    pbVar8 = (byte *)(param_1 + 0x28);
    if ((*pbVar8 & 1) != 0) {
      pvVar3 = *(void **)(param_1 + 0x38);
LAB_004eb1d8:
      operator_delete(pvVar3);
    }
  }
  else {
    if (param_2 != 0x242) {
      uVar4 = 0;
      goto LAB_004eb1f0;
    }
    pcVar6 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar6) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004eb198;
      }
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 < '\0');
    param_3[2] = (long)pcVar7;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_004eb198:
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
    }
    pbVar8 = (byte *)(param_1 + 0x10);
    if ((*pbVar8 & 1) != 0) {
      pvVar3 = *(void **)(param_1 + 0x20);
      goto LAB_004eb1d8;
    }
  }
  uVar4 = 1;
  *(undefined8 *)(pbVar8 + 8) = uStack_38;
  *(undefined8 *)pbVar8 = local_40;
  *(undefined8 *)(pbVar8 + 0x10) = local_30;
LAB_004eb1f0:
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 004eb214  FUN_004eb214 =====

void FUN_004eb214(void)

{
  return;
}


// ===== 004eb218  FUN_004eb218 =====

void FUN_004eb218(void)

{
  return;
}


// ===== 004eb21c  rive::DataEnumValueBase::clone =====

/* rive::DataEnumValueBase::clone() const */

long * __thiscall rive::DataEnumValueBase::clone(DataEnumValueBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x40);
  plVar2[1] = 0;
  *plVar2 = 0;
  puVar1 = PTR_vtable_0067d2c0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0x29) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 5),(basic_string *)(this + 0x28));
  return plVar2;
}


// ===== 004eb288  FUN_004eb288 =====

void FUN_004eb288(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0067d590 + 0x10);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004eb2d8  rive::PropertySymbolDependent::PropertySymbolDependent =====

/* rive::PropertySymbolDependent::PropertySymbolDependent(rive::Core*, rive::CoreObjectListener*,
   rive::ViewModelInstanceValue*) */

void __thiscall
rive::PropertySymbolDependent::PropertySymbolDependent
          (PropertySymbolDependent *this,Core *param_1,CoreObjectListener *param_2,
          ViewModelInstanceValue *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d7d8;
  *(CoreObjectListener **)(this + 0x10) = param_2;
  *(ViewModelInstanceValue **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(Core **)(this + 8) = param_1;
  if (param_3 != (ViewModelInstanceValue *)0x0) {
    ViewModelInstanceValue::addDependent(param_3,(ViewModelValueDependent *)this);
    return;
  }
  return;
}


// ===== 004eb304  rive::PropertySymbolDependent::addDirt =====

/* rive::PropertySymbolDependent::addDirt(rive::ComponentDirt, bool) */

void rive::PropertySymbolDependent::addDirt(long *param_1)

{
  (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x004eb334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x10))();
  return;
}


// ===== 004eb338  rive::PropertySymbolDependent::~PropertySymbolDependent =====

/* rive::PropertySymbolDependent::~PropertySymbolDependent() */

void __thiscall
rive::PropertySymbolDependent::~PropertySymbolDependent(PropertySymbolDependent *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4eb33c);
  (*pcVar1)();
}


// ===== 004eb33c  rive::PropertySymbolDependent::~PropertySymbolDependent =====

/* WARNING: Removing unreachable block (ram,0x004eb3ec) */
/* rive::PropertySymbolDependent::~PropertySymbolDependent() */

void __thiscall
rive::PropertySymbolDependent::~PropertySymbolDependent(PropertySymbolDependent *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x18);
  *(undefined **)this = PTR_vtable_0067d7d8 + 0x10;
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 0xf0);
    puVar4 = *(undefined8 **)(lVar5 + 0xe8);
    puVar2 = puVar4;
    for (; (puVar4 != puVar1 && (puVar2 = puVar4, (PropertySymbolDependent *)*puVar4 != this));
        puVar4 = puVar4 + 1) {
      puVar2 = puVar1;
    }
    if ((puVar2 != puVar1) && (puVar4 = puVar2 + 1, puVar3 = puVar2, puVar4 != puVar1)) {
      do {
        puVar2 = puVar3;
        if ((PropertySymbolDependent *)*puVar4 != this) {
          puVar2 = puVar3 + 1;
          *puVar3 = (PropertySymbolDependent *)*puVar4;
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
  return;
}


// ===== 004eb410  rive::PropertySymbolDependentSingle::PropertySymbolDependentSingle =====

/* rive::PropertySymbolDependentSingle::PropertySymbolDependentSingle(rive::Core*,
   rive::CoreObjectListener*, rive::ViewModelInstanceValue*, unsigned short) */

void __thiscall
rive::PropertySymbolDependentSingle::PropertySymbolDependentSingle
          (PropertySymbolDependentSingle *this,Core *param_1,CoreObjectListener *param_2,
          ViewModelInstanceValue *param_3,ushort param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067d7d8;
  *(CoreObjectListener **)(this + 0x10) = param_2;
  *(ViewModelInstanceValue **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(Core **)(this + 8) = param_1;
  if (param_3 != (ViewModelInstanceValue *)0x0) {
    ViewModelInstanceValue::addDependent(param_3,(ViewModelValueDependent *)this);
  }
  *(undefined ***)this = &PTR_addDirt_00676978;
  *(ushort *)(this + 0x20) = param_4;
  return;
}


// ===== 004eb464  FUN_004eb464 =====

void FUN_004eb464(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4eb468);
  (*pcVar1)();
}


// ===== 004eb468  rive::PropertySymbolDependentMulti::PropertySymbolDependentMulti =====

/* rive::PropertySymbolDependentMulti::PropertySymbolDependentMulti(rive::Core*,
   rive::CoreObjectListener*, rive::ViewModelInstanceValue*, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> >) */

void __thiscall
rive::PropertySymbolDependentMulti::PropertySymbolDependentMulti
          (PropertySymbolDependentMulti *this,undefined8 param_1,long *param_2,
          ViewModelInstanceValue *param_3,undefined8 *param_5)

{
  void *__src;
  ulong __n;
  undefined *puVar1;
  void *__dest;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_vtable_0067d7d8;
  *(long **)(this + 0x10) = param_2;
  *(ViewModelInstanceValue **)(this + 0x18) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = param_1;
  if (param_3 != (ViewModelInstanceValue *)0x0) {
    ViewModelInstanceValue::addDependent(param_3,(ViewModelValueDependent *)this);
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  __src = (void *)*param_5;
  __n = param_5[1] - (long)__src;
  *(undefined ***)this = &PTR_addDirt_006769b0;
  if (__n != 0) {
    if ((long)__n < 0) {
      auVar4 = FUN_00375898();
      plVar2 = auVar4._0_8_;
      lVar3 = *param_2;
      *plVar2 = (long)(PTR_vtable_0067d7e0 + 0x10);
      plVar2[1] = auVar4._8_8_;
      if (lVar3 != 0) {
        FUN_00340fb0(1,lVar3 + 0xa4);
      }
      plVar2[2] = lVar3;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      return;
    }
    __dest = operator_new(__n);
    *(void **)(this + 0x20) = __dest;
    *(void **)(this + 0x28) = __dest;
    *(ulong *)(this + 0x30) = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    *(ulong *)(this + 0x28) = (long)__dest + __n;
  }
  return;
}


// ===== 004eb500  rive::CoreObjectListener::CoreObjectListener =====

/* rive::CoreObjectListener::CoreObjectListener(rive::Core*, rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::CoreObjectListener::CoreObjectListener
          (CoreObjectListener *this,undefined8 param_1,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  *(undefined **)this = PTR_vtable_0067d7e0 + 0x10;
  *(undefined8 *)(this + 8) = param_1;
  if (lVar1 != 0) {
    FUN_00340fb0(1,lVar1 + 0xa4);
  }
  *(long *)(this + 0x10) = lVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


// ===== 004eb548  rive::CoreObjectListener::~CoreObjectListener =====

/* rive::CoreObjectListener::~CoreObjectListener() */

void __thiscall rive::CoreObjectListener::~CoreObjectListener(CoreObjectListener *this)

{
  ~CoreObjectListener(this);
  operator_delete(this);
  return;
}


// ===== 004eb56c  FUN_004eb56c =====

void FUN_004eb56c(void)

{
  return;
}


// ===== 004eb570  rive::CoreObjectListener::createProperties =====

/* rive::CoreObjectListener::createProperties() */

void __thiscall rive::CoreObjectListener::createProperties(CoreObjectListener *this)

{
                    /* WARNING: Could not recover jumptable at 0x004eb578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))();
  return;
}


// ===== 004eb57c  rive::CoreObjectListener::deleteProperties =====

/* rive::CoreObjectListener::deleteProperties() */

void __thiscall rive::CoreObjectListener::deleteProperties(CoreObjectListener *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  plVar1 = *(long **)(this + 0x20);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x18))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x18);
  }
  *(long **)(this + 0x20) = plVar2;
  return;
}


// ===== 004eb5dc  rive::CoreObjectListener::~CoreObjectListener =====

/* rive::CoreObjectListener::~CoreObjectListener() */

void __thiscall rive::CoreObjectListener::~CoreObjectListener(CoreObjectListener *this)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  long *plVar4;
  
  puVar3 = PTR_vtable_0067d7e0 + 0x10;
  *(undefined **)this = puVar3;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
    puVar3 = *(undefined **)this;
  }
  (**(code **)(puVar3 + 0x20))(this);
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar4 + 0xa4), iVar1 == 1))
  {
                    /* WARNING: Could not recover jumptable at 0x004eb660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4);
    return;
  }
  return;
}


// ===== 004eb670  rive::CoreObjectListener::remap =====

/* rive::CoreObjectListener::remap(rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::CoreObjectListener::remap(CoreObjectListener *this,CoreObjectListener *param_2)

{
  int iVar1;
  long *plVar2;
  CoreObjectListener *pCVar3;
  long *plVar4;
  
  plVar4 = *(long **)param_2;
  pCVar3 = this + 0x10;
  plVar2 = *(long **)pCVar3;
  if (plVar4 != plVar2) {
    if (pCVar3 != param_2) {
      if (plVar4 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar4 + 0xa4);
        plVar2 = *(long **)pCVar3;
      }
      *(long **)pCVar3 = plVar4;
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1)) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x004eb6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))(this);
    return;
  }
  return;
}


// ===== 004eb70c  rive::ViewModelInstanceArtboardRuntime::value =====

/* rive::ViewModelInstanceArtboardRuntime::value(rive::rcp<rive::BindableArtboard>) */

void __thiscall
rive::ViewModelInstanceArtboardRuntime::value
          (ViewModelInstanceArtboardRuntime *this,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ViewModelInstanceArtboard *pVVar4;
  File *this_00;
  long *plVar5;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pVVar4 = *(ViewModelInstanceArtboard **)(this + 8);
  plVar5 = *(long **)(pVVar4 + 0x120);
  *(undefined8 *)(pVVar4 + 0x120) = 0;
  if ((plVar5 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,(long)plVar5 + 0xa4), iVar2 == 1))
  {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  pvVar3 = (void *)*param_2;
  local_40 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    ViewModelInstanceArtboard::asset(pVVar4,&local_40);
  }
  else {
    FUN_00340fb0(1,pvVar3);
    ViewModelInstanceArtboard::asset(pVVar4,&local_40);
    iVar2 = FUN_00340fe0(0xffffffff,pvVar3);
    if (iVar2 == 1) {
      plVar5 = *(long **)((long)pvVar3 + 0x10);
      *(undefined8 *)((long)pvVar3 + 0x10) = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      this_00 = *(File **)((long)pvVar3 + 8);
      if ((this_00 != (File *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1)) {
        File::~File(this_00);
        operator_delete(this_00);
      }
      operator_delete(pvVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eb824  rive::ViewModelInstanceArtboardRuntime::viewModelInstance =====

/* rive::ViewModelInstanceArtboardRuntime::viewModelInstance(rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::ViewModelInstanceArtboardRuntime::viewModelInstance
          (ViewModelInstanceArtboardRuntime *this,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)*param_2;
  lVar4 = *(long *)(this + 8);
  if (plVar2 != (long *)0x0) {
    FUN_00340fb0(1,(long)plVar2 + 0xa4);
    FUN_00340fb0(1,(long)plVar2 + 0xa4);
  }
  plVar3 = *(long **)(lVar4 + 0x120);
  *(long **)(lVar4 + 0x120) = plVar2;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar3 + 0xa4), iVar1 == 1))
  {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1))
  {
                    /* WARNING: Could not recover jumptable at 0x004eb8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 004eb8cc  rive::ViewModelInstanceAssetImageRuntime::value =====

/* rive::ViewModelInstanceAssetImageRuntime::value(rive::RenderImage*) */

void __thiscall
rive::ViewModelInstanceAssetImageRuntime::value
          (ViewModelInstanceAssetImageRuntime *this,RenderImage *param_1)

{
  ViewModelInstanceAssetImage::value(*(ViewModelInstanceAssetImage **)(this + 8),param_1);
  return;
}


// ===== 004eb8d4  rive::ViewModelInstanceBooleanRuntime::value =====

/* rive::ViewModelInstanceBooleanRuntime::value() const */

undefined1 __thiscall
rive::ViewModelInstanceBooleanRuntime::value(ViewModelInstanceBooleanRuntime *this)

{
  return *(undefined1 *)(*(long *)(this + 8) + 0x110);
}


// ===== 004eb8e0  rive::ViewModelInstanceBooleanRuntime::value =====

/* rive::ViewModelInstanceBooleanRuntime::value(bool) */

void __thiscall
rive::ViewModelInstanceBooleanRuntime::value(ViewModelInstanceBooleanRuntime *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if ((bool)(char)plVar1[0x22] == param_1) {
    return;
  }
  *(bool *)(plVar1 + 0x22) = param_1;
                    /* WARNING: Could not recover jumptable at 0x004eb904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa8))();
  return;
}


// ===== 004eb908  rive::ViewModelInstanceColorRuntime::value =====

/* rive::ViewModelInstanceColorRuntime::value() const */

undefined4 __thiscall
rive::ViewModelInstanceColorRuntime::value(ViewModelInstanceColorRuntime *this)

{
  return *(undefined4 *)(*(long *)(this + 8) + 0x110);
}


// ===== 004eb914  rive::ViewModelInstanceColorRuntime::value =====

/* rive::ViewModelInstanceColorRuntime::value(int) */

void __thiscall
rive::ViewModelInstanceColorRuntime::value(ViewModelInstanceColorRuntime *this,int param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if ((int)plVar1[0x22] == param_1) {
    return;
  }
  *(int *)(plVar1 + 0x22) = param_1;
                    /* WARNING: Could not recover jumptable at 0x004eb934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa8))();
  return;
}


// ===== 004eb938  rive::ViewModelInstanceColorRuntime::rgb =====

/* rive::ViewModelInstanceColorRuntime::rgb(int, int, int) */

void __thiscall
rive::ViewModelInstanceColorRuntime::rgb
          (ViewModelInstanceColorRuntime *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  uVar1 = param_2 << 8 | param_1 << 0x10 | param_3 | *(uint *)(plVar2 + 0x22) & 0xff000000;
  if (*(uint *)(plVar2 + 0x22) == uVar1) {
    return;
  }
  *(uint *)(plVar2 + 0x22) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x004eb96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa8))();
  return;
}


// ===== 004eb970  rive::ViewModelInstanceColorRuntime::argb =====

/* rive::ViewModelInstanceColorRuntime::argb(int, int, int, int) */

void __thiscall
rive::ViewModelInstanceColorRuntime::argb
          (ViewModelInstanceColorRuntime *this,int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  uVar1 = param_2 << 0x10 | param_1 << 0x18 | param_3 << 8 | param_4;
  if (*(uint *)(plVar2 + 0x22) == uVar1) {
    return;
  }
  *(uint *)(plVar2 + 0x22) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x004eb9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa8))();
  return;
}


// ===== 004eb9a4  rive::ViewModelInstanceColorRuntime::alpha =====

/* rive::ViewModelInstanceColorRuntime::alpha(int) */

void __thiscall
rive::ViewModelInstanceColorRuntime::alpha(ViewModelInstanceColorRuntime *this,int param_1)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  uVar1 = *(uint *)(plVar2 + 0x22) & 0xffffff | param_1 << 0x18;
  if (*(uint *)(plVar2 + 0x22) == uVar1) {
    return;
  }
  *(uint *)(plVar2 + 0x22) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x004eb9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa8))();
  return;
}


// ===== 004eb9d0  rive::ViewModelInstanceEnumRuntime::dataValues =====

/* rive::ViewModelInstanceEnumRuntime::dataValues() const */

void rive::ViewModelInstanceEnumRuntime::dataValues(void)

{
  void *__src;
  ulong __n;
  long in_x0;
  long lVar1;
  void *__dest;
  undefined8 *in_x8;
  
  lVar1 = (**(code **)(**(long **)(*(long *)(in_x0 + 8) + 0xa8) + 0x68))();
  __src = *(void **)(lVar1 + 0x10);
  lVar1 = *(long *)(lVar1 + 0x18);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  __n = lVar1 - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003ab68c();
    }
    __dest = operator_new(__n);
    *in_x8 = __dest;
    in_x8[2] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    in_x8[1] = (long)__dest + __n;
  }
  return;
}


// ===== 004eba48  rive::ViewModelInstanceEnumRuntime::value =====

/* rive::ViewModelInstanceEnumRuntime::value() const */

void rive::ViewModelInstanceEnumRuntime::value(void)

{
  void *__src;
  long in_x0;
  long lVar1;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = (**(code **)(**(long **)(*(long *)(in_x0 + 8) + 0xa8) + 0x68))();
  __src = *(void **)(lVar1 + 0x10);
  uVar2 = *(long *)(lVar1 + 0x18) - (long)__src;
  if (uVar2 == 0) {
    __dest = (void *)0x0;
    lVar1 = 0;
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003ab68c();
    }
    __dest = operator_new(uVar2);
    lVar1 = (long)__dest + uVar2;
    memcpy(__dest,__src,uVar2);
  }
  uVar2 = (ulong)*(uint *)(*(long *)(in_x0 + 8) + 0x110);
  if (uVar2 < (ulong)(lVar1 - (long)__dest >> 3)) {
    lVar1 = *(long *)((long)__dest + uVar2 * 8);
    if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(in_x8 + 8) = uVar4;
      *(undefined8 *)in_x8 = uVar3;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(in_x8,*(char **)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x18));
    }
  }
  else {
    *(undefined2 *)in_x8 = 0;
    if (__dest == (void *)0x0) {
      return;
    }
  }
  operator_delete(__dest);
  return;
}


