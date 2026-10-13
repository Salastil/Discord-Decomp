// ===== 004ab9d8  FUN_004ab9d8 =====

void FUN_004ab9d8(void)

{
  return;
}


// ===== 004ab9dc  FUN_004ab9dc =====

void FUN_004ab9dc(void)

{
  return;
}


// ===== 004ab9e0  rive::Fill::pathFlags =====

/* rive::Fill::pathFlags() const */

undefined4 __thiscall rive::Fill::pathFlags(Fill *this)

{
  undefined4 uVar1;
  
  uVar1 = 0x40;
  if (*(int *)(this + 0xe0) != 2) {
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 004ab9f8  rive::Fill::initRenderPaint =====

/* rive::Fill::initRenderPaint(rive::ShapePaintMutator*) */

long * __thiscall rive::Fill::initRenderPaint(Fill *this,ShapePaintMutator *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  *(ShapePaintMutator **)(this + 0xd0) = param_1;
  (**(code **)(**(long **)(*(long *)(lVar3 + 0x40) + 0xbd8) + 0x38))(&local_40);
  plVar4 = local_40;
  plVar5 = *(long **)(this + 200);
  local_40 = (long *)0x0;
  *(long **)(this + 200) = plVar4;
  if (plVar5 != (long *)0x0) {
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 1);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    plVar4 = local_40;
    if ((local_40 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_40 + 1), iVar2 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 200);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    (**(code **)(*plVar4 + 0x10))(plVar4,1);
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004abae4  rive::Fill::applyTo =====

/* rive::Fill::applyTo(rive::RenderPaint*, float) */

void __thiscall rive::Fill::applyTo(Fill *this,RenderPaint *param_1,float param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,1);
  local_50 = (long *)0x0;
  (**(code **)(*(long *)param_1 + 0x48))(param_1,&local_50);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_50 + 1), iVar3 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  (**(code **)(**(long **)(this + 0xd0) + 0x18))(param_2,*(long **)(this + 0xd0),param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004abbb0  rive::Fill::pickPath =====

/* rive::Fill::pickPath(rive::ShapePaintContainer*) const */

void __thiscall rive::Fill::pickPath(Fill *this,ShapePaintContainer *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  if (*(int *)(this + 0xe0) != 2) {
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x004abbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + lVar1))(param_1);
  return;
}


// ===== 004abbd4  rive::Fill::buildDependencies =====

/* rive::Fill::buildDependencies() */

void __thiscall rive::Fill::buildDependencies(Fill *this)

{
  ushort uVar1;
  Component *this_00;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(this + 0xb8) == *(long *)(this + 0xb0)) {
    return;
  }
  plVar3 = *(long **)(this + 0x30);
  uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
  if (uVar1 < 0x201) {
    lVar2 = 400;
    if (0x88 < uVar1) {
      if (uVar1 == 0x89) {
        lVar2 = 0x138;
      }
      else if (uVar1 != 0x199) {
        return;
      }
      goto LAB_004abc7c;
    }
    if (uVar1 == 1) goto LAB_004abc7c;
    if (uVar1 != 3) {
      return;
    }
  }
  else if (uVar1 < 0x23c) {
    if ((uVar1 != 0x201) && (uVar1 != 0x23b)) {
      return;
    }
  }
  else if (((uVar1 != 0x23c) && (uVar1 != 0x23e)) && (uVar1 != 0x23f)) {
    return;
  }
  lVar2 = 0x178;
LAB_004abc7c:
  this_00 = (Component *)(**(code **)(*(long *)((long)plVar3 + lVar2) + 8))((long)plVar3 + lVar2);
  Component::addDependent(this_00,(Component *)this);
  return;
}


// ===== 004abcb0  FUN_004abcb0 =====

void FUN_004abcb0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[0x19];
  puVar1 = PTR_vtable_0067d740 + 0x120;
  *param_1 = (long)(PTR_vtable_0067d740 + 0x10);
  param_1[0x15] = (long)puVar1;
  if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar2 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pvVar3 = (void *)param_1[0x16];
  param_1[0x15] = (long)(PTR_vtable_0067d738 + 0x10);
  if (pvVar3 != (void *)0x0) {
    param_1[0x17] = (long)pvVar3;
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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004abda4  FUN_004abda4 =====

void FUN_004abda4(void *param_1)

{
  FUN_004abcb0();
  operator_delete(param_1);
  return;
}


// ===== 004abdc8  FUN_004abdc8 =====

undefined8 FUN_004abdc8(void)

{
  return 0x14;
}


// ===== 004abdd0  FUN_004abdd0 =====

uint FUN_004abdd0(undefined8 param_1,uint param_2)

{
  return (uint)((param_2 & 0xffff) < 0x16) & 0x300c00U >> (ulong)(param_2 & 0x1f);
}


// ===== 004abdf0  FUN_004abdf0 =====

undefined8 FUN_004abdf0(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (param_2 != 0x28) {
    uVar3 = FUN_004abe74();
    return uVar3;
  }
  uVar7 = 0;
  uVar4 = 0;
  pbVar5 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar5) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_004abe60;
    }
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar5;
    uVar2 = uVar7 & 0x3f;
    uVar7 = (ulong)(((uint)uVar7 & 0xff) + 7);
    uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
    pbVar5 = pbVar6;
  } while ((char)bVar1 < '\0');
  param_3[2] = (long)pbVar6;
  if (uVar4 >> 0x20 != 0) {
    *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004abe60:
    uVar4 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0xe0) = (int)uVar4;
  return 1;
}


// ===== 004abe74  FUN_004abe74 =====

undefined8 FUN_004abe74(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x29) {
    if (param_2 == 4) {
      pcVar7 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar7) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004ac014;
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
LAB_004ac014:
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
      if (param_2 != 5) goto LAB_004ac074;
      uVar12 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004abff8;
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
LAB_004abff8:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else if (param_2 == 0x2eb) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar9 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004ac04c;
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
LAB_004ac04c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xa4) = (int)uVar6;
  }
  else {
    if (param_2 != 0x29) goto LAB_004ac074;
    pcVar7 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar7 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0xa0) = 0;
    }
    else {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0xa0) = *pcVar7 == '\x01';
    }
  }
  uVar5 = 1;
LAB_004ac074:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ac09c  FUN_004ac09c =====

undefined1 FUN_004ac09c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}


// ===== 004ac0a4  FUN_004ac0a4 =====

void FUN_004ac0a4(void)

{
  return;
}


// ===== 004ac0a8  FUN_004ac0a8 =====

void FUN_004ac0a8(void)

{
  return;
}


// ===== 004ac0ac  FUN_004ac0ac =====

undefined8 FUN_004ac0ac(void)

{
  return 1;
}


// ===== 004ac0b4  FUN_004ac0b4 =====

void FUN_004ac0b4(void)

{
  return;
}


// ===== 004ac0b8  rive::FillBase::clone =====

/* rive::FillBase::clone() const */

long * __thiscall rive::FillBase::clone(FillBase *this)

{
  undefined4 uVar1;
  FillBase FVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = (long *)operator_new(0xe8);
  plVar4[0x1c] = 0;
  plVar4[1] = 0;
  *plVar4 = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0x13] = 0;
  plVar4[0x12] = 0;
  plVar4[0x15] = 0;
  plVar4[0x14] = 0;
  plVar4[0x17] = 0;
  plVar4[0x16] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[3] = 0;
  *(undefined8 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  plVar4[6] = 0;
  *(undefined2 *)(plVar4 + 0xc) = 0xfffe;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xd] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  puVar3 = PTR_vtable_0067d3c8;
  plVar4[0x17] = 0;
  plVar4[0x16] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  uVar1 = *(undefined4 *)(this + 0xe0);
  plVar4[0x15] = (long)(puVar3 + 0x128);
  FVar2 = this[0xa0];
  *(undefined4 *)(plVar4 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xa4);
  *(FillBase *)(plVar4 + 0x14) = FVar2;
  *(undefined4 *)((long)plVar4 + 0xa4) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar4 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(this + 0x28);
  return plVar4;
}


// ===== 004ac17c  FUN_004ac17c =====

void FUN_004ac17c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4ac180);
  (*pcVar1)();
}


// ===== 004ac180  rive::GradientStop::onAddedDirty =====

/* rive::GradientStop::onAddedDirty(rive::CoreContext*) */

bool __thiscall rive::GradientStop::onAddedDirty(GradientStop *this,CoreContext *param_1)

{
  bool bVar1;
  GradientStop *pGVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  pGVar2 = (GradientStop *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pGVar2 = (GradientStop *)(param_1 + -0x998);
  }
  *(GradientStop **)(this + 0x40) = pGVar2;
  *(GradientStop **)(this + 0x80) = pGVar2;
  if (pGVar2 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar5 + 0x90))(plVar3,this);
  }
  uVar4 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0x16);
  bVar1 = (uVar4 & 1) == 0;
  if (!bVar1) {
    LinearGradient::addStop(*(LinearGradient **)(this + 0x30),this);
  }
  return bVar1;
}


// ===== 004ac214  rive::GradientStop::colorValueChanged =====

/* rive::GradientStop::colorValueChanged() */

void __thiscall rive::GradientStop::colorValueChanged(GradientStop *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if ((*(ushort *)(plVar3 + 0xc) >> 9 & 1) == 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x200;
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


// ===== 004ac27c  rive::GradientStop::positionChanged =====

/* rive::GradientStop::positionChanged() */

void __thiscall rive::GradientStop::positionChanged(GradientStop *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  if (((*(ushort *)(plVar3 + 0xc) ^ 0xffff) & 0x600) != 0) {
    *(ushort *)(plVar3 + 0xc) = *(ushort *)(plVar3 + 0xc) | 0x600;
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


// ===== 004ac2ec  FUN_004ac2ec =====

void FUN_004ac2ec(long *param_1)

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


// ===== 004ac358  FUN_004ac358 =====

undefined8 FUN_004ac358(void)

{
  return 0x13;
}


// ===== 004ac360  FUN_004ac360 =====

bool FUN_004ac360(undefined8 param_1,short param_2)

{
  return param_2 == 0x13 || param_2 == 10;
}


// ===== 004ac374  FUN_004ac374 =====

undefined8 FUN_004ac374(long param_1,ushort param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x26) {
    if (param_2 == 4) {
      pcVar12 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar12) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004ac4e0;
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
LAB_004ac4e0:
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
      if (param_2 != 5) goto LAB_004ac540;
      uVar14 = 0;
      uVar6 = 0;
      pbVar9 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar9) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004ac4c4;
        }
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
        pbVar9 = pbVar10;
      } while ((char)bVar1 < '\0');
      param_3[2] = (long)pbVar10;
      if (uVar6 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004ac4c4:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
    uVar5 = 1;
  }
  else if (param_2 == 0x27) {
    puVar11 = (undefined4 *)param_3[2];
    puVar7 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar7 - (long)puVar11 < 4) {
      uVar15 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar7 = puVar11 + 1;
      uVar15 = *puVar11;
    }
    param_3[2] = (long)puVar7;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x8c) = uVar15;
  }
  else if (param_2 == 0x26) {
    puVar11 = (undefined4 *)param_3[2];
    puVar7 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar7 - (long)puVar11 < 4) {
      uVar15 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar7 = puVar11 + 1;
      uVar15 = *puVar11;
    }
    param_3[2] = (long)puVar7;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x88) = uVar15;
  }
LAB_004ac540:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ac568  rive::GradientStopBase::clone =====

/* rive::GradientStopBase::clone() const */

long * __thiscall rive::GradientStopBase::clone(GradientStopBase *this)

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
  puVar1 = PTR_vtable_0067d3b0;
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


// ===== 004ac5fc  FUN_004ac5fc =====

void FUN_004ac5fc(long *param_1)

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


// ===== 004ac668  FUN_004ac668 =====

void FUN_004ac668(void)

{
  return;
}


// ===== 004ac66c  FUN_004ac66c =====

void FUN_004ac66c(void)

{
  return;
}


// ===== 004ac670  rive::GroupEffect::updateEffect =====

/* rive::GroupEffect::updateEffect(rive::PathProvider*, rive::ShapePaintPath const*,
   rive::ShapePaint const*) */

void __thiscall
rive::GroupEffect::updateEffect
          (GroupEffect *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ShapePaintPath *pSVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0xb0);
  puVar2 = *(undefined8 **)(this + 0xa8);
  while (puVar2 != puVar1) {
    (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,param_1,param_2,param_3);
    puVar4 = puVar2 + 1;
    pSVar3 = (ShapePaintPath *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,param_1);
    puVar2 = puVar4;
    if (pSVar3 != (ShapePaintPath *)0x0) {
      param_2 = pSVar3;
    }
  }
  return;
}


// ===== 004ac6f0  rive::GroupEffect::updateEffect =====

/* non-virtual thunk to rive::GroupEffect::updateEffect(rive::PathProvider*, rive::ShapePaintPath
   const*, rive::ShapePaint const*) */

void __thiscall
rive::GroupEffect::updateEffect
          (GroupEffect *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ShapePaintPath *pSVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + -0x10);
  puVar2 = *(undefined8 **)(this + -0x18);
  while (puVar2 != puVar1) {
    (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,param_1,param_2,param_3);
    puVar4 = puVar2 + 1;
    pSVar3 = (ShapePaintPath *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,param_1);
    puVar2 = puVar4;
    if (pSVar3 != (ShapePaintPath *)0x0) {
      param_2 = pSVar3;
    }
  }
  return;
}


// ===== 004ac770  rive::GroupEffect::invalidateEffects =====

/* rive::GroupEffect::invalidateEffects(rive::StrokeEffect*) */

void __thiscall rive::GroupEffect::invalidateEffects(GroupEffect *this,StrokeEffect *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  plVar1 = *(long **)(this + 0xf8);
  for (plVar4 = *(long **)(this + 0xf0); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    (**(code **)(*(long *)(*plVar4 + 0x90) + 0x38))();
  }
  puVar2 = *(undefined8 **)(this + 0xb0);
  if (*(undefined8 **)(this + 0xa8) != puVar2) {
    bVar3 = param_1 == (StrokeEffect *)0x0;
    puVar6 = *(undefined8 **)(this + 0xa8);
    do {
      if (bVar3) {
        (**(code **)(*(long *)*puVar6 + 0x18))((long *)*puVar6,0);
      }
      puVar5 = puVar6 + 1;
      bVar3 = (bool)((param_1 != (StrokeEffect *)0x0 && (StrokeEffect *)*puVar6 == param_1) | bVar3)
      ;
      puVar6 = puVar5;
    } while (puVar5 != puVar2);
  }
  return;
}


// ===== 004ac80c  rive::GroupEffect::invalidateEffects =====

/* non-virtual thunk to rive::GroupEffect::invalidateEffects(rive::StrokeEffect*) */

void __thiscall rive::GroupEffect::invalidateEffects(GroupEffect *this,StrokeEffect *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  plVar1 = *(long **)(this + 0x58);
  for (plVar4 = *(long **)(this + 0x50); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    (**(code **)(*(long *)(*plVar4 + 0x90) + 0x38))();
  }
  puVar2 = *(undefined8 **)(this + 0x10);
  if (*(undefined8 **)(this + 8) != puVar2) {
    bVar3 = param_1 == (StrokeEffect *)0x0;
    puVar6 = *(undefined8 **)(this + 8);
    do {
      if (bVar3) {
        (**(code **)(*(long *)*puVar6 + 0x18))((long *)*puVar6,0);
      }
      puVar5 = puVar6 + 1;
      bVar3 = (bool)((param_1 != (StrokeEffect *)0x0 && (StrokeEffect *)*puVar6 == param_1) | bVar3)
      ;
      puVar6 = puVar5;
    } while (puVar5 != puVar2);
  }
  return;
}


// ===== 004ac8a8  rive::GroupEffect::invalidateEffects =====

/* rive::GroupEffect::invalidateEffects() */

void __thiscall rive::GroupEffect::invalidateEffects(GroupEffect *this)

{
                    /* WARNING: Could not recover jumptable at 0x004ac8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x98))(this,0);
  return;
}


// ===== 004ac8b8  rive::GroupEffect::invalidateEffects =====

/* non-virtual thunk to rive::GroupEffect::invalidateEffects() */

void __thiscall rive::GroupEffect::invalidateEffects(GroupEffect *this)

{
                    /* WARNING: Could not recover jumptable at 0x004ac8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0xa0) + 0x98))(this + -0xa0,0);
  return;
}


// ===== 004ac8c8  rive::GroupEffect::addTargetEffect =====

/* rive::GroupEffect::addTargetEffect(rive::TargetEffect*) */

void __thiscall rive::GroupEffect::addTargetEffect(GroupEffect *this,TargetEffect *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xf8);
  if (puVar10 < *(undefined8 **)(this + 0x100)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004aca08;
  }
  puVar9 = *(undefined8 **)(this + 0xf0);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004aca2c();
LAB_004aca28:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x100) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004aca28;
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
      if (uVar6 == uVar7) goto LAB_004ac9f4;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xf0);
  }
LAB_004ac9f4:
  *(undefined8 **)(this + 0xf0) = puVar4;
  *(undefined8 **)(this + 0xf8) = puVar13;
  *(void **)(this + 0x100) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004aca08:
  *(undefined8 **)(this + 0xf8) = puVar13;
  return;
}


// ===== 004aca2c  FUN_004aca2c =====

void FUN_004aca2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004aca40  rive::GroupEffect::parentPaint =====

/* rive::GroupEffect::parentPaint() */

undefined8 rive::GroupEffect::parentPaint(void)

{
  return 0;
}


// ===== 004aca48  rive::GroupEffect::parentPaint =====

/* non-virtual thunk to rive::GroupEffect::parentPaint() */

undefined8 __thiscall rive::GroupEffect::parentPaint(GroupEffect *this)

{
  return 0;
}


// ===== 004aca50  rive::GroupEffect::addPathProvider =====

/* rive::GroupEffect::addPathProvider(rive::PathProvider*) */

void __thiscall rive::GroupEffect::addPathProvider(GroupEffect *this,PathProvider *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  PathProvider *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  uVar3 = (**(code **)(*(long *)(this + 0xc0) + 0x40))(this + 0xc0);
  lVar4 = FUN_00494e8c(this + 200,param_1,&local_40);
  *(undefined8 *)(lVar4 + 0x18) = uVar3;
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar5 = *(undefined8 **)(this + 0xa8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(long *)*puVar5 + 0x28))((long *)*puVar5,param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004acaf4  rive::GroupEffect::addPathProvider =====

/* non-virtual thunk to rive::GroupEffect::addPathProvider(rive::PathProvider*) */

void __thiscall rive::GroupEffect::addPathProvider(GroupEffect *this,PathProvider *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  PathProvider *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  uVar3 = (**(code **)(*(long *)this + 0x40))();
  lVar4 = FUN_00494e8c(this + 8,param_1,&local_40);
  *(undefined8 *)(lVar4 + 0x18) = uVar3;
  puVar1 = *(undefined8 **)(this + -0x10);
  for (puVar5 = *(undefined8 **)(this + -0x18); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(long *)*puVar5 + 0x28))((long *)*puVar5,param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004acb94  rive::GroupEffect::addStrokeEffect =====

/* rive::GroupEffect::addStrokeEffect(rive::StrokeEffect*) */

void __thiscall rive::GroupEffect::addStrokeEffect(GroupEffect *this,StrokeEffect *param_1)

{
  long *plVar1;
  
  EffectsContainer::addStrokeEffect((EffectsContainer *)(this + 0xa0),param_1);
  for (plVar1 = *(long **)(this + 0xd8); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,plVar1[2]);
  }
  return;
}


// ===== 004acbe0  rive::GroupEffect::addStrokeEffect =====

/* non-virtual thunk to rive::GroupEffect::addStrokeEffect(rive::StrokeEffect*) */

void __thiscall rive::GroupEffect::addStrokeEffect(GroupEffect *this,StrokeEffect *param_1)

{
  long *plVar1;
  
  EffectsContainer::addStrokeEffect((EffectsContainer *)this,param_1);
  for (plVar1 = *(long **)(this + 0x38); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,plVar1[2]);
  }
  return;
}


// ===== 004acc28  rive::GroupEffect::invalidateEffect =====

/* rive::GroupEffect::invalidateEffect(rive::PathProvider*) */

void __thiscall rive::GroupEffect::invalidateEffect(GroupEffect *this,PathProvider *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  StrokeEffect::invalidateEffect((StrokeEffect *)(this + 0xc0),param_1);
  puVar1 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_1);
  }
  return;
}


// ===== 004acc80  rive::GroupEffect::invalidateEffect =====

/* non-virtual thunk to rive::GroupEffect::invalidateEffect(rive::PathProvider*) */

void __thiscall rive::GroupEffect::invalidateEffect(GroupEffect *this,PathProvider *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  StrokeEffect::invalidateEffect((StrokeEffect *)this,param_1);
  puVar1 = *(undefined8 **)(this + -0x10);
  for (puVar2 = *(undefined8 **)(this + -0x18); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_1);
  }
  return;
}


// ===== 004accd4  rive::GroupEffect::buildDependencies =====

/* rive::GroupEffect::buildDependencies() */

void __thiscall rive::GroupEffect::buildDependencies(GroupEffect *this)

{
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
    return;
  }
  return;
}


// ===== 004acce8  FUN_004acce8 =====

void FUN_004acce8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  
  pvVar4 = (void *)param_1[0x1e];
  puVar1 = PTR_vtable_0067d378 + 0xf0;
  puVar2 = PTR_vtable_0067d378 + 0x118;
  *param_1 = (long)(PTR_vtable_0067d378 + 0x10);
  param_1[0x14] = (long)puVar1;
  param_1[0x18] = (long)puVar2;
  if (pvVar4 != (void *)0x0) {
    param_1[0x1f] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  plVar5 = (long *)param_1[0x1b];
  param_1[0x18] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar5 != (long *)0x0) {
    do {
      if ((long *)plVar5[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[3] + 8))();
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    puVar3 = (undefined8 *)param_1[0x1b];
    while (puVar3 != (undefined8 *)0x0) {
      pvVar4 = (void *)*puVar3;
      operator_delete(puVar3);
      puVar3 = (undefined8 *)pvVar4;
    }
  }
  pvVar4 = (void *)param_1[0x19];
  param_1[0x19] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x15];
  param_1[0x14] = (long)(PTR_vtable_0067d738 + 0x10);
  if (pvVar4 != (void *)0x0) {
    param_1[0x16] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x11];
  *param_1 = (long)(PTR_vtable_0067ced8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    param_1[0x12] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    param_1[0xe] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[9];
  if (pvVar4 != (void *)0x0) {
    param_1[10] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  *param_1 = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004ace2c  FUN_004ace2c =====

void FUN_004ace2c(void *param_1)

{
  FUN_004acce8();
  operator_delete(param_1);
  return;
}


// ===== 004ace50  FUN_004ace50 =====

undefined8 FUN_004ace50(void)

{
  return 0x285;
}


// ===== 004ace58  FUN_004ace58 =====

bool FUN_004ace58(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x285;
}


// ===== 004ace78  FUN_004ace78 =====

void FUN_004ace78(long param_1)

{
  FUN_004acce8(param_1 + -0xc0);
  return;
}


// ===== 004ace80  FUN_004ace80 =====

void FUN_004ace80(long param_1)

{
  FUN_004acce8((void *)(param_1 + -0xc0));
  operator_delete((void *)(param_1 + -0xc0));
  return;
}


// ===== 004acea8  FUN_004acea8 =====

void FUN_004acea8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = &PTR_FUN_0066fb28;
  return;
}


// ===== 004acecc  FUN_004acecc =====

void FUN_004acecc(void)

{
  return;
}


// ===== 004aced0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004aced4  FUN_004aced4 =====

void FUN_004aced4(void)

{
  return;
}


// ===== 004aced8  FUN_004aced8 =====

undefined8 FUN_004aced8(void)

{
  return 0;
}


// ===== 004acee0  rive::GroupEffectBase::clone =====

/* rive::GroupEffectBase::clone() const */

long * __thiscall rive::GroupEffectBase::clone(GroupEffectBase *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x108);
  plVar2[1] = 0;
  *plVar2 = 0;
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
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1c] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0xd] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  plVar2[0x16] = 0;
  plVar2[0x17] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  puVar1 = PTR_vtable_0067d378;
  *(undefined4 *)(plVar2 + 0x1d) = 0x3f800000;
  plVar2[0x1a] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x20] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x14] = (long)(puVar1 + 0xf0);
  plVar2[0x15] = 0;
  plVar2[0x18] = (long)(puVar1 + 0x118);
  plVar2[0x1e] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004acfa4  FUN_004acfa4 =====

void FUN_004acfa4(long *param_1)

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


// ===== 004ad030  rive::LinearGradient::onAddedDirty =====

/* rive::LinearGradient::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::LinearGradient::onAddedDirty(LinearGradient *this,CoreContext *param_1)

{
  LinearGradient *pLVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pLVar1 = (LinearGradient *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pLVar1 = (LinearGradient *)(param_1 + -0x998);
  }
  *(LinearGradient **)(this + 0x40) = pLVar1;
  *(LinearGradient **)(this + 0x80) = pLVar1;
  if (pLVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar6 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar6 + 0x90))(plVar2,this);
  }
  plVar2 = *(long **)(this + 0x30);
  *(LinearGradient **)(this + 0xd0) = this;
  this[0xc0] = (LinearGradient)0x3;
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x15);
  if ((uVar3 & 1) == 0) {
    uVar4 = 1;
  }
  else if (plVar2[0x19] == 0) {
    uVar5 = (**(code **)(*plVar2 + 0xd0))(plVar2,this + 0xb8);
    uVar4 = 0;
    *(undefined8 *)(this + 200) = uVar5;
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


// ===== 004ad0f4  rive::LinearGradient::buildDependencies =====

/* rive::LinearGradient::buildDependencies() */

void __thiscall rive::LinearGradient::buildDependencies(LinearGradient *this)

{
  short sVar1;
  ulong uVar2;
  long *plVar3;
  Component *this_00;
  Component *pCVar4;
  
  if ((*(long *)(this + 0x30) != 0) &&
     (pCVar4 = *(Component **)(*(long *)(this + 0x30) + 0x30), pCVar4 != (Component *)0x0)) {
    *(undefined8 *)(this + 0xf0) = 0;
    this_00 = pCVar4;
    do {
      uVar2 = (**(code **)(*(long *)this_00 + 0x18))(this_00,2);
      if ((uVar2 & 1) != 0) {
        *(Component **)(this + 0xf0) = this_00;
        goto LAB_004ad154;
      }
      this_00 = *(Component **)(this_00 + 0x30);
    } while (this_00 != (Component *)0x0);
    this_00 = pCVar4;
    if (*(Component **)(this + 0xf0) != (Component *)0x0) {
      this_00 = *(Component **)(this + 0xf0);
    }
LAB_004ad154:
    Component::addDependent(this_00,(Component *)this);
  }
  plVar3 = *(long **)(this + 0xf0);
  if (((plVar3 != (long *)0x0) &&
      (uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,3), (uVar2 & 1) != 0)) &&
     (*(undefined8 **)(*(long *)(this + 0xf0) + 0x370) != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)**(undefined8 **)(*(long *)(this + 0xf0) + 0x370))();
    sVar1 = (**(code **)(*plVar3 + 0x10))();
    plVar3 = plVar3 + 0x36;
    if (sVar1 != 0x1fc) {
      plVar3 = (long *)0x0;
    }
    *(long **)(this + 0xf8) = plVar3;
  }
  return;
}


// ===== 004ad1c8  rive::LinearGradient::updateDeformer =====

/* rive::LinearGradient::updateDeformer() */

void __thiscall rive::LinearGradient::updateDeformer(LinearGradient *this)

{
  short sVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = *(long **)(this + 0xf0);
  if (((plVar2 != (long *)0x0) &&
      (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,3), (uVar3 & 1) != 0)) &&
     (*(undefined8 **)(*(long *)(this + 0xf0) + 0x370) != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)**(undefined8 **)(*(long *)(this + 0xf0) + 0x370))();
    sVar1 = (**(code **)(*plVar2 + 0x10))();
    plVar2 = plVar2 + 0x36;
    if (sVar1 != 0x1fc) {
      plVar2 = (long *)0x0;
    }
    *(long **)(this + 0xf8) = plVar2;
  }
  return;
}


// ===== 004ad23c  rive::LinearGradient::addStop =====

/* rive::LinearGradient::addStop(rive::GradientStop*) */

void __thiscall rive::LinearGradient::addStop(LinearGradient *this,GradientStop *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0xe0);
  if (puVar10 < *(undefined8 **)(this + 0xe8)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004ad37c;
  }
  puVar9 = *(undefined8 **)(this + 0xd8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004ad3a0();
LAB_004ad39c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0xe8) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004ad39c;
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
      if (uVar6 == uVar7) goto LAB_004ad368;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0xd8);
  }
LAB_004ad368:
  *(undefined8 **)(this + 0xd8) = puVar4;
  *(undefined8 **)(this + 0xe0) = puVar13;
  *(void **)(this + 0xe8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004ad37c:
  *(undefined8 **)(this + 0xe0) = puVar13;
  return;
}


// ===== 004ad3a0  FUN_004ad3a0 =====

void FUN_004ad3a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004ad3b4  rive::LinearGradient::update =====

/* rive::LinearGradient::update(rive::ComponentDirt) */

void __thiscall rive::LinearGradient::update(LinearGradient *this,uint param_2)

{
  long lVar1;
  long lVar2;
  LinearGradient LVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  LinearGradient LVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  code *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((param_2 >> 10 & 1) != 0) {
    lVar1 = *(long *)(this + 0xd8);
    lVar2 = *(long *)(this + 0xe0);
    local_40 = FUN_004ad4fc;
    lVar8 = 0;
    if (lVar2 != lVar1) {
      lVar8 = LZCOUNT(lVar2 - lVar1 >> 3) * -2 + 0x7e;
    }
    FUN_004ad510(lVar1,lVar2,&local_40,lVar8,1);
  }
  if (((param_2 & 0x2340) != 0) ||
     ((uVar6 = (**(code **)(**(long **)(this + 0x30) + 0xd8))(), ((param_2 & 0xffff) >> 7 & 1) != 0
      && ((uVar6 >> 2 & 1) != 0)))) {
    (**(code **)(*(long *)this + 0xc0))(0x3f800000,this,*(undefined8 *)(this + 200));
    this[0xc0] = (LinearGradient)0x0;
    if (*(long *)(this + 0xe0) - *(long *)(this + 0xd8) != 0) {
      uVar9 = *(long *)(this + 0xe0) - *(long *)(this + 0xd8) >> 3;
      lVar8 = *(long *)(this + 0x100);
      LVar7 = (LinearGradient)0x0;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      do {
        fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + 3));
        fVar10 = fVar10 / 255.0;
        LVar3 = (LinearGradient)((byte)LVar7 | (fVar10 != 0.0 && fVar10 < 0.0 == NAN(fVar10)));
        LVar7 = (LinearGradient)((byte)LVar3 | 2);
        if (1.0 <= fVar10) {
          LVar7 = LVar3;
        }
        bVar5 = true;
        if ((fVar10 == 0.0 || fVar10 < 0.0 != NAN(fVar10)) && (bVar5 = false, !NAN(fVar10))) {
          bVar5 = fVar10 < 1.0;
        }
        if (bVar5) {
          this[0xc0] = LVar7;
        }
        uVar9 = uVar9 - 1;
        lVar8 = lVar8 + 4;
      } while (uVar9 != 0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ad4fc  FUN_004ad4fc =====

bool FUN_004ad4fc(long param_1,long param_2)

{
  return *(float *)(param_1 + 0x8c) < *(float *)(param_2 + 0x8c);
}


// ===== 004ad510  FUN_004ad510 =====

void FUN_004ad510(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                 long param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  long lVar21;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
  
LAB_004ad544:
  puVar22 = (undefined8 *)(param_2[-1] + 8);
  pauVar8 = param_1;
LAB_004ad554:
  do {
    param_1 = pauVar8;
    uVar18 = (long)param_2 - (long)param_1 >> 3;
    if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
      if (uVar18 < 2) {
        return;
      }
      if (uVar18 == 2) {
        uVar18 = (*(code *)*param_3)(*puVar22,*(undefined8 *)*param_1);
        if ((uVar18 & 1) == 0) {
          return;
        }
        uVar11 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = *puVar22;
LAB_004adc30:
        *puVar22 = uVar11;
        return;
      }
    }
    else {
      if (uVar18 == 3) {
        uVar18 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)*param_1);
        uVar19 = (*(code *)*param_3)(*puVar22,*(undefined8 *)(*param_1 + 8));
        if ((uVar18 & 1) != 0) {
          uVar11 = *(undefined8 *)*param_1;
          if ((uVar19 & 1) != 0) {
            *(undefined8 *)*param_1 = *puVar22;
            *puVar22 = uVar11;
            return;
          }
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = uVar11;
          uVar18 = (*(code *)*param_3)(*puVar22);
          if ((uVar18 & 1) == 0) {
            return;
          }
          uVar11 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = *puVar22;
          goto LAB_004adc30;
        }
        if ((uVar19 & 1) == 0) {
          return;
        }
        uVar11 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *puVar22;
        *puVar22 = uVar11;
        uVar11 = *(undefined8 *)*param_1;
        uVar10 = *(undefined8 *)(*param_1 + 8);
LAB_004adf84:
        uVar18 = (*(code *)*param_3)(uVar10,uVar11);
        if ((uVar18 & 1) == 0) {
          return;
        }
        auVar23 = NEON_ext(*param_1,*param_1,8,1);
        *(long *)(*param_1 + 8) = auVar23._8_8_;
        *(long *)*param_1 = auVar23._0_8_;
        return;
      }
      if (uVar18 == 4) {
        FUN_004ae048(param_1,*param_1 + 8,param_1 + 1,puVar22,param_3);
        return;
      }
      if (uVar18 == 5) {
        FUN_004ae048(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,param_3);
        uVar18 = (*(code *)*param_3)(*puVar22,*(undefined8 *)(param_1[1] + 8));
        if ((uVar18 & 1) == 0) {
          return;
        }
        uVar11 = *(undefined8 *)(param_1[1] + 8);
        *(undefined8 *)(param_1[1] + 8) = *puVar22;
        *puVar22 = uVar11;
        uVar18 = (*(code *)*param_3)(*(undefined8 *)(param_1[1] + 8),*(undefined8 *)param_1[1]);
        if ((uVar18 & 1) == 0) {
          return;
        }
        uVar11 = *(undefined8 *)param_1[1];
        uVar10 = *(undefined8 *)(param_1[1] + 8);
        uVar7 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)param_1[1] = uVar10;
        *(undefined8 *)(param_1[1] + 8) = uVar11;
        uVar18 = (*(code *)*param_3)(uVar10,uVar7);
        if ((uVar18 & 1) == 0) {
          return;
        }
        uVar7 = *(undefined8 *)(*param_1 + 8);
        uVar10 = *(undefined8 *)param_1[1];
        uVar11 = *(undefined8 *)*param_1;
        *(undefined8 *)(*param_1 + 8) = uVar10;
        *(undefined8 *)param_1[1] = uVar7;
        goto LAB_004adf84;
      }
    }
    if ((long)uVar18 < 0x18) {
      pauVar8 = (undefined1 (*) [16])(*param_1 + 8);
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2 || pauVar8 == param_2) {
          return;
        }
        do {
          pauVar13 = pauVar8;
          uVar18 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)*param_1);
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)*pauVar13;
            pauVar8 = pauVar13;
            do {
              pauVar14 = (undefined1 (*) [16])(pauVar8[-1] + 8);
              *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar14;
              uVar18 = (*(code *)*param_3)(uVar11,*(undefined8 *)pauVar8[-1]);
              pauVar8 = pauVar14;
            } while ((uVar18 & 1) != 0);
            *(undefined8 *)*pauVar14 = uVar11;
          }
          pauVar8 = (undefined1 (*) [16])(*pauVar13 + 8);
          param_1 = pauVar13;
        } while ((undefined1 (*) [16])(*pauVar13 + 8) != param_2);
        return;
      }
      if (param_1 == param_2 || pauVar8 == param_2) {
        return;
      }
      lVar21 = 0;
      pauVar13 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar3 = uVar18 - 2 >> 1;
      uVar19 = uVar3;
      goto LAB_004add68;
    }
    uVar19 = uVar18 >> 1;
    if (uVar18 < 0x81) {
      uVar18 = (*(code *)*param_3)(*(undefined8 *)*param_1,*(undefined8 *)(*param_1 + uVar19 * 8));
      uVar3 = (*(code *)*param_3)(*puVar22,*(undefined8 *)*param_1);
      if ((uVar18 & 1) == 0) {
        if ((uVar3 & 1) != 0) {
          uVar11 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *puVar22;
          *puVar22 = uVar11;
          uVar18 = (*(code *)*param_3)(*(undefined8 *)*param_1,
                                       *(undefined8 *)(*param_1 + uVar19 * 8));
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)(*param_1 + uVar19 * 8);
            *(undefined8 *)(*param_1 + uVar19 * 8) = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)(*param_1 + uVar19 * 8);
        if ((uVar3 & 1) == 0) {
          *(undefined8 *)(*param_1 + uVar19 * 8) = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = uVar11;
          uVar18 = (*(code *)*param_3)(*puVar22);
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = *puVar22;
            *puVar22 = uVar11;
          }
        }
        else {
          *(undefined8 *)(*param_1 + uVar19 * 8) = *puVar22;
          *puVar22 = uVar11;
        }
      }
    }
    else {
      lVar21 = uVar19 * 8;
      uVar18 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + lVar21),*(undefined8 *)*param_1);
      uVar3 = (*(code *)*param_3)(*puVar22,*(undefined8 *)(*param_1 + lVar21));
      if ((uVar18 & 1) == 0) {
        if ((uVar3 & 1) != 0) {
          uVar11 = *(undefined8 *)(*param_1 + lVar21);
          *(undefined8 *)(*param_1 + lVar21) = *puVar22;
          *puVar22 = uVar11;
          uVar18 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + lVar21),*(undefined8 *)*param_1);
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + lVar21);
            *(undefined8 *)(*param_1 + lVar21) = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)*param_1;
        if ((uVar3 & 1) == 0) {
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + lVar21);
          *(undefined8 *)(*param_1 + lVar21) = uVar11;
          uVar18 = (*(code *)*param_3)(*puVar22);
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)(*param_1 + lVar21);
            *(undefined8 *)(*param_1 + lVar21) = *puVar22;
            *puVar22 = uVar11;
          }
        }
        else {
          *(undefined8 *)*param_1 = *puVar22;
          *puVar22 = uVar11;
        }
      }
      lVar2 = uVar19 * 8;
      uVar18 = (*(code *)*param_3)(*(undefined8 *)(param_1[-1] + lVar2 + 8),
                                   *(undefined8 *)(*param_1 + 8));
      uVar3 = (*(code *)*param_3)(*(undefined8 *)param_2[-1],
                                  *(undefined8 *)(param_1[-1] + lVar2 + 8));
      if ((uVar18 & 1) == 0) {
        if ((uVar3 & 1) != 0) {
          uVar11 = *(undefined8 *)(param_1[-1] + lVar2 + 8);
          *(undefined8 *)(param_1[-1] + lVar2 + 8) = *(undefined8 *)param_2[-1];
          *(undefined8 *)param_2[-1] = uVar11;
          uVar18 = (*(code *)*param_3)(*(undefined8 *)(param_1[-1] + lVar2 + 8),
                                       *(undefined8 *)(*param_1 + 8));
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_1[-1] + lVar2 + 8);
            *(undefined8 *)(param_1[-1] + lVar2 + 8) = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)(*param_1 + 8);
        if ((uVar3 & 1) == 0) {
          *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_1[-1] + lVar2 + 8);
          *(undefined8 *)(param_1[-1] + lVar2 + 8) = uVar11;
          uVar18 = (*(code *)*param_3)(*(undefined8 *)param_2[-1]);
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)(param_1[-1] + lVar2 + 8);
            *(undefined8 *)(param_1[-1] + lVar2 + 8) = *(undefined8 *)param_2[-1];
            *(undefined8 *)param_2[-1] = uVar11;
          }
        }
        else {
          *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_2[-1];
          *(undefined8 *)param_2[-1] = uVar11;
        }
      }
      lVar12 = uVar19 * 8 + 8;
      uVar18 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + lVar12),*(undefined8 *)param_1[1]);
      uVar3 = (*(code *)*param_3)(*(undefined8 *)(param_2[-2] + 8),
                                  *(undefined8 *)(*param_1 + lVar12));
      if ((uVar18 & 1) == 0) {
        if ((uVar3 & 1) != 0) {
          uVar11 = *(undefined8 *)(*param_1 + lVar12);
          *(undefined8 *)(*param_1 + lVar12) = *(undefined8 *)(param_2[-2] + 8);
          *(undefined8 *)(param_2[-2] + 8) = uVar11;
          uVar18 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + lVar12),*(undefined8 *)param_1[1])
          ;
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)param_1[1];
            *(undefined8 *)param_1[1] = *(undefined8 *)(*param_1 + lVar12);
            *(undefined8 *)(*param_1 + lVar12) = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)param_1[1];
        if ((uVar3 & 1) == 0) {
          *(undefined8 *)param_1[1] = *(undefined8 *)(*param_1 + lVar12);
          *(undefined8 *)(*param_1 + lVar12) = uVar11;
          uVar18 = (*(code *)*param_3)(*(undefined8 *)(param_2[-2] + 8));
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)(*param_1 + lVar12);
            *(undefined8 *)(*param_1 + lVar12) = *(undefined8 *)(param_2[-2] + 8);
            *(undefined8 *)(param_2[-2] + 8) = uVar11;
          }
        }
        else {
          *(undefined8 *)param_1[1] = *(undefined8 *)(param_2[-2] + 8);
          *(undefined8 *)(param_2[-2] + 8) = uVar11;
        }
      }
      uVar18 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + lVar21),
                                   *(undefined8 *)(param_1[-1] + uVar19 * 8 + 8));
      uVar3 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + uVar19 * 8 + 8),
                                  *(undefined8 *)(*param_1 + lVar21));
      if ((uVar18 & 1) == 0) {
        uVar11 = *(undefined8 *)(*param_1 + uVar19 * 8);
        if ((uVar3 & 1) != 0) {
          uVar11 = *(undefined8 *)(*param_1 + lVar12);
          *(undefined8 *)(*param_1 + lVar12) = *(undefined8 *)(*param_1 + uVar19 * 8);
          uVar10 = *(undefined8 *)(param_1[-1] + uVar19 * 8 + 8);
          *(undefined8 *)(*param_1 + lVar21) = uVar11;
          uVar18 = (*(code *)*param_3)(uVar11,uVar10);
          uVar11 = *(undefined8 *)(*param_1 + lVar21);
          if ((uVar18 & 1) != 0) {
            uVar11 = *(undefined8 *)(param_1[-1] + lVar2 + 8);
            *(undefined8 *)(param_1[-1] + lVar2 + 8) = *(undefined8 *)(*param_1 + lVar21);
            *(undefined8 *)(*param_1 + uVar19 * 8) = uVar11;
          }
        }
      }
      else if ((uVar3 & 1) == 0) {
        uVar10 = *(undefined8 *)(*param_1 + lVar21);
        *(undefined8 *)(*param_1 + lVar21) = *(undefined8 *)(param_1[-1] + uVar19 * 8 + 8);
        uVar11 = *(undefined8 *)(*param_1 + uVar19 * 8 + 8);
        *(undefined8 *)(param_1[-1] + uVar19 * 8 + 8) = uVar10;
        uVar18 = (*(code *)*param_3)(uVar11);
        uVar11 = *(undefined8 *)(*param_1 + lVar21);
        if ((uVar18 & 1) != 0) {
          uVar11 = *(undefined8 *)(*param_1 + lVar12);
          *(undefined8 *)(*param_1 + lVar12) = *(undefined8 *)(*param_1 + lVar21);
          *(undefined8 *)(*param_1 + uVar19 * 8) = uVar11;
        }
      }
      else {
        uVar10 = *(undefined8 *)(*param_1 + lVar12);
        uVar11 = *(undefined8 *)(*param_1 + uVar19 * 8);
        *(undefined8 *)(*param_1 + lVar12) = *(undefined8 *)(param_1[-1] + uVar19 * 8 + 8);
        *(undefined8 *)(param_1[-1] + uVar19 * 8 + 8) = uVar10;
      }
      uVar10 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = uVar11;
      *(undefined8 *)(*param_1 + uVar19 * 8) = uVar10;
    }
    uVar11 = *(undefined8 *)*param_1;
    param_4 = param_4 + -1;
    pauVar8 = param_1;
    if ((param_5 & 1) != 0) {
LAB_004ad97c:
      do {
        pauVar13 = pauVar8;
        pauVar8 = (undefined1 (*) [16])(*pauVar13 + 8);
        uVar18 = (*(code *)*param_3)(*(undefined8 *)*pauVar8,uVar11);
      } while ((uVar18 & 1) != 0);
      pauVar14 = param_2;
      if (pauVar13 == param_1) {
        do {
          if (pauVar14 <= pauVar8) break;
          pauVar14 = (undefined1 (*) [16])(pauVar14[-1] + 8);
          uVar18 = (*(code *)*param_3)(*(undefined8 *)*pauVar14,uVar11);
        } while ((uVar18 & 1) == 0);
      }
      else {
        do {
          pauVar14 = (undefined1 (*) [16])(pauVar14[-1] + 8);
          uVar18 = (*(code *)*param_3)(*(undefined8 *)*pauVar14,uVar11);
        } while ((uVar18 & 1) == 0);
      }
      pauVar17 = pauVar8;
      pauVar20 = pauVar14;
      if (pauVar8 < pauVar14) {
        do {
          uVar10 = *(undefined8 *)*pauVar17;
          *(undefined8 *)*pauVar17 = *(undefined8 *)*pauVar20;
          *(undefined8 *)*pauVar20 = uVar10;
          do {
            pauVar13 = pauVar17;
            pauVar17 = (undefined1 (*) [16])(*pauVar13 + 8);
            uVar18 = (*(code *)*param_3)(*(undefined8 *)*pauVar17,uVar11);
          } while ((uVar18 & 1) != 0);
          do {
            pauVar20 = (undefined1 (*) [16])(pauVar20[-1] + 8);
            uVar18 = (*(code *)*param_3)(*(undefined8 *)*pauVar20,uVar11);
          } while ((uVar18 & 1) == 0);
        } while (pauVar17 < pauVar20);
      }
      if (pauVar13 != param_1) {
        *(undefined8 *)*param_1 = *(undefined8 *)*pauVar13;
      }
      *(undefined8 *)*pauVar13 = uVar11;
      if (pauVar14 <= pauVar8) {
        uVar18 = FUN_004ae19c(param_1,pauVar13,param_3);
        uVar19 = FUN_004ae19c((undefined1 (*) [16])(*pauVar13 + 8),param_2,param_3);
        if ((uVar19 & 1) != 0) goto LAB_004adb90;
        pauVar8 = (undefined1 (*) [16])(*pauVar13 + 8);
        if ((uVar18 & 1) != 0) goto LAB_004ad554;
      }
      FUN_004ad510(param_1,pauVar13,param_3,param_4,param_5 & 1);
      param_5 = 0;
      pauVar8 = (undefined1 (*) [16])(*pauVar13 + 8);
      goto LAB_004ad554;
    }
    uVar18 = (*(code *)*param_3)(*(undefined8 *)(param_1[-1] + 8),uVar11);
    uVar11 = *(undefined8 *)*param_1;
    if ((uVar18 & 1) != 0) goto LAB_004ad97c;
    uVar18 = (*(code *)*param_3)(uVar11,*puVar22);
    if ((uVar18 & 1) == 0) {
      do {
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 8);
        if (param_2 <= pauVar8) break;
        uVar18 = (*(code *)*param_3)(uVar11,*(undefined8 *)*pauVar8);
      } while ((uVar18 & 1) == 0);
    }
    else {
      do {
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 8);
        uVar18 = (*(code *)*param_3)(uVar11,*(undefined8 *)*pauVar8);
      } while ((uVar18 & 1) == 0);
    }
    pauVar13 = param_2;
    if (pauVar8 < param_2) {
      do {
        pauVar13 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        uVar18 = (*(code *)*param_3)(uVar11,*(undefined8 *)*pauVar13);
      } while ((uVar18 & 1) != 0);
    }
    while (pauVar8 < pauVar13) {
      uVar10 = *(undefined8 *)*pauVar8;
      *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar13;
      *(undefined8 *)*pauVar13 = uVar10;
      do {
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 8);
        uVar18 = (*(code *)*param_3)(uVar11,*(undefined8 *)*pauVar8);
      } while ((uVar18 & 1) == 0);
      do {
        pauVar13 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        uVar18 = (*(code *)*param_3)(uVar11,*(undefined8 *)*pauVar13);
      } while ((uVar18 & 1) != 0);
    }
    pauVar13 = (undefined1 (*) [16])(pauVar8[-1] + 8);
    if (pauVar13 != param_1) {
      *(undefined8 *)*param_1 = *(undefined8 *)*pauVar13;
    }
    param_5 = 0;
    *(undefined8 *)*pauVar13 = uVar11;
  } while( true );
LAB_004adcf0:
  pauVar14 = pauVar8;
  uVar18 = (*(code *)*param_3)(*(undefined8 *)(*pauVar13 + 8),*(undefined8 *)*pauVar13);
  if ((uVar18 & 1) != 0) {
    uVar11 = *(undefined8 *)*pauVar14;
    lVar2 = lVar21;
    do {
      lVar12 = lVar2;
      puVar22 = (undefined8 *)(*param_1 + lVar12);
      puVar22[1] = *puVar22;
      pauVar8 = param_1;
      if (lVar12 == 0) goto LAB_004adcd8;
      uVar18 = (*(code *)*param_3)(uVar11,puVar22[-1]);
      lVar2 = lVar12 + -8;
    } while ((uVar18 & 1) != 0);
    pauVar8 = (undefined1 (*) [16])(*param_1 + lVar12);
LAB_004adcd8:
    *(undefined8 *)*pauVar8 = uVar11;
  }
  lVar21 = lVar21 + 8;
  pauVar8 = (undefined1 (*) [16])(*pauVar14 + 8);
  pauVar13 = pauVar14;
  if ((undefined1 (*) [16])(*pauVar14 + 8) == param_2) {
    return;
  }
  goto LAB_004adcf0;
LAB_004add68:
  do {
    if ((long)uVar19 <= (long)uVar3) {
      uVar9 = (uVar19 & 0x1fffffffffffffff) << 1 | 1;
      uVar5 = (uVar19 & 0x1fffffffffffffff) * 2 + 2;
      puVar22 = (undefined8 *)(*param_1 + uVar9 * 8);
      uVar6 = uVar9;
      puVar15 = puVar22;
      if ((long)uVar5 < (long)uVar18) {
        uVar4 = (*(code *)*param_3)(*puVar22,puVar22[1]);
        uVar6 = uVar5;
        puVar15 = puVar22 + 1;
        if ((uVar4 & 1) == 0) {
          uVar6 = uVar9;
          puVar15 = puVar22;
        }
      }
      puVar22 = (undefined8 *)(*param_1 + uVar19 * 8);
      uVar5 = (*(code *)*param_3)(*puVar15,*puVar22);
      if ((uVar5 & 1) == 0) {
        uVar11 = *puVar22;
        do {
          puVar16 = puVar15;
          *puVar22 = *puVar16;
          if ((long)uVar3 < (long)uVar6) break;
          uVar9 = uVar6 << 1 | 1;
          uVar5 = uVar6 * 2 + 2;
          puVar22 = (undefined8 *)(*param_1 + uVar9 * 8);
          puVar15 = puVar22;
          uVar6 = uVar9;
          if ((long)uVar5 < (long)uVar18) {
            uVar4 = (*(code *)*param_3)(*puVar22,puVar22[1]);
            puVar15 = puVar22 + 1;
            uVar6 = uVar5;
            if ((uVar4 & 1) == 0) {
              puVar15 = puVar22;
              uVar6 = uVar9;
            }
          }
          uVar5 = (*(code *)*param_3)(*puVar15,uVar11);
          puVar22 = puVar16;
        } while ((uVar5 & 1) == 0);
        *puVar16 = uVar11;
      }
    }
    bVar1 = 0 < (long)uVar19;
    uVar19 = uVar19 - 1;
  } while (bVar1);
  do {
    uVar11 = *(undefined8 *)*param_1;
    uVar19 = 0;
    pauVar8 = param_1;
    do {
      uVar5 = uVar19 << 1 | 1;
      uVar3 = uVar19 * 2 + 2;
      uVar9 = uVar5;
      pauVar13 = (undefined1 (*) [16])(*pauVar8 + uVar19 * 8 + 8);
      if ((long)uVar3 < (long)uVar18) {
        uVar6 = (*(code *)*param_3)(*(undefined8 *)(*pauVar8 + uVar19 * 8 + 8),
                                    *(undefined8 *)*(undefined1 (*) [16])(pauVar8[1] + uVar19 * 8));
        uVar9 = uVar3;
        pauVar13 = (undefined1 (*) [16])(pauVar8[1] + uVar19 * 8);
        if ((uVar6 & 1) == 0) {
          uVar9 = uVar5;
          pauVar13 = (undefined1 (*) [16])(*pauVar8 + uVar19 * 8 + 8);
        }
      }
      *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar13;
      uVar19 = uVar9;
      pauVar8 = pauVar13;
    } while ((long)uVar9 <= (long)(uVar18 - 2 >> 1));
    param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
    if (pauVar13 == param_2) {
      *(undefined8 *)*pauVar13 = uVar11;
    }
    else {
      lVar21 = (long)((long)pauVar13 + (8 - (long)param_1)) >> 3;
      *(undefined8 *)*pauVar13 = *(undefined8 *)*param_2;
      *(undefined8 *)*param_2 = uVar11;
      if (1 < lVar21) {
        uVar3 = lVar21 - 2U >> 1;
        uVar19 = (*(code *)*param_3)(*(undefined8 *)*(undefined1 (*) [16])(*param_1 + uVar3 * 8),
                                     *(undefined8 *)*pauVar13);
        if ((uVar19 & 1) != 0) {
          uVar11 = *(undefined8 *)*pauVar13;
          pauVar8 = (undefined1 (*) [16])(*param_1 + uVar3 * 8);
          do {
            pauVar14 = pauVar8;
            *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar14;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1 >> 1;
            uVar19 = (*(code *)*param_3)(*(undefined8 *)*(undefined1 (*) [16])(*param_1 + uVar3 * 8)
                                         ,uVar11);
            pauVar8 = (undefined1 (*) [16])(*param_1 + uVar3 * 8);
            pauVar13 = pauVar14;
          } while ((uVar19 & 1) != 0);
          *(undefined8 *)*pauVar14 = uVar11;
        }
      }
    }
    bVar1 = (long)uVar18 < 3;
    uVar18 = uVar18 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_004adb90:
  param_2 = pauVar13;
  if ((uVar18 & 1) != 0) {
    return;
  }
  goto LAB_004ad544;
}


// ===== 004ae048  FUN_004ae048 =====

void FUN_004ae048(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_5)(*param_2,*param_1);
  uVar2 = (*(code *)*param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_5)(*param_3);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  uVar1 = (*(code *)*param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar1 = (*(code *)*param_5)(*param_3,*param_2);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return;
}


// ===== 004ae19c  FUN_004ae19c =====

bool FUN_004ae19c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)*param_1);
      if ((uVar5 & 1) == 0) {
        return true;
      }
      uVar8 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar8;
      return true;
    }
LAB_004ae2d0:
    uVar5 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)*param_1);
    uVar3 = (*(code *)*param_3)(*(undefined8 *)param_1[1],*(undefined8 *)(*param_1 + 8));
    if ((uVar5 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)(*param_1 + 8);
        uVar6 = *(undefined8 *)param_1[1];
        uVar4 = *(undefined8 *)*param_1;
        *(undefined8 *)(*param_1 + 8) = uVar6;
        *(undefined8 *)param_1[1] = uVar8;
        uVar5 = (*(code *)*param_3)(uVar6,uVar4);
        if ((uVar5 & 1) != 0) {
          auVar13 = NEON_ext(*param_1,*param_1,8,1);
          *(long *)(*param_1 + 8) = auVar13._8_8_;
          *(long *)*param_1 = auVar13._0_8_;
        }
      }
    }
    else {
      uVar8 = *(undefined8 *)*param_1;
      if ((uVar3 & 1) == 0) {
        uVar6 = *(undefined8 *)param_1[1];
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar8;
        uVar5 = (*(code *)*param_3)(uVar6);
        if ((uVar5 & 1) != 0) {
          auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                             *(undefined1 (*) [16])(*param_1 + 8),8,1);
          *(long *)param_1[1] = auVar13._8_8_;
          *(long *)(*param_1 + 8) = auVar13._0_8_;
        }
      }
      else {
        uVar6 = *(undefined8 *)param_1[1];
        *(undefined8 *)param_1[1] = uVar8;
        *(undefined8 *)*param_1 = uVar6;
      }
    }
    if ((undefined1 (*) [16])(param_1[1] + 8) != param_2) {
      lVar11 = 0;
      iVar12 = 0;
      pauVar7 = param_1 + 1;
      pauVar10 = (undefined1 (*) [16])(param_1[1] + 8);
      do {
        uVar5 = (*(code *)*param_3)(*(undefined8 *)*pauVar10,*(undefined8 *)*pauVar7);
        if ((uVar5 & 1) != 0) {
          uVar8 = *(undefined8 *)*pauVar10;
          lVar2 = lVar11;
          do {
            lVar9 = lVar2;
            *(undefined8 *)(param_1[1] + lVar9 + 8) = *(undefined8 *)(param_1[1] + lVar9);
            pauVar7 = param_1;
            if (lVar9 == -0x10) goto LAB_004ae3f8;
            uVar5 = (*(code *)*param_3)(uVar8,*(undefined8 *)(*param_1 + lVar9 + 8));
            lVar2 = lVar9 + -8;
          } while ((uVar5 & 1) != 0);
          pauVar7 = (undefined1 (*) [16])(param_1[1] + lVar9);
LAB_004ae3f8:
          iVar12 = iVar12 + 1;
          *(undefined8 *)*pauVar7 = uVar8;
          if (iVar12 == 8) {
            return (undefined1 (*) [16])(*pauVar10 + 8) == param_2;
          }
        }
        puVar1 = *pauVar10;
        lVar11 = lVar11 + 8;
        pauVar7 = pauVar10;
        pauVar10 = (undefined1 (*) [16])(puVar1 + 8);
      } while ((undefined1 (*) [16])(puVar1 + 8) != param_2);
    }
  }
  else {
    if (uVar5 == 3) {
      uVar5 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)*param_1);
      uVar3 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)(*param_1 + 8));
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)*param_1;
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar8;
          return true;
        }
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar8;
        uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8));
        if ((uVar5 & 1) == 0) {
          return true;
        }
        uVar8 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar8;
        return true;
      }
      if ((uVar3 & 1) == 0) {
        return true;
      }
      uVar8 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar8;
      uVar8 = *(undefined8 *)*param_1;
      uVar6 = *(undefined8 *)(*param_1 + 8);
    }
    else {
      if (uVar5 == 4) {
        FUN_004ae048(param_1,*param_1 + 8,param_1 + 1,param_2[-1] + 8,param_3);
        return true;
      }
      if (uVar5 != 5) goto LAB_004ae2d0;
      FUN_004ae048(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,param_3);
      uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)(param_1[1] + 8));
      if ((uVar5 & 1) == 0) {
        return true;
      }
      uVar8 = *(undefined8 *)(param_1[1] + 8);
      *(undefined8 *)(param_1[1] + 8) = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar8;
      uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_1[1] + 8),*(undefined8 *)param_1[1]);
      if ((uVar5 & 1) == 0) {
        return true;
      }
      uVar8 = *(undefined8 *)param_1[1];
      uVar6 = *(undefined8 *)(param_1[1] + 8);
      uVar4 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)param_1[1] = uVar6;
      *(undefined8 *)(param_1[1] + 8) = uVar8;
      uVar5 = (*(code *)*param_3)(uVar6,uVar4);
      if ((uVar5 & 1) == 0) {
        return true;
      }
      uVar4 = *(undefined8 *)(*param_1 + 8);
      uVar6 = *(undefined8 *)param_1[1];
      uVar8 = *(undefined8 *)*param_1;
      *(undefined8 *)(*param_1 + 8) = uVar6;
      *(undefined8 *)param_1[1] = uVar4;
    }
    uVar5 = (*(code *)*param_3)(uVar6,uVar8);
    if ((uVar5 & 1) != 0) {
      auVar13 = NEON_ext(*param_1,*param_1,8,1);
      *(long *)(*param_1 + 8) = auVar13._8_8_;
      *(long *)*param_1 = auVar13._0_8_;
    }
  }
  return true;
}


// ===== 004ae4a0  rive::LinearGradient::applyTo =====

/* rive::LinearGradient::applyTo(rive::RenderPaint*, float) */

void __thiscall
rive::LinearGradient::applyTo(LinearGradient *this,RenderPaint *param_1,float param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(**(long **)(this + 0x30) + 0xd8))();
  fVar24 = *(float *)(this + 0xa0);
  fVar23 = *(float *)(this + 0xa4);
  fVar25 = *(float *)(this + 0xa8);
  fVar22 = *(float *)(this + 0xac);
  if (((uVar3 >> 2 & 1) == 0) || (lVar6 = *(long *)(this + 0xf0), lVar6 == 0)) {
    plVar4 = *(long **)(this + 0xf8);
    if ((plVar4 != (long *)0x0) && (lVar6 = *(long *)(this + 0xf0), lVar6 != 0)) {
      pfVar11 = (float *)(lVar6 + 0xa4);
      fVar13 = *pfVar11;
      fVar19 = *(float *)(lVar6 + 0xb0);
      fVar14 = (float)*(undefined8 *)(lVar6 + 0xa8);
      fVar15 = -fVar14;
      fVar18 = (float)((ulong)*(undefined8 *)(lVar6 + 0xa8) >> 0x20);
      fVar17 = (float)NEON_fmadd(fVar13,fVar19,fVar15 * fVar18);
      if (fVar17 != 0.0) {
        fVar17 = 1.0 / fVar17;
        fVar20 = (float)*(undefined8 *)(lVar6 + 0xb4);
        fVar21 = (float)((ulong)*(undefined8 *)(lVar6 + 0xb4) >> 0x20);
        uVar16 = NEON_rev64(CONCAT44(fVar21 * -fVar13,fVar20 * -fVar19),4);
        local_a0 = CONCAT44(fVar15 * fVar17,fVar19 * fVar17);
        uStack_98 = CONCAT44(fVar13 * fVar17,-fVar18 * fVar17);
        local_90 = NEON_rev64(CONCAT44(fVar17 * ((float)((ulong)uVar16 >> 0x20) + fVar21 * fVar18),
                                       fVar17 * ((float)uVar16 + fVar20 * fVar14)),4);
        fVar24 = (float)(**(code **)(*plVar4 + 0x18))(fVar24,fVar23,plVar4,pfVar11,&local_a0);
        fVar25 = (float)(**(code **)(**(long **)(this + 0xf8) + 0x18))
                                  (fVar25,fVar22,*(long **)(this + 0xf8),pfVar11,&local_a0);
      }
    }
  }
  else {
    fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0xa4),fVar24,
                               fVar23 * *(float *)(lVar6 + 0xac));
    fVar23 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0xa8),fVar24,
                               fVar23 * *(float *)(lVar6 + 0xb0));
    fVar13 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0xa4),fVar25,
                               fVar22 * *(float *)(lVar6 + 0xac));
    fVar22 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0xa8),fVar25,
                               fVar22 * *(float *)(lVar6 + 0xb0));
    fVar24 = *(float *)(lVar6 + 0xb4) + fVar14;
    fVar23 = *(float *)(lVar6 + 0xb8) + fVar23;
    fVar25 = *(float *)(lVar6 + 0xb4) + fVar13;
    fVar22 = *(float *)(lVar6 + 0xb8) + fVar22;
    if (*(long **)(this + 0xf8) != (long *)0x0) {
      fVar24 = (float)(**(code **)(**(long **)(this + 0xf8) + 0x20))(fVar24,fVar23);
      fVar25 = (float)(**(code **)(**(long **)(this + 0xf8) + 0x20))(fVar25,fVar22);
    }
  }
  lVar6 = *(long *)(this + 0xd8);
  lVar1 = *(long *)(this + 0xe0);
  fVar13 = *(float *)(this + 0xb0);
  puVar5 = *(uint **)(this + 0x100);
  fVar14 = *(float *)(this + 0xc4);
  lVar7 = lVar1 - lVar6;
  uVar9 = lVar7 >> 2;
  uVar12 = lVar7 >> 3;
  uVar8 = *(long *)(this + 0x108) - (long)puVar5 >> 2;
  if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
    if (uVar9 < uVar8) {
      *(long *)(this + 0x108) = (long)puVar5 + lVar7;
    }
  }
  else {
    FUN_0047ac1c(this + 0x100,uVar9 - uVar8);
    puVar5 = *(uint **)(this + 0x100);
  }
  if (lVar1 != lVar6) {
    uVar8 = uVar12;
    if (uVar12 < 2) {
      uVar8 = 1;
    }
    plVar4 = *(long **)(this + 0xd8);
    puVar10 = puVar5;
    do {
      uVar3 = *(uint *)(*plVar4 + 0x88);
      fVar19 = *(float *)(*plVar4 + 0x8c);
      fVar18 = (float)NEON_fminnm(((float)(uVar3 >> 0x18) / 255.0) * fVar13 * fVar14 * param_2,
                                  0x3f800000);
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar15 = 1.0;
      if (fVar19 == 1.0 || fVar19 < 1.0 != NAN(fVar19)) {
        fVar15 = fVar19;
      }
      uVar8 = uVar8 - 1;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      *puVar10 = uVar3 & 0xffffff | (int)(long)(fVar18 * 255.0) << 0x18;
      puVar10[uVar12] = (uint)fVar15;
      puVar10 = puVar10 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar8 != 0);
  }
  (**(code **)(*(long *)this + 0xd0))
            (fVar24,fVar23,fVar25,fVar22,this,param_1,puVar5,puVar5 + uVar12,uVar12);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ae780  rive::LinearGradient::applyTo =====

/* non-virtual thunk to rive::LinearGradient::applyTo(rive::RenderPaint*, float) */

void __thiscall
rive::LinearGradient::applyTo(LinearGradient *this,RenderPaint *param_1,float param_2)

{
  applyTo(this + -0xb8,param_1,param_2);
  return;
}


// ===== 004ae788  rive::LinearGradient::makeGradient =====

/* rive::LinearGradient::makeGradient(rive::RenderPaint*, rive::Vec2D, rive::Vec2D, unsigned int
   const*, float const*, unsigned long) const */

void rive::LinearGradient::makeGradient
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0xbd8);
  (**(code **)(*plVar3 + 0x18))(&local_30,plVar3,param_3,param_4,param_5);
  (**(code **)(*param_2 + 0x48))(param_2,&local_30);
  if ((local_30 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_30 + 1), iVar2 == 1)) {
    (**(code **)(*local_30 + 8))(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ae830  rive::LinearGradient::markGradientDirty =====

/* rive::LinearGradient::markGradientDirty() */

void __thiscall rive::LinearGradient::markGradientDirty(LinearGradient *this)

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


// ===== 004ae894  rive::LinearGradient::markStopsDirty =====

/* rive::LinearGradient::markStopsDirty() */

void __thiscall rive::LinearGradient::markStopsDirty(LinearGradient *this)

{
  uint uVar1;
  long lVar2;
  
  if (((*(ushort *)(this + 0x60) ^ 0xffff) & 0x600) != 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x600;
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


// ===== 004ae900  rive::LinearGradient::renderOpacityChanged =====

/* rive::LinearGradient::renderOpacityChanged() */

void __thiscall rive::LinearGradient::renderOpacityChanged(LinearGradient *this)

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


// ===== 004ae964  rive::LinearGradient::renderOpacityChanged =====

/* non-virtual thunk to rive::LinearGradient::renderOpacityChanged() */

void __thiscall rive::LinearGradient::renderOpacityChanged(LinearGradient *this)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(this + -0x58) >> 9 & 1) == 0) {
    *(ushort *)(this + -0x58) = *(ushort *)(this + -0x58) | 0x200;
    (**(code **)(*(long *)(this + -0xb8) + 0x70))();
    lVar2 = *(long *)(this + -0x38);
    uVar1 = *(uint *)(this + -0x80);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  return;
}


// ===== 004ae9c8  rive::LinearGradient::startXChanged =====

/* rive::LinearGradient::startXChanged() */

void __thiscall rive::LinearGradient::startXChanged(LinearGradient *this)

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
  }
  return;
}


// ===== 004aea2c  rive::LinearGradient::startYChanged =====

/* rive::LinearGradient::startYChanged() */

void __thiscall rive::LinearGradient::startYChanged(LinearGradient *this)

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
  }
  return;
}


// ===== 004aea90  rive::LinearGradient::endXChanged =====

/* rive::LinearGradient::endXChanged() */

void __thiscall rive::LinearGradient::endXChanged(LinearGradient *this)

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
  }
  return;
}


// ===== 004aeaf4  rive::LinearGradient::endYChanged =====

/* rive::LinearGradient::endYChanged() */

void __thiscall rive::LinearGradient::endYChanged(LinearGradient *this)

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
  }
  return;
}


// ===== 004aeb58  rive::LinearGradient::opacityChanged =====

/* rive::LinearGradient::opacityChanged() */

void __thiscall rive::LinearGradient::opacityChanged(LinearGradient *this)

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


// ===== 004aebbc  FUN_004aebbc =====

void FUN_004aebbc(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x20];
  puVar1 = PTR_vtable_0067d390 + 0xf8;
  *param_1 = (long)(PTR_vtable_0067d390 + 0x10);
  param_1[0x17] = (long)puVar1;
  if (pvVar2 != (void *)0x0) {
    param_1[0x21] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1b];
  if (pvVar2 != (void *)0x0) {
    param_1[0x1c] = (long)pvVar2;
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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004aec84  FUN_004aec84 =====

void FUN_004aec84(void *param_1)

{
  FUN_004aebbc();
  operator_delete(param_1);
  return;
}


// ===== 004aeca8  FUN_004aeca8 =====

undefined8 FUN_004aeca8(void)

{
  return 0x16;
}


// ===== 004aecb0  FUN_004aecb0 =====

uint FUN_004aecb0(undefined8 param_1,uint param_2)

{
  return (uint)((param_2 & 0xffff) < 0x17) & 0x400c00U >> (ulong)(param_2 & 0x1f);
}


// ===== 004aecd0  FUN_004aecd0 =====

undefined8 FUN_004aecd0(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x22) {
    if (param_2 == 4) {
      pcVar10 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar10) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004aeebc;
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
LAB_004aeebc:
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
        if (param_2 == 0x21) {
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
        goto LAB_004aef7c;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar12 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar12) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004aeef4;
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
LAB_004aeef4:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
    uVar5 = 1;
  }
  else if (param_2 < 0x2a) {
    if (param_2 == 0x22) {
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
    else if (param_2 == 0x23) {
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
  }
  else if (param_2 == 0x2e) {
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
  else if (param_2 == 0x2a) {
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
LAB_004aef7c:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aefa4  FUN_004aefa4 =====

void FUN_004aefa4(long param_1)

{
  FUN_004aebbc(param_1 + -0xb8);
  return;
}


// ===== 004aefac  FUN_004aefac =====

void FUN_004aefac(long param_1)

{
  FUN_004aebbc((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}


// ===== 004aefd4  rive::RenderPathDeformer::from =====

/* rive::RenderPathDeformer::from(rive::Component*) */

Component * rive::RenderPathDeformer::from(Component *param_1)

{
  Component *pCVar1;
  short sVar2;
  
  sVar2 = (**(code **)(*(long *)param_1 + 0x10))();
  pCVar1 = param_1 + 0x1a8;
  if (sVar2 != 0x1fc) {
    pCVar1 = (Component *)0x0;
  }
  return pCVar1;
}


// ===== 004af00c  rive::PointDeformer::from =====

/* rive::PointDeformer::from(rive::Component*) */

Component * rive::PointDeformer::from(Component *param_1)

{
  Component *pCVar1;
  short sVar2;
  
  sVar2 = (**(code **)(*(long *)param_1 + 0x10))();
  pCVar1 = param_1 + 0x1b0;
  if (sVar2 != 0x1fc) {
    pCVar1 = (Component *)0x0;
  }
  return pCVar1;
}


// ===== 004af044  rive::LinearGradientBase::clone =====

/* rive::LinearGradientBase::clone() const */

long * __thiscall rive::LinearGradientBase::clone(LinearGradientBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)operator_new(0x118);
  plVar2[1] = 0;
  *plVar2 = 0;
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
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[6] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  *(undefined4 *)((long)plVar2 + 0xc4) = 0x3f800000;
  plVar2[0x19] = 0;
  plVar2[0x1a] = 0;
  puVar1 = PTR_vtable_0067d390;
  plVar2[0x20] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x22] = 0;
  plVar2[0x21] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1d] = 0;
  lVar5 = *(long *)(this + 0xa8);
  lVar4 = *(long *)(this + 0xa0);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x15] = lVar5;
  plVar2[0x14] = lVar4;
  uVar3 = *(undefined4 *)(this + 0xb0);
  plVar2[0x17] = (long)(puVar1 + 0xf8);
  *(undefined4 *)(plVar2 + 0x16) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004af110  FUN_004af110 =====

void FUN_004af110(long *param_1)

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


// ===== 004af19c  FUN_004af19c =====

void FUN_004af19c(void)

{
  return;
}


// ===== 004af1a0  FUN_004af1a0 =====

void FUN_004af1a0(void)

{
  return;
}


// ===== 004af1a4  FUN_004af1a4 =====

void FUN_004af1a4(void)

{
  return;
}


// ===== 004af1a8  FUN_004af1a8 =====

void FUN_004af1a8(void)

{
  return;
}


// ===== 004af1ac  FUN_004af1ac =====

void FUN_004af1ac(void)

{
  return;
}


// ===== 004af1b0  rive::RadialGradient::makeGradient =====

/* rive::RadialGradient::makeGradient(rive::RenderPaint*, rive::Vec2D, rive::Vec2D, unsigned int
   const*, float const*, unsigned long) const */

void rive::RadialGradient::makeGradient
               (float param_1_00,float param_2,float param_3,float param_4,long param_1,
               long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0xbd8);
  fVar4 = (float)NEON_fmadd(param_1_00 - param_3,param_1_00 - param_3,
                            (param_2 - param_4) * (param_2 - param_4));
  (**(code **)(*plVar3 + 0x20))
            (&local_30,param_1_00,param_2,SQRT(fVar4),plVar3,param_7,param_8,param_9);
  (**(code **)(*param_6 + 0x48))(param_6,&local_30);
  if ((local_30 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_30 + 1), iVar2 == 1)) {
    (**(code **)(*local_30 + 8))(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004af26c  FUN_004af26c =====

void FUN_004af26c(void *param_1)

{
  FUN_004aebbc();
  operator_delete(param_1);
  return;
}


// ===== 004af290  FUN_004af290 =====

undefined8 FUN_004af290(void)

{
  return 0x11;
}


// ===== 004af298  FUN_004af298 =====

uint FUN_004af298(undefined8 param_1,uint param_2)

{
  return (uint)((param_2 & 0xffff) < 0x17) & 0x420c00U >> (ulong)(param_2 & 0x1f);
}


// ===== 004af2b8  FUN_004af2b8 =====

void FUN_004af2b8(long param_1)

{
  FUN_004aebbc(param_1 + -0xb8);
  return;
}


// ===== 004af2c0  FUN_004af2c0 =====

void FUN_004af2c0(long param_1)

{
  FUN_004aebbc((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}


// ===== 004af2e8  rive::RadialGradientBase::clone =====

/* rive::RadialGradientBase::clone() const */

long * __thiscall rive::RadialGradientBase::clone(RadialGradientBase *this)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  
  plVar2 = (long *)operator_new(0x118);
  plVar2[1] = 0;
  *plVar2 = 0;
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
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 2) = 0;
  *(undefined4 *)(plVar2 + 1) = 0xffffffff;
  *(undefined2 *)(plVar2 + 0xc) = 0xfffe;
  plVar2[6] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  *(undefined4 *)((long)plVar2 + 0xc4) = 0x3f800000;
  plVar2[0x20] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  puVar1 = PTR_vtable_0067d398;
  plVar2[0x1a] = 0;
  plVar2[0x19] = 0;
  plVar2[0x22] = 0;
  plVar2[0x21] = 0;
  lVar4 = *(long *)(this + 0xa0);
  plVar2[0x15] = *(long *)(this + 0xa8);
  plVar2[0x14] = lVar4;
  uVar3 = *(undefined4 *)(this + 0xb0);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x17] = (long)(puVar1 + 0xf8);
  *(undefined4 *)(plVar2 + 0x16) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar2 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  return plVar2;
}


// ===== 004af3b4  FUN_004af3b4 =====

void FUN_004af3b4(void *param_1)

{
  FUN_004aebbc();
  operator_delete(param_1);
  return;
}


// ===== 004af3d8  FUN_004af3d8 =====

void FUN_004af3d8(long param_1)

{
  FUN_004aebbc(param_1 + -0xb8);
  return;
}


// ===== 004af3e0  FUN_004af3e0 =====

void FUN_004af3e0(long param_1)

{
  FUN_004aebbc((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}


// ===== 004af408  rive::ShapePaint::onAddedClean =====

/* rive::ShapePaint::onAddedClean(rive::CoreContext*) */

undefined8 rive::ShapePaint::onAddedClean(CoreContext *param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (uVar1 < 0x201) {
    lVar2 = 400;
    if (uVar1 < 0x89) {
      if (uVar1 != 1) {
        if (uVar1 != 3) {
          return 1;
        }
        goto LAB_004af4a4;
      }
    }
    else {
      if (uVar1 == 0x89) {
        lVar2 = 0x138;
        lVar3 = *(long *)(param_1 + 0xd0);
        goto joined_r0x004af4d4;
      }
      if (uVar1 != 0x199) {
        return 1;
      }
    }
  }
  else {
    if (uVar1 < 0x23c) {
      if ((uVar1 != 0x201) && (uVar1 != 0x23b)) {
        return 1;
      }
    }
    else if (((uVar1 != 0x23c) && (uVar1 != 0x23e)) && (uVar1 != 0x23f)) {
      return 1;
    }
LAB_004af4a4:
    lVar2 = 0x178;
  }
  lVar3 = *(long *)(param_1 + 0xd0);
joined_r0x004af4d4:
  if (lVar3 != 0) {
    ShapePaintContainer::addPaint
              ((ShapePaintContainer *)((long)plVar4 + lVar2),(ShapePaint *)param_1);
  }
  return 0;
}


// ===== 004af4dc  rive::ShapePaint::update =====

/* rive::ShapePaint::update(rive::ComponentDirt) */

void __thiscall rive::ShapePaint::update(ShapePaint *this,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if ((param_2 >> 4 & 1) == 0) {
    return;
  }
  if (*(long *)(this + 0xb8) == *(long *)(this + 0xb0)) {
    return;
  }
  plVar7 = *(long **)(this + 0x30);
  uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
  plVar6 = (long *)0x0;
  if (uVar3 < 0x201) {
    if (uVar3 < 0x89) {
      if (uVar3 != 1) {
        if (uVar3 != 3) goto LAB_004af590;
        goto LAB_004af58c;
      }
    }
    else {
      if (uVar3 == 0x89) {
        plVar6 = plVar7 + 0x27;
        goto LAB_004af590;
      }
      if (uVar3 != 0x199) goto LAB_004af590;
    }
    plVar6 = plVar7 + 0x32;
  }
  else {
    if (uVar3 < 0x23c) {
      if ((uVar3 != 0x201) && (uVar3 != 0x23b)) goto LAB_004af590;
    }
    else if ((uVar3 != 0x23c) && ((uVar3 != 0x23e && (uVar3 != 0x23f)))) goto LAB_004af590;
LAB_004af58c:
    plVar6 = plVar7 + 0x2f;
  }
LAB_004af590:
  lVar4 = (**(code **)(*(long *)this + 0xf0))(this,plVar6);
  puVar1 = *(undefined8 **)(this + 0xb8);
  puVar2 = *(undefined8 **)(this + 0xb0);
  while (puVar2 != puVar1) {
    (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,this,lVar4,this);
    puVar8 = puVar2 + 1;
    lVar5 = (**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,this);
    puVar2 = puVar8;
    if (lVar5 != 0) {
      lVar4 = lVar5;
    }
  }
  return;
}


// ===== 004af608  rive::ShapePaint::initRenderPaint =====

/* rive::ShapePaint::initRenderPaint(rive::ShapePaintMutator*) */

void __thiscall rive::ShapePaint::initRenderPaint(ShapePaint *this,ShapePaintMutator *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x18);
  *(ShapePaintMutator **)(this + 0xd0) = param_1;
  (**(code **)(**(long **)(*(long *)(lVar4 + 0x40) + 0xbd8) + 0x38))(&local_40);
  plVar2 = local_40;
  plVar5 = *(long **)(this + 200);
  local_40 = (long *)0x0;
  *(long **)(this + 200) = plVar2;
  if (plVar5 != (long *)0x0) {
    iVar3 = FUN_00340fe0(0xffffffff,plVar5 + 1);
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    plVar2 = local_40;
    if ((local_40 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40 + 1), iVar3 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 200));
}


// ===== 004af6dc  rive::ShapePaint::blendMode =====

/* rive::ShapePaint::blendMode(rive::BlendMode) */

void __thiscall rive::ShapePaint::blendMode(ShapePaint *this,int param_2)

{
  if (*(int *)(this + 0xa4) != 0x7f) {
    param_2 = *(int *)(this + 0xa4);
  }
                    /* WARNING: Could not recover jumptable at 0x004af6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 200) + 0x40))(*(long **)(this + 200),param_2);
  return;
}


// ===== 004af6fc  rive::ShapePaint::feather =====

/* rive::ShapePaint::feather(rive::Feather*) */

void __thiscall rive::ShapePaint::feather(ShapePaint *this,Feather *param_1)

{
  *(Feather **)(this + 0xd8) = param_1;
  return;
}


// ===== 004af704  rive::ShapePaint::feather =====

/* rive::ShapePaint::feather() const */

undefined8 __thiscall rive::ShapePaint::feather(ShapePaint *this)

{
  return *(undefined8 *)(this + 0xd8);
}


// ===== 004af70c  rive::ShapePaint::draw =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::ShapePaint::draw(rive::Renderer*, rive::ShapePaintPath*, rive::Mat2D const&, bool,
   rive::RenderPaint*, bool) */

void __thiscall
rive::ShapePaint::draw
          (ShapePaint *this,Renderer *param_1,ShapePaintPath *param_2,Mat2D *param_3,bool param_4,
          RenderPaint *param_5,bool param_6)

{
  RenderPaint *pRVar1;
  long lVar2;
  ushort uVar3;
  long *plVar4;
  ShapePaintPath *pSVar5;
  Mat2D *pMVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  ShapePaintPath *unaff_x24;
  int iVar11;
  Feather *this_00;
  float fVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)(this + 0xd8);
  if ((((lVar9 == 0) || (*(int *)(lVar9 + 0xa0) != 0)) || (*(char *)(lVar9 + 0xb0) != '\0')) ||
     ((fVar12 = *(float *)(lVar9 + 0xa8), fVar12 == 0.0 && (*(float *)(lVar9 + 0xac) == 0.0)))) {
    if (param_2[0x50] != (ShapePaintPath)0x0) {
      if (param_6) {
        (**(code **)(*(long *)param_1 + 0x10))(param_1);
      }
      goto LAB_004af78c;
    }
    bVar10 = !param_6;
  }
  else {
    if (param_6) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
      lVar9 = *(long *)(this + 0xd8);
      fVar12 = *(float *)(lVar9 + 0xa8);
    }
    uStack_6c = *(undefined4 *)(lVar9 + 0xac);
    uStack_78 = _UNK_0024e5b8;
    local_80 = _DAT_0024e5b0;
    local_70 = fVar12;
    (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_80);
    if (param_2[0x50] != (ShapePaintPath)0x0) {
LAB_004af78c:
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_3);
    }
    bVar10 = true;
  }
  if (*(long *)(this + 0xb8) - *(long *)(this + 0xb0) == 0) {
LAB_004af840:
    unaff_x24 = (ShapePaintPath *)0x0;
  }
  else {
    lVar9 = (*(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 3) + -1;
    do {
      plVar4 = *(long **)(*(long *)(this + 0xb0) + lVar9 * 8);
      pSVar5 = (ShapePaintPath *)(**(code **)(*plVar4 + 0x30))(plVar4,this);
      lVar7 = 0;
      if (lVar9 != 0) {
        lVar7 = lVar9 + -1;
      }
      iVar11 = 3;
      if (lVar9 != 0) {
        iVar11 = 0;
      }
      if (pSVar5 != (ShapePaintPath *)0x0) {
        iVar11 = 1;
        unaff_x24 = pSVar5;
        lVar7 = lVar9;
      }
      lVar9 = lVar7;
    } while (iVar11 == 0);
    if (iVar11 == 3) goto LAB_004af840;
  }
  lVar9 = *(long *)(this + 0xd8);
  if (unaff_x24 != (ShapePaintPath *)0x0) {
    param_2 = unaff_x24;
  }
  if (lVar9 == 0) goto LAB_004afa74;
  if (*(char *)(lVar9 + 0xb0) != '\0') {
    if ((unaff_x24 != (ShapePaintPath *)0x0) && (*(char *)(lVar9 + 0x110) != '\0')) {
      plVar4 = *(long **)(this + 0x30);
      uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (uVar3 < 0x201) {
        lVar9 = 400;
        if (uVar3 < 0x89) {
          if (uVar3 != 1) {
            if (uVar3 == 3) goto LAB_004af978;
            goto LAB_004af9b0;
          }
        }
        else if (uVar3 == 0x89) {
          lVar9 = 0x138;
        }
        else if (uVar3 != 0x199) goto LAB_004af9b0;
LAB_004af97c:
        this_00 = *(Feather **)(this + 0xd8);
        iVar11 = *(int *)(this_00 + 0xa0);
        pMVar6 = (Mat2D *)(**(code **)(*(long *)((long)plVar4 + lVar9) + 0x20))
                                    ((long)plVar4 + lVar9);
        Feather::rebuildInnerPath(this_00,unaff_x24,pMVar6,iVar11 == 0);
      }
      else if (uVar3 < 0x23c) {
        if ((uVar3 == 0x201) || (uVar3 == 0x23b)) goto LAB_004af978;
      }
      else if ((uVar3 == 0x23c) || ((uVar3 == 0x23e || (uVar3 == 0x23f)))) {
LAB_004af978:
        lVar9 = 0x178;
        goto LAB_004af97c;
      }
LAB_004af9b0:
      lVar9 = *(long *)(this + 0xd8);
    }
    if (bVar10 == false) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
    lVar7 = ShapePaintPath::renderPath(param_2,*(Factory **)(*(long *)(this + 0x40) + 0xbd8));
    if (lVar7 != 0) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,lVar7);
    }
    bVar10 = true;
    param_2 = (ShapePaintPath *)(lVar9 + 0xb8);
  }
  lVar9 = *(long *)(this + 0xd8);
  if (((*(int *)(lVar9 + 0xa0) != 0) && (*(char *)(lVar9 + 0xb0) == '\0')) &&
     ((fVar12 = *(float *)(lVar9 + 0xa8), fVar12 != 0.0 || (*(float *)(lVar9 + 0xac) != 0.0)))) {
    if (bVar10 == false) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
      lVar9 = *(long *)(this + 0xd8);
      fVar12 = *(float *)(lVar9 + 0xa8);
    }
    uStack_6c = *(undefined4 *)(lVar9 + 0xac);
    uStack_78 = _UNK_0024e5b8;
    local_80 = _DAT_0024e5b0;
    local_70 = fVar12;
    (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_80);
    bVar10 = true;
  }
LAB_004afa74:
  plVar4 = (long *)ShapePaintPath::renderPath(param_2,*(Factory **)(*(long *)(this + 0x40) + 0xbd8))
  ;
  if (plVar4 != (long *)0x0) {
    if ((!param_4) && (uVar8 = (**(code **)(*(long *)this + 0x18))(this,0x14), (uVar8 & 1) != 0)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined4 *)(this + 0xe0));
    }
    pRVar1 = *(RenderPaint **)(this + 200);
    if (param_5 != (RenderPaint *)0x0) {
      pRVar1 = param_5;
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,plVar4,pRVar1);
  }
  if ((bVar10 & param_6) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x004afb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004afb5c  rive::ShapePaint::invalidateEffects =====

/* rive::ShapePaint::invalidateEffects(rive::StrokeEffect*) */

void __thiscall rive::ShapePaint::invalidateEffects(ShapePaint *this,StrokeEffect *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0xb8);
  if (*(undefined8 **)(this + 0xb0) != puVar1) {
    bVar2 = param_1 == (StrokeEffect *)0x0;
    puVar4 = *(undefined8 **)(this + 0xb0);
    do {
      if (bVar2) {
        (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,0);
      }
      puVar3 = puVar4 + 1;
      bVar2 = (bool)((param_1 != (StrokeEffect *)0x0 && (StrokeEffect *)*puVar4 == param_1) | bVar2)
      ;
      puVar4 = puVar3;
    } while (puVar3 != puVar1);
  }
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined1 *)(*(long *)(this + 0xd8) + 0x110) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x004afbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xc0))(this);
  return;
}


// ===== 004afbf8  rive::ShapePaint::invalidateEffects =====

/* non-virtual thunk to rive::ShapePaint::invalidateEffects(rive::StrokeEffect*) */

void __thiscall rive::ShapePaint::invalidateEffects(ShapePaint *this,StrokeEffect *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  if (*(undefined8 **)(this + 8) != puVar1) {
    bVar2 = param_1 == (StrokeEffect *)0x0;
    puVar4 = *(undefined8 **)(this + 8);
    do {
      if (bVar2) {
        (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,0);
      }
      puVar3 = puVar4 + 1;
      bVar2 = (bool)((param_1 != (StrokeEffect *)0x0 && (StrokeEffect *)*puVar4 == param_1) | bVar2)
      ;
      puVar4 = puVar3;
    } while (puVar3 != puVar1);
  }
  if (*(long *)(this + 0x30) != 0) {
    *(undefined1 *)(*(long *)(this + 0x30) + 0x110) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x004afc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0xa8) + 0xc0))(this + -0xa8);
  return;
}


// ===== 004afc94  rive::ShapePaint::invalidateEffects =====

/* rive::ShapePaint::invalidateEffects() */

void __thiscall rive::ShapePaint::invalidateEffects(ShapePaint *this)

{
                    /* WARNING: Could not recover jumptable at 0x004afca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))(this,0);
  return;
}


// ===== 004afca4  rive::ShapePaint::invalidateEffects =====

/* non-virtual thunk to rive::ShapePaint::invalidateEffects() */

void __thiscall rive::ShapePaint::invalidateEffects(ShapePaint *this)

{
                    /* WARNING: Could not recover jumptable at 0x004afcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0xa8) + 0xb0))(this + -0xa8,0);
  return;
}


// ===== 004afcb4  rive::ShapePaint::invalidateRendering =====

/* rive::ShapePaint::invalidateRendering() */

void __thiscall rive::ShapePaint::invalidateRendering(ShapePaint *this)

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


// ===== 004afd18  rive::ShapePaint::addStrokeEffect =====

/* rive::ShapePaint::addStrokeEffect(rive::StrokeEffect*) */

void __thiscall rive::ShapePaint::addStrokeEffect(ShapePaint *this,StrokeEffect *param_1)

{
  (**(code **)(*(long *)param_1 + 0x28))(param_1,this);
  EffectsContainer::addStrokeEffect((EffectsContainer *)(this + 0xa8),param_1);
  return;
}


// ===== 004afd54  rive::ShapePaint::addStrokeEffect =====

/* non-virtual thunk to rive::ShapePaint::addStrokeEffect(rive::StrokeEffect*) */

void __thiscall rive::ShapePaint::addStrokeEffect(ShapePaint *this,StrokeEffect *param_1)

{
  (**(code **)(*(long *)param_1 + 0x28))(param_1,this + -0xa8);
  EffectsContainer::addStrokeEffect((EffectsContainer *)this,param_1);
  return;
}


// ===== 004afd90  rive::ShapePaint::parentTransformComponent =====

/* rive::ShapePaint::parentTransformComponent() const */

ShapePaint * __thiscall rive::ShapePaint::parentTransformComponent(ShapePaint *this)

{
  ulong uVar1;
  
  do {
    this = *(ShapePaint **)(this + 0x30);
    if (this == (ShapePaint *)0x0) {
      return (ShapePaint *)0x0;
    }
    uVar1 = (**(code **)(*(long *)this + 0x18))(this,0x26);
  } while ((uVar1 & 1) == 0);
  return this;
}


// ===== 004afdd0  FUN_004afdd0 =====

void FUN_004afdd0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4afdd4);
  (*pcVar1)();
}


// ===== 004afdd4  FUN_004afdd4 =====

undefined8 FUN_004afdd4(void)

{
  return 0x15;
}


// ===== 004afddc  FUN_004afddc =====

uint FUN_004afddc(undefined8 param_1,uint param_2)

{
  return (uint)((param_2 & 0xffff) < 0x16) & 0x200c00U >> (ulong)(param_2 & 0x1f);
}


// ===== 004afdfc  rive::ShapePaintMutator::initPaintMutator =====

/* rive::ShapePaintMutator::initPaintMutator(rive::Component*) */

undefined8 __thiscall
rive::ShapePaintMutator::initPaintMutator(ShapePaintMutator *this,Component *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  *(Component **)(this + 0x18) = param_1;
  this[8] = (ShapePaintMutator)0x3;
  uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,0x15);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else if (plVar4[0x19] == 0) {
    uVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4,this);
    uVar2 = 0;
    *(undefined8 *)(this + 0x10) = uVar3;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


// ===== 004afe78  rive::ShapePaintMutator::renderOpacity =====

/* rive::ShapePaintMutator::renderOpacity(float) */

void __thiscall rive::ShapePaintMutator::renderOpacity(ShapePaintMutator *this,float param_1)

{
  if (*(float *)(this + 0xc) == param_1) {
    return;
  }
  *(float *)(this + 0xc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x004afe94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)this)();
  return;
}


// ===== 004afe98  rive::ShapePaintMutator::isTranslucent =====

/* rive::ShapePaintMutator::isTranslucent() const */

byte __thiscall rive::ShapePaintMutator::isTranslucent(ShapePaintMutator *this)

{
  return (byte)this[8] >> 1 & 1;
}


// ===== 004afea4  rive::ShapePaintMutator::isVisible =====

/* rive::ShapePaintMutator::isVisible() const */

byte __thiscall rive::ShapePaintMutator::isVisible(ShapePaintMutator *this)

{
  return (byte)this[8] & 1;
}


// ===== 004afeb0  rive::ShapePaintPath::ShapePaintPath =====

/* rive::ShapePaintPath::ShapePaintPath(bool) */

void __thiscall rive::ShapePaintPath::ShapePaintPath(ShapePaintPath *this,bool param_1)

{
  this[0x48] = (ShapePaintPath)0x0;
  *this = (ShapePaintPath)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x50] = (ShapePaintPath)param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x54) = 2;
  return;
}


// ===== 004afee0  rive::ShapePaintPath::ShapePaintPath =====

/* rive::ShapePaintPath::ShapePaintPath(bool, rive::FillRule) */

void __thiscall
rive::ShapePaintPath::ShapePaintPath(ShapePaintPath *this,ShapePaintPath param_1,undefined4 param_3)

{
  this[0x48] = (ShapePaintPath)0x0;
  *this = (ShapePaintPath)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x50] = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x54) = param_3;
  return;
}


// ===== 004aff0c  rive::ShapePaintPath::rewind =====

/* rive::ShapePaintPath::rewind() */

void __thiscall rive::ShapePaintPath::rewind(ShapePaintPath *this)

{
  this[0x48] = (ShapePaintPath)0x0;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  *this = (ShapePaintPath)0x1;
  return;
}


// ===== 004aff2c  rive::ShapePaintPath::addPath =====

/* rive::ShapePaintPath::addPath(rive::RawPath const&, rive::Mat2D const*) */

void __thiscall rive::ShapePaintPath::addPath(ShapePaintPath *this,RawPath *param_1,Mat2D *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = RawPath::addPath((RawPath *)(this + 0x10),param_1,param_2);
  RawPath::pruneEmptySegments(this + 0x10,auVar1._0_8_,auVar1._8_8_);
  *this = (ShapePaintPath)0x1;
  return;
}


// ===== 004aff70  rive::ShapePaintPath::addPathClockwise =====

/* rive::ShapePaintPath::addPathClockwise(rive::RawPath const&, rive::Mat2D const*) */

void __thiscall
rive::ShapePaintPath::addPathClockwise(ShapePaintPath *this,RawPath *param_1,Mat2D *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  fVar1 = (float)RawPath::computeCoarseArea(param_1);
  if (param_2 != (Mat2D *)0x0) {
    fVar2 = (float)NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc),
                              -(*(float *)(param_2 + 8) * *(float *)(param_2 + 4)));
    fVar1 = fVar1 * fVar2;
  }
  if (0.0 <= fVar1) {
    auVar3 = RawPath::addPath((RawPath *)(this + 0x10),param_1,param_2);
  }
  else {
    auVar3 = RawPath::addPathBackwards((RawPath *)(this + 0x10),param_1,param_2);
  }
  RawPath::pruneEmptySegments(this + 0x10,auVar3._0_8_,auVar3._8_8_);
  *this = (ShapePaintPath)0x1;
  return;
}


// ===== 004b0000  rive::ShapePaintPath::addPathBackwards =====

/* rive::ShapePaintPath::addPathBackwards(rive::RawPath const&, rive::Mat2D const*) */

void __thiscall
rive::ShapePaintPath::addPathBackwards(ShapePaintPath *this,RawPath *param_1,Mat2D *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = RawPath::addPathBackwards((RawPath *)(this + 0x10),param_1,param_2);
  RawPath::pruneEmptySegments(this + 0x10,auVar1._0_8_,auVar1._8_8_);
  *this = (ShapePaintPath)0x1;
  return;
}


// ===== 004b0044  rive::ShapePaintPath::renderPath =====

/* rive::ShapePaintPath::renderPath(rive::Component const*) */

void __thiscall rive::ShapePaintPath::renderPath(ShapePaintPath *this,Component *param_1)

{
  renderPath(this,*(Factory **)(*(long *)(param_1 + 0x40) + 0xbd8));
  return;
}


// ===== 004b0050  rive::ShapePaintPath::renderPath =====

/* rive::ShapePaintPath::renderPath(rive::Factory*) */

void __thiscall rive::ShapePaintPath::renderPath(ShapePaintPath *this,Factory *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*(long *)param_1 + 0x30))(&local_40,param_1);
    plVar3 = local_40;
    plVar4 = *(long **)(this + 8);
    local_40 = (long *)0x0;
    *(long **)(this + 8) = plVar3;
    if (plVar4 != (long *)0x0) {
      iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 1);
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      plVar3 = local_40;
      if ((local_40 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_40 + 1), iVar2 == 1))
      {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
    (**(code **)(**(long **)(this + 8) + 0x68))(*(long **)(this + 8),this + 0x10);
    (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),*(undefined4 *)(this + 0x54));
  }
  else {
    if (*this == (ShapePaintPath)0x0) goto LAB_004b0150;
    (**(code **)(*plVar3 + 0x10))();
    (**(code **)(**(long **)(this + 8) + 0x68))(*(long **)(this + 8),this + 0x10);
  }
  plVar3 = *(long **)(this + 8);
  *this = (ShapePaintPath)0x0;
LAB_004b0150:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


// ===== 004b0178  rive::SolidColor::onAddedDirty =====

/* rive::SolidColor::onAddedDirty(rive::CoreContext*) */

undefined8 __thiscall rive::SolidColor::onAddedDirty(SolidColor *this,CoreContext *param_1)

{
  SolidColor *pSVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pSVar1 = (SolidColor *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pSVar1 = (SolidColor *)(param_1 + -0x998);
  }
  *(SolidColor **)(this + 0x40) = pSVar1;
  *(SolidColor **)(this + 0x80) = pSVar1;
  if (pSVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar5 + 0x90))(plVar2,this);
  }
  plVar2 = *(long **)(this + 0x30);
  *(SolidColor **)(this + 0xa8) = this;
  this[0x98] = (SolidColor)0x3;
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x15);
  if ((uVar3 & 1) == 0) {
    uVar4 = 1;
  }
  else if (plVar2[0x19] == 0) {
    uVar4 = (**(code **)(*plVar2 + 0xd0))(plVar2,this + 0x90);
    *(undefined8 *)(this + 0xa0) = uVar4;
    (**(code **)(*(long *)this + 0xa0))(this);
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


// ===== 004b0248  rive::SolidColor::renderOpacityChanged =====

/* rive::SolidColor::renderOpacityChanged() */

void __thiscall rive::SolidColor::renderOpacityChanged(SolidColor *this)

{
  long *plVar1;
  long lVar2;
  SolidColor SVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  
  plVar1 = *(long **)(this + 0xa0);
  if (plVar1 == (long *)0x0) {
    return;
  }
  fVar6 = (float)NEON_fminnm(((float)(*(uint *)(this + 0x88) >> 0x18) / 255.0) *
                             *(float *)(this + 0x9c),0x3f800000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar5 = (uint)(long)(fVar6 * 255.0);
  (**(code **)(*plVar1 + 0x18))(plVar1,*(uint *)(this + 0x88) & 0xffffff | uVar5 << 0x18);
  this[0x98] = (SolidColor)0x0;
  fVar6 = (float)(uVar5 & 0xff) / 255.0;
  if (fVar6 == 0.0 || fVar6 < 0.0 != NAN(fVar6)) {
    if (1.0 <= fVar6) goto LAB_004b02dc;
    SVar3 = (SolidColor)0x2;
  }
  else {
    SVar3 = (SolidColor)0x1;
  }
  this[0x98] = SVar3;
LAB_004b02dc:
  lVar4 = *(long *)(this + 0x40);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xc32) == '\0')) {
    while( true ) {
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      if (*(long **)(lVar4 + 0xc38) == (long *)0x0) break;
      lVar2 = (**(code **)(**(long **)(lVar4 + 0xc38) + 0x40))();
      if (lVar2 == 0) {
        return;
      }
      lVar4 = (**(code **)(**(long **)(lVar4 + 0xc38) + 0x40))();
      if (*(char *)(lVar4 + 0xc32) != '\0') {
        return;
      }
    }
  }
  return;
}


// ===== 004b033c  rive::SolidColor::renderOpacityChanged =====

/* non-virtual thunk to rive::SolidColor::renderOpacityChanged() */

void __thiscall rive::SolidColor::renderOpacityChanged(SolidColor *this)

{
  long *plVar1;
  long lVar2;
  SolidColor SVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 == (long *)0x0) {
    return;
  }
  fVar6 = (float)NEON_fminnm(((float)(*(uint *)(this + -8) >> 0x18) / 255.0) *
                             *(float *)(this + 0xc),0x3f800000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar5 = (uint)(long)(fVar6 * 255.0);
  (**(code **)(*plVar1 + 0x18))(plVar1,*(uint *)(this + -8) & 0xffffff | uVar5 << 0x18);
  this[8] = (SolidColor)0x0;
  fVar6 = (float)(uVar5 & 0xff) / 255.0;
  if (fVar6 == 0.0 || fVar6 < 0.0 != NAN(fVar6)) {
    if (1.0 <= fVar6) goto LAB_004b03d0;
    SVar3 = (SolidColor)0x2;
  }
  else {
    SVar3 = (SolidColor)0x1;
  }
  this[8] = SVar3;
LAB_004b03d0:
  lVar4 = *(long *)(this + -0x50);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xc32) == '\0')) {
    while( true ) {
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      if (*(long **)(lVar4 + 0xc38) == (long *)0x0) break;
      lVar2 = (**(code **)(**(long **)(lVar4 + 0xc38) + 0x40))();
      if (lVar2 == 0) {
        return;
      }
      lVar4 = (**(code **)(**(long **)(lVar4 + 0xc38) + 0x40))();
      if (*(char *)(lVar4 + 0xc32) != '\0') {
        return;
      }
    }
  }
  return;
}


// ===== 004b0430  rive::SolidColor::applyTo =====

/* rive::SolidColor::applyTo(rive::RenderPaint*, float) */

void __thiscall rive::SolidColor::applyTo(SolidColor *this,RenderPaint *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(((float)(*(uint *)(this + 0x88) >> 0x18) / 255.0) *
                             *(float *)(this + 0x9c) * param_2,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x004b0480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))
            (param_1,*(uint *)(this + 0x88) & 0xffffff | (int)(long)(fVar1 * 255.0) << 0x18);
  return;
}


// ===== 004b0484  rive::SolidColor::applyTo =====

/* non-virtual thunk to rive::SolidColor::applyTo(rive::RenderPaint*, float) */

void __thiscall rive::SolidColor::applyTo(SolidColor *this,RenderPaint *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(((float)(*(uint *)(this + -8) >> 0x18) / 255.0) *
                             *(float *)(this + 0xc) * param_2,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x004b04d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))
            (param_1,*(uint *)(this + -8) & 0xffffff | (int)(long)(fVar1 * 255.0) << 0x18);
  return;
}


// ===== 004b04d8  rive::SolidColor::colorValueChanged =====

/* rive::SolidColor::colorValueChanged() */

void __thiscall rive::SolidColor::colorValueChanged(SolidColor *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b04e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa0))();
  return;
}


// ===== 004b04e4  FUN_004b04e4 =====

void FUN_004b04e4(long *param_1)

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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004b0554  FUN_004b0554 =====

void FUN_004b0554(long *param_1)

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


// ===== 004b05c0  FUN_004b05c0 =====

undefined8 FUN_004b05c0(void)

{
  return 0x12;
}


// ===== 004b05c8  FUN_004b05c8 =====

bool FUN_004b05c8(undefined8 param_1,int param_2)

{
  return (param_2 - 10U & 0xfff7) == 0;
}


// ===== 004b05dc  FUN_004b05dc =====

void FUN_004b05dc(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (param_2 == 4) {
    pcVar13 = (char *)param_3[2];
    do {
      if ((char *)(*param_3 + param_3[1]) <= pcVar13) {
        param_3[2] = *param_3 + param_3[1];
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004b0714;
      }
      pcVar14 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar2 < '\0');
    param_3[2] = (long)pcVar14;
    if ((char)param_3[3] == '\0') {
      rive::BinaryReader::readString((ulong)param_3);
    }
    else {
LAB_004b0714:
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
    uVar15 = 0;
    uVar6 = 0;
    pbVar11 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004b06f8;
      }
      pbVar12 = pbVar11 + 1;
      bVar1 = *pbVar11;
      uVar3 = uVar15 & 0x3f;
      uVar15 = (ulong)(((uint)uVar15 & 0xff) + 7);
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar6;
      pbVar11 = pbVar12;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar12;
    if (uVar6 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_004b06f8:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x25) {
      uVar5 = 0;
      goto LAB_004b0758;
    }
    puVar10 = (undefined4 *)param_3[2];
    puVar7 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar7 - (long)puVar10 < 4) {
      uVar8 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar7 = puVar10 + 1;
      uVar8 = *puVar10;
    }
    param_3[2] = (long)puVar7;
    *(undefined4 *)(param_1 + 0x88) = uVar8;
  }
  uVar5 = 1;
LAB_004b0758:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 004b077c  FUN_004b077c =====

void FUN_004b077c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + -0x28);
  *(undefined **)(param_1 + -0x90) = PTR_vtable_0067cee0 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + -0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + -0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + -0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  *(undefined ***)(param_1 + -0x90) = &PTR_FUN_00678650;
  if ((*(byte *)(param_1 + -0x80) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + -0x70));
  return;
}


// ===== 004b07ec  FUN_004b07ec =====

void FUN_004b07ec(long param_1)

{
  void *pvVar1;
  
  *(long *)(param_1 + -0x90) = (long)(PTR_vtable_0067cee0 + 0x10);
  pvVar1 = *(void **)(param_1 + -0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + -0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + -0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + -0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  *(undefined ***)(param_1 + -0x90) = &PTR_FUN_00678650;
  if ((*(byte *)(param_1 + -0x80) & 1) != 0) {
    operator_delete(*(void **)(param_1 + -0x70));
  }
  operator_delete((long *)(param_1 + -0x90));
  return;
}


// ===== 004b085c  rive::SolidColorBase::clone =====

/* rive::SolidColorBase::clone() const */

long * __thiscall rive::SolidColorBase::clone(SolidColorBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0xb0);
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
  plVar3[3] = 0;
  *(undefined8 *)(plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 1) = 0xffffffff;
  *(undefined2 *)(plVar3 + 0xc) = 0xfffe;
  plVar3[6] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  *(undefined4 *)((long)plVar3 + 0x9c) = 0x3f800000;
  puVar2 = PTR_vtable_0067d3a8;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  uVar1 = *(undefined4 *)(this + 0x88);
  plVar3[0x12] = (long)(puVar2 + 200);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004b08fc  FUN_004b08fc =====

void FUN_004b08fc(long *param_1)

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


// ===== 004b0968  FUN_004b0968 =====

void FUN_004b0968(void)

{
  return;
}


// ===== 004b096c  rive::Stroke::pathFlags =====

/* rive::Stroke::pathFlags() const */

undefined4 __thiscall rive::Stroke::pathFlags(Stroke *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (this[0xec] != (Stroke)0x0) {
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 004b0984  rive::Stroke::initRenderPaint =====

/* rive::Stroke::initRenderPaint(rive::ShapePaintMutator*) */

long * __thiscall rive::Stroke::initRenderPaint(Stroke *this,ShapePaintMutator *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x18);
  *(ShapePaintMutator **)(this + 0xd0) = param_1;
  (**(code **)(**(long **)(*(long *)(lVar4 + 0x40) + 0xbd8) + 0x38))(&local_40);
  plVar6 = local_40;
  plVar5 = *(long **)(this + 200);
  local_40 = (long *)0x0;
  *(long **)(this + 200) = plVar6;
  if (plVar5 != (long *)0x0) {
    iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 1);
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    plVar6 = local_40;
    if ((local_40 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_40 + 1), iVar2 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  plVar6 = *(long **)(this + 200);
  (**(code **)(*plVar6 + 0x10))(plVar6,0);
  (**(code **)(*plVar6 + 0x20))(*(undefined4 *)(this + 0xe0),plVar6);
  uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,*(undefined4 *)(this + 0xe4));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,*(undefined4 *)(this + 0xe8));
}


// ===== 004b0aac  rive::Stroke::applyTo =====

/* rive::Stroke::applyTo(rive::RenderPaint*, float) */

void __thiscall rive::Stroke::applyTo(Stroke *this,RenderPaint *param_1,float param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,0);
  (**(code **)(*(long *)param_1 + 0x20))(*(undefined4 *)(this + 0xe0),param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1,*(undefined4 *)(this + 0xe4));
  (**(code **)(*(long *)param_1 + 0x28))(param_1,*(undefined4 *)(this + 0xe8));
  local_50 = (long *)0x0;
  (**(code **)(*(long *)param_1 + 0x48))(param_1,&local_50);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_50 + 1), iVar3 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  (**(code **)(**(long **)(this + 0xd0) + 0x18))(param_2,*(long **)(this + 0xd0),param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b0bb4  rive::Stroke::isVisible =====

/* rive::Stroke::isVisible() const */

bool __thiscall rive::Stroke::isVisible(Stroke *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0xe0);
  return (fVar1 != 0.0 && fVar1 < 0.0 == NAN(fVar1)) && this[0xa0] != (Stroke)0x0;
}


// ===== 004b0bcc  rive::Stroke::thicknessChanged =====

/* rive::Stroke::thicknessChanged() */

void __thiscall rive::Stroke::thicknessChanged(Stroke *this)

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


// ===== 004b0c30  rive::Stroke::capChanged =====

/* rive::Stroke::capChanged() */

void __thiscall rive::Stroke::capChanged(Stroke *this)

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


// ===== 004b0c94  rive::Stroke::joinChanged =====

/* rive::Stroke::joinChanged() */

void __thiscall rive::Stroke::joinChanged(Stroke *this)

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


// ===== 004b0cf8  rive::Stroke::update =====

/* rive::Stroke::update(rive::ComponentDirt) */

void __thiscall rive::Stroke::update(Stroke *this,uint param_2)

{
  ShapePaint::update();
  if ((param_2 >> 9 & 1) == 0) {
    return;
  }
  (**(code **)(**(long **)(this + 200) + 0x20))(*(undefined4 *)(this + 0xe0));
  (**(code **)(**(long **)(this + 200) + 0x30))(*(long **)(this + 200),*(undefined4 *)(this + 0xe4))
  ;
                    /* WARNING: Could not recover jumptable at 0x004b0d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 200) + 0x28))(*(long **)(this + 200),*(undefined4 *)(this + 0xe8))
  ;
  return;
}


// ===== 004b0d64  rive::Stroke::invalidateRendering =====

/* rive::Stroke::invalidateRendering() */

void __thiscall rive::Stroke::invalidateRendering(Stroke *this)

{
  uint uVar1;
  long lVar2;
  
  (**(code **)(**(long **)(this + 200) + 0x50))();
  if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
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


// ===== 004b0ddc  rive::Stroke::pickPath =====

/* rive::Stroke::pickPath(rive::ShapePaintContainer*) const */

void __thiscall rive::Stroke::pickPath(Stroke *this,ShapePaintContainer *param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (this[0xec] != (Stroke)0x0) {
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x004b0dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + lVar1))(param_1);
  return;
}


// ===== 004b0e00  rive::Stroke::buildDependencies =====

/* rive::Stroke::buildDependencies() */

void __thiscall rive::Stroke::buildDependencies(Stroke *this)

{
  ushort uVar1;
  Component *this_00;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x30);
  uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
  if (uVar1 < 0x201) {
    lVar2 = 400;
    if (0x88 < uVar1) {
      if (uVar1 == 0x89) {
        lVar2 = 0x138;
      }
      else if (uVar1 != 0x199) {
        return;
      }
      goto LAB_004b0e9c;
    }
    if (uVar1 == 1) goto LAB_004b0e9c;
    if (uVar1 != 3) {
      return;
    }
  }
  else if (uVar1 < 0x23c) {
    if ((uVar1 != 0x201) && (uVar1 != 0x23b)) {
      return;
    }
  }
  else if (((uVar1 != 0x23c) && (uVar1 != 0x23e)) && (uVar1 != 0x23f)) {
    return;
  }
  lVar2 = 0x178;
LAB_004b0e9c:
  this_00 = (Component *)(**(code **)(*(long *)((long)plVar3 + lVar2) + 8))((long)plVar3 + lVar2);
  Component::addDependent(this_00,(Component *)this);
  return;
}


// ===== 004b0ed0  FUN_004b0ed0 =====

void FUN_004b0ed0(void *param_1)

{
  FUN_004abcb0();
  operator_delete(param_1);
  return;
}


// ===== 004b0ef4  FUN_004b0ef4 =====

undefined8 FUN_004b0ef4(void)

{
  return 0x18;
}


// ===== 004b0efc  FUN_004b0efc =====

uint FUN_004b0efc(undefined8 param_1,uint param_2)

{
  return (uint)((param_2 & 0xffff) < 0x19) & 0x1200c00U >> (ulong)(param_2 & 0x1f);
}


// ===== 004b0f1c  FUN_004b0f1c =====

undefined8 FUN_004b0f1c(long param_1,ushort param_2,long *param_3)

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
  
  if (param_2 < 0x31) {
    if (param_2 == 0x2f) {
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
      *(undefined4 *)(param_1 + 0xe0) = uVar13;
      param_3[2] = (long)puVar8;
      return 1;
    }
    if (param_2 == 0x30) {
      uVar12 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004b1054;
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
LAB_004b1054:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xe4) = (int)uVar6;
      return 1;
    }
  }
  else {
    if (param_2 == 0x31) {
      uVar12 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004b1070;
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
LAB_004b1070:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0xe8) = (int)uVar6;
      return 1;
    }
    if (param_2 == 0x32) {
      lVar1 = *param_3;
      lVar2 = param_3[1];
      pcVar7 = (char *)param_3[2];
      if (0 < (lVar1 + lVar2) - (long)pcVar7) {
        param_3[2] = (long)(pcVar7 + 1);
        *(bool *)(param_1 + 0xec) = *pcVar7 == '\x01';
        return 1;
      }
      *(undefined1 *)(param_1 + 0xec) = 0;
      param_3[2] = lVar1 + lVar2;
      *(undefined1 *)(param_3 + 3) = 1;
      return 1;
    }
  }
  uVar5 = FUN_004abe74();
  return uVar5;
}


// ===== 004b10b4  FUN_004b10b4 =====

undefined8 FUN_004b10b4(void)

{
  return 0;
}


// ===== 004b10bc  FUN_004b10bc =====

void FUN_004b10bc(void)

{
  return;
}


// ===== 004b10c0  rive::StrokeBase::clone =====

/* rive::StrokeBase::clone() const */

long * __thiscall rive::StrokeBase::clone(StrokeBase *this)

{
  undefined4 uVar1;
  StrokeBase SVar2;
  StrokeBase SVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  
  plVar5 = (long *)operator_new(0xf0);
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
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  plVar5[6] = 0;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0xd] = 0;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  puVar4 = PTR_vtable_0067d3a0;
  plVar5[0x17] = 0;
  plVar5[0x16] = 0;
  plVar5[0x19] = 0;
  plVar5[0x18] = 0;
  *(undefined4 *)(plVar5 + 0x1c) = *(undefined4 *)(this + 0xe0);
  plVar5[0x15] = (long)(puVar4 + 0x140);
  SVar2 = this[0xec];
  uVar6 = *(undefined8 *)(this + 0xe4);
  *plVar5 = (long)(puVar4 + 0x10);
  SVar3 = this[0xa0];
  *(StrokeBase *)((long)plVar5 + 0xec) = SVar2;
  uVar1 = *(undefined4 *)(this + 0xa4);
  *(undefined8 *)((long)plVar5 + 0xe4) = uVar6;
  *(StrokeBase *)(plVar5 + 0x14) = SVar3;
  *(undefined4 *)((long)plVar5 + 0xa4) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 004b118c  FUN_004b118c =====

void FUN_004b118c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4b1190);
  (*pcVar1)();
}


// ===== 004b1190  FUN_004b1190 =====

void FUN_004b1190(void)

{
  return;
}


// ===== 004b1194  FUN_004b1194 =====

void FUN_004b1194(void)

{
  return;
}


// ===== 004b1198  FUN_004b1198 =====

void FUN_004b1198(void)

{
  return;
}


// ===== 004b119c  rive::StrokeEffect::invalidateEffectFromLocal =====

/* rive::StrokeEffect::invalidateEffectFromLocal() */

void __thiscall rive::StrokeEffect::invalidateEffectFromLocal(StrokeEffect *this)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(this + 0x18); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[3] + 0x10))();
  }
  plVar1 = (long *)(**(code **)(*(long *)this + 0x20))(this);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b11f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,this);
  return;
}


// ===== 004b1204  rive::StrokeEffect::invalidateEffect =====

/* rive::StrokeEffect::invalidateEffect(rive::PathProvider*) */

void __thiscall rive::StrokeEffect::invalidateEffect(StrokeEffect *this,PathProvider *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  if (param_1 == (PathProvider *)0x0) {
    for (plVar6 = *(long **)(this + 0x18); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      (**(code **)(*(long *)plVar6[3] + 0x10))();
    }
  }
  else {
    uVar2 = *(ulong *)(this + 0x10);
    if (uVar2 != 0) {
      uVar3 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
      uVar9 = NEON_cnt(uVar2,1);
      uVar8 = NEON_uaddlv(uVar9,1);
      uVar3 = ((ulong)param_1 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
      uVar4 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
      uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
      if (uVar4 < 2) {
        uVar5 = uVar2 - 1 & uVar3;
      }
      else {
        uVar5 = uVar3;
        if (uVar2 <= uVar3) {
          uVar5 = 0;
          if (uVar2 != 0) {
            uVar5 = uVar3 / uVar2;
          }
          uVar5 = uVar3 - uVar5 * uVar2;
        }
      }
      plVar6 = *(long **)(*(long *)(this + 8) + uVar5 * 8);
      if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if ((PathProvider *)plVar6[2] == param_1) {
                    /* WARNING: Could not recover jumptable at 0x004b1334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)plVar6[3] + 0x10))();
              return;
            }
          }
          else {
            if (uVar4 < 2) {
              uVar7 = uVar7 & uVar2 - 1;
            }
            else if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar5) {
              return;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 004b1338  rive::StrokeEffect::~StrokeEffect =====

/* rive::StrokeEffect::~StrokeEffect() */

void __thiscall rive::StrokeEffect::~StrokeEffect(StrokeEffect *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x18);
  *(undefined **)this = PTR_vtable_0067d748 + 0x10;
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)*(void **)(this + 0x18);
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 004b13c0  rive::StrokeEffect::~StrokeEffect =====

/* rive::StrokeEffect::~StrokeEffect() */

void __thiscall rive::StrokeEffect::~StrokeEffect(StrokeEffect *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4b13c4);
  (*pcVar1)();
}


// ===== 004b13c4  rive::StrokeEffect::effectPath =====

/* rive::StrokeEffect::effectPath(rive::PathProvider*) */

undefined8 __thiscall rive::StrokeEffect::effectPath(StrokeEffect *this,PathProvider *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(ulong *)(this + 0x10);
  if (uVar2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar9 = NEON_cnt(uVar2,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar3 = ((ulong)param_1 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar4 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    if (uVar4 < 2) {
      uVar5 = uVar2 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if ((PathProvider *)plVar6[2] == param_1) {
                    /* WARNING: Could not recover jumptable at 0x004b14b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar9 = (**(code **)(*(long *)plVar6[3] + 0x18))();
            return uVar9;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 004b14b8  rive::TargetEffect::onAddedClean =====

/* rive::TargetEffect::onAddedClean(rive::CoreContext*) */

undefined8 __thiscall rive::TargetEffect::onAddedClean(TargetEffect *this,CoreContext *param_1)

{
  uint uVar1;
  GroupEffect *this_00;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x30);
  if (plVar5 == (long *)0x0) {
LAB_004b15a0:
    uVar3 = 2;
  }
  else {
    uVar1 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((uVar1 & 0xffff) < 0x19 && (1 << (ulong)(uVar1 & 0x1f) & 0x1300000U) != 0) {
      lVar4 = 0xa8;
    }
    else {
      if ((uVar1 & 0xffff) != 0x285) goto LAB_004b15a0;
      lVar4 = 0xa0;
    }
    (*(code *)**(undefined8 **)((long)plVar5 + lVar4))((long)plVar5 + lVar4,this + 0x90);
    this_00 = (GroupEffect *)
              (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x88));
    if ((this_00 == (GroupEffect *)0x0) ||
       (uVar2 = (**(code **)(*(long *)this_00 + 0x18))(this_00,0x285), (uVar2 & 1) == 0)) {
      uVar3 = 1;
    }
    else {
      *(GroupEffect **)(this + 0xc0) = this_00;
      GroupEffect::addTargetEffect(this_00,this);
      for (plVar5 = *(long **)(this + 0xa8); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        (**(code **)(**(long **)(this + 0xc0) + 0xb8))(*(long **)(this + 0xc0),plVar5[3] + 8);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ===== 004b15bc  rive::TargetEffect::updateEffect =====

/* rive::TargetEffect::updateEffect(rive::PathProvider*, rive::ShapePaintPath const*,
   rive::ShapePaint const*) */

void rive::TargetEffect::updateEffect
               (PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  plVar2 = *(long **)(param_1 + 0xc0);
  if ((plVar2 != (long *)0x0) && (uVar4 = *(ulong *)(param_1 + 0xa0), uVar4 != 0)) {
    uVar5 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar10 = NEON_cnt(uVar4,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = ((ulong)param_2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x98) + uVar7 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      do {
        uVar8 = plVar3[1];
        if (uVar8 == uVar5) {
          if ((ShapePaintPath *)plVar3[2] == param_2) {
                    /* WARNING: Could not recover jumptable at 0x004b16b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0xa8))(plVar2,plVar3[3] + 8);
            return;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar8 = uVar8 & uVar4 - 1;
          }
          else if (uVar4 <= uVar8) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar8 / uVar4;
            }
            uVar8 = uVar8 - uVar1 * uVar4;
          }
          if (uVar8 != uVar7) {
            return;
          }
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


// ===== 004b16bc  rive::TargetEffect::updateEffect =====

/* non-virtual thunk to rive::TargetEffect::updateEffect(rive::PathProvider*, rive::ShapePaintPath
   const*, rive::ShapePaint const*) */

void __thiscall
rive::TargetEffect::updateEffect
          (TargetEffect *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  updateEffect((PathProvider *)(this + -0x90),(ShapePaintPath *)param_1,(ShapePaint *)param_2);
  return;
}


// ===== 004b16c4  rive::TargetEffect::effectPath =====

/* rive::TargetEffect::effectPath(rive::PathProvider*) */

long __thiscall rive::TargetEffect::effectPath(TargetEffect *this,PathProvider *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)(this + 0xc0);
  if ((lVar10 != 0) && (uVar4 = *(ulong *)(this + 0xa0), uVar4 != 0)) {
    uVar5 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar15 = NEON_cnt(uVar4,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar5 = ((ulong)param_1 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x98) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if ((PathProvider *)plVar8[2] == param_1) {
            lVar12 = *(long *)(lVar10 + 0xb0) - *(long *)(lVar10 + 0xa8);
            if (lVar12 == 0) {
              return 0;
            }
            lVar11 = plVar8[3];
            lVar12 = (lVar12 >> 3) + -1;
            do {
              plVar8 = *(long **)(*(long *)(lVar10 + 0xa8) + lVar12 * 8);
              lVar3 = (**(code **)(*plVar8 + 0x30))(plVar8,lVar11 + 8);
              lVar1 = 0;
              if (lVar12 != 0) {
                lVar1 = lVar12 + -1;
              }
              iVar13 = 3;
              if (lVar12 != 0) {
                iVar13 = 0;
              }
              if (lVar3 != 0) {
                iVar13 = 1;
                unaff_x19 = lVar3;
                lVar1 = lVar12;
              }
              lVar12 = lVar1;
            } while (iVar13 == 0);
            if (iVar13 == 3) {
              return 0;
            }
            return unaff_x19;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) {
            return 0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 004b183c  rive::TargetEffect::effectPath =====

/* non-virtual thunk to rive::TargetEffect::effectPath(rive::PathProvider*) */

void __thiscall rive::TargetEffect::effectPath(TargetEffect *this,PathProvider *param_1)

{
  effectPath(this + -0x90,param_1);
  return;
}


// ===== 004b1844  rive::TargetEffect::addPathProvider =====

/* rive::TargetEffect::addPathProvider(rive::PathProvider*) */

void __thiscall rive::TargetEffect::addPathProvider(TargetEffect *this,PathProvider *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  PathProvider *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = param_1;
  uVar3 = (**(code **)(*(long *)(this + 0x90) + 0x40))(this + 0x90);
  lVar4 = FUN_00494e8c(this + 0x98,param_1,&local_50);
  uVar6 = *(ulong *)(this + 0xa0);
  *(undefined8 *)(lVar4 + 0x18) = uVar3;
  if (uVar6 != 0) {
    uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar3 = NEON_cnt(uVar6,1);
    uVar12 = NEON_uaddlv(uVar3,1);
    uVar7 = ((ulong)param_1 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar8 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar12) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & uVar7;
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar7 / uVar6;
        }
        uVar9 = uVar7 - uVar9 * uVar6;
      }
    }
    plVar10 = *(long **)(*(long *)(this + 0x98) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar7) {
          if ((PathProvider *)plVar10[2] == param_1) {
            plVar5 = *(long **)(this + 0xc0);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0xb8))(plVar5,plVar10[3] + 8);
            }
            break;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar6 - 1;
          }
          else if (uVar6 <= uVar11) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar11 / uVar6;
            }
            uVar11 = uVar11 - uVar1 * uVar6;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004b19c8  rive::TargetEffect::addPathProvider =====

/* non-virtual thunk to rive::TargetEffect::addPathProvider(rive::PathProvider*) */

void __thiscall rive::TargetEffect::addPathProvider(TargetEffect *this,PathProvider *param_1)

{
  addPathProvider(this + -0x90,param_1);
  return;
}


// ===== 004b19d0  rive::TargetEffect::parentPaint =====

/* rive::TargetEffect::parentPaint() */

long * __thiscall rive::TargetEffect::parentPaint(TargetEffect *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 0xffff) < 0x19 && (1 << (ulong)(uVar1 & 0x1f) & 0x1300000U) != 0) {
      return plVar2 + 0x15;
    }
    if ((uVar1 & 0xffff) == 0x285) {
      return plVar2 + 0x14;
    }
  }
  return (long *)0x0;
}


// ===== 004b1a3c  rive::TargetEffect::parentPaint =====

/* non-virtual thunk to rive::TargetEffect::parentPaint() */

long * __thiscall rive::TargetEffect::parentPaint(TargetEffect *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + -0x60);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 0xffff) < 0x19 && (1 << (ulong)(uVar1 & 0x1f) & 0x1300000U) != 0) {
      return plVar2 + 0x15;
    }
    if ((uVar1 & 0xffff) == 0x285) {
      return plVar2 + 0x14;
    }
  }
  return (long *)0x0;
}


// ===== 004b1aa8  rive::TargetEffect::createEffectPath =====

/* rive::TargetEffect::createEffectPath() */

void rive::TargetEffect::createEffectPath(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0066fb58;
  puVar1[1] = 0;
  return;
}


// ===== 004b1acc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 004b1ad0  rive::TargetEffect::createEffectPath =====

/* non-virtual thunk to rive::TargetEffect::createEffectPath() */

void __thiscall rive::TargetEffect::createEffectPath(TargetEffect *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0066fb58;
  puVar1[1] = 0;
  return;
}


// ===== 004b1af4  rive::TargetEffect::invalidateEffect =====

/* rive::TargetEffect::invalidateEffect(rive::PathProvider*) */

void __thiscall rive::TargetEffect::invalidateEffect(TargetEffect *this,PathProvider *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  plVar2 = *(long **)(this + 0xc0);
  if (plVar2 != (long *)0x0) {
    if (param_1 == (PathProvider *)0x0) {
      for (plVar2 = *(long **)(this + 0xa8); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        (**(code **)(**(long **)(this + 0xc0) + 200))(*(long **)(this + 0xc0),plVar2[3] + 8);
      }
    }
    else {
      uVar3 = *(ulong *)(this + 0xa0);
      if (uVar3 != 0) {
        uVar4 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) *
                -0x622015f714c7d297;
        uVar10 = NEON_cnt(uVar3,1);
        uVar9 = NEON_uaddlv(uVar10,1);
        uVar4 = ((ulong)param_1 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
        uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
        uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
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
        plVar7 = *(long **)(*(long *)(this + 0x98) + uVar6 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          do {
            uVar8 = plVar7[1];
            if (uVar8 == uVar4) {
              if ((PathProvider *)plVar7[2] == param_1) {
                    /* WARNING: Could not recover jumptable at 0x004b1c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar2 + 200))(plVar2,plVar7[3] + 8);
                return;
              }
            }
            else {
              if (uVar5 < 2) {
                uVar8 = uVar8 & uVar3 - 1;
              }
              else if (uVar3 <= uVar8) {
                uVar1 = 0;
                if (uVar3 != 0) {
                  uVar1 = uVar8 / uVar3;
                }
                uVar8 = uVar8 - uVar1 * uVar3;
              }
              if (uVar8 != uVar6) {
                return;
              }
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
  }
  return;
}


// ===== 004b1c40  rive::TargetEffect::invalidateEffect =====

/* non-virtual thunk to rive::TargetEffect::invalidateEffect(rive::PathProvider*) */

void __thiscall rive::TargetEffect::invalidateEffect(TargetEffect *this,PathProvider *param_1)

{
  invalidateEffect(this + -0x90,param_1);
  return;
}


// ===== 004b1c48  FUN_004b1c48 =====

void FUN_004b1c48(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x15];
  param_1[0x12] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)param_1[0x15];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = (void *)param_1[0x13];
  param_1[0x13] = 0;
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


// ===== 004b1d1c  FUN_004b1d1c =====

void FUN_004b1d1c(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x15];
  param_1[0x12] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)param_1[0x15];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = (void *)param_1[0x13];
  param_1[0x13] = 0;
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


// ===== 004b1dec  FUN_004b1dec =====

undefined8 FUN_004b1dec(void)

{
  return 0x284;
}


// ===== 004b1df4  FUN_004b1df4 =====

bool FUN_004b1df4(undefined8 param_1,short param_2)

{
  return param_2 == 0x284 || param_2 == 10;
}


// ===== 004b1e08  FUN_004b1e08 =====

void FUN_004b1e08(long param_1,short param_2,long *param_3)

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
        goto LAB_004b1f68;
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
LAB_004b1f68:
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
        goto LAB_004b1f4c;
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
LAB_004b1f4c:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x28) = (int)uVar6;
  }
  else {
    if (param_2 != 0x39a) {
      uVar5 = 0;
      goto LAB_004b1fb0;
    }
    uVar12 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar8) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004b1fa0;
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
LAB_004b1fa0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004b1fb0:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 004b1fd4  FUN_004b1fd4 =====

void FUN_004b1fd4(void)

{
  return;
}


// ===== 004b1fd8  FUN_004b1fd8 =====

void FUN_004b1fd8(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)param_1[3];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[-5];
  param_1[-0x12] = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[-4] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[-9];
  if (pvVar2 != (void *)0x0) {
    param_1[-8] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  param_1[-0x12] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + -0x10) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[-0xe]);
  return;
}


// ===== 004b20ac  FUN_004b20ac =====

void FUN_004b20ac(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)param_1[3];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[-5];
  param_1[-0x12] = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[-4] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[-9];
  if (pvVar2 != (void *)0x0) {
    param_1[-8] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  param_1[-0x12] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + -0x10) & 1) != 0) {
    operator_delete((void *)param_1[-0xe]);
  }
  operator_delete(param_1 + -0x12);
  return;
}


// ===== 004b2180  rive::TargetEffectBase::clone =====

/* rive::TargetEffectBase::clone() const */

long * __thiscall rive::TargetEffectBase::clone(TargetEffectBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(200);
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
  plVar3[0x14] = 0;
  plVar3[0x13] = 0;
  puVar2 = PTR_vtable_0067d380;
  *(undefined4 *)(plVar3 + 0x17) = 0x3f800000;
  plVar3[0x16] = 0;
  plVar3[0x15] = 0;
  plVar3[0x18] = 0;
  plVar3[0x12] = (long)(puVar2 + 0xe8);
  uVar1 = *(undefined4 *)(this + 0x88);
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 0x11) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004b222c  FUN_004b222c =====

void FUN_004b222c(long *param_1)

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


// ===== 004b2298  rive::TrimEffectPath::invalidateEffect =====

/* rive::TrimEffectPath::invalidateEffect() */

void __thiscall rive::TrimEffectPath::invalidateEffect(TrimEffectPath *this)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(this + 0x60);
  puVar5 = *(undefined8 **)(this + 0x68);
  this[0x50] = (TrimEffectPath)0x0;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x30);
  this[8] = (TrimEffectPath)0x1;
  while (puVar5 != puVar1) {
    puVar5 = puVar5 + -1;
    pvVar4 = (void *)*puVar5;
    if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pvVar4), iVar2 == 1)) {
      pvVar3 = *(void **)((long)pvVar4 + 0x20);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar4 + 0x28) = pvVar3;
        operator_delete(pvVar3);
      }
      pvVar3 = *(void **)((long)pvVar4 + 8);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar4 + 0x10) = pvVar3;
        operator_delete(pvVar3);
      }
      operator_delete(pvVar4);
    }
  }
  *(undefined8 **)(this + 0x68) = puVar1;
  return;
}


// ===== 004b2338  rive::TrimPath::onAddedClean =====

/* rive::TrimPath::onAddedClean(rive::CoreContext*) */

undefined8 rive::TrimPath::onAddedClean(CoreContext *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
LAB_004b23b0:
    uVar2 = 2;
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((uVar1 & 0xffff) < 0x19 && (1 << (ulong)(uVar1 & 0x1f) & 0x1300000U) != 0) {
      lVar3 = 0xa8;
    }
    else {
      if ((uVar1 & 0xffff) != 0x285) goto LAB_004b23b0;
      lVar3 = 0xa0;
    }
    (*(code *)**(undefined8 **)((long)plVar4 + lVar3))((long)plVar4 + lVar3,param_1 + 0x98);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 004b23c0  rive::TrimPath::trimPath =====

/* rive::TrimPath::trimPath(rive::ShapePaintPath*,
   std::__ndk1::vector<rive::rcp<rive::ContourMeasure>,
   std::__ndk1::allocator<rive::rcp<rive::ContourMeasure> > >&, rive::RawPath const*,
   rive::ShapePaintType) */

void __thiscall
rive::TrimPath::trimPath(TrimPath *this,long param_1,long *param_2,undefined8 *param_3,int param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  void *pvVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  uint *puVar17;
  float *pfVar18;
  uint *puVar19;
  float *pfVar20;
  float *pfVar21;
  long lVar22;
  ContourMeasure *pCVar23;
  uint *puVar24;
  int iVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint *puVar31;
  uint *puVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float *local_148;
  float *local_140;
  float *local_138;
  uint *local_130;
  uint *puStack_128;
  uint *local_120;
  void *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  long local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a0;
  
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  fVar33 = fmodf(*(float *)(this + 0x90),1.0);
  fVar33 = fmodf(fVar33 + 1.0,1.0);
  puVar27 = (undefined8 *)*param_2;
  puVar11 = (undefined8 *)param_2[1];
  if (puVar27 == puVar11) {
    local_f0 = param_3[3];
    local_e0 = param_3[4];
    uStack_e8 = *param_3;
    uStack_d8 = param_3[1];
    local_f8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c0 = (void *)0x0;
    puStack_128 = (uint *)0x0;
    local_130 = (uint *)0x0;
    local_118 = (void *)0x0;
    local_120 = (uint *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    local_c8 = 0x40000000;
    local_d0 = uStack_e8;
    if (local_e0 - local_f0 != 0) {
      FUN_0047ac1c(&local_c0,local_e0 - local_f0);
    }
    while (ContourMeasureIter::next(), pfVar6 = local_148, local_148 != (float *)0x0) {
      puVar27 = (undefined8 *)param_2[1];
      if (puVar27 < (undefined8 *)param_2[2]) {
        FUN_00340fb0(1,local_148);
        puVar11 = puVar27 + 1;
        *puVar27 = pfVar6;
      }
      else {
        puVar11 = (undefined8 *)FUN_0047d0d4(param_2,local_148);
      }
      param_2[1] = (long)puVar11;
      iVar9 = FUN_00340fe0(0xffffffff,pfVar6);
      if (iVar9 == 1) {
        pvVar12 = *(void **)(pfVar6 + 8);
        if (pvVar12 != (void *)0x0) {
          *(void **)(pfVar6 + 10) = pvVar12;
          operator_delete(pvVar12);
        }
        pvVar12 = *(void **)(pfVar6 + 2);
        if (pvVar12 != (void *)0x0) {
          *(void **)(pfVar6 + 4) = pvVar12;
          operator_delete(pvVar12);
        }
        operator_delete(pfVar6);
      }
    }
    if (local_c0 != (void *)0x0) {
      operator_delete(local_c0);
    }
    if (local_118 != (void *)0x0) {
      operator_delete(local_118);
    }
    if (local_130 != (uint *)0x0) {
      operator_delete(local_130);
    }
    puVar27 = (undefined8 *)*param_2;
    puVar11 = (undefined8 *)param_2[1];
  }
  if (this[0x94] != (TrimPath)0x1) {
    for (; puVar27 != puVar11; puVar27 = puVar27 + 1) {
      pCVar23 = (ContourMeasure *)*puVar27;
      if (pCVar23 != (ContourMeasure *)0x0) {
        FUN_00340fb0(1,pCVar23);
      }
      fVar40 = *(float *)(pCVar23 + 0x38);
      bVar8 = true;
      fVar37 = fVar40 * (fVar33 + *(float *)(this + 0x88));
      fVar39 = fVar40 * (fVar33 + *(float *)(this + 0x8c));
      fVar38 = fVar37;
      if (fVar37 <= fVar39) {
        fVar38 = fVar39;
        fVar39 = fVar37;
      }
      fVar37 = 0.0;
      if (fVar39 < fVar40 == (NAN(fVar39) || NAN(fVar40))) {
        fVar37 = fVar40;
      }
      fVar39 = fVar39 - fVar37;
      for (fVar38 = fVar38 - fVar37;
          ContourMeasure::getSegment(pCVar23,fVar39,fVar38,(RawPath *)(param_1 + 0x10),bVar8),
          fVar38 != fVar40 && fVar38 < fVar40 == (NAN(fVar38) || NAN(fVar40));
          fVar38 = fVar38 - fVar40) {
        fVar39 = 0.0;
        bVar8 = pCVar23[0x3c] == (ContourMeasure)0x0;
      }
      if ((*(float *)(this + 0x88) == 0.0) && (*(float *)(this + 0x8c) == 1.0)) {
        if ((param_5 == 1) || (pCVar23[0x3c] != (ContourMeasure)0x0)) {
LAB_004b26a8:
          RawPath::close((RawPath *)(param_1 + 0x10));
        }
      }
      else if (param_5 == 1) goto LAB_004b26a8;
      iVar9 = FUN_00340fe0(0xffffffff,pCVar23);
      if (iVar9 == 1) {
        pvVar12 = *(void **)(pCVar23 + 0x20);
        if (pvVar12 != (void *)0x0) {
          *(void **)(pCVar23 + 0x28) = pvVar12;
          operator_delete(pvVar12);
        }
        pvVar12 = *(void **)(pCVar23 + 8);
        if (pvVar12 != (void *)0x0) {
          *(void **)(pCVar23 + 0x10) = pvVar12;
          operator_delete(pvVar12);
        }
        operator_delete(pCVar23);
      }
    }
    goto LAB_004b2d3c;
  }
  fVar39 = 0.0;
  puVar30 = puVar11;
  if (puVar27 != puVar11) {
    do {
      pvVar12 = (void *)*puVar27;
      if (pvVar12 != (void *)0x0) {
        FUN_00340fb0(1,pvVar12);
      }
      fVar38 = *(float *)((long)pvVar12 + 0x38);
      iVar9 = FUN_00340fe0(0xffffffff,pvVar12);
      if (iVar9 == 1) {
        pvVar13 = *(void **)((long)pvVar12 + 0x20);
        if (pvVar13 != (void *)0x0) {
          *(void **)((long)pvVar12 + 0x28) = pvVar13;
          operator_delete(pvVar13);
        }
        pvVar13 = *(void **)((long)pvVar12 + 8);
        if (pvVar13 != (void *)0x0) {
          *(void **)((long)pvVar12 + 0x10) = pvVar13;
          operator_delete(pvVar13);
        }
        operator_delete(pvVar12);
      }
      fVar39 = fVar39 + fVar38;
      puVar27 = puVar27 + 1;
    } while (puVar27 != puVar11);
    puVar11 = (undefined8 *)param_2[1];
    puVar30 = (undefined8 *)*param_2;
  }
  local_130 = (uint *)0x0;
  puStack_128 = (uint *)0x0;
  local_120 = (uint *)0x0;
  local_148 = (float *)0x0;
  local_140 = (float *)0x0;
  local_138 = (float *)0x0;
  fVar37 = fVar39 * (fVar33 + *(float *)(this + 0x88));
  fVar33 = fVar39 * (fVar33 + *(float *)(this + 0x8c));
  fVar38 = fVar37;
  if (fVar37 <= fVar33) {
    fVar38 = fVar33;
    fVar33 = fVar37;
  }
  if (fVar33 == fVar39 || fVar33 < fVar39 != (NAN(fVar33) || NAN(fVar39))) {
    fVar39 = 0.0;
  }
  fVar38 = fVar38 - fVar39;
  if (fVar38 == 0.0 || fVar38 < 0.0 != NAN(fVar38)) goto LAB_004b2d3c;
  fVar33 = fVar33 - fVar39;
  iVar9 = 0;
  do {
    iVar10 = 0;
    iVar25 = (int)((ulong)((long)puVar11 - (long)puVar30) >> 3);
    if (iVar25 != 0) {
      iVar10 = iVar9 / iVar25;
    }
    uVar1 = iVar9 - iVar10 * iVar25;
    pvVar12 = *(void **)(*param_2 + (ulong)uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      FUN_00340fb0(1,pvVar12);
    }
    puVar32 = puStack_128;
    puVar24 = local_130;
    fVar39 = *(float *)((long)pvVar12 + 0x38);
    if (fVar39 <= fVar33) {
      fVar33 = fVar33 - fVar39;
LAB_004b2af4:
      iVar10 = FUN_00340fe0(0xffffffff,pvVar12);
      if (iVar10 == 1) {
        pvVar13 = *(void **)((long)pvVar12 + 0x20);
        if (pvVar13 != (void *)0x0) {
          *(void **)((long)pvVar12 + 0x28) = pvVar13;
          operator_delete(pvVar13);
        }
        pvVar13 = *(void **)((long)pvVar12 + 8);
        if (pvVar13 != (void *)0x0) {
          *(void **)((long)pvVar12 + 0x10) = pvVar13;
          operator_delete(pvVar13);
        }
        operator_delete(pvVar12);
      }
    }
    else {
      if (puStack_128 < local_120) {
        puVar31 = puStack_128 + 1;
        *puStack_128 = uVar1;
      }
      else {
        lVar28 = (long)puStack_128 - (long)local_130;
        lVar22 = lVar28 >> 2;
        uVar26 = lVar22 + 1;
        if (uVar26 >> 0x3e != 0) {
          FUN_00330fec(&local_130);
          goto LAB_004b2d90;
        }
        uVar14 = (long)local_120 - (long)local_130 >> 1;
        if (uVar14 <= uVar26) {
          uVar14 = uVar26;
        }
        if (0x7ffffffffffffffb < (ulong)((long)local_120 - (long)local_130)) {
          uVar14 = 0x3fffffffffffffff;
        }
        if (uVar14 == 0) {
          pvVar13 = (void *)0x0;
        }
        else {
          if (uVar14 >> 0x3e != 0) goto LAB_004b2d84;
          pvVar13 = operator_new(uVar14 << 2);
        }
        local_130 = (uint *)((long)pvVar13 + lVar22 * 4);
        puVar31 = local_130 + 1;
        *local_130 = uVar1;
        if ((long)puVar32 - (long)puVar24 != 0) {
          uVar26 = ((long)puVar32 - (long)puVar24) - 4;
          if ((0x1b < uVar26) && (0x1f < (ulong)((long)puVar32 + (-lVar28 - (long)pvVar13)))) {
            puVar17 = local_130 + -4;
            puVar19 = puVar32 + -4;
            uVar26 = (uVar26 >> 2) + 1;
            uVar16 = uVar26 & 0x7ffffffffffffff8;
            puVar32 = puVar32 + -uVar16;
            uVar29 = uVar16;
            do {
              puVar4 = puVar19 + -2;
              uVar36 = *(undefined8 *)(puVar19 + -4);
              uVar35 = *(undefined8 *)(puVar19 + 2);
              uVar34 = *(undefined8 *)puVar19;
              uVar29 = uVar29 - 8;
              puVar19 = puVar19 + -8;
              *(undefined8 *)(puVar17 + -2) = *(undefined8 *)puVar4;
              *(undefined8 *)(puVar17 + -4) = uVar36;
              *(undefined8 *)(puVar17 + 2) = uVar35;
              *(undefined8 *)puVar17 = uVar34;
              puVar17 = puVar17 + -8;
            } while (uVar29 != 0);
            local_130 = local_130 + -uVar16;
            if (uVar26 == uVar16) goto LAB_004b2890;
          }
          do {
            puVar32 = puVar32 + -1;
            local_130 = local_130 + -1;
            *local_130 = *puVar32;
          } while (puVar32 != puVar24);
        }
LAB_004b2890:
        local_120 = (uint *)((long)pvVar13 + uVar14 * 4);
        if (puVar24 != (uint *)0x0) {
          operator_delete(puVar24);
        }
      }
      pfVar21 = local_140;
      pfVar6 = local_148;
      puStack_128 = puVar31;
      if (local_140 < local_138) {
        pfVar15 = local_140 + 1;
        *local_140 = fVar33;
        pfVar21 = local_138;
      }
      else {
        lVar22 = (long)local_140 - (long)local_148;
        lVar28 = lVar22 >> 2;
        uVar26 = lVar28 + 1;
        if (uVar26 >> 0x3e != 0) goto LAB_004b2d7c;
        uVar14 = (long)local_138 - (long)local_148 >> 1;
        if (uVar14 <= uVar26) {
          uVar14 = uVar26;
        }
        if (0x7ffffffffffffffb < (ulong)((long)local_138 - (long)local_148)) {
          uVar14 = 0x3fffffffffffffff;
        }
        if (uVar14 == 0) {
          pvVar13 = (void *)0x0;
        }
        else {
          if (uVar14 >> 0x3e != 0) goto LAB_004b2d84;
          pvVar13 = operator_new(uVar14 << 2);
        }
        local_148 = (float *)((long)pvVar13 + lVar28 * 4);
        pfVar15 = local_148 + 1;
        *local_148 = fVar33;
        if ((long)pfVar21 - (long)pfVar6 != 0) {
          uVar26 = ((long)pfVar21 - (long)pfVar6) - 4;
          if ((0x1b < uVar26) && (0x1f < (ulong)((long)pfVar21 + (-lVar22 - (long)pvVar13)))) {
            pfVar18 = local_148 + -4;
            pfVar20 = pfVar21 + -4;
            uVar26 = (uVar26 >> 2) + 1;
            uVar16 = uVar26 & 0x7ffffffffffffff8;
            pfVar21 = pfVar21 + -uVar16;
            uVar29 = uVar16;
            do {
              pfVar5 = pfVar20 + -2;
              uVar36 = *(undefined8 *)(pfVar20 + -4);
              uVar35 = *(undefined8 *)(pfVar20 + 2);
              uVar34 = *(undefined8 *)pfVar20;
              uVar29 = uVar29 - 8;
              pfVar20 = pfVar20 + -8;
              *(undefined8 *)(pfVar18 + -2) = *(undefined8 *)pfVar5;
              *(undefined8 *)(pfVar18 + -4) = uVar36;
              *(undefined8 *)(pfVar18 + 2) = uVar35;
              *(undefined8 *)pfVar18 = uVar34;
              pfVar18 = pfVar18 + -8;
            } while (uVar29 != 0);
            local_148 = local_148 + -uVar16;
            if (uVar26 == uVar16) goto LAB_004b29a4;
          }
          do {
            pfVar21 = pfVar21 + -1;
            local_148 = local_148 + -1;
            *local_148 = *pfVar21;
          } while (pfVar21 != pfVar6);
        }
LAB_004b29a4:
        pfVar21 = (float *)((long)pvVar13 + uVar14 * 4);
        local_138 = pfVar21;
        if (pfVar6 != (float *)0x0) {
          operator_delete(pfVar6);
        }
      }
      pfVar6 = local_148;
      if (pfVar15 < pfVar21) {
        pfVar21 = pfVar15 + 1;
        *pfVar15 = fVar38;
      }
      else {
        lVar28 = (long)pfVar15 - (long)local_148;
        lVar22 = lVar28 >> 2;
        uVar26 = lVar22 + 1;
        local_140 = pfVar15;
        if (uVar26 >> 0x3e != 0) {
LAB_004b2d7c:
                    /* WARNING: Subroutine does not return */
          FUN_0033dc4c(&local_148);
        }
        uVar14 = (long)pfVar21 - (long)local_148 >> 1;
        if (uVar14 <= uVar26) {
          uVar14 = uVar26;
        }
        if (0x7ffffffffffffffb < (ulong)((long)pfVar21 - (long)local_148)) {
          uVar14 = 0x3fffffffffffffff;
        }
        if (uVar14 == 0) {
          pvVar13 = (void *)0x0;
        }
        else {
          if (uVar14 >> 0x3e != 0) {
LAB_004b2d84:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          pvVar13 = operator_new(uVar14 << 2);
        }
        local_148 = (float *)((long)pvVar13 + lVar22 * 4);
        pfVar21 = local_148 + 1;
        *local_148 = fVar38;
        if ((long)pfVar15 - (long)pfVar6 != 0) {
          uVar26 = ((long)pfVar15 - (long)pfVar6) - 4;
          if ((0x1b < uVar26) && (0x1f < (ulong)((long)pfVar15 + (-lVar28 - (long)pvVar13)))) {
            pfVar18 = local_148 + -4;
            pfVar20 = pfVar15 + -4;
            uVar26 = (uVar26 >> 2) + 1;
            uVar16 = uVar26 & 0x7ffffffffffffff8;
            pfVar15 = pfVar15 + -uVar16;
            uVar29 = uVar16;
            do {
              pfVar5 = pfVar20 + -2;
              uVar36 = *(undefined8 *)(pfVar20 + -4);
              uVar35 = *(undefined8 *)(pfVar20 + 2);
              uVar34 = *(undefined8 *)pfVar20;
              uVar29 = uVar29 - 8;
              pfVar20 = pfVar20 + -8;
              *(undefined8 *)(pfVar18 + -2) = *(undefined8 *)pfVar5;
              *(undefined8 *)(pfVar18 + -4) = uVar36;
              *(undefined8 *)(pfVar18 + 2) = uVar35;
              *(undefined8 *)pfVar18 = uVar34;
              pfVar18 = pfVar18 + -8;
            } while (uVar29 != 0);
            local_148 = local_148 + -uVar16;
            if (uVar26 == uVar16) goto LAB_004b2ac0;
          }
          do {
            pfVar15 = pfVar15 + -1;
            local_148 = local_148 + -1;
            *local_148 = *pfVar15;
          } while (pfVar15 != pfVar6);
        }
LAB_004b2ac0:
        local_138 = (float *)((long)pvVar13 + uVar14 * 4);
        if (pfVar6 != (float *)0x0) {
          operator_delete(pfVar6);
        }
      }
      fVar33 = 0.0;
      local_140 = pfVar21;
      if (pvVar12 != (void *)0x0) goto LAB_004b2af4;
    }
    iVar9 = iVar9 + 1;
    fVar38 = fVar38 - fVar39;
  } while (fVar38 != 0.0 && fVar38 < 0.0 == NAN(fVar38));
  puVar24 = puStack_128;
  if (puStack_128 != local_130) {
    uVar1 = *local_130;
    uVar26 = (ulong)(int)uVar1;
    pCVar23 = *(ContourMeasure **)(*param_2 + uVar26 * 8);
    if (pCVar23 != (ContourMeasure *)0x0) {
      FUN_00340fb0(1,pCVar23);
    }
    fVar39 = *local_148;
    fVar33 = local_148[1];
    if (uVar1 == 0xffffffff) {
      bVar8 = pCVar23[0x3c] == (ContourMeasure)0x0;
    }
    else {
      bVar8 = true;
    }
    fVar38 = *(float *)(pCVar23 + 0x38);
    ContourMeasure::getSegment(pCVar23,fVar39,fVar33,(RawPath *)(param_1 + 0x10),bVar8);
    if ((fVar39 == 0.0) &&
       (fVar33 = fVar33 - fVar39, fVar33 < fVar38 == (NAN(fVar33) || NAN(fVar38)))) {
      if ((param_5 == 1) || (pCVar23[0x3c] != (ContourMeasure)0x0)) {
LAB_004b2bc0:
        RawPath::close((RawPath *)(param_1 + 0x10));
      }
    }
    else if (param_5 == 1) goto LAB_004b2bc0;
    iVar9 = FUN_00340fe0(0xffffffff,pCVar23);
    if (iVar9 == 1) {
      pvVar12 = *(void **)(pCVar23 + 0x20);
      if (pvVar12 != (void *)0x0) {
        *(void **)(pCVar23 + 0x28) = pvVar12;
        operator_delete(pvVar12);
      }
      pvVar12 = *(void **)(pCVar23 + 8);
      if (pvVar12 != (void *)0x0) {
        *(void **)(pCVar23 + 0x10) = pvVar12;
        operator_delete(pvVar12);
      }
      operator_delete(pCVar23);
    }
    uVar14 = (long)puStack_128 - (long)local_130 >> 2;
    puVar24 = local_130;
    if (1 < uVar14) {
      lVar28 = -1;
      uVar29 = 1;
      do {
        uVar16 = (uVar14 & lVar28 >> 0x3f) + lVar28;
        uVar2 = 0;
        if (uVar14 != 0) {
          uVar2 = uVar16 / uVar14;
        }
        lVar22 = uVar16 - uVar2 * uVar14;
        uVar1 = local_130[lVar22];
        pCVar23 = *(ContourMeasure **)(*param_2 + (long)(int)uVar1 * 8);
        if (pCVar23 != (ContourMeasure *)0x0) {
          FUN_00340fb0(1,pCVar23);
        }
        fVar38 = *(float *)(pCVar23 + 0x38);
        fVar39 = local_148[lVar22 * 2];
        fVar33 = (local_148 + lVar22 * 2)[1];
        if ((uint)uVar26 == uVar1) {
          bVar8 = pCVar23[0x3c] == (ContourMeasure)0x0;
        }
        else {
          bVar8 = true;
        }
        ContourMeasure::getSegment(pCVar23,fVar39,fVar33,(RawPath *)(param_1 + 0x10),bVar8);
        fVar33 = fVar33 - fVar39;
        bVar8 = true;
        bVar7 = false;
        if (fVar39 == 0.0) {
          bVar8 = false;
          bVar7 = true;
          if (!NAN(fVar33) && !NAN(fVar38)) {
            bVar8 = fVar33 < fVar38;
            bVar7 = false;
          }
        }
        if (bVar8 == bVar7) {
          if ((param_5 == 1) || (pCVar23[0x3c] != (ContourMeasure)0x0)) goto LAB_004b2ce4;
        }
        else if (param_5 == 1) {
LAB_004b2ce4:
          RawPath::close((RawPath *)(param_1 + 0x10));
        }
        iVar9 = FUN_00340fe0(0xffffffff,pCVar23);
        if (iVar9 == 1) {
          pvVar12 = *(void **)(pCVar23 + 0x20);
          if (pvVar12 != (void *)0x0) {
            *(void **)(pCVar23 + 0x28) = pvVar12;
            operator_delete(pvVar12);
          }
          pvVar12 = *(void **)(pCVar23 + 8);
          if (pvVar12 != (void *)0x0) {
            *(void **)(pCVar23 + 0x10) = pvVar12;
            operator_delete(pvVar12);
          }
          operator_delete(pCVar23);
        }
        uVar29 = uVar29 + 1;
        lVar28 = lVar28 + -1;
        uVar26 = (ulong)uVar1;
        uVar14 = (long)puStack_128 - (long)local_130 >> 2;
        puVar24 = local_130;
      } while (uVar29 < uVar14);
    }
  }
  if (local_148 != (float *)0x0) {
    operator_delete(local_148);
  }
  if (puVar24 != (uint *)0x0) {
    operator_delete(puVar24);
  }
LAB_004b2d3c:
  if (*(long *)(lVar3 + 0x28) == local_a0) {
    return;
  }
LAB_004b2d90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b2d94  rive::TrimPath::startChanged =====

/* rive::TrimPath::startChanged() */

void __thiscall rive::TrimPath::startChanged(TrimPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b2d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x98) + 0x38))();
  return;
}


// ===== 004b2da0  rive::TrimPath::endChanged =====

/* rive::TrimPath::endChanged() */

void __thiscall rive::TrimPath::endChanged(TrimPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b2da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x98) + 0x38))();
  return;
}


// ===== 004b2dac  rive::TrimPath::offsetChanged =====

/* rive::TrimPath::offsetChanged() */

void __thiscall rive::TrimPath::offsetChanged(TrimPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b2db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x98) + 0x38))();
  return;
}


// ===== 004b2db8  rive::TrimPath::modeValueChanged =====

/* rive::TrimPath::modeValueChanged() */

void __thiscall rive::TrimPath::modeValueChanged(TrimPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b2dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x98) + 0x38))();
  return;
}


// ===== 004b2dc4  rive::TrimPath::onAddedDirty =====

/* rive::TrimPath::onAddedDirty(rive::CoreContext*) */

long __thiscall rive::TrimPath::onAddedDirty(TrimPath *this,CoreContext *param_1)

{
  TrimPath *pTVar1;
  long *plVar2;
  long lVar3;
  
  pTVar1 = (TrimPath *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pTVar1 = (TrimPath *)(param_1 + -0x998);
  }
  *(TrimPath **)(this + 0x40) = pTVar1;
  *(TrimPath **)(this + 0x80) = pTVar1;
  if (pTVar1 != this) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar3 = *plVar2;
    *(long **)(this + 0x30) = plVar2;
    (**(code **)(lVar3 + 0x90))(plVar2,this);
  }
  return (ulong)(1 < (byte)this[0x94] - 1) << 1;
}


// ===== 004b2e3c  rive::TrimPath::updateEffect =====

/* rive::TrimPath::updateEffect(rive::PathProvider*, rive::ShapePaintPath const*, rive::ShapePaint
   const*) */

void __thiscall
rive::TrimPath::updateEffect
          (TrimPath *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  ShapePaintPath SVar1;
  ulong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar5 = *(ulong *)(this + 0xa8);
  if (uVar5 != 0) {
    uVar6 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar13 = NEON_cnt(uVar5,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = ((ulong)param_1 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar5 - 1 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar10 = *(long **)(*(long *)(this + 0xa0) + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar6) {
          if ((PathProvider *)plVar10[2] == param_1) {
            plVar10 = (long *)plVar10[3];
            pcVar4 = (char *)(**(code **)(*plVar10 + 0x18))(plVar10);
            if (*(long *)(pcVar4 + 8) != 0 && *pcVar4 == '\0') {
              return;
            }
            SVar1 = param_2[0x50];
            uVar3 = *(undefined4 *)(param_2 + 0x54);
            pcVar4[0x48] = '\0';
            *(ShapePaintPath *)(pcVar4 + 0x50) = SVar1;
            *(undefined4 *)(pcVar4 + 0x54) = uVar3;
            lVar9 = *(long *)param_3;
            *(undefined8 *)(pcVar4 + 0x30) = *(undefined8 *)(pcVar4 + 0x28);
            *(undefined8 *)(pcVar4 + 0x18) = *(undefined8 *)(pcVar4 + 0x10);
            *pcVar4 = '\x01';
            uVar3 = (**(code **)(lVar9 + 0xf8))(param_3);
            trimPath(this,pcVar4,plVar10 + 0xc,param_2 + 0x10,uVar3);
            return;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar5 - 1;
          }
          else if (uVar5 <= uVar11) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar2 * uVar5;
          }
          if (uVar11 != uVar8) {
            return;
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return;
}


// ===== 004b2fdc  rive::TrimPath::updateEffect =====

/* non-virtual thunk to rive::TrimPath::updateEffect(rive::PathProvider*, rive::ShapePaintPath
   const*, rive::ShapePaint const*) */

void __thiscall
rive::TrimPath::updateEffect
          (TrimPath *this,PathProvider *param_1,ShapePaintPath *param_2,ShapePaint *param_3)

{
  updateEffect(this + -0x98,param_1,param_2,param_3);
  return;
}


// ===== 004b2fe4  rive::TrimPath::parentPaint =====

/* rive::TrimPath::parentPaint() */

long * __thiscall rive::TrimPath::parentPaint(TrimPath *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 0xffff) < 0x19 && (1 << (ulong)(uVar1 & 0x1f) & 0x1300000U) != 0) {
      return plVar2 + 0x15;
    }
    if ((uVar1 & 0xffff) == 0x285) {
      return plVar2 + 0x14;
    }
  }
  return (long *)0x0;
}


// ===== 004b3050  rive::TrimPath::parentPaint =====

/* non-virtual thunk to rive::TrimPath::parentPaint() */

long * __thiscall rive::TrimPath::parentPaint(TrimPath *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + -0x68);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 0xffff) < 0x19 && (1 << (ulong)(uVar1 & 0x1f) & 0x1300000U) != 0) {
      return plVar2 + 0x15;
    }
    if ((uVar1 & 0xffff) == 0x285) {
      return plVar2 + 0x14;
    }
  }
  return (long *)0x0;
}


// ===== 004b30bc  rive::TrimPath::createEffectPath =====

/* rive::TrimPath::createEffectPath() */

long * rive::TrimPath::createEffectPath(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x78);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  puVar1 = PTR_vtable_0067d750;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xe] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar2 + 1),true);
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  return plVar2;
}


// ===== 004b311c  FUN_004b311c =====

void FUN_004b311c(long *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1 + 0xc;
  *param_1 = (long)(PTR_vtable_0067d750 + 0x10);
  FUN_003dc3a8(&local_30);
  pvVar3 = (void *)param_1[6];
  if (pvVar3 != (void *)0x0) {
    param_1[7] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[3];
  if (pvVar3 != (void *)0x0) {
    param_1[4] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = (long *)param_1[2];
  if ((plVar4 == (long *)0x0) || (iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar2 != 1)) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x004b31c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b31e8  FUN_004b31e8 =====

void FUN_004b31e8(long *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1 + 0xc;
  *param_1 = (long)(PTR_vtable_0067d750 + 0x10);
  FUN_003dc3a8(&local_40);
  pvVar3 = (void *)param_1[6];
  if (pvVar3 != (void *)0x0) {
    param_1[7] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[3];
  if (pvVar3 != (void *)0x0) {
    param_1[4] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  plVar4 = (long *)param_1[2];
  if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar4 + 1), iVar2 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b32a4  FUN_004b32a4 =====

long FUN_004b32a4(long param_1)

{
  return param_1 + 8;
}


// ===== 004b32ac  rive::TrimPath::createEffectPath =====

/* non-virtual thunk to rive::TrimPath::createEffectPath() */

long * __thiscall rive::TrimPath::createEffectPath(TrimPath *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x78);
  plVar2[1] = 0;
  *plVar2 = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  puVar1 = PTR_vtable_0067d750;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xe] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(plVar2 + 1),true);
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  return plVar2;
}


// ===== 004b330c  FUN_004b330c =====

void FUN_004b330c(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x16];
  param_1[0x13] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)param_1[0x16];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = (void *)param_1[0x14];
  param_1[0x14] = 0;
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


// ===== 004b33e0  FUN_004b33e0 =====

void FUN_004b33e0(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x16];
  param_1[0x13] = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)param_1[0x16];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = (void *)param_1[0x14];
  param_1[0x14] = 0;
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


// ===== 004b34b0  FUN_004b34b0 =====

undefined8 FUN_004b34b0(void)

{
  return 0x2f;
}


// ===== 004b34b8  FUN_004b34b8 =====

bool FUN_004b34b8(undefined8 param_1,short param_2)

{
  return param_2 == 0x2f || param_2 == 10;
}


// ===== 004b34cc  FUN_004b34cc =====

undefined8 FUN_004b34cc(long param_1,ushort param_2,long *param_3)

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
  if (param_2 < 0x73) {
    if (param_2 == 4) {
      pcVar11 = (char *)param_3[2];
      do {
        if ((char *)(*param_3 + param_3[1]) <= pcVar11) {
          param_3[2] = *param_3 + param_3[1];
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004b36a8;
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
LAB_004b36a8:
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
        if (param_2 == 0x72) {
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
        goto LAB_004b3750;
      }
      uVar14 = 0;
      uVar6 = 0;
      pbVar10 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_004b36f8;
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
LAB_004b36f8:
        uVar6 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x28) = (int)uVar6;
    }
  }
  else {
    if (param_2 == 0x73) {
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
      goto LAB_004b3750;
    }
    if (param_2 == 0x74) {
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
      goto LAB_004b3750;
    }
    if (param_2 != 0x75) goto LAB_004b3750;
    uVar14 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004b36e0;
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
LAB_004b36e0:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x94) = (int)uVar6;
  }
  uVar5 = 1;
LAB_004b3750:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b3778  FUN_004b3778 =====

void FUN_004b3778(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)param_1[3];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[-6];
  param_1[-0x13] = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[-5] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[-10];
  if (pvVar2 != (void *)0x0) {
    param_1[-9] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  param_1[-0x13] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + -0x11) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[-0xf]);
  return;
}


// ===== 004b384c  FUN_004b384c =====

void FUN_004b384c(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[3];
  *param_1 = (long)(PTR_vtable_0067d748 + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    puVar1 = (undefined8 *)param_1[3];
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  pvVar2 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[-6];
  param_1[-0x13] = (long)(PTR_vtable_0067cee0 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[-5] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[-10];
  if (pvVar2 != (void *)0x0) {
    param_1[-9] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  param_1[-0x13] = (long)&PTR_FUN_00678650;
  if ((*(byte *)(param_1 + -0x11) & 1) != 0) {
    operator_delete((void *)param_1[-0xf]);
  }
  operator_delete(param_1 + -0x13);
  return;
}


// ===== 004b3920  rive::TrimPathBase::clone =====

/* rive::TrimPathBase::clone() const */

long * __thiscall rive::TrimPathBase::clone(TrimPathBase *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  
  plVar3 = (long *)operator_new(200);
  plVar3[0x18] = 0;
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
  puVar2 = PTR_vtable_0067d3c0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  lVar5 = *(long *)(this + 0x88);
  *(undefined4 *)(plVar3 + 0x18) = 0x3f800000;
  plVar3[0x11] = lVar5;
  uVar4 = *(undefined4 *)(this + 0x90);
  plVar3[0x13] = (long)(puVar2 + 0xe8);
  uVar1 = *(undefined4 *)(this + 0x94);
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 0x12) = uVar4;
  *(undefined4 *)((long)plVar3 + 0x94) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar3 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(this + 0x28);
  return plVar3;
}


// ===== 004b39d8  FUN_004b39d8 =====

void FUN_004b39d8(long *param_1)

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


// ===== 004b3a44  FUN_004b3a44 =====

void FUN_004b3a44(void)

{
  return;
}


// ===== 004b3a48  FUN_004b3a48 =====

void FUN_004b3a48(void)

{
  return;
}


// ===== 004b3a4c  FUN_004b3a4c =====

void FUN_004b3a4c(void)

{
  return;
}


// ===== 004b3a50  FUN_004b3a50 =====

void FUN_004b3a50(void)

{
  return;
}


// ===== 004b3a54  rive::ParametricPath::measureLayout =====

/* rive::ParametricPath::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

float rive::ParametricPath::measureLayout(float param_1,long param_2,char param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 3.4028235e+38;
  if (param_3 != '\0') {
    fVar1 = param_1;
  }
  fVar2 = *(float *)(param_2 + 0x1a8);
  if (fVar1 <= *(float *)(param_2 + 0x1a8)) {
    fVar2 = fVar1;
  }
  return fVar2;
}


// ===== 004b3a88  rive::ParametricPath::measureLayout =====

/* non-virtual thunk to rive::ParametricPath::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

float __thiscall
rive::ParametricPath::measureLayout(float param_1,ParametricPath *this,char param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 3.4028235e+38;
  if (param_3 != '\0') {
    fVar1 = param_1;
  }
  fVar2 = *(float *)(this + 0xe0);
  if (fVar1 <= *(float *)(this + 0xe0)) {
    fVar2 = fVar1;
  }
  return fVar2;
}


// ===== 004b3ab8  rive::ParametricPath::controlSize =====

/* rive::ParametricPath::controlSize(rive::Vec2D, rive::LayoutScaleType, rive::LayoutScaleType,
   rive::LayoutDirection) */

void rive::ParametricPath::controlSize(float param_1,float param_2,Component *param_3)

{
  if (*(float *)(param_3 + 0x1a8) != param_1) {
    *(float *)(param_3 + 0x1a8) = param_1;
    (**(code **)(*(long *)param_3 + 0x1f0))(param_3);
  }
  if (*(float *)(param_3 + 0x1ac) != param_2) {
    *(float *)(param_3 + 0x1ac) = param_2;
    (**(code **)(*(long *)param_3 + 0x1f8))(param_3);
  }
  Component::addDirt(param_3,0x80,1);
                    /* WARNING: Could not recover jumptable at 0x004b3b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_3 + 0x1e0))(param_3,0);
  return;
}


// ===== 004b3b40  rive::ParametricPath::controlSize =====

/* non-virtual thunk to rive::ParametricPath::controlSize(rive::Vec2D, rive::LayoutScaleType,
   rive::LayoutScaleType, rive::LayoutDirection) */

void __thiscall rive::ParametricPath::controlSize(float param_1,float param_2,ParametricPath *this)

{
  Component *pCVar1;
  
  pCVar1 = (Component *)(this + -200);
  if (*(float *)(this + 0xe0) != param_1) {
    *(float *)(this + 0xe0) = param_1;
    (**(code **)(*(long *)(this + -200) + 0x1f0))(pCVar1);
  }
  if (*(float *)(this + 0xe4) != param_2) {
    *(float *)(this + 0xe4) = param_2;
    (**(code **)(*(long *)(this + -200) + 0x1f8))(pCVar1);
  }
  Component::addDirt(pCVar1,0x80,1);
                    /* WARNING: Could not recover jumptable at 0x004b3bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pCVar1 + 0x1e0))(pCVar1,0);
  return;
}


// ===== 004b3bcc  rive::ParametricPath::markPathDirty =====

/* rive::ParametricPath::markPathDirty(bool) */

void __thiscall rive::ParametricPath::markPathDirty(ParametricPath *this,bool param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar3 = *(long *)(this + 0x80);
    uVar1 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
  }
  if (*(Shape **)(this + 0x140) != (Shape *)0x0) {
    Shape::pathChanged(*(Shape **)(this + 0x140));
  }
  if (param_1) {
    for (plVar4 = *(long **)(this + 0x30); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,0x199);
      if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004b3cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x2e0))(plVar4,0);
        return;
      }
      uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,2);
      if ((uVar2 & 1) != 0) {
        uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,3);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (plVar4 != *(long **)(this + 0x140)) {
          return;
        }
      }
    }
  }
  return;
}


// ===== 004b3cc8  rive::ParametricPath::widthChanged =====

/* rive::ParametricPath::widthChanged() */

void __thiscall rive::ParametricPath::widthChanged(ParametricPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b3cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b3cd8  rive::ParametricPath::heightChanged =====

/* rive::ParametricPath::heightChanged() */

void __thiscall rive::ParametricPath::heightChanged(ParametricPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b3ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b3ce8  rive::ParametricPath::originXChanged =====

/* rive::ParametricPath::originXChanged() */

void __thiscall rive::ParametricPath::originXChanged(ParametricPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b3cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b3cf8  rive::ParametricPath::originYChanged =====

/* rive::ParametricPath::originYChanged() */

void __thiscall rive::ParametricPath::originYChanged(ParametricPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b3d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b3d08  FUN_004b3d08 =====

void FUN_004b3d08(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004b3d2c  FUN_004b3d2c =====

undefined8 FUN_004b3d2c(void)

{
  return 0xf;
}


// ===== 004b3d34  FUN_004b3d34 =====

bool FUN_004b3d34(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x27) && ((1L << ((ulong)param_2 & 0x3f) & 0x4000009c04U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 004b3d70  rive::Path::computeIdealControlPointDistance =====

/* rive::Path::computeIdealControlPointDistance(rive::Vec2D const&, rive::Vec2D const&, float) */

undefined4 rive::Path::computeIdealControlPointDistance(Vec2D *param_1,Vec2D *param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)NEON_fmadd(*(undefined4 *)param_1,*(float *)(param_2 + 4),
                            -(*(float *)(param_1 + 4) * *(float *)param_2));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)param_1,*(float *)param_2,
                            *(float *)(param_1 + 4) * *(float *)(param_2 + 4));
  fVar2 = atan2f(fVar3,fVar2);
  fVar3 = ABS(fVar2);
  if (1.5707964 <= fVar3) {
    fVar2 = sinf(fVar3);
    fVar2 = 2.0 - fVar2;
  }
  else {
    fVar2 = cosf(fVar2);
    fVar2 = fVar2 + 1.0;
  }
  fVar3 = tanf(3.1415927 / (6.2831855 / fVar3 + 6.2831855 / fVar3));
  uVar1 = NEON_fminnm(param_3,fVar2 * fVar3 * 1.3333334 * param_3);
  return uVar1;
}


// ===== 004b3e30  rive::Path::deformer =====

/* rive::Path::deformer() const */

undefined8 __thiscall rive::Path::deformer(Path *this)

{
  if (*(long *)(this + 0x140) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x140) + 0x370);
  }
  return 0;
}


// ===== 004b3e48  rive::Path::onAddedClean =====

/* rive::Path::onAddedClean(rive::CoreContext*) */

bool rive::Path::onAddedClean(CoreContext *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  CoreContext *this;
  
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
  this = param_1;
  do {
    this = *(CoreContext **)(this + 0x30);
    if (this == (CoreContext *)0x0) goto LAB_004b3ebc;
    uVar2 = (**(code **)(*(long *)this + 0x18))(this,3);
  } while ((uVar2 & 1) == 0);
  *(CoreContext **)(param_1 + 0x140) = this;
  Shape::addPath((Shape *)this,(Path *)param_1);
LAB_004b3ebc:
  return this == (CoreContext *)0x0;
}


// ===== 004b3ed0  rive::Path::buildDependencies =====

/* rive::Path::buildDependencies() */

void __thiscall rive::Path::buildDependencies(Path *this)

{
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
    return;
  }
  return;
}


// ===== 004b3ee4  rive::Path::addVertex =====

/* rive::Path::addVertex(rive::PathVertex*) */

void __thiscall rive::Path::addVertex(Path *this,PathVertex *param_1)

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
  
  puVar10 = *(undefined8 **)(this + 0x150);
  if (puVar10 < *(undefined8 **)(this + 0x158)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_004b4024;
  }
  puVar9 = *(undefined8 **)(this + 0x148);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_004b4048();
LAB_004b4044:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x158) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004b4044;
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
      if (uVar6 == uVar7) goto LAB_004b4010;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x148);
  }
LAB_004b4010:
  *(undefined8 **)(this + 0x148) = puVar4;
  *(undefined8 **)(this + 0x150) = puVar13;
  *(void **)(this + 0x158) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_004b4024:
  *(undefined8 **)(this + 0x150) = puVar13;
  return;
}


// ===== 004b4048  FUN_004b4048 =====

void FUN_004b4048(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004b405c  rive::Path::popVertex =====

/* rive::Path::popVertex() */

void __thiscall rive::Path::popVertex(Path *this)

{
  *(long *)(this + 0x150) = *(long *)(this + 0x150) + -8;
  return;
}


// ===== 004b406c  rive::Path::addFlags =====

/* rive::Path::addFlags(rive::PathFlags) */

void __thiscall rive::Path::addFlags(Path *this,byte param_2)

{
  this[0x161] = (Path)((byte)this[0x161] | param_2);
  return;
}


// ===== 004b407c  rive::Path::isFlagged =====

/* rive::Path::isFlagged(rive::PathFlags) const */

bool __thiscall rive::Path::isFlagged(Path *this,byte param_2)

{
  return (param_2 & (byte)this[0x161]) != 0;
}


// ===== 004b408c  rive::Path::canDeferPathUpdate =====

/* rive::Path::canDeferPathUpdate() */

bool __thiscall rive::Path::canDeferPathUpdate(Path *this)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  lVar7 = *(long *)(this + 0x140);
  if ((lVar7 != 0) && (*(float *)(lVar7 + 0xe8) == 0.0)) {
    puVar1 = *(undefined8 **)(lVar7 + 400);
    bVar2 = *(byte *)(lVar7 + 0x180);
    for (puVar9 = *(undefined8 **)(lVar7 + 0x188); puVar9 != puVar1; puVar9 = puVar9 + 1) {
      bVar3 = (**(code **)(*(long *)*puVar9 + 0xd8))();
      bVar2 = bVar3 | bVar2;
    }
    if ((bVar2 & 0x28) == 0) {
      puVar1 = *(undefined8 **)(lVar7 + 0x70);
      for (puVar9 = *(undefined8 **)(lVar7 + 0x68); puVar9 != puVar1; puVar9 = puVar9 + 1) {
        plVar8 = (long *)*puVar9;
        uVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,0x10);
        if (((uVar5 & 1) != 0) && (plVar8[0x37] != 0)) {
          return false;
        }
      }
      lVar7 = *(long *)(this + 0x140);
      puVar1 = *(undefined8 **)(lVar7 + 400);
      uVar6 = (uint)*(byte *)(lVar7 + 0x180);
      for (puVar9 = *(undefined8 **)(lVar7 + 0x188); puVar9 != puVar1; puVar9 = puVar9 + 1) {
        uVar4 = (**(code **)(*(long *)*puVar9 + 0xd8))();
        uVar6 = uVar4 | uVar6;
      }
      if ((uVar6 >> 4 & 1) == 0) {
        return ((byte)this[0x161] & 0x18) == 0;
      }
    }
  }
  return false;
}


// ===== 004b4188  rive::Path::pathTransform =====

/* rive::Path::pathTransform() const */

Path * __thiscall rive::Path::pathTransform(Path *this)

{
  return this + 0xa4;
}


// ===== 004b4190  rive::Path::localBounds =====

/* rive::Path::localBounds() const */

void __thiscall rive::Path::localBounds(Path *this)

{
  RawPath::preciseBounds((RawPath *)(this + 0x168));
  return;
}


// ===== 004b4198  rive::Path::buildPath =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Path::buildPath(rive::RawPath&) const */

void __thiscall rive::Path::buildPath(Path *this,RawPath *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  undefined4 *puVar17;
  float *pfVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar33;
  ulong uVar31;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float local_24c;
  float fStack_248;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  float fStack_168;
  float fStack_164;
  ulong local_160;
  void *local_150;
  void *local_128;
  void *local_120;
  void *local_108;
  void *local_100;
  void *local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 local_d0;
  long lStack_c8;
  float local_c0;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  uVar8 = (**(code **)(*(long *)this + 0x1e8))();
  lVar19 = *(long *)(this + 0x150) - (long)*(undefined8 **)(this + 0x148);
  uVar16 = lVar19 >> 3;
  if (1 < uVar16) {
    plVar21 = (long *)**(undefined8 **)(this + 0x148);
    uVar9 = (**(code **)(*plVar21 + 0x18))(plVar21,0x24);
    puVar1 = PTR_vtable_0067d3d8;
    puVar22 = PTR_vtable_0067cee0;
    puVar23 = PTR_vtable_0067ced8;
    if ((uVar9 & 1) == 0) {
      FUN_004b4efc(&local_170,plVar21);
      local_e0 = (void *)0x0;
      local_d8 = (void *)0x0;
      puVar23 = puVar23 + 0x10;
      local_e8 = (void *)0x0;
      pvVar4 = (void *)plVar21[0x11];
      uVar11 = plVar21[0x12] - (long)pvVar4;
      if (uVar11 != 0) {
        if ((long)uVar11 < 0) {
LAB_004b4ef4:
          local_d8 = (void *)0x0;
          local_e0 = (void *)0x0;
          local_e8 = (void *)0x0;
          local_170 = puVar23;
          FUN_003ad240();
          goto LAB_004b4ef8;
        }
        local_170 = puVar23;
        local_e8 = operator_new(uVar11);
        pvVar2 = (void *)((long)local_e8 + uVar11);
        local_e0 = local_e8;
        local_d8 = pvVar2;
        memcpy(local_e8,pvVar4,uVar11);
        local_e0 = pvVar2;
      }
      fVar34 = *(float *)(plVar21 + 0x16);
      lStack_c8 = plVar21[0x15];
      local_170 = puVar1 + 0x10;
      local_c0 = fVar34;
      local_d0 = plVar21[0x14];
      if (fVar34 == 0.0) {
        pfVar15 = (float *)&local_d0;
        pfVar18 = (float *)((long)&local_d0 + 4);
        if (lStack_c8 != 0) {
          pfVar15 = (float *)(lStack_c8 + 0x90);
          pfVar18 = (float *)(lStack_c8 + 0x94);
        }
        fVar35 = *pfVar15;
        fVar37 = *pfVar18;
        RawPath::move(fVar35,fVar37,param_1);
        puVar22 = PTR_vtable_0067cee0;
        puVar23 = PTR_vtable_0067ced8;
        fVar40 = fVar37;
        fVar43 = fVar35;
      }
      else {
        pfVar15 = (float *)((long)&local_d0 + 4);
        if (lStack_c8 != 0) {
          pfVar15 = (float *)(lStack_c8 + 0x94);
        }
        plVar21 = *(long **)(*(long *)(this + 0x148) + lVar19 + -8);
        fVar39 = *pfVar15;
        pfVar15 = (float *)&local_d0;
        if (lStack_c8 != 0) {
          pfVar15 = (float *)(lStack_c8 + 0x90);
        }
        fVar41 = *pfVar15;
        uVar11 = (**(code **)(*plVar21 + 0x18))(plVar21,0x24);
        puVar22 = PTR_vtable_0067cee0;
        puVar23 = PTR_vtable_0067ced8;
        lVar19 = plVar21[0x15];
        if ((uVar11 & 1) == 0) {
          pfVar15 = (float *)(plVar21 + 0x14);
          pfVar18 = (float *)((long)plVar21 + 0xa4);
          if (lVar19 != 0) {
            pfVar15 = (float *)(lVar19 + 0x90);
            pfVar18 = (float *)(lVar19 + 0x94);
          }
        }
        else {
          if (lVar19 == 0) {
            if (*(char *)((long)plVar21 + 0xb1) == '\0') {
              (**(code **)(*plVar21 + 0xc0))(plVar21);
              *(undefined1 *)((long)plVar21 + 0xb1) = 1;
            }
            pfVar15 = (float *)((long)plVar21 + 0xbc);
          }
          else {
            pfVar15 = (float *)(lVar19 + 0xb0);
          }
          pfVar18 = pfVar15 + 1;
        }
        fVar40 = *pfVar18 - fVar39;
        fVar43 = *pfVar15 - fVar41;
        fVar37 = (float)NEON_fmadd(fVar43,fVar43,fVar40 * fVar40);
        fVar37 = SQRT(fVar37);
        if (fVar37 != 0.0 && fVar37 < 0.0 == NAN(fVar37)) {
          fVar43 = fVar43 / fVar37;
          fVar40 = fVar40 / fVar37;
        }
        plVar21 = *(long **)(*(long *)(this + 0x148) + 8);
        uVar11 = (**(code **)(*plVar21 + 0x18))(plVar21,0x24);
        lVar19 = plVar21[0x15];
        if ((uVar11 & 1) == 0) {
          pfVar15 = (float *)(plVar21 + 0x14);
          pfVar18 = (float *)((long)plVar21 + 0xa4);
          if (lVar19 != 0) {
            pfVar15 = (float *)(lVar19 + 0x90);
            pfVar18 = (float *)(lVar19 + 0x94);
          }
        }
        else {
          if (lVar19 == 0) {
            if ((char)plVar21[0x16] == '\0') {
              (**(code **)(*plVar21 + 0xb8))(plVar21);
              *(undefined1 *)(plVar21 + 0x16) = 1;
            }
            pfVar15 = (float *)((long)plVar21 + 0xb4);
          }
          else {
            pfVar15 = (float *)(lVar19 + 0xa8);
          }
          pfVar18 = pfVar15 + 1;
        }
        fVar25 = *pfVar18 - fVar39;
        fVar27 = *pfVar15 - fVar41;
        fVar35 = (float)NEON_fmadd(fVar27,fVar27,fVar25 * fVar25);
        fVar35 = SQRT(fVar35);
        if (fVar35 != 0.0 && fVar35 < 0.0 == NAN(fVar35)) {
          fVar27 = fVar27 / fVar35;
          fVar25 = fVar25 / fVar35;
        }
        uVar30 = 0;
        uVar33 = 0;
        fVar29 = fVar34;
        if (fVar34 == 0.0 || fVar34 < 0.0 != NAN(fVar34)) {
          fVar29 = -fVar34;
        }
        if (fVar35 * 0.5 <= fVar29) {
          fVar29 = fVar35 * 0.5;
        }
        if (fVar37 * 0.5 <= fVar29) {
          fVar29 = fVar37 * 0.5;
        }
        fVar37 = (float)NEON_fmadd(fVar43,fVar25,-(fVar40 * fVar27));
        fVar35 = (float)NEON_fmadd(fVar43,fVar27,fVar25 * fVar40);
        fVar37 = atan2f(fVar37,fVar35);
        fVar35 = ABS(fVar37);
        if (1.5707964 <= fVar35) {
          fVar26 = sinf(fVar35);
          fVar26 = 2.0 - fVar26;
        }
        else {
          fVar26 = cosf(fVar37);
          fVar26 = fVar26 + 1.0;
        }
        fVar35 = tanf(3.1415927 / (6.2831855 / fVar35 + 6.2831855 / fVar35));
        fVar37 = (float)NEON_fmadd(fVar40,fVar29,fVar39);
        fVar26 = (float)NEON_fminnm(fVar29,fVar26 * fVar29 * fVar35 * 1.3333334);
        fVar35 = (float)NEON_fmadd(fVar43,fVar29,fVar41);
        RawPath::move(param_1);
        fVar26 = fVar29 - fVar26;
        fVar44 = (float)NEON_fmadd(fVar43,fVar26,fVar41);
        fVar42 = (float)NEON_fmadd(fVar40,fVar26,fVar39);
        uVar11 = CONCAT44(fVar40,fVar42);
        fVar28 = (float)NEON_fmadd(fVar27,fVar26,fVar41);
        uVar12 = CONCAT44(uVar30,fVar28);
        fVar26 = (float)NEON_fmadd(fVar25,fVar26,fVar39);
        uVar31 = CONCAT44(uVar33,fVar26);
        fVar43 = (float)NEON_fmadd(fVar27,fVar29,fVar41);
        fVar40 = (float)NEON_fmadd(fVar25,fVar29,fVar39);
        if (fVar34 < 0.0) {
          fVar34 = (float)NEON_fmadd(fVar35 - fVar43,fVar39 - fVar40,
                                     -((fVar37 - fVar40) * (fVar41 - fVar43)));
          fVar39 = (float)NEON_fmadd(fVar35 - fVar43,fVar41 - fVar43,
                                     (fVar37 - fVar40) * (fVar39 - fVar40));
          fVar34 = atan2f(fVar34,fVar39);
          sincosf(fVar34 + fVar34,&fStack_194,&local_198);
          fVar39 = (float)NEON_fmadd(fVar44 - fVar35,fStack_194,(fVar42 - fVar37) * local_198);
          fVar44 = (float)NEON_fmadd(fVar44 - fVar35,local_198,-((fVar42 - fVar37) * fStack_194));
          fVar44 = fVar35 + fVar44;
          sincosf(fVar34 * -2.0,&fStack_19c,&local_1a0);
          fVar41 = (float)NEON_fmadd(fVar28 - fVar43,local_1a0,-((fVar26 - fVar40) * fStack_19c));
          fVar34 = (float)NEON_fmadd(fVar28 - fVar43,fStack_19c,(fVar26 - fVar40) * local_1a0);
          uVar11 = (ulong)(uint)(fVar37 + fVar39);
          uVar12 = (ulong)(uint)(fVar43 + fVar41);
          uVar31 = (ulong)(uint)(fVar40 + fVar34);
        }
        RawPath::cubic(fVar44,uVar11,uVar12,uVar31,fVar43,fVar40,param_1);
      }
      local_170 = puVar23 + 0x10;
      if (local_e8 != (void *)0x0) {
        local_e0 = local_e8;
        operator_delete(local_e8);
      }
      local_170 = puVar22 + 0x10;
      if (local_108 != (void *)0x0) {
        local_100 = local_108;
        operator_delete(local_108);
      }
      if (local_128 != (void *)0x0) {
        local_120 = local_128;
        operator_delete(local_128);
      }
      local_170._0_4_ = 9.507238e-39;
      local_170._4_4_ = 0.0;
      local_24c = fVar37;
      fStack_248 = fVar35;
      if ((local_160 & 1) != 0) {
        operator_delete(local_150);
      }
    }
    else {
      lVar19 = plVar21[0x15];
      if (lVar19 == 0) {
        if ((char)plVar21[0x16] == '\0') {
          (**(code **)(*plVar21 + 0xb8))(plVar21);
          fVar35 = *(float *)((long)plVar21 + 0xb4);
          fVar37 = *(float *)(plVar21 + 0x17);
          lVar19 = plVar21[0x15];
          *(undefined1 *)(plVar21 + 0x16) = 1;
          if (lVar19 != 0) {
            pfVar15 = (float *)(lVar19 + 0xb0);
            goto LAB_004b476c;
          }
        }
        else {
          fVar35 = *(float *)((long)plVar21 + 0xb4);
          fVar37 = *(float *)(plVar21 + 0x17);
        }
        if (*(char *)((long)plVar21 + 0xb1) == '\0') {
          (**(code **)(*plVar21 + 0xc0))(plVar21);
          lVar19 = plVar21[0x15];
          *(undefined1 *)((long)plVar21 + 0xb1) = 1;
        }
        else {
          lVar19 = 0;
        }
        pfVar15 = (float *)((long)plVar21 + 0xbc);
      }
      else {
        fVar35 = *(float *)(lVar19 + 0xa8);
        fVar37 = *(float *)(lVar19 + 0xac);
        pfVar15 = (float *)(lVar19 + 0xb0);
      }
LAB_004b476c:
      pfVar18 = (float *)(plVar21 + 0x14);
      pfVar6 = (float *)((long)plVar21 + 0xa4);
      if (lVar19 != 0) {
        pfVar18 = (float *)(lVar19 + 0x90);
        pfVar6 = (float *)(lVar19 + 0x94);
      }
      fVar43 = *pfVar15;
      fVar40 = pfVar15[1];
      fStack_248 = *pfVar18;
      local_24c = *pfVar6;
      RawPath::move(param_1);
    }
    lVar19 = 0;
    uVar11 = uVar16;
    if (uVar16 < 3) {
      uVar11 = 2;
    }
    puVar23 = puVar23 + 0x10;
    puVar1 = puVar1 + 0x10;
    uVar20 = uVar9;
    do {
      plVar21 = *(long **)(*(long *)(this + 0x148) + lVar19 * 8 + 8);
      uVar10 = (**(code **)(*plVar21 + 0x18))(plVar21,0x24);
      if ((uVar10 & 1) == 0) {
        FUN_004b4efc(&local_170,plVar21);
        local_e0 = (void *)0x0;
        local_d8 = (void *)0x0;
        local_e8 = (void *)0x0;
        pvVar4 = (void *)plVar21[0x11];
        uVar12 = plVar21[0x12] - (long)pvVar4;
        if (uVar12 != 0) {
          if ((long)uVar12 < 0) goto LAB_004b4ef4;
          local_170 = puVar23;
          local_e8 = operator_new(uVar12);
          pvVar2 = (void *)((long)local_e8 + uVar12);
          local_e0 = local_e8;
          local_d8 = pvVar2;
          memcpy(local_e8,pvVar4,uVar12);
          local_e0 = pvVar2;
        }
        puVar24 = PTR_vtable_0067ced8;
        local_d0 = plVar21[0x14];
        lStack_c8 = plVar21[0x15];
        fVar34 = *(float *)(plVar21 + 0x16);
        pfVar15 = (float *)&local_d0;
        pfVar18 = (float *)((long)&local_d0 + 4);
        if (lStack_c8 != 0) {
          pfVar15 = (float *)(lStack_c8 + 0x90);
          pfVar18 = (float *)(lStack_c8 + 0x94);
        }
        fVar41 = *pfVar15;
        fVar39 = *pfVar18;
        local_c0 = fVar34;
        local_170 = puVar1;
        if (fVar34 == 0.0) {
          if ((uVar20 & 1) == 0) {
            RawPath::line(fVar41,fVar39,param_1);
            fVar40 = fVar39;
            fVar43 = fVar41;
          }
          else {
            RawPath::cubic(fVar43,fVar40,fVar41,fVar39,fVar41,fVar39);
            fVar40 = fVar39;
            fVar43 = fVar41;
          }
        }
        else {
          plVar21 = *(long **)(*(long *)(this + 0x148) + lVar19 * 8);
          uVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x24);
          puVar24 = PTR_vtable_0067ced8;
          lVar14 = plVar21[0x15];
          if ((uVar12 & 1) == 0) {
            pfVar15 = (float *)(plVar21 + 0x14);
            pfVar18 = (float *)((long)plVar21 + 0xa4);
            if (lVar14 != 0) {
              pfVar15 = (float *)(lVar14 + 0x90);
              pfVar18 = (float *)(lVar14 + 0x94);
            }
          }
          else {
            if (lVar14 == 0) {
              if (*(char *)((long)plVar21 + 0xb1) == '\0') {
                (**(code **)(*plVar21 + 0xc0))(plVar21);
                *(undefined1 *)((long)plVar21 + 0xb1) = 1;
              }
              pfVar15 = (float *)((long)plVar21 + 0xbc);
            }
            else {
              pfVar15 = (float *)(lVar14 + 0xb0);
            }
            pfVar18 = pfVar15 + 1;
          }
          fVar25 = *pfVar18 - fVar39;
          fVar27 = *pfVar15 - fVar41;
          fVar29 = (float)NEON_fmadd(fVar27,fVar27,fVar25 * fVar25);
          fVar29 = SQRT(fVar29);
          if (fVar29 != 0.0 && fVar29 < 0.0 == NAN(fVar29)) {
            fVar27 = fVar27 / fVar29;
            fVar25 = fVar25 / fVar29;
          }
          uVar12 = 0;
          if (uVar16 != 0) {
            uVar12 = (lVar19 + 2U) / uVar16;
          }
          plVar21 = *(long **)(*(long *)(this + 0x148) + ((lVar19 + 2U) - uVar12 * uVar16) * 8);
          uVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x24);
          lVar14 = plVar21[0x15];
          if ((uVar12 & 1) == 0) {
            pfVar15 = (float *)(plVar21 + 0x14);
            pfVar18 = (float *)((long)plVar21 + 0xa4);
            if (lVar14 != 0) {
              pfVar15 = (float *)(lVar14 + 0x90);
              pfVar18 = (float *)(lVar14 + 0x94);
            }
          }
          else {
            if (lVar14 == 0) {
              if ((char)plVar21[0x16] == '\0') {
                (**(code **)(*plVar21 + 0xb8))(plVar21);
                *(undefined1 *)(plVar21 + 0x16) = 1;
              }
              pfVar15 = (float *)((long)plVar21 + 0xb4);
            }
            else {
              pfVar15 = (float *)(lVar14 + 0xa8);
            }
            pfVar18 = pfVar15 + 1;
          }
          fVar42 = *pfVar18 - fVar39;
          fVar44 = *pfVar15 - fVar41;
          fVar26 = (float)NEON_fmadd(fVar44,fVar44,fVar42 * fVar42);
          fVar26 = SQRT(fVar26);
          if (fVar26 != 0.0 && fVar26 < 0.0 == NAN(fVar26)) {
            fVar44 = fVar44 / fVar26;
            fVar42 = fVar42 / fVar26;
          }
          fVar28 = fVar34;
          if (fVar34 == 0.0 || fVar34 < 0.0 != NAN(fVar34)) {
            fVar28 = -fVar34;
          }
          if (fVar26 * 0.5 <= fVar28) {
            fVar28 = fVar26 * 0.5;
          }
          if (fVar29 * 0.5 <= fVar28) {
            fVar28 = fVar29 * 0.5;
          }
          fVar29 = (float)NEON_fmadd(fVar27,fVar42,-(fVar25 * fVar44));
          fVar26 = (float)NEON_fmadd(fVar27,fVar44,fVar42 * fVar25);
          fVar29 = atan2f(fVar29,fVar26);
          fVar26 = ABS(fVar29);
          if (1.5707964 <= fVar26) {
            fVar29 = sinf(fVar26);
            fVar29 = 2.0 - fVar29;
          }
          else {
            fVar29 = cosf(fVar29);
            fVar29 = fVar29 + 1.0;
          }
          fVar26 = tanf(3.1415927 / (6.2831855 / fVar26 + 6.2831855 / fVar26));
          fVar38 = (float)NEON_fmadd(fVar25,fVar28,fVar39);
          fVar36 = (float)NEON_fmadd(fVar27,fVar28,fVar41);
          if ((uVar20 & 1) == 0) {
            RawPath::line(fVar36,fVar38,param_1);
          }
          else {
            RawPath::cubic(fVar43,fVar40,fVar36,fVar38,fVar36,fVar38);
          }
          fVar40 = (float)NEON_fminnm(fVar28,fVar29 * fVar28 * fVar26 * 1.3333334);
          fVar40 = fVar28 - fVar40;
          fVar27 = (float)NEON_fmadd(fVar27,fVar40,fVar41);
          fVar29 = (float)NEON_fmadd(fVar25,fVar40,fVar39);
          fVar26 = (float)NEON_fmadd(fVar44,fVar40,fVar41);
          fVar43 = (float)NEON_fmadd(fVar44,fVar28,fVar41);
          fVar25 = (float)NEON_fmadd(fVar42,fVar40,fVar39);
          fVar40 = (float)NEON_fmadd(fVar42,fVar28,fVar39);
          if (fVar34 < 0.0) {
            fVar34 = (float)NEON_fmadd(fVar36 - fVar43,fVar39 - fVar40,
                                       -((fVar38 - fVar40) * (fVar41 - fVar43)));
            fVar39 = (float)NEON_fmadd(fVar36 - fVar43,fVar41 - fVar43,
                                       (fVar38 - fVar40) * (fVar39 - fVar40));
            fVar34 = atan2f(fVar34,fVar39);
            sincosf(fVar34 + fVar34,&fStack_1a4,&local_1a8);
            fVar39 = (float)NEON_fmadd(fVar27 - fVar36,fStack_1a4,(fVar29 - fVar38) * local_1a8);
            fVar27 = (float)NEON_fmadd(fVar27 - fVar36,local_1a8,-((fVar29 - fVar38) * fStack_1a4));
            fVar29 = fVar38 + fVar39;
            fVar27 = fVar36 + fVar27;
            sincosf(fVar34 * -2.0,&fStack_1ac,&local_1b0);
            fVar34 = (float)NEON_fmadd(fVar26 - fVar43,local_1b0,-((fVar25 - fVar40) * fStack_1ac));
            fVar25 = (float)NEON_fmadd(fVar26 - fVar43,fStack_1ac,(fVar25 - fVar40) * local_1b0);
            fVar26 = fVar43 + fVar34;
            fVar25 = fVar40 + fVar25;
          }
          RawPath::cubic(fVar27,fVar29,fVar26,fVar25,fVar43,fVar40,param_1);
        }
        local_170 = puVar24 + 0x10;
        if (local_e8 != (void *)0x0) {
          local_e0 = local_e8;
          operator_delete(local_e8);
        }
        local_170 = puVar22 + 0x10;
        if (local_108 != (void *)0x0) {
          local_100 = local_108;
          operator_delete(local_108);
        }
        if (local_128 != (void *)0x0) {
          local_120 = local_128;
          operator_delete(local_128);
        }
        local_170._0_4_ = 9.507238e-39;
        local_170._4_4_ = 0.0;
        if ((local_160 & 1) != 0) {
          operator_delete(local_150);
        }
      }
      else {
        lVar14 = plVar21[0x15];
        if (lVar14 == 0) {
          if ((char)plVar21[0x16] == '\0') {
            (**(code **)(*plVar21 + 0xb8))(plVar21);
            lVar14 = plVar21[0x15];
            *(undefined1 *)(plVar21 + 0x16) = 1;
          }
          else {
            lVar14 = 0;
          }
          puVar17 = (undefined4 *)((long)plVar21 + 0xb4);
        }
        else {
          puVar17 = (undefined4 *)(lVar14 + 0xa8);
        }
        plVar3 = plVar21 + 0x14;
        puVar7 = (undefined4 *)((long)plVar21 + 0xa4);
        if (lVar14 != 0) {
          plVar3 = (long *)(lVar14 + 0x90);
          puVar7 = (undefined4 *)(lVar14 + 0x94);
        }
        RawPath::cubic(fVar43,fVar40,*puVar17,puVar17[1],(int)*plVar3,*puVar7,param_1);
        if (plVar21[0x15] == 0) {
          if (*(char *)((long)plVar21 + 0xb1) == '\0') {
            (**(code **)(*plVar21 + 0xc0))(plVar21);
            *(undefined1 *)((long)plVar21 + 0xb1) = 1;
          }
          pfVar15 = (float *)((long)plVar21 + 0xbc);
        }
        else {
          pfVar15 = (float *)(plVar21[0x15] + 0xb0);
        }
        fVar43 = *pfVar15;
        fVar40 = pfVar15[1];
      }
      lVar19 = lVar19 + 1;
      uVar20 = uVar10;
    } while (uVar11 - 1 != lVar19);
    if ((uVar8 & 1) != 0) {
      if (((uVar9 | uVar10) & 1) == 0) {
        RawPath::line(fStack_248,local_24c,param_1);
      }
      else {
        RawPath::cubic(fVar43,fVar40,fVar35,fVar37,fStack_248,local_24c);
      }
      RawPath::close(param_1);
    }
    if ((*(long *)(this + 0x140) != 0) &&
       (plVar21 = *(long **)(*(long *)(this + 0x140) + 0x370), plVar21 != (long *)0x0)) {
      puVar13 = (undefined8 *)(**(code **)(*(long *)this + 0x1d8))(this);
      local_160 = puVar13[2];
      local_180 = 0;
      fStack_168 = (float)puVar13[1];
      fStack_164 = (float)((ulong)puVar13[1] >> 0x20);
      local_170._0_4_ = (float)*puVar13;
      local_170._4_4_ = (float)((ulong)*puVar13 >> 0x20);
      uStack_188 = _UNK_00281c00;
      local_190 = _DAT_00281bf8;
      fVar34 = (float)NEON_fmadd((float)local_170,fStack_164,-local_170._4_4_ * fStack_168);
      if (fVar34 != 0.0) {
        fVar34 = 1.0 / fVar34;
        fVar37 = (float)(local_160 >> 0x20);
        uVar32 = NEON_rev64(CONCAT44(fVar37 * -(float)local_170,(float)local_160 * -fStack_164),4);
        local_190 = CONCAT44(-local_170._4_4_ * fVar34,fStack_164 * fVar34);
        uStack_188 = CONCAT44((float)local_170 * fVar34,-fStack_168 * fVar34);
        local_180 = NEON_rev64(CONCAT44(fVar34 * ((float)((ulong)uVar32 >> 0x20) +
                                                 fVar37 * fStack_168),
                                        fVar34 * ((float)uVar32 + (float)local_160 * local_170._4_4_
                                                 )),4);
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,param_1,&local_170,&local_190);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
LAB_004b4ef8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b4efc  FUN_004b4efc =====

void FUN_004b4efc(long *param_1,long param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined *puVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  *param_1 = (long)&PTR_FUN_00678650;
  *(undefined4 *)(param_1 + 1) = uVar2;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    lVar10 = *(long *)(param_2 + 0x18);
    lVar9 = *(long *)(param_2 + 0x10);
    param_1[4] = *(long *)(param_2 + 0x20);
    param_1[3] = lVar10;
    param_1[2] = lVar9;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 2),*(char **)(param_2 + 0x20),*(ulong *)(param_2 + 0x18));
  }
  puVar6 = PTR_vtable_0067cee0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *param_1 = (long)(puVar6 + 0x10);
  lVar11 = *(long *)(param_2 + 0x38);
  lVar10 = *(long *)(param_2 + 0x30);
  lVar9 = *(long *)(param_2 + 0x40);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = lVar11;
  param_1[6] = lVar10;
  param_1[8] = lVar9;
  param_1[9] = 0;
  pvVar1 = *(void **)(param_2 + 0x48);
  uVar5 = *(long *)(param_2 + 0x50) - (long)pvVar1;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00345418();
    }
    pvVar7 = operator_new(uVar5);
    param_1[9] = (long)pvVar7;
    param_1[10] = (long)pvVar7;
    param_1[0xb] = (long)pvVar7 + uVar5;
    memcpy(pvVar7,pvVar1,uVar5);
    param_1[10] = (long)pvVar7 + uVar5;
  }
  uVar4 = *(undefined2 *)(param_2 + 0x60);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  pvVar1 = *(void **)(param_2 + 0x68);
  lVar9 = *(long *)(param_2 + 0x70);
  *(undefined2 *)(param_1 + 0xc) = uVar4;
  uVar5 = lVar9 - (long)pvVar1;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
      plVar8 = (long *)FUN_003ad240();
      if ((*(ushort *)(plVar8 + 0xc) >> 4 & 1) == 0) {
        *(ushort *)(plVar8 + 0xc) = *(ushort *)(plVar8 + 0xc) | 0x10;
        (**(code **)(*plVar8 + 0x70))(plVar8);
        lVar9 = plVar8[0x10];
        uVar3 = *(uint *)(plVar8 + 7);
        *(undefined1 *)(lVar9 + 0xc32) = 1;
        *(ushort *)(lVar9 + 0x60) = *(ushort *)(lVar9 + 0x60) | 4;
        if (uVar3 < *(uint *)(lVar9 + 0xbd4)) {
          *(uint *)(lVar9 + 0xbd4) = uVar3;
        }
      }
      if ((Shape *)plVar8[0x28] != (Shape *)0x0) {
        rive::Shape::pathChanged((Shape *)plVar8[0x28]);
        return;
      }
      return;
    }
    pvVar7 = operator_new(uVar5);
    param_1[0xd] = (long)pvVar7;
    param_1[0xe] = (long)pvVar7;
    param_1[0xf] = (long)pvVar7 + uVar5;
    memcpy(pvVar7,pvVar1,uVar5);
    param_1[0xe] = (long)pvVar7 + uVar5;
  }
  param_1[0x10] = *(long *)(param_2 + 0x80);
  return;
}


// ===== 004b5020  rive::Path::markPathDirty =====

/* rive::Path::markPathDirty(bool) */

void rive::Path::markPathDirty(bool param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(ulong)param_1;
  if ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
    (**(code **)(*plVar2 + 0x70))(plVar2);
    lVar3 = plVar2[0x10];
    uVar1 = *(uint *)(plVar2 + 7);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
  }
  if ((Shape *)plVar2[0x28] != (Shape *)0x0) {
    Shape::pathChanged((Shape *)plVar2[0x28]);
    return;
  }
  return;
}


// ===== 004b509c  rive::Path::onDirty =====

/* rive::Path::onDirty(rive::ComponentDirt) */

void __thiscall rive::Path::onDirty(Path *this,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if (((param_2 & 0x2080) != 0) && (*(Shape **)(this + 0x140) != (Shape *)0x0)) {
    Shape::pathChanged(*(Shape **)(this + 0x140));
  }
  if ((this[0x160] != (Path)0x0) && ((*(ushort *)(this + 0x60) >> 4 & 1) == 0)) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
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


// ===== 004b5124  rive::Path::update =====

/* rive::Path::update(rive::ComponentDirt) */

void __thiscall rive::Path::update(Path *this,uint param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  
  uVar6 = param_2 & 0xffff;
  if ((param_2 >> 6 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this);
  }
  if ((uVar6 >> 7 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this);
  }
  if ((uVar6 >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xa0);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      fVar10 = (float)(**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      *(float *)(this + 0xe8) = fVar10 * *(float *)(this + 0xe8);
    }
  }
  lVar7 = *(long *)(this + 0x140);
  if ((param_2 & 0x2010) == 0) {
    if (lVar7 == 0) {
      return;
    }
    if ((uVar6 >> 7 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar7 + 0x370) == 0) {
      return;
    }
  }
  else if (lVar7 == 0) goto LAB_004b520c;
  if (*(float *)(lVar7 + 0xe8) == 0.0) {
    puVar1 = *(undefined8 **)(lVar7 + 400);
    bVar2 = *(byte *)(lVar7 + 0x180);
    for (puVar9 = *(undefined8 **)(lVar7 + 0x188); puVar9 != puVar1; puVar9 = puVar9 + 1) {
      bVar3 = (**(code **)(*(long *)*puVar9 + 0xd8))();
      bVar2 = bVar3 | bVar2;
    }
    if ((bVar2 & 0x28) == 0) {
      puVar1 = *(undefined8 **)(lVar7 + 0x70);
      for (puVar9 = *(undefined8 **)(lVar7 + 0x68); puVar9 != puVar1; puVar9 = puVar9 + 1) {
        plVar8 = (long *)*puVar9;
        uVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,0x10);
        if (((uVar5 & 1) != 0) && (plVar8[0x37] != 0)) goto LAB_004b520c;
      }
      lVar7 = *(long *)(this + 0x140);
      puVar1 = *(undefined8 **)(lVar7 + 400);
      uVar6 = (uint)*(byte *)(lVar7 + 0x180);
      for (puVar9 = *(undefined8 **)(lVar7 + 0x188); puVar9 != puVar1; puVar9 = puVar9 + 1) {
        uVar4 = (**(code **)(*(long *)*puVar9 + 0xd8))();
        uVar6 = uVar4 | uVar6;
      }
      if (((uVar6 >> 4 & 1) == 0) && (((byte)this[0x161] & 0x18) == 0)) {
        this[0x160] = (Path)0x1;
        return;
      }
    }
  }
LAB_004b520c:
  this[0x160] = (Path)0x0;
  *(undefined8 *)(this + 0x170) = *(undefined8 *)(this + 0x168);
  *(undefined8 *)(this + 0x188) = *(undefined8 *)(this + 0x180);
  this[0x1a0] = (Path)0x0;
  buildPath(this,(RawPath *)(this + 0x168));
  return;
}


// ===== 004b52d8  rive::Path::isHoleChanged =====

/* rive::Path::isHoleChanged() */

void __thiscall rive::Path::isHoleChanged(Path *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b52e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b52e8  rive::Path::collapse =====

/* rive::Path::collapse(bool) */

uint __thiscall rive::Path::collapse(Path *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  Component *pCVar7;
  undefined8 *puVar8;
  
  uVar2 = Component::collapse((Component *)this,param_1);
  if ((uVar2 & 1) != 0) {
    puVar6 = *(undefined8 **)(this + 0x90);
    for (puVar8 = *(undefined8 **)(this + 0x88); puVar8 != puVar6; puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x60))((long *)*puVar8,param_1);
    }
    puVar6 = *(undefined8 **)(this + 0x70);
    for (puVar8 = *(undefined8 **)(this + 0x68); puVar8 != puVar6; puVar8 = puVar8 + 1) {
      pCVar7 = (Component *)*puVar8;
      uVar3 = (**(code **)(*(long *)pCVar7 + 0x18))(pCVar7,0x26);
      if (((uVar3 & 1) != 0) && (*(long *)(pCVar7 + 0x100) != *(long *)(pCVar7 + 0xf8))) {
        Component::addDirt(pCVar7,0x80,1);
      }
    }
    lVar5 = *(long *)(this + 0x140);
    if (lVar5 != 0) {
      if ((*(ushort *)(lVar5 + 0x200) >> 4 & 1) == 0) {
        *(ushort *)(lVar5 + 0x200) = *(ushort *)(lVar5 + 0x200) | 0x10;
        (**(code **)(*(long *)(lVar5 + 0x1a0) + 0x70))(lVar5 + 0x1a0);
        lVar4 = *(long *)(lVar5 + 0x220);
        uVar1 = *(uint *)(lVar5 + 0x1d8);
        *(undefined1 *)(lVar4 + 0xc32) = 1;
        *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
        if (uVar1 < *(uint *)(lVar4 + 0xbd4)) {
          *(uint *)(lVar4 + 0xbd4) = uVar1;
        }
      }
      puVar6 = *(undefined8 **)(lVar5 + 0x210);
      for (puVar8 = *(undefined8 **)(lVar5 + 0x208); puVar8 != puVar6; puVar8 = puVar8 + 1) {
        Component::addDirt((Component *)*puVar8,0x10,1);
      }
    }
  }
  return uVar2 & 1;
}


// ===== 004b541c  FUN_004b541c =====

void FUN_004b541c(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004b5440  FUN_004b5440 =====

undefined8 FUN_004b5440(void)

{
  return 0xc;
}


// ===== 004b5448  FUN_004b5448 =====

bool FUN_004b5448(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x27) && ((1L << ((ulong)param_2 & 0x3f) & 0x4000001c04U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 004b5484  FUN_004b5484 =====

undefined8 FUN_004b5484(long param_1,ushort param_2,long *param_3)

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
  
  if (param_2 < 0x80) {
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
      if (param_2 != 0xe) goto LAB_004b5528;
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
    param_3[2] = (long)puVar8;
    return 1;
  }
  if (param_2 == 0x302) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    pcVar7 = (char *)param_3[2];
    if (0 < (lVar1 + lVar2) - (long)pcVar7) {
      param_3[2] = (long)(pcVar7 + 1);
      *(bool *)(param_1 + 0x138) = *pcVar7 == '\x01';
      return 1;
    }
    *(undefined1 *)(param_1 + 0x138) = 0;
    param_3[2] = lVar1 + lVar2;
    *(undefined1 *)(param_3 + 3) = 1;
    return 1;
  }
  if (param_2 == 0x80) {
    uVar12 = 0;
    uVar6 = 0;
    pbVar10 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar10) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_004b5594;
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
LAB_004b5594:
      uVar6 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x134) = (int)uVar6;
    return 1;
  }
LAB_004b5528:
  uVar5 = FUN_0035ea44();
  return uVar5;
}


// ===== 004b55e8  rive::PathVertex::onAddedDirty =====

/* rive::PathVertex::onAddedDirty(rive::CoreContext*) */

bool __thiscall rive::PathVertex::onAddedDirty(PathVertex *this,CoreContext *param_1)

{
  bool bVar1;
  PathVertex *pPVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  pPVar2 = (PathVertex *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pPVar2 = (PathVertex *)(param_1 + -0x998);
  }
  *(PathVertex **)(this + 0x40) = pPVar2;
  *(PathVertex **)(this + 0x80) = pPVar2;
  if (pPVar2 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar5 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar5 + 0x90))(plVar3,this);
  }
  uVar4 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0xc);
  bVar1 = (uVar4 & 1) == 0;
  if (!bVar1) {
    Path::addVertex(*(Path **)(this + 0x30),this);
  }
  return bVar1;
}


// ===== 004b567c  rive::PathVertex::markGeometryDirty =====

/* rive::PathVertex::markGeometryDirty() */

void __thiscall rive::PathVertex::markGeometryDirty(PathVertex *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b5690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1e0))(plVar1,1);
    return;
  }
  return;
}


// ===== 004b5698  FUN_004b5698 =====

void FUN_004b5698(long *param_1)

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


// ===== 004b5724  FUN_004b5724 =====

undefined8 FUN_004b5724(void)

{
  return 0xe;
}


// ===== 004b572c  FUN_004b572c =====

bool FUN_004b572c(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0xf) && ((1 << (ulong)(param_2 & 0x1f) & 0x4c00U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x6b;
}


// ===== 004b575c  rive::PointsPath::buildDependencies =====

/* rive::PointsPath::buildDependencies() */

void __thiscall rive::PointsPath::buildDependencies(PointsPath *this)

{
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
  }
  if (*(Component **)(this + 0x1b8) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x1b8),(Component *)this);
    return;
  }
  return;
}


// ===== 004b57a0  rive::PointsPath::pathTransform =====

/* rive::PointsPath::pathTransform() const */

PointsPath * __thiscall rive::PointsPath::pathTransform(PointsPath *this)

{
  PointsPath *pPVar1;
  
  pPVar1 = this + 0xa4;
  if (*(long *)(this + 0x1b8) != 0) {
    pPVar1 = (PointsPath *)&DAT_00686170;
  }
  return pPVar1;
}


// ===== 004b57bc  rive::PointsPath::update =====

/* rive::PointsPath::update(rive::ComponentDirt) */

void __thiscall rive::PointsPath::update(PointsPath *this,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (((param_2 >> 4 & 1) != 0) && (lVar3 = *(long *)(this + 0x1b8), lVar3 != 0)) {
    puVar2 = *(undefined8 **)(this + 0x148);
    for (lVar1 = *(long *)(this + 0x150) - (long)*(undefined8 **)(this + 0x148); lVar1 != 0;
        lVar1 = lVar1 + -8) {
      (**(code **)(*(long *)*puVar2 + 0xa8))
                ((long *)*puVar2,lVar3 + 0xb8,*(undefined8 *)(lVar3 + 0xe8));
      puVar2 = puVar2 + 1;
    }
  }
  Path::update((Path *)this,param_2);
  return;
}


// ===== 004b582c  rive::PointsPath::markPathDirty =====

/* rive::PointsPath::markPathDirty(bool) */

void rive::PointsPath::markPathDirty(bool param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)(ulong)param_1;
  plVar4 = (long *)plVar2[0x37];
  if ((plVar4 != (long *)0x0) && ((*(ushort *)(plVar4 + 0xc) >> 4 & 1) == 0)) {
    *(ushort *)(plVar4 + 0xc) = *(ushort *)(plVar4 + 0xc) | 0x10;
    (**(code **)(*plVar4 + 0x70))(plVar4);
    lVar3 = plVar4[0x10];
    uVar1 = *(uint *)(plVar4 + 7);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
  }
  if ((*(ushort *)(plVar2 + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(plVar2 + 0xc) = *(ushort *)(plVar2 + 0xc) | 0x10;
    (**(code **)(*plVar2 + 0x70))(plVar2);
    lVar3 = plVar2[0x10];
    uVar1 = *(uint *)(plVar2 + 7);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar1;
    }
  }
  if ((Shape *)plVar2[0x28] != (Shape *)0x0) {
    Shape::pathChanged((Shape *)plVar2[0x28]);
    return;
  }
  return;
}


// ===== 004b58fc  rive::PointsPath::markSkinDirty =====

/* rive::PointsPath::markSkinDirty() */

void __thiscall rive::PointsPath::markSkinDirty(PointsPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b5908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b590c  rive::PointsPath::markSkinDirty =====

/* non-virtual thunk to rive::PointsPath::markSkinDirty() */

void __thiscall rive::PointsPath::markSkinDirty(PointsPath *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b591c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x1b0) + 0x1e0))(this + -0x1b0,1);
  return;
}


// ===== 004b5920  thunk_FUN_004125dc =====

void thunk_FUN_004125dc(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x30];
  puVar1 = PTR_vtable_0067d670 + 0x210;
  *param_1 = (long)(PTR_vtable_0067d670 + 0x10);
  param_1[0x19] = (long)puVar1;
  if (pvVar2 != (void *)0x0) {
    param_1[0x31] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x2d];
  if (pvVar2 != (void *)0x0) {
    param_1[0x2e] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x29];
  if (pvVar2 != (void *)0x0) {
    param_1[0x2a] = (long)pvVar2;
    operator_delete(pvVar2);
  }
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
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 004b5924  FUN_004b5924 =====

void FUN_004b5924(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004b5948  FUN_004b5948 =====

undefined8 FUN_004b5948(void)

{
  return 0x10;
}


// ===== 004b5950  FUN_004b5950 =====

undefined8 FUN_004b5950(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if ((((0x26 < uVar1) || ((1L << ((ulong)param_2 & 0x3f) & 0x4000011c04U) == 0)) && (uVar1 != 0x5b)
      ) && (uVar1 != 0x26c)) {
    return 0;
  }
  return 1;
}


// ===== 004b599c  FUN_004b599c =====

void FUN_004b599c(long param_1)

{
  FUN_004125dc(param_1 + -0x1b0);
  return;
}


// ===== 004b59a4  FUN_004b59a4 =====

void FUN_004b59a4(long param_1)

{
  FUN_004125dc((void *)(param_1 + -0x1b0));
  operator_delete((void *)(param_1 + -0x1b0));
  return;
}


// ===== 004b59cc  rive::PointsPathBase::clone =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::PointsPathBase::clone() const */

long * __thiscall rive::PointsPathBase::clone(PointsPathBase *this)

{
  undefined4 uVar1;
  PointsPathBase PVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  plVar5 = (long *)operator_new(0x1c0);
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
  plVar5[0x2f] = 0;
  plVar5[0x2e] = 0;
  plVar5[0x31] = 0;
  plVar5[0x30] = 0;
  plVar5[0x33] = 0;
  plVar5[0x32] = 0;
  plVar5[0x35] = 0;
  plVar5[0x34] = 0;
  plVar5[3] = 0;
  *(undefined8 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0xc) = 0xfffe;
  lVar3 = _UNK_00281c00;
  lVar7 = _DAT_00281bf8;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0x24] = lVar3;
  plVar5[0x23] = lVar7;
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
  plVar5[0x30] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x32] = 0;
  plVar5[0x31] = 0;
  plVar5[0x2e] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  puVar4 = PTR_vtable_0067d3f0;
  plVar5[0x2b] = 0;
  plVar5[0x2a] = 0;
  lVar7 = *(long *)(this + 0x110);
  uVar9 = *(undefined8 *)(this + 0xbc);
  *(undefined2 *)(plVar5 + 0x2c) = 0;
  plVar5[0x22] = lVar7;
  uVar6 = *(undefined4 *)(this + 0xc4);
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[0x19] = (long)(puVar4 + 0x220);
  PVar2 = this[0x1a8];
  plVar5[0x36] = (long)(puVar4 + 0x248);
  plVar5[0x37] = 0;
  uVar1 = *(undefined4 *)(this + 0x134);
  *(PointsPathBase *)(plVar5 + 0x35) = PVar2;
  PVar2 = this[0x138];
  *(undefined8 *)((long)plVar5 + 0xbc) = uVar9;
  uVar8 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)plVar5 + 0x134) = uVar1;
  *(PointsPathBase *)(plVar5 + 0x27) = PVar2;
  *(undefined4 *)((long)plVar5 + 0xc4) = uVar6;
  *(undefined4 *)(plVar5 + 0x14) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar5 + 2),(basic_string *)(this + 0x10));
  *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(this + 0x28);
  return plVar5;
}


// ===== 004b5b08  FUN_004b5b08 =====

void FUN_004b5b08(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004b5b2c  rive::Polygon::Polygon =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Polygon::Polygon() */

void __thiscall rive::Polygon::Polygon(Polygon *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  uVar3 = _UNK_00281c00;
  uVar2 = _DAT_00281bf8;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  uVar1 = DAT_0024e658;
  *(undefined8 *)(this + 0x120) = uVar3;
  *(undefined8 *)(this + 0x118) = uVar2;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined2 *)(this + 0x10) = 0;
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
  *(undefined8 *)(this + 0xac) = uVar3;
  *(undefined8 *)(this + 0xa4) = uVar2;
  *(undefined8 *)(this + 0xbc) = uVar1;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = uVar3;
  *(undefined8 *)(this + 0xd0) = uVar2;
  uVar2 = _UNK_0024e008;
  uVar1 = _DAT_0024e000;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (Polygon)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (Polygon)0x0;
  this[0x1a0] = (Polygon)0x0;
  *(undefined2 *)(this + 0x160) = 0;
  puVar4 = PTR_vtable_0067d760;
  *(undefined8 *)(this + 0x1b0) = uVar2;
  *(undefined8 *)(this + 0x1a8) = uVar1;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined **)(this + 200) = puVar4 + 0x260;
  *(undefined8 *)(this + 0x1b8) = 5;
  *(undefined8 *)(this + 0x1c0) = 0;
  return;
}


// ===== 004b5c08  rive::Polygon::~Polygon =====

/* rive::Polygon::~Polygon() */

void __thiscall rive::Polygon::~Polygon(Polygon *this)

{
  ~Polygon(this);
  operator_delete(this);
  return;
}


// ===== 004b5c2c  FUN_004b5c2c =====

undefined8 FUN_004b5c2c(void)

{
  return 0x33;
}


// ===== 004b5c34  FUN_004b5c34 =====

bool FUN_004b5c34(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x34) && ((1L << ((ulong)param_2 & 0x3f) & 0x8004000009c04U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 004b5c74  FUN_004b5c74 =====

undefined8 FUN_004b5c74(long param_1,short param_2,long *param_3)

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
    param_3[2] = (long)puVar5;
    return 1;
  }
  if (param_2 != 0x7d) {
    uVar3 = FUN_004a29a4();
    return uVar3;
  }
  uVar9 = 0;
  uVar4 = 0;
  pbVar7 = (byte *)param_3[2];
  do {
    if ((byte *)(*param_3 + param_3[1]) <= pbVar7) {
      *(undefined1 *)(param_3 + 3) = 1;
      goto LAB_004b5d0c;
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
LAB_004b5d0c:
    uVar4 = 0;
    param_3[2] = *param_3 + param_3[1];
  }
  *(int *)(param_1 + 0x1b8) = (int)uVar4;
  return 1;
}


// ===== 004b5d38  rive::Polygon::update =====

/* rive::Polygon::update(rive::ComponentDirt) */

void __thiscall rive::Polygon::update(Polygon *this,ulong param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if (((uint)param_2 >> 4 & 1) == 0) goto LAB_004b62bc;
  lVar16 = *(long *)(this + 0x1c0);
  lVar12 = *(long *)(this + 0x1c8);
  lVar6 = (**(code **)(*(long *)this + 0x230))(this);
  if ((lVar12 - lVar16 >> 3) * -0x2c8590b21642c859 - lVar6 != 0) {
    uVar7 = (**(code **)(*(long *)this + 0x230))(this);
    lVar16 = *(long *)(this + 0x1c0);
    puVar23 = *(undefined8 **)(this + 0x1c8);
    lVar6 = (long)puVar23 - lVar16;
    lVar12 = lVar6 >> 3;
    bVar5 = uVar7 < (ulong)(lVar12 * -0x2c8590b21642c859);
    uVar15 = uVar7 + lVar12 * 0x2c8590b21642c859;
    if (bVar5 || uVar15 == 0) {
      if (bVar5) {
        puVar22 = (undefined8 *)(lVar16 + uVar7 * 0xb8);
        puVar24 = puVar23;
        while (puVar23 = puVar22, puVar24 != puVar22) {
          puVar24 = puVar24 + -0x17;
          (**(code **)*puVar24)(puVar24);
        }
        goto LAB_004b60f4;
      }
    }
    else if ((ulong)((*(long *)(this + 0x1d0) - (long)puVar23 >> 3) * -0x2c8590b21642c859) < uVar15)
    {
      if (0x1642c8590b21642 < uVar7) {
        plVar10 = (long *)FUN_004b6438();
                    /* WARNING: Could not recover jumptable at 0x004b62f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x1e0))(plVar10,1);
        return;
      }
      lVar12 = *(long *)(this + 0x1d0) - lVar16 >> 3;
      uVar15 = lVar12 * -0x590b21642c8590b2;
      if (uVar15 < uVar7 || uVar15 - uVar7 == 0) {
        uVar15 = uVar7;
      }
      if (0xb21642c8590b20 < (ulong)(lVar12 * -0x2c8590b21642c859)) {
        uVar15 = 0x1642c8590b21642;
      }
      if (0x1642c8590b21642 < uVar15) {
LAB_004b62e4:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar8 = operator_new(uVar15 * 0xb8);
      puVar4 = PTR_vtable_0067d3d8;
      lVar12 = (long)pvVar8 + lVar6;
      puVar24 = (undefined8 *)((long)pvVar8 + lVar6 + 0x60);
      puVar1 = PTR_vtable_0067d3d8 + 0x10;
      pvVar9 = (void *)((long)pvVar8 + uVar7 * 0xb8);
      lVar16 = (lVar16 + uVar7 * 0xb8) - (long)puVar23;
      do {
        puVar24[-10] = 0;
        puVar24[-0xb] = 0;
        lVar16 = lVar16 + -0xb8;
        puVar24[-2] = 0;
        puVar24[-3] = 0;
        puVar24[-4] = 0;
        puVar24[-5] = 0;
        *puVar24 = 0;
        puVar24[-1] = 0;
        puVar24[2] = 0;
        puVar24[1] = 0;
        puVar24[4] = 0;
        puVar24[3] = 0;
        puVar24[10] = 0;
        puVar24[9] = 0;
        puVar24[8] = 0;
        puVar24[7] = 0;
        puVar24[6] = 0;
        puVar24[5] = 0;
        puVar24[-6] = 0;
        puVar24[-7] = 0;
        puVar24[-8] = 0;
        puVar24[-9] = 0;
        *(undefined4 *)(puVar24 + -0xb) = 0xffffffff;
        puVar24[-3] = 0;
        puVar24[-4] = 0;
        puVar24[-1] = 0;
        puVar24[-2] = 0;
        *(undefined2 *)puVar24 = 0xfffe;
        puVar24[1] = 0;
        puVar24[2] = 0;
        puVar24[3] = 0;
        *(undefined8 *)((long)puVar24 + 0x4c) = 0;
        *(undefined8 *)((long)puVar24 + 0x44) = 0;
        puVar24[8] = 0;
        puVar24[7] = 0;
        puVar24[6] = 0;
        puVar24[5] = 0;
        puVar24[-0xc] = puVar1;
        puVar24 = puVar24 + 0x17;
      } while (lVar16 != 0);
      puVar23 = *(undefined8 **)(this + 0x1c0);
      puVar24 = *(undefined8 **)(this + 0x1c8);
      pvVar8 = (void *)((long)pvVar8 + uVar15 * 0xb8);
      if (puVar24 == puVar23) {
        *(long *)(this + 0x1c0) = lVar12;
        *(void **)(this + 0x1c8) = pvVar9;
        *(void **)(this + 0x1d0) = pvVar8;
      }
      else {
        puVar1 = PTR_vtable_0067cee0 + 0x10;
        lVar16 = 0;
        do {
          lVar6 = lVar12 + lVar16;
          lVar18 = lVar16 + -0xb8;
          uVar26 = *(undefined4 *)((long)puVar24 + lVar16 + -0xb0);
          *(undefined ***)(lVar6 + -0xb8) = &PTR_FUN_00678650;
          *(undefined4 *)(lVar6 + -0xb0) = uVar26;
          uVar27 = *(undefined8 *)((long)puVar24 + lVar16 + -0xa0);
          uVar11 = *(undefined8 *)((long)puVar24 + lVar16 + -0xa8);
          *(undefined8 *)(lVar6 + -0x98) = *(undefined8 *)((long)puVar24 + lVar16 + -0x98);
          *(undefined8 *)(lVar6 + -0xa0) = uVar27;
          *(undefined8 *)(lVar6 + -0xa8) = uVar11;
          uVar26 = *(undefined4 *)((long)puVar24 + lVar16 + -0x90);
          *(undefined8 *)((long)puVar24 + lVar16 + -0xa0) = 0;
          *(undefined8 *)((long)puVar24 + lVar16 + -0x98) = 0;
          *(undefined8 *)((long)puVar24 + lVar16 + -0xa8) = 0;
          *(undefined **)(lVar6 + -0xb8) = puVar1;
          *(undefined4 *)(lVar6 + -0x90) = uVar26;
          uVar28 = *(undefined8 *)((long)puVar24 + lVar16 + -0x80);
          uVar27 = *(undefined8 *)((long)puVar24 + lVar16 + -0x88);
          uVar11 = *(undefined8 *)((long)puVar24 + lVar16 + -0x78);
          *(undefined8 *)(lVar6 + -0x68) = 0;
          *(undefined8 *)(lVar6 + -0x60) = 0;
          *(undefined8 *)(lVar6 + -0x80) = uVar28;
          *(undefined8 *)(lVar6 + -0x88) = uVar27;
          *(undefined8 *)(lVar6 + -0x78) = uVar11;
          *(undefined8 *)(lVar6 + -0x70) = 0;
          uVar11 = *(undefined8 *)((long)puVar24 + lVar16 + -0x70);
          *(undefined8 *)(lVar6 + -0x68) = *(undefined8 *)((long)puVar24 + lVar16 + -0x68);
          *(undefined8 *)(lVar6 + -0x70) = uVar11;
          *(undefined8 *)(lVar6 + -0x60) = *(undefined8 *)((long)puVar24 + lVar16 + -0x60);
          uVar2 = *(undefined2 *)((long)puVar24 + lVar16 + -0x58);
          *(undefined8 *)((long)puVar24 + lVar16 + -0x68) = 0;
          *(undefined8 *)((long)puVar24 + lVar16 + -0x60) = 0;
          *(undefined8 *)((long)puVar24 + lVar16 + -0x70) = 0;
          *(undefined8 *)(lVar6 + -0x48) = 0;
          *(undefined8 *)(lVar6 + -0x40) = 0;
          *(undefined8 *)(lVar6 + -0x50) = 0;
          uVar27 = *(undefined8 *)((long)puVar24 + lVar16 + -0x48);
          uVar11 = *(undefined8 *)((long)puVar24 + lVar16 + -0x50);
          *(undefined2 *)(lVar6 + -0x58) = uVar2;
          *(undefined8 *)(lVar6 + -0x48) = uVar27;
          *(undefined8 *)(lVar6 + -0x50) = uVar11;
          *(undefined8 *)(lVar6 + -0x40) = *(undefined8 *)((long)puVar24 + lVar16 + -0x40);
          uVar11 = *(undefined8 *)((long)puVar24 + lVar16 + -0x38);
          *(undefined8 *)((long)puVar24 + lVar16 + -0x48) = 0;
          *(undefined8 *)((long)puVar24 + lVar16 + -0x40) = 0;
          *(undefined8 *)((long)puVar24 + lVar16 + -0x50) = 0;
          *(undefined8 *)(lVar6 + -0x28) = 0;
          *(undefined8 *)(lVar6 + -0x20) = 0;
          *(undefined8 *)(lVar6 + -0x38) = uVar11;
          *(undefined8 *)(lVar6 + -0x30) = 0;
          uVar11 = *(undefined8 *)((long)puVar24 + lVar16 + -0x30);
          *(undefined8 *)(lVar6 + -0x28) = *(undefined8 *)((long)puVar24 + lVar16 + -0x28);
          *(undefined8 *)(lVar6 + -0x30) = uVar11;
          *(undefined8 *)(lVar6 + -0x20) = *(undefined8 *)((long)puVar24 + lVar16 + -0x20);
          *(undefined8 *)((long)puVar24 + lVar16 + -0x30) = 0;
          *(undefined8 *)((long)puVar24 + lVar16 + -0x28) = 0;
          *(undefined8 *)((long)puVar24 + lVar16 + -0x20) = 0;
          *(undefined ***)(lVar6 + -0xb8) = &PTR_FUN_006709a8;
          uVar11 = *(undefined8 *)((long)puVar24 + lVar16 + -0x18);
          *(undefined **)(lVar6 + -0xb8) = puVar4 + 0x10;
          *(undefined8 *)(lVar6 + -0x18) = uVar11;
          uVar26 = *(undefined4 *)((long)puVar24 + lVar16 + -8);
          *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)((long)puVar24 + lVar16 + -0x10);
          *(undefined4 *)(lVar6 + -8) = uVar26;
          lVar16 = lVar18;
        } while ((undefined8 *)((long)puVar24 + lVar18) != puVar23);
        puVar23 = *(undefined8 **)(this + 0x1c0);
        puVar22 = *(undefined8 **)(this + 0x1c8);
        *(long *)(this + 0x1c0) = lVar12 + lVar18;
        *(void **)(this + 0x1c8) = pvVar9;
        *(void **)(this + 0x1d0) = pvVar8;
        puVar24 = puVar22;
        while (puVar22 != puVar23) {
          puVar22 = puVar22 + -0x17;
          (**(code **)*puVar22)(puVar22);
          puVar24 = puVar23;
        }
      }
      if (puVar24 != (undefined8 *)0x0) {
        operator_delete(puVar24);
      }
      puVar23 = *(undefined8 **)(this + 0x1c8);
    }
    else {
      puVar22 = puVar23 + uVar15 * 0x17;
      puVar24 = puVar23 + 0xc;
      puVar1 = PTR_vtable_0067d3d8 + 0x10;
      lVar16 = lVar12 * -8 + uVar7 * 0xb8;
      do {
        puVar24[-10] = 0;
        puVar24[-0xb] = 0;
        lVar16 = lVar16 + -0xb8;
        puVar24[-2] = 0;
        puVar24[-3] = 0;
        puVar24[-4] = 0;
        puVar24[-5] = 0;
        *puVar24 = 0;
        puVar24[-1] = 0;
        puVar24[2] = 0;
        puVar24[1] = 0;
        puVar24[4] = 0;
        puVar24[3] = 0;
        puVar24[10] = 0;
        puVar24[9] = 0;
        puVar24[8] = 0;
        puVar24[7] = 0;
        puVar24[6] = 0;
        puVar24[5] = 0;
        puVar24[-6] = 0;
        puVar24[-7] = 0;
        puVar24[-8] = 0;
        puVar24[-9] = 0;
        *(undefined4 *)(puVar24 + -0xb) = 0xffffffff;
        puVar24[-3] = 0;
        puVar24[-4] = 0;
        puVar24[-1] = 0;
        puVar24[-2] = 0;
        *(undefined2 *)puVar24 = 0xfffe;
        puVar24[1] = 0;
        puVar24[2] = 0;
        puVar24[3] = 0;
        *(undefined8 *)((long)puVar24 + 0x4c) = 0;
        *(undefined8 *)((long)puVar24 + 0x44) = 0;
        puVar24[8] = 0;
        puVar24[7] = 0;
        puVar24[6] = 0;
        puVar24[5] = 0;
        puVar24[-0xc] = puVar1;
        puVar24 = puVar24 + 0x17;
        puVar23 = puVar22;
      } while (lVar16 != 0);
LAB_004b60f4:
      *(undefined8 **)(this + 0x1c8) = puVar23;
    }
    puVar24 = *(undefined8 **)(this + 0x1c0);
    *(long **)(this + 0x150) = *(long **)(this + 0x148);
    plVar10 = *(long **)(this + 0x148);
    for (; puVar24 != puVar23; puVar24 = puVar24 + 0x17) {
      if (plVar10 < *(long **)(this + 0x158)) {
        plVar25 = plVar10 + 1;
        *plVar10 = (long)puVar24;
      }
      else {
        plVar21 = *(long **)(this + 0x148);
        lVar16 = (long)plVar10 - (long)plVar21;
        uVar15 = (lVar16 >> 3) + 1;
        if (uVar15 >> 0x3d != 0) {
          FUN_004b4048();
          goto LAB_004b62e4;
        }
        uVar13 = (long)*(long **)(this + 0x158) - (long)plVar21;
        uVar7 = (long)uVar13 >> 2;
        if (uVar7 <= uVar15) {
          uVar7 = uVar15;
        }
        if (0x7ffffffffffffff7 < uVar13) {
          uVar7 = 0x1fffffffffffffff;
        }
        if (uVar7 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          if (uVar7 >> 0x3d != 0) goto LAB_004b62e4;
          pvVar9 = operator_new(uVar7 << 3);
        }
        plVar14 = (long *)((long)pvVar9 + (lVar16 >> 3) * 8);
        plVar25 = plVar14 + 1;
        *plVar14 = (long)puVar24;
        plVar19 = plVar10;
        if ((long)plVar10 - (long)plVar21 != 0) {
          uVar15 = ((long)plVar10 - (long)plVar21) - 8;
          if ((((0x147 < uVar15) &&
               (uVar13 = (long)pvVar9 + lVar16 + -8,
               uVar13 - (uVar15 & 0xfffffffffffffff8) <= uVar13)) &&
              ((long *)((long)(plVar10 + -1) - (uVar15 & 0xfffffffffffffff8)) <= plVar10 + -1)) &&
             (0x1f < (ulong)((long)plVar10 + (-lVar16 - (long)pvVar9)))) {
            plVar19 = plVar14 + -2;
            plVar20 = plVar10 + -2;
            uVar15 = (uVar15 >> 3) + 1;
            uVar17 = uVar15 & 0x3ffffffffffffffc;
            plVar10 = plVar10 + -uVar17;
            uVar13 = uVar17;
            do {
              plVar3 = plVar20 + -1;
              lVar6 = plVar20[-2];
              lVar12 = plVar20[1];
              lVar16 = *plVar20;
              uVar13 = uVar13 - 4;
              plVar20 = plVar20 + -4;
              plVar19[-1] = *plVar3;
              plVar19[-2] = lVar6;
              plVar19[1] = lVar12;
              *plVar19 = lVar16;
              plVar19 = plVar19 + -4;
            } while (uVar13 != 0);
            plVar14 = plVar14 + -uVar17;
            plVar19 = plVar21;
            if (uVar15 == uVar17) goto LAB_004b61f0;
          }
          do {
            plVar10 = plVar10 + -1;
            plVar14 = plVar14 + -1;
            *plVar14 = *plVar10;
          } while (plVar10 != plVar21);
          plVar19 = *(long **)(this + 0x148);
        }
LAB_004b61f0:
        *(long **)(this + 0x148) = plVar14;
        *(long **)(this + 0x150) = plVar25;
        *(void **)(this + 0x158) = (void *)((long)pvVar9 + uVar7 * 8);
        if (plVar19 != (long *)0x0) {
          operator_delete(plVar19);
        }
      }
      *(long **)(this + 0x150) = plVar25;
      plVar10 = plVar25;
    }
  }
  (**(code **)(*(long *)this + 0x238))(this);
  param_2 = param_2 & 0xffffffff;
LAB_004b62bc:
  Path::update((Path *)this,param_2);
  return;
}


// ===== 004b62ec  rive::Polygon::pointsChanged =====

/* rive::Polygon::pointsChanged() */

void __thiscall rive::Polygon::pointsChanged(Polygon *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b62f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b62fc  rive::Polygon::cornerRadiusChanged =====

/* rive::Polygon::cornerRadiusChanged() */

void __thiscall rive::Polygon::cornerRadiusChanged(Polygon *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b6308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b630c  rive::Polygon::vertexCount =====

/* rive::Polygon::vertexCount() */

undefined4 __thiscall rive::Polygon::vertexCount(Polygon *this)

{
  return *(undefined4 *)(this + 0x1b8);
}


// ===== 004b6314  rive::Polygon::buildPolygon =====

/* rive::Polygon::buildPolygon() */

void __thiscall rive::Polygon::buildPolygon(Polygon *this)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float __x;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  plVar2 = *(long **)(this + 0x1c0);
  plVar1 = *(long **)(this + 0x1c8);
  if (plVar2 != plVar1) {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x1b8));
    __x = -1.5707964;
    fVar5 = *(float *)(this + 0x1a8) * 0.5;
    fVar6 = *(float *)(this + 0x1ac) * 0.5;
    uVar7 = NEON_fmsub(*(undefined4 *)(this + 0x1b0),*(float *)(this + 0x1a8),fVar5);
    uVar8 = NEON_fmsub(*(undefined4 *)(this + 0x1b4),*(float *)(this + 0x1ac),fVar6);
    do {
      fVar4 = cosf(__x);
      fVar4 = (float)NEON_fmadd(fVar4,fVar5,uVar7);
      if (*(float *)(plVar2 + 0x14) != fVar4) {
        *(float *)(plVar2 + 0x14) = fVar4;
        (**(code **)(*plVar2 + 0x98))(plVar2);
      }
      fVar4 = sinf(__x);
      fVar4 = (float)NEON_fmadd(fVar4,fVar6,uVar8);
      if (*(float *)((long)plVar2 + 0xa4) != fVar4) {
        *(float *)((long)plVar2 + 0xa4) = fVar4;
        (**(code **)(*plVar2 + 0xa0))(plVar2);
      }
      if (*(float *)(plVar2 + 0x16) != *(float *)(this + 0x1bc)) {
        *(float *)(plVar2 + 0x16) = *(float *)(this + 0x1bc);
        (**(code **)(*plVar2 + 0xb8))(plVar2);
      }
      __x = 6.2831855 / fVar3 + __x;
      plVar2 = plVar2 + 0x17;
    } while (plVar2 != plVar1);
  }
  return;
}


// ===== 004b6438  FUN_004b6438 =====

void FUN_004b6438(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 004b644c  FUN_004b644c =====

void FUN_004b644c(long *param_1)

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


// ===== 004b64d8  FUN_004b64d8 =====

undefined8 FUN_004b64d8(void)

{
  return 0x6b;
}


// ===== 004b64e0  FUN_004b64e0 =====

bool FUN_004b64e0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff) - 10 < 2 || (param_2 & 0xffff) == 0x6b;
}


// ===== 004b6500  FUN_004b6500 =====

void FUN_004b6500(void)

{
  return;
}


// ===== 004b6504  FUN_004b6504 =====

void FUN_004b6504(void)

{
  return;
}


// ===== 004b6508  rive::Polygon::~Polygon =====

/* rive::Polygon::~Polygon() */

void __thiscall rive::Polygon::~Polygon(Polygon *this)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x1c0);
  puVar1 = PTR_vtable_0067d760 + 0x260;
  *(undefined **)this = PTR_vtable_0067d760 + 0x10;
  *(undefined **)(this + 200) = puVar1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(this + 0x1c8);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar3 = puVar3 + -0x17;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar4);
      puVar2 = *(undefined8 **)(this + 0x1c0);
    }
    *(undefined8 **)(this + 0x1c8) = puVar4;
    operator_delete(puVar2);
  }
  FUN_004125dc(this);
  return;
}


// ===== 004b6590  rive::PolygonBase::clone =====

/* rive::PolygonBase::clone() const */

Polygon * __thiscall rive::PolygonBase::clone(PolygonBase *this)

{
  PolygonBase PVar1;
  Polygon *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  this_00 = (Polygon *)operator_new(0x1d8);
  Polygon::Polygon(this_00);
  uVar6 = *(undefined8 *)(this + 0x110);
  *(undefined4 *)(this_00 + 0x1bc) = *(undefined4 *)(this + 0x1bc);
  uVar5 = *(undefined8 *)(this + 0x1b0);
  uVar4 = *(undefined8 *)(this + 0x1a8);
  uVar3 = *(undefined4 *)(this + 0x1b8);
  *(undefined8 *)(this_00 + 0x110) = uVar6;
  *(undefined8 *)(this_00 + 0x1b0) = uVar5;
  *(undefined8 *)(this_00 + 0x1a8) = uVar4;
  uVar4 = *(undefined8 *)(this + 0xbc);
  *(undefined4 *)(this_00 + 0x1b8) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)(this_00 + 0xbc) = uVar4;
  uVar2 = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(this_00 + 0x134) = uVar3;
  PVar1 = this[0x138];
  *(undefined4 *)(this_00 + 0xc4) = uVar2;
  uVar3 = *(undefined4 *)(this + 0xa0);
  *(PolygonBase *)(this_00 + 0x138) = PVar1;
  *(undefined4 *)(this_00 + 0xa0) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004b6624  FUN_004b6624 =====

void FUN_004b6624(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004b6648  FUN_004b6648 =====

void FUN_004b6648(void)

{
  return;
}


// ===== 004b664c  FUN_004b664c =====

void FUN_004b664c(void)

{
  return;
}


// ===== 004b6650  rive::Rectangle::Rectangle =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Rectangle::Rectangle() */

void __thiscall rive::Rectangle::Rectangle(Rectangle *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = _UNK_00281c00;
  uVar2 = _DAT_00281bf8;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  uVar4 = DAT_0024e658;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  *(undefined8 *)(this + 0x120) = uVar3;
  *(undefined8 *)(this + 0x118) = uVar2;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0xac) = uVar3;
  *(undefined8 *)(this + 0xa4) = uVar2;
  *(undefined8 *)(this + 0xd8) = uVar3;
  *(undefined8 *)(this + 0xd0) = uVar2;
  uVar3 = _UNK_0024e008;
  uVar2 = _DAT_0024e000;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined8 *)(this + 0x1b0) = uVar3;
  *(undefined8 *)(this + 0x1a8) = uVar2;
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
  *(undefined8 *)(this + 0xbc) = uVar4;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (Rectangle)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (Rectangle)0x0;
  this[0x1a0] = (Rectangle)0x0;
  *(undefined2 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  this[0x1b8] = (Rectangle)0x1;
  puVar1 = PTR_vtable_0067d668;
  *(undefined8 *)(this + 0x1c4) = 0;
  *(undefined8 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1d8) = 0xffffffff;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 200) = puVar1 + 0x268;
  *(undefined2 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined2 *)(this + 0x230) = 0xfffe;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x27c) = 0;
  *(undefined8 *)(this + 0x274) = 0;
  puVar1 = PTR_vtable_0067d3d8;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined4 *)(this + 0x290) = 0xffffffff;
  *(undefined **)(this + 0x1d0) = puVar1;
  *(undefined2 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined2 *)(this + 0x2e8) = 0xfffe;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x334) = 0;
  *(undefined8 *)(this + 0x32c) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined **)(this + 0x288) = puVar1;
  *(undefined4 *)(this + 0x348) = 0xffffffff;
  *(undefined2 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined2 *)(this + 0x3a0) = 0xfffe;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3ec) = 0;
  *(undefined8 *)(this + 0x3e4) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined **)(this + 0x340) = puVar1;
  *(undefined4 *)(this + 0x400) = 0xffffffff;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined4 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined2 *)(this + 0x458) = 0xfffe;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x4a4) = 0;
  *(undefined8 *)(this + 0x49c) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined **)(this + 0x3f8) = puVar1;
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x1d0));
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x288));
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x340));
  Path::addVertex((Path *)this,(PathVertex *)(this + 0x3f8));
  return;
}


// ===== 004b6864  FUN_004b6864 =====

void FUN_004b6864(void *param_1)

{
  FUN_00412434();
  operator_delete(param_1);
  return;
}


// ===== 004b6888  FUN_004b6888 =====

undefined8 FUN_004b6888(void)

{
  return 7;
}


// ===== 004b6890  FUN_004b6890 =====

bool FUN_004b6890(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x27) && ((1L << ((ulong)param_2 & 0x3f) & 0x4000009c84U) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 004b68cc  FUN_004b68cc =====

undefined8 FUN_004b68cc(long param_1,ushort param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (param_2 < 0xa2) {
    if (param_2 == 0x1f) {
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
      *(undefined4 *)(param_1 + 0x1bc) = uVar7;
    }
    else {
      if (param_2 != 0xa1) goto LAB_004b69d8;
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
      *(undefined4 *)(param_1 + 0x1c0) = uVar7;
    }
  }
  else if (param_2 == 0xa2) {
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
    *(undefined4 *)(param_1 + 0x1c4) = uVar7;
  }
  else {
    if (param_2 != 0xa3) {
      if (param_2 == 0xa4) {
        lVar1 = *param_3;
        lVar2 = param_3[1];
        pcVar4 = (char *)param_3[2];
        if (0 < (lVar1 + lVar2) - (long)pcVar4) {
          param_3[2] = (long)(pcVar4 + 1);
          *(bool *)(param_1 + 0x1b8) = *pcVar4 == '\x01';
          return 1;
        }
        *(undefined1 *)(param_1 + 0x1b8) = 0;
        param_3[2] = lVar1 + lVar2;
        *(undefined1 *)(param_3 + 3) = 1;
        return 1;
      }
LAB_004b69d8:
      uVar3 = FUN_004a29a4();
      return uVar3;
    }
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
    *(undefined4 *)(param_1 + 0x1c8) = uVar7;
  }
  param_3[2] = (long)puVar5;
  return 1;
}


// ===== 004b6a3c  rive::Rectangle::update =====

/* rive::Rectangle::update(rive::ComponentDirt) */

void __thiscall rive::Rectangle::update(Rectangle *this,uint param_2)

{
  Rectangle RVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_2 >> 4 & 1) != 0) {
    fVar3 = *(float *)(this + 0x1bc);
    RVar1 = this[0x1b8];
    fVar5 = -(*(float *)(this + 0x1b0) * *(float *)(this + 0x1a8));
    fVar4 = -(*(float *)(this + 0x1b4) * *(float *)(this + 0x1ac));
    if (*(float *)(this + 0x270) != fVar5) {
      *(float *)(this + 0x270) = fVar5;
      (**(code **)(*(long *)(this + 0x1d0) + 0x98))(this + 0x1d0);
    }
    if (*(float *)(this + 0x274) != fVar4) {
      *(float *)(this + 0x274) = fVar4;
      (**(code **)(*(long *)(this + 0x1d0) + 0xa0))(this + 0x1d0);
    }
    if (*(float *)(this + 0x280) != fVar3) {
      *(float *)(this + 0x280) = fVar3;
      (**(code **)(*(long *)(this + 0x1d0) + 0xb8))(this + 0x1d0);
    }
    if (*(float *)(this + 0x328) != fVar5 + *(float *)(this + 0x1a8)) {
      *(float *)(this + 0x328) = fVar5 + *(float *)(this + 0x1a8);
      (**(code **)(*(long *)(this + 0x288) + 0x98))(this + 0x288);
    }
    if (*(float *)(this + 0x32c) != fVar4) {
      *(float *)(this + 0x32c) = fVar4;
      (**(code **)(*(long *)(this + 0x288) + 0xa0))(this + 0x288);
    }
    fVar2 = *(float *)(this + 0x1c0);
    if (RVar1 != (Rectangle)0x0) {
      fVar2 = fVar3;
    }
    if (*(float *)(this + 0x338) != fVar2) {
      *(float *)(this + 0x338) = fVar2;
      (**(code **)(*(long *)(this + 0x288) + 0xb8))(this + 0x288);
    }
    if (*(float *)(this + 0x3e0) != fVar5 + *(float *)(this + 0x1a8)) {
      *(float *)(this + 0x3e0) = fVar5 + *(float *)(this + 0x1a8);
      (**(code **)(*(long *)(this + 0x340) + 0x98))(this + 0x340);
    }
    if (*(float *)(this + 0x3e4) != fVar4 + *(float *)(this + 0x1ac)) {
      *(float *)(this + 0x3e4) = fVar4 + *(float *)(this + 0x1ac);
      (**(code **)(*(long *)(this + 0x340) + 0xa0))(this + 0x340);
    }
    fVar2 = *(float *)(this + 0x1c8);
    if (RVar1 != (Rectangle)0x0) {
      fVar2 = fVar3;
    }
    if (*(float *)(this + 0x3f0) != fVar2) {
      *(float *)(this + 0x3f0) = fVar2;
      (**(code **)(*(long *)(this + 0x340) + 0xb8))(this + 0x340);
    }
    if (*(float *)(this + 0x498) != fVar5) {
      *(float *)(this + 0x498) = fVar5;
      (**(code **)(*(long *)(this + 0x3f8) + 0x98))(this + 0x3f8);
    }
    if (*(float *)(this + 0x49c) != fVar4 + *(float *)(this + 0x1ac)) {
      *(float *)(this + 0x49c) = fVar4 + *(float *)(this + 0x1ac);
      (**(code **)(*(long *)(this + 0x3f8) + 0xa0))(this + 0x3f8);
    }
    fVar4 = *(float *)(this + 0x1c4);
    if (RVar1 != (Rectangle)0x0) {
      fVar4 = fVar3;
    }
    if (*(float *)(this + 0x4a8) != fVar4) {
      *(float *)(this + 0x4a8) = fVar4;
      (**(code **)(*(long *)(this + 0x3f8) + 0xb8))(this + 0x3f8);
    }
  }
  Path::update((Path *)this,param_2);
  return;
}


// ===== 004b6c64  FUN_004b6c64 =====

void FUN_004b6c64(void)

{
  return;
}


// ===== 004b6c68  rive::Rectangle::cornerRadiusTLChanged =====

/* rive::Rectangle::cornerRadiusTLChanged() */

void __thiscall rive::Rectangle::cornerRadiusTLChanged(Rectangle *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b6c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b6c78  rive::Rectangle::cornerRadiusTRChanged =====

/* rive::Rectangle::cornerRadiusTRChanged() */

void __thiscall rive::Rectangle::cornerRadiusTRChanged(Rectangle *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b6c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b6c88  rive::Rectangle::cornerRadiusBLChanged =====

/* rive::Rectangle::cornerRadiusBLChanged() */

void __thiscall rive::Rectangle::cornerRadiusBLChanged(Rectangle *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b6c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b6c98  rive::Rectangle::cornerRadiusBRChanged =====

/* rive::Rectangle::cornerRadiusBRChanged() */

void __thiscall rive::Rectangle::cornerRadiusBRChanged(Rectangle *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b6ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0))(this,1);
  return;
}


// ===== 004b6ca8  rive::RectangleBase::clone =====

/* rive::RectangleBase::clone() const */

Rectangle * __thiscall rive::RectangleBase::clone(RectangleBase *this)

{
  RectangleBase RVar1;
  Rectangle *this_00;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  this_00 = (Rectangle *)operator_new(0x4b0);
  Rectangle::Rectangle(this_00);
  uVar3 = *(undefined8 *)(this + 0x1bc);
  RVar1 = this[0x1b8];
  uVar5 = *(undefined8 *)(this + 0x1b0);
  uVar4 = *(undefined8 *)(this + 0x1a8);
  *(undefined8 *)(this_00 + 0x1c4) = *(undefined8 *)(this + 0x1c4);
  *(undefined8 *)(this_00 + 0x1bc) = uVar3;
  uVar3 = *(undefined8 *)(this + 0x110);
  *(RectangleBase *)(this_00 + 0x1b8) = RVar1;
  uVar2 = *(undefined4 *)(this + 0x134);
  *(undefined8 *)(this_00 + 0x110) = uVar3;
  uVar3 = *(undefined8 *)(this + 0xbc);
  *(undefined4 *)(this_00 + 0x134) = uVar2;
  RVar1 = this[0x138];
  *(undefined8 *)(this_00 + 0xbc) = uVar3;
  uVar2 = *(undefined4 *)(this + 0xc4);
  *(undefined8 *)(this_00 + 0x1b0) = uVar5;
  *(undefined8 *)(this_00 + 0x1a8) = uVar4;
  *(undefined4 *)(this_00 + 0xc4) = uVar2;
  uVar2 = *(undefined4 *)(this + 0xa0);
  *(RectangleBase *)(this_00 + 0x138) = RVar1;
  *(undefined4 *)(this_00 + 0xa0) = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x10),(basic_string *)(this + 0x10));
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  return this_00;
}


// ===== 004b6d44  FUN_004b6d44 =====

void FUN_004b6d44(void *param_1)

{
  FUN_004125dc();
  operator_delete(param_1);
  return;
}


// ===== 004b6d68  FUN_004b6d68 =====

void FUN_004b6d68(void)

{
  return;
}


// ===== 004b6d6c  FUN_004b6d6c =====

void FUN_004b6d6c(void)

{
  return;
}


// ===== 004b6d70  FUN_004b6d70 =====

void FUN_004b6d70(void)

{
  return;
}


// ===== 004b6d74  FUN_004b6d74 =====

void FUN_004b6d74(void)

{
  return;
}


// ===== 004b6d78  rive::Shape::Shape =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Shape::Shape() */

void __thiscall rive::Shape::Shape(Shape *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  uVar3 = _UNK_00281c00;
  uVar2 = _DAT_00281bf8;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  uVar1 = DAT_0024e658;
  *(undefined8 *)(this + 0x120) = uVar3;
  *(undefined8 *)(this + 0x118) = uVar2;
  *(undefined8 *)(this + 0x134) = 3;
  *(undefined2 *)(this + 0x10) = 0;
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
  *(undefined8 *)(this + 0xac) = uVar3;
  *(undefined8 *)(this + 0xa4) = uVar2;
  *(undefined8 *)(this + 0xbc) = uVar1;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = uVar3;
  *(undefined8 *)(this + 0xd0) = uVar2;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (Shape)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  this[0x170] = (Shape)0x1;
  this[0x180] = (Shape)0x0;
  puVar4 = PTR_vtable_0067d768;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined **)(this + 200) = puVar4 + 0x2a0;
  *(undefined **)(this + 0x178) = puVar4 + 0x2c8;
  PathComposer::PathComposer((PathComposer *)(this + 0x1a0),this);
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x368) = 0xbf800000;
  this[0x36c] = (Shape)0x0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  return;
}


// ===== 004b6e88  FUN_004b6e88 =====

void FUN_004b6e88(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[0x68];
  puVar1 = PTR_vtable_0067d768 + 0x2a0;
  puVar2 = PTR_vtable_0067d768 + 0x2c8;
  *param_1 = (long)(PTR_vtable_0067d768 + 0x10);
  param_1[0x19] = (long)puVar1;
  param_1[0x2f] = (long)puVar2;
  if (pvVar3 != (void *)0x0) {
    param_1[0x69] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_004b7f58(param_1 + 0x34);
  pvVar3 = (void *)param_1[0x31];
  param_1[0x2f] = (long)&PTR___cxa_pure_virtual_00675f40;
  if (pvVar3 != (void *)0x0) {
    param_1[0x32] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_0035e448(param_1);
  return;
}


// ===== 004b6efc  FUN_004b6efc =====

void FUN_004b6efc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[0x68];
  puVar1 = PTR_vtable_0067d768 + 0x2a0;
  puVar2 = PTR_vtable_0067d768 + 0x2c8;
  *param_1 = (long)(PTR_vtable_0067d768 + 0x10);
  param_1[0x19] = (long)puVar1;
  param_1[0x2f] = (long)puVar2;
  if (pvVar3 != (void *)0x0) {
    param_1[0x69] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_004b7f58(param_1 + 0x34);
  pvVar3 = (void *)param_1[0x31];
  param_1[0x2f] = (long)&PTR___cxa_pure_virtual_00675f40;
  if (pvVar3 != (void *)0x0) {
    param_1[0x32] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_0035e448(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004b6f78  FUN_004b6f78 =====

undefined8 FUN_004b6f78(void)

{
  return 3;
}


// ===== 004b6f80  FUN_004b6f80 =====

bool FUN_004b6f80(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0xffff) < 0x27) && ((1L << ((ulong)param_2 & 0x3f) & 0x4000002c0cU) != 0)) {
    return true;
  }
  return (param_2 & 0xffff) == 0x5b;
}


// ===== 004b6fbc  rive::Shape::onAddedDirty =====

/* rive::Shape::onAddedDirty(rive::CoreContext*) */

undefined1 __thiscall rive::Shape::onAddedDirty(Shape *this,CoreContext *param_1)

{
  Shape *pSVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  pSVar1 = (Shape *)0x0;
  if (param_1 != (CoreContext *)0x0) {
    pSVar1 = (Shape *)(param_1 + -0x998);
  }
  *(Shape **)(this + 0x40) = pSVar1;
  *(Shape **)(this + 0x80) = pSVar1;
  if (pSVar1 != this) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0x28));
    lVar4 = *plVar3;
    *(long **)(this + 0x30) = plVar3;
    (**(code **)(lVar4 + 0x90))(plVar3,this);
  }
  if ((byte)this[0x134] - 3 < 0x1a) {
    uVar5 = (ulong)((byte)this[0x134] - 3) & 0xff;
    if (uVar5 - 0xb < 0xfffffffffffffff6) {
      *(Shape **)(this + 0x1e0) = pSVar1;
      *(Shape **)(this + 0x220) = pSVar1;
      if (pSVar1 != this + 0x1a0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))
                                   (param_1,*(undefined4 *)(this + 0x1c8));
        lVar4 = *plVar3;
        *(long **)(this + 0x1d0) = plVar3;
        (**(code **)(lVar4 + 0x90))(plVar3,this + 0x1a0);
      }
      uVar2 = 0;
    }
    else {
      uVar2 = (&DAT_00253488)[uVar5];
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


// ===== 004b70a0  rive::Shape::onAddedClean =====

/* rive::Shape::onAddedClean(rive::CoreContext*) */

undefined8 rive::Shape::onAddedClean(CoreContext *param_1)

{
  short sVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  CoreContext *pCVar5;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x5b);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  *(undefined8 *)(param_1 + 0x370) = 0;
  pCVar5 = param_1;
  do {
    pCVar5 = *(CoreContext **)(pCVar5 + 0x30);
    if (pCVar5 == (CoreContext *)0x0) {
      return 0;
    }
    sVar1 = (**(code **)(*(long *)pCVar5 + 0x10))(pCVar5);
  } while (sVar1 != 0x1fc);
  *(CoreContext **)(param_1 + 0x370) = pCVar5 + 0x1a8;
  return 0;
}


// ===== 004b7124  rive::Shape::collapse =====

/* rive::Shape::collapse(bool) */

uint __thiscall rive::Shape::collapse(Shape *this,bool param_1)

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
    Component::collapse((Component *)(this + 0x1a0),param_1);
  }
  return uVar2 & 1;
}


// ===== 004b71e8  rive::Shape::buildDependencies =====

/* rive::Shape::buildDependencies() */

void __thiscall rive::Shape::buildDependencies(Shape *this)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  Component::addDependent(*(Component **)(this + 0x228),(Component *)(this + 0x1a0));
  puVar7 = *(undefined8 **)(*(long *)(this + 0x228) + 0x348);
  for (puVar6 = *(undefined8 **)(*(long *)(this + 0x228) + 0x340); puVar6 != puVar7;
      puVar6 = puVar6 + 1) {
    Component::addDependent((Component *)*puVar6,(Component *)(this + 0x1a0));
  }
  if (*(Component **)(this + 0x30) != (Component *)0x0) {
    Component::addDependent(*(Component **)(this + 0x30),(Component *)this);
  }
  plVar2 = *(long **)(this + 400);
  plVar4 = *(long **)(this + 0x188);
  while (plVar4 != plVar2) {
    plVar5 = *(long **)(*plVar4 + 200);
    iVar3 = *(int *)(*plVar4 + 0xa4);
    iVar1 = *(int *)(this + 0x134);
    if (iVar3 != 0x7f) {
      iVar1 = iVar3;
    }
    (**(code **)(*plVar5 + 0x40))(plVar5,iVar1);
    plVar4 = plVar4 + 1;
  }
  return;
}


// ===== 004b7288  rive::Shape::update =====

/* rive::Shape::update(rive::ComponentDirt) */

void __thiscall rive::Shape::update(Shape *this,uint param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  
  if ((param_2 >> 6 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this);
  }
  if (((param_2 & 0xffff) >> 7 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this);
  }
  if (((param_2 & 0xffff) >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xa0);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      fVar4 = (float)(**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      *(float *)(this + 0xe8) = fVar4 * *(float *)(this + 0xe8);
    }
    plVar3 = *(long **)(this + 0x188);
    plVar1 = *(long **)(this + 400);
    if (plVar3 != plVar1) {
      fVar4 = *(float *)(this + 0xe8);
      do {
        puVar2 = *(undefined8 **)(*plVar3 + 0xd0);
        if (*(float *)((long)puVar2 + 0xc) != fVar4) {
          *(float *)((long)puVar2 + 0xc) = fVar4;
          (**(code **)*puVar2)();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
  }
  return;
}


// ===== 004b7360  rive::Shape::hitTestPoint =====

/* rive::Shape::hitTestPoint(rive::Vec2D const&, bool, bool) */

ulong rive::Shape::hitTestPoint(Vec2D *param_1,bool param_2,bool param_3)

{
  ulong uVar1;
  float *pfVar2;
  ulong in_x3;
  uint uVar3;
  long *plVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  float in_s3;
  float fVar6;
  
  pfVar2 = (float *)(ulong)param_2;
  if ((in_x3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b73ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar4 + 0x88))(plVar4,pfVar2,param_3,0);
      return uVar1;
    }
    uVar3 = 1;
  }
  else {
    if ((*(uint *)(param_1 + 0x138) >> 4 & 1) == 0) {
      *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x10;
      (**(code **)(*(long *)param_1 + 0x1d0))();
      fVar5 = (float)computeWorldBounds((Shape *)param_1,(Mat2D *)0x0);
      *(float *)(param_1 + 0x358) = fVar5;
      *(float *)(param_1 + 0x35c) = in_s1;
      *(float *)(param_1 + 0x360) = in_s2;
      *(float *)(param_1 + 0x364) = in_s3;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x358);
      in_s1 = *(float *)(param_1 + 0x35c);
      in_s2 = *(float *)(param_1 + 0x360);
      in_s3 = *(float *)(param_1 + 0x364);
    }
    fVar6 = *pfVar2;
    uVar3 = 0;
    if ((((fVar6 < fVar5 == (NAN(fVar6) || NAN(fVar5))) && (fVar6 <= in_s2)) &&
        (fVar5 = pfVar2[1], fVar5 < in_s1 == (NAN(fVar5) || NAN(in_s1)))) && (fVar5 <= in_s3)) {
      plVar4 = *(long **)(param_1 + 0x30);
      if (plVar4 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar4 + 0x88))(plVar4,pfVar2,param_3,0);
        uVar3 = 0;
        if ((uVar1 & 1) == 0) goto LAB_004b7480;
      }
      uVar1 = hitTestHiFi((Shape *)param_1,(Vec2D *)pfVar2,2.0);
      return uVar1;
    }
  }
LAB_004b7480:
  return (ulong)uVar3;
}


// ===== 004b7494  FUN_004b7494 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7494(Shape *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(param_1 + 0xa4);
  fVar4 = *(float *)(param_1 + 0xb0);
  local_30 = 0;
  fVar2 = (float)*(undefined8 *)(param_1 + 0xa8);
  fVar6 = -fVar2;
  uStack_38 = _UNK_00281c00;
  local_40 = _DAT_00281bf8;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  fVar8 = (float)NEON_fmadd(fVar5,fVar4,fVar6 * fVar3);
  if (fVar8 != 0.0) {
    fVar8 = 1.0 / fVar8;
    fVar9 = (float)*(undefined8 *)(param_1 + 0xb4);
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
    uVar7 = NEON_rev64(CONCAT44(fVar10 * -fVar5,fVar9 * -fVar4),4);
    uStack_38 = CONCAT44(fVar5 * fVar8,-fVar3 * fVar8);
    local_40 = CONCAT44(fVar6 * fVar8,fVar4 * fVar8);
    local_30 = NEON_rev64(CONCAT44(fVar8 * ((float)((ulong)uVar7 >> 0x20) + fVar10 * fVar3),
                                   fVar8 * ((float)uVar7 + fVar9 * fVar2)),4);
  }
  rive::Shape::computeWorldBounds(param_1,(Mat2D *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b7560  rive::Shape::draw =====

/* rive::Shape::draw(rive::Renderer*) */

void __thiscall rive::Shape::draw(Shape *this,Renderer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Shape SVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = *(undefined8 **)(this + 0x188);
  puVar2 = *(undefined8 **)(this + 400);
  SVar3 = this[0x170];
  uVar4 = (long)puVar2 - (long)puVar1;
  for (; puVar2 != puVar1; puVar1 = puVar1 + 1) {
    plVar7 = (long *)*puVar1;
    uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7);
    if (((uVar5 & 1) != 0) &&
       (lVar6 = (**(code **)(*plVar7 + 0xf0))(plVar7,this + 0x178), lVar6 != 0)) {
      (**(code **)(*plVar7 + 0xe0))
                (plVar7,param_1,lVar6,this + 0xa4,0,0,SVar3 != (Shape)0x0 || 8 < uVar4);
    }
  }
  return;
}


// ===== 004b761c  rive::Shape::hitTest =====

/* rive::Shape::hitTest(rive::HitInfo*, rive::Mat2D const&) */

Shape * __thiscall rive::Shape::hitTest(Shape *this,HitInfo *param_1,Mat2D *param_2)

{
  Shape *pSVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  bool bVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  Shape SVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  byte bVar30;
  byte bVar31;
  float fVar24;
  uint uVar25;
  float fVar26;
  undefined8 uVar27;
  byte bVar33;
  byte bVar35;
  byte bVar36;
  float fVar34;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar28 [16];
  byte bVar32;
  byte bVar37;
  byte bVar45;
  undefined1 auVar29 [16];
  byte bVar46;
  byte bVar50;
  byte bVar51;
  float fVar47;
  byte bVar52;
  float fVar48;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  float fVar54;
  undefined8 uVar49;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  byte bVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined4 uVar78;
  undefined8 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  float fVar88;
  undefined8 uVar89;
  undefined8 local_130;
  undefined8 uStack_120;
  undefined *local_110 [2];
  uint *local_100;
  uint *local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d0;
  int local_cc;
  char local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int local_98;
  long local_90;
  uint *puVar15;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  if (*(float *)(this + 0xe8) != 0.0) {
    puVar21 = *(undefined8 **)(this + 400);
    if (*(undefined8 **)(this + 0x188) != puVar21) {
      SVar19 = this[0x180];
      puVar23 = *(undefined8 **)(this + 0x188);
      do {
        puVar22 = puVar23 + 1;
        bVar8 = (**(code **)(*(long *)*puVar23 + 0xd8))();
        SVar19 = (Shape)(bVar8 | (byte)SVar19);
        puVar23 = puVar22;
      } while (puVar22 != puVar21);
      puVar21 = *(undefined8 **)(this + 400);
      if (puVar21 != *(undefined8 **)(this + 0x188)) {
        puVar2 = PTR_vtable_0067d5a0 + 0x10;
        do {
          puVar21 = puVar21 + -1;
          plVar20 = (long *)*puVar21;
          uVar10 = (**(code **)(*plVar20 + 0x98))(plVar20);
          if ((((uVar10 & 1) != 0) && ((*(byte *)(plVar20[0x1a] + 8) >> 1 & 1) == 0)) &&
             (uVar10 = (**(code **)(*plVar20 + 0x98))(plVar20), (uVar10 & 1) != 0)) {
            uVar9 = (**(code **)(*plVar20 + 0xd8))(plVar20);
            uStack_120 = *(undefined8 *)param_2;
            fVar26 = (float)uStack_120;
            fVar48 = (float)((ulong)uStack_120 >> 0x20);
            local_130 = *(undefined8 *)(param_2 + 8);
            uVar89 = *(undefined8 *)(param_2 + 0x10);
            if ((uVar9 & 0x42) != 0) {
              pSVar1 = this + 0xa8;
              uVar49 = *(undefined8 *)(this + 0xb0);
              uVar67 = (undefined1)((ulong)uVar49 >> 8);
              uVar69 = (undefined1)((ulong)uVar49 >> 0x10);
              uVar71 = (undefined1)((ulong)uVar49 >> 0x18);
              fVar34 = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20);
              fVar54 = (float)local_130;
              fVar88 = (float)((ulong)local_130 >> 0x20);
              auVar4[9] = uVar67;
              auVar4._0_9_ = *(unkbyte9 *)pSVar1;
              auVar4[10] = uVar69;
              auVar4[0xb] = uVar71;
              auVar5[9] = uVar67;
              auVar5._0_9_ = *(unkbyte9 *)pSVar1;
              auVar5[10] = uVar69;
              auVar5[0xb] = uVar71;
              fVar47 = (float)((ulong)*(undefined8 *)pSVar1 >> 0x20);
              fVar24 = (float)*(undefined8 *)(this + 0xb4);
              uVar89 = CONCAT44((float)((ulong)uVar89 >> 0x20) + fVar88 * fVar34 + fVar48 * fVar24,
                                (float)uVar89 + fVar54 * fVar34 + fVar26 * fVar24);
              fVar24 = fVar54 * (float)*(unkbyte9 *)pSVar1 +
                       (float)*(undefined8 *)(this + 0xa4) * fVar26;
              fVar34 = fVar88 * (float)*(unkbyte9 *)pSVar1 +
                       (float)*(undefined8 *)(this + 0xa4) * fVar48;
              uVar67 = SUB41(fVar34,0);
              uVar69 = (undefined1)((uint)fVar34 >> 8);
              uVar71 = (undefined1)((uint)fVar34 >> 0x10);
              uVar73 = (undefined1)((uint)fVar34 >> 0x18);
              fVar26 = fVar54 * auVar5._8_4_ + fVar47 * fVar26;
              uVar74 = (undefined1)((uint)fVar26 >> 8);
              uVar75 = (undefined1)((uint)fVar26 >> 0x10);
              uVar76 = (undefined1)((uint)fVar26 >> 0x18);
              fVar48 = fVar88 * auVar4._8_4_ + fVar47 * fVar48;
              uVar77 = (undefined1)((uint)fVar48 >> 8);
              uVar80 = (undefined1)((uint)fVar48 >> 0x10);
              uVar81 = (undefined1)((uint)fVar48 >> 0x18);
              auVar28[4] = uVar67;
              auVar28._0_4_ = fVar24;
              auVar28[5] = uVar69;
              auVar28[6] = uVar71;
              auVar28[7] = uVar73;
              auVar28[8] = SUB41(fVar26,0);
              auVar28[9] = uVar74;
              auVar28[10] = uVar75;
              auVar28[0xb] = uVar76;
              auVar28[0xc] = SUB41(fVar48,0);
              auVar28[0xd] = uVar77;
              auVar28[0xe] = uVar80;
              auVar28[0xf] = uVar81;
              auVar6[4] = uVar67;
              auVar6._0_4_ = fVar24;
              auVar6[5] = uVar69;
              auVar6[6] = uVar71;
              auVar6[7] = uVar73;
              auVar6[8] = SUB41(fVar26,0);
              auVar6[9] = uVar74;
              auVar6[10] = uVar75;
              auVar6[0xb] = uVar76;
              auVar6[0xc] = SUB41(fVar48,0);
              auVar6[0xd] = uVar77;
              auVar6[0xe] = uVar80;
              auVar6[0xf] = uVar81;
              auVar28 = NEON_ext(auVar28,auVar6,8,1);
              local_130 = auVar28._0_8_;
              uStack_120 = CONCAT17(uVar73,CONCAT16(uVar71,CONCAT15(uVar69,CONCAT14(uVar67,fVar24)))
                                   );
            }
            HitTestCommandPath::HitTestCommandPath((HitTestCommandPath *)local_110,(TAABB *)param_1)
            ;
            puVar22 = *(undefined8 **)(this + 0x348);
            for (puVar23 = *(undefined8 **)(this + 0x340); puVar23 != puVar22; puVar23 = puVar23 + 1
                ) {
              plVar20 = (long *)*puVar23;
              puVar11 = (undefined8 *)(**(code **)(*plVar20 + 0x1d8))(plVar20);
              uVar67 = (undefined1)uVar89;
              uVar69 = (undefined1)((ulong)uVar89 >> 8);
              uVar71 = (undefined1)((ulong)uVar89 >> 0x10);
              uVar73 = (undefined1)((ulong)uVar89 >> 0x18);
              uVar74 = (undefined1)((ulong)uVar89 >> 0x20);
              uVar75 = (undefined1)((ulong)uVar89 >> 0x28);
              uVar76 = (undefined1)((ulong)uVar89 >> 0x30);
              uVar77 = (undefined1)((ulong)uVar89 >> 0x38);
              uVar80 = (undefined1)uStack_120;
              uVar81 = (undefined1)((ulong)uStack_120 >> 8);
              uVar82 = (undefined1)((ulong)uStack_120 >> 0x10);
              uVar83 = (undefined1)((ulong)uStack_120 >> 0x18);
              uVar84 = (undefined1)((ulong)uStack_120 >> 0x20);
              uVar85 = (undefined1)((ulong)uStack_120 >> 0x28);
              uVar86 = (undefined1)((ulong)uStack_120 >> 0x30);
              uVar87 = (undefined1)((ulong)uStack_120 >> 0x38);
              uVar49 = local_130;
              uVar27 = uStack_120;
              if (((byte)SVar19 & 0x42) != 0) {
                uVar27 = *(undefined8 *)param_2;
                uVar49 = *(undefined8 *)(param_2 + 8);
                uVar79 = *(undefined8 *)(param_2 + 0x10);
                uVar67 = (undefined1)uVar79;
                uVar69 = (undefined1)((ulong)uVar79 >> 8);
                uVar71 = (undefined1)((ulong)uVar79 >> 0x10);
                uVar73 = (undefined1)((ulong)uVar79 >> 0x18);
                uVar74 = (undefined1)((ulong)uVar79 >> 0x20);
                uVar75 = (undefined1)((ulong)uVar79 >> 0x28);
                uVar76 = (undefined1)((ulong)uVar79 >> 0x30);
                uVar77 = (undefined1)((ulong)uVar79 >> 0x38);
                uVar80 = (undefined1)uVar27;
                uVar81 = (undefined1)((ulong)uVar27 >> 8);
                uVar82 = (undefined1)((ulong)uVar27 >> 0x10);
                uVar83 = (undefined1)((ulong)uVar27 >> 0x18);
                uVar84 = (undefined1)((ulong)uVar27 >> 0x20);
                uVar85 = (undefined1)((ulong)uVar27 >> 0x28);
                uVar86 = (undefined1)((ulong)uVar27 >> 0x30);
                uVar87 = (undefined1)((ulong)uVar27 >> 0x38);
              }
              fVar88 = (float)((ulong)*(undefined8 *)((long)puVar11 + 4) >> 0x20);
              fVar26 = (float)*(undefined8 *)((long)puVar11 + 4);
              fVar48 = (float)*(undefined8 *)((long)puVar11 + 0xc);
              fVar34 = (float)((ulong)puVar11[2] >> 0x20);
              fVar47 = (float)uVar49;
              fVar54 = (float)((ulong)uVar49 >> 0x20);
              fVar24 = (float)puVar11[2];
              local_c0 = CONCAT44(fVar54 * fVar26 +
                                  (float)*puVar11 *
                                  (float)CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))),
                                  fVar47 * fVar26 +
                                  (float)*puVar11 *
                                  (float)CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))));
              uStack_b8 = CONCAT44(fVar54 * fVar48 +
                                   fVar88 * (float)CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,
                                                  uVar84))),
                                   fVar47 * fVar48 +
                                   fVar88 * (float)CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,
                                                  uVar80))));
              local_b0 = CONCAT44((float)CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) +
                                  fVar54 * fVar34 + (float)((ulong)uVar27 >> 0x20) * fVar24,
                                  (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67))) +
                                  fVar47 * fVar34 + (float)uVar27 * fVar24);
              RawPath::addTo((RawPath *)(plVar20 + 0x2d),(CommandPath *)local_110);
            }
            if (local_c4 == '\0') {
              if (local_dc != local_e4) {
                if (local_dc == local_e4 || local_dc < local_e4 != (NAN(local_dc) || NAN(local_e4)))
                {
                  iVar12 = 1;
                  uVar67 = SUB41(local_e0,0);
                  uVar69 = (undefined1)((uint)local_e0 >> 8);
                  uVar71 = (undefined1)((uint)local_e0 >> 0x10);
                  uVar73 = (undefined1)((uint)local_e0 >> 0x18);
                  fVar48 = local_e8;
                  fVar26 = local_dc;
                  fVar47 = local_e4;
                }
                else {
                  uVar67 = SUB41(local_e8,0);
                  uVar69 = (undefined1)((uint)local_e8 >> 8);
                  uVar71 = (undefined1)((uint)local_e8 >> 0x10);
                  uVar73 = (undefined1)((uint)local_e8 >> 0x18);
                  iVar12 = -1;
                  fVar48 = local_e0;
                  fVar26 = local_e4;
                  fVar47 = local_dc;
                }
                if ((fVar26 < local_d0 != (NAN(fVar26) || NAN(local_d0))) && (0.0 < fVar47)) {
                  uVar74 = 0;
                  uVar75 = 0;
                  uVar76 = 0;
                  uVar77 = 0;
                  if (0.0 <= fVar26) {
                    uVar74 = SUB41(fVar26,0);
                    uVar75 = (undefined1)((uint)fVar26 >> 8);
                    uVar76 = (undefined1)((uint)fVar26 >> 0x10);
                    uVar77 = (undefined1)((uint)fVar26 >> 0x18);
                  }
                  fVar54 = local_d0;
                  if (fVar47 == local_d0 || fVar47 < local_d0 != (NAN(fVar47) || NAN(local_d0))) {
                    fVar54 = fVar47;
                  }
                  iVar16 = (int)((float)CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) +
                                0.5);
                  iVar13 = (int)(fVar54 + 0.5) - iVar16;
                  if (iVar13 != 0 && iVar16 <= (int)(fVar54 + 0.5)) {
                    fVar48 = (fVar48 - (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67
                                                                                      )))) /
                             (fVar47 - fVar26);
                    puVar14 = local_100 + local_cc * iVar16;
                    uVar78 = NEON_fmadd(fVar48,0.0 - fVar26,
                                        CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67))));
                    if (0.0 <= fVar26) {
                      uVar78 = CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)));
                    }
                    fVar26 = (float)NEON_fmadd(fVar48,((float)iVar16 -
                                                      (float)CONCAT13(uVar77,CONCAT12(uVar76,
                                                  CONCAT11(uVar75,uVar74)))) + 0.5,uVar78);
                    fVar26 = fVar26 + 0.5;
                    do {
                      uVar67 = 0;
                      uVar69 = 0;
                      uVar71 = 0;
                      uVar73 = 0;
                      if (0.0 <= fVar26) {
                        uVar67 = SUB41(fVar26,0);
                        uVar69 = (undefined1)((uint)fVar26 >> 8);
                        uVar71 = (undefined1)((uint)fVar26 >> 0x10);
                        uVar73 = (undefined1)((uint)fVar26 >> 0x18);
                      }
                      uVar9 = (uint)(float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)))
                      ;
                      if ((int)uVar9 < local_cc) {
                        uVar10 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
                        *(int *)((long)puVar14 + uVar10) = *(int *)((long)puVar14 + uVar10) + iVar12
                        ;
                      }
                      fVar26 = fVar48 + fVar26;
                      iVar13 = iVar13 + -1;
                      puVar14 = puVar14 + local_cc;
                    } while (iVar13 != 0);
                  }
                }
              }
              local_c4 = '\x01';
            }
            uVar9 = 1;
            if (local_98 == 0) {
              uVar9 = 0xffffffff;
            }
            if (local_100 == local_f8) {
              bVar7 = false;
            }
            else {
              uVar10 = (long)local_f8 + (-4 - (long)local_100);
              if (uVar10 < 0x1c) {
                uVar25 = 0;
                puVar14 = local_100;
LAB_004b7944:
                do {
                  puVar15 = puVar14 + 1;
                  uVar25 = *puVar14 & uVar9 | uVar25;
                  puVar14 = puVar15;
                } while (puVar15 != local_f8);
              }
              else {
                bVar8 = 0;
                bVar30 = 0;
                bVar31 = 0;
                bVar32 = 0;
                bVar33 = 0;
                bVar35 = 0;
                bVar36 = 0;
                bVar37 = 0;
                bVar38 = 0;
                bVar39 = 0;
                bVar40 = 0;
                bVar41 = 0;
                bVar42 = 0;
                bVar43 = 0;
                bVar44 = 0;
                bVar45 = 0;
                bVar46 = 0;
                bVar50 = 0;
                bVar51 = 0;
                bVar52 = 0;
                bVar53 = 0;
                bVar55 = 0;
                bVar56 = 0;
                bVar57 = 0;
                bVar58 = 0;
                bVar59 = 0;
                bVar60 = 0;
                bVar61 = 0;
                bVar62 = 0;
                bVar63 = 0;
                bVar64 = 0;
                bVar65 = 0;
                bVar66 = (byte)uVar9;
                bVar68 = (byte)(uVar9 >> 8);
                bVar70 = (byte)(uVar9 >> 0x10);
                bVar72 = (byte)(uVar9 >> 0x18);
                puVar14 = local_100 + 4;
                uVar10 = (uVar10 >> 2) + 1;
                uVar17 = uVar10 & 0x7ffffffffffffff8;
                uVar18 = uVar17;
                do {
                  uVar79 = *(undefined8 *)(puVar14 + -2);
                  uVar27 = *(undefined8 *)(puVar14 + -4);
                  uVar49 = *(undefined8 *)(puVar14 + 2);
                  uVar89 = *(undefined8 *)puVar14;
                  uVar18 = uVar18 - 8;
                  puVar14 = puVar14 + 8;
                  bVar8 = (byte)uVar27 & bVar66 | bVar8;
                  bVar30 = (byte)((ulong)uVar27 >> 8) & bVar68 | bVar30;
                  bVar31 = (byte)((ulong)uVar27 >> 0x10) & bVar70 | bVar31;
                  bVar32 = (byte)((ulong)uVar27 >> 0x18) & bVar72 | bVar32;
                  bVar33 = (byte)((ulong)uVar27 >> 0x20) & bVar66 | bVar33;
                  bVar35 = (byte)((ulong)uVar27 >> 0x28) & bVar68 | bVar35;
                  bVar36 = (byte)((ulong)uVar27 >> 0x30) & bVar70 | bVar36;
                  bVar37 = (byte)((ulong)uVar27 >> 0x38) & bVar72 | bVar37;
                  bVar38 = (byte)uVar79 & bVar66 | bVar38;
                  bVar39 = (byte)((ulong)uVar79 >> 8) & bVar68 | bVar39;
                  bVar40 = (byte)((ulong)uVar79 >> 0x10) & bVar70 | bVar40;
                  bVar41 = (byte)((ulong)uVar79 >> 0x18) & bVar72 | bVar41;
                  bVar42 = (byte)((ulong)uVar79 >> 0x20) & bVar66 | bVar42;
                  bVar43 = (byte)((ulong)uVar79 >> 0x28) & bVar68 | bVar43;
                  bVar44 = (byte)((ulong)uVar79 >> 0x30) & bVar70 | bVar44;
                  bVar45 = (byte)((ulong)uVar79 >> 0x38) & bVar72 | bVar45;
                  bVar46 = (byte)uVar89 & bVar66 | bVar46;
                  bVar50 = (byte)((ulong)uVar89 >> 8) & bVar68 | bVar50;
                  bVar51 = (byte)((ulong)uVar89 >> 0x10) & bVar70 | bVar51;
                  bVar52 = (byte)((ulong)uVar89 >> 0x18) & bVar72 | bVar52;
                  bVar53 = (byte)((ulong)uVar89 >> 0x20) & bVar66 | bVar53;
                  bVar55 = (byte)((ulong)uVar89 >> 0x28) & bVar68 | bVar55;
                  bVar56 = (byte)((ulong)uVar89 >> 0x30) & bVar70 | bVar56;
                  bVar57 = (byte)((ulong)uVar89 >> 0x38) & bVar72 | bVar57;
                  bVar58 = (byte)uVar49 & bVar66 | bVar58;
                  bVar59 = (byte)((ulong)uVar49 >> 8) & bVar68 | bVar59;
                  bVar60 = (byte)((ulong)uVar49 >> 0x10) & bVar70 | bVar60;
                  bVar61 = (byte)((ulong)uVar49 >> 0x18) & bVar72 | bVar61;
                  bVar62 = (byte)((ulong)uVar49 >> 0x20) & bVar66 | bVar62;
                  bVar63 = (byte)((ulong)uVar49 >> 0x28) & bVar68 | bVar63;
                  bVar64 = (byte)((ulong)uVar49 >> 0x30) & bVar70 | bVar64;
                  bVar65 = (byte)((ulong)uVar49 >> 0x38) & bVar72 | bVar65;
                } while (uVar18 != 0);
                auVar29[0] = bVar46 | bVar8;
                auVar29[1] = bVar50 | bVar30;
                auVar29[2] = bVar51 | bVar31;
                auVar29[3] = bVar52 | bVar32;
                auVar29[4] = bVar53 | bVar33;
                auVar29[5] = bVar55 | bVar35;
                auVar29[6] = bVar56 | bVar36;
                auVar29[7] = bVar57 | bVar37;
                auVar29[8] = bVar58 | bVar38;
                auVar29[9] = bVar59 | bVar39;
                auVar29[10] = bVar60 | bVar40;
                auVar29[0xb] = bVar61 | bVar41;
                auVar29[0xc] = bVar62 | bVar42;
                auVar29[0xd] = bVar63 | bVar43;
                auVar29[0xe] = bVar64 | bVar44;
                auVar29[0xf] = bVar65 | bVar45;
                auVar28 = NEON_ext(auVar29,auVar29,8,1);
                uVar25 = CONCAT13(auVar29[3] | auVar28[3],
                                  CONCAT12(auVar29[2] | auVar28[2],
                                           CONCAT11(auVar29[1] | auVar28[1],auVar29[0] | auVar28[0])
                                          ));
                uVar25 = uVar25 | (uint)(CONCAT17(auVar29[7] | auVar28[7],
                                                  CONCAT16(auVar29[6] | auVar28[6],
                                                           CONCAT15(auVar29[5] | auVar28[5],
                                                                    CONCAT14(auVar29[4] | auVar28[4]
                                                                             ,uVar25)))) >> 0x20);
                if (uVar10 != uVar17) {
                  puVar14 = local_100 + uVar17;
                  goto LAB_004b7944;
                }
              }
              bVar7 = uVar25 != 0;
            }
            local_110[0] = puVar2;
            if (local_100 != (uint *)0x0) {
              local_f8 = local_100;
              operator_delete(local_100);
            }
            if (bVar7) goto LAB_004b7660;
          }
        } while (puVar21 != *(undefined8 **)(this + 0x188));
      }
    }
  }
  this = (Shape *)0x0;
LAB_004b7660:
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b7a60  rive::Shape::willDraw =====

/* rive::Shape::willDraw() */

byte __thiscall rive::Shape::willDraw(Shape *this)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)this + 0x1e8))();
  return *(float *)(this + 0xe8) != 0.0 & (bVar1 ^ 0xff);
}


// ===== 004b7a98  FUN_004b7a98 =====

void FUN_004b7a98(void)

{
  return;
}


// ===== 004b7a9c  rive::Shape::length =====

/* WARNING: Removing unreachable block (ram,0x004b7c1c) */
/* WARNING: Removing unreachable block (ram,0x004b7c28) */
/* rive::Shape::length() */

float __thiscall rive::Shape::length(Shape *this)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  Path *this_00;
  Path *pPVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  void *local_1a8;
  void *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  void *local_110;
  void *local_108;
  void *local_f8;
  void *local_f0;
  void *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined1 local_98;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar7 = *(float *)(this + 0x368);
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
    puVar6 = *(undefined8 **)(this + 0x348);
    for (puVar5 = *(undefined8 **)(this + 0x340); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      this_00 = (Path *)*puVar5;
      local_98 = 0;
      pvStack_c8 = (void *)0x0;
      local_d0 = (void *)0x0;
      local_b8 = (void *)0x0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      local_b0 = (void *)0x0;
      if (((*(ushort *)(this_00 + 0x60) ^ 0xffff) & 0x2090) == 0) {
        pPVar4 = (Path *)&local_d0;
        Path::buildPath(this_00,(RawPath *)&local_d0);
      }
      else {
        pPVar4 = this_00 + 0x168;
      }
      (**(code **)(*(long *)this_00 + 0x1d8))(this_00);
      RawPath::transform((Mat2D *)pPVar4);
      local_128 = 0;
      uStack_120 = 0;
      local_130 = (void *)0x0;
      if ((long)local_f0 - (long)local_f8 != 0) {
        FUN_0047ac1c(&local_130,(long)local_f0 - (long)local_f8);
      }
      while (ContourMeasureIter::next(), local_1a8 != (void *)0x0) {
        fVar8 = *(float *)((long)local_1a8 + 0x38);
        iVar2 = FUN_00340fe0(0xffffffff,local_1a8);
        if (iVar2 == 1) {
          pvVar3 = *(void **)((long)local_1a8 + 0x20);
          if (pvVar3 != (void *)0x0) {
            *(void **)((long)local_1a8 + 0x28) = pvVar3;
            operator_delete(pvVar3);
          }
          pvVar3 = *(void **)((long)local_1a8 + 8);
          if (pvVar3 != (void *)0x0) {
            *(void **)((long)local_1a8 + 0x10) = pvVar3;
            operator_delete(pvVar3);
          }
          operator_delete(local_1a8);
        }
        fVar7 = fVar7 + fVar8;
      }
      if (local_130 != (void *)0x0) {
        operator_delete(local_130);
      }
      if (local_f8 != (void *)0x0) {
        local_f0 = local_f8;
        operator_delete(local_f8);
      }
      if (local_110 != (void *)0x0) {
        local_108 = local_110;
        operator_delete(local_110);
      }
      if (local_b8 != (void *)0x0) {
        local_b0 = local_b8;
        operator_delete(local_b8);
      }
      if (local_d0 != (void *)0x0) {
        pvStack_c8 = local_d0;
        operator_delete(local_d0);
      }
    }
    *(float *)(this + 0x368) = fVar7;
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return fVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b7cb0  FUN_004b7cb0 =====

void FUN_004b7cb0(void)

{
  return;
}


// ===== 004b7cb4  FUN_004b7cb4 =====

undefined8 FUN_004b7cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 004b7cbc  rive::Shape::measureLayout =====

/* rive::Shape::measureLayout(float, rive::LayoutMeasureMode, float, rive::LayoutMeasureMode) */

float __thiscall
rive::Shape::measureLayout
          (undefined4 param_1,float param_2,Shape *this,undefined4 param_4,undefined4 param_5)

{
  long *plVar1;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long *plVar2;
  
  plVar3 = *(long **)(this + 0x348);
  if (*(long **)(this + 0x340) == plVar3) {
    fVar7 = 0.0;
  }
  else {
    fVar6 = 0.0;
    fVar7 = 0.0;
    plVar1 = *(long **)(this + 0x340);
    do {
      plVar2 = plVar1 + 1;
      fVar5 = param_2;
      fVar4 = (float)(*(code *)**(undefined8 **)(*plVar1 + 200))
                               (param_1,(undefined8 *)(*plVar1 + 200),param_4,param_5);
      if (fVar4 <= fVar7) {
        fVar4 = fVar7;
      }
      fVar7 = fVar4;
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      fVar6 = fVar5;
      plVar1 = plVar2;
    } while (plVar2 != plVar3);
  }
  return fVar7;
}


// ===== 004b7d60  FUN_004b7d60 =====

long FUN_004b7d60(long param_1)

{
  return param_1 + 0xa4;
}


// ===== 004b7d68  rive::Shape::worldPath =====

/* rive::Shape::worldPath() */

Shape * __thiscall rive::Shape::worldPath(Shape *this)

{
  return this + 0x288;
}


// ===== 004b7d70  rive::Shape::localPath =====

/* rive::Shape::localPath() */

Shape * __thiscall rive::Shape::localPath(Shape *this)

{
  return this + 0x230;
}


// ===== 004b7d78  rive::Shape::localClockwisePath =====

/* rive::Shape::localClockwisePath() */

Shape * __thiscall rive::Shape::localClockwisePath(Shape *this)

{
  return this + 0x2e0;
}


// ===== 004b7d80  rive::Shape::pathBuilder =====

/* rive::Shape::pathBuilder() */

Shape * __thiscall rive::Shape::pathBuilder(Shape *this)

{
  return this + 0x1a0;
}


// ===== 004b7d88  rive::Shape::measureLayout =====

/* non-virtual thunk to rive::Shape::measureLayout(float, rive::LayoutMeasureMode, float,
   rive::LayoutMeasureMode) */

float __thiscall
rive::Shape::measureLayout
          (undefined4 param_1,float param_2,Shape *this,undefined4 param_4,undefined4 param_5)

{
  long *plVar1;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long *plVar2;
  
  plVar3 = *(long **)(this + 0x280);
  if (*(long **)(this + 0x278) == plVar3) {
    fVar7 = 0.0;
  }
  else {
    fVar6 = 0.0;
    fVar7 = 0.0;
    plVar1 = *(long **)(this + 0x278);
    do {
      plVar2 = plVar1 + 1;
      fVar5 = param_2;
      fVar4 = (float)(*(code *)**(undefined8 **)(*plVar1 + 200))
                               (param_1,(undefined8 *)(*plVar1 + 200),param_4,param_5);
      if (fVar4 <= fVar7) {
        fVar4 = fVar7;
      }
      fVar7 = fVar4;
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      fVar6 = fVar5;
      plVar1 = plVar2;
    } while (plVar2 != plVar3);
  }
  return fVar7;
}


// ===== 004b7e2c  FUN_004b7e2c =====

undefined8 FUN_004b7e2c(long param_1)

{
  return *(undefined8 *)(param_1 + -0x138);
}


// ===== 004b7e38  rive::Shape::pathBuilder =====

/* non-virtual thunk to rive::Shape::pathBuilder() */

Shape * __thiscall rive::Shape::pathBuilder(Shape *this)

{
  return this + 0x28;
}


// ===== 004b7e40  FUN_004b7e40 =====

void FUN_004b7e40(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[0x39];
  puVar1 = PTR_vtable_0067d768 + 0x2a0;
  puVar2 = PTR_vtable_0067d768 + 0x2c8;
  param_1[-0x2f] = (long)(PTR_vtable_0067d768 + 0x10);
  param_1[-0x16] = (long)puVar1;
  *param_1 = (long)puVar2;
  if (pvVar3 != (void *)0x0) {
    param_1[0x3a] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_004b7f58(param_1 + 5);
  pvVar3 = (void *)param_1[2];
  *param_1 = (long)&PTR___cxa_pure_virtual_00675f40;
  if (pvVar3 != (void *)0x0) {
    param_1[3] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_0035e448(param_1 + -0x2f);
  return;
}


// ===== 004b7eb8  FUN_004b7eb8 =====

void FUN_004b7eb8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long *plVar4;
  
  plVar4 = param_1 + -0x2f;
  pvVar3 = (void *)param_1[0x39];
  puVar1 = PTR_vtable_0067d768 + 0x2a0;
  puVar2 = PTR_vtable_0067d768 + 0x2c8;
  *plVar4 = (long)(PTR_vtable_0067d768 + 0x10);
  param_1[-0x16] = (long)puVar1;
  *param_1 = (long)puVar2;
  if (pvVar3 != (void *)0x0) {
    param_1[0x3a] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_004b7f58(param_1 + 5);
  pvVar3 = (void *)param_1[2];
  *param_1 = (long)&PTR___cxa_pure_virtual_00675f40;
  if (pvVar3 != (void *)0x0) {
    param_1[3] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_0035e448(plVar4);
  operator_delete(plVar4);
  return;
}


// ===== 004b7f38  FUN_004b7f38 =====

long FUN_004b7f38(long param_1)

{
  return param_1 + -0xd4;
}


// ===== 004b7f40  rive::Shape::worldPath =====

/* non-virtual thunk to rive::Shape::worldPath() */

Shape * __thiscall rive::Shape::worldPath(Shape *this)

{
  return this + 0x110;
}


// ===== 004b7f48  rive::Shape::localPath =====

/* non-virtual thunk to rive::Shape::localPath() */

Shape * __thiscall rive::Shape::localPath(Shape *this)

{
  return this + 0xb8;
}


// ===== 004b7f50  rive::Shape::localClockwisePath =====

/* non-virtual thunk to rive::Shape::localClockwisePath() */

Shape * __thiscall rive::Shape::localClockwisePath(Shape *this)

{
  return this + 0x168;
}


// ===== 004b7f58  FUN_004b7f58 =====

void FUN_004b7f58(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0x2d];
  *param_1 = (long)(PTR_vtable_0067d758 + 0x10);
  if (pvVar2 != (void *)0x0) {
    param_1[0x2e] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x2a];
  if (pvVar2 != (void *)0x0) {
    param_1[0x2b] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[0x29];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pvVar2 = (void *)param_1[0x22];
  if (pvVar2 != (void *)0x0) {
    param_1[0x23] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1f];
  if (pvVar2 != (void *)0x0) {
    param_1[0x20] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[0x1e];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pvVar2 = (void *)param_1[0x17];
  if (pvVar2 != (void *)0x0) {
    param_1[0x18] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x14];
  if (pvVar2 != (void *)0x0) {
    param_1[0x15] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[0x13];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
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


// ===== 004b80bc  rive::Shape::computeWorldBounds =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Shape::computeWorldBounds(rive::Mat2D const*) const */

undefined1  [16] __thiscall rive::Shape::computeWorldBounds(Shape *this,Mat2D *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined8 uVar17;
  float fVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  ulong uVar26;
  undefined8 uVar27;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 (*local_98) [16];
  undefined1 (*pauStack_90) [16];
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar10 = *(undefined8 **)(this + 0x340);
  puVar11 = *(undefined8 **)(this + 0x348);
  local_a0 = 1;
  local_a8 = &PTR_FUN_006714d0;
  local_60 = 0;
  pauStack_90 = (undefined1 (*) [16])0x0;
  local_98 = (undefined1 (*) [16])0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  if (puVar10 == puVar11) {
    local_c0 = _DAT_0024e250;
    uStack_b8 = _UNK_0024e258;
  }
  else {
    bVar4 = true;
    uStack_b8 = _UNK_0024e258;
    local_c0 = _DAT_0024e250;
    do {
      plVar9 = (long *)*puVar10;
      uVar5 = (**(code **)(*plVar9 + 0x80))(plVar9);
      if ((uVar5 & 1) == 0) {
        RawPath::addTo((RawPath *)(plVar9 + 0x2d),(CommandPath *)&local_a8);
        pauVar6 = (undefined1 (*) [16])(**(code **)(*plVar9 + 0x1d8))(plVar9);
        if (param_1 == (Mat2D *)0x0) {
          auVar21 = *pauVar6;
          uVar27 = *(undefined8 *)pauVar6[1];
        }
        else {
          fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
          fVar16 = (float)*(undefined8 *)(*pauVar6 + 8);
          fVar19 = (float)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
          fVar12 = (float)*(undefined8 *)(param_1 + 0x10);
          fVar22 = (float)*(undefined8 *)*pauVar6;
          fVar24 = (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
          uVar27 = CONCAT44((float)((ulong)*(undefined8 *)pauVar6[1] >> 0x20) +
                            fVar19 * fVar15 + fVar24 * fVar12,
                            (float)*(undefined8 *)pauVar6[1] + fVar16 * fVar15 + fVar22 * fVar12);
          auVar21._0_4_ = fVar16 * *(float *)(param_1 + 4) + *(float *)param_1 * fVar22;
          auVar21._4_4_ = fVar19 * *(float *)(param_1 + 4) + *(float *)param_1 * fVar24;
          auVar21._8_4_ = fVar16 * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8) * fVar22;
          auVar21._12_4_ = fVar19 * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8) * fVar24;
        }
        auVar18 = NEON_ext(auVar21,auVar21,4,1);
        fVar15 = auVar21._12_4_;
        fVar19 = auVar21._0_4_;
        auVar18._8_8_ = auVar18._0_8_;
        uVar5 = (long)pauStack_90 - (long)local_98 >> 3;
        auVar21 = NEON_rev64(auVar18,4);
        uVar17 = NEON_fcmeq(auVar21._0_8_,0,4);
        uVar17 = CONCAT17(~(byte)((ulong)uVar17 >> 0x38),
                          CONCAT16(~(byte)((ulong)uVar17 >> 0x30),
                                   CONCAT15(~(byte)((ulong)uVar17 >> 0x28),
                                            CONCAT14(~(byte)((ulong)uVar17 >> 0x20),
                                                     CONCAT13(~(byte)((ulong)uVar17 >> 0x18),
                                                              CONCAT12(~(byte)((ulong)uVar17 >> 0x10
                                                                              ),CONCAT11(~(byte)((
                                                  ulong)uVar17 >> 8),~(byte)uVar17)))))));
        uVar26 = NEON_umaxp(uVar17,uVar17,4);
        fVar16 = (float)uVar27;
        fVar12 = (float)((ulong)uVar27 >> 0x20);
        uVar8 = (uint)((long)pauStack_90 - (long)local_98);
        if ((uVar26 & 1) == 0) {
          if ((uVar8 >> 3 & 1) == 0) {
            uVar26 = 0;
            if (uVar5 != 0) {
LAB_004b82d8:
              pfVar7 = (float *)(*local_98 + uVar26 * 8);
              do {
                uVar26 = uVar26 + 2;
                pfVar7[4] = fVar16 + pfVar7[2] * fVar19;
                pfVar7[5] = fVar12 + pfVar7[3] * fVar15;
                *pfVar7 = fVar16 + *pfVar7 * fVar19;
                pfVar7[1] = fVar12 + pfVar7[1] * fVar15;
                pfVar7 = pfVar7 + 4;
              } while (uVar26 < uVar5);
            }
          }
          else {
            uVar26 = 1;
            *(ulong *)*local_98 =
                 CONCAT44(fVar12 + (float)((ulong)*(undefined8 *)*local_98 >> 0x20) * fVar15,
                          fVar16 + (float)*(undefined8 *)*local_98 * fVar19);
            if (1 < uVar5) goto LAB_004b82d8;
          }
        }
        else if ((uVar8 >> 3 & 1) == 0) {
          uVar26 = 0;
          if (uVar5 != 0) {
LAB_004b8294:
            pauVar6 = (undefined1 (*) [16])(*local_98 + uVar26 * 8);
            do {
              auVar18 = *pauVar6;
              uVar26 = uVar26 + 2;
              auVar14 = NEON_rev64(auVar18,4);
              uVar27 = CONCAT44(fVar12 + auVar14._4_4_ * auVar21._4_4_ + auVar18._4_4_ * fVar15,
                                fVar16 + auVar14._0_4_ * auVar21._0_4_ + auVar18._0_4_ * fVar19);
              auVar23._8_4_ = fVar16 + auVar14._8_4_ * auVar21._8_4_ + auVar18._8_4_ * fVar19;
              auVar23._0_8_ = uVar27;
              auVar23._12_4_ = fVar12 + auVar14._12_4_ * auVar21._12_4_ + auVar18._12_4_ * fVar15;
              *(long *)(*pauVar6 + 8) = auVar23._8_8_;
              *(undefined8 *)*pauVar6 = uVar27;
              pauVar6 = pauVar6 + 1;
            } while (uVar26 < uVar5);
          }
        }
        else {
          uVar27 = *(undefined8 *)*local_98;
          uVar26 = 1;
          uVar17 = NEON_rev64(uVar27,4);
          *(ulong *)*local_98 =
               CONCAT44(fVar12 + (float)((ulong)uVar17 >> 0x20) * auVar21._4_4_ +
                        (float)((ulong)uVar27 >> 0x20) * fVar15,
                        fVar16 + (float)uVar17 * auVar21._0_4_ + (float)uVar27 * fVar19);
          if (1 < uVar5) goto LAB_004b8294;
        }
        if (((uint)((long)pauStack_90 - (long)local_98) >> 3 & 1) == 0) {
          if (local_98 == pauStack_90) {
            auVar14 = ZEXT816(0);
          }
          else {
            auVar14 = *local_98;
          }
          uVar5 = 2;
        }
        else {
          auVar14._0_8_ = *(undefined8 *)*local_98;
          uVar5 = 1;
          auVar14._8_8_ = auVar14._0_8_;
        }
        uVar26 = (long)pauStack_90 - (long)local_98 >> 3;
        auVar21 = auVar14;
        if (uVar5 < uVar26) {
          pauVar6 = (undefined1 (*) [16])(*local_98 + uVar5 * 8);
          do {
            uVar5 = uVar5 + 2;
            auVar14 = NEON_fminnm(auVar14,*pauVar6,4);
            auVar21 = NEON_fmaxnm(auVar21,*pauVar6,4);
            pauVar6 = pauVar6 + 1;
          } while (uVar5 < uVar26);
        }
        auVar18 = NEON_ext(auVar14,auVar14,8,1);
        auVar23 = NEON_ext(auVar21,auVar21,8,1);
        auVar13._0_8_ = NEON_fminnm(auVar14._0_8_,auVar18._0_8_,4);
        uVar17 = NEON_fmaxnm(auVar21._0_8_,auVar23._0_8_,4);
        uVar27 = auVar13._0_8_;
        if (!bVar4) {
          auVar2._8_8_ = uStack_b8;
          auVar2._0_8_ = local_c0;
          auVar13._8_8_ = uVar17;
          auVar21 = NEON_ext(auVar2,auVar2,8,1);
          auVar20._8_4_ = (int)uVar17;
          auVar20._0_8_ = local_c0;
          auVar25._8_8_ = auVar21._0_8_;
          auVar25._0_8_ = auVar13._0_8_;
          auVar20._12_4_ = (int)((ulong)uVar17 >> 0x20);
          auVar21 = NEON_fcmgt(auVar20,auVar25,4);
          auVar21 = NEON_bit(auVar2,auVar13,auVar21,1);
          uVar27 = auVar21._0_8_;
          uVar17 = auVar21._8_8_;
        }
        uStack_b8 = uVar17;
        local_c0 = uVar27;
        bVar4 = false;
        pauStack_90 = local_98;
        local_60 = 0;
        local_78 = pvStack_80;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar11);
    local_a8 = &PTR_FUN_006714d0;
    if (pvStack_80 != (void *)0x0) {
      local_78 = pvStack_80;
      operator_delete(pvStack_80);
    }
    if (local_98 != (undefined1 (*) [16])0x0) {
      pauStack_90 = local_98;
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    auVar3._8_8_ = uStack_b8;
    auVar3._0_8_ = local_c0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b83f8  FUN_004b83f8 =====

void FUN_004b83f8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_006714d0;
  if (pvVar1 != (void *)0x0) {
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004b8448  FUN_004b8448 =====

void FUN_004b8448(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_006714d0;
  if (pvVar1 != (void *)0x0) {
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004b8494  FUN_004b8494 =====

void FUN_004b8494(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  return;
}


// ===== 004b84ac  FUN_004b84ac =====

void FUN_004b84ac(void)

{
  return;
}


// ===== 004b84b0  FUN_004b84b0 =====

void FUN_004b84b0(void)

{
  return;
}


// ===== 004b84b4  FUN_004b84b4 =====

void FUN_004b84b4(long param_1)

{
  rive::RawPath::move(param_1 + 0x10);
  return;
}


// ===== 004b84bc  FUN_004b84bc =====

void FUN_004b84bc(long param_1)

{
  rive::RawPath::line(param_1 + 0x10);
  return;
}


// ===== 004b84c4  FUN_004b84c4 =====

void FUN_004b84c4(long param_1)

{
  rive::RawPath::cubic(param_1 + 0x10);
  return;
}


// ===== 004b84cc  FUN_004b84cc =====

void FUN_004b84cc(long param_1)

{
  rive::RawPath::close((RawPath *)(param_1 + 0x10));
  return;
}


// ===== 004b84d4  FUN_004b84d4 =====

undefined8 FUN_004b84d4(void)

{
  return 0;
}


// ===== 004b84dc  FUN_004b84dc =====

undefined8 FUN_004b84dc(void)

{
  return 0;
}


// ===== 004b84e4  rive::Shape::hitTestHiFi =====

/* rive::Shape::hitTestHiFi(rive::Vec2D const&, float) */

bool __thiscall rive::Shape::hitTestHiFi(Shape *this,Vec2D *param_1,float param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
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
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar37;
  byte bVar38;
  int iVar34;
  float fVar35;
  byte bVar39;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  int iVar41;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined1 auVar36 [16];
  byte bVar53;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  float fVar54;
  undefined8 uVar58;
  undefined8 uVar59;
  float fVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_c8 [2];
  uint *local_b8;
  uint *local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_88;
  int local_84;
  char local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int local_50;
  long local_48;
  uint *puVar10;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar60 = (float)*(undefined8 *)param_1;
  fVar54 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  iVar6 = (int)(float)(int)((fVar60 - param_2) + 0.5);
  iVar8 = (int)(float)(int)(fVar60 + param_2 + 0.5);
  iVar34 = (int)(float)(int)((fVar54 - param_2) + 0.5);
  iVar41 = (int)(float)(int)(fVar54 + param_2 + 0.5);
  uStack_d8 = CONCAT17((char)((uint)iVar41 >> 0x18),
                       CONCAT16((char)((uint)iVar41 >> 0x10),
                                CONCAT15((char)((uint)iVar41 >> 8),
                                         CONCAT14((char)iVar41,
                                                  CONCAT13((char)((uint)iVar8 >> 0x18),
                                                           CONCAT12((char)((uint)iVar8 >> 0x10),
                                                                    (short)(CONCAT15((char)((uint)
                                                  iVar8 >> 8),CONCAT14((char)iVar8,iVar6)) >> 0x20))
                                                  )))));
  local_e0 = CONCAT17((char)((uint)iVar34 >> 0x18),
                      CONCAT16((char)((uint)iVar34 >> 0x10),
                               CONCAT15((char)((uint)iVar34 >> 8),CONCAT14((char)iVar34,iVar6))));
  HitTestCommandPath::HitTestCommandPath((HitTestCommandPath *)local_c8,(TAABB *)&local_e0);
  puVar16 = *(undefined8 **)(this + 0x348);
  for (puVar15 = *(undefined8 **)(this + 0x340); puVar15 != puVar16; puVar15 = puVar15 + 1) {
    plVar14 = (long *)*puVar15;
    uVar4 = (**(code **)(*plVar14 + 0x80))(plVar14);
    if ((uVar4 & 1) == 0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar14 + 0x1d8))(plVar14);
      uStack_70 = puVar5[1];
      local_78 = *puVar5;
      local_68 = puVar5[2];
      RawPath::addTo((RawPath *)(plVar14 + 0x2d),(CommandPath *)local_c8);
    }
  }
  if (local_7c == '\0') {
    if (local_94 != local_9c) {
      if (local_94 == local_9c || local_94 < local_9c != (NAN(local_94) || NAN(local_9c))) {
        iVar6 = 1;
        fVar54 = local_94;
        fVar60 = local_a0;
        local_a0 = local_98;
        local_94 = local_9c;
      }
      else {
        iVar6 = -1;
        fVar54 = local_9c;
        fVar60 = local_98;
      }
      if ((fVar54 < local_88 != (NAN(fVar54) || NAN(local_88))) && (0.0 < local_94)) {
        fVar63 = 0.0;
        if (0.0 <= fVar54) {
          fVar63 = fVar54;
        }
        if (local_94 == local_88 || local_94 < local_88 != (NAN(local_94) || NAN(local_88))) {
          local_88 = local_94;
        }
        iVar34 = (int)(fVar63 + 0.5);
        iVar8 = (int)(local_88 + 0.5) - iVar34;
        if (iVar8 != 0 && iVar34 <= (int)(local_88 + 0.5)) {
          fVar35 = (fVar60 - local_a0) / (local_94 - fVar54);
          puVar9 = local_b8 + local_84 * iVar34;
          fVar60 = (float)NEON_fmadd(fVar35,0.0 - fVar54,local_a0);
          if (0.0 <= fVar54) {
            fVar60 = local_a0;
          }
          fVar54 = (float)NEON_fmadd(fVar35,((float)iVar34 - fVar63) + 0.5,fVar60);
          fVar54 = fVar54 + 0.5;
          do {
            fVar60 = 0.0;
            if (0.0 <= fVar54) {
              fVar60 = fVar54;
            }
            uVar12 = (uint)fVar60;
            if ((int)uVar12 < local_84) {
              uVar4 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2;
              *(int *)((long)puVar9 + uVar4) = *(int *)((long)puVar9 + uVar4) + iVar6;
            }
            fVar54 = fVar35 + fVar54;
            iVar8 = iVar8 + -1;
            puVar9 = puVar9 + local_84;
          } while (iVar8 != 0);
        }
      }
    }
    local_7c = '\x01';
  }
  uVar12 = 1;
  if (local_50 == 0) {
    uVar12 = 0xffffffff;
  }
  if (local_b8 == local_b0) {
    bVar3 = false;
    goto LAB_004b86b0;
  }
  uVar4 = (long)local_b0 + (-4 - (long)local_b8);
  if (uVar4 < 0x1c) {
    uVar7 = 0;
    puVar9 = local_b8;
LAB_004b8694:
    do {
      puVar10 = puVar9 + 1;
      uVar7 = *puVar9 & uVar12 | uVar7;
      puVar9 = puVar10;
    } while (puVar10 != local_b0);
  }
  else {
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
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar42 = 0;
    bVar43 = 0;
    bVar44 = 0;
    bVar45 = 0;
    bVar46 = 0;
    bVar47 = 0;
    bVar48 = 0;
    bVar49 = 0;
    bVar50 = 0;
    bVar51 = 0;
    bVar52 = 0;
    puVar9 = local_b8 + 4;
    uVar4 = (uVar4 >> 2) + 1;
    uVar11 = uVar4 & 0x7ffffffffffffff8;
    uVar13 = uVar11;
    do {
      uVar59 = *(undefined8 *)(puVar9 + -2);
      uVar58 = *(undefined8 *)(puVar9 + -4);
      uVar62 = *(undefined8 *)(puVar9 + 2);
      uVar61 = *(undefined8 *)puVar9;
      uVar13 = uVar13 - 8;
      puVar9 = puVar9 + 8;
      bVar53 = (byte)uVar12;
      bVar55 = (byte)(uVar12 >> 8);
      bVar56 = (byte)(uVar12 >> 0x10);
      bVar57 = (byte)(uVar12 >> 0x18);
      bVar17 = (byte)uVar58 & bVar53 | bVar17;
      bVar18 = (byte)((ulong)uVar58 >> 8) & bVar55 | bVar18;
      bVar19 = (byte)((ulong)uVar58 >> 0x10) & bVar56 | bVar19;
      bVar20 = (byte)((ulong)uVar58 >> 0x18) & bVar57 | bVar20;
      bVar21 = (byte)((ulong)uVar58 >> 0x20) & bVar53 | bVar21;
      bVar22 = (byte)((ulong)uVar58 >> 0x28) & bVar55 | bVar22;
      bVar23 = (byte)((ulong)uVar58 >> 0x30) & bVar56 | bVar23;
      bVar24 = (byte)((ulong)uVar58 >> 0x38) & bVar57 | bVar24;
      bVar25 = (byte)uVar59 & bVar53 | bVar25;
      bVar26 = (byte)((ulong)uVar59 >> 8) & bVar55 | bVar26;
      bVar27 = (byte)((ulong)uVar59 >> 0x10) & bVar56 | bVar27;
      bVar28 = (byte)((ulong)uVar59 >> 0x18) & bVar57 | bVar28;
      bVar29 = (byte)((ulong)uVar59 >> 0x20) & bVar53 | bVar29;
      bVar30 = (byte)((ulong)uVar59 >> 0x28) & bVar55 | bVar30;
      bVar31 = (byte)((ulong)uVar59 >> 0x30) & bVar56 | bVar31;
      bVar32 = (byte)((ulong)uVar59 >> 0x38) & bVar57 | bVar32;
      bVar33 = (byte)uVar61 & bVar53 | bVar33;
      bVar37 = (byte)((ulong)uVar61 >> 8) & bVar55 | bVar37;
      bVar38 = (byte)((ulong)uVar61 >> 0x10) & bVar56 | bVar38;
      bVar39 = (byte)((ulong)uVar61 >> 0x18) & bVar57 | bVar39;
      bVar40 = (byte)((ulong)uVar61 >> 0x20) & bVar53 | bVar40;
      bVar42 = (byte)((ulong)uVar61 >> 0x28) & bVar55 | bVar42;
      bVar43 = (byte)((ulong)uVar61 >> 0x30) & bVar56 | bVar43;
      bVar44 = (byte)((ulong)uVar61 >> 0x38) & bVar57 | bVar44;
      bVar45 = (byte)uVar62 & bVar53 | bVar45;
      bVar46 = (byte)((ulong)uVar62 >> 8) & bVar55 | bVar46;
      bVar47 = (byte)((ulong)uVar62 >> 0x10) & bVar56 | bVar47;
      bVar48 = (byte)((ulong)uVar62 >> 0x18) & bVar57 | bVar48;
      bVar49 = (byte)((ulong)uVar62 >> 0x20) & bVar53 | bVar49;
      bVar50 = (byte)((ulong)uVar62 >> 0x28) & bVar55 | bVar50;
      bVar51 = (byte)((ulong)uVar62 >> 0x30) & bVar56 | bVar51;
      bVar52 = (byte)((ulong)uVar62 >> 0x38) & bVar57 | bVar52;
    } while (uVar13 != 0);
    bVar33 = bVar33 | bVar17;
    bVar37 = bVar37 | bVar18;
    bVar38 = bVar38 | bVar19;
    bVar39 = bVar39 | bVar20;
    bVar40 = bVar40 | bVar21;
    bVar42 = bVar42 | bVar22;
    bVar43 = bVar43 | bVar23;
    bVar44 = bVar44 | bVar24;
    auVar36[1] = bVar37;
    auVar36[0] = bVar33;
    auVar36[2] = bVar38;
    auVar36[3] = bVar39;
    auVar36[4] = bVar40;
    auVar36[5] = bVar42;
    auVar36[6] = bVar43;
    auVar36[7] = bVar44;
    auVar36[8] = bVar45 | bVar25;
    auVar36[9] = bVar46 | bVar26;
    auVar36[10] = bVar47 | bVar27;
    auVar36[0xb] = bVar48 | bVar28;
    auVar36[0xc] = bVar49 | bVar29;
    auVar36[0xd] = bVar50 | bVar30;
    auVar36[0xe] = bVar51 | bVar31;
    auVar36[0xf] = bVar52 | bVar32;
    auVar2[1] = bVar37;
    auVar2[0] = bVar33;
    auVar2[2] = bVar38;
    auVar2[3] = bVar39;
    auVar2[4] = bVar40;
    auVar2[5] = bVar42;
    auVar2[6] = bVar43;
    auVar2[7] = bVar44;
    auVar2[8] = bVar45 | bVar25;
    auVar2[9] = bVar46 | bVar26;
    auVar2[10] = bVar47 | bVar27;
    auVar2[0xb] = bVar48 | bVar28;
    auVar2[0xc] = bVar49 | bVar29;
    auVar2[0xd] = bVar50 | bVar30;
    auVar2[0xe] = bVar51 | bVar31;
    auVar2[0xf] = bVar52 | bVar32;
    auVar36 = NEON_ext(auVar36,auVar2,8,1);
    uVar7 = CONCAT13(bVar39 | auVar36[3],
                     CONCAT12(bVar38 | auVar36[2],CONCAT11(bVar37 | auVar36[1],bVar33 | auVar36[0]))
                    );
    uVar7 = uVar7 | (uint)(CONCAT17(bVar44 | auVar36[7],
                                    CONCAT16(bVar43 | auVar36[6],
                                             CONCAT15(bVar42 | auVar36[5],
                                                      CONCAT14(bVar40 | auVar36[4],uVar7)))) >> 0x20
                          );
    if (uVar4 != uVar11) {
      puVar9 = local_b8 + uVar11;
      goto LAB_004b8694;
    }
  }
  bVar3 = uVar7 != 0;
LAB_004b86b0:
  local_c8[0] = PTR_vtable_0067d5a0 + 0x10;
  if (local_b8 != (uint *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b87ec  rive::Shape::addPath =====

/* rive::Shape::addPath(rive::Path*) */

void __thiscall rive::Shape::addPath(Shape *this,Path *param_1)

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
  
  puVar13 = *(undefined8 **)(this + 0x348);
  if (puVar13 < *(undefined8 **)(this + 0x350)) {
    puVar12 = puVar13 + 1;
    *puVar13 = param_1;
    goto LAB_004b8934;
  }
  puVar9 = *(undefined8 **)(this + 0x340);
  lVar11 = (long)puVar13 - (long)puVar9 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003dc2ec();
LAB_004b8954:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x350) - (long)puVar9;
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
    if (uVar5 >> 0x3d != 0) goto LAB_004b8954;
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
      if (uVar6 == uVar7) goto LAB_004b891c;
    }
    do {
      puVar10 = puVar10 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar10;
    } while (puVar10 != puVar9);
    puVar13 = *(undefined8 **)(this + 0x340);
  }
LAB_004b891c:
  *(undefined8 **)(this + 0x340) = puVar4;
  *(undefined8 **)(this + 0x348) = puVar12;
  *(void **)(this + 0x350) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
LAB_004b8934:
  *(undefined8 **)(this + 0x348) = puVar12;
  return;
}


// ===== 004b8958  rive::Shape::addFlags =====

/* rive::Shape::addFlags(rive::PathFlags) */

void __thiscall rive::Shape::addFlags(Shape *this,byte param_2)

{
  this[0x180] = (Shape)((byte)this[0x180] | param_2);
  return;
}


// ===== 004b8968  rive::Shape::isFlagged =====

/* rive::Shape::isFlagged(rive::PathFlags) const */

bool __thiscall rive::Shape::isFlagged(Shape *this,byte param_2)

{
  undefined8 *puVar1;
  Shape SVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(this + 400);
  SVar2 = this[0x180];
  for (puVar4 = *(undefined8 **)(this + 0x188); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    bVar3 = (**(code **)(*(long *)*puVar4 + 0xd8))();
    SVar2 = (Shape)(bVar3 | (byte)SVar2);
  }
  return ((byte)SVar2 & param_2) != 0;
}


// ===== 004b89c4  rive::Shape::canDeferPathUpdate =====

/* rive::Shape::canDeferPathUpdate() */

undefined8 __thiscall rive::Shape::canDeferPathUpdate(Shape *this)

{
  undefined8 *puVar1;
  Shape SVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (*(float *)(this + 0xe8) != 0.0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(this + 400);
  SVar2 = this[0x180];
  for (puVar7 = *(undefined8 **)(this + 0x188); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    bVar3 = (**(code **)(*(long *)*puVar7 + 0xd8))();
    SVar2 = (Shape)(bVar3 | (byte)SVar2);
  }
  if (((byte)SVar2 & 0x28) == 0) {
    puVar1 = *(undefined8 **)(this + 0x70);
    for (puVar7 = *(undefined8 **)(this + 0x68); puVar7 != puVar1; puVar7 = puVar7 + 1) {
      plVar6 = (long *)*puVar7;
      uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,0x10);
      if (((uVar5 & 1) != 0) && (plVar6[0x37] != 0)) goto LAB_004b8a1c;
    }
    uVar4 = 1;
  }
  else {
LAB_004b8a1c:
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 004b8a7c  rive::Shape::pathChanged =====

/* rive::Shape::pathChanged() */

void __thiscall rive::Shape::pathChanged(Shape *this)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  Component::addDirt((Component *)(this + 0x1a0),0x10,1);
  puVar6 = *(undefined8 **)(this + 0xf8);
  puVar1 = *(undefined8 **)(this + 0x100);
  *(undefined4 *)(this + 0x368) = 0xbf800000;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    plVar5 = (long *)*puVar6;
    if ((*(ushort *)(plVar5 + 0xc) >> 4 & 1) == 0) {
      *(ushort *)(plVar5 + 0xc) = *(ushort *)(plVar5 + 0xc) | 0x10;
      (**(code **)(*plVar5 + 0x70))(plVar5);
      lVar4 = plVar5[0x10];
      uVar2 = *(uint *)(plVar5 + 7);
      *(undefined1 *)(lVar4 + 0xc32) = 1;
      *(ushort *)(lVar4 + 0x60) = *(ushort *)(lVar4 + 0x60) | 4;
      if (uVar2 < *(uint *)(lVar4 + 0xbd4)) {
        *(uint *)(lVar4 + 0xbd4) = uVar2;
      }
    }
  }
  puVar1 = *(undefined8 **)(this + 400);
  for (puVar6 = *(undefined8 **)(this + 0x188); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    plVar5 = (long *)*puVar6;
    uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,0x15);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
  }
  return;
}


// ===== 004b8b70  rive::Shape::addToRenderPath =====

/* rive::Shape::addToRenderPath(rive::RenderPath*, rive::Mat2D const&) */

void __thiscall rive::Shape::addToRenderPath(Shape *this,RenderPath *param_1,Mat2D *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 400);
  uVar5 = (uint)(byte)this[0x180];
  for (puVar6 = *(undefined8 **)(this + 0x188); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar6 + 0xd8))();
    uVar5 = uVar3 | uVar5;
  }
  if ((uVar5 >> 1 & 1) == 0) {
    uVar4 = ShapePaintPath::renderPath
                      ((ShapePaintPath *)(this + 0x288),
                       *(Factory **)(*(long *)(this + 0x40) + 0xbd8));
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x004b8c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x20))(param_1,uVar4,param_2);
      return;
    }
  }
  else {
    uVar4 = ShapePaintPath::renderPath
                      ((ShapePaintPath *)(this + 0x230),
                       *(Factory **)(*(long *)(this + 0x40) + 0xbd8));
    fVar11 = (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
    fVar7 = (float)*(undefined8 *)(this + 0xa8);
    fVar10 = (float)*(undefined8 *)param_2;
    fVar12 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar14 = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20);
    fVar8 = (float)*(undefined8 *)(param_2 + 8);
    fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar13 = (float)*(undefined8 *)(this + 0xb4);
    local_70 = CONCAT44(fVar9 * fVar7 + (float)*(undefined8 *)(this + 0xa4) * fVar12,
                        fVar8 * fVar7 + (float)*(undefined8 *)(this + 0xa4) * fVar10);
    uStack_68 = CONCAT44(fVar9 * (float)*(undefined8 *)(this + 0xb0) + fVar11 * fVar12,
                         fVar8 * (float)*(undefined8 *)(this + 0xb0) + fVar11 * fVar10);
    local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                        fVar9 * fVar14 + fVar12 * fVar13,
                        (float)*(undefined8 *)(param_2 + 0x10) + fVar8 * fVar14 + fVar10 * fVar13);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,uVar4,&local_70);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b8cc4  rive::Shape::addToRawPath =====

/* rive::Shape::addToRawPath(rive::RawPath&, rive::Mat2D const*) */

void __thiscall rive::Shape::addToRawPath(Shape *this,RawPath *param_1,Mat2D *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 400);
  uVar4 = (uint)(byte)this[0x180];
  for (puVar5 = *(undefined8 **)(this + 0x188); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar5 + 0xd8))();
    uVar4 = uVar3 | uVar4;
  }
  if ((uVar4 >> 1 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      RawPath::addPath(param_1,(RawPath *)(this + 0x298),param_2);
      return;
    }
  }
  else {
    if (param_2 == (Mat2D *)0x0) {
      uStack_68 = *(undefined8 *)(this + 0xac);
      local_70 = *(undefined8 *)(this + 0xa4);
      local_60 = *(undefined8 *)(this + 0xb4);
    }
    else {
      fVar10 = (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
      fVar6 = (float)*(undefined8 *)(this + 0xa8);
      fVar9 = (float)*(undefined8 *)param_2;
      fVar11 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar13 = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20);
      fVar7 = (float)*(undefined8 *)(param_2 + 8);
      fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar12 = (float)*(undefined8 *)(this + 0xb4);
      local_70 = CONCAT44(fVar8 * fVar6 + (float)*(undefined8 *)(this + 0xa4) * fVar11,
                          fVar7 * fVar6 + (float)*(undefined8 *)(this + 0xa4) * fVar9);
      uStack_68 = CONCAT44(fVar8 * (float)*(undefined8 *)(this + 0xb0) + fVar10 * fVar11,
                           fVar7 * (float)*(undefined8 *)(this + 0xb0) + fVar10 * fVar9);
      local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                          fVar8 * fVar13 + fVar11 * fVar12,
                          (float)*(undefined8 *)(param_2 + 0x10) + fVar7 * fVar13 + fVar9 * fVar12);
    }
    RawPath::addPath(param_1,(RawPath *)(this + 0x240),(Mat2D *)&local_70);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b8e08  rive::Shape::hitTestAABB =====

/* rive::Shape::hitTestAABB(rive::Vec2D const&) */

bool rive::Shape::hitTestAABB(Vec2D *param_1)

{
  bool bVar1;
  float *in_x1;
  float fVar2;
  float in_s1;
  float in_s2;
  float in_s3;
  float fVar3;
  
  if ((*(uint *)(param_1 + 0x138) >> 4 & 1) == 0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x10;
    (**(code **)(*(long *)param_1 + 0x1d0))();
    fVar2 = (float)computeWorldBounds((Shape *)param_1,(Mat2D *)0x0);
    *(float *)(param_1 + 0x358) = fVar2;
    *(float *)(param_1 + 0x35c) = in_s1;
    *(float *)(param_1 + 0x360) = in_s2;
    *(float *)(param_1 + 0x364) = in_s3;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x358);
    in_s1 = *(float *)(param_1 + 0x35c);
    in_s2 = *(float *)(param_1 + 0x360);
    in_s3 = *(float *)(param_1 + 0x364);
  }
  fVar3 = *in_x1;
  bVar1 = false;
  if (((fVar3 < fVar2 == (NAN(fVar3) || NAN(fVar2))) && (fVar3 <= in_s2)) &&
     (fVar2 = in_x1[1], fVar2 < in_s1 == (NAN(fVar2) || NAN(in_s1)))) {
    bVar1 = fVar2 <= in_s3;
  }
  return bVar1;
}


// ===== 004b8ea0  rive::Shape::isEmpty =====

/* rive::Shape::isEmpty() */

undefined8 __thiscall rive::Shape::isEmpty(Shape *this)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x340);
  plVar3 = *(long **)(this + 0x348);
  while( true ) {
    if (plVar2 == plVar3) {
      return 1;
    }
    if (((*(byte *)(*plVar2 + 0x134) & 1) == 0) &&
       (uVar1 = (**(code **)(*(long *)*plVar2 + 0x80))(), (uVar1 & 1) == 0)) break;
    plVar2 = plVar2 + 1;
  }
  return 0;
}


// ===== 004b8ef8  rive::Shape::pathCollapseChanged =====

/* rive::Shape::pathCollapseChanged() */

void __thiscall rive::Shape::pathCollapseChanged(Shape *this)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(ushort *)(this + 0x200) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x200) = *(ushort *)(this + 0x200) | 0x10;
    (**(code **)(*(long *)(this + 0x1a0) + 0x70))(this + 0x1a0);
    lVar2 = *(long *)(this + 0x220);
    uVar1 = *(uint *)(this + 0x1d8);
    *(undefined1 *)(lVar2 + 0xc32) = 1;
    *(ushort *)(lVar2 + 0x60) = *(ushort *)(lVar2 + 0x60) | 4;
    if (uVar1 < *(uint *)(lVar2 + 0xbd4)) {
      *(uint *)(lVar2 + 0xbd4) = uVar1;
    }
  }
  puVar3 = *(undefined8 **)(this + 0x210);
  for (puVar4 = *(undefined8 **)(this + 0x208); puVar4 != puVar3; puVar4 = puVar4 + 1) {
    Component::addDirt((Component *)*puVar4,0x10,1);
  }
  return;
}


// ===== 004b8f88  rive::Shape::computeLocalBounds =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::Shape::computeLocalBounds() const */

void __thiscall rive::Shape::computeLocalBounds(Shape *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(this + 0xa4);
  fVar4 = *(float *)(this + 0xb0);
  local_30 = 0;
  fVar2 = (float)*(undefined8 *)(this + 0xa8);
  fVar6 = -fVar2;
  uStack_38 = _UNK_00281c00;
  local_40 = _DAT_00281bf8;
  fVar3 = (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  fVar8 = (float)NEON_fmadd(fVar5,fVar4,fVar6 * fVar3);
  if (fVar8 != 0.0) {
    fVar8 = 1.0 / fVar8;
    fVar9 = (float)*(undefined8 *)(this + 0xb4);
    fVar10 = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20);
    uVar7 = NEON_rev64(CONCAT44(fVar10 * -fVar5,fVar9 * -fVar4),4);
    uStack_38 = CONCAT44(fVar5 * fVar8,-fVar3 * fVar8);
    local_40 = CONCAT44(fVar6 * fVar8,fVar4 * fVar8);
    local_30 = NEON_rev64(CONCAT44(fVar8 * ((float)((ulong)uVar7 >> 0x20) + fVar10 * fVar3),
                                   fVar8 * ((float)uVar7 + fVar9 * fVar2)),4);
  }
  computeWorldBounds(this,(Mat2D *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b9054  rive::PathComposer::PathComposer =====

/* rive::PathComposer::PathComposer(rive::Shape*) */

void __thiscall rive::PathComposer::PathComposer(PathComposer *this,Shape *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x60) = 0xfffe;
  *(undefined8 *)(this + 0x78) = 0;
  puVar1 = PTR_vtable_0067d758;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(Shape **)(this + 0x88) = param_1;
  *(undefined **)this = puVar1 + 0x10;
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(this + 0x90),true);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(this + 0xe8),false);
  ShapePaintPath::ShapePaintPath((ShapePaintPath *)(this + 0x140),true);
  this[0x198] = (PathComposer)0x0;
  return;
}


// ===== 004b90d8  FUN_004b90d8 =====

void FUN_004b90d8(void *param_1)

{
  FUN_004b7f58();
  operator_delete(param_1);
  return;
}


// ===== 004b90fc  rive::PathComposer::buildDependencies =====

/* rive::PathComposer::buildDependencies() */

void __thiscall rive::PathComposer::buildDependencies(PathComposer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Component::addDependent(*(Component **)(this + 0x88),(Component *)this);
  puVar2 = *(undefined8 **)(*(long *)(this + 0x88) + 0x348);
  for (puVar1 = *(undefined8 **)(*(long *)(this + 0x88) + 0x340); puVar1 != puVar2;
      puVar1 = puVar1 + 1) {
    Component::addDependent((Component *)*puVar1,(Component *)this);
  }
  return;
}


// ===== 004b9154  rive::PathComposer::onDirty =====

/* rive::PathComposer::onDirty(rive::ComponentDirt) */

void rive::PathComposer::onDirty(long param_1)

{
  if (*(char *)(param_1 + 0x198) != '\0') {
    Shape::pathChanged(*(Shape **)(param_1 + 0x88));
    return;
  }
  return;
}


// ===== 004b9168  rive::PathComposer::update =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::PathComposer::update(rive::ComponentDirt) */

void __thiscall rive::PathComposer::update(PathComposer *this,ulong param_2)

{
  undefined1 (*pauVar1) [12];
  byte bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  Mat2D *pMVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  RawPath *pRVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined8 local_80;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((param_2 & 0x2010) != 0) {
    lVar11 = *(long *)(this + 0x88);
    if (*(float *)(lVar11 + 0xe8) == 0.0) {
      puVar16 = *(undefined8 **)(lVar11 + 400);
      bVar2 = *(byte *)(lVar11 + 0x180);
      for (puVar15 = *(undefined8 **)(lVar11 + 0x188); puVar15 != puVar16; puVar15 = puVar15 + 1) {
        bVar6 = (**(code **)(*(long *)*puVar15 + 0xd8))();
        bVar2 = bVar6 | bVar2;
      }
      if ((bVar2 & 0x28) == 0) {
        puVar16 = *(undefined8 **)(lVar11 + 0x70);
        for (puVar15 = *(undefined8 **)(lVar11 + 0x68); puVar15 != puVar16; puVar15 = puVar15 + 1) {
          plVar12 = (long *)*puVar15;
          uVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,0x10);
          if (((uVar8 & 1) != 0) && (plVar12[0x37] != 0)) goto LAB_004b91ec;
        }
        this[0x198] = (PathComposer)0x1;
        goto LAB_004b9714;
      }
    }
LAB_004b91ec:
    plVar12 = *(long **)(this + 0x88);
    this[0x198] = (PathComposer)0x0;
    puVar15 = (undefined8 *)plVar12[0x32];
    uVar13 = (uint)*(byte *)(plVar12 + 0x30);
    puVar16 = (undefined8 *)plVar12[0x31];
    if ((undefined8 *)plVar12[0x31] != puVar15) {
      do {
        puVar9 = puVar16 + 1;
        uVar7 = (**(code **)(*(long *)*puVar16 + 0xd8))();
        uVar13 = uVar7 | uVar13;
        puVar16 = puVar9;
      } while (puVar9 != puVar15);
      plVar12 = *(long **)(this + 0x88);
    }
    if ((uVar13 >> 1 & 1) != 0) {
      pRVar14 = (RawPath *)(this + 0xa0);
      this[0xd8] = (PathComposer)0x0;
      *(undefined8 *)(this + 0xa8) = *(undefined8 *)pRVar14;
      *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 0xb8);
      this[0x90] = (PathComposer)0x1;
      fVar21 = (float)plVar12[0x15];
      fVar17 = (float)((ulong)plVar12[0x15] >> 0x20);
      fStack_74 = *(float *)((long)plVar12 + 0xa4);
      fVar18 = *(float *)(plVar12 + 0x16);
      fVar20 = -fVar21;
      fVar23 = (float)NEON_fmadd(fStack_74,fVar18,fVar20 * fVar17);
      if (fVar23 == 0.0) {
        uVar22 = 0;
        fStack_78 = (float)_UNK_0024e5b8;
        fStack_74 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
        local_80 = _DAT_0024e5b0;
      }
      else {
        fVar23 = 1.0 / fVar23;
        fVar24 = (float)*(undefined8 *)((long)plVar12 + 0xb4);
        fVar25 = (float)((ulong)*(undefined8 *)((long)plVar12 + 0xb4) >> 0x20);
        uVar22 = NEON_rev64(CONCAT44(fVar25 * -fStack_74,fVar24 * -fVar18),4);
        fStack_78 = -fVar17 * fVar23;
        fStack_74 = fStack_74 * fVar23;
        local_80 = CONCAT44(fVar20 * fVar23,fVar18 * fVar23);
        uVar22 = NEON_rev64(CONCAT44(fVar23 * ((float)((ulong)uVar22 >> 0x20) + fVar25 * fVar17),
                                     fVar23 * ((float)uVar22 + fVar24 * fVar21)),4);
      }
      puVar15 = (undefined8 *)plVar12[0x68];
      puVar16 = (undefined8 *)plVar12[0x69];
      if (puVar15 != puVar16) {
        auVar26._8_4_ = fStack_78;
        auVar26._0_8_ = local_80;
        auVar19._8_4_ = fStack_78;
        auVar19._0_8_ = local_80;
        auVar19._12_4_ = fStack_74;
        auVar26._12_4_ = fStack_74;
        auVar19 = NEON_ext(auVar19,auVar26,8,1);
        do {
          plVar12 = (long *)*puVar15;
          if (((*(byte *)((long)plVar12 + 0x134) & 1) == 0) &&
             (uVar8 = (**(code **)(*plVar12 + 0x80))(plVar12), (uVar8 & 1) == 0)) {
            puVar9 = (undefined8 *)(**(code **)(*plVar12 + 0x1d8))(plVar12);
            pauVar1 = (undefined1 (*) [12])((long)puVar9 + 4);
            fVar21 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
            fVar18 = (float)((ulong)puVar9[2] >> 0x20);
            fVar17 = (float)puVar9[2];
            fVar20 = (float)local_80;
            fVar23 = (float)((ulong)local_80 >> 0x20);
            local_70 = CONCAT44(fStack_74 * SUB124(*pauVar1,0) + (float)*puVar9 * fVar23,
                                fStack_78 * SUB124(*pauVar1,0) + (float)*puVar9 * fVar20);
            uStack_68 = CONCAT44(fStack_74 * SUB124(*pauVar1,8) + fVar21 * fVar23,
                                 fStack_78 * SUB124(*pauVar1,8) + fVar21 * fVar20);
            local_60 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                                auVar19._4_4_ * fVar18 + fVar23 * fVar17,
                                (float)uVar22 + auVar19._0_4_ * fVar18 + fVar20 * fVar17);
            auVar26 = RawPath::addPath(pRVar14,(RawPath *)(plVar12 + 0x2d),(Mat2D *)&local_70);
            RawPath::pruneEmptySegments(pRVar14,auVar26._0_8_,auVar26._8_8_);
            this[0x90] = (PathComposer)0x1;
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar16);
        plVar12 = *(long **)(this + 0x88);
      }
    }
    puVar15 = (undefined8 *)plVar12[0x32];
    uVar13 = (uint)*(byte *)(plVar12 + 0x30);
    puVar16 = (undefined8 *)plVar12[0x31];
    if ((undefined8 *)plVar12[0x31] != puVar15) {
      do {
        puVar9 = puVar16 + 1;
        uVar7 = (**(code **)(*(long *)*puVar16 + 0xd8))();
        uVar13 = uVar7 | uVar13;
        puVar16 = puVar9;
      } while (puVar9 != puVar15);
      plVar12 = *(long **)(this + 0x88);
    }
    if ((uVar13 >> 6 & 1) != 0) {
      this[0x188] = (PathComposer)0x0;
      *(undefined8 *)(this + 0x158) = *(undefined8 *)(this + 0x150);
      *(undefined8 *)(this + 0x170) = *(undefined8 *)(this + 0x168);
      this[0x140] = (PathComposer)0x1;
      fVar21 = (float)plVar12[0x15];
      fVar17 = (float)((ulong)plVar12[0x15] >> 0x20);
      fStack_74 = *(float *)((long)plVar12 + 0xa4);
      fVar18 = *(float *)(plVar12 + 0x16);
      fVar20 = -fVar21;
      fVar23 = (float)NEON_fmadd(fStack_74,fVar18,fVar20 * fVar17);
      if (fVar23 == 0.0) {
        uVar22 = 0;
        fStack_78 = (float)_UNK_0024e5b8;
        fStack_74 = (float)((ulong)_UNK_0024e5b8 >> 0x20);
        local_80 = _DAT_0024e5b0;
      }
      else {
        fVar23 = 1.0 / fVar23;
        fVar24 = (float)*(undefined8 *)((long)plVar12 + 0xb4);
        fVar25 = (float)((ulong)*(undefined8 *)((long)plVar12 + 0xb4) >> 0x20);
        uVar22 = NEON_rev64(CONCAT44(fVar25 * -fStack_74,fVar24 * -fVar18),4);
        fStack_78 = -fVar17 * fVar23;
        fStack_74 = fStack_74 * fVar23;
        local_80 = CONCAT44(fVar20 * fVar23,fVar18 * fVar23);
        uVar22 = NEON_rev64(CONCAT44(fVar23 * ((float)((ulong)uVar22 >> 0x20) + fVar25 * fVar17),
                                     fVar23 * ((float)uVar22 + fVar24 * fVar21)),4);
      }
      puVar15 = (undefined8 *)plVar12[0x68];
      puVar16 = (undefined8 *)plVar12[0x69];
      if (puVar15 != puVar16) {
        auVar5._8_4_ = fStack_78;
        auVar5._0_8_ = local_80;
        auVar4._8_4_ = fStack_78;
        auVar4._0_8_ = local_80;
        auVar4._12_4_ = fStack_74;
        auVar5._12_4_ = fStack_74;
        auVar19 = NEON_ext(auVar4,auVar5,8,1);
        do {
          plVar12 = (long *)*puVar15;
          if (((*(byte *)((long)plVar12 + 0x134) & 1) == 0) &&
             (uVar8 = (**(code **)(*plVar12 + 0x80))(plVar12), (uVar8 & 1) == 0)) {
            puVar9 = (undefined8 *)(**(code **)(*plVar12 + 0x1d8))(plVar12);
            pauVar1 = (undefined1 (*) [12])((long)puVar9 + 4);
            fVar21 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
            fVar18 = (float)((ulong)puVar9[2] >> 0x20);
            fVar17 = (float)puVar9[2];
            fVar20 = (float)local_80;
            fVar23 = (float)((ulong)local_80 >> 0x20);
            local_70 = CONCAT44(fStack_74 * SUB124(*pauVar1,0) + (float)*puVar9 * fVar23,
                                fStack_78 * SUB124(*pauVar1,0) + (float)*puVar9 * fVar20);
            uStack_68 = CONCAT44(fStack_74 * SUB124(*pauVar1,8) + fVar21 * fVar23,
                                 fStack_78 * SUB124(*pauVar1,8) + fVar21 * fVar20);
            local_60 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                                auVar19._4_4_ * fVar18 + fVar23 * fVar17,
                                (float)uVar22 + auVar19._0_4_ * fVar18 + fVar20 * fVar17);
            uVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,0x10);
            if ((uVar8 & 1) == 0) {
              if ((char)plVar12[0x27] == '\0') goto LAB_004b95f8;
LAB_004b94f8:
              auVar26 = RawPath::addPathBackwards
                                  ((RawPath *)(this + 0x150),(RawPath *)(plVar12 + 0x2d),
                                   (Mat2D *)&local_70);
            }
            else {
              fVar21 = (float)NEON_fmadd((undefined4)local_70,uStack_68._4_4_,
                                         -((float)uStack_68 * local_70._4_4_));
              fVar17 = (float)NEON_fnmadd((undefined4)local_70,uStack_68._4_4_,
                                          --((float)uStack_68 * local_70._4_4_));
              if ((*(byte *)((long)plVar12 + 0x134) & 2) != 0) {
                fVar21 = fVar17;
              }
              if (((char)plVar12[0x27] != '\0') != fVar21 < 0.0) goto LAB_004b94f8;
LAB_004b95f8:
              auVar26 = RawPath::addPath((RawPath *)(this + 0x150),(RawPath *)(plVar12 + 0x2d),
                                         (Mat2D *)&local_70);
            }
            RawPath::pruneEmptySegments(this + 0x150,auVar26._0_8_,auVar26._8_8_);
            this[0x140] = (PathComposer)0x1;
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar16);
        plVar12 = *(long **)(this + 0x88);
      }
    }
    puVar15 = (undefined8 *)plVar12[0x32];
    uVar13 = (uint)*(byte *)(plVar12 + 0x30);
    puVar16 = (undefined8 *)plVar12[0x31];
    if ((undefined8 *)plVar12[0x31] != puVar15) {
      do {
        puVar9 = puVar16 + 1;
        uVar7 = (**(code **)(*(long *)*puVar16 + 0xd8))();
        uVar13 = uVar7 | uVar13;
        puVar16 = puVar9;
      } while (puVar9 != puVar15);
      plVar12 = *(long **)(this + 0x88);
    }
    if ((uVar13 >> 2 & 1) != 0) {
      pRVar14 = (RawPath *)(this + 0xf8);
      this[0x130] = (PathComposer)0x0;
      *(undefined8 *)(this + 0x100) = *(undefined8 *)pRVar14;
      *(undefined8 *)(this + 0x118) = *(undefined8 *)(this + 0x110);
      this[0xe8] = (PathComposer)0x1;
      puVar15 = (undefined8 *)plVar12[0x68];
      puVar16 = (undefined8 *)plVar12[0x69];
      if (puVar15 != puVar16) {
        do {
          plVar12 = (long *)*puVar15;
          if (((*(byte *)((long)plVar12 + 0x134) & 1) == 0) &&
             (uVar8 = (**(code **)(*plVar12 + 0x80))(plVar12), (uVar8 & 1) == 0)) {
            pMVar10 = (Mat2D *)(**(code **)(*plVar12 + 0x1d8))(plVar12);
            auVar19 = RawPath::addPath(pRVar14,(RawPath *)(plVar12 + 0x2d),pMVar10);
            RawPath::pruneEmptySegments(pRVar14,auVar19._0_8_,auVar19._8_8_);
            this[0xe8] = (PathComposer)0x1;
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar16);
        plVar12 = *(long **)(this + 0x88);
      }
    }
    uVar13 = *(uint *)(plVar12 + 0x27) & 0xffffffef;
    if (*(uint *)(plVar12 + 0x27) != uVar13) {
      *(uint *)(plVar12 + 0x27) = uVar13;
      (**(code **)(*plVar12 + 0x1d0))(plVar12);
    }
    *(undefined4 *)(plVar12 + 0x6d) = 0xbf800000;
  }
LAB_004b9714:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004b9748  rive::PathComposer::pathCollapseChanged =====

/* rive::PathComposer::pathCollapseChanged() */

void __thiscall rive::PathComposer::pathCollapseChanged(PathComposer *this)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((*(ushort *)(this + 0x60) >> 4 & 1) == 0) {
    *(ushort *)(this + 0x60) = *(ushort *)(this + 0x60) | 0x10;
    (**(code **)(*(long *)this + 0x70))(this);
    lVar3 = *(long *)(this + 0x80);
    uVar2 = *(uint *)(this + 0x38);
    *(undefined1 *)(lVar3 + 0xc32) = 1;
    *(ushort *)(lVar3 + 0x60) = *(ushort *)(lVar3 + 0x60) | 4;
    if (uVar2 < *(uint *)(lVar3 + 0xbd4)) {
      *(uint *)(lVar3 + 0xbd4) = uVar2;
    }
  }
  puVar1 = *(undefined8 **)(this + 0x70);
  for (puVar4 = *(undefined8 **)(this + 0x68); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    Component::addDirt((Component *)*puVar4,0x10,1);
  }
  return;
}


// ===== 004b97d4  rive::PointsCommonPath::isClockwise =====

/* rive::PointsCommonPath::isClockwise() const */

bool __thiscall rive::PointsCommonPath::isClockwise(PointsCommonPath *this)

{
  return ((byte)this[0x134] & 2) == 0;
}


// ===== 004b97e4  rive::HitTestCommandPath::HitTestCommandPath =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::HitTestCommandPath::HitTestCommandPath(rive::TAABB<int> const&) */

void __thiscall
rive::HitTestCommandPath::HitTestCommandPath(HitTestCommandPath *this,TAABB *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_vtable_0067d5a0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined **)this = puVar1 + 0x10;
  uVar3 = _UNK_00281c00;
  uVar2 = _DAT_00281bf8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined8 *)(this + 0x50) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = uVar3;
  *(undefined8 *)(this + 0x68) = uVar2;
  HitTester::reset((HitTester *)(this + 0x10),(TAABB *)(this + 0x68));
  return;
}


// ===== 004b9830  FUN_004b9830 =====

void FUN_004b9830(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = (long)(PTR_vtable_0067d5a0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[3] = (long)pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004b9858  FUN_004b9858 =====

void FUN_004b9858(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = (long)(PTR_vtable_0067d5a0 + 0x10);
  if (pvVar1 != (void *)0x0) {
    param_1[3] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004b989c  rive::HitTestCommandPath::rewind =====

/* rive::HitTestCommandPath::rewind() */

void __thiscall rive::HitTestCommandPath::rewind(HitTestCommandPath *this)

{
  HitTester::reset((HitTester *)(this + 0x10),(TAABB *)(this + 0x68));
  return;
}


// ===== 004b98ac  rive::HitTestCommandPath::fillRule =====

/* rive::HitTestCommandPath::fillRule(rive::FillRule) */

void __thiscall rive::HitTestCommandPath::fillRule(HitTestCommandPath *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x78) = param_2;
  return;
}


// ===== 004b98b4  rive::HitTestCommandPath::addPath =====

/* rive::HitTestCommandPath::addPath(rive::CommandPath*, rive::Mat2D const&) */

void rive::HitTestCommandPath::addPath(CommandPath *param_1,Mat2D *param_2)

{
  return;
}


